using UnityEngine;
using System.Collections;

public class TankMoving : MonoBehaviour {

	private Rigidbody _rigidbody;
	public int _speed = 5;
	public int _angularSpeed = 10;
	public int _plyerNumber = 1;
	// Use this for initialization
	void Start () {
		_rigidbody = this.GetComponent<Rigidbody> ();
	}

	void Update () {
		float v = Input.GetAxis ("Vertical Player " + _plyerNumber.ToString());
		float h = Input.GetAxis ("Horizontal Player " + _plyerNumber.ToString());

		_rigidbody.velocity = this.transform.forward * v * _speed;
		_rigidbody.angularVelocity = this.transform.up * h * _angularSpeed;
	}

	// Update is called once per frame
//	void Update () {
//	
//	}
}
