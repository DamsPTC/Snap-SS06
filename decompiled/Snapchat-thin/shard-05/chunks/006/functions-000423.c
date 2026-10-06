/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fbc6a4; end: 103fbc6b7;  */

bool FUN_103fbc6a4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103fbc6b8; end: 103fbc78f;  */

void FUN_103fbc6b8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbc790; end: 103fbc7b7;  */

void FUN_103fbc790(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103fbc7b8; end: 103fbc7f7;  */

void FUN_103fbc7b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb72a0;
  _swift_getWitnessTable(&UNK_10dcb72a0,&UNK_11072bec0);
  puRam000000011303e740 = puVar1;
  return;
}



/* Entry: 103fbc7f8; end: 103fbc81b;  */

undefined1  [16] FUN_103fbc7f8(void)

{
  return ZEXT816(0x11072bec0);
}



/* Entry: 103fbc81c; end: 103fbc8c7;  */

void FUN_103fbc81c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbc8c8; end: 103fbc8cb;  */

void FUN_103fbc8c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb73b0;
  _swift_getWitnessTable(&UNK_10dcb73b0,&UNK_11072c038);
  puRam000000011303e748 = puVar1;
  return;
}



/* Entry: 103fbc8cc; end: 103fbc90b;  */

void FUN_103fbc8cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb73b0;
  _swift_getWitnessTable(&UNK_10dcb73b0,&UNK_11072c038);
  puRam000000011303e748 = puVar1;
  return;
}



/* Entry: 103fbc90c; end: 103fbcaab;  */

int FUN_103fbc90c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103fbc988;
        goto LAB_103fbc96c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103fbc96c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103fbc988:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103fbcaac; end: 103fbcb57;  */

void FUN_103fbcaac(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbcb58; end: 103fbcb5b;  */

void FUN_103fbcb58(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb74a0;
  _swift_getWitnessTable(&UNK_10dcb74a0,&UNK_11072c108);
  puRam000000011303e778 = puVar1;
  return;
}



/* Entry: 103fbcb5c; end: 103fbcb9b;  */

void FUN_103fbcb5c(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb74a0;
  _swift_getWitnessTable(&UNK_10dcb74a0,&UNK_11072c108);
  puRam000000011303e778 = puVar1;
  return;
}



/* Entry: 103fbcb9c; end: 103fbcd0f;  */

void FUN_103fbcb9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103fbcd10; end: 103fbcfbb;  */

void FUN_103fbcd10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  __sSqMa(0,param_5);
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = (long)&lStack_f0 - extraout_x8;
  lVar7 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = uVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_90 = param_2;
  _swift_errorRetain(param_2);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0x112e29d50;
  func_0x0001000285a8(0x112e29d50,&UNK_10da123a0);
  puVar4 = &uStack_c0;
  _swift_dynamicCast(puVar4,&uStack_90,uVar2,uVar3,6);
  if (((ulong)puVar4 & 1) == 0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    func_0x000101d70a94(&uStack_c0);
  }
  else {
    lStack_f0 = lVar10;
    lStack_e8 = lVar1;
    uStack_e0 = param_3;
    uStack_c8 = param_1;
    func_0x000101d70af0(&uStack_c0,&uStack_88);
    lStack_d0 = lVar7;
    func_0x0001000a8868(&uStack_88,uStack_70);
    lVar1 = 0;
    _swift_getAssociatedTypeWitness(0,lStack_68,uStack_70,&UNK_10e7ddb68,&UNK_10e7ddb70);
    lStack_d8 = lVar9;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar7 = lStack_d0;
    (**(code **)(lStack_68 + 0x10))(lVar9 - extraout_x8_01,uStack_70,lStack_68);
    uVar5 = uVar8;
    _swift_dynamicCast(uVar8,lVar9 - extraout_x8_01,lVar1,param_5,6);
    if ((uVar5 & 1) != 0) {
      (**(code **)(lVar7 + 0x38))(uVar8,0,1,param_5);
      pcVar6 = *(code **)(lVar7 + 0x20);
      (*pcVar6)(lVar9,uVar8,param_5);
      (*pcVar6)(uStack_c8,lVar9,param_5);
      func_0x0001000834e4(&uStack_88);
      return;
    }
    (**(code **)(lVar7 + 0x38))(uVar8,1,1,param_5);
    (**(code **)(lStack_f0 + 8))(uVar8,lStack_e8);
    func_0x0001000834e4(&uStack_88);
    param_1 = uStack_c8;
    param_3 = uStack_e0;
  }
  uStack_c0 = param_2;
  _swift_errorRetain(param_2);
  puVar4 = &uStack_88;
  _swift_dynamicCast(puVar4,&uStack_c0,uVar2,&UNK_1107ac098,6);
  if ((int)puVar4 != 0) {
    func_0x000101d70adc(uStack_88,uStack_80);
  }
  (**(code **)(lVar7 + 0x10))(param_1,param_3,param_5);
  return;
}



