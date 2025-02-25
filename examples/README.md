# 5G-MAG Reference Tools: 5GMS Application Function Example Configurations

This directory contains examples of configurations for the 5GMS Application Function.

## `ContentHostingConfiguration_Big-Buck-Bunny_pull-ingest.json`

This file is used as a content hosting configuration for the rt-5gms-application-function.

It contains a ContentHostingConfiguration, based on 3GPP TS 26.512 Release 17.4.0, which points to a media origin host, suitable for use with pull-ingest, which holds the Big Buck Bunny short animated film in both HLS and DASH media streaming formats.

The distribution side of the configurations tells the rt-5gms-application-function to configure a 5GMS Application Server to reverse proxy the media on its localhost (127.0.0.1) loopback interface. The distribution configuration object is left empty as this is a simple distribution where all fields are generated by the 5GMS Application Function. Note that there needs to be at least one entry in `distributionConfigurations`, even if it is an empty object.

## `ContentHostingConfiguration_Big-Buck-Bunny_pull-ingest_http_and_https.json.tmpl`

This template file is an alternative to `ContentHostingConfiguration_Big-Buck-Bunny_pull-ingest.json` (see above) and can be used to configure a rt-5gms-application-function to provision a 5GMS Application Server which will provide both HTTP and HTTPS distribution points. Before the contents of this file can be used as a configuration `@certificate-id@` must be substituted for a valid certificate id for the provisioning session you wish to add the configuration to.

## `ContentHostingConfiguration_Big-Buck-Bunny_pull-ingest_https.json.tmpl`

This template file is an alternative to `ContentHostingConfiguration_Big-Buck-Bunny_pull-ingest.json` (see above) and can be used to configure a rt-5gms-application-function to provision a 5GMS Application Server which will provide an HTTPS distribution point only. Before the contents of this file can be used as a configuration `@certificate-id@` must be substituted for a valid certificate id for the provisioning session you wish to add the configuration to.

## `ContentHostingConfiguration_Llama-Drama_pull-ingest.json`

This is the same as `ContentHostingConfiguration_Big-Buck-Bunny_pull-ingest.json` except that the media is Llama Drama instead of Big Buck Bunny.

## `ContentHostingConfiguration_Llama-Drama_pull-ingest_http_and_https.json.tmpl`

This is the same as `ContentHostingConfiguration_Big-Buck-Bunny_pull-ingest_http_and_https.json.tmpl` except that the media is Llama Drama instead of Big Buck Bunny.

## `ContentHostingConfiguration_Llama-Drama_pull-ingest_https.json.tmpl`

This is the same as `ContentHostingConfiguration_Big-Buck-Bunny_pull-ingest_https.json.tmpl` except that the media is Llama Drama instead of Big Buck Bunny.

## `ContentHostingConfiguration_AMP-Samples_pull-ingest.json`

This file is a ContentHostingConfiguration for a whole VoD streaming service. The ingest URL points to a top level prefix for all streamed assets and there are no `entryPoint`s defined in the `distributionConfigurations`. This configuration can be used where the media entry points are transferred to the 5GMS Aware Application on the User Equipment via the proprietary interface at reference point M8. It is then up to the 5GMS Aware Application to select a piece of media and, via the interface at reference point M7d, tell the Media Stream Handler to play back the media.

This configuration will configure a single HTTP distribution point for the media.

## `ContentHostingConfiguration_AMP-Samples_pull-ingest_http_and_https.json.tmpl`

This template file is an alternative to `ContentHostingConfiguration_AMP-Samples_pull-ingest.json` and will provide both HTTP and HTTPS distribution points for the media.

Before the contents of this file can be used as a configuration `@certificate-id@` must be substituted for a valid certificate id for the provisioning session you wish to add the configuration to.

## `ContentHostingConfiguration_AMP-Samples_pull-ingest_https.json.tmpl`

This template file is an alternative to `ContentHostingConfiguration_AMP-Samples_pull-ingest.json` that will provide a HTTPS distribution point for the media.

Before the contents of this file can be used as a configuration `@certificate-id@` must be substituted for a valid certificate id for the provisioning session you wish to add the configuration to.

