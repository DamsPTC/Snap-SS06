/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10144afac; end: 10144b013;  */

undefined1  [16] FUN_10144afac(void)

{
  return ZEXT816(0x1103bb098);
}



/* Entry: 10144b014; end: 10144b05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144b014(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9f7e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10144b060; end: 10144b0b7; -[SCComposerDynamicDeliveryMetadataStore initWithApplicationStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144b060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d9f7e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10144b0b8; end: 10144b6ef;  */

/* WARNING: Removing unreachable block (ram,0x00010144b1d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10144b0b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined *puVar15;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_d4;
  undefined8 uStack_cc;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7c;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112d9f7e0);
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar4 = lVar5;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar4 != 0) {
      uVar6 = 0x112d373e8;
      lStack_110 = lVar4;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      plVar7 = &lStack_c0;
      func_0x000107c6147c(plVar7,&lStack_110,uVar6,PTR___s10Foundation4DataVN_110350ae0,6);
      uVar6 = uStack_b8;
      lVar4 = lStack_c0;
      if (((ulong)plVar7 & 1) != 0) {
        uVar8 = 0;
        func_0x000107c5eb24();
        func_0x000107c613fc();
        func_0x000107c5eb20();
        uVar9 = uVar8;
        FUN_10144bff0();
        func_0x000107c5eb1c(&lStack_110,&UNK_1103bb280,lStack_c0,uStack_b8,&UNK_1103bb280,uVar9);
        uStack_7c = uStack_cc;
        uVar9 = uStack_7c;
        uStack_90 = uStack_e0;
        uStack_a8 = uStack_f8;
        uStack_b0 = uStack_100;
        uStack_98 = uStack_e8;
        uStack_a0 = uStack_f0;
        uStack_b8 = uStack_108;
        lStack_c0 = lStack_110;
        uStack_7c._0_1_ = (char)uStack_cc;
        cVar3 = (char)uStack_7c;
        if (cStack_d4 == '\x01') {
          puVar14 = (undefined *)0x0;
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        }
        else {
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uStack_7c = uVar9;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ecc();
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        }
        PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar15;
        if (cVar3 == '\x01') {
          puVar15 = (undefined *)0x0;
        }
        else {
          func_0x000107c610f8(puVar15);
          func_0x000107c46ecc();
        }
        puVar10 = PTR_PTR_1126c34b0;
        func_0x000107c610f8();
        func_0x000107c475a0();
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar14);
        uVar2 = uStack_98;
        uVar13 = uStack_a0;
        uVar1 = uStack_a8;
        uVar12 = uStack_b0;
        uVar9 = uStack_b8;
        lVar11 = lStack_c0;
        puVar14 = PTR_PTR_1126c34a8;
        func_0x000107c610f8(PTR_PTR_1126c34a8);
        func_0x000107c5fadc(lVar11,uVar9);
        func_0x000107c5fadc(uVar12,uVar1);
        func_0x000107c5fadc(uVar13,uVar2);
        func_0x000107c49160(puVar14);
        func_0x000107c61574(uVar8);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(puVar10);
        func_0x00010006c090(lVar4,uVar6);
        func_0x000107c61170(lVar5);
        FUN_10144c030(&lStack_c0);
        return puVar14;
      }
    }
    func_0x000107c61170(lVar5);
  }
  return (undefined *)0x0;
}



/* Entry: 10144b6f0; end: 10144b723;  */

void FUN_10144b6f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10144b724; end: 10144b7cb; -[SCComposerDynamicDeliveryMetadataStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144b724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d9f7e0));
  return;
}



/* Entry: 10144b7cc; end: 10144b7f3;  */

void FUN_10144b7cc(undefined1 *param_1,undefined1 param_2)

{
  FUN_10144c36c();
  *param_1 = param_2;
  return;
}



/* Entry: 10144b7f4; end: 10144b80b;  */

undefined1  [16] FUN_10144b7f4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10144b80c; end: 10144b85b;  */

void FUN_10144b80c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010144ce6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10144b85c; end: 10144ba07;  */

void FUN_10144b85c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar4 = 0x112d9f828;
  uStack_70 = param_4;
  uStack_64 = param_5;
  func_0x0001000285a8(0x112d9f828,&UNK_10d941250);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x00010144ce6c();
  func_0x000107c606ec(lVar5,&UNK_1103bb440,&UNK_1103bb440,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c60558(param_2,&uStack_51,lVar4);
  uVar3 = uStack_64;
  uVar1 = uStack_70;
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c60558(param_2 >> 0x20,&uStack_52,lVar4);
    uStack_53 = 2;
    func_0x000107c60534(param_3,&uStack_53,lVar4);
    uStack_54 = 3;
    func_0x000107c60534(uVar1,&uStack_54,lVar4);
    uStack_55 = 4;
    func_0x000107c60558(uVar3,&uStack_55,lVar4);
    (**(code **)(lVar6 + 8))(lVar5,lVar4);
  }
  else {
    (**(code **)(lVar6 + 8))(lVar5,lVar4);
  }
  return;
}



/* Entry: 10144ba08; end: 10144bbb3;  */

/* WARNING: Removing unreachable block (ram,0x00010144bb40) */