/* Entry: 103fbcfbc; end: 103fbd2bb;  */

uint FUN_103fbcfbc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar1 = (int)&uStack_90;
  uStack_60 = param_1;
  _swift_errorRetain();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0x112e29d50;
  func_0x0001000285a8(0x112e29d50,&UNK_10da123a0);
  _swift_dynamicCast(&uStack_90,&uStack_60,uVar2,uVar3,6);
  if (iVar1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    func_0x000101d70a94(&uStack_90);
    uStack_90 = param_1;
    _swift_errorRetain(param_1);
    puVar4 = &uStack_58;
    _swift_dynamicCast(puVar4,&uStack_90,uVar2,&UNK_1107ac098,6);
    if ((int)puVar4 != 0) {
      func_0x000101d70adc(uStack_58,uStack_50);
    }
    uVar5 = 0;
  }
  else {
    func_0x000101d70af0(&uStack_90,&uStack_58);
    func_0x0001000a8868(&uStack_58,uStack_40);
    (**(code **)(lStack_38 + 0x18))(uStack_40,lStack_38);
    uVar5 = (uint)uStack_40;
    func_0x0001000834e4(&uStack_58);
  }
  return uVar5 & 1;
}



/* Entry: 103fbd2bc; end: 103fbd2cb; -[_TtC45MemoriesEncryptedContentManagerHelperServices45MemoriesEncryptedContentManagerHelperServices encryptionDetector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbd2bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303e788));
  return;
}



/* Entry: 103fbd2cc; end: 103fbd34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fbd2cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303e780) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11303e788) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 103fbd350; end: 103fbd3af; -[_TtC45MemoriesEncryptedContentManagerHelperServices45MemoriesEncryptedContentManagerHelperServices init] */

void FUN_103fbd350(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesEncryptedContentManagerHelperServices.MemoriesEncryptedContentManagerHelperServices"
             ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbd37c);
  (*pcVar1)();
}



/* Entry: 103fbd3b0; end: 103fbd3e7; -[_TtC45MemoriesEncryptedContentManagerHelperServices45MemoriesEncryptedContentManagerHelperServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbd3b0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303e780));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303e788));
  return;
}



/* Entry: 103fbd3e8; end: 103fbd3f7; -[MemoriesFriendshipFlashbackDatabaseServices friendshipFlashbackPersisterObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbd3e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303e7c0));
  return;
}



/* Entry: 103fbd3f8; end: 103fbd463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbd3f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  lVar1 = unaff_x20;
  func_0x0001003a5b88();
  *(long *)(unaff_x20 + _DAT_11303e7c0) = lVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11303e7b8) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbd464; end: 103fbd4c3; -[MemoriesFriendshipFlashbackDatabaseServices init] */

void FUN_103fbd464(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesFriendshipFlashbackDatabaseServices.MemoriesFriendshipFlashbackDatabaseServices"
             ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbd490);
  (*pcVar1)();
}



/* Entry: 103fbd4c4; end: 103fbd4fb; -[MemoriesFriendshipFlashbackDatabaseServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbd4c4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303e7b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303e7c0));
  return;
}



/* Entry: 103fbd4fc; end: 103fbd50f;  */

