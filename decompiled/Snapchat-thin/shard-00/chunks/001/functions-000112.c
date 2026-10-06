/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002b3ea0; end: 1002b3ebf;  */

void FUN_1002b3ea0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a94a0);
  return;
}



/* Entry: 1002b3ec0; end: 1002b3ec3;  */

void FUN_1002b3ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1002b3ec4; end: 1002b3edb; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger trackSnapAirSuccessWithStage:reportType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1002b3ec4(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + _DAT_112d9d660);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  if (lVar1 != 0) {
    plVar4 = *(long **)(lVar1 + 8);
    func_0x000107c61174(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_4;
      func_0x000107c61178(param_4);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_4);
    FUN_10002b838(auStack_78,pcVar2);
    func_0x000107c61174(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      func_0x000107c61178(param_3);
      pcVar2 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_60,pcVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108726d0,&uStack_98,1);
    puStack_80 = &uStack_98;
    FUN_10007e5dc(&puStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  func_0x000107c61170(param_3);
  pcVar3 = param_4;
  func_0x000107c61170(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar5._8_8_ = pcVar2;
    auVar5._0_8_ = pcVar3;
    return auVar5;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c60bd8(pcVar3);
  return ZEXT816(0x1107111d0);
}



/* Entry: 1002b3edc; end: 1002b410b;  */

undefined1  [16] FUN_1002b3edc(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_78,pcVar1);
    func_0x000107c61174(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_3);
      pcVar1 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108726d0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    FUN_10007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  func_0x000107c61170(param_3);
  pcVar2 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar5._8_8_ = pcVar1;
    auVar5._0_8_ = pcVar2;
    return auVar5;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(pcVar2);
  return ZEXT816(0x1107111d0);
}



/* Entry: 1002b410c; end: 1002b411b;  */

undefined1  [16] FUN_1002b410c(void)

{
  return ZEXT816(0x1107111d0);
}



/* Entry: 1002b411c; end: 1002b4183; +[Metadata descriptor] */

void FUN_1002b411c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9900,
                        &PTR____CFConstantStringClassReference_110dae2d8,&PTR_DAT_1133f9210,
                        &PTR_DAT_1133f9228,0x11,0x90,0x1c);
    puRam00000001137fbce0 = puVar1;
  }
  return;
}



/* Entry: 1002b4184; end: 1002b4307;  */

void FUN_1002b4184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fe6fe8,&UNK_10dc4e0d0);
  puVar1 = &UNK_1106cbbd0;
  func_0x000107c613fc(&UNK_1106cbbd0,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_14;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_12;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_10;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_11;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_17;
  *(undefined8 *)(puVar1 + 0x60) = param_7;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_16;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_2;
  *(undefined8 *)(puVar1 + 0x88) = param_4;
  *(undefined8 *)(puVar1 + 0x90) = param_1;
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100724428,puVar1);
  return;
}



/* Entry: 1002b4308; end: 1002b43cf;  */

void FUN_1002b4308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0c0a8,&UNK_10d9e5b90);
  puVar1 = &UNK_11045db38;
  func_0x000107c613fc(&UNK_11045db38,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101c57758,puVar1);
  return;
}



/* Entry: 1002b43d0; end: 1002b43d3;  */

void FUN_1002b43d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002b43d4; end: 1002b43f3;  */

void FUN_1002b43d4(void)

{
  func_0x000107c61168(&PTR_PTR_112929610);
  return;
}



/* Entry: 1002b43f4; end: 1002b448b;  */

void FUN_1002b43f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e47818,&UNK_10da3cc60);
  puVar1 = &UNK_1104acae8;
  func_0x000107c613fc(&UNK_1104acae8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1004f30b4,puVar1);
  return;
}



/* Entry: 1002b448c; end: 1002b44ab;  */

void FUN_1002b448c(void)

{
  func_0x000107c61168(&PTR_PTR_1128affa8);
  return;
}



/* Entry: 1002b44ac; end: 1002b44f7;  */

void FUN_1002b44ac(undefined8 param_1)

{
  FUN_1000285a8(0x112e47af0,&UNK_10da3d2b0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101f8c604,param_1);
  return;
}



