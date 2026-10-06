/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fb9d04; end: 106fb9d0f;  */

bool FUN_106fb9d04(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 106fb9d10; end: 106fb9d8b;  */

undefined * FUN_106fb9d10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8dd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91838,
                        &UNK_10de1af98,&UNK_10de1afac,2,FUN_106fb9d8c,2);
    do {
      if (puRam00000001136c8dd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8dd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8dd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8dd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8dd8;
}



/* Entry: 106fb9d8c; end: 106fb9d97;  */

bool FUN_106fb9d8c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106fb9d98; end: 106fb9e13;  */

undefined * FUN_106fb9d98(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8de0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91858,
                        &UNK_10de1afb4,&UNK_10de1b00c,5,FUN_106fb9e14,2);
    do {
      if (puRam00000001136c8de0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8de0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8de0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8de0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8de0;
}



/* Entry: 106fb9e14; end: 106fb9e1f;  */

bool FUN_106fb9e14(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106fb9e20; end: 106fb9e87; +[HRMPBMediaTypeAndSize descriptor] */

void FUN_106fb9e20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8de8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50440,
                        &PTR____CFConstantStringClassReference_110e905d8,&PTR_DAT_11319da50,
                        &PTR_DAT_11319dae8,2,0xc,0x1c);
    puRam00000001136c8de8 = puVar1;
  }
  return;
}



/* Entry: 106fb9e88; end: 106fb9eef; +[HRMPBMediaMetadata descriptor] */

void FUN_106fb9e88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8df0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50490,
                        &PTR____CFConstantStringClassReference_110e90298,&PTR_DAT_11319da50,
                        &PTR_s_uuid_11319dba8,3,0x18,0x1c);
    puRam00000001136c8df0 = puVar1;
  }
  return;
}



/* Entry: 106fb9ef0; end: 106fb9f57; +[HRMPBMediaFileTransferRequest descriptor] */

void FUN_106fb9ef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8df8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b504e0,
                        &PTR____CFConstantStringClassReference_110e902b8,&PTR_DAT_11319da50,
                        &PTR_s_uuid_11319dc08,3,0x18,0x1c);
    puRam00000001136c8df8 = puVar1;
  }
  return;
}



/* Entry: 106fb9f58; end: 106fb9fbf; +[HRMPBMediaFileDeletionRequest descriptor] */

void FUN_106fb9f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50530,
                        &PTR____CFConstantStringClassReference_110e905f8,&PTR_DAT_11319da50,
                        &PTR_s_uuid_11319db28,2,0x10,0x1c);
    puRam00000001136c8e00 = puVar1;
  }
  return;
}



/* Entry: 106fb9fc0; end: 106fba027; +[HRMPBMediaFileMarkTransferredRequest descriptor] */

void FUN_106fb9fc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50580,
                        &PTR____CFConstantStringClassReference_110e90618,&PTR_DAT_11319da50,
                        &PTR_s_uuid_11319da68,1,0x10,0x1c);
    puRam00000001136c8e08 = puVar1;
  }
  return;
}



/* Entry: 106fba028; end: 106fba08f; +[HRMPBMediaRequest descriptor] */

void FUN_106fba028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b505d0,
                        &PTR____CFConstantStringClassReference_110e902f8,&PTR_DAT_11319da50,
                        &PTR_DAT_11319dcc8,4,0x20,0x1c);
    puRam00000001136c8e10 = puVar1;
  }
  return;
}



/* Entry: 106fba090; end: 106fba0f7; +[HRMPBMediaData descriptor] */

void FUN_106fba090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50620,
                        &PTR____CFConstantStringClassReference_110db5498,&PTR_DAT_11319da50,
                        &PTR_s_uuid_11319ddc8,5,0x28,0x1c);
    puRam00000001136c8e18 = puVar1;
  }
  return;
}



/* Entry: 106fba0f8; end: 106fba15f; +[HRMPBMediaResponse descriptor] */

void FUN_106fba0f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50670,
                        &PTR____CFConstantStringClassReference_110e90318,&PTR_DAT_11319da50,
                        &PTR_DAT_11319dc68,3,0x20,0x1c);
    puRam00000001136c8e20 = puVar1;
  }
  return;
}



