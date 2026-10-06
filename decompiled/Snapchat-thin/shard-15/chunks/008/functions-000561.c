/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcc38a0; end: 10bcc38ef;  */

void FUN_10bcc38a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        FUN_10bcc3a94();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bcc38f0; end: 10bcc391b;  */

void FUN_10bcc38f0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10bcc39b4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc391c; end: 10bcc396f; -[SCNShimsSystemScope .cxx_destruct] */

void FUN_10bcc391c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110d995f8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b105a34((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10bcc3970; end: 10bcc39b3; -[SCNShimsSystemScope .cxx_construct] */

undefined8 * FUN_10bcc3970(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10bcc3a94();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10bcc39b4; end: 10bcc3a27;  */

void FUN_10bcc39b4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d995f8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10bcc3a94();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10bcc3a28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc3aa4();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc3a28; end: 10bcc3a93;  */

void FUN_10bcc3a28(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e3060;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10bcc3a94();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b105a34(&uStack_30);
  return;
}



/* Entry: 10bcc3a94; end: 10bcc3aef;  */

void FUN_10bcc3a94(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10bcc3af0; end: 10bcc3b4f;  */

void FUN_10bcc3af0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba6c8;
  _objc_alloc(PTR_PTR_1126ba6c8);
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b1c0(puVar1,param_2,param_1);
  FUN_10bcc3b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcc3b50; end: 10bcc3b5b;  */

void FUN_10bcc3b50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcc3b5c; end: 10bcc3c37; -[SCNShimsBuildIdentifier initWithBinaryName:identifier:] */

undefined1 *
FUN_10bcc3b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e6b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc3c38; end: 10bcc3c3f; -[SCNShimsBuildIdentifier binaryName] */

undefined8 FUN_10bcc3c38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bcc3c40; end: 10bcc3c47; -[SCNShimsBuildIdentifier identifier] */

undefined8 FUN_10bcc3c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bcc3c48; end: 10bcc3c77; -[SCNShimsBuildIdentifier .cxx_destruct] */

void FUN_10bcc3c48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcc3c78; end: 10bcc3d53; -[SCNShimsCOFOverride initWithName:config:] */

undefined1 *
FUN_10bcc3c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e6b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc3d54; end: 10bcc3d5b; -[SCNShimsCOFOverride name] */

undefined8 FUN_10bcc3d54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bcc3d5c; end: 10bcc3d63; -[SCNShimsCOFOverride config] */

undefined8 FUN_10bcc3d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bcc3d64; end: 10bcc3d93; -[SCNShimsCOFOverride .cxx_destruct] */

void FUN_10bcc3d64(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcc3d94; end: 10bcc3e37; -[SCNShimsCOFOverrides initWithOverrides:] */

undefined1 * FUN_10bcc3d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e6c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc3e38; end: 10bcc3e3f; -[SCNShimsCOFOverrides overrides] */

undefined8 FUN_10bcc3e38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bcc3e40; end: 10bcc3e4b; -[SCNShimsCOFOverrides .cxx_destruct] */

void FUN_10bcc3e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcc3e4c; end: 10bcc3f37; -[SCNShimsError initWithErrorDomain:errorCode:errorDescription:] */

undefined1 *
FUN_10bcc3e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270e6c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc3f38; end: 10bcc3f3f; -[SCNShimsError errorDomain] */

undefined8 FUN_10bcc3f38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bcc3f40; end: 10bcc3f47; -[SCNShimsError errorCode] */

undefined8 FUN_10bcc3f40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bcc3f48; end: 10bcc3f4f; -[SCNShimsError errorDescription] */

undefined8 FUN_10bcc3f48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bcc3f50; end: 10bcc3f7f; -[SCNShimsError .cxx_destruct] */

void FUN_10bcc3f50(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcc3f80; end: 10bcc4087; -[SCNShimsErrorDescription initWithCategory:code:message:stacktrace:timestamp:logRequest:] */

undefined1 *
FUN_10bcc3f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_11270e6d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc4088; end: 10bcc408f; -[SCNShimsErrorDescription category] */

undefined8 FUN_10bcc4088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bcc4090; end: 10bcc4097; -[SCNShimsErrorDescription code] */

undefined8 FUN_10bcc4090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bcc4098; end: 10bcc409f; -[SCNShimsErrorDescription message] */

undefined8 FUN_10bcc4098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bcc40a0; end: 10bcc40a7; -[SCNShimsErrorDescription stacktrace] */

undefined8 FUN_10bcc40a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10bcc40a8; end: 10bcc40af; -[SCNShimsErrorDescription timestamp] */

undefined8 FUN_10bcc40a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10bcc40b0; end: 10bcc40b7; -[SCNShimsErrorDescription logRequest] */

undefined1 FUN_10bcc40b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10bcc40b8; end: 10bcc40e7; -[SCNShimsErrorDescription .cxx_destruct] */

void FUN_10bcc40b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10bcc40e8; end: 10bcc4133; -[SCNShimsSchedulerPriorityConfig initWithDefaultThreadCount:niceValue:] */

void FUN_10bcc40e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e6e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}



/* Entry: 10bcc4134; end: 10bcc413b; -[SCNShimsSchedulerPriorityConfig defaultThreadCount] */

undefined4 FUN_10bcc4134(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10bcc413c; end: 10bcc4143; -[SCNShimsSchedulerPriorityConfig niceValue] */

undefined4 FUN_10bcc413c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10bcc4144; end: 10bcc429b; -[SCNShimsSchedulerPriorityMapping initWithInteractive:foreground:favored:background:idle:] */

undefined1 *
FUN_10bcc4144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_11270e6e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc429c; end: 10bcc42a3; -[SCNShimsSchedulerPriorityMapping interactive] */

undefined8 FUN_10bcc429c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bcc42a4; end: 10bcc42ab; -[SCNShimsSchedulerPriorityMapping foreground] */

undefined8 FUN_10bcc42a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bcc42ac; end: 10bcc42b3; -[SCNShimsSchedulerPriorityMapping favored] */

undefined8 FUN_10bcc42ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bcc42b4; end: 10bcc42bb; -[SCNShimsSchedulerPriorityMapping background] */

undefined8 FUN_10bcc42b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bcc42bc; end: 10bcc42c3; -[SCNShimsSchedulerPriorityMapping idle] */

undefined8 FUN_10bcc42bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10bcc42c4; end: 10bcc4307; -[SCNShimsSchedulerPriorityMapping .cxx_destruct] */

void FUN_10bcc42c4(long param_1)

{
  FUN_10bcc4308(param_1 + 0x28);
  FUN_10bcc4308(param_1 + 0x20);
  FUN_10bcc4308(param_1 + 0x18);
  FUN_10bcc4308(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcc4308; end: 10bcc430f;  */

void FUN_10bcc4308(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10bcc4310; end: 10bcc43ef; -[SCNShimsUUID isEqual:] */

undefined8 FUN_10bcc4310(void)

{
  ulong uVar1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c3a3b8();
  _objc_opt_class(PTR_PTR_1126ba6c8);
  uVar1 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain();
    func_0x00010bfe5d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5d80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x20;
    func_0x00010c071cc0(unaff_x20);
    _objc_release(unaff_x19);
    _objc_release(unaff_x20);
    func_0x000107c3a3b4();
  }
  func_0x000107c3a3b4();
  return uVar2;
}



/* Entry: 10bcc43f0; end: 10bcc4473; -[SCNShimsUUID hash] */

ulong FUN_10bcc43f0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010bfe5d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  FUN_10bcc4474();
  func_0x000107c3a3b4();
  return param_1 ^ uVar1;
}



/* Entry: 10bcc4474; end: 10bcc447b;  */

void FUN_10bcc4474(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcc447c; end: 10bcc45b7;  */

void FUN_10bcc447c(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 auStack_48 [24];
  
  if ((*(uint *)(param_1 + 10) & 1) == 0) {
    puVar2 = auStack_48;
    func_0x000107c278b8(puVar2,&DAT_10f2c11ba);
  }
  else {
    lStack_a0 = param_1[9];
    uStack_98 = 0;
    puVar2 = &UNK_10f82f3f4;
    func_0x000107c2793c(&UNK_10f82f3f4);
    func_0x000107c3173c(auStack_48);
  }
  func_0x000107c31338();
  bVar1 = *(byte *)(param_1 + 1);
  (**(code **)(*param_1 + 0x10))(param_1);
  func_0x000107c278b8(&uStack_b8,param_1);
  uVar3 = 3;
  FUN_10bd3f128(&uStack_d0);
  func_0x000107c316c4();
  uStack_68 = uStack_c0;
  lStack_a0 = CONCAT44(lStack_a0._4_4_,2);
  uStack_88 = uStack_b0;
  uStack_90 = uStack_b8;
  uStack_80 = uStack_a8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_70 = uStack_c8;
  uStack_78 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_58 = 1;
  uStack_98 = (ulong)bVar1;
  uStack_60 = uVar3;
  FUN_10bcc46f8(puVar2,&lStack_a0);
  func_0x00010786e114(&lStack_a0);
  func_0x00010bcc46e8();
  func_0x00010bcc46f0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10bcc45b8; end: 10bcc45e7;  */

void FUN_10bcc45b8(undefined8 *param_1)

{
  undefined1 auStack_30 [24];
  undefined1 uStack_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  auStack_30[0] = 0;
  uStack_18 = 0;
  func_0x000107c279c4(auStack_30);
  return;
}



/* Entry: 10bcc45e8; end: 10bcc46d7;  */

void FUN_10bcc45e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c3133c();
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_70 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_60 = param_3[1];
  uStack_68 = *param_3;
  uStack_58 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  auStack_90[0] = 0xe;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  FUN_10bcc46f8();
  func_0x00010786e114(auStack_90);
  func_0x00010bcc46e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  return;
}



/* Entry: 10bcc46d8; end: 10bcc46f7;  */

void FUN_10bcc46d8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcc46dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 10bcc46f8; end: 10bcc4747;  */

void FUN_10bcc46f8(undefined8 param_1,undefined8 param_2)

{
  long *aplStack_30 [2];
  
  FUN_10bcc4748(aplStack_30);
  if (aplStack_30[0] != (long *)0x0) {
    (**(code **)(*aplStack_30[0] + 0x10))(aplStack_30[0],param_2);
  }
  func_0x000107c3a3c4();
  return;
}



/* Entry: 10bcc4748; end: 10bcc479b;  */

void FUN_10bcc4748(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10bcc479c; end: 10bcc47e7;  */

void FUN_10bcc479c(long *param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  FUN_10bcc47e8(&lStack_30);
  lVar1 = 0;
  if (lStack_30 != 0) {
    lVar1 = lStack_30 + 0x40;
  }
  *param_1 = lVar1;
  param_1[1] = lStack_28;
  lStack_30 = 0;
  lStack_28 = 0;
  FUN_10bcc4bbc(&lStack_30);
  return;
}



/* Entry: 10bcc47e8; end: 10bcc480b;  */

void FUN_10bcc47e8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10bcc4a78(&uStack_11,param_1);
  return;
}



/* Entry: 10bcc480c; end: 10bcc48df;  */

undefined8 * FUN_10bcc480c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_34;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_34 = 0;
  puVar4 = param_1;
  func_0x000107c31444();
  FUN_10bcc48e0(&uStack_30,&UNK_10f82f3fd,&uStack_34,puVar4);
  *param_1 = &PTR_DAT_110d9a078;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[7] = lStack_28;
  param_1[6] = uStack_30;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c27c20(&uStack_30);
  *param_1 = &PTR_FUN_110d99630;
  param_1[8] = &PTR_DAT_110d99670;
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[10] = param_2[1];
  param_1[9] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 10bcc48e0; end: 10bcc490b;  */

void FUN_10bcc48e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10bcc4be4(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10bcc490c; end: 10bcc496f;  */

void FUN_10bcc490c(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110d99630;
  param_1[8] = &PTR_DAT_110d99670;
  FUN_10bcccbd4(auStack_30);
  func_0x00010b106068(auStack_30);
  func_0x00010b1059a4(auStack_30);
  func_0x000107c3131c(param_1 + 9);
  FUN_10bcccb8c(param_1);
  return;
}



/* Entry: 10bcc4970; end: 10bcc497b;  */

void FUN_10bcc4970(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110d99630;
  param_1[8] = &PTR_DAT_110d99670;
  FUN_10bcccbd4(auStack_30);
  func_0x00010b106068(auStack_30);
  func_0x00010b1059a4(auStack_30);
  func_0x000107c3131c(param_1 + 9);
  FUN_10bcccb8c(param_1);
  return;
}



/* Entry: 10bcc497c; end: 10bcc498f;  */

void FUN_10bcc497c(void)

{
  FUN_10bcc490c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc4990; end: 10bcc4997;  */

void FUN_10bcc4990(long param_1)

{
  FUN_10bcc490c(param_1 + -0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc4998; end: 10bcc4a1b;  */

void FUN_10bcc4998(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b21be60(auStack_58);
  func_0x00010b21bd60(param_1,auStack_58);
  uStack_28 = *(undefined8 *)(param_2 + 0x50);
  uStack_30 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  func_0x000107c3131c(&uStack_30);
  func_0x00010b21bdac(auStack_58,&uStack_30);
  func_0x00010b21c0c8(auStack_58);
  return;
}



/* Entry: 10bcc4a1c; end: 10bcc4a77;  */

void FUN_10bcc4a1c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lStack_f0;
  undefined1 auStack_e8 [40];
  undefined8 auStack_c0 [5];
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  func_0x00010bcce234();
  func_0x00010b21be60(auStack_c0);
  func_0x00010b21bd60(param_1,auStack_c0);
  plVar2 = *(long **)(param_2 + 0x30);
  lStack_f0 = param_2;
  FUN_10bccccb8(auStack_e8,auStack_c0);
  pcStack_98 = FUN_10bccd248;
  func_0x00010bcce0e4(auStack_90,&lStack_f0);
  (**(code **)(*plVar2 + 0x10))(plVar2,&pcStack_98);
  func_0x00010bcce1a4();
  func_0x00010bcce1f4();
  func_0x00010b21c0c8(auStack_c0);
  func_0x00010bcce1d4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bcce1a4();
  func_0x00010b21c0c8(auStack_e8);
  func_0x00010b1059a4(param_1);
  puVar1 = auStack_c0;
  func_0x00010b21c0c8();
  func_0x00010bcce194();
  FUN_10bccccdc();
  *puVar1 = &PTR_DAT_110cc8530;
  return;
}



/* Entry: 10bcc4a78; end: 10bcc4ae3;  */

undefined1 * FUN_10bcc4a78(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  puVar1 = auStack_40;
  func_0x00010bcc4d4c();
  FUN_10bcc4ae4(auStack_40,1);
  FUN_10bcc4b3c();
  func_0x00010bcc4d1c();
  func_0x00010bcc4bac();
  func_0x00010bcc4d34();
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x00010bcc4bac();
  func_0x00010bcc4d64();
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar2 = puVar1;
  FUN_10bcc4b0c();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10bcc4ae4; end: 10bcc4b0b;  */

long FUN_10bcc4ae4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10bcc4b0c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10bcc4b0c; end: 10bcc4b3b;  */

undefined8 * FUN_10bcc4b0c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x24924924924924a) {
    puVar1 = (undefined8 *)(param_2 * 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d996e8;
  FUN_10bcc480c(param_1 + 3);
  return param_1;
}



/* Entry: 10bcc4b3c; end: 10bcc4b73;  */

undefined8 * FUN_10bcc4b3c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d996e8;
  FUN_10bcc480c(param_1 + 3);
  return param_1;
}



/* Entry: 10bcc4b74; end: 10bcc4b77;  */

void FUN_10bcc4b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d996e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc4b78; end: 10bcc4b8b;  */

void FUN_10bcc4b78(void)

{
  func_0x00010bcc4b9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc4b8c; end: 10bcc4bbb;  */

void FUN_10bcc4b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcc4b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bcc4bbc; end: 10bcc4be3;  */

long FUN_10bcc4bbc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bcc4be4; end: 10bcc4c67;  */

undefined8 *
FUN_10bcc4be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  
  puVar1 = auStack_50;
  func_0x00010bcc4d4c();
  func_0x000107c27c1c(auStack_50,1);
  FUN_10bcc4c68(puStack_40,param_2,param_3,param_4);
  func_0x00010bcc4d1c();
  func_0x000107c27c24();
  func_0x00010bcc4d34();
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  func_0x000107c27c24();
  func_0x00010bcc4d64();
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1107ea880;
  puVar1[1] = 0;
  FUN_10bcc4ca4(puVar1 + 3);
  return puVar1;
}



/* Entry: 10bcc4c68; end: 10bcc4ca3;  */

undefined8 * FUN_10bcc4c68(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107ea880;
  param_1[1] = 0;
  FUN_10bcc4ca4(param_1 + 3);
  return param_1;
}



/* Entry: 10bcc4ca4; end: 10bcc4d13;  */

undefined8
FUN_10bcc4ca4(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c278b8(auStack_48);
  func_0x000107c31460(param_1,auStack_48,*param_3,param_4,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return param_1;
}



/* Entry: 10bcc4d14; end: 10bcc4d7f;  */

void FUN_10bcc4d14(void)

{
  return;
}



/* Entry: 10bcc4d80; end: 10bcc4e3f;  */

void FUN_10bcc4d80(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  int extraout_w10;
  long lStack_60;
  long lStack_58;
  long *aplStack_50 [2];
  long lStack_40;
  long lStack_38;
  undefined4 uStack_24;
  
  uStack_24 = param_5;
  FUN_10bcc4e40(&lStack_40);
  FUN_10bcc4e70(aplStack_50,param_2);
  lStack_58 = lStack_38;
  lStack_60 = lStack_40;
  if (lStack_38 != 0) {
    do {
      func_0x00010bcc5438();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*aplStack_50[0] + 0x10))();
  func_0x00010b21c33c(&lStack_60);
  lVar1 = 0;
  if (lStack_40 != 0) {
    lVar1 = lStack_40 + 0x40;
  }
  *param_1 = lVar1;
  param_1[1] = lStack_38;
  lStack_40 = 0;
  lStack_38 = 0;
  FUN_10bcc4bbc(aplStack_50);
  func_0x00010b21c274(&lStack_40);
  return;
}



/* Entry: 10bcc4e40; end: 10bcc4e6f;  */

void FUN_10bcc4e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_10bcc523c(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10bcc4e70; end: 10bcc4ed3;  */

void FUN_10bcc4e70(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) ||
     (___dynamic_cast(lVar1,&PTR_DAT_110d996c8,&PTR_DAT_110d99690,0x40), lVar1 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar2 = param_2[1];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x00010bcc5438();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10bcc4ed4; end: 10bcc5067;  */

undefined8 *
FUN_10bcc4ed4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  uStack_64 = 0;
  puVar2 = param_1;
  func_0x000107c31444();
  FUN_10bcc48e0(&uStack_60,&UNK_10f82f40f,&uStack_64,puVar2);
  *param_1 = &PTR_DAT_110d9a078;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[7] = lStack_58;
  param_1[6] = uStack_60;
  if (lStack_58 != 0) {
    do {
      func_0x00010bcc5438();
    } while (extraout_w10 != 0);
  }
  func_0x000107c27c20(&uStack_60);
  *param_1 = &PTR_FUN_110d99738;
  param_1[8] = &PTR_DAT_110d99780;
  plVar1 = (long *)*param_2;
  param_1[9] = plVar1;
  lVar3 = param_2[1];
  param_1[10] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010bcc5438();
    } while (extraout_w10_00 != 0);
    plVar1 = (long *)param_1[9];
  }
  (**(code **)(*plVar1 + 0x18))(&uStack_60);
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110d99840;
  puVar2[3] = &PTR_DAT_110d99890;
  func_0x000107c3132c(param_3,&uStack_60);
  FUN_10bcce7b8(param_4);
  uRam0000000113404418 = param_5;
  param_1[0xb] = puVar2 + 3;
  param_1[0xc] = puVar2;
  func_0x000107c3131c(&uStack_60);
  return param_1;
}



/* Entry: 10bcc5068; end: 10bcc50d3;  */

void FUN_10bcc5068(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110d99738;
  param_1[8] = &PTR_DAT_110d99780;
  FUN_10bcccbd4(auStack_30);
  func_0x00010b106068(auStack_30);
  func_0x00010b1059a4(auStack_30);
  FUN_10bcc3210(param_1 + 0xb);
  FUN_10bcc29a0(param_1 + 9);
  FUN_10bcccb8c(param_1);
  return;
}



/* Entry: 10bcc50d4; end: 10bcc50df;  */

void FUN_10bcc50d4(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110d99738;
  param_1[8] = &PTR_DAT_110d99780;
  FUN_10bcccbd4(auStack_30);
  func_0x00010b106068(auStack_30);
  func_0x00010b1059a4(auStack_30);
  FUN_10bcc3210(param_1 + 0xb);
  FUN_10bcc29a0(param_1 + 9);
  FUN_10bcccb8c(param_1);
  return;
}



/* Entry: 10bcc50e0; end: 10bcc50f3;  */

void FUN_10bcc50e0(void)

{
  FUN_10bcc5068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc50f4; end: 10bcc50fb;  */

void FUN_10bcc50f4(long param_1)

{
  FUN_10bcc5068(param_1 + -0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc50fc; end: 10bcc518f;  */

void FUN_10bcc50fc(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b21be60(auStack_58);
  func_0x00010b21bd60(param_1,auStack_58);
  uStack_28 = *(undefined8 *)(param_2 + 0x60);
  uStack_30 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  FUN_10bcc3210(&uStack_30);
  uStack_28 = *(undefined8 *)(param_2 + 0x50);
  uStack_30 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  FUN_10bcc29a0();
  func_0x00010b21bdac(auStack_58,&uStack_30);
  func_0x00010b21c0c8(auStack_58);
  return;
}



/* Entry: 10bcc5190; end: 10bcc523b;  */

void FUN_10bcc5190(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x60);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010bcc5438(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10bcc523c; end: 10bcc5303;  */

undefined1 *
FUN_10bcc523c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [16];
  long lStack_50;
  long lStack_48;
  
  puVar2 = auStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10bcc5304(auStack_60,1);
  FUN_10bcc534c(lStack_50,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010bcc53c8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010bcc53c8(auStack_60);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_10bcc5330();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10bcc5304; end: 10bcc532f;  */

long FUN_10bcc5304(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10bcc5330();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10bcc5330; end: 10bcc534b;  */

undefined8 * FUN_10bcc5330(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x39 == 0) {
    puVar1 = (undefined8 *)(param_2 << 7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d997f0;
  func_0x00010bcc53b0(param_1 + 3);
  return param_1;
}



/* Entry: 10bcc534c; end: 10bcc538f;  */

undefined8 * FUN_10bcc534c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d997f0;
  func_0x00010bcc53b0(param_1 + 3);
  return param_1;
}



/* Entry: 10bcc5390; end: 10bcc5393;  */

void FUN_10bcc5390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d997f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc5394; end: 10bcc53a7;  */

void FUN_10bcc5394(void)

{
  func_0x00010bcc53b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc53a8; end: 10bcc53db;  */

void FUN_10bcc53a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcc5434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bcc53dc; end: 10bcc53ef;  */

void FUN_10bcc53dc(void)

{
  func_0x00010bcc5410();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc53f0; end: 10bcc544f;  */

void FUN_10bcc53f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcc5434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bcc5450; end: 10bcc55d7;  */

long FUN_10bcc5450(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *****pppppuStack_48;
  long lStack_40;
  char cStack_31;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if (param_1[1] == 0) {
      return 0;
    }
    plVar4 = (long *)*param_1;
  }
  else {
    plVar4 = param_1;
    if (*(char *)((long)param_1 + 0x17) == '\0') {
      return 0;
    }
  }
  plVar1 = param_1;
  func_0x000107c3a3dc(param_1,param_2,plVar4);
  if (((ulong)plVar1 & 1) != 0) {
    return 0;
  }
  func_0x00010bcc5948();
  puVar2 = &UNK_10f82f695;
  puStack_30 = (undefined *)plVar1;
  uStack_28 = param_2;
  func_0x000107c2793c();
  func_0x00010bcc58d8();
  func_0x00010bcc58c4();
  func_0x000107c3a3d8();
  func_0x00010bcc5948();
  puVar3 = &UNK_10f82f69c;
  puStack_30 = puVar2;
  uStack_28 = param_2;
  func_0x000107c2793c();
  func_0x00010bcc58d8();
  func_0x00010bcc58c4();
  func_0x000107c3a3d8();
  func_0x00010bcc5948();
  puVar2 = &UNK_10f82f6a3;
  puStack_30 = puVar3;
  uStack_28 = param_2;
  func_0x000107c2793c();
  func_0x00010bcc58d8();
  func_0x00010bcc58c4();
  func_0x000107c3a3d8();
  func_0x00010bcc5948();
  puStack_30 = puVar2;
  uStack_28 = param_2;
  func_0x000107c2793c(&UNK_10f82f6ae);
  func_0x00010bcc58d8();
  func_0x00010bcc58c4();
  func_0x000107c3a3d8();
  func_0x000107c3a3d0(&pppppuStack_48,param_1);
  if (cStack_31 < '\0') {
    if (lStack_40 == 0) goto LAB_10bcc5548;
  }
  else {
    if (cStack_31 == '\0') goto LAB_10bcc5548;
    pppppuStack_48 = &pppppuStack_48;
  }
  _remove(pppppuStack_48);
LAB_10bcc5548:
  plVar4 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar4 = param_1;
  }
  _remove(plVar4);
  func_0x000107c3a3d8();
  return (long)plVar4;
}



/* Entry: 10bcc55d8; end: 10bcc5633;  */

undefined8 * FUN_10bcc55d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d998e8;
  _sqlite3_close(param_1[0x31]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2e);
  func_0x00010bcc5920();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1f);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x14);
  *param_1 = &PTR_FUN_110d99bf0;
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x000107c278a8(param_1 + 8);
  func_0x00010bcc8060(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10bcc5634; end: 10bcc5637;  */

undefined8 * FUN_10bcc5634(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d998e8;
  _sqlite3_close(param_1[0x31]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2e);
  func_0x00010bcc5920();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1f);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x14);
  *param_1 = &PTR_FUN_110d99bf0;
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x000107c278a8(param_1 + 8);
  func_0x00010bcc8060(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10bcc5638; end: 10bcc564b;  */

void FUN_10bcc5638(void)

{
  FUN_10bcc55d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc564c; end: 10bcc5653;  */

void FUN_10bcc564c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_changes_11034cfb0)(*(undefined8 *)(param_1 + 0x188));
  return;
}



/* Entry: 10bcc5654; end: 10bcc56a7;  */

void FUN_10bcc5654(long param_1,undefined8 param_2)

{
  func_0x00010bcc58f8();
  func_0x000107c31364(param_1 + 0x110,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0xa0);
  return;
}


