/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107db5068; end: 107db5097; -[SCSpectaclesImuDataSet .cxx_destruct] */

void FUN_107db5068(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107db5098; end: 107db5113;  */

void FUN_107db5098(void)

{
  uRam0000000113727b68 = 0x3fa59b3d07c84b5e;
  uRam0000000113727b60 = 0xbfb573eab367a0f9;
  uRam0000000113727b78 = 0;
  uRam0000000113727b70 = 0x3fefdbf487fcb924;
  uRam0000000113727b88 = 0xbfb63886594af4f1;
  uRam0000000113727b80 = 0x3fefc1bda5119ce0;
  uRam0000000113727b98 = 0;
  uRam0000000113727b90 = 0x3fb652bd3c361134;
  uRam0000000113727ba8 = 0x3fefd97f62b6ae7d;
  uRam0000000113727ba0 = 0x3fb710cb295e9e1b;
  uRam0000000113727bb8 = 0;
  uRam0000000113727bb0 = 0xbfa23a29c779a6b5;
  return;
}



/* Entry: 107db5114; end: 107db518f;  */

undefined * FUN_107db5114(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727c20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdb38,
                        &UNK_10dee6c00,&UNK_10dee6c64,8,FUN_107db5190,2);
    do {
      if (puRam0000000113727c20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727c20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727c20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727c20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727c20;
}



/* Entry: 107db5190; end: 107db519b;  */

bool FUN_107db5190(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 107db519c; end: 107db5217;  */

undefined * FUN_107db519c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727c28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdb58,
                        &UNK_10dee6c84,&UNK_10dee6c94,2,FUN_107db5218,2);
    do {
      if (puRam0000000113727c28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727c28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727c28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727c28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727c28;
}



/* Entry: 107db5218; end: 107db5227;  */

bool FUN_107db5218(int param_1)

{
  return param_1 - 1U < 2;
}



/* Entry: 107db5228; end: 107db52a3; +[VLKGpsData descriptor] */

undefined * FUN_107db5228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b807d0,
                        &PTR____CFConstantStringClassReference_110e91978,0x113245960,
                        &PTR_s_latitude_1132459f8,4,0x18,0x1c);
    func_0x00010c2289e0();
    puRam0000000113727c30 = puVar1;
  }
  return puRam0000000113727c30;
}



/* Entry: 107db52a4; end: 107db531f; +[VLKIMUDataFrame descriptor] */

undefined * FUN_107db52a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80820,
                        &PTR____CFConstantStringClassReference_110ebdb78,0x113245960,
                        &PTR_DAT_113245b18,6,0x1c,0x1c);
    func_0x00010c2289e0();
    puRam0000000113727c38 = puVar1;
  }
  return puRam0000000113727c38;
}



/* Entry: 107db5320; end: 107db539b; +[VLKIMUMetaData descriptor] */

undefined * FUN_107db5320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80870,
                        &PTR____CFConstantStringClassReference_110ebdb98,0x113245960,
                        &PTR_DAT_113245a78,5,0x18,0x1c);
    func_0x00010c2289e0();
    puRam0000000113727c40 = puVar1;
  }
  return puRam0000000113727c40;
}



/* Entry: 107db539c; end: 107db5417; +[VLKIMUDataSet descriptor] */

undefined * FUN_107db539c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b808c0,
                        &PTR____CFConstantStringClassReference_110ebdbb8,0x113245960,
                        &PTR_DAT_113245978,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam0000000113727c48 = puVar1;
  }
  return puRam0000000113727c48;
}



/* Entry: 107db5418; end: 107db547f; +[VLKMultisnap descriptor] */

void FUN_107db5418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80910,
                        &PTR____CFConstantStringClassReference_110e919b8,0x113245960,
                        &PTR_DAT_1132459b8,2,0x10,0x1c);
    puRam0000000113727c50 = puVar1;
  }
  return;
}



/* Entry: 107db5480; end: 107db5577; +[VLKVideoMetadata descriptor] */

undefined * FUN_107db5480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80960,
                        &PTR____CFConstantStringClassReference_110ebdbd8,0x113245960,0x113245bd8,
                        0x23,0xd0,0x1d);
    func_0x00010c2289e0();
    puRam0000000113727c58 = puVar1;
  }
  return puRam0000000113727c58;
}



