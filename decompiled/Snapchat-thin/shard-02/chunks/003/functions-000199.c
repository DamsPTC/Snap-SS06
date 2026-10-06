/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b3e82c; end: 101b3e833;  */

void FUN_101b3e82c(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b3e834; end: 101b3e873;  */

void FUN_101b3e834(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101b3e874; end: 101b3e87f;  */

void FUN_101b3e874(long param_1,long param_2)

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



/* Entry: 101b3e880; end: 101b3e8cb;  */

void FUN_101b3e880(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101b3e8cc,param_1);
  return;
}



/* Entry: 101b3e8cc; end: 101b3e933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3e8cc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_101b3eb14();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e03008) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 101b3e934; end: 101b3e97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3e934(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e03008) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b3e980; end: 101b3ea83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b3e980(undefined *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_112e03038);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126b3588;
    func_0x000107c610f8(PTR_PTR_1126b3588);
    uVar4 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010effe850);
    func_0x000107c47794(puVar3);
    func_0x000107c61170(uVar4);
    param_1 = puVar3;
    func_0x000107c4f6d8(puVar3);
    func_0x000107c61170(puVar3);
  }
  else {
    func_0x000107c30dc8(param_1,lVar2);
    func_0x000107c615e8(lVar2);
  }
  return param_1;
}



/* Entry: 101b3ea84; end: 101b3eabf; -[_TtC24TranscoderPluginProvider16TranscoderPlugin pushToValdiMarshaller:] */

undefined8 FUN_101b3ea84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101b3e980(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 101b3eac0; end: 101b3eaf3;  */

void FUN_101b3eac0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b3eaf4; end: 101b3eb03;  */

undefined1  [16] FUN_101b3eaf4(void)

{
  return ZEXT816(0x110447e18);
}



/* Entry: 101b3eb04; end: 101b3eb13; -[_TtC24TranscoderPluginProvider16TranscoderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3eb04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e03008));
  return;
}



/* Entry: 101b3eb14; end: 101b3eb33;  */

void FUN_101b3eb14(void)

{
  func_0x000107c61168(&PTR_PTR_1127f9188);
  return;
}



/* Entry: 101b3eb34; end: 101b3eb43; -[_TtC12SCTranscoder18TranscoderServices transcoder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3eb34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e03038));
  return;
}



/* Entry: 101b3eb44; end: 101b3ebdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3eb44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e03038) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b3ebdc; end: 101b3ec33; -[_TtC12SCTranscoder18TranscoderServices initWithTranscoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3ebdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e03038) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101b3ec34; end: 101b3ec67;  */

void FUN_101b3ec34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b3ec68; end: 101b3ec77; -[_TtC12SCTranscoder18TranscoderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3ec68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e03038));
  return;
}



/* Entry: 101b3ec78; end: 101b3ecc3;  */

void FUN_101b3ec78(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101b3ecc4,param_1);
  return;
}



/* Entry: 101b3ecc4; end: 101b3ed2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3ecc4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_101b3ee5c();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e03068) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 101b3ed2c; end: 101b3ed77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3ed2c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e03068) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b3ed78; end: 101b3ee07; -[_TtC22UploaderPluginProvider14UploaderPlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101b3ed78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11303c128);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_38);
  func_0x000107c2bac4(param_3,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar1);
  return param_3;
}



/* Entry: 101b3ee08; end: 101b3ee3b;  */

void FUN_101b3ee08(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b3ee3c; end: 101b3ee4b;  */

undefined1  [16] FUN_101b3ee3c(void)

{
  return ZEXT816(0x110447f90);
}



/* Entry: 101b3ee4c; end: 101b3ee5b; -[_TtC22UploaderPluginProvider14UploaderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3ee4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e03068));
  return;
}



/* Entry: 101b3ee5c; end: 101b3ee7b;  */

void FUN_101b3ee5c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f9308);
  return;
}



/* Entry: 101b3ee7c; end: 101b3eebf;  */

undefined1  [16] FUN_101b3ee7c(void)

{
  return ZEXT816(0x110448088);
}



/* Entry: 101b3eec0; end: 101b3ef6b;  */

void FUN_101b3eec0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101b3ef6c; end: 101b3ef77;  */

void FUN_101b3ef6c(undefined1 *param_1)

{
  undefined1 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 101b3ef78; end: 101b3f22f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_101b3ef78(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 auStack_150 [2];
  long lStack_140;
  undefined8 uStack_138;
  long alStack_130 [14];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0x112e030a8;
  func_0x0001000285a8(0x112e030a8,&UNK_10d9d5818);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = -extraout_x8;
  plVar5 = (long *)((long)&lStack_140 + lVar6);
  lVar3 = 0x112e030b0;
  func_0x0001000285a8(0x112e030b0,&UNK_10d9d5820);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)plVar5 - extraout_x8_00);
  if (*(long *)(param_2 + 0x10) == 1) {
    uVar11 = *(undefined8 *)(param_2 + 0x68);
    uVar10 = *(undefined8 *)(param_2 + 0x60);
    uVar13 = *(undefined8 *)(param_2 + 0x78);
    uVar12 = *(undefined8 *)(param_2 + 0x70);
    uVar8 = *(undefined8 *)(param_2 + 0x80);
    alStack_130[0xd] = *(undefined8 *)(param_2 + 0x28);
    uVar14 = *(undefined8 *)(param_2 + 0x20);
    uVar16 = *(undefined8 *)(param_2 + 0x38);
    uVar15 = *(undefined8 *)(param_2 + 0x30);
    uVar20 = *(undefined8 *)(param_2 + 0x48);
    uVar19 = *(undefined8 *)(param_2 + 0x40);
    uVar18 = *(undefined8 *)(param_2 + 0x58);
    uVar17 = *(undefined8 *)(param_2 + 0x50);
    alStack_130[0xc] = uVar14;
    uStack_c0 = uVar15;
    uStack_b8 = uVar16;
    uStack_b0 = uVar19;
    uStack_a8 = uVar20;
    uStack_a0 = uVar17;
    uStack_98 = uVar18;
    uStack_90 = uVar10;
    uStack_88 = uVar11;
    uStack_80 = uVar12;
    uStack_78 = uVar13;
    uStack_70 = uVar8;
    puVar9[1] = alStack_130[0xd];
    *puVar9 = uVar14;
    puVar9[3] = uVar16;
    puVar9[2] = uVar15;
    puVar9[5] = uVar20;
    puVar9[4] = uVar19;
    puVar9[7] = uVar18;
    puVar9[6] = uVar17;
    puVar9[9] = uVar11;
    puVar9[8] = uVar10;
    puVar9[0xb] = uVar13;
    puVar9[10] = uVar12;
    puVar9[0xc] = uVar8;
    func_0x000107c6159c(puVar9,lVar3,0);
    plVar5 = alStack_130 + 0xc;
    FUN_101b3f3d8(plVar5,&uStack_138);
    func_0x000101b3f398();
    uVar8 = 0x112e030e8;
    FUN_101b41f3c(0x112e030e8,0x112e030a8,&UNK_10d9d5818,
                  PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
    func_0x000107c5f490(param_1,puVar9,&UNK_1104481c8,lVar2,plVar5,uVar8);
  }
  else {
    func_0x000107c5f410();
    *plVar5 = lVar4;
    *(undefined8 *)((long)alStack_130 + lVar6 + -8) = 0x4020000000000000;
    *(undefined1 *)((long)alStack_130 + lVar6) = 0;
    lVar6 = 0x112e030b8;
    func_0x0001000285a8(0x112e030b8,&UNK_10d9d5828);
    iVar1 = *(int *)(lVar6 + 0x2c);
    alStack_130[0xc] = param_2;
    func_0x000107c61434(param_2);
    uVar8 = 0x112e030c0;
    func_0x0001000285a8(0x112e030c0,&UNK_10d9d5830);
    uVar10 = 0x112e030c8;
    FUN_101b41f3c(0x112e030c8,0x112e030c0,&UNK_10d9d5830,PTR___sSayxGSksMc_11034dd18);
    uVar11 = uVar10;
    func_0x000101b3f318();
    uVar12 = uVar11;
    func_0x000101b3f358();
    puVar9[-2] = uVar12;
    func_0x000107c5f78c((long)plVar5 + (long)iVar1,alStack_130 + 0xc,FUN_101b3f230,0,uVar8,
                        &UNK_110448260,&UNK_110448148,uVar10,uVar11);
    FUN_101b41b94(plVar5,puVar9,0x112e030a8,&UNK_10d9d5818);
    puVar7 = puVar9;
    func_0x000107c6159c(puVar9,lVar3,1);
    func_0x000101b3f398();
    uVar8 = 0x112e030e8;
    FUN_101b41f3c(0x112e030e8,0x112e030a8,&UNK_10d9d5818,
                  PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
    func_0x000107c5f490(param_1,puVar9,&UNK_1104481c8,lVar2,puVar7,uVar8);
    func_0x000101b41bdc(plVar5,0x112e030a8,&UNK_10d9d5818);
  }
  return;
}



/* Entry: 101b3f230; end: 101b3f287;  */

void FUN_101b3f230(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_e8 [104];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[9] = uStack_38;
  param_1[8] = uStack_40;
  param_1[0xb] = uStack_28;
  param_1[10] = uStack_30;
  param_1[0xc] = uStack_20;
  FUN_101b3f3d8(&uStack_80,auStack_e8);
  return;
}



/* Entry: 101b3f288; end: 101b3f293;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_101b3f288(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  long *unaff_x20;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 auStack_150 [2];
  long lStack_140;
  undefined8 uStack_138;
  long alStack_130 [14];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = *unaff_x20;
  lVar2 = 0x112e030a8;
  func_0x0001000285a8(0x112e030a8,&UNK_10d9d5818);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = -extraout_x8;
  plVar5 = (long *)((long)&lStack_140 + lVar6);
  lVar3 = 0x112e030b0;
  func_0x0001000285a8(0x112e030b0,&UNK_10d9d5820);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)plVar5 - extraout_x8_00);
  if (*(long *)(lVar8 + 0x10) == 1) {
    uVar12 = *(undefined8 *)(lVar8 + 0x68);
    uVar11 = *(undefined8 *)(lVar8 + 0x60);
    uVar14 = *(undefined8 *)(lVar8 + 0x78);
    uVar13 = *(undefined8 *)(lVar8 + 0x70);
    uVar9 = *(undefined8 *)(lVar8 + 0x80);
    alStack_130[0xd] = *(undefined8 *)(lVar8 + 0x28);
    uVar15 = *(undefined8 *)(lVar8 + 0x20);
    uVar17 = *(undefined8 *)(lVar8 + 0x38);
    uVar16 = *(undefined8 *)(lVar8 + 0x30);
    uVar21 = *(undefined8 *)(lVar8 + 0x48);
    uVar20 = *(undefined8 *)(lVar8 + 0x40);
    uVar19 = *(undefined8 *)(lVar8 + 0x58);
    uVar18 = *(undefined8 *)(lVar8 + 0x50);
    alStack_130[0xc] = uVar15;
    uStack_c0 = uVar16;
    uStack_b8 = uVar17;
    uStack_b0 = uVar20;
    uStack_a8 = uVar21;
    uStack_a0 = uVar18;
    uStack_98 = uVar19;
    uStack_90 = uVar11;
    uStack_88 = uVar12;
    uStack_80 = uVar13;
    uStack_78 = uVar14;
    uStack_70 = uVar9;
    puVar10[1] = alStack_130[0xd];
    *puVar10 = uVar15;
    puVar10[3] = uVar17;
    puVar10[2] = uVar16;
    puVar10[5] = uVar21;
    puVar10[4] = uVar20;
    puVar10[7] = uVar19;
    puVar10[6] = uVar18;
    puVar10[9] = uVar12;
    puVar10[8] = uVar11;
    puVar10[0xb] = uVar14;
    puVar10[10] = uVar13;
    puVar10[0xc] = uVar9;
    func_0x000107c6159c(puVar10,lVar3,0);
    plVar5 = alStack_130 + 0xc;
    FUN_101b3f3d8(plVar5,&uStack_138);
    func_0x000101b3f398();
    uVar9 = 0x112e030e8;
    FUN_101b41f3c(0x112e030e8,0x112e030a8,&UNK_10d9d5818,
                  PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
    func_0x000107c5f490(param_1,puVar10,&UNK_1104481c8,lVar2,plVar5,uVar9);
  }
  else {
    func_0x000107c5f410();
    *plVar5 = lVar4;
    *(undefined8 *)((long)alStack_130 + lVar6 + -8) = 0x4020000000000000;
    *(undefined1 *)((long)alStack_130 + lVar6) = 0;
    lVar6 = 0x112e030b8;
    func_0x0001000285a8(0x112e030b8,&UNK_10d9d5828);
    iVar1 = *(int *)(lVar6 + 0x2c);
    alStack_130[0xc] = lVar8;
    func_0x000107c61434(lVar8);
    uVar9 = 0x112e030c0;
    func_0x0001000285a8(0x112e030c0,&UNK_10d9d5830);
    uVar11 = 0x112e030c8;
    FUN_101b41f3c(0x112e030c8,0x112e030c0,&UNK_10d9d5830,PTR___sSayxGSksMc_11034dd18);
    uVar12 = uVar11;
    func_0x000101b3f318();
    uVar13 = uVar12;
    func_0x000101b3f358();
    puVar10[-2] = uVar13;
    func_0x000107c5f78c((long)plVar5 + (long)iVar1,alStack_130 + 0xc,FUN_101b3f230,0,uVar9,
                        &UNK_110448260,&UNK_110448148,uVar11,uVar12);
    FUN_101b41b94(plVar5,puVar10,0x112e030a8,&UNK_10d9d5818);
    puVar7 = puVar10;
    func_0x000107c6159c(puVar10,lVar3,1);
    func_0x000101b3f398();
    uVar9 = 0x112e030e8;
    FUN_101b41f3c(0x112e030e8,0x112e030a8,&UNK_10d9d5818,
                  PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
    func_0x000107c5f490(param_1,puVar10,&UNK_1104481c8,lVar2,puVar7,uVar9);
    func_0x000101b41bdc(plVar5,0x112e030a8,&UNK_10d9d5818);
  }
  return;
}



/* Entry: 101b3f294; end: 101b3f2d3;  */

void FUN_101b3f294(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d57ac;
  func_0x000107c61520(&UNK_10d9d57ac,&UNK_110448260);
  puRam0000000112e03098 = puVar1;
  return;
}



/* Entry: 101b3f2d4; end: 101b3f2d7;  */

void FUN_101b3f2d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e030a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d57ec;
  func_0x000107c61520(&UNK_10d9d57ec,&UNK_110448260);
  puRam0000000112e030a0 = puVar1;
  return;
}



