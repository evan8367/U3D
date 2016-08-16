using UnityEngine;
using System.Collections;

public class BloodSplatter : MonoBehaviour {

	public float _destroyDuration = 0;

	// Use this for initialization
	void Start () {
		GameObject.Destroy (this.gameObject, _destroyDuration);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