bool FUN_103fbd4fc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103fbd510; end: 103fbd5bb;  */

void FUN_103fbd510(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbd5bc; end: 103fbd5bf;  */

void FUN_103fbd5bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e7f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb7690;
  _swift_getWitnessTable(&UNK_10dcb7690,&UNK_11072c3b0);
  puRam000000011303e7f0 = puVar1;
  return;
}



/* Entry: 103fbd5c0; end: 103fbd5ff;  */

void FUN_103fbd5c0(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e7f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb7690;
  _swift_getWitnessTable(&UNK_10dcb7690,&UNK_11072c3b0);
  puRam000000011303e7f0 = puVar1;
  return;
}



/* Entry: 103fbd600; end: 103fbd773;  */

void FUN_103fbd600(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103fbd774; end: 103fbd80b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbd774(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303e7f8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbd80c; end: 103fbd86b; -[MemoriesShakeToReportLoggingRepositoryServices init] */

void FUN_103fbd80c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesShakeToReportLoggingRepositoryServices.MemoriesShakeToReportLoggingRepositoryServices"
             ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbd838);
  (*pcVar1)();
}



/* Entry: 103fbd86c; end: 103fbd88f; -[MemoriesShakeToReportLoggingRepositoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbd86c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303e7f8));
  return;
}



/* Entry: 103fbd890; end: 103fbd967;  */

void FUN_103fbd890(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbd968; end: 103fbd987;  */

void FUN_103fbd968(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103fbd988; end: 103fbd9c7;  */

void FUN_103fbd988(void)

{
  undefined *puVar1;
  
  if (puRam000000011303e828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb77a0;
  _swift_getWitnessTable(&UNK_10dcb77a0,&UNK_11072c468);
  puRam000000011303e828 = puVar1;
  return;
}



/* Entry: 103fbd9c8; end: 103fbd9d7;  */

undefined1  [16] FUN_103fbd9c8(void)

{
  return ZEXT816(0x11072c468);
}



/* Entry: 103fbd9d8; end: 103fbd9e7; -[MemoriesShakeToReportLoggingServices memoriesShakeToReportLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbd9d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303e838));
  return;
}



/* Entry: 103fbd9e8; end: 103fbda6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fbd9e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303e830) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001000bf56c();
  *(undefined8 *)(unaff_x20 + _DAT_11303e838) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 103fbda6c; end: 103fbdacb; -[MemoriesShakeToReportLoggingServices init] */

void FUN_103fbda6c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesShakeToReportLoggingServices.MemoriesShakeToReportLoggingServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbda98);
  (*pcVar1)();
}



/* Entry: 103fbdacc; end: 103fbdb03; -[MemoriesShakeToReportLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbdacc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303e830));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303e838));
  return;
}



/* Entry: 103fbdb04; end: 103fbdb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbdb04(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  func_0x00010021cee4();
  lVar2 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11303e870) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  _swift_retain();
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 103fbdb6c; end: 103fbdbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbdb6c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303e870) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbdbf0; end: 103fbdc23;  */

void FUN_103fbdbf0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fbdc24; end: 103fbdc33;  */

undefined1  [16] FUN_103fbdc24(void)

{
  return ZEXT816(0x11072c560);
}



/* Entry: 103fbdc34; end: 103fbdc43; -[_TtC43MemoriesDirectCameraRollProviderServicesAPI40MemoriesDirectCameraRollProviderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbdc34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303e870));
  return;
}



/* Entry: 103fbdc44; end: 103fbdc53; -[MemoriesMonetizationServices valdiStorageQuotaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbdc44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303e8c8));
  return;
}



/* Entry: 103fbdc54; end: 103fbdc63; -[MemoriesMonetizationServices valdiStorageQuotaLockedSnapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbdc54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303e8d0));
  return;
}



/* Entry: 103fbdc64; end: 103fbddab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103fbdc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar4 = auStack_60;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303e8a0) = param_1;
  _swift_retain(param_1);
  uVar1 = 0x11303e8d8;
  func_0x0001000285a8(0x11303e8d8,&UNK_10dcb7978);
  pcVar2 = FUN_103fbddac;
  func_0x0001000cb480(FUN_103fbddac,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  _swift_release(pcVar2);
  *(code **)(unaff_x20 + _DAT_11303e8c0) = pcVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11303e8a8) = param_2;
  uVar1 = param_2;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11303e8c8) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11303e8b0) = param_3;
  uVar1 = param_3;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11303e8d0) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11303e8b8) = param_4;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  _swift_release(param_1);
  _swift_release(param_2);
  _swift_release(param_3);
  return puVar4;
}



/* Entry: 103fbddac; end: 103fbddb7;  */

void FUN_103fbddac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 103fbddb8; end: 103fbde17; -[MemoriesMonetizationServices init] */

void FUN_103fbddb8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesMonetizationServicesAPI.MemoriesMonetizationServices",0x3c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbdde4);
  (*pcVar1)();
}