/* Entry: 101b3f2d8; end: 101b3f3d7;  */

void FUN_101b3f2d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e030a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d57ec;
  func_0x000107c61520(&UNK_10d9d57ec,&UNK_110448260);
  puRam0000000112e030a0 = puVar1;
  return;
}



/* Entry: 101b3f3d8; end: 101b3f40b;  */

undefined8 FUN_101b3f3d8(undefined8 param_1,undefined8 param_2)

{
  func_0x000100cc6850(param_2,param_1,&UNK_110448088);
  return param_2;
}



/* Entry: 101b3f40c; end: 101b3f41b;  */

undefined1  [16] FUN_101b3f40c(void)

{
  return ZEXT816(0x110448148);
}



/* Entry: 101b3f41c; end: 101b3f45b;  */

void FUN_101b3f41c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 101b3f45c; end: 101b3f4f3;  */

undefined1 * FUN_101b3f45c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  param_1[0x50] = param_2[0x50];
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 101b3f4f4; end: 101b3f5d3;  */

undefined1 * FUN_101b3f4f4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x50] = param_2[0x50];
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 101b3f5d4; end: 101b3f65f;  */

undefined1 * FUN_101b3f5d4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[0x50] = param_2[0x50];
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 101b3f660; end: 101b3f873;  */

int FUN_101b3f660(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b3f874; end: 101b3f90b;  */

void FUN_101b3f874(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e030f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e030f8;
  func_0x00010002969c(0x112e030f8,&UNK_10d9d5888);
  uVar2 = uVar1;
  func_0x000101b3f398();
  uVar3 = 0x112e030e8;
  FUN_101b41f3c(0x112e030e8,0x112e030a8,&UNK_10d9d5818,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10,
                      uVar1,&uStack_30);
  puRam0000000112e030f0 = puVar4;
  return;
}



/* Entry: 101b3f90c; end: 101b3f91b;  */

void FUN_101b3f90c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e676a14,1);
  return;
}



/* Entry: 101b3f91c; end: 101b3f977;  */

void FUN_101b3f91c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5f4ec();
  func_0x000107c5f4f0();
  uVar2 = 0x3fe0000000000000;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x3ff0000000000000;
  }
  lVar1 = 0x112e032f8;
  func_0x0001000285a8(0x112e032f8,&UNK_10d9d5bb0);
  *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x24)) = uVar2;
  return;
}



/* Entry: 101b3f978; end: 101b3fa17;  */

void FUN_101b3f978(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  
  lVar3 = 0;
  func_0x000107c5f37c();
  iVar2 = *(int *)(lVar3 + 0x14);
  uVar1 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar3 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x68))((long)param_1 + (long)iVar2,uVar1,lVar3);
  auVar6 = NEON_fmov(0x4020000000000000,8);
  param_1[1] = auVar6._8_8_;
  *param_1 = auVar6._0_8_;
  uVar4 = 0x16;
  func_0x0001026ff7d0();
  puVar5 = &UNK_10d9d59c0;
  func_0x000107c614e0();
  lVar3 = 0x112e03300;
  func_0x0001000285a8(0x112e03300,&UNK_10d9d5bb8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *param_1 = puVar5;
  param_1[1] = uVar4;
  return;
}



/* Entry: 101b3fa18; end: 101b3fbcf;  */

void FUN_101b3fa18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c5f438();
  *param_1 = param_6;
  param_1[1] = 0x4010000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar4 = 0x112e03180;
  func_0x0001000285a8();
  FUN_101b3fbd0((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_c0,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar4 = 0x112e03148;
  func_0x0001000285a8(0x112e03148,&UNK_10d9d5958);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  puVar1[9] = uStack_78;
  puVar1[8] = uStack_80;
  puVar1[0xb] = uStack_68;
  puVar1[10] = uStack_70;
  puVar1[0xd] = uStack_58;
  puVar1[0xc] = uStack_60;
  puVar1[1] = uStack_b8;
  *puVar1 = uStack_c0;
  puVar1[3] = uStack_a8;
  puVar1[2] = uStack_b0;
  puVar1[5] = uStack_98;
  puVar1[4] = uStack_a0;
  puVar1[7] = uStack_88;
  puVar1[6] = uStack_90;
  func_0x000107c5f584();
  uVar7 = 0x4020000000000000;
  uVar8 = uStack_a0;
  func_0x000107c5f280();
  lVar5 = 0x112e03138;
  uVar9 = uVar8;
  uVar10 = param_4;
  uVar11 = param_5;
  func_0x0001000285a8(0x112e03138,&UNK_10d9d5950);
  puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  *puVar2 = (char)lVar4;
  *(undefined8 *)(puVar2 + 8) = uVar7;
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  func_0x000107c5f568();
  uVar8 = 0x4028000000000000;
  func_0x000107c5f280();
  lVar4 = 0x112e03128;
  puVar6 = &UNK_10d9d5948;
  func_0x0001000285a8();
  puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar2 = (char)lVar5;
  *(undefined8 *)(puVar2 + 8) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar10;
  *(undefined8 *)(puVar2 + 0x20) = uVar11;
  puVar2[0x28] = 0;
  func_0x000107c5f7ac();
  lVar5 = 0x112e03110;
  func_0x0001000285a8(0x112e03110,&UNK_10d9d5940);
  plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  *plVar3 = lVar4;
  plVar3[1] = (long)puVar6;
  return;
}



/* Entry: 101b3fbd0; end: 101b40127;  */

void FUN_101b3fbd0(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  long extraout_x8;
  code *pcVar17;
  long extraout_x12;
  long lVar18;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar18 = 0x112e03188;
  lStack_88 = param_1;
  func_0x0001000285a8(0x112e03188,&UNK_10d9d5978);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  puStack_80 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  puVar14 = *(undefined **)(param_2 + 0x18);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c5af98();
  func_0x000107c61180();
  bVar2 = puVar4 == (undefined *)0x0;
  if (bVar2) {
    lVar9 = 0x112e03190;
    func_0x0001000285a8(0x112e03190,&UNK_10d9d5980);
    pcVar17 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  }
  else {
    func_0x000107c61174();
    puVar5 = puVar4;
    func_0x000107c5f6e8();
    uVar6 = 0x48;
    func_0x0001026ff7d0();
    puVar7 = &UNK_10d9d59c0;
    func_0x000107c614e0();
    uVar12 = 0x112e031a0;
    puStack_78 = puVar5;
    puStack_70 = puVar7;
    uStack_68 = uVar6;
    func_0x0001000285a8(0x112e031a0,&UNK_10d9d59f0);
    uVar8 = uVar12;
    FUN_101b41784();
    func_0x000107c5f650(lVar18,1,uVar12,uVar8);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(puVar4);
    lVar9 = 0x112e03190;
    func_0x0001000285a8(0x112e03190,&UNK_10d9d5980);
    pcVar17 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  }
  lVar10 = lVar18;
  (*pcVar17)(lVar18,bVar2,1,lVar9);
  puStack_78 = puVar14;
  puStack_70 = (undefined *)uVar13;
  func_0x000100e8b654();
  func_0x000107c61434(uVar13);
  ppuVar11 = &puStack_78;
  puVar14 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0(ppuVar11,PTR___sSSN_11034da80,lVar10);
  uVar12 = 0x16;
  func_0x0001026ff85c();
  uVar13 = uVar12;
  ppuVar15 = ppuVar11;
  puVar4 = puVar14;
  lVar16 = lVar10;
  func_0x000107c5f5d4();
  func_0x000107c61574(uVar12);
  func_0x000100f795bc(ppuVar11,puVar14,lVar10);
  func_0x000107c6142c(lVar9);
  uVar6 = 0x48;
  func_0x0001026ff7d0();
  uVar12 = uVar6;
  uVar8 = uVar13;
  ppuVar11 = ppuVar15;
  puVar7 = puVar4;
  func_0x000107c5f5d0();
  func_0x000107c61574(uVar6);
  func_0x000100f795bc(uVar13,ppuVar15,puVar4);
  func_0x000107c6142c(lVar16);
  puVar14 = &UNK_10d9d5988;
  func_0x000107c614e0();
  puVar3 = puStack_80;
  FUN_101b41b94(lVar18,puStack_80,0x112e03188,&UNK_10d9d5978);
  lVar10 = lStack_88;
  FUN_101b41b94(puVar3,lStack_88,0x112e03188,&UNK_10d9d5978);
  lVar9 = 0x112e03198;
  func_0x0001000285a8(0x112e03198,&UNK_10d9d59b8);
  puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar9 + 0x30));
  *puVar1 = uVar12;
  puVar1[1] = uVar8;
  *(char *)(puVar1 + 2) = (char)ppuVar11;
  puVar1[3] = puVar7;
  puVar1[4] = puVar14;
  puVar1[5] = 1;
  *(undefined1 *)(puVar1 + 6) = 0;
  func_0x000100f8a880(uVar12,uVar8,ppuVar11);
  func_0x000107c61434(puVar7);
  func_0x000107c6157c(puVar14);
  func_0x000101b41bdc(lVar18,0x112e03188,&UNK_10d9d5978);
  func_0x000100f795bc(uVar12,uVar8,ppuVar11);
  func_0x000107c61574(puVar14);
  func_0x000107c6142c(puVar7);
  func_0x000101b41bdc(puVar3,0x112e03188,&UNK_10d9d5978);
  return;
}