/* Entry: 1002b44f8; end: 1002b459b;  */

void FUN_1002b44f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e47db8,&UNK_10da3d940);
  puVar1 = &UNK_1104ad6a8;
  func_0x000107c613fc(&UNK_1104ad6a8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101f8eb64,puVar1);
  return;
}



/* Entry: 1002b459c; end: 1002b459f;  */

void FUN_1002b459c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002b45a0; end: 1002b4637;  */

void FUN_1002b45a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e48388,&UNK_10da3e790);
  puVar1 = &UNK_1104ae2f8;
  func_0x000107c613fc(&UNK_1104ae2f8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101f93e18,puVar1);
  return;
}



/* Entry: 1002b4638; end: 1002b463b;  */

void FUN_1002b4638(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002b463c; end: 1002b4703;  */

void FUN_1002b463c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e48660,&UNK_10da3ee60);
  puVar1 = &UNK_1104ae900;
  func_0x000107c613fc(&UNK_1104ae900,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101f96664,puVar1);
  return;
}



/* Entry: 1002b4704; end: 1002b4707;  */

void FUN_1002b4704(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002b4708; end: 1002b4727;  */

undefined1  [16] FUN_1002b4708(void)

{
  return ZEXT816(0x110472498);
}



/* Entry: 1002b4728; end: 1002b482b; -[SCCaptureDeviceOutputImpl _configurePhotoQualityForIOS15:] */

/* WARNING: Possible PIC construction at 0x0001002b478c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002b479c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002b47f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002b4800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002b47f4) */
/* WARNING: Removing unreachable block (ram,0x0001002b47a0) */
/* WARNING: Removing unreachable block (ram,0x0001002b4808) */
/* WARNING: Removing unreachable block (ram,0x0001002b47a8) */
/* WARNING: Removing unreachable block (ram,0x0001002b4790) */
/* WARNING: Removing unreachable block (ram,0x0001002b4804) */
/* WARNING: Removing unreachable block (ram,0x0001002b4814) */

void FUN_1002b4728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c5c734(param_3);
  func_0x000107c61180();
  func_0x000107c4c140();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4e708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1002b482c; end: 1002b4833; -[SCSystemConfigurationImpl mainCameraQualityConfiguration] */

undefined8 FUN_1002b482c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1002b4834; end: 1002b488f;  */

void FUN_1002b4834(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7170;
  func_0x000107c610f4(PTR_PTR_1126b7170);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c45db0(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1002b4890; end: 1002b4903; -[SCCameraMainCameraQualityConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1002b4890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7680;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002b4904; end: 1002b4977; -[SCCameraMainCameraQualityConfigurationImpl photoQualityPrioritizationForMainCamera] */

undefined8 FUN_1002b4904(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002b4978;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136ba358 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136ba358,&puStack_38);
  }
  return uRam00000001136ba350;
}



/* Entry: 1002b4978; end: 1002b49db;  */

void FUN_1002b4978(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf320;
  func_0x000107c49820();
  if (ppuVar2 == (undefined **)0x0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x000107c4980c(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd10f8,1,0);
    ppuVar2 = (undefined **)(long)(int)uVar1;
  }
  else if ((long)ppuVar2 - 4U < 0xfffffffffffffffd) {
    ppuVar2 = (undefined **)0x1;
  }
  ppuRam00000001136ba350 = ppuVar2;
  return;
}



/* Entry: 1002b49dc; end: 1002b4a73; -[SCCircumstanceEngine intValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8
FUN_1002b49dc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  uVar1 = param_1;
  func_0x000107c3c7f4(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x000107c3ade8(param_1,param_2,param_3,1);
    lVar3 = 0xa0;
  }
  else {
    lVar3 = 0x28;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c4980c(uVar2,param_2,param_3,param_4,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 1002b4a74; end: 1002b4a8f; +[SCCaptureVideoDataOutput captureVideoDataOutput] */

void FUN_1002b4a74(void)

{
  func_0x000107c61160(PTR__OBJC_CLASS___AVCaptureVideoDataOutput_1126b70b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1002b4a90; end: 1002b4ab3;  */

void FUN_1002b4a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106c8848;
  FUN_1000285a8(0x112fdf8a8,&UNK_10dc49328);
  func_0x000107c613fc(&UNK_1106c8848,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100992d88,puVar1);
  return;
}



/* Entry: 1002b4ab4; end: 1002b4b33;  */

void FUN_1002b4ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 1002b4b34; end: 1002b4b53;  */

void FUN_1002b4b34(void)

{
  func_0x000107c61168(&PTR_PTR_11291e4a0);
  return;
}



/* Entry: 1002b4b54; end: 1002b4b5f;  */

void FUN_1002b4b54(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103c5c588,param_1);
  return;
}



/* Entry: 1002b4b60; end: 1002b4bb7;  */

void FUN_1002b4b60(undefined8 param_1,undefined8 param_2)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_2,param_1);
  return;
}



