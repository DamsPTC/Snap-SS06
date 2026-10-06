/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033aac00; end: 1033aac4b; +[_TtC11COSServices12COSConstants useOverlayChallengeViewCofKey] */

void FUN_1033aac00(void)

{
  func_0x000107c5fadc(0xd000000000000023,0x800000010f146a70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033aac4c; end: 1033aac87; -[_TtC11COSServices12COSConstants init] */

void FUN_1033aac4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001033aac2c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033aac88; end: 1033aacb7;  */

void FUN_1033aac88(void)

{
  func_0x0001033aac2c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033aacb8; end: 1033aacbb; -[_TtC11COSServices12COSConstants .cxx_destruct] */

void FUN_1033aacb8(void)

{
  return;
}



/* Entry: 1033aacbc; end: 1033aaccb; -[_TtC11COSServices11COSServices registrationCos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033aacbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f60ef0));
  return;
}



/* Entry: 1033aaccc; end: 1033aacdb; -[_TtC11COSServices11COSServices arcpCos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033aaccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f60ef8));
  return;
}



/* Entry: 1033aacdc; end: 1033aaceb; -[_TtC11COSServices11COSServices loginCos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033aacdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f60f00));
  return;
}



/* Entry: 1033aacec; end: 1033aadd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033aacec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60ef0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f60ef8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f60f00) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033aadd4; end: 1033aae33; -[_TtC11COSServices11COSServices init] */

void FUN_1033aadd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServices.COSServices",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033aae00);
  (*pcVar1)();
}



/* Entry: 1033aae34; end: 1033aae7b; -[_TtC11COSServices11COSServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033aae50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033aae54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033aae34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60ef0));
  return;
}



/* Entry: 1033aae7c; end: 1033aae9b;  */

void FUN_1033aae7c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d5c80);
  return;
}



/* Entry: 1033aae9c; end: 1033aae9f;  */

void FUN_1033aae9c(void)

{
  return;
}



/* Entry: 1033aaea0; end: 1033aaeef;  */

void FUN_1033aaea0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1033aaef0; end: 1033aaf5b; +[_TtC24SharedWebCredentialUtils24SharedWebCredentialUtils addSharedWebCredentialWithUsername:password:] */

/* WARNING: Possible PIC construction at 0x0001033aaf44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033aaf48) */

void FUN_1033aaef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c5faec(param_3);
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
  }
  FUN_1033aafc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1033aaf5c; end: 1033aaf97; -[_TtC24SharedWebCredentialUtils24SharedWebCredentialUtils init] */

void FUN_1033aaf5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1033ab0c4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033aaf98; end: 1033aafc7;  */

void FUN_1033aaf98(void)

{
  FUN_1033ab0c4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033aafc8; end: 1033ab0c3;  */

void FUN_1033aafc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef12950);
  func_0x000107c5fadc(param_1,param_2);
  uVar3 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar3 = param_3;
  }
  pcStack_50 = FUN_1033aae9c;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1033aaea0;
  puStack_58 = &UNK_11064b158;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c60b4c(uVar1,param_1,uVar3,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1033ab0c4; end: 1033ab0e3;  */

void FUN_1033ab0c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d5d50);
  return;
}



/* Entry: 1033ab0e4; end: 1033ab0ff;  */

void FUN_1033ab0e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1033ab100; end: 1033ab16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ab100(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1033ab4f4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f60f60) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1033ab16c; end: 1033ab1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ab16c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60f60) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033ab1d8; end: 1033ab237; -[_TtC37PlayGamesScopedFactoryServiceProvider23PlayGamesScopedServices init] */

void FUN_1033ab1d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesScopedFactoryServiceProvider.PlayGamesScopedServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033ab204);
  (*pcVar1)();
}



/* Entry: 1033ab238; end: 1033ab247; -[_TtC37PlayGamesScopedFactoryServiceProvider23PlayGamesScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ab238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f60f60));
  return;
}



/* Entry: 1033ab248; end: 1033ab2b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ab248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11064b348;
  func_0x000107c613fc(&UNK_11064b348,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1033ab58c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1033ab2b4; end: 1033ab34f;  */