/* Entry: 101b40128; end: 101b402df;  */

void FUN_101b40128(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar5 = param_6;
  func_0x000107c5f410();
  *param_1 = uVar5;
  param_1[1] = 0x4024000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar6 = 0x112e03220;
  func_0x0001000285a8(0x112e03220,&UNK_10d9d5a40);
  FUN_101b402e0((long)param_1 + (long)*(int *)(lVar6 + 0x2c));
  uVar4 = (undefined1)param_6;
  func_0x000107c5f584();
  uVar9 = 0x4020000000000000;
  func_0x000107c5f280();
  lVar6 = 0x112e031f8;
  uVar5 = param_3;
  uVar10 = param_4;
  uVar11 = param_5;
  func_0x0001000285a8(0x112e031f8,&UNK_10d9d5a28);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  *puVar1 = uVar4;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f568();
  uVar9 = 0x4028000000000000;
  func_0x000107c5f280();
  lVar7 = 0x112e031e8;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  *puVar1 = (char)lVar6;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar10;
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  puVar1[0x28] = 0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_c0,0,1,0,1,0,1,0x404c000000000000,0,0,1);
  lVar6 = 0x112e031d8;
  puVar8 = &UNK_10d9d5a18;
  func_0x0001000285a8();
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  puVar2[9] = uStack_78;
  puVar2[8] = uStack_80;
  puVar2[0xb] = uStack_68;
  puVar2[10] = uStack_70;
  puVar2[0xd] = uStack_58;
  puVar2[0xc] = uStack_60;
  puVar2[1] = uStack_b8;
  *puVar2 = uStack_c0;
  puVar2[3] = uStack_a8;
  puVar2[2] = uStack_b0;
  puVar2[5] = uStack_98;
  puVar2[4] = uStack_a0;
  puVar2[7] = uStack_88;
  puVar2[6] = uStack_90;
  func_0x000107c5f7ac();
  lVar7 = 0x112e031c0;
  func_0x0001000285a8(0x112e031c0,&UNK_10d9d5a10);
  plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  *plVar3 = lVar6;
  plVar3[1] = (long)puVar8;
  return;
}



/* Entry: 101b402e0; end: 101b40c9f;  */

