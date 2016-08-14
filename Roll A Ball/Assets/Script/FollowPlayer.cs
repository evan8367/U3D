using UnityEngine;
using System.Collections;

public class FollowPlayer : MonoBehaviour {

	public Transform _playerTransform;
	private Vector3 _offset;
	// Use this for initialization
	void Start () {
		_offset = this.transform.position - _playerTransform.position;
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.position = _playerTransform.position + _offset;
	}
}