/* Entry: 106fba160; end: 106fba1c7; +[HRMPBGetFileRequest descriptor] */

void FUN_106fba160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b506c0,
                        &PTR____CFConstantStringClassReference_110e90a58,&PTR_DAT_11319da50,
                        &PTR_DAT_11319db68,2,0x18,0x1c);
    puRam00000001136c8e28 = puVar1;
  }
  return;
}



/* Entry: 106fba1c8; end: 106fba22f; +[HRMPBGetFileResponse descriptor] */

void FUN_106fba1c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50710,
                        &PTR____CFConstantStringClassReference_110e90a78,&PTR_DAT_11319da50,
                        &PTR_DAT_11319dd48,4,0x28,0x1c);
    puRam00000001136c8e30 = puVar1;
  }
  return;
}



/* Entry: 106fba230; end: 106fba297; +[HRMPBCancelBackupParams descriptor] */

void FUN_106fba230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50760,
                        &PTR____CFConstantStringClassReference_110e91878,&PTR_DAT_11319da50,
                        &PTR_DAT_11319da88,1,0x10,0x1c);
    puRam00000001136c8e38 = puVar1;
  }
  return;
}



/* Entry: 106fba298; end: 106fba2ff; +[HRMPBCancelBackupResult descriptor] */

void FUN_106fba298(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b507b0,
                        &PTR____CFConstantStringClassReference_110e91898,&PTR_DAT_11319da50,
                        &PTR_s_result_11319daa8,1,4,0x1c);
    puRam00000001136c8e40 = puVar1;
  }
  return;
}



/* Entry: 106fba300; end: 106fba367; +[HRMPBResumeBackupParams descriptor] */

void FUN_106fba300(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50800,
                        &PTR____CFConstantStringClassReference_110e918b8,&PTR_DAT_11319da50,0,0,4,
                        0x1c);
    puRam00000001136c8e48 = puVar1;
  }
  return;
}



/* Entry: 106fba368; end: 106fba44b; +[HRMPBResumeBackupResult descriptor] */

void FUN_106fba368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50850,
                        &PTR____CFConstantStringClassReference_110e918d8,&PTR_DAT_11319da50,
                        &PTR_s_result_11319dac8,1,4,0x1c);
    puRam00000001136c8e50 = puVar1;
  }
  return;
}



/* Entry: 106fba44c; end: 106fba457;  */

bool FUN_106fba44c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fba458; end: 106fba4d3;  */

undefined * FUN_106fba458(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8e60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91918,
                        &UNK_10de1b040,&UNK_10de1b0a8,0xb,FUN_106fba4d4,2);
    do {
      if (puRam00000001136c8e60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8e60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8e60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8e60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8e60;
}



/* Entry: 106fba4d4; end: 106fba4df;  */

bool FUN_106fba4d4(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 106fba4e0; end: 106fba547; +[HRMPBTimeData descriptor] */

void FUN_106fba4e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b508f0,
                        &PTR____CFConstantStringClassReference_110e90ad8,&PTR_DAT_11319de68,
                        &PTR_DAT_11319df00,2,0x18,0x1c);
    puRam00000001136c8e68 = puVar1;
  }
  return;
}



/* Entry: 106fba548; end: 106fba5af; +[HRMPBDroppedFramesData descriptor] */

void FUN_106fba548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50940,
                        &PTR____CFConstantStringClassReference_110e90af8,&PTR_DAT_11319de68,
                        &PTR_DAT_11319df40,2,0xc,0x1c);
    puRam00000001136c8e70 = puVar1;
  }
  return;
}



/* Entry: 106fba5b0; end: 106fba617; +[HRMPBVideoData descriptor] */

void FUN_106fba5b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50990,
                        &PTR____CFConstantStringClassReference_110e90b18,&PTR_DAT_11319de68,
                        &PTR_s_durationMs_11319e200,5,0x18,0x1c);
    puRam00000001136c8e78 = puVar1;
  }
  return;
}



/* Entry: 106fba618; end: 106fba67f; +[HRMPBImageData descriptor] */