void FUN_101b402e0(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar14;
  code *pcVar15;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long *plVar17;
  undefined8 uStack_750;
  undefined1 auStack_748 [8];
  undefined8 uStack_740;
  undefined1 auStack_738 [8];
  long alStack_730 [2];
  long alStack_720 [3];
  undefined *puStack_708;
  undefined1 auStack_700 [208];
  undefined *puStack_630;
  long lStack_628;
  long lStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined1 uStack_550;
  undefined8 uStack_54f;
  undefined8 uStack_547;
  undefined8 uStack_53f;
  undefined8 uStack_537;
  undefined8 uStack_52f;
  undefined8 uStack_527;
  undefined8 uStack_51f;
  undefined7 uStack_517;
  undefined1 uStack_510;
  undefined7 uStack_50f;
  long lStack_508;
  undefined *puStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  undefined *puStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  undefined *puStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined7 uStack_290;
  undefined1 uStack_289;
  undefined7 uStack_288;
  undefined1 uStack_281;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined7 uStack_278;
  undefined1 uStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined7 uStack_250;
  long lStack_249;
  undefined *puStack_240;
  undefined *puStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  
  lVar16 = 0x112e03228;
  alStack_720[1] = param_1;
  func_0x0001000285a8(0x112e03228,&UNK_10d9d5a48);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  lVar16 = (long)alStack_720 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_720[2] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar17 = (long *)(lVar16 - extraout_x12);
  lVar16 = 0x112e03188;
  func_0x0001000285a8(0x112e03188,&UNK_10d9d5978);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  lVar16 = (long)plVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_720[0] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined *)(lVar16 - extraout_x12_00);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_708 = puVar14;
  func_0x000107c61168();
  func_0x000107c5af98();
  func_0x000107c61180();
  bVar2 = puVar6 == (undefined *)0x0;
  if (bVar2) {
    lVar16 = 0x112e03190;
    func_0x0001000285a8(0x112e03190,&UNK_10d9d5980);
    pcVar15 = *(code **)(*(long *)(lVar16 + -8) + 0x38);
    puVar12 = puStack_708;
  }
  else {
    func_0x000107c61174();
    puVar7 = puVar6;
    func_0x000107c5f6e8();
    uVar8 = 0x48;
    func_0x0001026ff7d0();
    puVar9 = &UNK_10d9d59c0;
    func_0x000107c614e0();
    uVar10 = 0x112e031a0;
    puStack_240 = puVar7;
    puStack_238 = puVar9;
    lStack_230 = uVar8;
    func_0x0001000285a8(0x112e031a0,&UNK_10d9d59f0);
    uVar11 = uVar10;
    FUN_101b41784();
    puVar12 = puStack_708;
    func_0x000107c5f650(puStack_708,1,uVar10,uVar11);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar7);
    func_0x000107c61170(puVar6);
    lVar16 = 0x112e03190;
    func_0x0001000285a8(0x112e03190,&UNK_10d9d5980);
    pcVar15 = *(code **)(*(long *)(lVar16 + -8) + 0x38);
  }
  (*pcVar15)(puVar12,bVar2,1,lVar16);
  func_0x000107c5f43c();
  func_0x000101b409ac(&puStack_240,param_2);
  uStack_148 = lStack_218;
  uStack_150 = lStack_220;
  uStack_138 = lStack_208;
  uStack_140 = lStack_210;
  lStack_130 = lStack_200;
  uStack_158 = lStack_228;
  uStack_160 = lStack_230;
  puStack_168 = puStack_238;
  puStack_170 = puStack_240;
  uStack_f8 = lStack_218;
  uStack_100 = lStack_220;
  uStack_e8 = lStack_208;
  uStack_f0 = lStack_210;
  lStack_e0 = lStack_200;
  uStack_108 = lStack_228;
  uStack_110 = lStack_230;
  puStack_118 = puStack_238;
  puStack_120 = puStack_240;
  uVar10 = 0x112e03230;
  FUN_101b41b94(&puStack_170,&puStack_360,0x112e03230,&UNK_10d9d5a50);
  ppuVar13 = &puStack_120;
  func_0x000101b41bdc(ppuVar13,0x112e03230,&UNK_10d9d5a50);
  uStack_271 = (undefined1)uStack_158;
  uStack_270 = (undefined7)((ulong)uStack_158 >> 8);
  uStack_279 = (undefined1)uStack_160;
  uStack_278 = (undefined7)((ulong)uStack_160 >> 8);
  uStack_261 = (undefined1)uStack_148;
  uStack_260 = (undefined7)((ulong)uStack_148 >> 8);
  uStack_269 = (undefined1)uStack_150;
  uStack_268 = (undefined7)((ulong)uStack_150 >> 8);
  uStack_251 = (undefined1)uStack_138;
  uStack_250 = (undefined7)((ulong)uStack_138 >> 8);
  uStack_259 = (undefined1)uStack_140;
  uStack_258 = (undefined7)((ulong)uStack_140 >> 8);
  lStack_249 = lStack_130;
  uStack_281 = SUB81(puStack_168,0);
  uStack_280 = (undefined7)((ulong)puStack_168 >> 8);
  uStack_289 = SUB81(puStack_170,0);
  uStack_288 = (undefined7)((ulong)puStack_170 >> 8);
  func_0x000107c5f7b0();
  uStack_a7 = uStack_278;
  uStack_a0 = uStack_271;
  uStack_af = uStack_280;
  uStack_a8 = uStack_279;
  uStack_97 = uStack_268;
  uStack_90 = uStack_261;
  uStack_9f = uStack_270;
  uStack_98 = uStack_269;
  uStack_87 = uStack_258;
  uStack_8f = uStack_260;
  uStack_88 = uStack_259;
  lStack_78 = lStack_249;
  uStack_80 = uStack_251;
  uStack_7f = uStack_250;
  lStack_c8 = 0;
  uStack_c0 = 1;
  uStack_b7 = uStack_288;
  uStack_b0 = uStack_281;
  uStack_bf = uStack_290;
  uStack_b8 = uStack_289;
  puStack_d0 = puVar12;
  *(undefined ***)(puVar14 + -0x10) = ppuVar13;
  *(undefined8 *)(puVar14 + -8) = uVar10;
  puVar14[-0x18] = 1;
  *(undefined8 *)(puVar14 + -0x20) = 0;
  puVar14[-0x28] = 1;
  *(undefined8 *)(puVar14 + -0x30) = 0;
  func_0x000107c5f388(&lStack_1e0,0,1,0,1,0x7ff0000000000000,0,0,1);
  lStack_218 = CONCAT71(uStack_a7,uStack_a8);
  lStack_220 = CONCAT71(uStack_af,uStack_b0);
  lStack_208 = CONCAT71(uStack_97,uStack_98);
  lStack_210 = CONCAT71(uStack_9f,uStack_a0);
  lStack_1f8 = CONCAT71(uStack_87,uStack_88);
  lStack_200 = CONCAT71(uStack_8f,uStack_90);
  lStack_1f0 = CONCAT71(uStack_7f,uStack_80);
  lStack_1e8 = lStack_78;
  lStack_228 = CONCAT71(uStack_b7,uStack_b8);
  lStack_230 = CONCAT71(uStack_bf,uStack_c0);
  puStack_238 = (undefined *)lStack_c8;
  puStack_240 = puStack_d0;
  uStack_558 = 0;
  uStack_550 = 1;
  uStack_547 = CONCAT17(uStack_281,uStack_288);
  uStack_54f = CONCAT17(uStack_289,uStack_290);
  uStack_537 = CONCAT17(uStack_271,uStack_278);
  uStack_53f = CONCAT17(uStack_279,uStack_280);
  uStack_527 = CONCAT17(uStack_261,uStack_268);
  uStack_52f = CONCAT17(uStack_269,uStack_270);
  uStack_51f = CONCAT17(uStack_259,uStack_260);
  lStack_508 = lStack_249;
  uStack_50f = uStack_250;
  uStack_517 = uStack_258;
  uStack_510 = uStack_251;
  puStack_560 = puVar12;
  FUN_101b41b94(&puStack_d0,&puStack_360,0x112e03238,&UNK_10d9d5a58);
  func_0x000101b41bdc(&puStack_560,0x112e03238,&UNK_10d9d5a58);
  lStack_458 = lStack_198;
  lStack_460 = lStack_1a0;
  lStack_448 = lStack_188;
  lStack_450 = lStack_190;
  lStack_438 = lStack_178;
  lStack_440 = lStack_180;
  lStack_498 = lStack_1d8;
  lStack_4a0 = lStack_1e0;
  lStack_488 = lStack_1c8;
  lStack_490 = lStack_1d0;
  lStack_478 = lStack_1b8;
  lStack_480 = lStack_1c0;
  lStack_468 = lStack_1a8;
  lStack_470 = lStack_1b0;
  lStack_4d8 = lStack_218;
  lStack_4e0 = lStack_220;
  lStack_4c8 = lStack_208;
  lStack_4d0 = lStack_210;
  lStack_4b8 = lStack_1f8;
  lStack_4c0 = lStack_200;
  lStack_4a8 = lStack_1e8;
  lStack_4b0 = lStack_1f0;
  lStack_4f8 = (long)puStack_238;
  puStack_500 = puStack_240;
  lStack_4e8 = lStack_228;
  lStack_4f0 = lStack_230;
  lStack_388 = lStack_198;
  lStack_390 = lStack_1a0;
  lStack_378 = lStack_188;
  lStack_380 = lStack_190;
  lStack_368 = lStack_178;
  lStack_370 = lStack_180;
  lStack_3c8 = lStack_1d8;
  lStack_3d0 = lStack_1e0;
  lStack_3b8 = lStack_1c8;
  lStack_3c0 = lStack_1d0;
  lStack_3a8 = lStack_1b8;
  lStack_3b0 = lStack_1c0;
  lStack_398 = lStack_1a8;
  lStack_3a0 = lStack_1b0;
  lStack_408 = lStack_218;
  lStack_410 = lStack_220;
  lStack_3f8 = lStack_208;
  lStack_400 = lStack_210;
  lStack_3e8 = lStack_1f8;
  lStack_3f0 = lStack_200;
  lStack_3d8 = lStack_1e8;
  lStack_3e0 = lStack_1f0;
  lStack_428 = (long)puStack_238;
  puStack_430 = puStack_240;
  lStack_418 = lStack_228;
  lStack_420 = lStack_230;
  FUN_101b41b94(&puStack_500,&puStack_360,0x112e03240,&UNK_10d9d5a60);
  ppuVar13 = &puStack_430;
  func_0x000101b41bdc(ppuVar13,0x112e03240,&UNK_10d9d5a60);
  func_0x000107c5f410();
  *plVar17 = (long)ppuVar13;
  plVar17[1] = 0;
  *(undefined1 *)(plVar17 + 2) = 1;
  lVar16 = 0x112e03248;
  func_0x0001000285a8(0x112e03248,&UNK_10d9d5a68);
  FUN_101b40ca0((long)plVar17 + (long)*(int *)(lVar16 + 0x2c),param_2);
  puVar6 = puStack_708;
  lVar3 = alStack_720[0];
  FUN_101b41b94(puStack_708,alStack_720[0],0x112e03188,&UNK_10d9d5978);
  lVar5 = alStack_720[2];
  lStack_588 = lStack_458;
  lStack_590 = lStack_460;
  lStack_578 = lStack_448;
  lStack_580 = lStack_450;
  lStack_568 = lStack_438;
  lStack_570 = lStack_440;
  lStack_5c8 = lStack_498;
  lStack_5d0 = lStack_4a0;
  lStack_5b8 = lStack_488;
  lStack_5c0 = lStack_490;
  lStack_5a8 = lStack_478;
  lStack_5b0 = lStack_480;
  lStack_598 = lStack_468;
  lStack_5a0 = lStack_470;
  lStack_608 = lStack_4d8;
  lStack_610 = lStack_4e0;
  lStack_5f8 = lStack_4c8;
  lStack_600 = lStack_4d0;
  lStack_5e8 = lStack_4b8;
  lStack_5f0 = lStack_4c0;
  lStack_5d8 = lStack_4a8;
  lStack_5e0 = lStack_4b0;
  lStack_628 = lStack_4f8;
  puStack_630 = puStack_500;
  lStack_618 = lStack_4e8;
  lStack_620 = lStack_4f0;
  FUN_101b41b94(plVar17,alStack_720[2],0x112e03228,&UNK_10d9d5a48);
  lVar4 = alStack_720[1];
  FUN_101b41b94(lVar3,alStack_720[1],0x112e03188,&UNK_10d9d5978);
  lVar16 = 0x112e03250;
  func_0x0001000285a8(0x112e03250,&UNK_10d9d5a70);
  lStack_2b8 = lStack_588;
  lStack_2c0 = lStack_590;
  lStack_2a8 = lStack_578;
  lStack_2b0 = lStack_580;
  lStack_298 = lStack_568;
  lStack_2a0 = lStack_570;
  lStack_2f8 = lStack_5c8;
  lStack_300 = lStack_5d0;
  lStack_2e8 = lStack_5b8;
  lStack_2f0 = lStack_5c0;
  lStack_2c8 = lStack_598;
  lStack_2d0 = lStack_5a0;
  lStack_2d8 = lStack_5a8;
  lStack_2e0 = lStack_5b0;
  lStack_308 = lStack_5d8;
  lStack_310 = lStack_5e0;
  lStack_328 = lStack_5f8;
  lStack_330 = lStack_600;
  lStack_318 = lStack_5e8;
  lStack_320 = lStack_5f0;
  lStack_338 = lStack_608;
  lStack_340 = lStack_610;
  lStack_358 = lStack_628;
  puStack_360 = puStack_630;
  lStack_348 = lStack_618;
  lStack_350 = lStack_620;
  plVar1 = (long *)(lVar4 + *(int *)(lVar16 + 0x30));
  plVar1[0x15] = lStack_588;
  plVar1[0x14] = lStack_590;
  plVar1[0x17] = lStack_578;
  plVar1[0x16] = lStack_580;
  plVar1[0x19] = lStack_568;
  plVar1[0x18] = lStack_570;
  plVar1[0xd] = lStack_5c8;
  plVar1[0xc] = lStack_5d0;
  plVar1[0xf] = lStack_5b8;
  plVar1[0xe] = lStack_5c0;
  plVar1[0x11] = lStack_5a8;
  plVar1[0x10] = lStack_5b0;
  plVar1[0x13] = lStack_598;
  plVar1[0x12] = lStack_5a0;
  plVar1[5] = lStack_608;
  plVar1[4] = lStack_610;
  plVar1[7] = lStack_5f8;
  plVar1[6] = lStack_600;
  plVar1[9] = lStack_5e8;
  plVar1[8] = lStack_5f0;
  plVar1[0xb] = lStack_5d8;
  plVar1[10] = lStack_5e0;
  plVar1[1] = lStack_628;
  *plVar1 = (long)puStack_630;
  plVar1[3] = lStack_618;
  plVar1[2] = lStack_620;
  FUN_101b41b94(lVar5,lVar4 + *(int *)(lVar16 + 0x40),0x112e03228,&UNK_10d9d5a48);
  FUN_101b41b94(&puStack_360,auStack_700,0x112e03240,&UNK_10d9d5a60);
  func_0x000101b41bdc(plVar17,0x112e03228,&UNK_10d9d5a48);
  func_0x000101b41bdc(puVar6,0x112e03188,&UNK_10d9d5978);
  func_0x000101b41bdc(lVar5,0x112e03228,&UNK_10d9d5a48);
  func_0x000101b41bdc(&puStack_630,0x112e03240,&UNK_10d9d5a60);
  func_0x000101b41bdc(lVar3,0x112e03188,&UNK_10d9d5978);
  return;
}



/* Entry: 101b40ca0; end: 101b41323;  */

