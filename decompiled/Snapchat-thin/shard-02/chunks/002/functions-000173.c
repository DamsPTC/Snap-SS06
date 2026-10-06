/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101acdfa0; end: 101acdfc7;  */

void FUN_101acdfa0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c3d0fc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 != 0) {
      func_0x000107c61170(lVar4);
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61428(lVar1 + 0x10,auStack_70,0,0);
  if (*(long *)(lVar1 + 0x10) == 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_88,1,0);
    *(undefined1 *)(lVar2 + 0x10) = 1;
  }
  else {
    func_0x000107c4218c();
    func_0x000107c61428(lVar1 + 0x10,auStack_88,1,0);
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 101acdfc8; end: 101ace003; -[_TtC24SCPlusAppIconImageLoader24SCPlusAppIconImageLoader supportedURLSchemes] */

void FUN_101acdfc8(void)

{
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ace004; end: 101ace0fb;  */

void FUN_101ace004(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  func_0x000107c5ed90();
  lVar4 = param_2;
  func_0x000108543f0c();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  puVar2 = PTR___sSSN_11034da80;
  lVar3 = lVar4;
  func_0x000107c5f9e8(lVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(lVar4);
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_101ace0d0:
    func_0x000107c6142c(lVar3);
    param_1[3] = puVar2;
  }
  else {
    func_0x000107c61434(lVar3);
    lVar4 = 0x6d614e6567616d69;
    uVar5 = 0xe900000000000065;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(lVar3);
      goto LAB_101ace0d0;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + lVar4 * 0x10);
    uVar6 = *puVar1;
    lVar4 = puVar1[1];
    func_0x000107c61434(lVar4);
    func_0x000107c61430(lVar3,2);
    param_1[3] = puVar2;
    if (lVar4 != 0) goto LAB_101ace0e4;
  }
  uVar6 = 0;
  lVar4 = -0x2000000000000000;
LAB_101ace0e4:
  *param_1 = uVar6;
  param_1[1] = lVar4;
  return;
}



/* Entry: 101ace0fc; end: 101ace1cf; -[_TtC24SCPlusAppIconImageLoader24SCPlusAppIconImageLoader requestPayloadWithURL:error:] */

void FUN_101ace0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_101ace004(auStack_60,puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  puVar2 = auStack_60;
  func_0x0001006732c8(puVar2,uStack_48);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101ace1d0; end: 101ace2b3; -[_TtC24SCPlusAppIconImageLoader24SCPlusAppIconImageLoader loadImageWithRequestPayload:parameters:completion:] */

void FUN_101ace1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  puVar1 = auStack_50;
  uStack_60 = param_6;
  FUN_101ace2f0(puVar1,FUN_101ace410,auStack_70);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101ace2b4; end: 101ace2b7;  */

void FUN_101ace2b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ace2b8; end: 101ace2bb; -[_TtC24SCPlusAppIconImageLoaderP33_5085ED74375C4F4737AE31EEBCE989BE20SCPlusNoOpCancelable cancel] */

void FUN_101ace2b8(void)

{
  return;
}



/* Entry: 101ace2bc; end: 101ace2ef;  */

void FUN_101ace2bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ace2f0; end: 101ace3ef;  */

undefined8 FUN_101ace2f0(undefined8 param_1,code *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  iVar1 = (int)&uStack_70;
  func_0x0001000bb420(param_1,auStack_60);
  func_0x000107c6147c(&uStack_70,auStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar3 = uStack_70;
    func_0x000107c5fadc(uStack_70,uStack_68);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c450cc();
    func_0x000107c61180();
    func_0x000107c6142c(uStack_68);
    func_0x000107c61170(uVar3);
  }
  puVar2 = PTR_PTR_1126b27a8;
  func_0x000107c61168(PTR_PTR_1126b27a8);
  func_0x000107c45160();
  func_0x000107c61180();
  (*param_2)();
  func_0x000107c61170(puVar2);
  uVar3 = 0;
  FUN_101ace3f0(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(puVar4);
  return uVar3;
}



/* Entry: 101ace3f0; end: 101ace40f;  */

void FUN_101ace3f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f44b0);
  return;
}



/* Entry: 101ace410; end: 101ace417;  */

void FUN_101ace410(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101ace418; end: 101ace42f; -[_TtC24SCPlusAppIconImageLoaderP33_5085ED74375C4F4737AE31EEBCE989BE20SCPlusNoOpCancelable init] */

void FUN_101ace418(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ace430; end: 101ace49b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ace430(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101ace5c4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112df9af8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101ace49c; end: 101ace4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ace49c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101ace5c4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df9af8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 101ace4a4; end: 101ace547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ace4a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df9af8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ace548; end: 101ace5c3; -[_TtC27SCAvatarFactoryServicesImpl19SCAvatarFactoryImpl setupAvatarView:] */

/* WARNING: Possible PIC construction at 0x000101ace5a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ace5a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ace548(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112df9af8);
    func_0x000107c61174();
    func_0x000107c615f0(param_3);
    func_0x000107c5dbd4(uVar1);
    func_0x000107c61180();
    func_0x000107c5a484(param_3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 101ace5c4; end: 101ace5e3;  */

void FUN_101ace5c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4560);
  return;
}



/* Entry: 101ace5e4; end: 101ace63f; -[_TtC27SCAvatarFactoryServicesImpl19SCAvatarFactoryImpl init] */

void FUN_101ace5e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAvatarFactoryServicesImpl.SCAvatarFactoryImpl",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ace610);
  (*pcVar1)();
}



/* Entry: 101ace640; end: 101ace64f;  */

undefined1  [16] FUN_101ace640(void)

{
  return ZEXT816(0x11043fb38);
}



/* Entry: 101ace650; end: 101ace65f; -[_TtC27SCAvatarFactoryServicesImpl19SCAvatarFactoryImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ace650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df9af8));
  return;
}



/* Entry: 101ace660; end: 101ace6a7;  */

void FUN_101ace660(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x00010029447c(0);
  func_0x000107c610f8();
  func_0x000103f1fb64(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 101ace6a8; end: 101ace6bf;  */

void FUN_101ace6a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x00010029447c(0);
  func_0x000107c610f8();
  func_0x000103f1fb64(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101ace6c0; end: 101ace733;  */

void FUN_101ace6c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100283fac(0);
  func_0x000107c610f8();
  func_0x000102a33440();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ace734; end: 101ace73b;  */

void FUN_101ace734(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100283fac(0);
  func_0x000107c610f8();
  func_0x000102a33440();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ace73c; end: 101ace803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ace73c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  FUN_101ad0bb0(0);
  func_0x000100083b20(&uStack_58);
  func_0x0001000ad7c4();
  func_0x000100083b20(&lStack_60);
  uVar2 = *(undefined8 *)(lStack_60 + _DAT_1130815a8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_101ace9e8(uStack_58,uVar1,uVar2,uStack_68);
  *param_1 = uStack_58;
  return;
}



/* Entry: 101ace804; end: 101ace83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ace804(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  FUN_101ad0bb0(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_58);
  func_0x0001000ad7c4();
  func_0x000100083b20(&lStack_60);
  uVar2 = *(undefined8 *)(lStack_60 + _DAT_1130815a8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_101ace9e8(uStack_58,uVar1,uVar2,uStack_68);
  *param_1 = uStack_58;
  return;
}



/* Entry: 101ace840; end: 101ace9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ace840(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar4 = lVar1;
  func_0x000107c5036c(lVar1);
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x0001000ad7c4();
  lVar6 = lVar5;
  func_0x0001000ad7c4();
  uVar7 = *(undefined8 *)(lVar2 + _DAT_113081210);
  func_0x000107c4195c(uVar7);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(lVar3 + _DAT_1130815a8);
  func_0x000107c61174(uVar8);
  func_0x000100083b20(&lStack_68);
  puVar9 = PTR_PTR_1126a8918;
  func_0x000107c610f8();
  func_0x000107c45c3c();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lStack_68);
  *param_1 = puVar9;
  return;
}



/* Entry: 101ace9b8; end: 101ace9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ace9b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar4 = lVar1;
  func_0x000107c5036c(lVar1);
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x0001000ad7c4();
  lVar6 = lVar5;
  func_0x0001000ad7c4();
  uVar7 = *(undefined8 *)(lVar2 + _DAT_113081210);
  func_0x000107c4195c(uVar7);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(lVar3 + _DAT_1130815a8);
  func_0x000107c61174(uVar8);
  func_0x000100083b20(&lStack_68);
  puVar9 = PTR_PTR_1126a8918;
  func_0x000107c610f8();
  func_0x000107c45c3c();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lStack_68);
  *param_1 = puVar9;
  return;
}



/* Entry: 101ace9e8; end: 101acebb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101ace9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  (**(code **)(lVar5 + 0x68))
            (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
             lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010eff7040);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar5 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c610f8();
  lVar1 = _DAT_112df9b58;
  func_0x000107c61614(unaff_x20 + _DAT_112df9b58,0);
  *(undefined8 *)(unaff_x20 + _DAT_112df9b60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112df9b68) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112df9b70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112df9b78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112df9b80) = 0xfff0000000000000;
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112df9b88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112df9b90) = param_3;
  *(undefined **)(unaff_x20 + _DAT_112df9b98) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112df9ba0) = param_4;
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar4;
}



/* Entry: 101acebb8; end: 101acecc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101acebb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar2 = auStack_60;
  func_0x000107c610f8();
  lVar1 = _DAT_112df9b58;
  func_0x000107c61614(unaff_x20 + _DAT_112df9b58,0);
  *(undefined8 *)(unaff_x20 + _DAT_112df9b60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112df9b68) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112df9b70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112df9b78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112df9b80) = 0xfff0000000000000;
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112df9b88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112df9b90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112df9b98) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112df9ba0) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 101acecc4; end: 101aced63; -[SCCameraFingerDownWarmerImpl initWithHardwareServicesAPI:resolverFactory:systemConfiguration:performer:replySnapRecencyStore:] */

undefined8
FUN_101acecc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uVar1 = param_3;
  func_0x000101ad0a58(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 101aced64; end: 101acedbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aced64(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112df9b60) != 0) {
    func_0x000107c498fc(0);
  }
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101acedc0; end: 101acee3b; -[SCCameraFingerDownWarmerImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acedc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112df9b60);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c498fc(0,lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101acee3c; end: 101aceec3; -[SCCameraFingerDownWarmerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101acee68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101acee88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101acee6c) */
/* WARNING: Removing unreachable block (ram,0x000101acee8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acee3c(long param_1)

{
  FUN_101ad0b54(param_1 + _DAT_112df9b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df9b88));
  return;
}



/* Entry: 101aceec4; end: 101acf2b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aceec4(undefined8 param_1,char param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112df9b60);
  if (lVar7 == 0) {
    return;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112df9b60) = 0;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112df9b68);
  *(undefined8 *)(unaff_x20 + _DAT_112df9b68) = 0;
  func_0x000107c61170(uVar4);
  lVar2 = _DAT_112df9b70;
  if ((*(byte *)(unaff_x20 + _DAT_112df9b70) & 1) == 0) {
    func_0x000107c6071c();
    *(undefined8 *)(unaff_x20 + _DAT_112df9b80) = param_1;
    cVar10 = param_2;
    if (*(char *)(unaff_x20 + lVar2) != '\0') {
      cVar10 = '\x01';
    }
  }
  else {
    cVar10 = '\x01';
  }
  uVar8 = 0xe900000000000064;
  func_0x000107c498fc(0,lVar7);
  func_0x000107c602fc(0x30);
  func_0x000107c6142c(0xe000000000000000);
  uVar4 = 0x6e776f6e6b6e55;
  if (param_3 == 1) {
    uVar4 = 0x75706e4974616843;
  }
  uVar5 = 0xe700000000000000;
  if (param_3 == 1) {
    uVar5 = 0xe900000000000074;
  }
  uVar9 = 0x726142626154;
  if (param_3 != 2) {
    uVar9 = uVar4;
  }
  uVar4 = 0xe600000000000000;
  if (param_3 != 2) {
    uVar4 = uVar5;
  }
  uVar5 = 0xeb00000000646565;
  uVar1 = 0x4673646e65697246;
  if (param_3 != 0) {
    uVar5 = uVar4;
    uVar1 = uVar9;
  }
  uVar4 = 0x656c6c65636e6163;
  func_0x000107c5fb78(uVar1,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0x6d6f6374756f202c,0xea00000000003d65);
  if (cVar10 == '\0') {
    uVar9 = uVar4;
    uVar5 = 0xe900000000000064;
  }
  else {
    uVar9 = 0x657474696d6d6f63;
    uVar5 = uVar8;
    if (cVar10 != '\x01') {
      uVar5 = 0xe700000000000000;
      uVar9 = 0x64657269707865;
    }
  }
  func_0x000107c5fb78(uVar9,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0x74696d6d6f63202c,0xec0000003d646574);
  bVar3 = *(char *)(unaff_x20 + lVar2) == '\0';
  uVar5 = 0x65757274;
  if (bVar3) {
    uVar5 = 0x65736c6166;
  }
  uVar9 = 0xe400000000000000;
  if (bVar3) {
    uVar9 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar5,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  func_0x000107c6142c(0x800000010eff70e0);
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(0xe000000000000000);
  uVar5 = uVar4;
  if (param_2 != '\0') {
    if (param_2 == '\x02') {
      uVar9 = 0xe700000000000000;
      uVar5 = 0x64657269707865;
      goto LAB_101acf1ac;
    }
    uVar5 = 0x657474696d6d6f63;
  }
  uVar9 = 0xe900000000000064;
LAB_101acf1ac:
  func_0x000107c5fb78(uVar5,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fb78(0x6172656e6567202c,0xed00003d6e6f6974);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  func_0x000107c6142c(0xe800000000000000);
  if (cVar10 != '\0') {
    if (cVar10 == '\x02') {
      uVar8 = 0xe700000000000000;
      uVar4 = 0x64657269707865;
    }
    else {
      uVar4 = 0x657474696d6d6f63;
    }
  }
  FUN_101ad0bd0(uVar4,uVar8,param_3);
  func_0x000107c615e8(lVar7);
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 101acf2b4; end: 101acfa0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acf2b4(double param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  uVar6 = *(ulong *)(param_2 + _DAT_112df9b90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar6 == 0) {
LAB_101acf61c:
    func_0x000107c61170(param_2);
    return;
  }
  uVar9 = uVar6;
  func_0x000107c3f0ec();
  func_0x000107c61180();
  func_0x000107c615e8(uVar6);
  uVar6 = uVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  if (uVar6 == 0) goto LAB_101acf61c;
  uVar9 = uVar6;
  func_0x000107c4357c();
  if ((uVar9 & 1) == 0) goto LAB_101acf988;
  uVar11 = 0xe900000000000074;
  uVar12 = 0x4673646e65697246;
  uVar9 = uVar6;
  if (param_3 == 0) {
    func_0x000107c43580();
joined_r0x000101acf630:
    if ((uVar9 & 1) != 0) {
      uStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x2c);
      func_0x000107c6142c(uStack_78);
      uStack_80 = 0xd00000000000001e;
      uStack_78 = 0x800000010eff7140;
      uVar2 = 0x6e776f6e6b6e55;
      if (param_4 == 1) {
        uVar2 = 0x75706e4974616843;
      }
      uVar3 = 0xe700000000000000;
      if (param_4 == 1) {
        uVar3 = uVar11;
      }
      uVar1 = 0x726142626154;
      if (param_4 != 2) {
        uVar1 = uVar2;
      }
      uVar2 = 0xe600000000000000;
      if (param_4 != 2) {
        uVar2 = uVar3;
      }
      uVar3 = 0xeb00000000646565;
      uVar4 = uVar12;
      if (param_4 != 0) {
        uVar3 = uVar2;
        uVar4 = uVar1;
      }
      func_0x000107c5fb78(uVar4,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c5fb78(0x746567726174202c,0xe90000000000003d);
      uVar2 = 0x656d61436e69614d;
      if (param_3 != 0) {
        uVar2 = 0xd000000000000014;
      }
      uVar3 = 0xea00000000006172;
      if (param_3 != 0) {
        uVar3 = 0x800000010eff71e0;
      }
      func_0x000107c5fb78(uVar2,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c6142c(uStack_78);
      if (*(long *)(param_2 + _DAT_112df9b60) == 0) {
        func_0x000107c6071c();
        param_1 = param_1 - *(double *)(param_2 + _DAT_112df9b80);
        if (param_1 <= 10.0) {
          uStack_80 = 0;
          uStack_78 = 0xe000000000000000;
          func_0x000107c602fc(0x3c);
          func_0x000107c5fb78(0xd000000000000038,0x800000010eff73f0);
          uVar2 = 0x6e776f6e6b6e55;
          if (param_4 == 1) {
            uVar2 = 0x75706e4974616843;
          }
          uVar3 = 0xe700000000000000;
          if (param_4 == 1) {
            uVar3 = uVar11;
          }
          uVar11 = 0x726142626154;
          if (param_4 != 2) {
            uVar11 = uVar2;
          }
          uVar2 = 0xe600000000000000;
          if (param_4 != 2) {
            uVar2 = uVar3;
          }
          uVar3 = 0xeb00000000646565;
          if (param_4 != 0) {
            uVar3 = uVar2;
            uVar12 = uVar11;
          }
          func_0x000107c5fb78(uVar12,uVar3);
          func_0x000107c6142c(uVar3);
          func_0x000107c5fb78(0x202c,0xe200000000000000);
          func_0x000107c6142c(uStack_78);
          uStack_80 = 0;
          uStack_78 = 0xe000000000000000;
          func_0x000107c602fc(0x13);
          lVar7 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          func_0x000107c613fc();
          puVar8 = PTR___sSdN_11034dd90;
          *(undefined8 *)(lVar7 + 0x18) = 2;
          *(undefined8 *)(lVar7 + 0x10) = 1;
          puVar5 = PTR___sSds7CVarArgsWP_11034ddc0;
          *(undefined **)(lVar7 + 0x38) = puVar8;
          *(undefined **)(lVar7 + 0x40) = puVar5;
          *(double *)(lVar7 + 0x20) = param_1;
          uVar12 = 0xe400000000000000;
          func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar7);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar12);
          func_0x000107c5fb78(0x20666f2073,0xe500000000000000);
          func_0x000107c5fddc(0x4024000000000000,&uStack_80,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c5fb78(0x657370616c652073,0xea00000000002964);
          func_0x000107c6142c(uStack_78);
          pcVar10 = "skipped_cooldown";
          goto LAB_101acf970;
        }
        uVar9 = param_4;
        func_0x000101ad0cd8();
        if ((uVar9 & 1) == 0) {
          uVar9 = param_3;
          FUN_101acfa0c(param_3,param_4,uVar6);
          if ((uVar9 & 1) == 0) {
            FUN_101acfbe8(param_4,param_3);
            goto LAB_101acf988;
          }
          uVar12 = 0x5f64657070696b73;
          uVar9 = 0xef746e616d726f64;
        }
        else {
          uVar12 = 0x5f64657070696b73;
          uVar9 = 0xef6c616d72656874;
        }
      }
      else {
        uStack_80 = 0;
        uStack_78 = 0xe000000000000000;
        func_0x000107c602fc(0x4c);
        func_0x000107c5fb78(0xd00000000000003a,0x800000010eff7180);
        uVar2 = 0x6e776f6e6b6e55;
        if (param_4 == 1) {
          uVar2 = 0x75706e4974616843;
        }
        uVar3 = 0xe700000000000000;
        if (param_4 == 1) {
          uVar3 = uVar11;
        }
        uVar11 = 0x726142626154;
        if (param_4 != 2) {
          uVar11 = uVar2;
        }
        uVar2 = 0xe600000000000000;
        if (param_4 != 2) {
          uVar2 = uVar3;
        }
        if (param_4 != 0) {
          uVar12 = uVar11;
        }
        uVar11 = 0xeb00000000646565;
        if (param_4 != 0) {
          uVar11 = uVar2;
        }
        func_0x000107c5fb78(uVar12,uVar11);
        func_0x000107c6142c(uVar11);
        func_0x000107c5fb78(0x6172656e6567202c,0xed00003d6e6f6974);
        puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar8);
        func_0x000107c5fb78(0x29,0xe100000000000000);
        func_0x000107c6142c(uStack_78);
        pcVar10 = "skipped_inflight";
LAB_101acf970:
        uVar9 = (ulong)(pcVar10 + -0x20) | 0x8000000000000000;
        uVar12 = 0xd000000000000010;
      }
      FUN_101ad0bd0(uVar12,uVar9,param_4);
      goto LAB_101acf988;
    }
  }
  else if (param_3 == 1) {
    func_0x000107c43584();
    goto joined_r0x000101acf630;
  }
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x3f);
  func_0x000107c5fb78(0xd000000000000031,0x800000010eff7430);
  uVar2 = 0x6e776f6e6b6e55;
  if (param_4 == 1) {
    uVar2 = 0x75706e4974616843;
  }
  uVar3 = 0xe700000000000000;
  if (param_4 == 1) {
    uVar3 = uVar11;
  }
  uVar11 = 0x726142626154;
  if (param_4 != 2) {
    uVar11 = uVar2;
  }
  uVar2 = 0xe600000000000000;
  if (param_4 != 2) {
    uVar2 = uVar3;
  }
  uVar3 = 0xeb00000000646565;
  if (param_4 != 0) {
    uVar3 = uVar2;
    uVar12 = uVar11;
  }
  func_0x000107c5fb78(uVar12,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x746567726174202c,0xe90000000000003d);
  uVar12 = 0x6e776f6e6b6e55;
  if (param_3 == 1) {
    uVar12 = 0xd000000000000014;
  }
  uVar11 = 0xe700000000000000;
  if (param_3 == 1) {
    uVar11 = 0x800000010eff71e0;
  }
  uVar2 = 0x656d61436e69614d;
  if (param_3 != 0) {
    uVar2 = uVar12;
  }
  uVar12 = 0xea00000000006172;
  if (param_3 != 0) {
    uVar12 = uVar11;
  }
  func_0x000107c5fb78(uVar2,uVar12);
  func_0x000107c6142c(uVar12);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  func_0x000107c6142c(uStack_78);
LAB_101acf988:
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uVar6);
  return;
}



/* Entry: 101acfa0c; end: 101acfbe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101acfa0c(double param_1,int param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_2 == 1) && (func_0x000107c43578(), 0 < (long)param_4)) {
    func_0x000102a3391c();
    if (0.0 < param_1) {
      dVar8 = param_1;
      func_0x000107c5eea0(lVar6);
      func_0x000107c5ee8c();
      (**(code **)(lVar7 + 8))(lVar6,lVar4);
      if (dVar8 - param_1 <= (double)param_4 * 3600.0) goto LAB_101acfbc8;
    }
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x2c);
    func_0x000107c6142c(uStack_58);
    uStack_60 = 0xd000000000000029;
    uStack_58 = 0x800000010eff7380;
    uVar5 = 0x6e776f6e6b6e55;
    if (param_3 == 1) {
      uVar5 = 0x75706e4974616843;
    }
    uVar2 = 0xe700000000000000;
    if (param_3 == 1) {
      uVar2 = 0xe900000000000074;
    }
    uVar1 = 0x726142626154;
    if (param_3 != 2) {
      uVar1 = uVar5;
    }
    uVar5 = 0xe600000000000000;
    if (param_3 != 2) {
      uVar5 = uVar2;
    }
    uVar2 = 0xeb00000000646565;
    uVar3 = 0x4673646e65697246;
    if (param_3 != 0) {
      uVar2 = uVar5;
      uVar3 = uVar1;
    }
    func_0x000107c5fb78(uVar3,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    func_0x000107c6142c(uStack_58);
    uVar5 = 1;
  }
  else {
LAB_101acfbc8:
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 101acfbe8; end: 101ad0493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acfbe8(double param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112df9b90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c3f0ec();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    lVar6 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
  }
  uVar16 = 0xeb00000000646565;
  uVar17 = 0x4673646e65697246;
  lVar7 = unaff_x20 + _DAT_112df9b58;
  func_0x000107c61618();
  if (lVar7 == 0) {
    puStack_a0 = (undefined *)0x0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x46);
    func_0x000107c5fb78(0xd000000000000043,0x800000010eff7200);
    uVar15 = 0x6e776f6e6b6e55;
    if (param_2 == 1) {
      uVar15 = 0x75706e4974616843;
    }
    uVar18 = 0xe700000000000000;
    if (param_2 == 1) {
      uVar18 = 0xe900000000000074;
    }
    uVar2 = 0x726142626154;
    if (param_2 != 2) {
      uVar2 = uVar15;
    }
    uVar15 = 0xe600000000000000;
    if (param_2 != 2) {
      uVar15 = uVar18;
    }
    if (param_2 != 0) {
      uVar16 = uVar15;
      uVar17 = uVar2;
    }
    func_0x000107c5fb78(uVar17,uVar16);
    func_0x000107c6142c(uVar16);
    func_0x000107c5fb78(0x29,0xe100000000000000);
  }
  else {
    puVar8 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
    func_0x000107c61168();
    func_0x000107c3e490();
    if (puVar8 == (undefined *)0x3) {
      lVar9 = *(long *)(unaff_x20 + _DAT_112df9b88);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 != 0) {
        lVar10 = lVar9;
        func_0x000107c4c1f8();
        func_0x000107c61180();
        func_0x000107c615e8(lVar9);
        if (lVar10 != 0) {
          puStack_a0 = (undefined *)0xd000000000000011;
          uStack_98 = 0x800000010eff72d0;
          uVar15 = 0x6e776f6e6b6e55;
          if (param_2 == 1) {
            uVar15 = 0x75706e4974616843;
          }
          uVar18 = 0xe700000000000000;
          if (param_2 == 1) {
            uVar18 = 0xe900000000000074;
          }
          uVar2 = 0x726142626154;
          if (param_2 != 2) {
            uVar2 = uVar15;
          }
          uVar15 = 0xe600000000000000;
          if (param_2 != 2) {
            uVar15 = uVar18;
          }
          uVar18 = uVar16;
          uVar3 = uVar17;
          if (param_2 != 0) {
            uVar18 = uVar15;
            uVar3 = uVar2;
          }
          func_0x000107c5fb78(uVar3,uVar18);
          func_0x000107c6142c();
          uVar15 = uStack_98;
          puVar4 = puStack_a0;
          func_0x0001044e72c4();
          lVar9 = lVar10;
          func_0x000107c61174();
          puVar11 = puVar4;
          func_0x000107c5fadc(puVar4,uVar15);
          puVar8 = &UNK_11043fe40;
          func_0x000107c613fc(&UNK_11043fe40,0x18,7);
          func_0x000107c61614(puVar8 + 0x10,unaff_x20);
          puVar12 = &UNK_11043ff58;
          func_0x000107c613fc(&UNK_11043ff58,0x20,7);
          *(undefined **)(puVar12 + 0x10) = puVar8;
          *(long *)(puVar12 + 0x18) = param_2;
          uStack_80 = 0x101ad0e7c;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_1000f6b44;
          puStack_88 = &UNK_11043ff70;
          ppuVar13 = &puStack_a0;
          puStack_78 = puVar12;
          func_0x000107c60bc4(ppuVar13);
          func_0x000107c61574(puStack_78);
          lVar14 = lVar7;
          func_0x000107c5bba4();
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar13);
          func_0x000107c61170(puVar11);
          if (lVar14 != 0) {
            uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112df9b60);
            *(long *)(unaff_x20 + _DAT_112df9b60) = lVar14;
            func_0x000107c615f0(lVar14);
            func_0x000107c615e8(uVar18);
            uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112df9b68);
            *(long *)(unaff_x20 + _DAT_112df9b68) = lVar10;
            func_0x000107c61170(uVar18);
            *(undefined1 *)(unaff_x20 + _DAT_112df9b70) = 0;
            lVar10 = *(long *)(unaff_x20 + _DAT_112df9b78) + 1;
            if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112df9b78),1)) {
              *(long *)(unaff_x20 + _DAT_112df9b78) = lVar10;
              if (lVar6 == 0) {
                param_1 = 0.0;
              }
              else {
                func_0x000107c43588(lVar6);
              }
              if (param_1 <= 0.0) {
                param_1 = 3.0;
              }
              puStack_a0 = (undefined *)0x0;
              uStack_98 = 0xe000000000000000;
              func_0x000107c602fc(0x36);
              func_0x000107c5fb78(0xd000000000000017,0x800000010eff7340);
              uVar18 = 0x6e776f6e6b6e55;
              if (param_2 == 1) {
                uVar18 = 0x75706e4974616843;
              }
              uVar2 = 0xe700000000000000;
              if (param_2 == 1) {
                uVar2 = 0xe900000000000074;
              }
              uVar3 = 0x726142626154;
              if (param_2 != 2) {
                uVar3 = uVar18;
              }
              uVar18 = 0xe600000000000000;
              if (param_2 != 2) {
                uVar18 = uVar2;
              }
              if (param_2 != 0) {
                uVar16 = uVar18;
                uVar17 = uVar3;
              }
              func_0x000107c5fb78(uVar17,uVar16);
              func_0x000107c6142c(uVar16);
              func_0x000107c5fb78(0x7865746e6f63202c,0xea00000000003d74);
              func_0x000107c5fb78(puVar4,uVar15);
              func_0x000107c6142c(uVar15);
              func_0x000107c5fb78(0x6172656e6567202c,0xed00003d6e6f6974);
              puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c(PTR___sSiN_11034deb0,
                                  PTR___sSis23CustomStringConvertiblesWP_11034df00);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar8);
              func_0x000107c5fb78(0x202c,0xe200000000000000);
              func_0x000107c6142c(uStack_98);
              puStack_a0 = (undefined *)0x0;
              uStack_98 = 0xe000000000000000;
              func_0x000107c5fb78(0x3d74756f656d6974,0xe800000000000000);
              func_0x000107c5fddc(param_1,&puStack_a0,
                                  PTR___ss26DefaultStringInterpolationVN_11034ec00,
                                  PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08
                                 );
              func_0x000107c5fb78(0x2973,0xe200000000000000);
              func_0x000107c6142c(uStack_98);
              uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112df9b98);
              puVar8 = &UNK_11043fe40;
              func_0x000107c613fc(&UNK_11043fe40,0x18,7);
              func_0x000107c61614(puVar8 + 0x10,unaff_x20);
              puVar12 = &UNK_11043ffa8;
              func_0x000107c613fc(&UNK_11043ffa8,0x28,7);
              *(undefined **)(puVar12 + 0x10) = puVar8;
              *(long *)(puVar12 + 0x18) = lVar10;
              *(long *)(puVar12 + 0x20) = param_2;
              uStack_80 = 0x101ad0fac;
              puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_98 = 0x42000000;
              puStack_90 = &UNK_1000f6b44;
              puStack_88 = &UNK_11043ffc0;
              ppuVar13 = &puStack_a0;
              puStack_78 = puVar12;
              func_0x000107c60bc4(ppuVar13);
              func_0x000107c61574(puStack_78);
              func_0x000107c4e528(param_1,uVar16);
              func_0x000107c60bd0(ppuVar13);
              func_0x000107c615e8(lVar7);
              func_0x000107c61170(lVar9);
              func_0x000107c615e8(lVar14);
              func_0x000107c615e8(lVar6);
              return;
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101ad0494);
            (*pcVar5)();
          }
          func_0x000107c6142c(uVar15);
          func_0x000107c61170(lVar9);
          puStack_a0 = (undefined *)0x0;
          uStack_98 = 0xe000000000000000;
          func_0x000107c602fc(0x43);
          func_0x000107c5fb78(0xd000000000000040,0x800000010eff72f0);
          if (param_2 != 0) {
            if (param_2 == 2) {
              uVar16 = 0xe600000000000000;
              uVar17 = 0x726142626154;
            }
            else if (param_2 == 1) {
              uVar17 = 0x75706e4974616843;
              uVar16 = 0xe900000000000074;
            }
            else {
              uVar16 = 0xe700000000000000;
              uVar17 = 0x6e776f6e6b6e55;
            }
          }
          func_0x000107c5fb78(uVar17,uVar16);
          func_0x000107c6142c(uVar16);
          func_0x000107c5fb78(0x29,0xe100000000000000);
          func_0x000107c61170(lVar9);
          func_0x000107c615e8(lVar7);
          goto LAB_101ad00e4;
        }
      }
      puStack_a0 = (undefined *)0x0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x40);
      pcVar1 = "handleTouchDown skipped: warmup resolver unavailable (source=";
      uVar15 = 0xd00000000000003d;
    }
    else {
      puStack_a0 = (undefined *)0x0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      pcVar1 = "handleTouchDown skipped: video capture not authorized (source=";
      uVar15 = 0xd00000000000003e;
    }
    func_0x000107c5fb78(uVar15,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    uVar15 = 0x6e776f6e6b6e55;
    if (param_2 == 1) {
      uVar15 = 0x75706e4974616843;
    }
    uVar18 = 0xe700000000000000;
    if (param_2 == 1) {
      uVar18 = 0xe900000000000074;
    }
    uVar2 = 0x726142626154;
    if (param_2 != 2) {
      uVar2 = uVar15;
    }
    uVar15 = 0xe600000000000000;
    if (param_2 != 2) {
      uVar15 = uVar18;
    }
    if (param_2 != 0) {
      uVar16 = uVar15;
      uVar17 = uVar2;
    }
    func_0x000107c5fb78(uVar17,uVar16);
    func_0x000107c6142c(uVar16);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    func_0x000107c615e8(lVar7);
  }
LAB_101ad00e4:
  func_0x000107c615e8(lVar6);
  func_0x000107c6142c(uStack_98);
  return;
}



/* Entry: 101ad0494; end: 101ad07bf; -[SCCameraFingerDownWarmerImpl handleTouchDownWithSource:target:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad0494(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112df9b98);
  puVar1 = &UNK_11043fe40;
  func_0x000107c613fc(&UNK_11043fe40,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11043ff08;
  func_0x000107c613fc(&UNK_11043ff08,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  uStack_50 = 0x101ad1058;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11043ff20;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101ad07c0; end: 101ad07db; -[SCCameraFingerDownWarmerImpl handleCommitWithSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad07c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &UNK_11043feb8;
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112df9b98);
  puVar1 = &UNK_11043fe40;
  func_0x000107c613fc(&UNK_11043fe40,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c613fc(&UNK_11043feb8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uStack_60 = 0x101ad1054;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11043fed0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101ad07dc; end: 101ad0943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad07dc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _DAT_112df9b70) & 1) == 0) {
      FUN_101aceec4(0,param_2);
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c602fc(0x27);
      func_0x000107c6142c(0xe000000000000000);
      uVar2 = 0x6e776f6e6b6e55;
      if (param_2 == 1) {
        uVar2 = 0x75706e4974616843;
      }
      uVar3 = 0xe700000000000000;
      if (param_2 == 1) {
        uVar3 = 0xe900000000000074;
      }
      uVar1 = 0x726142626154;
      if (param_2 != 2) {
        uVar1 = uVar2;
      }
      uVar2 = 0xe600000000000000;
      if (param_2 != 2) {
        uVar2 = uVar3;
      }
      uVar3 = 0xeb00000000646565;
      uVar4 = 0x4673646e65697246;
      if (param_2 != 0) {
        uVar3 = uVar2;
        uVar4 = uVar1;
      }
      func_0x000107c5fb78(uVar4,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(0x800000010eff70b0);
    }
  }
  return;
}



/* Entry: 101ad0944; end: 101ad095f; -[SCCameraFingerDownWarmerImpl reclaimWithSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad0944(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &UNK_11043fe68;
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112df9b98);
  puVar1 = &UNK_11043fe40;
  func_0x000107c613fc(&UNK_11043fe40,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c613fc(&UNK_11043fe68,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uStack_60 = 0x101ad1050;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11043fe80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101ad0960; end: 101ad0b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad0960(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112df9b98);
  puVar2 = &UNK_11043fe40;
  func_0x000107c613fc(&UNK_11043fe40,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(param_4,0x20,7);
  *(undefined **)(param_4 + 0x10) = puVar2;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_6;
  uStack_60 = param_5;
  lStack_58 = param_4;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101ad0b54; end: 101ad0b77;  */

undefined8 FUN_101ad0b54(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101ad0b78; end: 101ad0baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad0b78(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar11 = *(ulong *)(unaff_x20 + 0x18);
  uVar12 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar6 + 0x10,auStack_98,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    return;
  }
  uVar7 = *(ulong *)(lVar6 + _DAT_112df9b90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar7 == 0) {
LAB_101acf61c:
    func_0x000107c61170(lVar6);
    return;
  }
  uVar8 = uVar7;
  func_0x000107c3f0ec();
  func_0x000107c61180();
  func_0x000107c615e8(uVar7);
  uVar7 = uVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  if (uVar7 == 0) goto LAB_101acf61c;
  uVar8 = uVar7;
  func_0x000107c4357c();
  if ((uVar8 & 1) == 0) goto LAB_101acf988;
  uVar14 = 0xe900000000000074;
  uVar15 = 0x4673646e65697246;
  uVar8 = uVar7;
  if (uVar11 == 0) {
    func_0x000107c43580();
joined_r0x000101acf630:
    if ((uVar8 & 1) != 0) {
      uStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x2c);
      func_0x000107c6142c(uStack_78);
      uStack_80 = 0xd00000000000001e;
      uStack_78 = 0x800000010eff7140;
      uVar2 = 0x6e776f6e6b6e55;
      if (uVar12 == 1) {
        uVar2 = 0x75706e4974616843;
      }
      uVar3 = 0xe700000000000000;
      if (uVar12 == 1) {
        uVar3 = uVar14;
      }
      uVar1 = 0x726142626154;
      if (uVar12 != 2) {
        uVar1 = uVar2;
      }
      uVar2 = 0xe600000000000000;
      if (uVar12 != 2) {
        uVar2 = uVar3;
      }
      uVar3 = 0xeb00000000646565;
      uVar4 = uVar15;
      if (uVar12 != 0) {
        uVar3 = uVar2;
        uVar4 = uVar1;
      }
      func_0x000107c5fb78(uVar4,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c5fb78(0x746567726174202c,0xe90000000000003d);
      uVar2 = 0x656d61436e69614d;
      if (uVar11 != 0) {
        uVar2 = 0xd000000000000014;
      }
      uVar3 = 0xea00000000006172;
      if (uVar11 != 0) {
        uVar3 = 0x800000010eff71e0;
      }
      func_0x000107c5fb78(uVar2,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c6142c(uStack_78);
      if (*(long *)(lVar6 + _DAT_112df9b60) == 0) {
        func_0x000107c6071c();
        param_1 = param_1 - *(double *)(lVar6 + _DAT_112df9b80);
        if (param_1 <= 10.0) {
          uStack_80 = 0;
          uStack_78 = 0xe000000000000000;
          func_0x000107c602fc(0x3c);
          func_0x000107c5fb78(0xd000000000000038,0x800000010eff73f0);
          uVar2 = 0x6e776f6e6b6e55;
          if (uVar12 == 1) {
            uVar2 = 0x75706e4974616843;
          }
          uVar3 = 0xe700000000000000;
          if (uVar12 == 1) {
            uVar3 = uVar14;
          }
          uVar14 = 0x726142626154;
          if (uVar12 != 2) {
            uVar14 = uVar2;
          }
          uVar2 = 0xe600000000000000;
          if (uVar12 != 2) {
            uVar2 = uVar3;
          }
          uVar3 = 0xeb00000000646565;
          if (uVar12 != 0) {
            uVar3 = uVar2;
            uVar15 = uVar14;
          }
          func_0x000107c5fb78(uVar15,uVar3);
          func_0x000107c6142c(uVar3);
          func_0x000107c5fb78(0x202c,0xe200000000000000);
          func_0x000107c6142c(uStack_78);
          uStack_80 = 0;
          uStack_78 = 0xe000000000000000;
          func_0x000107c602fc(0x13);
          lVar9 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          func_0x000107c613fc();
          puVar10 = PTR___sSdN_11034dd90;
          *(undefined8 *)(lVar9 + 0x18) = 2;
          *(undefined8 *)(lVar9 + 0x10) = 1;
          puVar5 = PTR___sSds7CVarArgsWP_11034ddc0;
          *(undefined **)(lVar9 + 0x38) = puVar10;
          *(undefined **)(lVar9 + 0x40) = puVar5;
          *(double *)(lVar9 + 0x20) = param_1;
          uVar15 = 0xe400000000000000;
          func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar9);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar15);
          func_0x000107c5fb78(0x20666f2073,0xe500000000000000);
          func_0x000107c5fddc(0x4024000000000000,&uStack_80,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c5fb78(0x657370616c652073,0xea00000000002964);
          func_0x000107c6142c(uStack_78);
          pcVar13 = "skipped_cooldown";
          goto LAB_101acf970;
        }
        uVar8 = uVar12;
        func_0x000101ad0cd8();
        if ((uVar8 & 1) == 0) {
          uVar8 = uVar11;
          FUN_101acfa0c(uVar11,uVar12,uVar7);
          if ((uVar8 & 1) == 0) {
            FUN_101acfbe8(uVar12,uVar11);
            goto LAB_101acf988;
          }
          uVar15 = 0x5f64657070696b73;
          uVar11 = 0xef746e616d726f64;
        }
        else {
          uVar15 = 0x5f64657070696b73;
          uVar11 = 0xef6c616d72656874;
        }
      }
      else {
        uStack_80 = 0;
        uStack_78 = 0xe000000000000000;
        func_0x000107c602fc(0x4c);
        func_0x000107c5fb78(0xd00000000000003a,0x800000010eff7180);
        uVar2 = 0x6e776f6e6b6e55;
        if (uVar12 == 1) {
          uVar2 = 0x75706e4974616843;
        }
        uVar3 = 0xe700000000000000;
        if (uVar12 == 1) {
          uVar3 = uVar14;
        }
        uVar14 = 0x726142626154;
        if (uVar12 != 2) {
          uVar14 = uVar2;
        }
        uVar2 = 0xe600000000000000;
        if (uVar12 != 2) {
          uVar2 = uVar3;
        }
        if (uVar12 != 0) {
          uVar15 = uVar14;
        }
        uVar14 = 0xeb00000000646565;
        if (uVar12 != 0) {
          uVar14 = uVar2;
        }
        func_0x000107c5fb78(uVar15,uVar14);
        func_0x000107c6142c(uVar14);
        func_0x000107c5fb78(0x6172656e6567202c,0xed00003d6e6f6974);
        puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar10);
        func_0x000107c5fb78(0x29,0xe100000000000000);
        func_0x000107c6142c(uStack_78);
        pcVar13 = "skipped_inflight";
LAB_101acf970:
        uVar11 = (ulong)(pcVar13 + -0x20) | 0x8000000000000000;
        uVar15 = 0xd000000000000010;
      }
      FUN_101ad0bd0(uVar15,uVar11,uVar12);
      goto LAB_101acf988;
    }
  }
  else if (uVar11 == 1) {
    func_0x000107c43584();
    goto joined_r0x000101acf630;
  }
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x3f);
  func_0x000107c5fb78(0xd000000000000031,0x800000010eff7430);
  uVar2 = 0x6e776f6e6b6e55;
  if (uVar12 == 1) {
    uVar2 = 0x75706e4974616843;
  }
  uVar3 = 0xe700000000000000;
  if (uVar12 == 1) {
    uVar3 = uVar14;
  }
  uVar14 = 0x726142626154;
  if (uVar12 != 2) {
    uVar14 = uVar2;
  }
  uVar2 = 0xe600000000000000;
  if (uVar12 != 2) {
    uVar2 = uVar3;
  }
  uVar3 = 0xeb00000000646565;
  if (uVar12 != 0) {
    uVar3 = uVar2;
    uVar15 = uVar14;
  }
  func_0x000107c5fb78(uVar15,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x746567726174202c,0xe90000000000003d);
  uVar15 = 0x6e776f6e6b6e55;
  if (uVar11 == 1) {
    uVar15 = 0xd000000000000014;
  }
  uVar14 = 0xe700000000000000;
  if (uVar11 == 1) {
    uVar14 = 0x800000010eff71e0;
  }
  uVar2 = 0x656d61436e69614d;
  if (uVar11 != 0) {
    uVar2 = uVar15;
  }
  uVar15 = 0xea00000000006172;
  if (uVar11 != 0) {
    uVar15 = uVar14;
  }
  func_0x000107c5fb78(uVar2,uVar15);
  func_0x000107c6142c(uVar15);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  func_0x000107c6142c(uStack_78);
LAB_101acf988:
  func_0x000107c61170(lVar6);
  func_0x000107c615e8(uVar7);
  return;
}



/* Entry: 101ad0bb0; end: 101ad0bcf;  */

void FUN_101ad0bb0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4628);
  return;
}



/* Entry: 101ad0bd0; end: 101ad1027;  */

/* WARNING: Possible PIC construction at 0x000101ad0cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad0cbc) */

void FUN_101ad0bd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126b7008;
  func_0x000107c610f8(PTR_PTR_1126b7008);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  uVar2 = 0x6e776f6e6b6e55;
  if (param_3 == 1) {
    uVar2 = 0x75706e4974616843;
  }
  uVar3 = 0xe700000000000000;
  if (param_3 == 1) {
    uVar3 = 0xe900000000000074;
  }
  uVar1 = 0x726142626154;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe600000000000000;
  if (param_3 != 2) {
    uVar2 = uVar3;
  }
  uVar3 = 0xeb00000000646565;
  uVar5 = 0x4673646e65697246;
  if (param_3 != 0) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fadc(uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001085aa080(puVar4,param_1,uVar5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 101ad1028; end: 101ad105b;  */

void FUN_101ad1028(long param_1,long param_2)

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



/* Entry: 101ad105c; end: 101ad10c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad105c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101ad1450();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112df9bd8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101ad10c8; end: 101ad1133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad10c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df9bd8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ad1134; end: 101ad1193; -[_TtC65StartupCompleteCameraLockScreenWidgetScopedFactoryServiceProvider53SCStartupCompleteCameraLockScreenWidgetScopedServices init] */

void FUN_101ad1134(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartupCompleteCameraLockScreenWidgetScopedFactoryServiceProvider.SCStartupCompleteCameraLockScreenWidgetScopedServices"
                      ,0x77,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad1160);
  (*pcVar1)();
}



/* Entry: 101ad1194; end: 101ad11a3; -[_TtC65StartupCompleteCameraLockScreenWidgetScopedFactoryServiceProvider53SCStartupCompleteCameraLockScreenWidgetScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad1194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df9bd8));
  return;
}



/* Entry: 101ad11a4; end: 101ad120f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad11a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104401b0;
  func_0x000107c613fc(&UNK_1104401b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101ad152c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101ad1210; end: 101ad12ab;  */

void FUN_101ad1210(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104400c0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104400c0;
  return;
}



/* Entry: 101ad12ac; end: 101ad12e3;  */

void FUN_101ad12ac(long *param_1)

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



/* Entry: 101ad12e4; end: 101ad12eb;  */

undefined8 FUN_101ad12e4(void)

{
  return 0x1b;
}



/* Entry: 101ad12ec; end: 101ad141f;  */

void FUN_101ad12ec(undefined8 *param_1)

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
  puVar1 = &UNK_1104401d8;
  func_0x000107c613fc(&UNK_1104401d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ad1504;
  func_0x00010058fa64(FUN_101ad1504,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ad1420; end: 101ad144f;  */

undefined ** FUN_101ad1420(void)

{
  return &PTR_DAT_112f32a68;
}



/* Entry: 101ad1450; end: 101ad146f;  */

void FUN_101ad1450(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4730);
  return;
}



/* Entry: 101ad1470; end: 101ad14bf;  */

undefined1  [16] FUN_101ad1470(void)

{
  return ZEXT816(0x110440110);
}



/* Entry: 101ad14c0; end: 101ad1503;  */

void FUN_101ad14c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df9c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8928;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112df9c40 = puVar1;
  return;
}



/* Entry: 101ad1504; end: 101ad152b;  */

void FUN_101ad1504(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101ad152c; end: 101ad153f;  */

void FUN_101ad152c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ad1540; end: 101ad1867;  */

void FUN_101ad1540(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112df9c58,&UNK_10d9cb320);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112df9c60,&UNK_10d9cb330);
  puVar2 = &UNK_110440288;
  func_0x000107c613fc(&UNK_110440288,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar8 = 0x101ad1874;
  func_0x0001000823a8(0x101ad1874,puVar2);
  func_0x000100082720("SCCameraLockScreenWidgetEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101ad12ac;
  func_0x0001000823a8(FUN_101ad12ac,0);
  pcVar4 = "SCStartupCompleteCameraLockScreenWidgetScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopedServicesCleanupRelayServiceProvider"
                      ,0x50,2);
  FUN_101ad28c4();
  func_0x000100082720("StartupCompleteCameraLockScreenWidgetScopeGraphBridgeServicesServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112df9c68,&UNK_10d9cb328);
  puVar2 = &UNK_1104402b0;
  func_0x000107c613fc(&UNK_1104402b0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101ad1884;
  func_0x0001000823a8(0x101ad1884,puVar2);
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopeInitializationPluginRegistryServiceProvider"
                      ,0x57,2);
  func_0x0001000285a8(0x112df9be0,&UNK_10d9cafe0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101ad1890;
  func_0x0001000823a8(0x101ad1890,uVar5);
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopeInitializationServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112df9bd0,&UNK_10d9cafd0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101ad1898;
  func_0x0001000823a8(0x101ad1898,uVar6);
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopedServicesServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104402d8;
  func_0x000107c613fc(&UNK_1104402d8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101ad18a0;
  func_0x0001000823a8(0x101ad18a0,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopeEntryPointProvider",0x3e,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101ad1868; end: 101ad18a7;  */

void FUN_101ad1868(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112df9c58,&UNK_10d9cb320);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112df9c60,&UNK_10d9cb330);
  puVar2 = &UNK_110440288;
  func_0x000107c613fc(&UNK_110440288,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x30) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  uVar3 = 0x101ad1874;
  func_0x0001000823a8(0x101ad1874,puVar2);
  func_0x000100082720("SCCameraLockScreenWidgetEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101ad12ac;
  func_0x0001000823a8(FUN_101ad12ac,0);
  pcVar5 = "SCStartupCompleteCameraLockScreenWidgetScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopedServicesCleanupRelayServiceProvider"
                      ,0x50,2);
  FUN_101ad28c4();
  func_0x000100082720("StartupCompleteCameraLockScreenWidgetScopeGraphBridgeServicesServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112df9c68,&UNK_10d9cb328);
  puVar2 = &UNK_1104402b0;
  func_0x000107c613fc(&UNK_1104402b0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(char **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101ad1884;
  func_0x0001000823a8(0x101ad1884,puVar2);
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopeInitializationPluginRegistryServiceProvider"
                      ,0x57,2);
  func_0x0001000285a8(0x112df9be0,&UNK_10d9cafe0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101ad1890;
  func_0x0001000823a8(0x101ad1890,uVar6);
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopeInitializationServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112df9bd0,&UNK_10d9cafd0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101ad1898;
  func_0x0001000823a8(0x101ad1898,uVar7);
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopedServicesServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104402d8;
  func_0x000107c613fc(&UNK_1104402d8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x101ad18a0;
  func_0x0001000823a8(0x101ad18a0,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopeEntryPointProvider",0x3e,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 101ad18a8; end: 101ad1e7f;  */

void FUN_101ad18a8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  FUN_101ad1fd0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a8930;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010eff6980);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a380);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 101ad1e80; end: 101ad1ec3;  */

void FUN_101ad1e80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ad1ec4; end: 101ad1ecb;  */

undefined8 FUN_101ad1ec4(void)

{
  return 0x1b;
}



/* Entry: 101ad1ecc; end: 101ad1f4f;  */

void FUN_101ad1ecc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101ad2010,param_2,FUN_101ad2014,param_2,FUN_101ad203c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101ad1f50; end: 101ad1f9f;  */

undefined8 FUN_101ad1f50(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101ad1fa0; end: 101ad1fcf;  */

undefined ** FUN_101ad1fa0(void)

{
  return &PTR_DAT_112f32a68;
}



/* Entry: 101ad1fd0; end: 101ad1fef;  */

void FUN_101ad1fd0(void)

{
  func_0x000107c61168(&PTR_PTR_112df9cd8);
  return;
}



/* Entry: 101ad1ff0; end: 101ad2013;  */

undefined1  [16] FUN_101ad1ff0(void)

{
  return ZEXT816(0x110440330);
}



/* Entry: 101ad2014; end: 101ad203b;  */

void FUN_101ad2014(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ad203c; end: 101ad2043;  */

undefined8 FUN_101ad203c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101ad2044; end: 101ad207f;  */

void FUN_101ad2044(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ad2080();
  func_0x0001000a7f38("SCStartupCompleteCameraLockScreenWidgetScopeInitializationPluginRegistryServiceProvider"
                      ,0x57,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101ad2080; end: 101ad226b;  */

void FUN_101ad2080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105fd120;
  ppuVar4 = &PTR_DAT_112f32a68;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112df9d58;
  func_0x0001000285a8(0x112df9d58,&UNK_10d9cb4a0);
  func_0x0001000a6ee8(&UNK_110440330,
                      "SCCameraLockScreenWidgetEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_101ad22e0,param_1,uVar2,&UNK_110440330,&PTR_DAT_112df9c70);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110440380;
  func_0x000107c613fc(&UNK_110440380,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110440150,
                      "SCStartupCompleteCameraLockScreenWidgetScopedServicesScopeInitializationPluginKey"
                      ,0x51,2,FUN_101ad2390,puVar3,uVar2,&UNK_110440150,&PTR_DAT_112df9be8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104403a8;
  func_0x000107c613fc(&UNK_1104403a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110440538,
                      "StartupCompleteCameraLockScreenWidgetScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x51,2,FUN_101ad2398,puVar3,uVar2,&UNK_110440538,&PTR_DAT_112df9de8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112df9d60;
  func_0x0001000285a8(0x112df9d60,&UNK_10d9cb4a8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101ad226c; end: 101ad22df;  */

void FUN_101ad226c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101ad240c;
  func_0x0001000823a8(0x101ad240c,param_3);
  func_0x000100082720("SCCameraLockScreenWidgetEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ad22e0; end: 101ad22e7;  */

void FUN_101ad22e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101ad240c;
  func_0x0001000823a8();
  func_0x000100082720("SCCameraLockScreenWidgetEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ad22e8; end: 101ad238f;  */

void FUN_101ad22e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104403d0;
  func_0x000107c613fc(&UNK_1104403d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101ad2404;
  func_0x0001000823a8(FUN_101ad2404,puVar1);
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopedServicesScopeInitializationPluginProvider"
                      ,0x56,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101ad2390; end: 101ad2397;  */

void FUN_101ad2390(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104403d0;
  func_0x000107c613fc(&UNK_1104403d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101ad2404;
  func_0x0001000823a8(FUN_101ad2404,puVar3);
  func_0x000100082720("SCStartupCompleteCameraLockScreenWidgetScopedServicesScopeInitializationPluginProvider"
                      ,0x56,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101ad2398; end: 101ad23d7;  */

void FUN_101ad2398(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101ad29a8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("StartupCompleteCameraLockScreenWidgetScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x56,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ad23d8; end: 101ad2403;  */

void FUN_101ad23d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ad2404; end: 101ad2413;  */

void FUN_101ad2404(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104401d8;
  func_0x000107c613fc(&UNK_1104401d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ad1504;
  func_0x00010058fa64(FUN_101ad1504,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ad2414; end: 101ad249b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ad2414(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101ad27d4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112df9d68) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112df9d70) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad249c);
  (*pcVar1)();
}



/* Entry: 101ad249c; end: 101ad24fb; -[_TtC53StartupCompleteCameraLockScreenWidgetScopeGraphBridge68StartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint init] */

void FUN_101ad249c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartupCompleteCameraLockScreenWidgetScopeGraphBridge.StartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint"
                      ,0x7a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad24c8);
  (*pcVar1)();
}



/* Entry: 101ad24fc; end: 101ad2533; -[_TtC53StartupCompleteCameraLockScreenWidgetScopeGraphBridge68StartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ad2518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad251c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad24fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df9d68));
  return;
}



/* Entry: 101ad2534; end: 101ad255b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad2534(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112df9d70),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112df9d68));
  return;
}



/* Entry: 101ad255c; end: 101ad257b;  */

void FUN_101ad255c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f47f0);
  return;
}



/* Entry: 101ad257c; end: 101ad2603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ad257c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df9da0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112df9da8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ad2604);
  (*pcVar2)();
}



/* Entry: 101ad2604; end: 101ad26eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ad2604(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112df9da0);
  *(undefined **)(unaff_x20 + _DAT_112df9da0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112df9da8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112df9da8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110440498;
  func_0x000107c613fc(&UNK_110440498,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101ad26f0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101ad26ec; end: 101ad26f7;  */

void FUN_101ad26ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ad26f8; end: 101ad2757; -[_TtC53StartupCompleteCameraLockScreenWidgetScopeGraphBridge68SCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint init] */

void FUN_101ad26f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartupCompleteCameraLockScreenWidgetScopeGraphBridge.SCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint"
                      ,0x7a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad2724);
  (*pcVar1)();
}



/* Entry: 101ad2758; end: 101ad278f; -[_TtC53StartupCompleteCameraLockScreenWidgetScopeGraphBridge68SCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad2758(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112df9da8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df9da0));
  return;
}



/* Entry: 101ad2790; end: 101ad2793;  */

void FUN_101ad2790(void)

{
  return;
}



/* Entry: 101ad2794; end: 101ad27b3;  */

void FUN_101ad2794(void)

{
  FUN_101ad2604();
  return;
}



/* Entry: 101ad27b4; end: 101ad27d3;  */

void FUN_101ad27b4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f48b8);
  return;
}



/* Entry: 101ad27d4; end: 101ad28a3;  */

undefined8 FUN_101ad27d4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112df9dd8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_101ad28a4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101ad28a4; end: 101ad28c3;  */

void FUN_101ad28a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4980);
  return;
}



/* Entry: 101ad28c4; end: 101ad292f;  */

void FUN_101ad28c4(void)

{
  func_0x0001000285a8(0x112df9de0,&UNK_10d9cb5a8);
  func_0x0001000823a8(0x101ad2904,0);
  return;
}