/* Entry: 103fbde18; end: 103fbde9f; -[MemoriesMonetizationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbde18(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303e8a0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303e8a8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303e8b0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303e8b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303e8c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303e8c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303e8d0));
  return;
}



/* Entry: 103fbdea0; end: 103fbdec3;  */

void FUN_103fbdea0(void)

{
  _objc_allocWithZone(PTR_PTR_1126cfb58);
                    /* WARNING: Could not recover jumptable at 0x00010c04be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0);
  return;
}



/* Entry: 103fbdec4; end: 103fbdeeb; +[SCCMemoriesMonetizationQuotaThumbnailDecision undefined] */

void FUN_103fbdec4(void)

{
  _objc_allocWithZone(PTR_PTR_1126cfb58);
  func_0x000107c489a4(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fbdeec; end: 103fbdf13; +[SCCMemoriesMonetizationQuotaThumbnailDecision cloud] */

void FUN_103fbdeec(void)

{
  _objc_allocWithZone(PTR_PTR_1126cfb58);
  func_0x000107c489a4(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fbdf14; end: 103fbdf23; -[SCMemoriesMonetizationStorageQuotaState maxAllowedBytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fbdf14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303e908);
}



/* Entry: 103fbdf24; end: 103fbdf33; -[SCMemoriesMonetizationStorageQuotaState usedBytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fbdf24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303e910);
}



/* Entry: 103fbdf34; end: 103fbdf43; -[SCMemoriesMonetizationStorageQuotaState violation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbdf34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303e918));
  return;
}



/* Entry: 103fbdf44; end: 103fbdf53; -[SCMemoriesMonetizationStorageQuotaState upsell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbdf44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303e920));
  return;
}



/* Entry: 103fbdf54; end: 103fbdf77; -[SCMemoriesMonetizationStorageQuotaState excessStorageBytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fbdf54(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(ulong *)(param_1 + _DAT_11303e908) <= *(ulong *)(param_1 + _DAT_11303e910)) {
    lVar1 = *(ulong *)(param_1 + _DAT_11303e910) - *(ulong *)(param_1 + _DAT_11303e908);
  }
  return lVar1;
}



/* Entry: 103fbdf78; end: 103fbdf9b; -[SCMemoriesMonetizationStorageQuotaState isOverQuota] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103fbdf78(long param_1)

{
  return *(ulong *)(param_1 + _DAT_11303e908) < *(ulong *)(param_1 + _DAT_11303e910);
}



/* Entry: 103fbdf9c; end: 103fbdfc3; -[SCMemoriesMonetizationStorageQuotaState remainingQuotaBytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fbdf9c(long param_1)

{
  code *pcVar1;
  
  if (*(ulong *)(param_1 + _DAT_11303e910) <= *(ulong *)(param_1 + _DAT_11303e908)) {
    return *(ulong *)(param_1 + _DAT_11303e908) - *(ulong *)(param_1 + _DAT_11303e910);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbdfc4);
  (*pcVar1)();
}



/* Entry: 103fbdfc4; end: 103fbdfdb; -[SCMemoriesMonetizationStorageQuotaState hasProvisionedQuota] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103fbdfc4(long param_1)

{
  return *(long *)(param_1 + _DAT_11303e908) != 0;
}



/* Entry: 103fbdfdc; end: 103fbe00f; -[SCMemoriesMonetizationStorageQuotaState valdi] */

void FUN_103fbdfdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fbe010();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fbe010; end: 103fbe1ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103fbe010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  
  dVar6 = (double)NEON_ucvtf(*(undefined8 *)(unaff_x20 + _DAT_11303e908));
  uVar7 = NEON_ucvtf(*(undefined8 *)(unaff_x20 + _DAT_11303e910));
  puVar1 = PTR_PTR_1126a8620;
  _objc_allocWithZone(PTR_PTR_1126a8620);
  func_0x000107c47600(dVar6,uVar7);
  if (*(long *)(unaff_x20 + _DAT_11303e918) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    puVar2 = PTR_PTR_1126adb40;
    _objc_allocWithZone(PTR_PTR_1126adb40);
    func_0x000107c48a18(dVar6 * 1000.0);
  }
  func_0x000107c5a5c4(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11303e920);
  if (lVar3 == 0) {
    func_0x000107c5a250(puVar1,param_2,0);
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar4 = *(long *)(lVar3 + _DAT_11303e928);
    lVar5 = *(long *)(lVar3 + _DAT_11303e930);
    lVar3 = *(long *)(lVar3 + _DAT_11303e938);
    puVar2 = PTR_PTR_1126adb38;
    _objc_allocWithZone(PTR_PTR_1126adb38);
    func_0x000107c48dfc((double)lVar4,(double)lVar5,(double)lVar3);
    func_0x000107c5a250(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  func_0x000107c59f9c(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 103fbe1ac; end: 103fbe2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbe1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303e908) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303e910) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11303e918) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11303e920) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbe2c4; end: 103fbe363; -[SCMemoriesMonetizationStorageQuotaState initWithMaxAllowedBytes:usedBytes:violation:upsell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbe2c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11303e908) = param_3;
  *(undefined8 *)(param_1 + _DAT_11303e910) = param_4;
  *(undefined8 *)(param_1 + _DAT_11303e918) = param_5;
  *(undefined8 *)(param_1 + _DAT_11303e920) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 103fbe364; end: 103fbe38f; -[SCMemoriesMonetizationStorageQuotaState init] */

void FUN_103fbe364(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesMonetizationServicesAPI.StorageQuotaState",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbe390);
  (*pcVar1)();
}



/* Entry: 103fbe390; end: 103fbe393;  */

void FUN_103fbe390(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fbe394; end: 103fbe3cb; -[SCMemoriesMonetizationStorageQuotaState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbe394(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303e918));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303e920));
  return;
}



/* Entry: 103fbe3cc; end: 103fbe463; -[SCMemoriesMonetizationStorageQuotaViolation storageWaterline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbe3cc(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1138127d0,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103fbe464; end: 103fbe593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fbe464(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  _objc_allocWithZone();
  lVar1 = _DAT_1138127d0;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_1,lVar2);
  return puVar3;
}



/* Entry: 103fbe594; end: 103fbe65f; -[SCMemoriesMonetizationStorageQuotaViolation initWithStorageWaterline:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103fbe594(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar4,param_3);
  (**(code **)(lVar5 + 0x10))(param_1 + _DAT_1138127d0,lVar4,lVar2);
  plVar3 = &lStack_50;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  return plVar3;
}



/* Entry: 103fbe660; end: 103fbe6db; -[SCMemoriesMonetizationStorageQuotaViolation valdi] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbe660(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  puVar1 = PTR_PTR_1126adb40;
  _objc_allocWithZone(PTR_PTR_1126adb40);
  func_0x000107c48a18(param_1 * 1000.0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103fbe6dc; end: 103fbe707; -[SCMemoriesMonetizationStorageQuotaViolation init] */

void FUN_103fbe6dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesMonetizationServicesAPI.StorageQuotaViolation",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbe708);
  (*pcVar1)();
}