void FUN_1033ab2b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11064b258;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11064b258;
  return;
}



/* Entry: 1033ab350; end: 1033ab387;  */

void FUN_1033ab350(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1033ab388; end: 1033ab38f;  */

undefined8 FUN_1033ab388(void)

{
  return 0x1b;
}



/* Entry: 1033ab390; end: 1033ab4c3;  */

void FUN_1033ab390(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11064b370;
  func_0x000107c613fc(&UNK_11064b370,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1033ab564;
  func_0x00010058fa64(FUN_1033ab564,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1033ab4c4; end: 1033ab4f3;  */

undefined ** FUN_1033ab4c4(void)

{
  return &PTR_DAT_113066718;
}



/* Entry: 1033ab4f4; end: 1033ab513;  */

void FUN_1033ab4f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d5e00);
  return;
}



/* Entry: 1033ab514; end: 1033ab563;  */

undefined1  [16] FUN_1033ab514(void)

{
  return ZEXT816(0x11064b2a8);
}



/* Entry: 1033ab564; end: 1033ab58b;  */

void FUN_1033ab564(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1033ab58c; end: 1033ab58f;  */

void FUN_1033ab58c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033ab590; end: 1033ab8df;  */

/* WARNING: Possible PIC construction at 0x0001033ab790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab7d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ab8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033ab8a4) */
/* WARNING: Removing unreachable block (ram,0x0001033ab894) */
/* WARNING: Removing unreachable block (ram,0x0001033ab884) */
/* WARNING: Removing unreachable block (ram,0x0001033ab874) */
/* WARNING: Removing unreachable block (ram,0x0001033ab864) */
/* WARNING: Removing unreachable block (ram,0x0001033ab854) */
/* WARNING: Removing unreachable block (ram,0x0001033ab844) */
/* WARNING: Removing unreachable block (ram,0x0001033ab834) */
/* WARNING: Removing unreachable block (ram,0x0001033ab824) */
/* WARNING: Removing unreachable block (ram,0x0001033ab814) */
/* WARNING: Removing unreachable block (ram,0x0001033ab804) */
/* WARNING: Removing unreachable block (ram,0x0001033ab7f4) */
/* WARNING: Removing unreachable block (ram,0x0001033ab7e4) */
/* WARNING: Removing unreachable block (ram,0x0001033ab7d4) */
/* WARNING: Removing unreachable block (ram,0x0001033ab7c4) */
/* WARNING: Removing unreachable block (ram,0x0001033ab7b4) */
/* WARNING: Removing unreachable block (ram,0x0001033ab7a4) */
/* WARNING: Removing unreachable block (ram,0x0001033ab794) */
/* WARNING: Removing unreachable block (ram,0x0001033ab8b4) */

void FUN_1033ab590(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11064b3f8;
  func_0x000107c613fc(&UNK_11064b3f8,0x148,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  uVar2 = 0x112f60fd0;
  func_0x0001000285a8(0x112f60fd0,&UNK_10dbbd4b8);
  func_0x000107c613fc();
  pcVar3 = FUN_1033ac59c;
  func_0x0001000841fc(FUN_1033ac59c,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbbd490,0x25,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1033ab8e0; end: 1033ab95b;  */

void FUN_1033ab8e0(void)

{
  long unaff_x20;
  
  FUN_1033ab590(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 1033ab95c; end: 1033ab96b;  */

undefined1  [16] FUN_1033ab95c(void)

{
  return ZEXT816(0x11064b3d8);
}



/* Entry: 1033ab96c; end: 1033ac447;  */

void FUN_1033ab96c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  code *pcVar22;
  code *pcVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 in_x4;
  undefined8 in_x7;
  undefined8 uVar26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 auStack_70 [2];
  
  uVar26 = *param_2;
  func_0x0001000285a8(0x112f60fd8,&UNK_10dbbd4c0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar26;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1033afe00();
  func_0x000100082720("PlayGamesGamesActionBarServiceProvider",0x26,2);
  func_0x0001000285a8(0x112f60fe0,&UNK_10dbbd510);
  puVar3 = &UNK_11064b420;
  func_0x000107c613fc(&UNK_11064b420,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar3 + 0x20) = in_stack_00000050;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(in_stack_00000048);
  func_0x000107c6157c(in_stack_00000050);
  pcVar4 = FUN_1033ac640;
  func_0x0001000823a8(FUN_1033ac640,puVar3);
  func_0x000100082720("GamesConversationMetadataEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f60fe8,&UNK_10dbbd4d0);
  func_0x000107c6157c(puVar1);
  uVar26 = 0x1033ac64c;
  func_0x0001000823a8(0x1033ac64c,puVar1);
  func_0x000100082720("LensPromptPlayGamesDependencyServiceProviderWrapperServiceProvider",0x42,2);
  puVar5 = puVar1;
  FUN_10369fcc0(puVar1,in_stack_00000058,in_stack_00000060,in_stack_00000068,in_stack_00000070,
                in_stack_00000078,in_stack_00000050,in_stack_00000080,in_stack_00000088);
  func_0x000100082720("LensPlusPaywallPresentationOnPlayGamesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f60ff0,&UNK_10dbbd4d8);
  func_0x000107c6157c(uVar26);
  uVar6 = 0x1033ac654;
  func_0x0001000823a8(0x1033ac654,uVar26);
  pcVar7 = "PlayGamesScopedLensPromptDependencyProviderServiceProvider";
  func_0x000100082720("PlayGamesScopedLensPromptDependencyProviderServiceProvider",0x3a,2);
  func_0x0001033de2e8();
  pcVar8 = "SCLensCreatorProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensCreatorProfileScopeExposerSubjectServiceProvider",0x36,2);
  FUN_1033de334();
  pcVar9 = "SCLensInfoCardsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensInfoCardsScopeExposerSubjectServiceProvider",0x31,2);
  FUN_1033de380();
  func_0x000100082720("SCViewfinderScopeExposerSubjectServiceProvider",0x2e,2);
  puVar10 = puVar2;
  FUN_1033f4a6c(puVar2,in_stack_00000008,in_stack_00000048,in_stack_00000090,puVar1,
                in_stack_00000098,in_stack_00000060,in_x7,in_stack_000000a0,in_x4,in_stack_00000068,
                in_stack_000000a8,in_stack_00000050);
  func_0x000100082720("PlayGamesLensScopedFactoryServiceProvider",0x29,2);
  pcVar11 = pcVar7;
  FUN_1033de328();
  func_0x000100082720("SCLensCreatorProfileScopeExposerObservableServiceProvider",0x39,2);
  pcVar12 = pcVar8;
  FUN_1033de374();
  func_0x000100082720("SCLensInfoCardsScopeExposerObservableServiceProvider",0x34,2);
  pcVar13 = pcVar9;
  FUN_1033de40c();
  func_0x000100082720("SCViewfinderScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar14 = FUN_1033ab350;
  func_0x0001000823a8(FUN_1033ab350,0);
  func_0x000100082720("PlayGamesScopedServicesCleanupRelayServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f60ff8,&UNK_10dbbd670);
  puVar3 = &UNK_11064b448;
  func_0x000107c613fc(&UNK_11064b448,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = in_stack_00000050;
  *(undefined8 *)(puVar3 + 0x20) = in_stack_000000b0;
  *(undefined8 *)(puVar3 + 0x28) = in_stack_000000b8;
  *(char **)(puVar3 + 0x30) = pcVar13;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(in_stack_00000050);
  func_0x000107c6157c(in_stack_000000b0);
  func_0x000107c6157c(in_stack_000000b8);
  func_0x000107c6157c(pcVar13);
  uVar15 = 0x1033ac65c;
  func_0x0001000823a8(0x1033ac65c,puVar3);
  func_0x000100082720("GamesLensViewfinderEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f61000,&UNK_10dbbd4e0);
  puVar3 = &UNK_11064b470;
  func_0x000107c613fc(&UNK_11064b470,0x50,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = in_stack_000000c0;
  *(undefined8 **)(puVar3 + 0x20) = puVar5;
  *(undefined8 *)(puVar3 + 0x28) = in_stack_00000060;
  *(undefined8 *)(puVar3 + 0x30) = in_stack_00000068;
  *(undefined8 *)(puVar3 + 0x38) = in_x4;
  *(undefined8 *)(puVar3 + 0x40) = in_stack_00000070;
  *(undefined8 *)(puVar3 + 0x48) = in_stack_00000000;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(in_stack_000000c0);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(in_stack_00000060);
  func_0x000107c6157c(in_stack_00000068);
  func_0x000107c6157c(in_x4);
  func_0x000107c6157c(in_stack_00000070);
  func_0x000107c6157c(in_stack_00000000);
  uVar16 = 0x1033ac66c;
  func_0x0001000823a8(0x1033ac66c,puVar3);
  func_0x000100082720("GamesWebLensesLensPlusCapabilityEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f61008,&UNK_10dbbd970);
  puVar3 = &UNK_11064b498;
  func_0x000107c613fc(&UNK_11064b498,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  uVar17 = 0x1033ac678;
  func_0x0001000823a8(0x1033ac678,puVar3);
  func_0x000100082720("LensPromptPlayGamesDependencyProviderEntryPointWrapperServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f61010,&UNK_10dbbd4f0);
  puVar3 = &UNK_11064b4c0;
  func_0x000107c613fc(&UNK_11064b4c0,0x50,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = in_stack_00000060;
  *(undefined8 *)(puVar3 + 0x20) = in_stack_00000068;
  *(undefined8 *)(puVar3 + 0x28) = in_x4;
  *(undefined8 **)(puVar3 + 0x30) = puVar5;
  *(undefined8 *)(puVar3 + 0x38) = in_stack_00000018;
  *(undefined8 *)(puVar3 + 0x40) = in_stack_00000050;
  *(undefined8 *)(puVar3 + 0x48) = in_stack_00000000;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(in_stack_00000050);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(in_stack_00000060);
  func_0x000107c6157c(in_stack_00000068);
  func_0x000107c6157c(in_x4);
  func_0x000107c6157c(in_stack_00000000);
  func_0x000107c6157c(in_stack_00000018);
  pcVar18 = FUN_1033ac6dc;
  func_0x0001000823a8(FUN_1033ac6dc,puVar3);
  func_0x000100082720("PlayGamesLensPlusUpsellEntryPointWrapperServiceProvider",0x37,2);
  puVar19 = puVar10;
  func_0x00010433cae0();
  func_0x000100082720("PlayGamesLensScopeServicesServiceProvider",0x29,2);
  puVar20 = puVar19;
  FUN_1033ddfdc(puVar19,uVar6,pcVar7,pcVar8,pcVar9);
  func_0x000100082720("PlayGamesScopeGraphBridgeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112f61018,&UNK_10dbbde20);
  puVar3 = &UNK_11064b4e8;
  func_0x000107c613fc(&UNK_11064b4e8,0x60,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = in_stack_000000c8;
  *(undefined8 *)(puVar3 + 0x20) = in_stack_000000d0;
  *(undefined8 *)(puVar3 + 0x28) = in_stack_000000d8;
  *(undefined8 *)(puVar3 + 0x30) = in_stack_000000e0;
  *(undefined8 *)(puVar3 + 0x38) = in_stack_000000e8;
  *(undefined8 *)(puVar3 + 0x40) = in_stack_000000f0;
  *(undefined8 *)(puVar3 + 0x48) = in_stack_000000f8;
  *(char **)(puVar3 + 0x50) = pcVar12;
  *(char **)(puVar3 + 0x58) = pcVar11;
  func_0x000107c6157c();
  func_0x000107c6157c(in_stack_000000c8);
  func_0x000107c6157c(in_stack_000000d0);
  func_0x000107c6157c(in_stack_000000d8);
  func_0x000107c6157c(in_stack_000000e0);
  func_0x000107c6157c(in_stack_000000e8);
  func_0x000107c6157c(in_stack_000000f0);
  func_0x000107c6157c(in_stack_000000f8);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(pcVar11);
  uVar21 = 0x1033ac700;
  func_0x0001000823a8(0x1033ac700,puVar3);
  func_0x000100082720("SCPlayGamesLensInfoCardEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f61020,&UNK_10dbbd500);
  puVar3 = &UNK_11064b510;
  func_0x000107c613fc(&UNK_11064b510,0x60,7);
  *(code **)(puVar3 + 0x10) = pcVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar15;
  *(undefined8 *)(puVar3 + 0x20) = uVar16;
  *(undefined8 *)(puVar3 + 0x28) = uVar17;
  *(undefined8 *)(puVar3 + 0x30) = uVar26;
  *(code **)(puVar3 + 0x38) = pcVar18;
  *(undefined8 **)(puVar3 + 0x40) = puVar1;
  *(undefined8 **)(puVar3 + 0x48) = puVar20;
  *(code **)(puVar3 + 0x50) = pcVar14;
  *(undefined8 *)(puVar3 + 0x58) = uVar21;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar26);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(pcVar18);
  func_0x000107c6157c(puVar20);
  func_0x000107c6157c(pcVar14);
  func_0x000107c6157c(uVar21);
  pcVar22 = FUN_1033ac778;
  func_0x0001000823a8(FUN_1033ac778,puVar3);
  func_0x000100082720("PlayGamesScopeInitializationPluginRegistryServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f60f68,&UNK_10dbbd290);
  func_0x000107c6157c(pcVar22);
  pcVar23 = FUN_1033ac7bc;
  func_0x0001000823a8(FUN_1033ac7bc,pcVar22);
  func_0x000100082720("PlayGamesScopeInitializationServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112f60f58,&UNK_10dbbd280);
  func_0x000107c6157c(pcVar23);
  uVar24 = 0x1033ac7c4;
  func_0x0001000823a8(0x1033ac7c4,pcVar23);
  func_0x000100082720("PlayGamesScopedServicesServiceProvider",0x26,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11064b538;
  func_0x000107c613fc(&UNK_11064b538,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar24;
  *(code **)(puVar3 + 0x18) = pcVar14;
  func_0x000107c6157c(pcVar14);
  pcVar25 = FUN_1033ac7f8;
  func_0x0001000823a8(FUN_1033ac7f8,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(puVar19);
  func_0x000107c61574(puVar20);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(pcVar23);
  func_0x000100082720("PlayGamesScopeEntryPointProvider",0x20,2);
  *param_1 = pcVar25;
  return;
}



/* Entry: 1033ac448; end: 1033ac59b;  */

void FUN_1033ac448(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033ac59c; end: 1033ac63f;  */

void FUN_1033ac59c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1033ab96c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 1033ac640; end: 1033ac67f;  */

void FUN_1033ac640(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1033acb3c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_1033fb948(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x0001033fb724();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_1033fb774();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1033ac680; end: 1033ac6db;  */

void FUN_1033ac680(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033ac6dc; end: 1033ac70b;  */

void FUN_1033ac6dc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_1033ae100();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  FUN_1033ffcc4(0);
  func_0x000107c613fc();
  uVar2 = uStack_68;
  FUN_1033fefb4(uStack_68,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90,uStack_98,uStack_a0);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar9 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  uVar10 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar2);
  FUN_1033fefd0();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uVar2);
  *param_1 = lVar1;
  return;
}



/* Entry: 1033ac70c; end: 1033ac777;  */

void FUN_1033ac70c(void)

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



/* Entry: 1033ac778; end: 1033ac783;  */

void FUN_1033ac778(void)

{
  long unaff_x20;
  
  FUN_1033aefa0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1033ac784; end: 1033ac7bb;  */

void FUN_1033ac784(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1033ac7bc; end: 1033ac7cb;  */

void FUN_1033ac7bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112f60fc0,&UNK_10dbbd470);
  uVar1 = 0;
  func_0x0001003746a4();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033ac7cc; end: 1033ac7f7;  */

void FUN_1033ac7cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033ac7f8; end: 1033ac7ff;  */

void FUN_1033ac7f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11064b258;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11064b258;
  return;
}



/* Entry: 1033ac800; end: 1033ac923;  */

void FUN_1033ac800(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1033acb3c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_1033fb948(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001033fb724();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  FUN_1033fb774();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1033ac924; end: 1033aca03;  */

long FUN_1033ac924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_1033fb948(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001033fb724();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_1033fb774();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 1033aca04; end: 1033aca37;  */

void FUN_1033aca04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033aca38; end: 1033aca3f;  */

undefined8 FUN_1033aca38(void)

{
  return 0x1b;
}



/* Entry: 1033aca40; end: 1033acac3;  */

void FUN_1033aca40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1033acb7c,param_2,FUN_1033acb80,param_2,FUN_1033acba8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1033acac4; end: 1033acb0b;  */

undefined8 FUN_1033acac4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001033fb794();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1033acb0c; end: 1033acb3b;  */

undefined ** FUN_1033acb0c(void)

{
  return &PTR_DAT_113066718;
}



/* Entry: 1033acb3c; end: 1033acb5b;  */

void FUN_1033acb3c(void)

{
  func_0x000107c61168(&PTR_PTR_112f61090);
  return;
}



/* Entry: 1033acb5c; end: 1033acb7f;  */

undefined1  [16] FUN_1033acb5c(void)

{
  return ZEXT816(0x11064b590);
}



/* Entry: 1033acb80; end: 1033acba7;  */

void FUN_1033acb80(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1033acba8; end: 1033acbaf;  */

undefined8 FUN_1033acba8(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001033fb794();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1033acbb0; end: 1033acd93;  */

void FUN_1033acbb0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1033ad060();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  FUN_1033fd1a0(0);
  func_0x000107c613fc();
  uVar4 = uStack_68;
  FUN_1033fca84(uStack_68,uVar1,uVar2,uVar3,puVar5);
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar4);
  FUN_1033fca98();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1033acd94; end: 1033acf17;  */

long FUN_1033acd94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x0001000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_1033fd1a0(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1033fca84(param_1,param_2,param_3,param_4,puVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_1033fca98();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 1033acf18; end: 1033acf5b;  */

void FUN_1033acf18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033acf5c; end: 1033acf63;  */

undefined8 FUN_1033acf5c(void)

{
  return 0x1b;
}



/* Entry: 1033acf64; end: 1033acfe7;  */

void FUN_1033acf64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1033ad0a0,param_2,FUN_1033ad0a4,param_2,FUN_1033ad0cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1033acfe8; end: 1033ad02f;  */

undefined8 FUN_1033acfe8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1033fd0a4();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1033ad030; end: 1033ad05f;  */

undefined ** FUN_1033ad030(void)

{
  return &PTR_DAT_113066718;
}



/* Entry: 1033ad060; end: 1033ad07f;  */

void FUN_1033ad060(void)

{
  func_0x000107c61168(&PTR_PTR_112f61168);
  return;
}



/* Entry: 1033ad080; end: 1033ad0a3;  */

undefined1  [16] FUN_1033ad080(void)

{
  return ZEXT816(0x11064b610);
}



/* Entry: 1033ad0a4; end: 1033ad0cb;  */

void FUN_1033ad0a4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1033ad0cc; end: 1033ad0d3;  */

undefined8 FUN_1033ad0cc(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1033fd0a4();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1033ad0d4; end: 1033ad38b;  */

void FUN_1033ad0d4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_1033ad504();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  FUN_1033fe328(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uStack_a0);
  func_0x0001033fd7ec(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uStack_a0);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 1033ad38c; end: 1033ad3ff;  */

void FUN_1033ad38c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1033ad400; end: 1033ad407;  */

undefined8 FUN_1033ad400(void)

{
  return 0x1b;
}



/* Entry: 1033ad408; end: 1033ad48b;  */

void FUN_1033ad408(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1033ad544,param_2,FUN_1033ad548,param_2,FUN_1033ad570,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1033ad48c; end: 1033ad4d3;  */

undefined8 FUN_1033ad48c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1033fe148();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1033ad4d4; end: 1033ad503;  */

undefined ** FUN_1033ad4d4(void)

{
  return &PTR_DAT_113066718;
}



/* Entry: 1033ad504; end: 1033ad523;  */

void FUN_1033ad504(void)

{
  func_0x000107c61168(&PTR_PTR_112f61250);
  return;
}



/* Entry: 1033ad524; end: 1033ad547;  */

undefined1  [16] FUN_1033ad524(void)

{
  return ZEXT816(0x11064b690);
}



/* Entry: 1033ad548; end: 1033ad56f;  */

void FUN_1033ad548(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1033ad570; end: 1033ad577;  */

undefined8 FUN_1033ad570(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1033fe148();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1033ad578; end: 1033ad653;  */

void FUN_1033ad578(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1033ad7e4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1033e2be4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x0001033e2904();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  func_0x000107c6157c();
  FUN_1033e2954();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 1033ad654; end: 1033ad6fb;  */

long FUN_1033ad654(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_1033e2be4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001033e2904();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_1033e2954();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 1033ad6fc; end: 1033ad727;  */

void FUN_1033ad6fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033ad728; end: 1033ad72f;  */

undefined8 FUN_1033ad728(void)

{
  return 0x1b;
}



/* Entry: 1033ad730; end: 1033ad7b3;  */

void FUN_1033ad730(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1033ad824,param_2,FUN_1033ad828,param_2,0x1033ad850,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1033ad7b4; end: 1033ad7e3;  */

undefined ** FUN_1033ad7b4(void)

{
  return &PTR_DAT_113066718;
}



/* Entry: 1033ad7e4; end: 1033ad803;  */

void FUN_1033ad7e4(void)

{
  func_0x000107c61168(&PTR_PTR_112f61350);
  return;
}



/* Entry: 1033ad804; end: 1033ad827;  */

undefined1  [16] FUN_1033ad804(void)

{
  return ZEXT816(0x11064b710);
}



/* Entry: 1033ad828; end: 1033ad87b;  */

void FUN_1033ad828(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1033ad87c; end: 1033ad913;  */

void FUN_1033ad87c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_1033adabc();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1033e2d14();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1033e2c24();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 1033ad914; end: 1033ad97f;  */

long FUN_1033ad914(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1033e2d14();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  FUN_1033e2c24();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 1033ad980; end: 1033ad9ab;  */

void FUN_1033ad980(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033ad9ac; end: 1033ad9ff;  */

void FUN_1033ad9ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033ada00; end: 1033ada07;  */

undefined8 FUN_1033ada00(void)

{
  return 0x1b;
}



/* Entry: 1033ada08; end: 1033ada8b;  */

void FUN_1033ada08(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1033adb0c,param_2,FUN_1033adb10,param_2,0x1033adb38,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1033ada8c; end: 1033adabb;  */

undefined ** FUN_1033ada8c(void)

{
  return &PTR_DAT_113066718;
}



/* Entry: 1033adabc; end: 1033adadb;  */

void FUN_1033adabc(void)

{
  func_0x000107c61168(&PTR_PTR_112f61420);
  return;
}



/* Entry: 1033adadc; end: 1033adb0f;  */

undefined1  [16] FUN_1033adadc(void)

{
  return ZEXT816(0x11064b790);
}



/* Entry: 1033adb10; end: 1033adb63;  */

void FUN_1033adb10(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1033adb64; end: 1033adf87;  */

void FUN_1033adb64(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_1033ae100();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  FUN_1033ffcc4(0);
  func_0x000107c613fc();
  uVar1 = uStack_68;
  FUN_1033fefb4(uStack_68,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90,uStack_98,uStack_a0);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar8 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar1);
  FUN_1033fefd0();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}


