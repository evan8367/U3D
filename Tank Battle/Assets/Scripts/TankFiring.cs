using UnityEngine;
using System.Collections;

public class TankFiring : MonoBehaviour {

	private Transform _firePosition;
	public GameObject _shellPrefab;
	public KeyCode _keyCode = KeyCode.Space;
	public int _shellSpeed = 10;
	private Rigidbody _rigidbody;
	public int _plyerNumber = 1;

	// Use this for initialization
	void Start () {
		_firePosition = this.transform.Find ("FirePosition");
	}
	
	// Update is called once per frame
	void Update () {
		
		if (Input.GetKeyDown (_keyCode)) {
			GameObject shell = (GameObject)GameObject.Instantiate(_shellPrefab, _firePosition.position, _firePosition.rotation);
			Rigidbody shellRigid = shell.GetComponent<Rigidbody> ();
			shellRigid.velocity = shell.transform.forward * _shellSpeed;
			shellRigid.angularVelocity = shell.transform.right * _shellSpeed;
		}
	
	}
}