/* Entry: 103fbe708; end: 103fbe743; -[SCMemoriesMonetizationStorageQuotaViolation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbe708(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_1138127d0;
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000103fbe740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 103fbe744; end: 103fbe753; -[SCMemoriesMonetizationStorageQuotaUpsell totalSnapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fbe744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303e928);
}



/* Entry: 103fbe754; end: 103fbe763; -[SCMemoriesMonetizationStorageQuotaUpsell inceptionYear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fbe754(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303e930);
}



/* Entry: 103fbe764; end: 103fbe773; -[SCMemoriesMonetizationStorageQuotaUpsell gracePeriodInMonths] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fbe764(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303e938);
}



/* Entry: 103fbe774; end: 103fbe85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbe774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303e928) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303e930) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11303e938) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbe85c; end: 103fbe8cf; -[SCMemoriesMonetizationStorageQuotaUpsell initWithTotalSnapCount:inceptionYear:gracePeriodInMonths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbe85c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11303e928) = param_3;
  *(undefined8 *)(param_1 + _DAT_11303e930) = param_4;
  *(undefined8 *)(param_1 + _DAT_11303e938) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbe8d0; end: 103fbe93b; -[SCMemoriesMonetizationStorageQuotaUpsell valdi] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbe8d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11303e928);
  lVar2 = *(long *)(param_1 + _DAT_11303e930);
  lVar3 = *(long *)(param_1 + _DAT_11303e938);
  _objc_allocWithZone(PTR_PTR_1126adb38);
  func_0x000107c48dfc((double)lVar1,(double)lVar2,(double)lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fbe93c; end: 103fbe99b; -[SCMemoriesMonetizationStorageQuotaUpsell init] */