void FUN_10144ba08(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_80 [15];
  undefined1 uStack_71;
  ulong uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  lVar2 = 0x112d9f818;
  func_0x0001000285a8(0x112d9f818,&UNK_10d9410a0);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_10144caf8();
  func_0x000107c606ec(puVar4,&UNK_1103bb320,&UNK_1103bb320,param_1,uVar3,uVar1);
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_70,lVar2);
  if (unaff_x21 == 0) {
    uStack_70._0_1_ = 1;
    func_0x000107c6053c(unaff_x20[2],unaff_x20[3],&uStack_70,lVar2);
    uVar3 = unaff_x20[4];
    uStack_70 = CONCAT71(uStack_70._1_7_,2);
    func_0x000107c6053c(uVar3,unaff_x20[5],&uStack_70,lVar2);
    uStack_70 = unaff_x20[6];
    uStack_68 = (undefined4)unaff_x20[7];
    uStack_5c = *(undefined8 *)((long)unaff_x20 + 0x44);
    uStack_64 = (undefined4)*(undefined8 *)((long)unaff_x20 + 0x3c);
    uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0x3c) >> 0x20);
    uStack_71 = 3;
    FUN_10144cb88();
    func_0x000107c60554(&uStack_70,&uStack_71,lVar2,&UNK_1103bb398,uVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 10144bbb4; end: 10144bbfb;  */

void FUN_10144bbb4(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  long unaff_x21;
  
  uVar6 = (undefined1)((ulong)param_4 >> 0x20);
  uVar5 = (undefined4)param_4;
  uVar4 = (undefined1)((ulong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  FUN_10144c510();
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    *(undefined1 *)(param_1 + 3) = uVar4;
    param_1[4] = uVar5;
    *(undefined1 *)(param_1 + 5) = uVar6;
    param_1[6] = param_5;
  }
  return;
}



/* Entry: 10144bbfc; end: 10144bc2f;  */

void FUN_10144bbfc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10144b85c(param_1,*unaff_x20,(ulong)*(uint5 *)(unaff_x20 + 1),(ulong)*(uint5 *)(unaff_x20 + 2)
                ,*(undefined4 *)(unaff_x20 + 3));
  return;
}



/* Entry: 10144bc30; end: 10144bc47;  */

bool FUN_10144bc30(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10144bc48; end: 10144bcb3;  */

void FUN_10144bc48(void)

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



/* Entry: 10144bcb4; end: 10144bcb7;  */

void FUN_10144bcb4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10144bcb8; end: 10144bcf7;  */

void FUN_10144bcb8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10144bcf8; end: 10144bd6b;  */

undefined1  [16] FUN_10144bcf8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  uVar5 = 0xe900000000000074;
  uVar4 = 0x4164657461657263;
  if (bVar3 != 2) {
    uVar5 = 0xe700000000000000;
    uVar4 = 0x6e6f6973726576;
  }
  uVar1 = 0x6c7275;
  if (bVar3 != 0) {
    uVar1 = 0x363532616873;
  }
  uVar2 = 0xe300000000000000;
  if (bVar3 != 0) {
    uVar2 = 0xe600000000000000;
  }
  if (bVar3 < 2) {
    uVar5 = uVar2;
    uVar4 = uVar1;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 10144bd6c; end: 10144bd93;  */

void FUN_10144bd6c(undefined1 *param_1,undefined1 param_2)

{
  FUN_10144c6d8();
  *param_1 = param_2;
  return;
}



/* Entry: 10144bd94; end: 10144bdab;  */

undefined1  [16] FUN_10144bd94(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10144bdac; end: 10144bdfb;  */

void FUN_10144bdac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10144caf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10144bdfc; end: 10144be43;  */

void FUN_10144bdfc(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  FUN_10144c83c(&uStack_70);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_48;
    param_1[4] = uStack_50;
    param_1[7] = CONCAT44(uStack_34,uStack_38);
    param_1[6] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x44) = uStack_2c;
    *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_30,uStack_34);
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
  }
  return;
}



/* Entry: 10144be44; end: 10144be57;  */

void FUN_10144be44(void)

{
  FUN_10144ba08();
  return;
}



/* Entry: 10144be58; end: 10144bec3; -[SCComposerDynamicDeliveryMetadataStore setCurrentDynamicDeliveryMetadata:] */

/* WARNING: Possible PIC construction at 0x00010144beac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010144beb0) */

void FUN_10144be58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010144b3a4(param_3,0xd000000000000022,0x800000010ef80cf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10144bec4; end: 10144bf2f; -[SCComposerDynamicDeliveryMetadataStore setNextExpectedDynamicDeliveryMetadata:] */

/* WARNING: Possible PIC construction at 0x00010144bf18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010144bf1c) */

void FUN_10144bec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010144b3a4(param_3,0xd000000000000027,0x800000010ef80d20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10144bf30; end: 10144bf7b; -[SCComposerDynamicDeliveryMetadataStore mostRecentlyLoadedDynamicDeliveryConfig] */

void FUN_10144bf30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  FUN_10144b0b8(0xd000000000000022,0x800000010ef80cf0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10144bf7c; end: 10144bfc7; -[SCComposerDynamicDeliveryMetadataStore nextExpectedDynamicDeliveryConfig] */

void FUN_10144bf7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0xd000000000000027;
  FUN_10144b0b8(0xd000000000000027,0x800000010ef80d20);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10144bfc8; end: 10144bfe7;  */

void FUN_10144bfc8(void)

{
  func_0x000107c61168(&PTR_PTR_1127d70d0);
  return;
}



/* Entry: 10144bfe8; end: 10144bfef; -[SCComposerDynamicDeliveryMetadataStore configIsCompatibleWithCurrentAppVersion] */

undefined8 FUN_10144bfe8(void)

{
  return 1;
}



/* Entry: 10144bff0; end: 10144c02f;  */

void FUN_10144bff0(void)

{
  undefined *puVar1;
  
  if (puRam00000001134414b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941070;
  func_0x000107c61520(&UNK_10d941070,&UNK_1103bb280);
  puRam00000001134414b0 = puVar1;
  return;
}



/* Entry: 10144c030; end: 10144c053;  */

undefined8 FUN_10144c030(undefined8 param_1)

{
  func_0x00010144c0c0();
  return param_1;
}



/* Entry: 10144c054; end: 10144c093;  */

void FUN_10144c054(void)

{
  undefined *puVar1;
  
  if (puRam00000001134414b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941048;
  func_0x000107c61520(&UNK_10d941048,&UNK_1103bb280);
  puRam00000001134414b8 = puVar1;
  return;
}



/* Entry: 10144c094; end: 10144c0ef;  */

long FUN_10144c094(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10144c0f0; end: 10144c217;  */

undefined8 * FUN_10144c0f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 10144c218; end: 10144c23b;  */

void FUN_10144c218(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar7 = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar7;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10144c23c; end: 10144c2bf;  */

undefined8 * FUN_10144c23c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  return param_1;
}



/* Entry: 10144c2c0; end: 10144c36b;  */

int FUN_10144c2c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x13] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10144c36c; end: 10144c50f;  */

undefined4 FUN_10144c36c(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x726f6a616d;
  if ((param_1 == 0x726f6a616d && param_2 == -0x1b00000000000000) ||
     (func_0x000107c605b8(0x726f6a616d,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x726f6e696d;
    if (((param_1 == 0x726f6e696d) && (param_2 == -0x1b00000000000000)) ||
       (func_0x000107c605b8(0x726f6e696d,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if (((param_1 == 0x6863746170) && (param_2 == -0x1b00000000000000)) ||
         (func_0x000107c605b8(0x6863746170,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0))
      {
        func_0x000107c6142c(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0;
        if (((param_1 == 0x646c697562) && (param_2 == -0x1b00000000000000)) ||
           (func_0x000107c605b8(0x646c697562,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0
           )) {
          func_0x000107c6142c(param_2);
          uVar2 = 3;
        }
        else {
          uVar1 = 0;
          if ((param_1 == 0x4463696d616e7964) && (param_2 == -0x10868d9a8996939b)) {
            func_0x000107c6142c(0xef79726576696c65);
            uVar2 = 4;
          }
          else {
            func_0x000107c605b8(0x4463696d616e7964,0xef79726576696c65,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            uVar2 = 4;
            if ((uVar1 & 1) == 0) {
              uVar2 = 5;
            }
          }
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 10144c510; end: 10144c6d7;  */

/* WARNING: Removing unreachable block (ram,0x00010144c638) */

void FUN_10144c510(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112d9f820;
  func_0x0001000285a8(0x112d9f820,&UNK_10d941248);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  func_0x00010144ce6c();
  func_0x000107c606e0((long)&puStack_70 - extraout_x8,&UNK_1103bb440,&UNK_1103bb440,lVar4,uVar1,
                      uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    func_0x000107c6050c(&uStack_51,lVar3);
    uStack_52 = 1;
    func_0x000107c6050c(&uStack_52,lVar3);
    uStack_53 = 2;
    puVar5 = &uStack_53;
    func_0x000107c604ec(puVar5,lVar3);
    uStack_54 = 3;
    puVar6 = &uStack_54;
    puStack_68 = puVar5;
    func_0x000107c604ec(puVar6,lVar3);
    uStack_55 = 4;
    puStack_70 = puVar6;
    func_0x000107c6050c(&uStack_55,lVar3);
    (**(code **)(lVar7 + 8))((long)&puStack_70 - extraout_x8,lVar3);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return;
}



/* Entry: 10144c6d8; end: 10144c83b;  */

undefined4 FUN_10144c6d8(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x6c7275 || param_2 != -0x1d00000000000000) {
    uVar1 = 0x6c7275;
    func_0x000107c605b8(0x6c7275,0xe300000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x363532616873;
      if (((param_1 == 0x363532616873) && (param_2 == -0x1a00000000000000)) ||
         (func_0x000107c605b8(0x363532616873,0xe600000000000000,param_1,param_2,0), (uVar1 & 1) != 0
         )) {
        func_0x000107c6142c(param_2);
        return 1;
      }
      uVar1 = 0x4164657461657263;
      if (((param_1 != 0x4164657461657263) || (param_2 != -0x16ffffffffffff8c)) &&
         (func_0x000107c605b8(0x4164657461657263,0xe900000000000074,param_1,param_2,0),
         (uVar1 & 1) == 0)) {
        uVar1 = 0;
        if ((param_1 == 0x6e6f6973726576) && (param_2 == -0x1900000000000000)) {
          func_0x000107c6142c(0xe700000000000000);
          return 3;
        }
        func_0x000107c605b8(0x6e6f6973726576,0xe700000000000000,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        if ((uVar1 & 1) != 0) {
          return 3;
        }
        return 4;
      }
      func_0x000107c6142c(param_2);
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 10144c83c; end: 10144caf7;  */

/* WARNING: Removing unreachable block (ram,0x00010144ca24) */
/* WARNING: Removing unreachable block (ram,0x00010144c980) */
/* WARNING: Removing unreachable block (ram,0x00010144c9c8) */
/* WARNING: Removing unreachable block (ram,0x00010144ca38) */
/* WARNING: Removing unreachable block (ram,0x00010144ca4c) */
/* WARNING: Removing unreachable block (ram,0x00010144ca54) */
/* WARNING: Removing unreachable block (ram,0x00010144ca58) */
/* WARNING: Removing unreachable block (ram,0x00010144c918) */

void FUN_10144c83c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_1a0 [8];
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 auStack_180 [80];
  undefined8 ***pppuStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  long lStack_118;
  undefined8 ***pppuStack_110;
  long lStack_108;
  long lStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined1 uStack_e1;
  long lStack_e0;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined4 uStack_c8;
  undefined8 ***pppuStack_c0;
  long lStack_b8;
  undefined8 ***pppuStack_b0;
  long lStack_a8;
  undefined8 ***pppuStack_a0;
  long lStack_98;
  long lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  lVar3 = 0x112d9f810;
  func_0x0001000285a8(0x112d9f810,&UNK_10d941098);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_10144caf8();
  func_0x000107c606e0(auStack_1a0 + -extraout_x8,&UNK_1103bb320,&UNK_1103bb320,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    pppuStack_130 = (undefined8 ***)((ulong)pppuStack_130 & 0xffffffffffffff00);
    ppppuVar5 = &pppuStack_130;
    lVar4 = lVar3;
    func_0x000107c604f4();
    pppuStack_130._0_1_ = 1;
    ppppuVar6 = &pppuStack_130;
    lVar7 = lVar3;
    lStack_188 = lVar4;
    pppuStack_c0 = ppppuVar5;
    lStack_b8 = lVar4;
    func_0x000107c604f4();
    pppuStack_130._0_1_ = 2;
    ppppuVar5 = &pppuStack_130;
    lVar4 = lVar3;
    lStack_190 = lVar7;
    pppuStack_b0 = ppppuVar6;
    lStack_a8 = lVar7;
    func_0x000107c604f4();
    uStack_e1 = 3;
    lStack_198 = lVar4;
    pppuStack_a0 = ppppuVar5;
    lStack_98 = lVar4;
    func_0x00010144cb38();
    func_0x000107c60508(&lStack_e0,&UNK_1103bb398,&uStack_e1,lVar3,&UNK_1103bb398,ppppuVar5);
    (**(code **)(lVar8 + 8))(auStack_1a0 + -extraout_x8,lVar3);
    lStack_90 = lStack_e0;
    uStack_88 = uStack_d8;
    uStack_84 = CONCAT31(uStack_84._1_3_,uStack_d4);
    uStack_80 = uStack_d0;
    uStack_7c = CONCAT31(uStack_7c._1_3_,uStack_cc);
    uStack_78 = uStack_c8;
    lStack_128 = lStack_b8;
    pppuStack_130 = pppuStack_c0;
    lStack_118 = lStack_a8;
    pppuStack_120 = pppuStack_b0;
    lStack_108 = lStack_98;
    pppuStack_110 = pppuStack_a0;
    uStack_f8 = uStack_d8;
    lStack_100 = lStack_e0;
    uStack_ec = CONCAT44(uStack_c8,uStack_7c);
    uStack_f4 = uStack_84;
    uStack_f0 = uStack_d0;
    FUN_10144cb78(&pppuStack_130,auStack_180);
    func_0x0001000834e4(param_2);
    FUN_10144c030(&pppuStack_c0);
    param_1[5] = lStack_108;
    param_1[4] = (long)pppuStack_110;
    param_1[7] = CONCAT44(uStack_f4,uStack_f8);
    param_1[6] = lStack_100;
    *(undefined8 *)((long)param_1 + 0x44) = uStack_ec;
    *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_f0,uStack_f4);
    param_1[1] = lStack_128;
    *param_1 = (long)pppuStack_130;
    param_1[3] = lStack_118;
    param_1[2] = (long)pppuStack_120;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 10144caf8; end: 10144cb77;  */

void FUN_10144caf8(void)

{
  undefined *puVar1;
  
  if (puRam00000001134415c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9411f4;
  func_0x000107c61520(&UNK_10d9411f4,&UNK_1103bb320);
  puRam00000001134415c0 = puVar1;
  return;
}



/* Entry: 10144cb78; end: 10144cb87;  */

undefined8 * FUN_10144cb78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar1;
  uVar2 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar2;
  uVar3 = param_1[6];
  param_2[7] = param_1[7];
  param_2[6] = uVar3;
  uVar3 = *(undefined8 *)((long)param_1 + 0x3c);
  *(undefined8 *)((long)param_2 + 0x44) = *(undefined8 *)((long)param_1 + 0x44);
  *(undefined8 *)((long)param_2 + 0x3c) = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_2;
}



/* Entry: 10144cb88; end: 10144cbc7;  */

void FUN_10144cb88(void)

{
  undefined *puVar1;
  
  if (puRam00000001134415d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9411a4;
  func_0x000107c61520(&UNK_10d9411a4,&UNK_1103bb398);
  puRam00000001134415d0 = puVar1;
  return;
}



/* Entry: 10144cbc8; end: 10144cda3;  */

int FUN_10144cbc8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10144cc44;
        goto LAB_10144cc28;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10144cc28:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10144cc44:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10144cda4; end: 10144cde3;  */

void FUN_10144cda4(void)

{
  undefined *puVar1;
  
  if (puRam00000001134416e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d94117c;
  func_0x000107c61520(&UNK_10d94117c,&UNK_1103bb320);
  puRam00000001134416e0 = puVar1;
  return;
}



/* Entry: 10144cde4; end: 10144cde7;  */

void FUN_10144cde4(void)

{
  undefined *puVar1;
  
  if (puRam00000001134418f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941114;
  func_0x000107c61520(&UNK_10d941114,&UNK_1103bb320);
  puRam00000001134418f0 = puVar1;
  return;
}



/* Entry: 10144cde8; end: 10144ce27;  */

void FUN_10144cde8(void)

{
  undefined *puVar1;
  
  if (puRam00000001134418f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941114;
  func_0x000107c61520(&UNK_10d941114,&UNK_1103bb320);
  puRam00000001134418f0 = puVar1;
  return;
}



/* Entry: 10144ce28; end: 10144ce2b;  */

void FUN_10144ce28(void)

{
  undefined *puVar1;
  
  if (puRam00000001134418f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9410ec;
  func_0x000107c61520(&UNK_10d9410ec,&UNK_1103bb320);
  puRam00000001134418f8 = puVar1;
  return;
}



/* Entry: 10144ce2c; end: 10144ceab;  */

void FUN_10144ce2c(void)

{
  undefined *puVar1;
  
  if (puRam00000001134418f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9410ec;
  func_0x000107c61520(&UNK_10d9410ec,&UNK_1103bb320);
  puRam00000001134418f8 = puVar1;
  return;
}



/* Entry: 10144ceac; end: 10144d003;  */

int FUN_10144ceac(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10144cf28;
        goto LAB_10144cf0c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10144cf0c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_10144cf28:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10144d004; end: 10144d043;  */

void FUN_10144d004(void)

{
  undefined *puVar1;
  
  if (puRam0000000113441a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9412e8;
  func_0x000107c61520(&UNK_10d9412e8,&UNK_1103bb440);
  puRam0000000113441a90 = puVar1;
  return;
}



/* Entry: 10144d044; end: 10144d047;  */

void FUN_10144d044(void)

{
  undefined *puVar1;
  
  if (puRam0000000113441ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941280;
  func_0x000107c61520(&UNK_10d941280,&UNK_1103bb440);
  puRam0000000113441ba0 = puVar1;
  return;
}



/* Entry: 10144d048; end: 10144d087;  */

void FUN_10144d048(void)

{
  undefined *puVar1;
  
  if (puRam0000000113441ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941280;
  func_0x000107c61520(&UNK_10d941280,&UNK_1103bb440);
  puRam0000000113441ba0 = puVar1;
  return;
}



/* Entry: 10144d088; end: 10144d08b;  */

void FUN_10144d088(void)

{
  undefined *puVar1;
  
  if (puRam0000000113441ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941258;
  func_0x000107c61520(&UNK_10d941258,&UNK_1103bb440);
  puRam0000000113441ba8 = puVar1;
  return;
}



/* Entry: 10144d08c; end: 10144d0cb;  */

void FUN_10144d08c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113441ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d941258;
  func_0x000107c61520(&UNK_10d941258,&UNK_1103bb440);
  puRam0000000113441ba8 = puVar1;
  return;
}



/* Entry: 10144d0cc; end: 10144d0e7;  */

undefined1 FUN_10144d0cc(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10144d0e8; end: 10144d10b;  */

void FUN_10144d0e8(void)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10144d10c; end: 10144d157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144d10c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9f830) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10144d158; end: 10144d177;  */

void FUN_10144d158(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7190);
  return;
}



/* Entry: 10144d178; end: 10144d1cf; -[SCComposerLatexRendererModule initWithRenderer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144d178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112d9f830) = param_3;
  lVar2 = param_1;
  FUN_10144d158();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10144d1d0; end: 10144d1f3;  */

undefined1  [16] FUN_10144d1d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed00007265726564;
  auVar1._0_8_ = 0x6e6552786574614c;
  return auVar1;
}



/* Entry: 10144d1f4; end: 10144d227; -[SCComposerLatexRendererModule getModulePath] */

void FUN_10144d1f4(void)

{
  func_0x000107c5fadc(0x6e6552786574614c,0xed00007265726564);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10144d228; end: 10144d5db;  */

long FUN_10144d228(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_1103bb590;
  func_0x000107c613fc(&UNK_1103bb590,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  uStack_50 = 0x10144d3b8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10144d5dc;
  puStack_58 = &UNK_1103bb5a8;
  ppuVar2 = &puStack_70;
  puStack_48 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = PTR_PTR_1126b6d48;
  func_0x000107c61168();
  func_0x000107c61174();
  func_0x000107c43bdc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(puStack_48);
  lVar3 = 0x112d9f838;
  func_0x0001000285a8(0x112d9f838,&UNK_10d941360);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = 0xd000000000000012;
  *(undefined8 *)(lVar3 + 0x28) = 0x800000010ef80d50;
  *(undefined **)(lVar3 + 0x30) = puVar1;
  func_0x000107c61174(puVar1);
  lVar4 = lVar3;
  FUN_10144d8fc(lVar3);
  func_0x000107c61588(lVar3);
  FUN_10144d9fc((undefined8 *)(lVar3 + 0x20));
  uVar5 = 0;
  FUN_10144dc7c(0,0x112d9f848,&PTR_PTR_1126b6d48);
  lVar3 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___sSSN_11034da80,uVar5,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c61170(puVar1);
  return lVar3;
}



/* Entry: 10144d5dc; end: 10144d623;  */

uint FUN_10144d5dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
  return (uint)param_2 & 1;
}



/* Entry: 10144d624; end: 10144d63f;  */

void FUN_10144d624(long param_1,long param_2)

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



/* Entry: 10144d640; end: 10144d673; -[SCComposerLatexRendererModule loadModule] */

void FUN_10144d640(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10144d228();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10144d674; end: 10144d6e3;  */

void FUN_10144d674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144d6e4,uVar1,uVar2);
  return;
}



/* Entry: 10144d6e4; end: 10144d743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144d6e4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112d9f830);
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10144d744;
  lVar2 = *(long *)(unaff_x22 + 0x18);
  plVar1[0x12] = *(long *)(unaff_x22 + 0x20);
  plVar1[0x13] = lVar3;
  plVar1[0x11] = lVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar1[0x14] = lVar3;
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[0x15] = lVar2;
  func_0x000100eea164();
  plVar1[0x16] = lVar2;
  func_0x000107c5fca8();
  plVar1[0x17] = lVar3;
  plVar1[0x18] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144df58,lVar3,lVar2);
  return;
}



/* Entry: 10144d744; end: 10144d7c7;  */

void FUN_10144d744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x58) = param_2;
    *(undefined8 *)(lVar4 + 0x60) = param_1;
    *(undefined8 *)(lVar4 + 0x68) = param_4;
    *(undefined8 *)(lVar4 + 0x70) = param_3;
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_10144d7c8;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_10144d858;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10144d7c8; end: 10144d857;  */

void FUN_10144d7c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574();
  FUN_10144da44();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar3;
  *(undefined8 *)(lVar4 + 0x18) = uVar1;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(undefined8 *)(lVar4 + 0x28) = uVar6;
  func_0x00010006c00c(uVar3,uVar1);
  func_0x000107c43b74(uVar2);
  func_0x000107c61574(lVar4);
  func_0x00010006c090(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010144d854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10144d858; end: 10144d8bb;  */

void FUN_10144d858(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  uVar2 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c43b70(uVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010144d8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10144d8bc; end: 10144d8eb;  */

void FUN_10144d8bc(void)

{
  FUN_10144d158();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10144d8ec; end: 10144d8fb; -[SCComposerLatexRendererModule .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144d8ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d9f830));
  return;
}



/* Entry: 10144d8fc; end: 10144d9fb;  */

undefined * FUN_10144d8fc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d9f928,&UNK_10d9413f0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10144d9f8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10144d9fc);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10144d9fc; end: 10144da43;  */

undefined8 FUN_10144d9fc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d9f840;
  func_0x0001000285a8(0x112d9f840,&UNK_10d941368);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10144da44; end: 10144da63;  */

void FUN_10144da44(void)

{
  func_0x000107c61168(&PTR_PTR_112d9f890);
  return;
}



/* Entry: 10144da64; end: 10144dac7;  */

void FUN_10144da64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10144dac8;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = lVar4;
  plVar5[3] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[7] = lVar3;
  plVar5[8] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144d6e4,lVar3,lVar4);
  return;
}



/* Entry: 10144dac8; end: 10144db03;  */

void FUN_10144dac8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010144db00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10144db04; end: 10144dc7b;  */

void FUN_10144db04(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar5 = param_1;
  func_0x000107c30ef0();
  if (param_1 == (long *)0x0) {
    func_0x000107c30f0c(plVar5,0);
  }
  else {
    lVar6 = 0x112d9f930;
    func_0x0001000285a8(0x112d9f930,&UNK_10db9f4c0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x18) = 6;
    *(undefined8 *)(lVar6 + 0x10) = 3;
    puVar3 = PTR___sSSN_11034da80;
    *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar6 + 0x20) = 0x61746144676e70;
    *(undefined8 *)(lVar6 + 0x28) = 0xe700000000000000;
    puVar4 = PTR___s10Foundation4DataVN_110350ae0;
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    *(long *)(lVar6 + 0x40) = lVar1;
    *(long *)(lVar6 + 0x48) = lVar2;
    *(undefined **)(lVar6 + 0x78) = puVar3;
    *(undefined **)(lVar6 + 0x58) = puVar4;
    *(undefined8 *)(lVar6 + 0x60) = 0x6874646977;
    *(undefined8 *)(lVar6 + 0x68) = 0xe500000000000000;
    puVar4 = PTR___sSdN_11034dd90;
    *(long *)(lVar6 + 0x80) = param_1[4];
    *(undefined **)(lVar6 + 0xb8) = puVar3;
    *(undefined **)(lVar6 + 0x98) = puVar4;
    *(undefined8 *)(lVar6 + 0xa0) = 0x746867696568;
    *(undefined8 *)(lVar6 + 0xa8) = 0xe600000000000000;
    lVar8 = param_1[5];
    *(undefined **)(lVar6 + 0xd8) = puVar4;
    *(long *)(lVar6 + 0xc0) = lVar8;
    FUN_10144dc7c(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c6157c(param_1);
    func_0x00010006c00c(lVar1,lVar2);
    func_0x000107c5ff4c(lVar6);
    func_0x000107c30f0c(plVar5,lVar6);
    func_0x000107c61170(lVar6);
    func_0x000107c61574(param_1);
  }
  func_0x000107c4e5ec(uVar7);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b97f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 8))();
    return;
  }
  return;
}



/* Entry: 10144dc7c; end: 10144dcbb;  */

void FUN_10144dc7c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10144dcbc; end: 10144dcc3;  */

void FUN_10144dcbc(long param_1,long param_2)

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



/* Entry: 10144dcc4; end: 10144dedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10144dcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = _DAT_112d9f948;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d9f948);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
    func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
    func_0x000107c453e4();
    func_0x000107c59ad8();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    puVar4 = puVar3;
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar4);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    uVar6 = param_1;
    func_0x000107c4c194(puVar3);
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar3);
    func_0x000107c609b0(uVar6,param_2,param_3,param_4);
    puVar3 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
    func_0x000107c610f8();
    func_0x000107c469b0(0,0,param_1,uVar6);
    func_0x000107c61180();
    func_0x000107c56f90();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar5 = puVar4;
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(puVar3,param_6,puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    puVar5 = puVar3;
    func_0x000107c51a60(puVar3);
    func_0x000107c61180();
    func_0x000107c3fa94(puVar4);
    func_0x000107c61180();
    func_0x000107c52b50(puVar5,param_6,puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    puVar4 = puVar3;
    func_0x000107c51a60(puVar3);
    func_0x000107c61180();
    func_0x000107c53828();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar6);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10144dee0; end: 10144df57;  */

void FUN_10144dee0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144df58,uVar1,uVar2);
  return;
}



/* Entry: 10144df58; end: 10144dfc3;  */

void FUN_10144df58(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 200) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144dfc4,param_1);
  return;
}



/* Entry: 10144dfc4; end: 10144e0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144dfc4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10144e100;
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar5,1);
  lVar4 = _DAT_112d9f938;
  func_0x000107c61428(lVar2 + _DAT_112d9f938,unaff_x22 + 0x70,0x21,0);
  uVar10 = *(ulong *)(lVar2 + lVar4);
  func_0x000107c61434(uVar1);
  uVar6 = uVar10;
  func_0x000107c61558();
  *(ulong *)(lVar2 + lVar4) = uVar10;
  uVar7 = uVar10;
  if ((uVar6 & 1) == 0) {
    uVar7 = 0;
    FUN_10144fe10(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    *(ulong *)(lVar2 + lVar4) = uVar7;
  }
  uVar6 = *(ulong *)(uVar7 + 0x10);
  uVar10 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_10144fe10(uVar10,uVar6 + 1,1,uVar7);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
  lVar9 = uVar10 + uVar6 * 0x18;
  *(undefined8 *)(lVar9 + 0x20) = uVar8;
  *(undefined8 *)(lVar9 + 0x28) = uVar1;
  *(long *)(lVar9 + 0x30) = lVar5;
  *(ulong *)(lVar2 + lVar4) = uVar10;
  func_0x000107c614a8(unaff_x22 + 0x70);
  if ((*(byte *)(lVar3 + _DAT_112d9f940) & 1) == 0) {
    *(undefined1 *)(lVar3 + _DAT_112d9f940) = 1;
    FUN_10144e250();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10144e100; end: 10144e16f;  */

void FUN_10144e100(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0x30);
  if (*(long *)(lVar4 + 0x30) == 0) {
    *(undefined8 *)(lVar4 + 0xf0) = *(undefined8 *)(lVar4 + 0x58);
    *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x100) = *(undefined8 *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 0xf8) = *(undefined8 *)(lVar4 + 0x60);
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_10144e170;
  }
  else {
    func_0x000107c61654();
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = (code *)0x10144e1e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10144e170; end: 10144e24f;  */

void FUN_10144e170(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10144e1a8,*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 10144e250; end: 10144e36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144e250(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9f938;
  func_0x000107c61428(unaff_x20 + _DAT_112d9f938,auStack_48,0,0);
  lVar3 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar3 + 0x10) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d9f940) = 0;
  }
  else {
    func_0x000107c61428(unaff_x20 + lVar1,auStack_60,0x21,0);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar6 = *(undefined8 *)(lVar3 + 0x30);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    func_0x000107c61434(uVar5);
    FUN_101450138(0,1);
    func_0x000107c614a8(auStack_60);
    puVar2 = &UNK_1103bb728;
    func_0x000107c613fc(&UNK_1103bb728,0x30,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x18) = uVar4;
    *(undefined8 *)(puVar2 + 0x28) = uVar6;
    *(undefined8 *)(puVar2 + 0x20) = uVar5;
    func_0x000107c61174();
    uVar4 = 1;
    func_0x0001001ca524(1,0,0x7c,4,0,0,&UNK_10d9414a8,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 10144e36c; end: 10144e3eb;  */

void FUN_10144e36c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_5;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x6a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10144e3ec;
  plVar2[0xbf] = param_2;
  plVar2[0xbe] = param_4;
  plVar2[0xbd] = param_3;
  func_0x000107c614f0();
  plVar2[0xc0] = param_2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0xc1] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0xc2] = lVar3;
  plVar2[0xc3] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144e61c,lVar3,lVar4);
  return;
}



/* Entry: 10144e3ec; end: 10144e4af;  */

void FUN_10144e3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x30);
  *(long *)(lVar4 + 0x38) = unaff_x20;
  func_0x000107c615c0(uVar1);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x40) = param_2;
    *(undefined8 *)(lVar4 + 0x48) = param_1;
    *(undefined8 *)(lVar4 + 0x50) = param_4;
    *(undefined8 *)(lVar4 + 0x58) = param_3;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_10144e4b0;
  }
  else {
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_10144e51c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 10144e4b0; end: 10144e51b;  */

void FUN_10144e4b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x40) + 0x28);
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  func_0x000107c61450(lVar4);
  FUN_10144e250();
                    /* WARNING: Could not recover jumptable at 0x00010144e518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10144e51c; end: 10144e597;  */

void FUN_10144e51c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar2 = uVar3;
  func_0x000107c61454(uVar4,uVar1);
  FUN_10144e250();
                    /* WARNING: Could not recover jumptable at 0x00010144e594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10144e598; end: 10144e61b;  */

void FUN_10144e598(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x5f8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x5f0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x5e8) = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x600) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x608) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x610) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x618) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10144e61c,uVar1,uVar2);
  return;
}



/* Entry: 10144e61c; end: 10144e8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144e61c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x5f8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x5f0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x5e8);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar3);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  uVar5 = param_1;
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170();
  func_0x000107c609b0(uVar5,param_2,param_3,param_4);
  FUN_10144dcc4();
  func_0x000107c54b80(0,0,param_1,uVar5);
  func_0x000107c61170();
  func_0x00010144ff74();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x620) = puVar2;
  lVar1 = _DAT_112d9f948;
  *(long *)(unaff_x22 + 0x628) = _DAT_112d9f948;
  uVar4 = *(undefined8 *)(lVar7 + lVar1);
  func_0x000107c40110(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  uVar4 = 0x6f437265646e6572;
  func_0x000107c5fadc(0x6f437265646e6572,0xee006574656c706d);
  func_0x000107c3d838(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  puVar3 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
  func_0x000107c610f8();
  uVar5 = 0xd000000000000400;
  func_0x000107c5fadc(0xd000000000000400,0x800000010ef80db0);
  func_0x000107c488ac();
  *(undefined **)(unaff_x22 + 0x630) = puVar3;
  func_0x000107c61170(uVar5);
  uVar4 = *(undefined8 *)(lVar7 + lVar1);
  func_0x000107c40110(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c3d938(uVar5);
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x22 + 0x5e0) = puVar2;
  func_0x000107c61418(unaff_x22 + 0x10,0,PTR___sytN_11034f1b0 + 8,&UNK_10d9414c8,unaff_x22 + 0x5d0);
  uVar5 = *(undefined8 *)(lVar7 + lVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c5fadc(uVar8,uVar6);
  func_0x000107c4b73c(uVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10144e8f8; end: 10144e90b;  */

void FUN_10144e8f8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10144e90c,*(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618));
  return;
}



/* Entry: 10144e90c; end: 10144e9fb;  */

void FUN_10144e90c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x5f8) + *(long *)(unaff_x22 + 0x628));
  *(undefined8 *)(unaff_x22 + 0x638) = uVar1;
  func_0x000107c61174();
  uVar2 = 0xd0000000000000bd;
  func_0x000107c5fadc(0xd0000000000000bd,0x800000010ef811c0);
  *(undefined8 *)(unaff_x22 + 0x640) = uVar2;
  *(long *)(unaff_x22 + 0x2d0) = unaff_x22;
  *(long *)(unaff_x22 + 0x2f8) = unaff_x22 + 0x498;
  *(code **)(unaff_x22 + 0x2d8) = FUN_10144e9fc;
  lVar3 = unaff_x22 + 0x2d0;
  func_0x000107c61448(lVar3,1);
  uVar2 = 0x112d9f9a8;
  func_0x0001000285a8(0x112d9f9a8,&UNK_10d9414d0);
  *(undefined8 *)(unaff_x22 + 0x410) = uVar2;
  *(long *)(unaff_x22 + 0x3f8) = lVar3;
  *(undefined **)(unaff_x22 + 0x3d8) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x3e0) = 0x42000000;
  *(code **)(unaff_x22 + 1000) = FUN_10144f9c4;
  *(undefined **)(unaff_x22 + 0x3f0) = &UNK_1103bb740;
  func_0x000107c42a80(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x2d0);
  return;
}



/* Entry: 10144e9fc; end: 10144ea53;  */

void FUN_10144e9fc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x648) = *(long *)(lVar2 + 0x2f0);
  if (*(long *)(lVar2 + 0x2f0) == 0) {
    pcVar1 = FUN_10144ea54;
  }
  else {
    pcVar1 = FUN_10144f4d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x610),*(undefined8 *)(lVar2 + 0x618));
  return;
}