void FUN_106fba618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50d78,
                        &PTR____CFConstantStringClassReference_110e90b38,&PTR_DAT_11319de68,
                        &PTR_DAT_11319de80,1,0x10,0x1c);
    puRam00000001136c8e80 = puVar1;
  }
  return;
}



/* Entry: 106fba680; end: 106fba703; +[HRMPBImageData_Burst descriptor] */

undefined * FUN_106fba680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50da0,
                        &PTR____CFConstantStringClassReference_110e90b58,&PTR_DAT_11319de68,
                        &PTR_DAT_11319e100,4,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c8e88 = puVar1;
  }
  return puRam00000001136c8e88;
}



/* Entry: 106fba704; end: 106fba76b; +[HRMPBNordicData descriptor] */

void FUN_106fba704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50a30,
                        &PTR____CFConstantStringClassReference_110e91938,&PTR_DAT_11319de68,
                        &PTR_DAT_11319df80,2,0x10,0x1c);
    puRam00000001136c8e90 = puVar1;
  }
  return;
}



/* Entry: 106fba76c; end: 106fba7d3; +[HRMPBAmbaData descriptor] */

void FUN_106fba76c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8e98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50a80,
                        &PTR____CFConstantStringClassReference_110e91958,&PTR_DAT_11319de68,
                        &PTR_DAT_11319dea0,1,8,0x1c);
    puRam00000001136c8e98 = puVar1;
  }
  return;
}



/* Entry: 106fba7d4; end: 106fba83b; +[HRMPBCameraSensorData descriptor] */

void FUN_106fba7d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ea0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50ad0,
                        &PTR____CFConstantStringClassReference_110e90b78,&PTR_DAT_11319de68,
                        &PTR_DAT_11319e2a0,0xb,0x30,0x1c);
    puRam00000001136c8ea0 = puVar1;
  }
  return;
}



/* Entry: 106fba83c; end: 106fba8a3; +[HRMPBGpsData descriptor] */

void FUN_106fba83c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50b20,
                        &PTR____CFConstantStringClassReference_110e91978,&PTR_DAT_11319de68,
                        &PTR_s_latitude_11319e180,4,0x18,0x1c);
    puRam00000001136c8ea8 = puVar1;
  }
  return;
}



/* Entry: 106fba8a4; end: 106fba90b; +[HRMPBFwVersion descriptor] */

void FUN_106fba8a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8eb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50b70,
                        &PTR____CFConstantStringClassReference_110e91998,&PTR_DAT_11319de68,
                        &PTR_DAT_11319e040,3,0x20,0x1c);
    puRam00000001136c8eb0 = puVar1;
  }
  return;
}



/* Entry: 106fba90c; end: 106fba973; +[HRMPBMultisnap descriptor] */

void FUN_106fba90c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8eb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50bc0,
                        &PTR____CFConstantStringClassReference_110e919b8,&PTR_DAT_11319de68,
                        &PTR_DAT_11319dfc0,2,0x10,0x1c);
    puRam00000001136c8eb8 = puVar1;
  }
  return;
}



/* Entry: 106fba974; end: 106fba9db; +[HRMPBPerformanceData descriptor] */

void FUN_106fba974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ec0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50c10,
                        &PTR____CFConstantStringClassReference_110e919d8,&PTR_DAT_11319de68,
                        &PTR_DAT_11319dec0,1,0x10,0x1c);
    puRam00000001136c8ec0 = puVar1;
  }
  return;
}



/* Entry: 106fba9dc; end: 106fbaa43; +[HRMPBMediaFileMetadata descriptor] */

void FUN_106fba9dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ec8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50c60,
                        &PTR____CFConstantStringClassReference_110e90bd8,&PTR_DAT_11319de68,
                        &PTR_DAT_11319e400,0x14,0x98,0x1c);
    puRam00000001136c8ec8 = puVar1;
  }
  return;
}



/* Entry: 106fbaa44; end: 106fbaaab; +[HRMPBCoulombCtrlData descriptor] */

void FUN_106fbaa44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ed0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50cb0,
                        &PTR____CFConstantStringClassReference_110e919f8,&PTR_DAT_11319de68,
                        &PTR_DAT_11319dee0,1,8,0x1c);
    puRam00000001136c8ed0 = puVar1;
  }
  return;
}