void FUN_103fbe93c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesMonetizationServicesAPI.StorageQuotaUpsell",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbe968);
  (*pcVar1)();
}



/* Entry: 103fbe99c; end: 103fbeb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103fbe99c(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = lStack_68;
      if ((*(long *)(unaff_x20 + _DAT_11303e908) == *(long *)(lStack_68 + _DAT_11303e908)) &&
         (*(long *)(unaff_x20 + _DAT_11303e910) == *(long *)(lStack_68 + _DAT_11303e910))) {
        uVar5 = *(ulong *)(unaff_x20 + _DAT_11303e918);
        lVar7 = *(long *)(lStack_68 + _DAT_11303e918);
        if (uVar5 == 0) {
          if (lVar7 == 0) {
LAB_103fbeab0:
            lVar6 = *(long *)(unaff_x20 + _DAT_11303e920);
            lVar7 = *(long *)(lStack_68 + _DAT_11303e920);
            if (lVar6 != 0) {
              uVar4 = 0;
              if (lVar7 != 0) {
                func_0x000103fbeb64();
                _objc_retain(lVar7);
                _objc_retain(lVar6);
                lVar3 = lVar6;
                __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                uVar4 = (uint)lVar3;
                _objc_release(lVar6);
                _objc_release(lVar7);
              }
              _objc_release(lStack_68);
              goto LAB_103fbeb40;
            }
            lVar6 = lVar7;
            _objc_retain(lVar7);
            _objc_release(lStack_68);
            if (lVar7 == 0) {
              uVar4 = 1;
              goto LAB_103fbeb40;
            }
          }
        }
        else if (lVar7 != 0) {
          func_0x000103fbeb84(0);
          _objc_retain(lVar7);
          _objc_retain();
          uVar2 = uVar5;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          _objc_release(uVar5);
          _objc_release(lVar7);
          if ((uVar2 & 1) != 0) goto LAB_103fbeab0;
        }
      }
      _objc_release(lVar6);
    }
  }
  uVar4 = 0;
LAB_103fbeb40:
  return uVar4 & 1;
}



/* Entry: 103fbeb64; end: 103fbebbb;  */

void FUN_103fbeb64(void)

{
  _objc_opt_self(&PTR_PTR_112975c40);
  return;
}



/* Entry: 103fbebbc; end: 103fbebc7; -[SCMemoriesMonetizationStorageQuotaState isEqual:] */