/* Entry: 107db5578; end: 107db5583;  */

bool FUN_107db5578(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107db5584; end: 107db55eb; +[MLBTimeData descriptor] */

void FUN_107db5584(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80a00,
                        &PTR____CFConstantStringClassReference_110e90ad8,&PTR_DAT_113246150,
                        &PTR_DAT_113246248,2,0x18,0x1c);
    puRam0000000113727c68 = puVar1;
  }
  return;
}



/* Entry: 107db55ec; end: 107db5653; +[MLBDroppedFramesData descriptor] */

void FUN_107db55ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80a50,
                        &PTR____CFConstantStringClassReference_110e90af8,&PTR_DAT_113246150,
                        &PTR_DAT_113246288,2,0xc,0x1c);
    puRam0000000113727c70 = puVar1;
  }
  return;
}



/* Entry: 107db5654; end: 107db56bb; +[MLBVideoData descriptor] */

void FUN_107db5654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80aa0,
                        &PTR____CFConstantStringClassReference_110e90b18,&PTR_DAT_113246150,
                        &PTR_s_durationMs_113246608,5,0x18,0x1c);
    puRam0000000113727c78 = puVar1;
  }
  return;
}



/* Entry: 107db56bc; end: 107db5723; +[MLBImageData descriptor] */

void FUN_107db56bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81018,
                        &PTR____CFConstantStringClassReference_110e90b38,&PTR_DAT_113246150,
                        &PTR_DAT_113246168,1,0x10,0x1c);
    puRam0000000113727c80 = puVar1;
  }
  return;
}



/* Entry: 107db5724; end: 107db57a7; +[MLBImageData_Burst descriptor] */

undefined * FUN_107db5724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81040,
                        &PTR____CFConstantStringClassReference_110e90b58,&PTR_DAT_113246150,
                        &PTR_DAT_113246408,4,0x18,0x1c);
    func_0x00010c228780();
    puRam0000000113727c88 = puVar1;
  }
  return puRam0000000113727c88;
}



/* Entry: 107db57a8; end: 107db580f; +[MLBNordicData descriptor] */

void FUN_107db57a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80b40,
                        &PTR____CFConstantStringClassReference_110e91938,&PTR_DAT_113246150,
                        &PTR_DAT_1132462c8,2,0x10,0x1c);
    puRam0000000113727c90 = puVar1;
  }
  return;
}



/* Entry: 107db5810; end: 107db5877; +[MLBAmbaData descriptor] */

void FUN_107db5810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727c98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80b90,
                        &PTR____CFConstantStringClassReference_110e91958,&PTR_DAT_113246150,
                        &PTR_DAT_113246188,1,8,0x1c);
    puRam0000000113727c98 = puVar1;
  }
  return;
}



/* Entry: 107db5878; end: 107db58df; +[MLBCameraSensorData descriptor] */

void FUN_107db5878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727ca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80be0,
                        &PTR____CFConstantStringClassReference_110e90b78,&PTR_DAT_113246150,
                        &PTR_DAT_113246788,0xb,0x30,0x1c);
    puRam0000000113727ca0 = puVar1;
  }
  return;
}



/* Entry: 107db58e0; end: 107db5947; +[MLBGpsData descriptor] */

void FUN_107db58e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80c30,
                        &PTR____CFConstantStringClassReference_110e91978,&PTR_DAT_113246150,
                        &PTR_s_latitude_113246488,4,0x18,0x1c);
    puRam0000000113727ca8 = puVar1;
  }
  return;
}



/* Entry: 107db5948; end: 107db59af; +[MLBFwVersion descriptor] */

void FUN_107db5948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80c80,
                        &PTR____CFConstantStringClassReference_110e91998,&PTR_DAT_113246150,
                        &PTR_DAT_113246348,3,0x20,0x1c);
    puRam0000000113727cb0 = puVar1;
  }
  return;
}



/* Entry: 107db59b0; end: 107db5a17; +[MLBMultisnap descriptor] */