/* Entry: 106fbaaac; end: 106fbab13; +[HRMPBAsset descriptor] */

void FUN_106fbaaac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ed8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50d00,
                        &PTR____CFConstantStringClassReference_110e7e598,&PTR_DAT_11319de68,
                        &PTR_s_id_p_11319e000,2,0x10,0x1c);
    puRam00000001136c8ed8 = puVar1;
  }
  return;
}



/* Entry: 106fbab14; end: 106fbab7b; +[HRMPBGenericAssetsMetadata descriptor] */

void FUN_106fbab14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50d50,
                        &PTR____CFConstantStringClassReference_110e90bf8,&PTR_DAT_11319de68,
                        &PTR_DAT_11319e0a0,3,0x18,0x1c);
    puRam00000001136c8ee0 = puVar1;
  }
  return;
}



/* Entry: 106fbab7c; end: 106fbabe3; +[HRMPBAvailableLensesGetRequest descriptor] */

void FUN_106fbab7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50e40,
                        &PTR____CFConstantStringClassReference_110e91a18,&PTR_DAT_11319e680,
                        &PTR_DAT_11319e698,2,4,0x1c);
    puRam00000001136c8ee8 = puVar1;
  }
  return;
}



/* Entry: 106fbabe4; end: 106fbac4b; +[HRMPBAvailableLensesGetResponse descriptor] */

void FUN_106fbabe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50e90,
                        &PTR____CFConstantStringClassReference_110e91a38,&PTR_DAT_11319e680,
                        &PTR_DAT_11319e6d8,2,0x18,0x1c);
    puRam00000001136c8ef0 = puVar1;
  }
  return;
}



/* Entry: 106fbac4c; end: 106fbad2f; +[HRMPBLens descriptor] */

void FUN_106fbac4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50ee0,
                        &PTR____CFConstantStringClassReference_110dcb5d8,&PTR_DAT_11319e680,
                        &PTR_s_id_p_11319e718,3,0x20,0x1c);
    puRam00000001136c8ef8 = puVar1;
  }
  return;
}



/* Entry: 106fbad30; end: 106fbad3f;  */

bool FUN_106fbad30(int param_1)

{
  return param_1 - 1U < 3;
}



/* Entry: 106fbad40; end: 106fbada7; +[HRMPBSetSettingRequest descriptor] */

void FUN_106fbad40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50f80,
                        &PTR____CFConstantStringClassReference_110e91a78,&PTR_DAT_11319e780,
                        &PTR_DAT_11319e800,2,0x18,0x1c);
    puRam00000001136c8f08 = puVar1;
  }
  return;
}



/* Entry: 106fbada8; end: 106fbae0f; +[HRMPBSetBatchSettingsRequest descriptor] */

void FUN_106fbada8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50fd0,
                        &PTR____CFConstantStringClassReference_110e91a98,&PTR_DAT_11319e780,
                        &PTR_DAT_11319e798,1,0x10,0x1c);
    puRam00000001136c8f10 = puVar1;
  }
  return;
}



/* Entry: 106fbae10; end: 106fbae77; +[HRMPBGetSettingsForCategoryRequest descriptor] */

void FUN_106fbae10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51020,
                        &PTR____CFConstantStringClassReference_110e91ab8,&PTR_DAT_11319e780,
                        0x11319e7d8,1,8,0x1d);
    puRam00000001136c8f18 = puVar1;
  }
  return;
}



/* Entry: 106fbae78; end: 106fbaedf; +[HRMPBGetSettingsForCategoryResponse descriptor] */

void FUN_106fbae78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51070,
                        &PTR____CFConstantStringClassReference_110e91ad8,&PTR_DAT_11319e780,
                        &PTR_DAT_11319e7b8,1,0x10,0x1c);
    puRam00000001136c8f20 = puVar1;
  }
  return;
}



/* Entry: 106fbaee0; end: 106fbaf47; +[HRMPBSetting descriptor] */

void FUN_106fbaee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b510c0,
                        &PTR____CFConstantStringClassReference_110dac818,&PTR_DAT_11319e780,
                        0x11319e900,6,0x30,0x1d);
    puRam00000001136c8f28 = puVar1;
  }
  return;
}