void FUN_101b40ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar18;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *apuStack_350 [2];
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined1 auStack_320 [128];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined *puStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined *puStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  
  lVar13 = 0x112e03258;
  lStack_330 = param_1;
  func_0x0001000285a8(0x112e03258,&UNK_10d9d5a78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar20 = (long)apuStack_350 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_328 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12;
  lVar13 = 0x112e03260;
  func_0x0001000285a8(0x112e03260,&UNK_10d9d5a80);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar19 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_338 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (undefined8 *)(lVar19 - extraout_x12_00);
  lVar19 = *(long *)(param_6 + 0x48);
  if (lVar19 == 0) {
    lVar13 = 0x112e03268;
    func_0x0001000285a8(0x112e03268,&UNK_10d9d5a88);
    pcVar18 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
  }
  else {
    puStack_130 = *(undefined **)(param_6 + 0x40);
    lStack_128 = lVar19;
    func_0x000100e8b654();
    func_0x000107c61434(lVar19);
    ppuVar9 = &puStack_130;
    puVar12 = PTR___sSSN_11034da80;
    func_0x000107c5f5e0();
    uVar10 = 0x18;
    lStack_340 = lVar20;
    func_0x0001026ff85c();
    uVar22 = uVar10;
    ppuVar17 = ppuVar9;
    puVar16 = puVar12;
    lVar20 = lVar13;
    apuStack_350[1] = puVar21;
    func_0x000107c5f5d4();
    uVar7 = (undefined1)lVar20;
    func_0x000107c61574(uVar10);
    func_0x000100f795bc(ppuVar9,puVar12,lVar13);
    func_0x000107c6142c(param_9);
    puVar11 = (undefined *)0x3e;
    func_0x0001026ff7d0();
    puVar12 = puVar11;
    uVar10 = uVar22;
    ppuVar9 = ppuVar17;
    puVar15 = puVar16;
    func_0x000107c5f5d0();
    func_0x000107c61574(puVar11);
    func_0x000100f795bc(uVar22,ppuVar17,puVar16);
    func_0x000107c6142c();
    func_0x000107c5f568();
    uVar22 = 0x4018000000000000;
    uVar8 = uVar7;
    func_0x000107c5f280();
    uVar24 = param_3;
    uVar25 = param_4;
    uVar26 = param_5;
    func_0x000107c5f584();
    uStack_218 = (undefined1)param_4;
    uStack_217 = (undefined7)((ulong)param_4 >> 8);
    uStack_210 = (undefined1)param_5;
    uStack_20f = (undefined7)((ulong)param_5 >> 8);
    uStack_208 = 0;
    uVar23 = 0x4000000000000000;
    puStack_250 = puVar12;
    uStack_248 = uVar10;
    uStack_240 = (char)ppuVar9;
    puStack_238 = puVar15;
    uStack_230 = uVar7;
    uStack_228 = uVar22;
    uStack_220 = param_3;
    func_0x000107c5f280();
    puVar21 = apuStack_350[1];
    uStack_280 = CONCAT71(uStack_22f,uStack_230);
    uStack_278 = uStack_228;
    uStack_268 = uStack_218;
    uStack_270 = uStack_220;
    uStack_25f = uStack_20f;
    uStack_258 = uStack_208;
    uStack_267 = uStack_217;
    uStack_260 = uStack_210;
    puStack_290 = (undefined *)CONCAT71(uStack_23f,uStack_240);
    uStack_298 = uStack_248;
    puStack_2a0 = puStack_250;
    puStack_288 = puStack_238;
    uStack_1b8 = 0;
    puStack_200 = puVar12;
    uStack_1f8 = uVar10;
    uStack_1f0 = (char)ppuVar9;
    puStack_1e8 = puVar15;
    uStack_1e0 = uVar7;
    uStack_1d8 = uVar22;
    uStack_1d0 = param_3;
    uStack_1c8 = param_4;
    uStack_1c0 = param_5;
    FUN_101b41b94(&puStack_250,&puStack_130,0x112d4f490,&UNK_10d915340);
    func_0x000101b41bdc(&puStack_200,0x112d4f490,&UNK_10d915340);
    lVar13 = 0x112e032a8;
    func_0x0001000285a8(0x112e032a8,&UNK_10d9d5aa8);
    lVar1 = (long)puVar21 + (long)*(int *)(lVar13 + 0x24);
    uVar5 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
    lVar13 = 0;
    func_0x000107c5f41c();
    (**(code **)(*(long *)(lVar13 + -8) + 0x68))(lVar1,uVar5,lVar13);
    uVar22 = 5;
    func_0x0001026ff7d0();
    puVar12 = &UNK_10d9d59c0;
    func_0x000107c614e0();
    lVar13 = 0x112e032b0;
    puVar16 = &UNK_10d9d5ab0;
    func_0x0001000285a8();
    puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar13 + 0x24));
    *puVar2 = puVar12;
    puVar2[1] = uVar22;
    func_0x000107c5f7ac();
    uStack_178 = CONCAT71(uStack_267,uStack_268);
    uStack_188 = uStack_278;
    uStack_190 = uStack_280;
    uStack_180 = uStack_270;
    uStack_168 = CONCAT71(uStack_257,uStack_258);
    uStack_170 = CONCAT71(uStack_25f,uStack_260);
    uStack_1a8 = uStack_298;
    puStack_1b0 = puStack_2a0;
    puStack_198 = puStack_288;
    puStack_1a0 = puStack_290;
    uStack_148 = (undefined1)uVar25;
    uStack_147 = (undefined7)((ulong)uVar25 >> 8);
    uStack_140 = (undefined1)uVar26;
    uStack_13f = (undefined7)((ulong)uVar26 >> 8);
    uStack_138 = 0;
    lVar14 = 0x112e032b8;
    uStack_160 = uVar8;
    uStack_158 = uVar23;
    uStack_150 = uVar24;
    func_0x0001000285a8(0x112e032b8,&UNK_10d9d5ab8);
    uVar6 = uStack_178;
    uVar10 = uStack_180;
    uVar22 = uStack_190;
    lVar20 = lStack_340;
    plVar3 = (long *)(lVar1 + *(int *)(lVar14 + 0x24));
    *plVar3 = lVar13;
    plVar3[1] = (long)puVar16;
    puVar21[5] = uStack_188;
    puVar21[4] = uVar22;
    puVar21[7] = uVar6;
    puVar21[6] = uVar10;
    puVar15 = puStack_198;
    puVar16 = puStack_1a0;
    puVar12 = puStack_1b0;
    puVar21[1] = uStack_1a8;
    *puVar21 = puVar12;
    puVar21[3] = puVar15;
    puVar21[2] = puVar16;
    uVar22 = CONCAT17(uStack_140,uStack_147);
    *(ulong *)((long)puVar21 + 0x71) = CONCAT17(uStack_138,uStack_13f);
    *(undefined8 *)((long)puVar21 + 0x69) = uVar22;
    uVar6 = uStack_150;
    uVar22 = CONCAT71(uStack_15f,uStack_160);
    uVar10 = CONCAT71(uStack_147,uStack_148);
    puVar21[0xb] = uStack_158;
    puVar21[10] = uVar22;
    puVar21[0xd] = uVar10;
    puVar21[0xc] = uVar6;
    uVar22 = uStack_170;
    puVar21[9] = uStack_168;
    puVar21[8] = uVar22;
    uStack_f8 = CONCAT71(uStack_267,uStack_268);
    uStack_e8 = CONCAT71(uStack_257,uStack_258);
    uStack_f0 = CONCAT71(uStack_25f,uStack_260);
    uStack_100 = uStack_270;
    puStack_118 = puStack_288;
    puStack_120 = puStack_290;
    uStack_108 = uStack_278;
    uStack_110 = uStack_280;
    lStack_128 = uStack_298;
    puStack_130 = puStack_2a0;
    uStack_b8 = 0;
    uStack_e0 = uVar8;
    uStack_d8 = uVar23;
    uStack_d0 = uVar24;
    uStack_c8 = uVar25;
    uStack_c0 = uVar26;
    FUN_101b41b94(&puStack_1b0,auStack_320,0x112d4f498,&UNK_10d9d5ac0);
    ppuVar9 = &puStack_130;
    func_0x000101b41bdc(ppuVar9,0x112d4f498,&UNK_10d9d5ac0);
    func_0x000107c5f2e4();
    lVar13 = 0x112e03268;
    func_0x0001000285a8(0x112e03268,&UNK_10d9d5a88);
    *(undefined ***)((long)puVar21 + (long)*(int *)(lVar13 + 0x24)) = ppuVar9;
    pcVar18 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
  }
  (*pcVar18)(puVar21,lVar19 == 0,1,lVar13);
  puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5af98();
  func_0x000107c61180();
  bVar4 = puVar12 == (undefined *)0x0;
  if (!bVar4) {
    func_0x000107c61174();
    puVar15 = puVar12;
    func_0x000107c5f6e8();
    puVar11 = (undefined *)0x48;
    func_0x0001026ff7d0();
    puVar16 = &UNK_10d9d59c0;
    func_0x000107c614e0();
    lStack_128 = CONCAT71(lStack_128._1_7_,1);
    uVar22 = 0x112e03280;
    puStack_130 = puVar15;
    puStack_120 = puVar16;
    puStack_118 = puVar11;
    func_0x0001000285a8(0x112e03280,&UNK_10d9d5aa0);
    uVar10 = uVar22;
    func_0x000101b41a44();
    func_0x000107c5f650(lVar20,1,uVar22,uVar10);
    func_0x000107c61574(puVar11);
    func_0x000107c61574(puVar16);
    func_0x000107c61574(puVar15);
    func_0x000107c61170(puVar12);
  }
  lVar13 = 0x112e03270;
  func_0x0001000285a8(0x112e03270,&UNK_10d9d5a90);
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar20,bVar4,1,lVar13);
  lVar19 = lStack_338;
  FUN_101b41b94(puVar21,lStack_338,0x112e03260,&UNK_10d9d5a80);
  lVar1 = lStack_328;
  FUN_101b41b94(lVar20,lStack_328,0x112e03258,&UNK_10d9d5a78);
  lVar14 = lStack_330;
  FUN_101b41b94(lVar19,lStack_330,0x112e03260,&UNK_10d9d5a80);
  lVar13 = 0x112e03278;
  func_0x0001000285a8(0x112e03278,&UNK_10d9d5a98);
  FUN_101b41b94(lVar1,lVar14 + *(int *)(lVar13 + 0x30),0x112e03258,&UNK_10d9d5a78);
  func_0x000101b41bdc(lVar20,0x112e03258,&UNK_10d9d5a78);
  func_0x000101b41bdc(puVar21,0x112e03260,&UNK_10d9d5a80);
  func_0x000101b41bdc(lVar1,0x112e03258,&UNK_10d9d5a78);
  func_0x000101b41bdc(lVar19,0x112e03260,&UNK_10d9d5a80);
  return;
}



/* Entry: 101b41324; end: 101b41547;  */