void FUN_107db59b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80cd0,
                        &PTR____CFConstantStringClassReference_110e919b8,&PTR_DAT_113246150,
                        &PTR_DAT_113246308,2,0x10,0x1c);
    puRam0000000113727cb8 = puVar1;
  }
  return;
}



/* Entry: 107db5a18; end: 107db5a7f; +[MLBPerformanceData descriptor] */

void FUN_107db5a18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80d20,
                        &PTR____CFConstantStringClassReference_110e919d8,&PTR_DAT_113246150,
                        &PTR_DAT_1132461a8,1,0x10,0x1c);
    puRam0000000113727cc0 = puVar1;
  }
  return;
}



/* Entry: 107db5a80; end: 107db5ae7; +[MLBHummingbird descriptor] */

void FUN_107db5a80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80d70,
                        &PTR____CFConstantStringClassReference_110ebdc18,&PTR_DAT_113246150,
                        &PTR_s_sessionId_1132461c8,1,8,0x1c);
    puRam0000000113727cc8 = puVar1;
  }
  return;
}



/* Entry: 107db5ae8; end: 107db5b4f; +[MLBMediaFileMetadata descriptor] */

void FUN_107db5ae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80dc0,
                        &PTR____CFConstantStringClassReference_110e90bd8,&PTR_DAT_113246150,
                        &PTR_DAT_1132468e8,0x14,0x98,0x1c);
    puRam0000000113727cd0 = puVar1;
  }
  return;
}



/* Entry: 107db5b50; end: 107db5bb7; +[MLBIMUDataFrame descriptor] */

void FUN_107db5b50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80e10,
                        &PTR____CFConstantStringClassReference_110ebdb78,&PTR_DAT_113246150,
                        &PTR_DAT_1132466a8,7,0x20,0x1c);
    puRam0000000113727cd8 = puVar1;
  }
  return;
}



/* Entry: 107db5bb8; end: 107db5c1f; +[MLBVideoMetaFrame descriptor] */

void FUN_107db5bb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80e60,
                        &PTR____CFConstantStringClassReference_110ebdc38,&PTR_DAT_113246150,
                        &PTR_DAT_113246508,4,0x18,0x1c);
    puRam0000000113727ce0 = puVar1;
  }
  return;
}



/* Entry: 107db5c20; end: 107db5c87; +[MLBCodecMetaFrame descriptor] */

void FUN_107db5c20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727ce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80eb0,
                        &PTR____CFConstantStringClassReference_110ebdc58,&PTR_DAT_113246150,
                        &PTR_DAT_1132461e8,1,0x10,0x1c);
    puRam0000000113727ce8 = puVar1;
  }
  return;
}



/* Entry: 107db5c88; end: 107db5d03; +[MLBIMUMetaData descriptor] */

undefined * FUN_107db5c88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80f00,
                        &PTR____CFConstantStringClassReference_110ebdb98,&PTR_DAT_113246150,
                        &PTR_s_id_p_1132463a8,3,0x10,0x1c);
    func_0x00010c2289e0();
    puRam0000000113727cf0 = puVar1;
  }
  return puRam0000000113727cf0;
}



/* Entry: 107db5d04; end: 107db5d7f; +[MLBIMUDataSet descriptor] */

undefined * FUN_107db5d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727cf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80f50,
                        &PTR____CFConstantStringClassReference_110ebdbb8,&PTR_DAT_113246150,
                        &PTR_DAT_113246588,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam0000000113727cf8 = puVar1;
  }
  return puRam0000000113727cf8;
}



/* Entry: 107db5d80; end: 107db5dfb; +[MLBIMUDataSetCollection descriptor] */

undefined * FUN_107db5d80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80fa0,
                        &PTR____CFConstantStringClassReference_110ebdc78,&PTR_DAT_113246150,
                        &PTR_DAT_113246208,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam0000000113727d00 = puVar1;
  }
  return puRam0000000113727d00;
}



/* Entry: 107db5dfc; end: 107db5edf; +[MLBCoulombCtrlData descriptor] */

void FUN_107db5dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727d08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80ff0,
                        &PTR____CFConstantStringClassReference_110e919f8,&PTR_DAT_113246150,
                        &PTR_DAT_113246228,1,8,0x1c);
    puRam0000000113727d08 = puVar1;
  }
  return;
}