/* Entry: 106fbaf48; end: 106fbafd3; +[HRMPBSettingValue descriptor] */

undefined * FUN_106fbaf48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51110,
                        &PTR____CFConstantStringClassReference_110e91af8,&PTR_DAT_11319e780,
                        &PTR_s_stringValue_11319e880,4,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c8f30 = puVar1;
  }
  return puRam00000001136c8f30;
}



/* Entry: 106fbafd4; end: 106fbb0b7; +[HRMPBSettingOption descriptor] */

void FUN_106fbafd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51160,
                        &PTR____CFConstantStringClassReference_110e91b18,&PTR_DAT_11319e780,
                        &PTR_s_label_11319e840,2,0x18,0x1c);
    puRam00000001136c8f38 = puVar1;
  }
  return;
}



/* Entry: 106fbb0b8; end: 106fbb0c7;  */

bool FUN_106fbb0b8(int param_1)

{
  return param_1 - 1U < 0x13;
}



/* Entry: 106fbb0c8; end: 106fbb143;  */

undefined * FUN_106fbb0c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8f48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91b58,
                        &UNK_10de1b244,&UNK_10de1b268,5,FUN_106fbb144,2);
    do {
      if (puRam00000001136c8f48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8f48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8f48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8f48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8f48;
}



/* Entry: 106fbb144; end: 106fbb14f;  */

bool FUN_106fbb144(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106fbb150; end: 106fbb1cb;  */

undefined * FUN_106fbb150(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8f50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91b78,
                        &UNK_10de1b27c,&UNK_10de1b2b0,4,FUN_106fbb1cc,2);
    do {
      if (puRam00000001136c8f50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8f50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8f50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8f50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8f50;
}



/* Entry: 106fbb1cc; end: 106fbb1db;  */

bool FUN_106fbb1cc(int param_1)

{
  return param_1 - 1U < 4;
}



/* Entry: 106fbb1dc; end: 106fbb257;  */

undefined * FUN_106fbb1dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8f58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91b98,
                        &UNK_10de1b2c0,&UNK_10de1b3b0,0xe,FUN_106fbb258,2);
    do {
      if (puRam00000001136c8f58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8f58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8f58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8f58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8f58;
}



/* Entry: 106fbb258; end: 106fbb267;  */

bool FUN_106fbb258(int param_1)

{
  return param_1 - 1U < 0xe;
}



/* Entry: 106fbb268; end: 106fbb2e3;  */

undefined * FUN_106fbb268(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8f60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91bb8,
                        &UNK_10de1b3e8,&UNK_10de1b478,8,FUN_106fbb2e4,2);
    do {
      if (puRam00000001136c8f60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8f60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8f60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8f60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8f60;
}



/* Entry: 106fbb2e4; end: 106fbb2ef;  */

bool FUN_106fbb2e4(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 106fbb2f0; end: 106fbb36b;  */

undefined * FUN_106fbb2f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8f68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91bd8,
                        &UNK_10de1b498,&UNK_10de1b4c0,2,FUN_106fbb36c,2);
    do {
      if (puRam00000001136c8f68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8f68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8f68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8f68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8f68;
}



/* Entry: 106fbb36c; end: 106fbb37b;  */

bool FUN_106fbb36c(int param_1)

{
  return param_1 - 1U < 2;
}



/* Entry: 106fbb37c; end: 106fbb3f7;  */

undefined * FUN_106fbb37c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8f70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91bf8,
                        &UNK_10de1b4c8,&UNK_10de1b4e8,2,FUN_106fbb3f8,2);
    do {
      if (puRam00000001136c8f70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8f70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8f70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8f70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8f70;
}



/* Entry: 106fbb3f8; end: 106fbb407;  */

bool FUN_106fbb3f8(int param_1)

{
  return param_1 - 1U < 2;
}



/* Entry: 106fbb408; end: 106fbb46f; +[HRMPBSpecsEvent descriptor] */

void FUN_106fbb408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51200,
                        &PTR____CFConstantStringClassReference_110e90838,&PTR_DAT_11319e9f8,
                        0x11319eab0,3,0x10,0x1d);
    puRam00000001136c8f78 = puVar1;
  }
  return;
}



/* Entry: 106fbb470; end: 106fbb4d7; +[HRMPBTaskInfo descriptor] */

void FUN_106fbb470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51250,
                        &PTR____CFConstantStringClassReference_110e90858,&PTR_DAT_11319e9f8,
                        &PTR_DAT_11319eb28,5,0x20,0x1c);
    puRam00000001136c8f80 = puVar1;
  }
  return;
}