void FUN_101b41324(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_fc;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = 0x112e031b0;
  lStack_f8 = param_1;
  func_0x0001000285a8(0x112e031b0,&UNK_10d9d5a00);
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&uStack_110 - extraout_x8;
  lVar2 = 0x112e031b8;
  func_0x0001000285a8(0x112e031b8,&UNK_10d9d5a08);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar10 - extraout_x8_00;
  uStack_108 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uVar11 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uVar7 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_fc = (uint)(byte)uStack_80;
  puStack_e0 = &uStack_d0;
  uStack_c8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_78 = uVar11;
  uStack_70 = uVar7;
  func_0x000107c6157c(uVar7);
  uVar3 = 0x112e031c0;
  func_0x0001000285a8(0x112e031c0,&UNK_10d9d5a10);
  uVar4 = uVar3;
  FUN_101b41824();
  func_0x000107c5f738(lVar10,uVar11,uVar7,FUN_101b4181c,&lStack_f0,uVar3,uVar4);
  uVar3 = 0x112e03210;
  FUN_101b41f3c(0x112e03210,0x112e031b0,&UNK_10d9d5a00,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar4 = uVar3;
  FUN_101b41744();
  func_0x000107c5f60c(lVar6);
  (**(code **)(lVar9 + 8))(lVar10,lVar1);
  puStack_e8 = &UNK_110448280;
  plVar5 = &lStack_f0;
  lStack_f0 = lVar1;
  puStack_e0 = (undefined8 *)uVar3;
  uStack_d8 = uVar4;
  func_0x000107c614f4(plVar5,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  lVar9 = lStack_f8;
  func_0x000107c5f674(lStack_f8,uStack_108,uStack_110,lVar2,plVar5);
  (**(code **)(lVar8 + 8))(lVar6,lVar2);
  func_0x000107c5f7cc();
  lVar1 = 0x112e03218;
  func_0x0001000285a8(0x112e03218,&UNK_10d9d5a38);
  plVar5 = (long *)(lVar9 + *(int *)(lVar1 + 0x24));
  *plVar5 = lVar6;
  *(char *)(plVar5 + 1) = (char)uStack_fc;
  return;
}



/* Entry: 101b41548; end: 101b4155f;  */

void FUN_101b41548(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6769ec,1);
  return;
}



/* Entry: 101b41560; end: 101b41617;  */

void FUN_101b41560(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e03118 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e03110;
  func_0x00010002969c(0x112e03110,&UNK_10d9d5940);
  uVar2 = 0x112e03120;
  FUN_101b4163c(0x112e03120,0x112e03128,&UNK_10d9d5948,FUN_101b41618);
  uVar3 = 0x112e03160;
  FUN_101b41f3c(0x112e03160,0x112e03168,&UNK_10d9d5968,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e03118 = puVar4;
  return;
}



/* Entry: 101b41618; end: 101b4163b;  */

void FUN_101b41618(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = 0x112e03138;
  if (puRam0000000112e03130 == (undefined *)0x0) {
    func_0x00010002969c(0x112e03138,&UNK_10d9d5950);
    uVar2 = uVar1;
    FUN_101b416ac();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
    puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar2;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,uVar1,&uStack_40);
    puRam0000000112e03130 = puVar3;
  }
  return;
}



/* Entry: 101b4163c; end: 101b416ab;  */

void FUN_101b4163c(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 101b416ac; end: 101b41743;  */

void FUN_101b416ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e03140 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e03148;
  func_0x00010002969c(0x112e03148,&UNK_10d9d5958);
  uVar2 = 0x112e03150;
  FUN_101b41f3c(0x112e03150,0x112e03158,&UNK_10d9d5960,
                PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e03140 = puVar3;
  return;
}



/* Entry: 101b41744; end: 101b41783;  */

void FUN_101b41744(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d5b78;
  func_0x000107c61520(&UNK_10d9d5b78,&UNK_110448280);
  puRam0000000112e03178 = puVar1;
  return;
}



/* Entry: 101b41784; end: 101b4181b;  */

void FUN_101b41784(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e031a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e031a0;
  func_0x00010002969c(0x112e031a0,&UNK_10d9d59f0);
  uVar2 = 0x112d4fb58;
  FUN_101b41f3c(0x112d4fb58,0x112d4fb60,&UNK_10d915b10,
                PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8);
  puStack_30 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_110349778;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_30);
  puRam0000000112e031a8 = puVar3;
  return;
}



/* Entry: 101b4181c; end: 101b41823;  */

void FUN_101b4181c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = uVar8;
  func_0x000107c5f410();
  *param_1 = uVar5;
  param_1[1] = 0x4024000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar6 = 0x112e03220;
  func_0x0001000285a8(0x112e03220,&UNK_10d9d5a40);
  FUN_101b402e0((long)param_1 + (long)*(int *)(lVar6 + 0x2c));
  uVar4 = (undefined1)uVar8;
  func_0x000107c5f584();
  uVar10 = 0x4020000000000000;
  func_0x000107c5f280();
  lVar6 = 0x112e031f8;
  uVar5 = param_3;
  uVar8 = param_4;
  uVar11 = param_5;
  func_0x0001000285a8(0x112e031f8,&UNK_10d9d5a28);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  *puVar1 = uVar4;
  *(undefined8 *)(puVar1 + 8) = uVar10;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f568();
  uVar10 = 0x4028000000000000;
  func_0x000107c5f280();
  lVar7 = 0x112e031e8;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  *puVar1 = (char)lVar6;
  *(undefined8 *)(puVar1 + 8) = uVar10;
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  puVar1[0x28] = 0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_c0,0,1,0,1,0,1,0x404c000000000000,0,0,1);
  lVar6 = 0x112e031d8;
  puVar9 = &UNK_10d9d5a18;
  func_0x0001000285a8();
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  puVar2[9] = uStack_78;
  puVar2[8] = uStack_80;
  puVar2[0xb] = uStack_68;
  puVar2[10] = uStack_70;
  puVar2[0xd] = uStack_58;
  puVar2[0xc] = uStack_60;
  puVar2[1] = uStack_b8;
  *puVar2 = uStack_c0;
  puVar2[3] = uStack_a8;
  puVar2[2] = uStack_b0;
  puVar2[5] = uStack_98;
  puVar2[4] = uStack_a0;
  puVar2[7] = uStack_88;
  puVar2[6] = uStack_90;
  func_0x000107c5f7ac();
  lVar7 = 0x112e031c0;
  func_0x0001000285a8(0x112e031c0,&UNK_10d9d5a10);
  plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  *plVar3 = lVar6;
  plVar3[1] = (long)puVar9;
  return;
}



/* Entry: 101b41824; end: 101b41b53;  */

void FUN_101b41824(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e031c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e031c0;
  func_0x00010002969c(0x112e031c0,&UNK_10d9d5a10);
  uVar2 = uVar1;
  func_0x000101b418bc();
  uVar3 = 0x112e03160;
  FUN_101b41f3c(0x112e03160,0x112e03168,&UNK_10d9d5968,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e031c8 = puVar4;
  return;
}



/* Entry: 101b41b54; end: 101b41b93;  */

void FUN_101b41b54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e032a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s7SwiftUI17_FlipForRTLEffectVAA12ViewModifierAAMc_110348d30;
  func_0x000107c61520(PTR___s7SwiftUI17_FlipForRTLEffectVAA12ViewModifierAAMc_110348d30,
                      PTR___s7SwiftUI17_FlipForRTLEffectVN_110348d40);
  puRam0000000112e032a0 = puVar1;
  return;
}



/* Entry: 101b41b94; end: 101b41c8b;  */

undefined8 FUN_101b41b94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101b41c8c; end: 101b41cab;  */

undefined1  [16] FUN_101b41c8c(void)

{
  return ZEXT816(0x110448280);
}



/* Entry: 101b41cac; end: 101b41da7;  */

void FUN_101b41cac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112e032c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e032c8;
  func_0x00010002969c(0x112e032c8,&UNK_10d9d5b10);
  uVar2 = 0x112e03100;
  func_0x00010002969c(0x112e03100,&UNK_10d9d5930);
  uVar3 = 0x112e03170;
  FUN_101b41f3c(0x112e03170,0x112e03100,&UNK_10d9d5930,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar4 = uVar3;
  FUN_101b41744();
  puStack_48 = &UNK_110448280;
  puVar5 = &uStack_50;
  uStack_50 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  func_0x000107c614f4(puVar5,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  uVar2 = 0x112d500b8;
  func_0x000101b420e0(0x112d500b8,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_110349210,
                      PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208);
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_60 = puVar5;
  uStack_58 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_60);
  puRam0000000112e032c0 = puVar6;
  return;
}



/* Entry: 101b41da8; end: 101b41e3f;  */

void FUN_101b41da8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e032d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e03218;
  func_0x00010002969c(0x112e03218,&UNK_10d9d5a38);
  uVar2 = uVar1;
  FUN_101b41e40();
  uVar3 = 0x112e032e8;
  FUN_101b41f3c(0x112e032e8,0x112e032f0,&UNK_10d9d5b20,
                PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e032d0 = puVar4;
  return;
}



/* Entry: 101b41e40; end: 101b41f3b;  */

void FUN_101b41e40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112e032d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e032e0;
  func_0x00010002969c(0x112e032e0,&UNK_10d9d5b18);
  uVar2 = 0x112e031b0;
  func_0x00010002969c(0x112e031b0,&UNK_10d9d5a00);
  uVar3 = 0x112e03210;
  FUN_101b41f3c(0x112e03210,0x112e031b0,&UNK_10d9d5a00,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar4 = uVar3;
  FUN_101b41744();
  puStack_48 = &UNK_110448280;
  puVar5 = &uStack_50;
  uStack_50 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  func_0x000107c614f4(puVar5,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  uVar2 = 0x112d500b8;
  func_0x000101b420e0(0x112d500b8,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_110349210,
                      PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208);
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_60 = puVar5;
  uStack_58 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_60);
  puRam0000000112e032d8 = puVar6;
  return;
}



/* Entry: 101b41f3c; end: 101b41f7f;  */

void FUN_101b41f3c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 101b41f80; end: 101b41f9f;  */

void FUN_101b41f80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e676a64,1);
  return;
}



/* Entry: 101b41fa0; end: 101b4211f;  */

void FUN_101b41fa0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e03308 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e032f8;
  func_0x00010002969c(0x112e032f8,&UNK_10d9d5bb0);
  uVar2 = 0x112e02e00;
  func_0x000101b420e0(0x112e02e00,PTR___s7SwiftUI24ButtonStyleConfigurationV5LabelVMa_110349070,
                      PTR___s7SwiftUI24ButtonStyleConfigurationV5LabelVAA4ViewAAMc_110349068);
  puStack_28 = PTR___s7SwiftUI14_OpacityEffectVAA12ViewModifierAAWP_1103489e8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e03308 = puVar3;
  return;
}



/* Entry: 101b42120; end: 101b421a3;  */

void FUN_101b42120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 101b421a4; end: 101b42213;  */

undefined1 FUN_101b421a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10d9d5ca8;
  func_0x000107c614e0(&UNK_10d9d5ca8);
  puVar2 = &UNK_10d9d5cd0;
  func_0x000107c614e0(&UNK_10d9d5cd0);
  func_0x000107c5f20c(&uStack_31);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_31;
}