/* Entry: 107db5ee0; end: 107db5eeb;  */

bool FUN_107db5ee0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 107db5eec; end: 107db5f67;  */

undefined * FUN_107db5eec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdcb8,
                        &UNK_10dee6dc4,&UNK_10dee6e10,5,FUN_107db5f68,2);
    do {
      if (puRam0000000113727d18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d18;
}



/* Entry: 107db5f68; end: 107db5f73;  */

bool FUN_107db5f68(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 107db5f74; end: 107db6003;  */

undefined * FUN_107db5f74(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdcd8,
                        &UNK_10dee6e24,&UNK_10dee6e38,2,FUN_107db6004,2,&UNK_10dee6e40);
    do {
      if (puRam0000000113727d20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d20;
}



/* Entry: 107db6004; end: 107db600f;  */

bool FUN_107db6004(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 107db6010; end: 107db608b;  */

undefined * FUN_107db6010(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdcf8,
                        &UNK_10dee6e4c,&UNK_10dee6e74,5,FUN_107db608c,2);
    do {
      if (puRam0000000113727d28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d28;
}



/* Entry: 107db608c; end: 107db6097;  */

bool FUN_107db608c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 107db6098; end: 107db6113;  */

undefined * FUN_107db6098(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdd18,
                        &UNK_10dee6e88,&UNK_10dee6ea4,4,FUN_107db6114,2);
    do {
      if (puRam0000000113727d30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d30;
}



/* Entry: 107db6114; end: 107db611f;  */

bool FUN_107db6114(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107db6120; end: 107db619b;  */

undefined * FUN_107db6120(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdd38,
                        &UNK_10dee6eb4,&UNK_10dee6f34,0xc,FUN_107db619c,2);
    do {
      if (puRam0000000113727d38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d38;
}



/* Entry: 107db619c; end: 107db61a7;  */

bool FUN_107db619c(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 107db61a8; end: 107db6237;  */

undefined * FUN_107db61a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdd58,
                        &UNK_10dee6f64,&UNK_10dee6fec,9,FUN_107db6238,2,&UNK_10dee7010);
    do {
      if (puRam0000000113727d40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d40;
}



/* Entry: 107db6238; end: 107db6243;  */

bool FUN_107db6238(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 107db6244; end: 107db62bf;  */

undefined * FUN_107db6244(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdd78,
                        &UNK_10dee702b,&UNK_10dee7054,3,FUN_107db62c0,2);
    do {
      if (puRam0000000113727d48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d48;
}



/* Entry: 107db62c0; end: 107db62cb;  */

bool FUN_107db62c0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107db62cc; end: 107db635b;  */

undefined * FUN_107db62cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdd98,
                        &UNK_10dee7060,&UNK_10dee709c,4,FUN_107db635c,2,&UNK_10dee70ac);
    do {
      if (puRam0000000113727d50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d50;
}



/* Entry: 107db635c; end: 107db6367;  */

bool FUN_107db635c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107db6368; end: 107db63e3;  */

undefined * FUN_107db6368(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebddb8,
                        &UNK_10dee70ba,&UNK_10dee70d0,3,FUN_107db63e4,2);
    do {
      if (puRam0000000113727d58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d58;
}



/* Entry: 107db63e4; end: 107db63ef;  */

bool FUN_107db63e4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107db63f0; end: 107db646b;  */

undefined * FUN_107db63f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebddd8,
                        &UNK_10dee70dc,&UNK_10dee7114,3,FUN_107db646c,2);
    do {
      if (puRam0000000113727d60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d60;
}



/* Entry: 107db646c; end: 107db6477;  */

bool FUN_107db646c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107db6478; end: 107db6507;  */

undefined * FUN_107db6478(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebddf8,
                        &UNK_10dee7120,&UNK_10dee713c,5,FUN_107db6508,2,&UNK_10dee7150);
    do {
      if (puRam0000000113727d68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d68;
}



/* Entry: 107db6508; end: 107db6513;  */

bool FUN_107db6508(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 107db6514; end: 107db65a3;  */

undefined * FUN_107db6514(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebde18,
                        &UNK_10dee7155,&UNK_10dee7174,2,FUN_107db65a4,2,&UNK_10dee717c);
    do {
      if (puRam0000000113727d70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d70;
}



/* Entry: 107db65a4; end: 107db65af;  */

bool FUN_107db65a4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 107db65b0; end: 107db662b;  */

undefined * FUN_107db65b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebde38,
                        &UNK_10dee7185,&UNK_10dee71b4,4,FUN_107db662c,2);
    do {
      if (puRam0000000113727d78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d78;
}



/* Entry: 107db662c; end: 107db6637;  */

bool FUN_107db662c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107db6638; end: 107db66b3;  */

undefined * FUN_107db6638(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebde58,
                        &UNK_10dee71c4,&UNK_10dee71f4,4,FUN_107db66b4,2);
    do {
      if (puRam0000000113727d80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d80;
}



/* Entry: 107db66b4; end: 107db66bf;  */

bool FUN_107db66b4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107db66c0; end: 107db674f;  */

undefined * FUN_107db66c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebde78,
                        &UNK_10dee7204,&UNK_10dee7240,4,FUN_107db6750,2,&UNK_10dee7250);
    do {
      if (puRam0000000113727d88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d88;
}



/* Entry: 107db6750; end: 107db675b;  */

bool FUN_107db6750(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107db675c; end: 107db67eb;  */

undefined * FUN_107db675c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebde98,
                        &UNK_10dee725e,&UNK_10dee72ac,4,FUN_107db67ec,2,&UNK_10dee72bc);
    do {
      if (puRam0000000113727d90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d90;
}



/* Entry: 107db67ec; end: 107db67f7;  */

bool FUN_107db67ec(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107db67f8; end: 107db6873;  */

undefined * FUN_107db67f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727d98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdeb8,
                        &UNK_10dee72ca,&UNK_10dee7304,5,FUN_107db6874,2);
    do {
      if (puRam0000000113727d98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727d98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727d98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727d98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727d98;
}



/* Entry: 107db6874; end: 107db687f;  */

bool FUN_107db6874(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 107db6880; end: 107db690f;  */

undefined * FUN_107db6880(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727da0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebded8,
                        &UNK_10dee7318,&UNK_10dee734c,3,FUN_107db6910,2,&UNK_10dee7358);
    do {
      if (puRam0000000113727da0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727da0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727da0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727da0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727da0;
}



/* Entry: 107db6910; end: 107db691b;  */

bool FUN_107db6910(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107db691c; end: 107db69ab;  */

undefined * FUN_107db691c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727da8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdef8,
                        &UNK_10dee7363,&UNK_10dee7418,10,FUN_107db69ac,2,&UNK_10dee7440);
    do {
      if (puRam0000000113727da8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727da8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727da8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727da8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727da8;
}



/* Entry: 107db69ac; end: 107db69b7;  */

bool FUN_107db69ac(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 107db69b8; end: 107db6a47;  */

undefined * FUN_107db69b8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727db0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdf18,
                        &UNK_10dee7460,&UNK_10dee7480,2,FUN_107db6a48,2,&UNK_10dee7500);
    do {
      if (puRam0000000113727db0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727db0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727db0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727db0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727db0;
}



/* Entry: 107db6a48; end: 107db6a53;  */

bool FUN_107db6a48(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 107db6a54; end: 107db6acf;  */

undefined * FUN_107db6a54(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727db8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebdf38,
                        &UNK_10dee7488,&UNK_10dee74bc,4,FUN_107db6ad0,2);
    do {
      if (puRam0000000113727db8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727db8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727db8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727db8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727db8;
}



/* Entry: 107db6ad0; end: 107db6adb;  */

bool FUN_107db6ad0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107db6adc; end: 107db6b43; +[MLBBatteryStatusResponse descriptor] */

void FUN_107db6adc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727dc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b810e0,
                        &PTR____CFConstantStringClassReference_110e910f8,&PTR_DAT_113246b68,
                        &PTR_DAT_113247580,6,0x1c,0x1c);
    puRam0000000113727dc0 = puVar1;
  }
  return;
}



/* Entry: 107db6b44; end: 107db6bab; +[MLBMediaCountsMessage descriptor] */

void FUN_107db6b44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727dc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81130,
                        &PTR____CFConstantStringClassReference_110e910b8,&PTR_DAT_113246b68,
                        &PTR_DAT_113246d20,2,0xc,0x1c);
    puRam0000000113727dc8 = puVar1;
  }
  return;
}



/* Entry: 107db6bac; end: 107db6c13; +[MLBUserMediaCountsMessage descriptor] */

void FUN_107db6bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727dd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81180,
                        &PTR____CFConstantStringClassReference_110e93458,&PTR_DAT_113246b68,
                        &PTR_s_user_113246d60,2,0x18,0x1c);
    puRam0000000113727dd0 = puVar1;
  }
  return;
}



/* Entry: 107db6c14; end: 107db6c7b; +[MLBBluetoothParams descriptor] */

void FUN_107db6c14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727dd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b811d0,
                        &PTR____CFConstantStringClassReference_110ebdf58,&PTR_DAT_113246b68,
                        &PTR_DAT_1132474e0,5,0x20,0x1c);
    puRam0000000113727dd8 = puVar1;
  }
  return;
}



/* Entry: 107db6c7c; end: 107db6ce3; +[MLBWifiParams descriptor] */

void FUN_107db6c7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727de0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81220,
                        &PTR____CFConstantStringClassReference_110e910d8,&PTR_DAT_113246b68,
                        &PTR_DAT_113247640,6,0x28,0x1c);
    puRam0000000113727de0 = puVar1;
  }
  return;
}



/* Entry: 107db6ce4; end: 107db6d4b; +[MLBWifiAPInfo descriptor] */

void FUN_107db6ce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727de8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81270,
                        &PTR____CFConstantStringClassReference_110e93478,&PTR_DAT_113246b68,
                        &PTR_DAT_113246f20,3,0x18,0x1c);
    puRam0000000113727de8 = puVar1;
  }
  return;
}



/* Entry: 107db6d4c; end: 107db6db3; +[MLBWifiAPList descriptor] */

void FUN_107db6d4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727df0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b812c0,
                        &PTR____CFConstantStringClassReference_110e93498,&PTR_DAT_113246b68,
                        &PTR_DAT_113246b80,1,0x10,0x1c);
    puRam0000000113727df0 = puVar1;
  }
  return;
}



/* Entry: 107db6db4; end: 107db6e1b; +[MLBUploadToCloudStatusInfo descriptor] */

void FUN_107db6db4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727df8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81310,
                        &PTR____CFConstantStringClassReference_110ebdf78,&PTR_DAT_113246b68,
                        &PTR_s_status_113246ba0,1,8,0x1c);
    puRam0000000113727df8 = puVar1;
  }
  return;
}