/* Entry: 106fbb4d8; end: 106fbb53f; +[HRMPBRTOSHeapInfo descriptor] */

void FUN_106fbb4d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b512a0,
                        &PTR____CFConstantStringClassReference_110e91c18,&PTR_DAT_11319e9f8,
                        &PTR_DAT_11319ea10,2,0xc,0x1c);
    puRam00000001136c8f88 = puVar1;
  }
  return;
}



/* Entry: 106fbb540; end: 106fbb5db; +[HRMPBSpectaclesPushMessage descriptor] */

undefined * FUN_106fbb540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b512f0,
                        &PTR____CFConstantStringClassReference_110e90138,&PTR_DAT_11319e9f8,
                        0x11319ebc8,0x27,0xf8,0x1d);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10de1b4f0);
    puRam00000001136c8f90 = puVar1;
  }
  return puRam00000001136c8f90;
}



/* Entry: 106fbb5dc; end: 106fbb657; +[HRMPBSpectaclesPushMessage_InvalidatedRequest descriptor] */

undefined * FUN_106fbb5dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8f98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51340,
                        &PTR____CFConstantStringClassReference_110e90158,&PTR_DAT_11319e9f8,
                        &PTR_DAT_11319ea50,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c8f98 = puVar1;
  }
  return puRam00000001136c8f98;
}



/* Entry: 106fbb658; end: 106fbb6e3; +[HRMPBNrfFdsEntry descriptor] */

undefined * FUN_106fbb658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8fa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b513e0,
                        &PTR____CFConstantStringClassReference_110e91c38,&PTR_DAT_11319f1e8,
                        &PTR_DAT_11319f200,0x1a,0x88,0x1c);
    func_0x00010c229040();
    puRam00000001136c8fa0 = puVar1;
  }
  return puRam00000001136c8fa0;
}



/* Entry: 106fbb6e4; end: 106fbb75f;  */

undefined * FUN_106fbb6e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8fa8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91c58,
                        &UNK_10de1b4fc,&UNK_10de1b510,3,FUN_106fbb760,2);
    do {
      if (puRam00000001136c8fa8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8fa8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8fa8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8fa8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8fa8;
}



/* Entry: 106fbb760; end: 106fbb76b;  */

bool FUN_106fbb760(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fbb76c; end: 106fbb7fb;  */

undefined * FUN_106fbb76c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8fb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91c78,
                        &UNK_10de1b51c,&UNK_10de1b5cc,0xc,FUN_106fbb7fc,2,&UNK_10de1b5fc);
    do {
      if (puRam00000001136c8fb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8fb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8fb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8fb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8fb0;
}



/* Entry: 106fbb7fc; end: 106fbb813;  */

bool FUN_106fbb7fc(uint param_1)

{
  return param_1 < 0xb || param_1 == 100;
}



/* Entry: 106fbb814; end: 106fbb87b; +[HRMPBButtonEvent descriptor] */

void FUN_106fbb814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8fb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51480,
                        &PTR____CFConstantStringClassReference_110e91c98,&PTR_DAT_11319f540,
                        &PTR_DAT_11319f558,3,0x10,0x1c);
    puRam00000001136c8fb8 = puVar1;
  }
  return;
}



/* Entry: 106fbb87c; end: 106fbb8e3; +[HRMPBUserData descriptor] */

void FUN_106fbb87c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8fc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b514d0,
                        &PTR____CFConstantStringClassReference_110e332f8,&PTR_DAT_11319f540,
                        &PTR_DAT_11319f5b8,7,0x28,0x1c);
    puRam00000001136c8fc0 = puVar1;
  }
  return;
}