/* Entry: 10144ea54; end: 10144eecf;  */

void FUN_10144ea54(void)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  double dVar13;
  double dVar14;
  
  puVar6 = (undefined8 *)(unaff_x22 + 0x4b8);
  *(undefined8 *)(unaff_x22 + 0x4c0) = *(undefined8 *)(unaff_x22 + 0x4a0);
  *puVar6 = *(undefined8 *)(unaff_x22 + 0x498);
  *(undefined8 *)(unaff_x22 + 0x4d0) = *(undefined8 *)(unaff_x22 + 0x4b0);
  *(undefined8 *)(unaff_x22 + 0x4c8) = *(undefined8 *)(unaff_x22 + 0x4a8);
  puVar9 = PTR___sypN_11034f1a8;
  if (*(long *)(unaff_x22 + 0x4d0) == 0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x638);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x640));
    func_0x000107c61170(uVar12);
LAB_10144ebc0:
    FUN_101450334(puVar6,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar1 = (long *)(unaff_x22 + 0x568);
    uVar12 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    plVar3 = plVar1;
    func_0x000107c6147c(plVar1,puVar6,puVar9 + 8,uVar12,6);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x640);
    if (((ulong)plVar3 & 1) == 0) {
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x638));
      func_0x000107c61170(uVar12);
      goto LAB_10144ebe8;
    }
    lVar11 = *plVar1;
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x638));
    func_0x000107c61170(uVar12);
    if (*(long *)(lVar11 + 0x10) != 0) {
      func_0x000107c61434(lVar11);
      lVar4 = 0x6874646977;
      uVar5 = 0;
      func_0x000100029284(0x6874646977);
      if ((uVar5 & 1) == 0) {
        func_0x000107c6142c(lVar11);
      }
      else {
        func_0x0001000bb420(*(long *)(lVar11 + 0x38) + lVar4 * 0x20,unaff_x22 + 0x458);
        func_0x000107c6142c(lVar11);
        uVar5 = unaff_x22 + 0x538;
        func_0x000107c6147c(uVar5,unaff_x22 + 0x458,puVar9 + 8,
                            PTR___s12CoreGraphics7CGFloatVN_1103513a8,6);
        if ((uVar5 & 1) != 0) {
          puVar6 = (undefined8 *)(unaff_x22 + 0x478);
          dVar13 = *(double *)(unaff_x22 + 0x538);
          *(double *)(unaff_x22 + 0x650) = dVar13;
          if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10144ed58:
            *(undefined8 *)(unaff_x22 + 0x480) = 0;
            *puVar6 = 0;
            *(undefined8 *)(unaff_x22 + 0x490) = 0;
            *(undefined8 *)(unaff_x22 + 0x488) = 0;
          }
          else {
            func_0x000107c61434(lVar11);
            lVar4 = 0x746867696568;
            uVar5 = 0;
            func_0x000100029284(0x746867696568);
            if ((uVar5 & 1) == 0) {
              func_0x000107c6142c(lVar11);
              goto LAB_10144ed58;
            }
            func_0x0001000bb420(*(long *)(lVar11 + 0x38) + lVar4 * 0x20,puVar6);
            func_0x000107c6142c(lVar11);
          }
          func_0x000107c6142c(lVar11);
          if (*(long *)(unaff_x22 + 0x490) != 0) {
            uVar5 = unaff_x22 + 0x4d8;
            func_0x000107c6147c(uVar5,puVar6,puVar9 + 8,PTR___s12CoreGraphics7CGFloatVN_1103513a8,6)
            ;
            if ((uVar5 & 1) != 0) {
              dVar14 = *(double *)(unaff_x22 + 0x4d8);
              *(double *)(unaff_x22 + 0x658) = dVar14;
              if ((0.0 < dVar13) && (0.0 < dVar14)) {
                lVar11 = *(long *)(unaff_x22 + 0x628);
                lVar4 = *(long *)(unaff_x22 + 0x5f8);
                func_0x000107c54b80(0,0,dVar13,dVar14,*(undefined8 *)(lVar4 + lVar11));
                puVar9 = PTR__OBJC_CLASS___WKSnapshotConfiguration_1126d6c50;
                func_0x000107c610f8();
                func_0x000107c453e4();
                *(undefined **)(unaff_x22 + 0x660) = puVar9;
                func_0x000107c57c14(0,0,dVar13,dVar14);
                uVar10 = *(undefined8 *)(lVar4 + lVar11);
                *(undefined8 *)(unaff_x22 + 0x668) = uVar10;
                *(long *)(unaff_x22 + 0x290) = unaff_x22;
                *(long *)(unaff_x22 + 0x2b8) = unaff_x22 + 0x508;
                *(code **)(unaff_x22 + 0x298) = FUN_10144eed0;
                lVar11 = unaff_x22 + 0x290;
                func_0x000107c61448(lVar11,1);
                uVar12 = 0x112d9f9b0;
                func_0x0001000285a8(0x112d9f9b0,&UNK_10d9b8350);
                *(undefined8 *)(unaff_x22 + 0x450) = uVar12;
                *(long *)(unaff_x22 + 0x438) = lVar11;
                *(undefined **)(unaff_x22 + 0x418) = PTR___NSConcreteStackBlock_11034bd00;
                *(undefined8 *)(unaff_x22 + 0x420) = 0x42000000;
                *(undefined8 *)(unaff_x22 + 0x428) = 0x10144fa88;
                *(undefined **)(unaff_x22 + 0x430) = &UNK_1103bb768;
                func_0x000107c61174(uVar10);
                func_0x000107c61174(puVar9);
                func_0x000107c5c6c8(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x290);
                return;
              }
            }
            goto LAB_10144ebe8;
          }
          goto LAB_10144ebc0;
        }
      }
    }
    func_0x000107c6142c(lVar11);
  }