/* Entry: 1002b4bb8; end: 1002b4bc3;  */

void FUN_1002b4bb8(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103c5c4d4,param_1);
  return;
}



/* Entry: 1002b4bc4; end: 1002b4c67;  */

void FUN_1002b4bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fe6f40,&UNK_10dc4dd90);
  puVar1 = &UNK_1106cb7d8;
  func_0x000107c613fc(&UNK_1106cb7d8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_103ac8068,puVar1);
  return;
}



/* Entry: 1002b4c68; end: 1002b4cc3;  */

void FUN_1002b4c68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002b4cc4; end: 1002b4dd7;  */

void FUN_1002b4cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3ad18,&UNK_10da26230);
  puVar1 = &UNK_110499038;
  func_0x000107c613fc(&UNK_110499038,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(&UNK_101ed84fc,puVar1);
  return;
}



/* Entry: 1002b4dd8; end: 1002b4e63;  */

void FUN_1002b4dd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002b4e64; end: 1002b4e7f;  */

void FUN_1002b4e64(undefined8 param_1)

{
  FUN_1000285a8(0x112e36510,&UNK_10da202c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ea023c,param_1);
  return;
}



/* Entry: 1002b4e80; end: 1002b4e9f;  */

void FUN_1002b4e80(void)

{
  func_0x000107c61168(&PTR_PTR_11291cdd8);
  return;
}



/* Entry: 1002b4ea0; end: 1002b4ebb;  */

void FUN_1002b4ea0(undefined8 param_1)

{
  FUN_1000285a8(0x112e1bd80,&UNK_10d9fd3d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ce7bb4,param_1);
  return;
}



/* Entry: 1002b4ebc; end: 1002b4edb;  */

void FUN_1002b4ebc(void)

{
  func_0x000107c61168(&PTR_PTR_112913598);
  return;
}



/* Entry: 1002b4edc; end: 1002b4ef7;  */

void FUN_1002b4edc(undefined8 param_1)

{
  FUN_1000285a8(0x112e365f0,&UNK_10da20458);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100b99fdc,param_1);
  return;
}



/* Entry: 1002b4ef8; end: 1002b4f17;  */

void FUN_1002b4ef8(void)

{
  func_0x000107c61168(&PTR_PTR_11291ce98);
  return;
}



/* Entry: 1002b4f18; end: 1002b4f53;  */

/* WARNING: Possible PIC construction at 0x0001002b4f38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002b4f3c) */

void FUN_1002b4f18(long param_1)