/* Entry: 101b42214; end: 101b4264b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101b42214(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long alStack_a0 [2];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  byte bStack_61;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d373d0;
  lStack_90 = lVar10;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_00;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12_00;
  lStack_88 = _DAT_112e03320;
  *(undefined8 *)(unaff_x20 + _DAT_112e03320) = 0;
  func_0x000107c614f0(param_1);
  lStack_80 = param_2;
  uStack_78 = param_1;
  (**(code **)(param_2 + 8))(lVar13);
  (**(code **)(lVar11 + 0x38))(lVar14,1,1,lVar2);
  lVar9 = (long)*(int *)(lVar9 + 0x30);
  func_0x0001009f0578(lVar13,lVar10);
  func_0x0001009f0578(lVar14,lVar10 + lVar9);
  pcVar8 = *(code **)(lVar11 + 0x30);
  lVar3 = lVar10;
  (*pcVar8)(lVar10,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_101b43a78(lVar14,0x112d373d8,&UNK_10d9014c0);
    FUN_101b43a78(lVar13,0x112d373d8,&UNK_10d9014c0);
    lVar9 = lVar10 + lVar9;
    (*pcVar8)(lVar9,1,lVar2);
    if ((int)lVar9 == 1) {
      FUN_101b43a78(lVar10,0x112d373d8,&UNK_10d9014c0);
      bStack_61 = 0;
      goto LAB_101b42550;
    }
  }
  else {
    func_0x0001009f0578(lVar10,lVar12);
    lVar3 = lVar10 + lVar9;
    (*pcVar8)(lVar3,1,lVar2);
    lVar1 = lStack_90;
    if ((int)lVar3 != 1) {
      (**(code **)(lVar11 + 0x20))(lStack_90,lVar10 + lVar9,lVar2);
      uVar7 = 0x112d373e0;
      FUN_101b43b60(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                    PTR___s10Foundation4DateVSQAAMc_110350be0);
      lVar9 = lVar12;
      func_0x000107c5fab8(lVar12,lVar1,lVar2,uVar7);
      pcVar8 = *(code **)(lVar11 + 8);
      (*pcVar8)(lVar1,lVar2);
      FUN_101b43a78(lVar14,0x112d373d8,&UNK_10d9014c0);
      FUN_101b43a78(lVar13,0x112d373d8,&UNK_10d9014c0);
      (*pcVar8)(lVar12,lVar2);
      FUN_101b43a78(lVar10,0x112d373d8,&UNK_10d9014c0);
      bStack_61 = (byte)lVar9 ^ 1;
      goto LAB_101b42550;
    }
    FUN_101b43a78(lVar14,0x112d373d8,&UNK_10d9014c0);
    FUN_101b43a78(lVar13,0x112d373d8,&UNK_10d9014c0);
    (**(code **)(lVar11 + 8))(lVar12,lVar2);
  }
  FUN_101b43a78(lVar10,0x112d373d0,&UNK_10d90f8f0);
  bStack_61 = 1;
LAB_101b42550:
  bStack_61 = bStack_61 & 1;
  func_0x000107c5f1fc(unaff_x20 + _DAT_112e03318,&bStack_61,PTR___sSbN_11034dd40);
  puVar4 = &UNK_110448408;
  func_0x000107c613fc(&UNK_110448408,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,unaff_x20);
  puVar5 = &UNK_110448430;
  func_0x000107c613fc(&UNK_110448430,0x28,7);
  uVar7 = uStack_78;
  *(undefined8 *)(puVar5 + 0x10) = uStack_78;
  *(long *)(puVar5 + 0x18) = lStack_80;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  func_0x000107c615f0(uStack_78);
  *(undefined **)(lVar13 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar6 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10d9d5d08,puVar5);
  func_0x000107c61574(puVar5);
  func_0x000107c615e8(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + lStack_88);
  *(undefined8 *)(unaff_x20 + lStack_88) = uVar6;
  func_0x000107c61574(uVar7);
  return unaff_x20;
}



/* Entry: 101b4264c; end: 101b427e3;  */

void FUN_101b4264c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  lVar2 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  lVar2 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  lVar2 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  lVar2 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  *(long *)(unaff_x22 + 0x98) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  uVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar6;
  uVar6 = 0x112d45220;
  FUN_101b43b60(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b427e4,uVar5,uVar6);
  return;
}



/* Entry: 101b427e4; end: 101b428b7;  */

void FUN_101b427e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  lVar4 = *(long *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 200) = uVar7;
  (**(code **)(lVar2 + 0x20))(uVar3);
  func_0x000107c5fd34(uVar6,uVar8);
  (**(code **)(lVar1 + 8))(uVar3,uVar8);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101b428b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar5,unaff_x22 + 0xe0,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 101b428b8; end: 101b428fb;  */

void FUN_101b428b8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101b428fc,*(undefined8 *)(lVar1 + 0xb8),*(undefined8 *)(lVar1 + 0xc0));
  return;
}



/* Entry: 101b428fc; end: 101b42c83;  */

void FUN_101b428fc(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  byte bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  
  if ((*(char *)(unaff_x22 + 0xe0) == '\x01') || (func_0x000107c5fd5c(), (param_1 & 1) != 0)) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000107c61574(uVar6);
    func_0x000107c615c0(uVar11);
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar14);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar15);
    func_0x000107c615c0(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000101b429bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x38) + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) goto LAB_101b42c30;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  lVar5 = *(long *)(unaff_x22 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar15,*(undefined8 *)(unaff_x22 + 200));
  (**(code **)(lVar2 + 0x38))(uVar11,1,1,uVar14);
  lVar17 = (long)*(int *)(lVar4 + 0x30);
  func_0x0001009f0578(uVar15,lVar5);
  func_0x0001009f0578(uVar11,lVar5 + lVar17);
  pcVar18 = *(code **)(lVar2 + 0x30);
  lVar4 = lVar5;
  (*pcVar18)(lVar5,1,uVar14);
  if ((int)lVar4 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
    FUN_101b43a78(*(undefined8 *)(unaff_x22 + 0x70),0x112d373d8,&UNK_10d9014c0);
    FUN_101b43a78(uVar11,0x112d373d8,&UNK_10d9014c0);
    lVar5 = lVar5 + lVar17;
    (*pcVar18)(lVar5,1,uVar14);
    if ((int)lVar5 == 1) {
      FUN_101b43a78(*(undefined8 *)(unaff_x22 + 0x60),0x112d373d8,&UNK_10d9014c0);
      bVar13 = 0;
    }
    else {
LAB_101b42b20:
      FUN_101b43a78(*(undefined8 *)(unaff_x22 + 0x60),0x112d373d0,&UNK_10d90f8f0);
      bVar13 = 1;
    }
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x0001009f0578(*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
    lVar4 = lVar5 + lVar17;
    (*pcVar18)(lVar4,1,uVar11);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
    if ((int)lVar4 == 1) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      lVar5 = *(long *)(unaff_x22 + 0x48);
      FUN_101b43a78(uVar11,0x112d373d8,&UNK_10d9014c0);
      FUN_101b43a78(uVar14,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar5 + 8))(uVar15,uVar6);
      goto LAB_101b42b20;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar4 = *(long *)(unaff_x22 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x40);
    (**(code **)(lVar4 + 0x20))(uVar1,lVar5 + lVar17,uVar16);
    uVar6 = 0x112d373e0;
    FUN_101b43b60(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSQAAMc_110350be0);
    uVar7 = uVar15;
    func_0x000107c5fab8(uVar15,uVar1,uVar16,uVar6);
    pcVar18 = *(code **)(lVar4 + 8);
    (*pcVar18)(uVar1,uVar16);
    FUN_101b43a78(uVar11,0x112d373d8,&UNK_10d9014c0);
    FUN_101b43a78(uVar14,0x112d373d8,&UNK_10d9014c0);
    (*pcVar18)(uVar15,uVar16);
    FUN_101b43a78(uVar12,0x112d373d8,&UNK_10d9014c0);
    bVar13 = (byte)uVar7 ^ 1;
  }
  puVar8 = &UNK_10d9d5ca8;
  func_0x000107c614e0(&UNK_10d9d5ca8);
  puVar9 = &UNK_10d9d5cd0;
  func_0x000107c614e0(&UNK_10d9d5cd0);
  *(byte *)(unaff_x22 + 0xe1) = bVar13 & 1;
  func_0x000107c5f210(unaff_x22 + 0xe1,lVar3,puVar8,puVar9);
LAB_101b42c30:
  plVar10 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101b42c84;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar10,(char *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 101b42c84; end: 101b42cc7;  */

void FUN_101b42c84(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101b42cc8,*(undefined8 *)(lVar1 + 0xb8),*(undefined8 *)(lVar1 + 0xc0));
  return;
}



/* Entry: 101b42cc8; end: 101b4304f;  */

void FUN_101b42cc8(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  byte bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  
  if ((*(char *)(unaff_x22 + 0xe0) == '\x01') || (func_0x000107c5fd5c(), (param_1 & 1) != 0)) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000107c61574(uVar6);
    func_0x000107c615c0(uVar11);
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar14);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar15);
    func_0x000107c615c0(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000101b42d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x38) + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) goto LAB_101b42ffc;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  lVar5 = *(long *)(unaff_x22 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar15,*(undefined8 *)(unaff_x22 + 200));
  (**(code **)(lVar2 + 0x38))(uVar11,1,1,uVar14);
  lVar17 = (long)*(int *)(lVar4 + 0x30);
  func_0x0001009f0578(uVar15,lVar5);
  func_0x0001009f0578(uVar11,lVar5 + lVar17);
  pcVar18 = *(code **)(lVar2 + 0x30);
  lVar4 = lVar5;
  (*pcVar18)(lVar5,1,uVar14);
  if ((int)lVar4 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
    FUN_101b43a78(*(undefined8 *)(unaff_x22 + 0x70),0x112d373d8,&UNK_10d9014c0);
    FUN_101b43a78(uVar11,0x112d373d8,&UNK_10d9014c0);
    lVar5 = lVar5 + lVar17;
    (*pcVar18)(lVar5,1,uVar14);
    if ((int)lVar5 == 1) {
      FUN_101b43a78(*(undefined8 *)(unaff_x22 + 0x60),0x112d373d8,&UNK_10d9014c0);
      bVar13 = 0;
    }
    else {
LAB_101b42eec:
      FUN_101b43a78(*(undefined8 *)(unaff_x22 + 0x60),0x112d373d0,&UNK_10d90f8f0);
      bVar13 = 1;
    }
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x0001009f0578(*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
    lVar4 = lVar5 + lVar17;
    (*pcVar18)(lVar4,1,uVar11);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
    if ((int)lVar4 == 1) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      lVar5 = *(long *)(unaff_x22 + 0x48);
      FUN_101b43a78(uVar11,0x112d373d8,&UNK_10d9014c0);
      FUN_101b43a78(uVar14,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar5 + 8))(uVar15,uVar6);
      goto LAB_101b42eec;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar4 = *(long *)(unaff_x22 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x40);
    (**(code **)(lVar4 + 0x20))(uVar1,lVar5 + lVar17,uVar16);
    uVar6 = 0x112d373e0;
    FUN_101b43b60(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSQAAMc_110350be0);
    uVar7 = uVar15;
    func_0x000107c5fab8(uVar15,uVar1,uVar16,uVar6);
    pcVar18 = *(code **)(lVar4 + 8);
    (*pcVar18)(uVar1,uVar16);
    FUN_101b43a78(uVar11,0x112d373d8,&UNK_10d9014c0);
    FUN_101b43a78(uVar14,0x112d373d8,&UNK_10d9014c0);
    (*pcVar18)(uVar15,uVar16);
    FUN_101b43a78(uVar12,0x112d373d8,&UNK_10d9014c0);
    bVar13 = (byte)uVar7 ^ 1;
  }
  puVar8 = &UNK_10d9d5ca8;
  func_0x000107c614e0(&UNK_10d9d5ca8);
  puVar9 = &UNK_10d9d5cd0;
  func_0x000107c614e0(&UNK_10d9d5cd0);
  *(byte *)(unaff_x22 + 0xe1) = bVar13 & 1;
  func_0x000107c5f210(unaff_x22 + 0xe1,lVar3,puVar8,puVar9);