LAB_10144ebe8:
  uVar12 = *(undefined8 *)(unaff_x22 + 0x600);
  *(undefined8 *)(unaff_x22 + 0x598) = uVar12;
  func_0x000107c614e4();
  lVar11 = unaff_x22 + 0x598;
  func_0x000107c5fb18(lVar11,uVar12);
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  lVar7 = unaff_x22 + 0x388;
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar10 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar4 + 0x20) = uVar10;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
  *(long *)(lVar4 + 0x28) = lVar7;
  *(undefined8 *)(lVar4 + 0x30) = 0xd000000000000012;
  *(undefined8 *)(lVar4 + 0x38) = 0x800000010ef81280;
  lVar7 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  FUN_101450334((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  func_0x000107c5fadc(lVar11,uVar12);
  func_0x000107c6142c(uVar12);
  lVar4 = lVar7;
  func_0x000107c5f9dc(lVar7,puVar2,puVar9 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c466bc();
  *(undefined **)(unaff_x22 + 0x690) = puVar8;
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar11);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10144eed0; end: 10144ef27;  */

void FUN_10144eed0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x670) = *(long *)(lVar2 + 0x2b0);
  if (*(long *)(lVar2 + 0x2b0) == 0) {
    pcVar1 = FUN_10144ef28;
  }
  else {
    pcVar1 = FUN_10144f65c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x610),*(undefined8 *)(lVar2 + 0x618));
  return;
}