{
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1002b4f54; end: 1002b4f6f;  */

void FUN_1002b4f54(undefined8 param_1)

{
  FUN_1000285a8(0x112e17200,&UNK_10d9f54e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006dd9b4,param_1);
  return;
}



/* Entry: 1002b4f70; end: 1002b4fbf;  */

void FUN_1002b4f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002b4fc0; end: 1002b506b; -[SCManagedCaptureSessionImpl _addDeviceOutput:] */

/* WARNING: Possible PIC construction at 0x0001002b5024: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002b5028) */

void FUN_1002b4fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c4a09c(param_1);
  func_0x000107c3ad08(param_1,param_2,param_3,uVar1);
  func_0x000107c5ddd0(param_3);
  func_0x000107c61180();
  func_0x000107c3ad00(param_1,param_2,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1002b506c; end: 1002b5203; -[SCManagedCaptureSessionImpl _addPhotoOutputIfNeeded:isMultiCam:] */

/* WARNING: Possible PIC construction at 0x0001002b50b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002b50e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002b510c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002b513c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002b516c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002b5194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002b5170) */
/* WARNING: Removing unreachable block (ram,0x0001002b5140) */
/* WARNING: Removing unreachable block (ram,0x0001002b5144) */
/* WARNING: Removing unreachable block (ram,0x0001002b5110) */
/* WARNING: Removing unreachable block (ram,0x0001002b50e8) */
/* WARNING: Removing unreachable block (ram,0x0001002b50b8) */
/* WARNING: Removing unreachable block (ram,0x0001002b5114) */
/* WARNING: Removing unreachable block (ram,0x0001002b50bc) */
/* WARNING: Removing unreachable block (ram,0x0001002b5198) */
/* WARNING: Removing unreachable block (ram,0x0001002b51ac) */

void FUN_1002b506c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4a500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1002b5204; end: 1002b5223;  */

void FUN_1002b5204(void)

{
  func_0x000107c61168(&PTR_PTR_112942680);
  return;
}



/* Entry: 1002b5224; end: 1002b528b; -[_TtC17SCGhostToSignaler15GhostToSignaler isStartupComplete] */

uint FUN_1002b5224(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  lVar1 = *(long *)(param_1 + 0x70);
  FUN_1000a8868(param_1 + 0x50,uVar2);
  pcVar3 = *(code **)(lVar1 + 0x20);
  func_0x000107c6157c(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61574(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 1002b528c; end: 1002b5347;  */

void FUN_1002b528c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0b4a8,&UNK_10d9e4c40);
  puVar1 = &UNK_11045c118;
  func_0x000107c613fc(&UNK_11045c118,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_101c4acc4,puVar1);
  return;
}



/* Entry: 1002b5348; end: 1002b538b;  */

void FUN_1002b5348(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002b538c; end: 1002b53d7;  */

void FUN_1002b538c(undefined8 param_1)

{
  FUN_1000285a8(0x112f8ac28,&UNK_10dbffc10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103703c4c,param_1);
  return;
}



/* Entry: 1002b53d8; end: 1002b53f7;  */

void FUN_1002b53d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5da0);
  return;
}



/* Entry: 1002b53f8; end: 1002b53ff; -[SCCaptureDeviceOutputImpl photoOutput] */

undefined8 FUN_1002b53f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1002b5400; end: 1002b550f; -[SCManagedCaptureSessionImpl _shouldAddDeferredPhotoOutputDuringStartup:] */

undefined8 FUN_1002b5400(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x000107c61174(param_3);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3f0ec();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c3f228();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  if (lVar5 != 0) {
    iVar1 = 2;
    FUN_100029b9c(2,0x1a,0,0);
    if (iVar1 != 0) {
      uVar6 = param_3;
      func_0x000107c49c44(param_3);
      goto LAB_1002b54a8;
    }
  }
  uVar6 = 0;
LAB_1002b54a8:
  func_0x000107c61170(param_3);
  return uVar6;
}



/* Entry: 1002b5510; end: 1002b55c3; -[SCCameraHardwareConfigurationImpl cameraStartupPhotoOutputMode] */

undefined8 FUN_1002b5510(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x1a,0,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000107c4980c();
    uVar2 = 2;
    if (iVar1 != 2) {
      uVar2 = 0;
    }
    if (iVar1 == 1) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Entry: 1002b55c4; end: 1002b55e3;  */

void FUN_1002b55c4(void)

{
  func_0x000107c61168(&PTR_PTR_112947670);
  return;
}



/* Entry: 1002b55e4; end: 1002b569f;  */

void FUN_1002b55e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e31050,&UNK_10da1a340);
  puVar1 = &UNK_11048b958;
  func_0x000107c613fc(&UNK_11048b958,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_100795484,puVar1);
  return;
}



/* Entry: 1002b56a0; end: 1002b56bf;  */

void FUN_1002b56a0(void)

{
  func_0x000107c61168(&PTR_PTR_112e310c8);
  return;
}



/* Entry: 1002b56c0; end: 1002b56db;  */

void FUN_1002b56c0(undefined8 param_1)

{
  FUN_1000285a8(0x112e0f318,&UNK_10d9ea518);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101c74b24,param_1);
  return;
}