LAB_101b42ffc:
  plVar10 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101b42c84;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar10,(char *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 101b43050; end: 101b430f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b43050(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112e03320;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e03320);
  if (lVar3 != 0) {
    func_0x000107c6157c(lVar3);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar3);
  }
  lVar1 = _DAT_112e03318;
  lVar3 = 0x112d4ffc8;
  func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar1,lVar3);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b430f8; end: 101b430ff;  */

void FUN_101b430f8(void)

{
  if (lRam0000000112e03350 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e676a8c);
  return;
}



/* Entry: 101b43100; end: 101b43137;  */

void FUN_101b43100(undefined8 param_1)

{
  if (lRam0000000112e03350 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e676a8c);
  return;
}



/* Entry: 101b43138; end: 101b431d7;  */

void FUN_101b43138(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000100f8b92c();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d9d5be0;
    func_0x000107c61630(param_1,0x100,2,&lStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 101b431d8; end: 101b431df;  */

void FUN_101b431d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101b431e0; end: 101b43217;  */

/* WARNING: Possible PIC construction at 0x000101b43204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b43208) */

void FUN_101b431e0(undefined8 *param_1)

{
  FUN_101b43218(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[4]);
  return;
}



/* Entry: 101b43218; end: 101b4321f;  */

void FUN_101b43218(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 101b43220; end: 101b4333f;  */

undefined8 * FUN_101b43220(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar1 = *(undefined1 *)(param_2 + 2);
  FUN_101b431d8(uVar2,uVar3,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar2 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  uVar3 = param_2[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 101b43340; end: 101b433ab;  */

undefined8 * FUN_101b43340(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_101b43218(uVar3,uVar4,uVar2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar3 = param_1[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  func_0x000107c61574(uVar3);
  uVar3 = param_1[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  func_0x000107c61574(uVar3);
  return param_1;
}



/* Entry: 101b433ac; end: 101b4345b;  */

int FUN_101b433ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b4345c; end: 101b43483;  */

void FUN_101b4345c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5f1e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 101b43484; end: 101b43493;  */

void FUN_101b43484(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e676af0,1);
  return;
}



/* Entry: 101b43494; end: 101b4380b;  */

undefined8 * FUN_101b43494(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uStack_63;
  byte bStack_62;
  byte bStack_61;
  
  puVar5 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(byte *)((long)unaff_x20 + 0x11) & 1) != 0) {
    func_0x000103a7f408();
    uVar18 = *param_1;
    uVar3 = param_1[1];
    uVar20 = uVar3;
    func_0x000107c61434();
    FUN_101b44218();
    uVar19 = unaff_x20[4];
    uVar17 = unaff_x20[3];
    func_0x000107c6157c(unaff_x20[4]);
    puVar5 = (undefined8 *)0x0;
    lVar13 = 1;
    func_0x000101b43954(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar2 = puVar5[2];
    lVar1 = uVar2 + 1;
    param_1 = puVar5;
    if ((ulong)puVar5[3] >> 1 <= uVar2) {
      param_1 = (undefined8 *)(ulong)(1 < (ulong)puVar5[3]);
      lVar13 = lVar1;
      func_0x000101b43954(param_1,lVar1,1,puVar5);
    }
    param_1[2] = lVar1;
    *(undefined1 *)(param_1 + uVar2 * 0xd + 4) = 0;
    param_1[uVar2 * 0xd + 5] = uVar18;
    param_1[uVar2 * 0xd + 6] = uVar3;
    param_1[uVar2 * 0xd + 7] = uVar20;
    param_1[uVar2 * 0xd + 8] = param_2;
    param_1[uVar2 * 0xd + 9] = 0x1bf;
    param_1[uVar2 * 0xd + 0xb] = 0;
    param_1[uVar2 * 0xd + 10] = 0;
    param_1[uVar2 * 0xd + 0xd] = 0;
    param_1[uVar2 * 0xd + 0xc] = 0;
    *(undefined1 *)(param_1 + uVar2 * 0xd + 0xe) = 2;
    param_1[uVar2 * 0xd + 0x10] = uVar19;
    param_1[uVar2 * 0xd + 0xf] = uVar17;
    param_2 = lVar13;
    puVar5 = param_1;
  }
  func_0x000103a7f3fc();
  uVar3 = *param_1;
  uVar17 = param_1[1];
  uVar6 = uVar17;
  func_0x000107c61434();
  func_0x000101b442e4();
  uVar20 = *unaff_x20;
  uVar19 = unaff_x20[1];
  uVar4 = *(undefined1 *)(unaff_x20 + 2);
  uVar7 = 0;
  FUN_101b43100(0);
  uVar18 = 0x112e033e0;
  FUN_101b43b60(0x112e033e0,FUN_101b43100,&UNK_10d9d5c20);
  uVar10 = uVar20;
  func_0x000107c5f2b0(uVar20,uVar19,uVar4,uVar7,uVar18);
  puVar8 = &UNK_10d9d5ca8;
  func_0x000107c614e0(&UNK_10d9d5ca8);
  puVar9 = &UNK_10d9d5cd0;
  func_0x000107c614e0(&UNK_10d9d5cd0);
  func_0x000107c5f20c(&bStack_61,uVar10,puVar8,puVar9);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar10);
  uVar10 = 0;
  uVar14 = 0;
  if ((bStack_61 & 1) == 0) {
    FUN_101b443b0();
  }
  uVar15 = uVar20;
  func_0x000107c5f2b0(uVar20,uVar19,uVar4,uVar7,uVar18);
  puVar8 = &UNK_10d9d5ca8;
  func_0x000107c614e0();
  puVar9 = &UNK_10d9d5cd0;
  func_0x000107c614e0(&UNK_10d9d5cd0);
  puVar16 = puVar8;
  func_0x000107c5f20c(&bStack_62,uVar15,puVar8,puVar9);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574();
  if ((bStack_62 & 1) == 0) {
    func_0x000101b443d4();
  }
  else {
    uVar15 = 0;
    puVar16 = (undefined *)0x0;
  }
  func_0x000107c5f2b0(uVar20,uVar19,uVar4,uVar7,uVar18);
  puVar8 = &UNK_10d9d5ca8;
  func_0x000107c614e0(&UNK_10d9d5ca8);
  puVar9 = &UNK_10d9d5cd0;
  func_0x000107c614e0(&UNK_10d9d5cd0);
  func_0x000107c5f20c(&uStack_63,uVar20,puVar8,puVar9);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar20);
  uVar20 = unaff_x20[6];
  uVar18 = unaff_x20[5];
  func_0x000107c6157c(unaff_x20[6]);
  puVar11 = puVar5;
  func_0x000107c61558();
  puVar12 = puVar5;
  if (((ulong)puVar11 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
    func_0x000101b43954(0,puVar5[2] + 1,1,puVar5);
  }
  uVar2 = puVar12[2];
  puVar5 = puVar12;
  if ((ulong)puVar12[3] >> 1 <= uVar2) {
    puVar5 = (undefined8 *)(ulong)(1 < (ulong)puVar12[3]);
    func_0x000101b43954(puVar5,uVar2 + 1,1,puVar12);
  }
  puVar5[2] = uVar2 + 1;
  *(undefined1 *)(puVar5 + uVar2 * 0xd + 4) = 1;
  puVar5[uVar2 * 0xd + 5] = uVar3;
  puVar5[uVar2 * 0xd + 6] = uVar17;
  puVar5[uVar2 * 0xd + 7] = uVar6;
  puVar5[uVar2 * 0xd + 8] = param_2;
  puVar5[uVar2 * 0xd + 9] = 0xa8;
  puVar5[uVar2 * 0xd + 10] = uVar10;
  puVar5[uVar2 * 0xd + 0xb] = uVar14;
  puVar5[uVar2 * 0xd + 0xc] = uVar15;
  puVar5[uVar2 * 0xd + 0xd] = puVar16;
  *(undefined1 *)(puVar5 + uVar2 * 0xd + 0xe) = uStack_63;
  puVar5[uVar2 * 0xd + 0x10] = uVar20;
  puVar5[uVar2 * 0xd + 0xf] = uVar18;
  return puVar5;
}



/* Entry: 101b4380c; end: 101b43817;  */

void FUN_101b4380c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 101b43818; end: 101b43a77;  */

void FUN_101b43818(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (undefined4)param_2;
  FUN_101b43494();
  uVar1 = CONCAT44(uVar4,uVar3);
  func_0x000107c5f350();
  uVar2 = CONCAT44(uVar4,uVar3);
  func_0x000107c5f56c();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 101b43a78; end: 101b43ab7;  */

undefined8 FUN_101b43a78(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101b43ab8; end: 101b43b23;  */

void FUN_101b43ab8(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  plVar6 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101b43b24;
  plVar6[6] = lVar5;
  plVar6[7] = lVar7;
  plVar6[5] = lVar2;
  lVar2 = 0;
  func_0x000107c5eea4();
  plVar6[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar6[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[10] = uVar3;
  lVar2 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  plVar6[0xb] = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xc] = uVar3;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xd] = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xe] = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xf] = uVar3;
  lVar2 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  plVar6[0x10] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar6[0x11] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x12] = uVar3;
  lVar2 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  plVar6[0x13] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar6[0x14] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x15] = uVar3;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar2 = lVar5;
  func_0x000107c5fce8();
  plVar6[0x16] = lVar2;
  lVar2 = 0x112d45220;
  FUN_101b43b60(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar6[0x17] = lVar5;
  plVar6[0x18] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b427e4,lVar5,lVar2);
  return;
}



/* Entry: 101b43b24; end: 101b43b5f;  */

void FUN_101b43b24(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b43b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b43b60; end: 101b43c17;  */

void FUN_101b43b60(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101b43c18; end: 101b43c57;  */

void FUN_101b43c18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d5724;
  func_0x000107c61520(&UNK_10d9d5724,&UNK_1104480c8);
  puRam0000000112e03400 = puVar1;
  return;
}



/* Entry: 101b43c58; end: 101b43cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b43c58(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101b44198();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e03410) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e03418) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101b43cdc; end: 101b43ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b43cdc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_101b44198();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e03410) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e03418) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}


