using UnityEngine;
using System.Collections;

public class TankFiring : MonoBehaviour {

	private Transform _firePosition;
	public GameObject _shellPrefab;
	public KeyCode _keyCode = KeyCode.Space;
	public int _shellSpeed = 10;
	private Rigidbody _rigidbody;

	// Use this for initialization
	void Start () {
		_firePosition = this.transform.Find ("FirePosition");
		_rigidbody = this.GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.Space)) {
			GameObject shell = (GameObject)GameObject.Instantiate(_shellPrefab, _firePosition.position, _firePosition.rotation);
			Rigidbody shellRigid = shell.GetComponent<Rigidbody> ();
			shellRigid.velocity = shell.transform.forward * _shellSpeed;
			shellRigid.angularVelocity = shell.transform.right * _shellSpeed;

			_rigidbody.velocity =  this.transform.forward * -1 * 10;
		}

	
	}
}
