using UnityEngine;
using System.Collections;

public class FollowTarget : MonoBehaviour {

	public Transform _tank1;
	public Transform _tank2;
	private Camera _camera;
	private Vector3 _offset;

	private float _distance;
	private float _cameraSize;
	// Use this for initialization
	void Start () {
		_camera = this.GetComponent<Camera> ();
		_offset = this.transform.position - (_tank1.position + _tank2.position) / 2;
	}
	
	// Update is called once per frame
	void Update () {
		if (!_tank1 || !_tank2)
			return;
		
		this.transform.position = (_tank1.position + _tank2.position) / 2 + _offset;

		_distance = Vector3.Distance(_tank1.position, _tank2.position);

		_cameraSize = _distance * 1;

		_camera.orthographicSize = _cameraSize;
	}
}
