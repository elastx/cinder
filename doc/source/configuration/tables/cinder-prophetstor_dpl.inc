..
    Warning: Do not edit this file. It is automatically generated from the
    software project's code and your changes will be overwritten.

    The tool to generate this file lives in openstack-doc-tools repository.

    Please make any changes needed in the code, then run the
    autogenerate-config-doc tool from the openstack-doc-tools repository, or
    ask for help on the documentation mailing list, IRC channel or meeting.

.. _cinder-prophetstor_dpl:

.. list-table:: Description of ProphetStor Fibre Channel and iSCSi drivers configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``dpl_pool`` =
     - (String) DPL pool uuid in which DPL volumes are stored.
   * - ``dpl_port`` = ``8357``
     - (Port number) DPL port number.
   * - ``iscsi_port`` = ``3260``
     - (Port number) The port that the iSCSI daemon is listening on
   * - ``san_ip`` =
     - (String) IP address of SAN controller
   * - ``san_login`` = ``admin``
     - (String) Username for SAN controller
   * - ``san_password`` =
     - (String) Password for SAN controller
   * - ``san_thin_provision`` = ``True``
     - (Boolean) Use thin provisioning for SAN volumes?