/* Entry: 107db6e1c; end: 107db6e83; +[MLBEmpty descriptor] */

void FUN_107db6e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81360,
                        &PTR____CFConstantStringClassReference_110e19978,&PTR_DAT_113246b68,0,0,4,
                        0x1c);
    puRam0000000113727e00 = puVar1;
  }
  return;
}



/* Entry: 107db6e84; end: 107db6eeb; +[MLBAmbaGpioReadRequest descriptor] */

void FUN_107db6e84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b813b0,
                        &PTR____CFConstantStringClassReference_110ebdf98,&PTR_DAT_113246b68,
                        &PTR_DAT_113246bc0,1,8,0x1c);
    puRam0000000113727e08 = puVar1;
  }
  return;
}



/* Entry: 107db6eec; end: 107db6f53; +[MLBAmbaGpioSetRequest descriptor] */

void FUN_107db6eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81400,
                        &PTR____CFConstantStringClassReference_110ebdfb8,&PTR_DAT_113246b68,
                        &PTR_DAT_113246da0,2,0xc,0x1c);
    puRam0000000113727e10 = puVar1;
  }
  return;
}



/* Entry: 107db6f54; end: 107db6fbb; +[MLBAmbaAuthChipTestRequest descriptor] */

void FUN_107db6f54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81450,
                        &PTR____CFConstantStringClassReference_110ebdfd8,&PTR_DAT_113246b68,
                        &PTR_DAT_113246be0,1,8,0x1c);
    puRam0000000113727e18 = puVar1;
  }
  return;
}