uint FUN_103fbebbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103fbe99c(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103fbebc8; end: 103fbec6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103fbebc8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar1 = unaff_x20 + _DAT_1138127d0;
      __s10Foundation4DateV2eeoiySbAC_ACtFZ(lVar1,lStack_58 + _DAT_1138127d0);
      uVar3 = (uint)lVar1;
      _objc_release(lStack_58);
      goto LAB_103fbec58;
    }
  }
  uVar3 = 0;
LAB_103fbec58:
  return uVar3 & 1;
}



/* Entry: 103fbec70; end: 103fbec7b; -[SCMemoriesMonetizationStorageQuotaViolation isEqual:] */

uint FUN_103fbec70(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103fbebc8(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103fbec7c; end: 103fbed53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103fbec7c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      if ((*(long *)(unaff_x20 + _DAT_11303e928) == *(long *)(lStack_58 + _DAT_11303e928)) &&
         (*(long *)(unaff_x20 + _DAT_11303e930) == *(long *)(lStack_58 + _DAT_11303e930))) {
        lVar2 = *(long *)(unaff_x20 + _DAT_11303e938);
        lVar3 = *(long *)(lStack_58 + _DAT_11303e938);
        _objc_release();
        return lVar2 == lVar3;
      }
      _objc_release();
    }
  }
  return false;
}



/* Entry: 103fbed54; end: 103fbed5f; -[SCMemoriesMonetizationStorageQuotaUpsell isEqual:] */

uint FUN_103fbed54(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103fbec7c(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103fbed60; end: 103fbedeb;  */

uint FUN_103fbed60(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*param_4)(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103fbedec; end: 103fbeec3; -[SCMemoriesMonetizationStorageQuotaViolation description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbedec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  __ss11_StringGutsV4growyySiF(0x2b);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar1 = 0;
  __s10Foundation4DateVMa(0);
  uVar2 = uVar1;
  func_0x0001010caec0();
  __ss23CustomStringConvertibleP11descriptionSSvgTj(uVar1,uVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  _objc_release(param_1);
  uVar2 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f1d8390);
  _swift_bridgeObjectRelease(0x800000010f1d8390);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fbeec4; end: 103fbef1b; -[SCMemoriesMonetizationStorageQuotaUpsell description] */

void FUN_103fbeec4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fbef1c();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fbef1c; end: 103fbf073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103fbef1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  __ss11_StringGutsV4growyySiF(0x52);
  __sSS6appendyySSF(0xd000000000000023,0x800000010f1d83c0);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (_DAT_11303e928,PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0xd000000000000011,0x800000010f1d83f0);
  puVar2 = puVar3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(_DAT_11303e930,puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0xd000000000000017,0x800000010f1d8410);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(_DAT_11303e938,puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 103fbf074; end: 103fbf093;  */

void FUN_103fbf074(void)

{
  _objc_opt_self(&PTR_PTR_112975aa0);
  return;
}



/* Entry: 103fbf094; end: 103fbf09b;  */

void FUN_103fbf094(void)

{
  if (lRam000000011303e990 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7dde00);
  return;
}



/* Entry: 103fbf09c; end: 103fbf107;  */

void FUN_103fbf09c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 103fbf108; end: 103fbf133;  */

void FUN_103fbf108(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fbf134; end: 103fbf1cb;  */

undefined8
FUN_103fbf134(ulong param_1,long param_2,long param_3,char param_4,ulong param_5,long param_6,
             long param_7,char param_8)

{
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
    return 0;
  }
  if (param_4 == '\x01') {
    if (param_8 == '\x01') {
      return 1;
    }
  }
  else if ((param_8 != '\x01') && (param_3 == param_7)) {
    return 1;
  }
  return 0;
}



/* Entry: 103fbf1cc; end: 103fbf1f7;  */

long FUN_103fbf1cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fbf1f8; end: 103fbf1ff;  */

void FUN_103fbf1f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103fbf200; end: 103fbf23b;  */

undefined8 * FUN_103fbf200(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_bridgeObjectRetain();
  return param_1;
}