/* Entry: 106fbb8e4; end: 106fbb9c7; +[HRMPBShipmodeStatus descriptor] */

void FUN_106fbb8e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8fc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51520,
                        &PTR____CFConstantStringClassReference_110e91cb8,&PTR_DAT_11319f540,
                        &PTR_DAT_11319f698,9,0x30,0x1c);
    puRam00000001136c8fc8 = puVar1;
  }
  return;
}



/* Entry: 106fbb9c8; end: 106fbb9d3;  */

bool FUN_106fbb9c8(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 106fbb9d4; end: 106fbba4f;  */

undefined * FUN_106fbb9d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8fd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91cf8,
                        &UNK_10de1b700,&UNK_10de1b728,2,FUN_106fbba50,2);
    do {
      if (puRam00000001136c8fd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8fd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8fd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8fd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8fd8;
}



/* Entry: 106fbba50; end: 106fbba5b;  */

bool FUN_106fbba50(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106fbba5c; end: 106fbbad7;  */

undefined * FUN_106fbba5c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8fe0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91d18,
                        &UNK_10de1b730,&UNK_10de1b7c4,5,FUN_106fbbad8,2);
    do {
      if (puRam00000001136c8fe0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8fe0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8fe0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8fe0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8fe0;
}



/* Entry: 106fbbad8; end: 106fbbae3;  */

bool FUN_106fbbad8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106fbbae4; end: 106fbbb5f;  */

undefined * FUN_106fbbae4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8fe8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91d38,
                        &UNK_10de1b7d8,&UNK_10de1b808,5,FUN_106fbbb60,2);
    do {
      if (puRam00000001136c8fe8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8fe8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8fe8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8fe8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8fe8;
}



/* Entry: 106fbbb60; end: 106fbbb6b;  */

bool FUN_106fbbb60(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106fbbb6c; end: 106fbbbd3; +[HRMPBImuCalibrationOffsets descriptor] */

void FUN_106fbbb6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b515c0,
                        &PTR____CFConstantStringClassReference_110e91d58,&PTR_DAT_11319f7c0,
                        &PTR_DAT_1131a0198,0xf,0x40,0x1c);
    puRam00000001136c8ff0 = puVar1;
  }
  return;
}



/* Entry: 106fbbbd4; end: 106fbbc3b; +[HRMPBAlsCalibrationFamily descriptor] */

void FUN_106fbbbd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51610,
                        &PTR____CFConstantStringClassReference_110e91d78,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319fd78,9,0x38,0x1c);
    puRam00000001136c8ff8 = puVar1;
  }
  return;
}



/* Entry: 106fbbc3c; end: 106fbbca3; +[HRMPBAlsCalibration descriptor] */

void FUN_106fbbc3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51660,
                        &PTR____CFConstantStringClassReference_110e91d98,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319f858,2,0x18,0x1c);
    puRam00000001136c9000 = puVar1;
  }
  return;
}



/* Entry: 106fbbca4; end: 106fbbd1f; +[HRMPBProxCalibration descriptor] */

undefined * FUN_106fbbca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b516b0,
                        &PTR____CFConstantStringClassReference_110e91db8,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319fe98,0xc,0x34,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9008 = puVar1;
  }
  return puRam00000001136c9008;
}



/* Entry: 106fbbd20; end: 106fbbdab; +[HRMPBCalibInfo descriptor] */

undefined * FUN_106fbbd20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51700,
                        &PTR____CFConstantStringClassReference_110e91dd8,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319fb58,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136c9010 = puVar1;
  }
  return puRam00000001136c9010;
}



/* Entry: 106fbbdac; end: 106fbbe13; +[HRMPBProjectorCalibration descriptor] */

void FUN_106fbbdac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51750,
                        &PTR____CFConstantStringClassReference_110e91df8,&PTR_DAT_11319f7c0,
                        &PTR_DAT_1131a0018,0xc,0x48,0x1c);
    puRam00000001136c9018 = puVar1;
  }
  return;
}



/* Entry: 106fbbe14; end: 106fbbe7b; +[HRMPBDisplayCalibration descriptor] */