/* Entry: 107db6fbc; end: 107db7023; +[MLBGitResponse descriptor] */

void FUN_107db6fbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b814a0,
                        &PTR____CFConstantStringClassReference_110e91078,&PTR_DAT_113246b68,
                        &PTR_DAT_113247700,6,0x30,0x1c);
    puRam0000000113727e20 = puVar1;
  }
  return;
}



/* Entry: 107db7024; end: 107db708b; +[MLBTestResult descriptor] */

void FUN_107db7024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b814f0,
                        &PTR____CFConstantStringClassReference_110ebdff8,&PTR_DAT_113246b68,
                        &PTR_DAT_113246de0,2,8,0x1c);
    puRam0000000113727e28 = puVar1;
  }
  return;
}



/* Entry: 107db708c; end: 107db70f3; +[MLBGpioReadResponse descriptor] */

void FUN_107db708c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81540,
                        &PTR____CFConstantStringClassReference_110ebe018,&PTR_DAT_113246b68,
                        &PTR_DAT_113246c00,1,8,0x1c);
    puRam0000000113727e30 = puVar1;
  }
  return;
}



/* Entry: 107db70f4; end: 107db715b; +[MLBBoolMessage descriptor] */

void FUN_107db70f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81590,
                        &PTR____CFConstantStringClassReference_110e93578,&PTR_DAT_113246b68,
                        &PTR_DAT_113246c20,1,4,0x1c);
    puRam0000000113727e38 = puVar1;
  }
  return;
}