/* Entry: 1002b56dc; end: 1002b572b;  */

void FUN_1002b56dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002b572c; end: 1002b574b;  */

void FUN_1002b572c(void)

{
  func_0x000107c61168(&PTR_PTR_11290b240);
  return;
}



/* Entry: 1002b574c; end: 1002b5753; -[SCCaptureDeviceOutputImpl videoOutput] */

undefined8 FUN_1002b574c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1002b5754; end: 1002b575b; -[SCManagedCaptureSessionImpl _addOutput:withoutConnections:] */

void FUN_1002b5754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__addOutput_withoutConnections_al_11254f868,param_3,param_4,0);
  return;
}



/* Entry: 1002b575c; end: 1002b582f; -[SCManagedCaptureSessionImpl _addOutput:withoutConnections:allowWhileRunning:] */

undefined8 FUN_1002b575c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000107c4e148();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c40404();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x000107c3f398(uVar3,param_2,param_3);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
      goto LAB_1002b57e0;
    }
    if (param_4 == 0) {
      func_0x000107c3d7e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
    else {
      func_0x000107c3d7e4(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
  }
  uVar3 = 1;
LAB_1002b57e0:
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 1002b5830; end: 1002b5837;  */

void FUN_1002b5830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1002b5838; end: 1002b58b7;  */

void FUN_1002b5838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e04ad0,&UNK_10d9d8470);
  puVar1 = &UNK_11044c1f8;
  func_0x000107c613fc(&UNK_11044c1f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101b622ac,puVar1);
  return;
}



/* Entry: 1002b58b8; end: 1002b58e3;  */

void FUN_1002b58b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002b58e4; end: 1002b58ff;  */

void FUN_1002b58e4(undefined8 param_1)

{
  FUN_1000285a8(0x112e33c48,&UNK_10da1d0c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100aca380,param_1);
  return;
}



/* Entry: 1002b5900; end: 1002b594f;  */

void FUN_1002b5900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002b5950; end: 1002b596f;  */

void FUN_1002b5950(void)

{
  func_0x000107c61168(&PTR_PTR_11291bf78);
  return;
}



/* Entry: 1002b5970; end: 1002b5a37;  */

void FUN_1002b5970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e149e0,&UNK_10d9f1600);
  puVar1 = &UNK_110468800;
  func_0x000107c613fc(&UNK_110468800,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_1006fdf58,puVar1);
  return;
}



/* Entry: 1002b5a38; end: 1002b5a57;  */

void FUN_1002b5a38(void)

{
  func_0x000107c61168(&PTR_PTR_112e14a58);
  return;
}



/* Entry: 1002b5a58; end: 1002b5b13;  */

void FUN_1002b5a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fbb6a0,&UNK_10dc2d4a8);
  puVar1 = &UNK_1106b54b8;
  func_0x000107c613fc(&UNK_1106b54b8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1009456d0,puVar1);
  return;
}



/* Entry: 1002b5b14; end: 1002b5b33;  */

void FUN_1002b5b14(void)

{
  func_0x000107c61168(&PTR_PTR_112909850);
  return;
}



/* Entry: 1002b5b34; end: 1002b5bcb;  */

void FUN_1002b5b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0e7c8,&UNK_10d9e9330);
  puVar1 = &UNK_110461158;
  func_0x000107c613fc(&UNK_110461158,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100440098,puVar1);
  return;
}



/* Entry: 1002b5bcc; end: 1002b5beb;  */

void FUN_1002b5bcc(void)

{
  func_0x000107c61168(&PTR_PTR_112e0e840);
  return;
}



/* Entry: 1002b5bec; end: 1002b5c07;  */

void FUN_1002b5bec(undefined8 param_1)

{
  FUN_1000285a8(0x112e0e7d0,&UNK_10d9e9338);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10044003c,param_1);
  return;
}



/* Entry: 1002b5c08; end: 1002b5c57;  */

void FUN_1002b5c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002b5c58; end: 1002b5c77;  */