void FUN_106fbbe14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b517a0,
                        &PTR____CFConstantStringClassReference_110e91e18,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319f898,2,0x18,0x1c);
    puRam00000001136c9020 = puVar1;
  }
  return;
}



/* Entry: 106fbbe7c; end: 106fbbee3; +[HRMPBCameraCalibration descriptor] */

void FUN_106fbbe7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b517f0,
                        &PTR____CFConstantStringClassReference_110e91e38,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319fc98,7,0x20,0x1c);
    puRam00000001136c9028 = puVar1;
  }
  return;
}



/* Entry: 106fbbee4; end: 106fbbf4b; +[HRMPBStereoCalibration descriptor] */

void FUN_106fbbee4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51840,
                        &PTR____CFConstantStringClassReference_110e91e58,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319f8d8,2,0x18,0x1c);
    puRam00000001136c9030 = puVar1;
  }
  return;
}



/* Entry: 106fbbf4c; end: 106fbbfb3; +[HRMPBBattLearningParams descriptor] */

void FUN_106fbbf4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51890,
                        &PTR____CFConstantStringClassReference_110e91e78,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319fbf8,5,0x18,0x1c);
    puRam00000001136c9038 = puVar1;
  }
  return;
}



/* Entry: 106fbbfb4; end: 106fbc01b; +[HRMPBTelemetryLogDataEvent descriptor] */

void FUN_106fbbfb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b518e0,
                        &PTR____CFConstantStringClassReference_110e91e98,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319f7d8,1,8,0x1c);
    puRam00000001136c9040 = puVar1;
  }
  return;
}



/* Entry: 106fbc01c; end: 106fbc083; +[HRMPBTelemetryLoggerConfigEvent descriptor] */

void FUN_106fbc01c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51db8,
                        &PTR____CFConstantStringClassReference_110e91eb8,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319f7f8,1,0x10,0x1c);
    puRam00000001136c9048 = puVar1;
  }
  return;
}



/* Entry: 106fbc084; end: 106fbc107; +[HRMPBTelemetryLoggerConfigEvent_LoggerConfigData descriptor] */

undefined * FUN_106fbc084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51de0,
                        &PTR____CFConstantStringClassReference_110e91ed8,&PTR_DAT_11319f7c0,
                        &PTR_s_domain_11319f918,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001136c9050 = puVar1;
  }
  return puRam00000001136c9050;
}



/* Entry: 106fbc108; end: 106fbc16f; +[HRMPBBatteryPreservationModeResponse descriptor] */

void FUN_106fbc108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51980,
                        &PTR____CFConstantStringClassReference_110e91ef8,&PTR_DAT_11319f7c0,0,0,4,
                        0x1c);
    puRam00000001136c9058 = puVar1;
  }
  return;
}



/* Entry: 106fbc170; end: 106fbc1d7; +[HRMPBDisplayToggleRequest descriptor] */

void FUN_106fbc170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b519d0,
                        &PTR____CFConstantStringClassReference_110e91f18,&PTR_DAT_11319f7c0,0,0,4,
                        0x1c);
    puRam00000001136c9060 = puVar1;
  }
  return;
}



/* Entry: 106fbc1d8; end: 106fbc23f; +[HRMPBDisplayToggleResponse descriptor] */

void FUN_106fbc1d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51a20,
                        &PTR____CFConstantStringClassReference_110e91f38,&PTR_DAT_11319f7c0,0,0,4,
                        0x1c);
    puRam00000001136c9068 = puVar1;
  }
  return;
}



/* Entry: 106fbc240; end: 106fbc2a7; +[HRMPBBatteryStatus descriptor] */

void FUN_106fbc240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51a70,
                        &PTR____CFConstantStringClassReference_110e91f58,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319f958,2,0x18,0x1c);
    puRam00000001136c9070 = puVar1;
  }
  return;
}



/* Entry: 106fbc2a8; end: 106fbc323; +[HRMPBBatteryStatus_Status descriptor] */

undefined * FUN_106fbc2a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b51ac0,
                        &PTR____CFConstantStringClassReference_110e05018,&PTR_DAT_11319f7c0,
                        &PTR_DAT_11319f818,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001136c9078 = puVar1;
  }
  return puRam00000001136c9078;
}