/* Entry: 107db715c; end: 107db71c3; +[MLBWifiUpdate descriptor] */

void FUN_107db715c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b815e0,
                        &PTR____CFConstantStringClassReference_110ebe038,&PTR_DAT_113246b68,
                        &PTR_DAT_113246f80,3,0x18,0x1c);
    puRam0000000113727e40 = puVar1;
  }
  return;
}



/* Entry: 107db71c4; end: 107db722b; +[MLBBluetoothUpdate descriptor] */

void FUN_107db71c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81630,
                        &PTR____CFConstantStringClassReference_110ebe058,&PTR_DAT_113246b68,
                        &PTR_DAT_113246c40,1,8,0x1c);
    puRam0000000113727e48 = puVar1;
  }
  return;
}



/* Entry: 107db722c; end: 107db7293; +[MLBSystemCounters descriptor] */

void FUN_107db722c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81680,
                        &PTR____CFConstantStringClassReference_110e93598,&PTR_DAT_113246b68,
                        &PTR_DAT_113246fe0,3,0x10,0x1c);
    puRam0000000113727e50 = puVar1;
  }
  return;
}



/* Entry: 107db7294; end: 107db72fb; +[MLBAppCrashReport descriptor] */

void FUN_107db7294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b816d0,
                        &PTR____CFConstantStringClassReference_110e935b8,&PTR_DAT_113246b68,
                        &PTR_DAT_1132472e0,4,0x20,0x1c);
    puRam0000000113727e58 = puVar1;
  }
  return;
}



/* Entry: 107db72fc; end: 107db7367; +[MLBHardFaultReport descriptor] */

void FUN_107db72fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81720,
                        &PTR____CFConstantStringClassReference_110e935d8,&PTR_DAT_113246b68,
                        &PTR_DAT_113247e40,8,0x24,0x1c);
    puRam0000000113727e60 = puVar1;
  }
  return;
}



/* Entry: 107db7368; end: 107db73cf; +[MLBSoftDeviceCrashReport descriptor] */

void FUN_107db7368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b81770,
                        &PTR____CFConstantStringClassReference_110e935f8,&PTR_DAT_113246b68,
                        &PTR_DAT_113247040,3,0x10,0x1c);
    puRam0000000113727e68 = puVar1;
  }
  return;
}



/* Entry: 107db73d0; end: 107db743b; +[MLBWatchdogCrashReport descriptor] */

void FUN_107db73d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727e70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b817c0,
                        &PTR____CFConstantStringClassReference_110e93618,&PTR_DAT_113246b68,
                        &PTR_DAT_113247f40,8,0x24,0x1c);
    puRam0000000113727e70 = puVar1;
  }
  return;
}