void FUN_1002b5c58(void)

{
  func_0x000107c61168(&PTR_PTR_11290aa50);
  return;
}



/* Entry: 1002b5c78; end: 1002b5d1b;  */

void FUN_1002b5c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fbe468,&UNK_10dc2f2a8);
  puVar1 = &UNK_1106b6c68;
  func_0x000107c613fc(&UNK_1106b6c68,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_100949348,puVar1);
  return;
}



/* Entry: 1002b5d1c; end: 1002b5d3b;  */

void FUN_1002b5d1c(void)

{
  func_0x000107c61168(&PTR_PTR_11290bc00);
  return;
}



/* Entry: 1002b5d3c; end: 1002b5d87;  */

void FUN_1002b5d3c(undefined8 param_1)

{
  FUN_1000285a8(0x112e1ece8,&UNK_10da01050);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d04f1c,param_1);
  return;
}



/* Entry: 1002b5d88; end: 1002b5da7;  */

void FUN_1002b5d88(void)

{
  func_0x000107c61168(&PTR_PTR_112801e70);
  return;
}



/* Entry: 1002b5da8; end: 1002b5df3;  */

void FUN_1002b5da8(undefined8 param_1)

{
  FUN_1000285a8(0x112e1ed48,&UNK_10da011a0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d0576c,param_1);
  return;
}



/* Entry: 1002b5df4; end: 1002b5e13;  */

void FUN_1002b5df4(void)

{
  func_0x000107c61168(&PTR_PTR_112801f30);
  return;
}



/* Entry: 1002b5e14; end: 1002b5e93;  */

void FUN_1002b5e14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0d128,&UNK_10d9e7730);
  puVar1 = &UNK_11045f7e0;
  func_0x000107c613fc(&UNK_11045f7e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101c6581c,puVar1);
  return;
}



/* Entry: 1002b5e94; end: 1002b5ebf;  */

void FUN_1002b5e94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002b5ec0; end: 1002b5f0b;  */

void FUN_1002b5ec0(undefined8 param_1)

{
  FUN_1000285a8(0x112e0d178,&UNK_10d9e77d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100aa0028,param_1);
  return;
}



/* Entry: 1002b5f0c; end: 1002b5f2b;  */

void FUN_1002b5f0c(void)

{
  func_0x000107c61168(&PTR_PTR_112968300);
  return;
}



/* Entry: 1002b5f2c; end: 1002b5fc3;  */

void FUN_1002b5f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fbfb60,&UNK_10dc301d8);
  puVar1 = &UNK_1106b75d0;
  func_0x000107c613fc(&UNK_1106b75d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10094b49c,puVar1);
  return;
}



/* Entry: 1002b5fc4; end: 1002b5fe3;  */

void FUN_1002b5fc4(void)

{
  func_0x000107c61168(&PTR_PTR_11290d048);
  return;
}



/* Entry: 1002b5fe4; end: 1002b6087;  */

void FUN_1002b5fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df9b38,&UNK_10d9cae58);
  puVar1 = &UNK_11043fc50;
  func_0x000107c613fc(&UNK_11043fc50,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101ace804,puVar1);
  return;
}



/* Entry: 1002b6088; end: 1002b60c3;  */

void FUN_1002b6088(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002b60c4; end: 1002b6143;  */

void FUN_1002b60c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df9b40,&UNK_10d9cae60);
  puVar1 = &UNK_11043fc78;
  func_0x000107c613fc(&UNK_11043fc78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100590050,puVar1);
  return;
}



/* Entry: 1002b6144; end: 1002b6163;  */

void FUN_1002b6144(void)

{
  func_0x000107c61168(&PTR_PTR_1129aae10);
  return;
}



/* Entry: 1002b6164; end: 1002b61fb;  */

void FUN_1002b6164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fc06b8,&UNK_10dc30d68);
  puVar1 = &UNK_1106b7ee8;
  func_0x000107c613fc(&UNK_1106b7ee8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10094c150,puVar1);
  return;
}



/* Entry: 1002b61fc; end: 1002b621b;  */

void FUN_1002b61fc(void)

{
  func_0x000107c61168(&PTR_PTR_11290e058);
  return;
}


