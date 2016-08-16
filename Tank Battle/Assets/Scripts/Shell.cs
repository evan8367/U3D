using UnityEngine;
using System.Collections;

public class Shell : MonoBehaviour {

	public GameObject _boom;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void OnCollisionEnter(Collision collision) {
		GameObject.Instantiate (_boom, this.transform.position, this.transform.rotation);
		GameObject.Destroy (this.gameObject);

		if (collision.collider.tag == "Tank") {
			collision.collider.SendMessage (@"TakeDamage");
		}
	}
}
