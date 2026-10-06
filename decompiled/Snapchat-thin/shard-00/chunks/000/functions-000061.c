/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001c8ec4; end: 1001c8ed3;  */

void FUN_1001c8ec4(void)

{
  return;
}



/* Entry: 1001c8ed4; end: 1001c8f8f;  */

ulong FUN_1001c8ed4(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong auStack_50 [2];
  
  FUN_1001c8ec4();
  auStack_50[1] = extraout_x8;
  FUN_1001c8f90();
  bVar2 = (int)param_1 == iRam0000000113170168;
  if (iRam0000000113170168 < (int)param_1) {
    (*(code *)PTR____chkstk_darwin_11034bd40)((param_1 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
    param_1 = (long)auStack_50 - extraout_x8_00;
    FUN_1001f8660();
    iVar3 = (int)param_1;
    for (lVar6 = 0; lVar4 = (long)iVar3 - (long)iRam0000000113170168, bVar2 = lVar6 == lVar4,
        lVar6 < lVar4; lVar6 = lVar6 + 1) {
      param_1 = *(ulong *)(((long)auStack_50 - extraout_x8_00) + lVar6 * 8);
      func_0x000106aea710(param_1);
    }
  }
  FUN_1001c97d0(auStack_50[1]);
  if (!bVar2) {
    func_0x000107c60e78();
    uVar1 = uRam000000011381b458;
    lVar6 = lRam000000011381b460;
    func_0x000107c611cc();
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      while (lVar4 = lVar6, func_0x000107c612c0(), lVar4 != 0) {
        lVar4 = lVar4 + 0x15;
        FUN_1001c975c(lVar4,uVar1);
        uVar5 = (ulong)((int)uVar5 + ((uint)((ulong)lVar4 >> 0x3f) ^ 1));
      }
      func_0x000107c60f14(lVar6);
    }
    return uVar5;
  }
  return param_1;
}



/* Entry: 1001c8f90; end: 1001c8fa3;  */

int FUN_1001c8f90(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  uVar1 = uRam000000011381b458;
  lVar2 = lRam000000011381b460;
  func_0x000107c611cc();
  if (lVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    while (lVar3 = lVar2, func_0x000107c612c0(), lVar3 != 0) {
      lVar3 = lVar3 + 0x15;
      FUN_1001c975c(lVar3,uVar1);
      iVar4 = iVar4 + ((uint)((ulong)lVar3 >> 0x3f) ^ 1);
    }
    func_0x000107c60f14(lVar2);
  }
  return iVar4;
}



/* Entry: 1001c8fa4; end: 1001c900b;  */

int FUN_1001c8fa4(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  func_0x000107c611cc();
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    while (lVar1 = param_1, func_0x000107c612c0(), lVar1 != 0) {
      lVar1 = lVar1 + 0x15;
      FUN_1001c975c(lVar1,param_2);
      iVar2 = iVar2 + ((uint)((ulong)lVar1 >> 0x3f) ^ 1);
    }
    func_0x000107c60f14(param_1);
  }
  return iVar2;
}



/* Entry: 1001c900c; end: 1001c90ef; -[SCPreferences stringForKey:] */

void FUN_1001c900c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x000107c4d9c0();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = param_1;
  func_0x000107c6115c(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_1;
  if (uVar1 == 0) {
    func_0x000107c61174(param_1);
    func_0x000107c61158(puVar3);
    uVar4 = param_1;
    func_0x000107c6115c(param_1,puVar3);
    uVar2 = param_1;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      func_0x000107c5c1d4(param_1);
      func_0x000107c61180();
    }
    func_0x000107c61170(uVar2);
  }
  else {
    func_0x000107c61174(param_1);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1001c90f0; end: 1001c966f;  */

void FUN_1001c90f0(void)

{
  FUN_1000285a8(0x112d9e8f8,&UNK_10d93ef70);
  FUN_1000823a8(0x1003e1124,0);
  return;
}



/* Entry: 1001c9670; end: 1001c9707;  */

void FUN_1001c9670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df2cb0,&UNK_10d9c0f00);
  puVar1 = &UNK_110435128;
  func_0x000107c613fc(&UNK_110435128,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101a77f30,puVar1);
  return;
}



/* Entry: 1001c9708; end: 1001c975b;  */

void FUN_1001c9708(void)

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



/* Entry: 1001c975c; end: 1001c97cf;  */

void FUN_1001c975c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_8c [100];
  undefined8 uStack_28;
  
  FUN_1001c8ec4();
  uStack_28 = extraout_x8;
  func_0x000107c60e74(auStack_8c,0,100,&UNK_10f3b231b);
  func_0x000107c613b4(param_1,auStack_8c);
  FUN_1001c97d0(uStack_28,0xffffffffffffffff);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 1001c97d0; end: 1001c97ef;  */

void FUN_1001c97d0(void)

{
  return;
}



/* Entry: 1001c97f0; end: 1001c986f;  */

void FUN_1001c97f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dbe788,&UNK_10d979a10);
  puVar1 = &UNK_1103f29e0;
  func_0x000107c613fc(&UNK_1103f29e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1003cc240,puVar1);
  return;
}



/* Entry: 1001c9870; end: 1001c988f;  */

void FUN_1001c9870(void)

{
  func_0x000107c61168(&PTR_PTR_1129802a0);
  return;
}



/* Entry: 1001c9890; end: 1001c98ab;  */

void FUN_1001c9890(undefined8 param_1)

{
  FUN_1000285a8(0x112dca780,&UNK_10d98c1b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003fd1a8,param_1);
  return;
}



/* Entry: 1001c98ac; end: 1001c98cb;  */

void FUN_1001c98ac(void)

{
  func_0x000107c61168(&PTR_PTR_11294d398);
  return;
}



/* Entry: 1001c98cc; end: 1001c99fb;  */

void FUN_1001c98cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc3798,&UNK_10d980dd0);
  puVar1 = &UNK_1103fd1b8;
  func_0x000107c613fc(&UNK_1103fd1b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10091dbb0,puVar1);
  return;
}



/* Entry: 1001c99fc; end: 1001c9a1b;  */

void FUN_1001c99fc(void)

{
  func_0x000107c61168(&PTR_PTR_112dda200);
  return;
}



/* Entry: 1001c9a1c; end: 1001c9a37;  */

void FUN_1001c9a1c(undefined8 param_1)

{
  FUN_1000285a8(0x112dda190,&UNK_10d99e498);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003efda4,param_1);
  return;
}



/* Entry: 1001c9a38; end: 1001c9a87;  */

void FUN_1001c9a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001c9a88; end: 1001c9aab; +[SCUpdater isUserUpdatingApp:] */

void FUN_1001c9a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolForKey__1125a5670,&PTR____CFConstantStringClassReference_110e1e338);
  return;
}



/* Entry: 1001c9aac; end: 1001c9b43;  */

void FUN_1001c9aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  FUN_1000285a8(0x112dbfd80,&UNK_10d97ba88);
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  *(undefined8 *)(param_4 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(param_5,param_4);
  return;
}



/* Entry: 1001c9b44; end: 1001c9b5f;  */

void FUN_1001c9b44(undefined8 param_1)

{
  FUN_1000285a8(0x112ddc360,&UNK_10d9a1260);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006404a8,param_1);
  return;
}



/* Entry: 1001c9b60; end: 1001c9baf;  */

void FUN_1001c9b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001c9bb0; end: 1001c9bcf;  */

void FUN_1001c9bb0(void)

{
  func_0x000107c61168(&PTR_PTR_112ddc3d8);
  return;
}



/* Entry: 1001c9bd0; end: 1001c9ca3; +[SCAbnormalExitLogger _didUpdateOS:preferences:] */

uint FUN_1001c9bd0(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  
  func_0x000107c61174(param_4);
  lVar1 = param_4;
  func_0x000107c4d9e8(param_4,param_2,&PTR____CFConstantStringClassReference_110dcded8);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c61104();
  *param_3 = lVar2;
  func_0x000107c61174();
  puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5c650();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49d0c(lVar1,param_2,puVar4);
    uVar5 = (uint)lVar2 ^ 1;
  }
  func_0x000107c56bd8(param_4,param_2,puVar4,&PTR____CFConstantStringClassReference_110dcded8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_4);
  return uVar5;
}



/* Entry: 1001c9ca4; end: 1001c9cdb;  */

void FUN_1001c9ca4(undefined8 param_1)

{
  FUN_1000285a8(0x112ddc368,&UNK_10d9a1268);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10064044c,param_1);
  return;
}



/* Entry: 1001c9cdc; end: 1001c9d2b;  */

void FUN_1001c9cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001c9d2c; end: 1001c9d4b;  */

void FUN_1001c9d2c(void)

{
  func_0x000107c61168(&PTR_PTR_112ddc4b8);
  return;
}



/* Entry: 1001c9d4c; end: 1001c9d67;  */

void FUN_1001c9d4c(undefined8 param_1)

{
  FUN_1000285a8(0x112ddc448,&UNK_10d9a1438);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100648f48,param_1);
  return;
}



/* Entry: 1001c9d68; end: 1001c9d6b; -[SCDocPreferences setObject:forKeyedSubscript:] */

void FUN_1001c9d68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setObject_forKey__112651b80);
  return;
}



/* Entry: 1001c9d6c; end: 1001c9dab;  */

void FUN_1001c9d6c(void)

{
  FUN_1000285a8(0x112dc6490,&UNK_10d986328);
  FUN_1000823a8(&UNK_10174e79c,0);
  return;
}



/* Entry: 1001c9dac; end: 1001c9e43;  */

void FUN_1001c9dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd5890,&UNK_10d997e30);
  puVar1 = &UNK_110413a90;
  func_0x000107c613fc(&UNK_110413a90,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10192f274,puVar1);
  return;
}



/* Entry: 1001c9e44; end: 1001c9e97;  */

void FUN_1001c9e44(void)

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



/* Entry: 1001c9e98; end: 1001c9ecf;  */

void FUN_1001c9e98(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1001c9ed0; end: 1001c9ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1001c9ed0(void)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  FUN_100083b20(&lStack_28);
  lVar1 = *(long *)(lStack_28 + _DAT_113053938);
  func_0x000107c61174();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4a990(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  return lVar1;
}



/* Entry: 1001c9ed8; end: 1001c9f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1001c9ed8(void)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  FUN_100083b20(&lStack_28);
  lVar1 = *(long *)(lStack_28 + _DAT_113053938);
  func_0x000107c61174();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4a990(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  return lVar1;
}



/* Entry: 1001c9f70; end: 1001c9f83;  */

void FUN_1001c9f70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1001cabec;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1001cabac;
  puStack_88 = &UNK_1103c4068;
  ppuVar10 = &puStack_a0;
  uStack_78 = uVar14;
  func_0x000107c60bc4(ppuVar10);
  uVar8 = uStack_78;
  func_0x000107c6157c(uVar14);
  func_0x000107c61574(uVar8);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  puVar11 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_80 = (code *)&UNK_10147db28;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10147db30;
  puStack_88 = &UNK_1103c4090;
  ppuVar10 = &puStack_a0;
  uStack_78 = uVar4;
  func_0x000107c60bc4(ppuVar10);
  uVar14 = uStack_78;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar14);
  func_0x000107c3e4fc(puVar11);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_80 = (code *)&UNK_10147d634;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10147db34;
  puStack_88 = &UNK_1103c40b8;
  ppuVar10 = &puStack_a0;
  uStack_78 = uVar1;
  func_0x000107c60bc4(ppuVar10);
  uVar14 = uStack_78;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar14);
  func_0x000107c3e4fc(puVar12);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  puVar13 = &UNK_1103c40f0;
  func_0x000107c613fc(&UNK_1103c40f0,0x40,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar5;
  *(undefined8 *)(puVar13 + 0x18) = uVar2;
  *(undefined8 *)(puVar13 + 0x20) = uVar6;
  *(undefined8 *)(puVar13 + 0x28) = uVar3;
  *(undefined8 *)(puVar13 + 0x30) = uVar1;
  *(undefined8 *)(puVar13 + 0x38) = uVar7;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  uVar14 = 10;
  func_0x0001001ca524(10,0,0xc,4,0,0,&UNK_10d945390,puVar13,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(uVar14);
  FUN_1000a0294(0);
  func_0x000107c610f8();
  func_0x0001001caafc(puVar9,puVar11,puVar12);
  *param_1 = puVar9;
  return;
}



/* Entry: 1001c9f84; end: 1001ca22b;  */

void FUN_1001c9f84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1001cabec;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1001cabac;
  puStack_88 = &UNK_1103c4068;
  ppuVar2 = &puStack_a0;
  uStack_78 = param_2;
  func_0x000107c60bc4(ppuVar2);
  uVar6 = uStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_80 = (code *)&UNK_10147db28;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10147db30;
  puStack_88 = &UNK_1103c4090;
  ppuVar2 = &puStack_a0;
  uStack_78 = param_3;
  func_0x000107c60bc4(ppuVar2);
  uVar6 = uStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar6);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_80 = (code *)&UNK_10147d634;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10147db34;
  puStack_88 = &UNK_1103c40b8;
  ppuVar2 = &puStack_a0;
  uStack_78 = param_4;
  func_0x000107c60bc4(ppuVar2);
  uVar6 = uStack_78;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(uVar6);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar5 = &UNK_1103c40f0;
  func_0x000107c613fc(&UNK_1103c40f0,0x40,7);
  *(undefined8 *)(puVar5 + 0x10) = param_5;
  *(undefined8 *)(puVar5 + 0x18) = param_6;
  *(undefined8 *)(puVar5 + 0x20) = param_7;
  *(undefined8 *)(puVar5 + 0x28) = param_8;
  *(undefined8 *)(puVar5 + 0x30) = param_4;
  *(undefined8 *)(puVar5 + 0x38) = param_9;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  uVar6 = 10;
  func_0x0001001ca524(10,0,0xc,4,0,0,&UNK_10d945390,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar6);
  FUN_1000a0294(0);
  func_0x000107c610f8();
  func_0x0001001caafc(puVar1,puVar3,puVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 1001ca22c; end: 1001ca277;  */

void FUN_1001ca22c(void)

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



/* Entry: 1001ca278; end: 1001ca293;  */

void FUN_1001ca278(undefined8 param_1)

{
  FUN_1000285a8(0x112dd5898,&UNK_10d997e38);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10192f544,param_1);
  return;
}



/* Entry: 1001ca294; end: 1001ca2e3;  */

void FUN_1001ca294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001ca2e4; end: 1001ca2ff;  */

void FUN_1001ca2e4(long param_1,long param_2)

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



/* Entry: 1001ca300; end: 1001ca4e7;  */

undefined8
FUN_1001ca300(undefined8 param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  lVar3 = param_8;
  if (param_8 == 0) {
    param_7 = param_1;
    lVar3 = param_2;
    FUN_10007c170(param_1,param_2,param_3);
  }
  uVar2 = param_1;
  lVar4 = param_2;
  FUN_1001ca574(param_1,param_2,param_3,param_7,lVar3,param_9,param_10,param_11,param_5);
  func_0x000107c61434(param_8);
  func_0x000107c6142c(lVar3);
  uVar1 = param_1;
  lVar3 = param_2;
  FUN_1001ca628(param_1,param_2,param_3,param_4,uVar2,lVar4,param_11);
  if (lRam0000000113097070 != -1) {
    func_0x000107c61568(0x113097070,FUN_1000ab9ec);
  }
  uStack_88 = param_3 & 0xff | (param_4 & 0xff) << 8;
  uStack_c0 = param_11;
  uStack_b8 = (undefined1)param_4;
  uStack_b0 = uVar1;
  lStack_a8 = lVar3;
  uStack_98 = param_1;
  lStack_90 = param_2;
  uStack_80 = param_5;
  uStack_78 = param_6;
  FUN_1000ab9d4(param_1,param_2,param_3);
  uVar2 = 0;
  func_0x000107c5fd54(0,param_11,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c61434(param_6);
  func_0x000107c60710(auStack_70,&uStack_98,param_12,auStack_d0,0xd00000000000001e,
                      0x800000010f213050,param_13,uVar2);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(lVar4);
  FUN_10007d980(param_1,param_2,param_3);
  func_0x000107c6142c(param_6);
  return auStack_70[0];
}



/* Entry: 1001ca4e8; end: 1001ca573;  */

void FUN_1001ca4e8(void)

{
  FUN_1001ca300();
  return;
}



/* Entry: 1001ca574; end: 1001ca627;  */

undefined1  [16]
FUN_1001ca574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1107acaa0;
  func_0x000107c613fc(&UNK_1107acaa0,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar1[0x28] = (char)param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  FUN_1000ab9d4(param_1,param_2,param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(param_7);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = &UNK_10dd3cfc0;
  return auVar2;
}



/* Entry: 1001ca628; end: 1001ca6c7;  */

undefined1  [16]
FUN_1001ca628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1107aca78;
  func_0x000107c613fc(&UNK_1107aca78,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar1[0x28] = (char)param_3;
  puVar1[0x29] = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  FUN_1000ab9d4(param_1,param_2,param_3);
  func_0x000107c6157c(param_6);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = &UNK_10dd3cfa8;
  return auVar2;
}



/* Entry: 1001ca6c8; end: 1001ca847;  */

void FUN_1001ca6c8(undefined8 *param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,code *param_8)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  if (param_2 < 2) {
    if (param_2 == 0) {
      func_0x000107c5fcf8(puVar3);
    }
    else {
      func_0x000107c5fd04(puVar3,0x15);
    }
  }
  else if (param_2 == 2) {
    func_0x000107c5fcfc(puVar3);
  }
  else {
    if (param_2 != 3) {
      lVar1 = 0;
      func_0x000107c5fd0c();
      uVar2 = 1;
      goto LAB_1001ca7c8;
    }
    func_0x000107c5fcf4(puVar3);
  }
  lVar1 = 0;
  func_0x000107c5fd0c();
  uVar2 = 0;
LAB_1001ca7c8:
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,uVar2,1);
  func_0x000107c613fc(param_6,0x38,7);
  *(undefined8 *)(param_6 + 0x10) = 0;
  *(undefined8 *)(param_6 + 0x18) = 0;
  *(undefined8 *)(param_6 + 0x20) = param_5;
  *(undefined8 *)(param_6 + 0x28) = param_3;
  *(undefined8 *)(param_6 + 0x30) = param_4;
  func_0x000107c6157c(param_4);
  uVar2 = 0;
  (*param_8)(0,0,puVar3,param_7,param_6,param_5);
  *param_1 = uVar2;
  return;
}



/* Entry: 1001ca848; end: 1001ca87f;  */

void FUN_1001ca848(void)

{
  long unaff_x20;
  
  FUN_1001ca6c8(*(undefined1 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),&UNK_1107acbe0,
                &UNK_10dd3d040,FUN_1001ca884);
  return;
}



/* Entry: 1001ca880; end: 1001ca883;  */

void FUN_1001ca880(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001ca884; end: 1001caa9b;  */

ulong FUN_1001ca884(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                   undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_a0 + -extraout_x8;
  uStack_70 = param_4;
  uStack_68 = param_5;
  FUN_1000abe04(param_3,puVar5);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
  uVar7 = param_5;
  func_0x000107c6157c(param_5);
  if ((int)puVar2 == 1) {
    func_0x0001000abe54(puVar5);
    uVar7 = 0x1c00;
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    uVar7 = uVar7 & 0xff | 0x1c00;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x18);
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(param_5);
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = lVar1;
    func_0x000107c614f0();
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  if (param_2 == 0) {
    func_0x0001000abe54(param_3);
    puVar3 = &UNK_1103cd8a8;
    func_0x000107c613fc(&UNK_1103cd8a8,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_6;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(ulong *)(puVar3 + 0x20) = param_5;
    if (lVar8 == 0 && lVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0;
      puVar4 = &uStack_90;
      lStack_80 = lVar6;
      lStack_78 = lVar8;
    }
    func_0x000107c615bc(uVar7,puVar4,param_6,&UNK_10d950678,puVar3);
  }
  else {
    func_0x000107c5fb28(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x0001014c2688(&uStack_98,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10),uVar7,lVar6,lVar8,
                        &uStack_70,param_6);
    func_0x000107c61574(param_1);
    func_0x0001000abe54(param_3);
    func_0x000107c61574(param_5);
    uVar7 = uStack_98;
  }
  return uVar7;
}



/* Entry: 1001caa9c; end: 1001caabf;  */

void FUN_1001caa9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001caac0; end: 1001caadb;  */

void FUN_1001caac0(undefined8 param_1)

{
  FUN_1000285a8(0x112dd56b0,&UNK_10d997ae8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a59820,param_1);
  return;
}



/* Entry: 1001caadc; end: 1001cabab;  */

void FUN_1001caadc(void)

{
  func_0x000107c61168(&PTR_PTR_1129513d8);
  return;
}



/* Entry: 1001cabac; end: 1001cabb3;  */

void FUN_1001cabac(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1001cabb4; end: 1001cabeb;  */

void FUN_1001cabb4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1001cabec; end: 1001cac0f;  */

undefined8 FUN_1001cabec(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1001cac10; end: 1001cac43;  */

void FUN_1001cac10(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1001cac44; end: 1001cac4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001cac44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100083b20(&lStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = lStack_60;
  uVar1 = *(undefined8 *)(lStack_60 + _DAT_113091b58);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  uVar2 = uVar1;
  func_0x000107c4a28c();
  func_0x000107c61170(uVar1);
  FUN_100083b20(&lStack_60);
  uVar5 = 0x800000010ef84040;
  uVar1 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010);
  lVar3 = lStack_60;
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_60);
  func_0x000107c61170(uVar1);
  uVar1 = 0;
  if (lVar3 == 0) {
    uVar2 = uVar1;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar2);
    func_0x000107c61654();
    func_0x000107c614ac();
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x0001000ad7c4();
    uVar4 = uVar1;
    func_0x0001000ad7c4();
    puVar6 = PTR_PTR_1126a7138;
    func_0x000107c610f8();
    func_0x000107c45750();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
    uVar1 = 0;
    FUN_1001d53c0();
    if ((int)uVar2 == 0) {
      uVar1 = 0;
      func_0x000104071994();
    }
    else {
      func_0x0001001d53e0();
    }
    func_0x000107c61174();
    func_0x000107c56a90();
    func_0x000107c61170(puVar6);
    func_0x000107c61170();
  }
  *param_1 = puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  puVar6 = &UNK_1103f2c58;
  FUN_1000285a8(0x112dbe908,&UNK_10d979b18);
  func_0x000107c613fc(&UNK_1103f2c58,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar5;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  FUN_1000823a8(&UNK_101689308,puVar6);
  return;
}



/* Entry: 1001cac50; end: 1001cae47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001cac50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100083b20(&lStack_60);
  lVar3 = lStack_60;
  uVar1 = *(undefined8 *)(lStack_60 + _DAT_113091b58);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  uVar2 = uVar1;
  func_0x000107c4a28c();
  func_0x000107c61170(uVar1);
  FUN_100083b20(&lStack_60);
  uVar5 = 0x800000010ef84040;
  uVar1 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010);
  lVar3 = lStack_60;
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_60);
  func_0x000107c61170(uVar1);
  uVar1 = 0;
  if (lVar3 == 0) {
    uVar2 = uVar1;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar2);
    func_0x000107c61654();
    func_0x000107c614ac();
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x0001000ad7c4();
    uVar4 = uVar1;
    func_0x0001000ad7c4();
    puVar6 = PTR_PTR_1126a7138;
    func_0x000107c610f8();
    func_0x000107c45750();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
    uVar1 = 0;
    FUN_1001d53c0();
    if ((int)uVar2 == 0) {
      uVar1 = 0;
      func_0x000104071994();
    }
    else {
      func_0x0001001d53e0();
    }
    func_0x000107c61174();
    func_0x000107c56a90();
    func_0x000107c61170(puVar6);
    func_0x000107c61170();
  }
  *param_1 = puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  puVar6 = &UNK_1103f2c58;
  FUN_1000285a8(0x112dbe908,&UNK_10d979b18);
  func_0x000107c613fc(&UNK_1103f2c58,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar5;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  FUN_1000823a8(&UNK_101689308,puVar6);
  return;
}



/* Entry: 1001cae48; end: 1001cae6f;  */

void FUN_1001cae48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f2c58;
  FUN_1000285a8(0x112dbe908,&UNK_10d979b18);
  func_0x000107c613fc(&UNK_1103f2c58,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101689308,puVar1);
  return;
}



/* Entry: 1001cae70; end: 1001caeef;  */

void FUN_1001cae70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 1001caef0; end: 1001caf6f;  */

void FUN_1001caef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db07b8,&UNK_10d95a3f0);
  puVar1 = &UNK_1103d9318;
  func_0x000107c613fc(&UNK_1103d9318,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1002869f8,puVar1);
  return;
}



/* Entry: 1001caf70; end: 1001caf8b;  */

void FUN_1001caf70(undefined8 param_1)

{
  FUN_1000285a8(0x112de2bb8,&UNK_10d9ab1e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c5d84,param_1);
  return;
}



/* Entry: 1001caf8c; end: 1001cafdb;  */

void FUN_1001caf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cafdc; end: 1001caffb;  */

void FUN_1001cafdc(void)

{
  func_0x000107c61168(&PTR_PTR_112de2c30);
  return;
}



/* Entry: 1001caffc; end: 1001cb017;  */

void FUN_1001caffc(undefined8 param_1)

{
  FUN_1000285a8(0x112de2bc0,&UNK_10d9ab1e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c5d28,param_1);
  return;
}



/* Entry: 1001cb018; end: 1001cb057;  */

void FUN_1001cb018(void)

{
  FUN_1000285a8(0x112dbf6c0,&UNK_10d97ad20);
  FUN_1000823a8(&UNK_10169cbb4,0);
  return;
}



/* Entry: 1001cb058; end: 1001cb073;  */

void FUN_1001cb058(undefined8 param_1)

{
  FUN_1000285a8(0x112dd8050,&UNK_10d99b3b0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d528c,param_1);
  return;
}



/* Entry: 1001cb074; end: 1001cb0c3;  */

void FUN_1001cb074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cb0c4; end: 1001cb0e3;  */

void FUN_1001cb0c4(void)

{
  func_0x000107c61168(&PTR_PTR_112dd80c8);
  return;
}



/* Entry: 1001cb0e4; end: 1001cb0ff;  */

void FUN_1001cb0e4(undefined8 param_1)

{
  FUN_1000285a8(0x112dd8058,&UNK_10d99b3b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d5230,param_1);
  return;
}



/* Entry: 1001cb100; end: 1001cb17f;  */

void FUN_1001cb100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddc838,&UNK_10d9a1b30);
  puVar1 = &UNK_11041c568;
  func_0x000107c613fc(&UNK_11041c568,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100664fec,puVar1);
  return;
}



/* Entry: 1001cb180; end: 1001cb19f;  */

void FUN_1001cb180(void)

{
  func_0x000107c61168(&PTR_PTR_112ddc8b0);
  return;
}



/* Entry: 1001cb1a0; end: 1001cb1bb;  */

void FUN_1001cb1a0(undefined8 param_1)

{
  FUN_1000285a8(0x112ddc840,&UNK_10d9a1b38);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100664f90,param_1);
  return;
}



/* Entry: 1001cb1bc; end: 1001cb20b;  */

void FUN_1001cb1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cb20c; end: 1001cb2a3;  */

void FUN_1001cb20c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd98d8,&UNK_10d99d440);
  puVar1 = &UNK_1104194e0;
  func_0x000107c613fc(&UNK_1104194e0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1003c2700,puVar1);
  return;
}



/* Entry: 1001cb2a4; end: 1001cb2c3;  */

void FUN_1001cb2a4(void)

{
  func_0x000107c61168(&PTR_PTR_112dd9950);
  return;
}



/* Entry: 1001cb2c4; end: 1001cb2df;  */

void FUN_1001cb2c4(undefined8 param_1)

{
  FUN_1000285a8(0x112dc6e68,&UNK_10d987518);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003a6f70,param_1);
  return;
}



/* Entry: 1001cb2e0; end: 1001cb32f;  */

void FUN_1001cb2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cb330; end: 1001cb337; -[SCDocObject rowid] */

undefined8 FUN_1001cb330(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1001cb338; end: 1001cb347; -[SCDocPrefItem key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001cb338(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ea38);
}



/* Entry: 1001cb348; end: 1001cb373; -[SCSQLiteDocObjectContext dataConnection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001cb348(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278eb14);
}



/* Entry: 1001cb374; end: 1001cb3b3;  */

void FUN_1001cb374(void)

{
  FUN_1000285a8(0x112df3bd0,&UNK_10d9c2320);
  FUN_1000823a8(0x100351ab0,0);
  return;
}



/* Entry: 1001cb3b4; end: 1001cb3d3;  */

void FUN_1001cb3b4(void)

{
  func_0x000107c61168(&PTR_PTR_112df3cf8);
  return;
}



/* Entry: 1001cb3d4; end: 1001cb3ef;  */

void FUN_1001cb3d4(undefined8 param_1)

{
  FUN_1000285a8(0x112dd9ad0,&UNK_10d99d840);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101964670,param_1);
  return;
}



/* Entry: 1001cb3f0; end: 1001cb43f;  */

void FUN_1001cb3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cb440; end: 1001cb45f;  */

void FUN_1001cb440(void)

{
  func_0x000107c61168(&PTR_PTR_112dd9b48);
  return;
}



/* Entry: 1001cb460; end: 1001cb53b;  */

void FUN_1001cb460(undefined8 param_1)

{
  FUN_1000285a8(0x112dd9ad8,&UNK_10d99d848);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1019647fc,param_1);
  return;
}



/* Entry: 1001cb53c; end: 1001cb66b;  */

void FUN_1001cb53c(undefined8 param_1)

{
  FUN_1000285a8(0x112db09e0,&UNK_10d95aa60);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10152823c,param_1);
  return;
}



/* Entry: 1001cb66c; end: 1001cb68f;  */

void FUN_1001cb66c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f5e28;
  FUN_1000285a8(0x112dbfd78,&UNK_10d97ba80);
  func_0x000107c613fc(&UNK_1103f5e28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_1016aab44,puVar1);
  return;
}



/* Entry: 1001cb690; end: 1001cb89b; -[SCSQLiteDocObjectContext objectForClass:byRowid:buffer:bufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001cb690(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uVar2 = param_3;
  uStack_58 = param_4;
  func_0x000107c5c688();
  lVar3 = param_1 + _DAT_11278eb44;
  uStack_60 = uVar2;
  FUN_1001cb89c(lVar3,uVar2,&uStack_60);
  uVar5 = *(ulong *)(lVar3 + 0x20);
  if ((uVar5 != 0) && (*(long *)(lVar3 + 0x30) != 0)) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & param_4;
    }
    else {
      uVar7 = param_4;
      if (uVar5 <= param_4) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = param_4 / uVar5;
        }
        uVar7 = param_4 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)(lVar3 + 0x18) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == param_4) {
          if (plVar8[2] == param_4) {
            puVar11 = (undefined *)plVar8[3];
            puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8();
            func_0x000107c61180();
            if (puVar11 == puVar10) {
              uVar4 = 0;
            }
            else {
              uVar4 = plVar8[3];
            }
            func_0x000107c61174(uVar4);
            goto LAB_1001cb824;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar5 <= uVar9) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar1 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
      }
    }
  }
  if (param_5 == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11278eb14);
    func_0x000107c306ec(uVar4,param_3,uVar2,param_4);
    func_0x000107c61180();
    lVar3 = lVar3 + 0x18;
    FUN_1001cbc64(lVar3,param_4,&uStack_58);
  }
  else {
    func_0x000107c451c0();
    func_0x000107c61180();
    func_0x000107c57f38();
    lVar3 = lVar3 + 0x18;
    FUN_1001cbc64(lVar3,param_4,&uStack_58);
    uVar4 = param_3;
  }
  func_0x000107c61174(uVar4);
  puVar10 = *(undefined **)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
LAB_1001cb824:
  func_0x000107c61170(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1001cb89c; end: 1001cbc63;  */

long * FUN_1001cb89c(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x24 = uVar5 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar14 <= param_2) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = param_2 / uVar14;
        }
        unaff_x24 = param_2 - uVar9 * uVar14;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == param_2) {
          if (plVar8[2] == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar14 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar14 <= uVar9) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar9 / uVar14;
            }
            uVar9 = uVar9 - uVar6 * uVar14;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = param_1 + 2;
  plVar3 = (long *)0x40;
  func_0x000107c60e20();
  *plVar3 = 0;
  plVar3[1] = param_2;
  plVar3[2] = *param_3;
  plVar3[4] = 0;
  plVar3[3] = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 7) = 0x3f800000;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_1001cbb80;
  uVar5 = 1;
  if (2 < uVar14) {
    uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar5 = uVar5 | uVar14 << 1;
  uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar9) {
    uVar5 = uVar9;
  }
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    func_0x000107c60c44();
    uVar14 = param_1[1];
  }
  if (uVar14 < uVar5) {
LAB_1001cba20:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001cbc50);
      (*pcVar2)();
    }
    lVar7 = uVar5 << 3;
    func_0x000107c60e20();
    lVar4 = *param_1;
    *param_1 = lVar7;
    if (lVar4 != 0) {
      func_0x000107c60e14();
      lVar7 = *param_1;
    }
    param_1[1] = uVar5;
    func_0x000107c60ee4(lVar7,uVar5 << 3);
    plVar10 = (long *)param_1[2];
    uVar14 = uVar5;
    if (plVar10 != (long *)0x0) {
      uVar9 = plVar10[1];
      uVar6 = uVar5 - 1;
      if ((uVar5 & uVar6) == 0) {
        uVar9 = uVar9 & uVar6;
      }
      else if (uVar5 <= uVar9) {
        uVar13 = 0;
        if (uVar5 != 0) {
          uVar13 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar13 * uVar5;
      }
      *(long **)(lVar7 + uVar9 * 8) = plVar8;
      plVar11 = (long *)*plVar10;
      while (plVar11 != (long *)0x0) {
        uVar13 = plVar11[1];
        if ((uVar5 & uVar6) == 0) {
          uVar13 = uVar13 & uVar6;
        }
        else if (uVar5 <= uVar13) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar13 / uVar5;
          }
          uVar13 = uVar13 - uVar1 * uVar5;
        }
        plVar12 = plVar11;
        if (uVar13 != uVar9) {
          if (*(long *)(lVar7 + uVar13 * 8) == 0) {
            *(long **)(lVar7 + uVar13 * 8) = plVar10;
            uVar9 = uVar13;
          }
          else {
            *plVar10 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar7 + uVar13 * 8);
            **(long **)(lVar7 + uVar13 * 8) = (long)plVar11;
            plVar12 = plVar10;
          }
        }
        plVar10 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (uVar5 < uVar14) {
    uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar9) {
      uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 < uVar14) {
      if (uVar5 != 0) goto LAB_1001cba20;
      lVar7 = *param_1;
      *param_1 = 0;
      if (lVar7 != 0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x24 = uVar14 - 1 & param_2;
  }
  else {
    unaff_x24 = param_2;
    if (uVar14 <= param_2) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = param_2 / uVar14;
      }
      unaff_x24 = param_2 - uVar5 * uVar14;
    }
  }
LAB_1001cbb80:
  lVar7 = *param_1;
  plVar10 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar3 = *plVar8;
    *plVar8 = (long)plVar3;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar8;
    if (*plVar3 != 0) {
      uVar5 = *(ulong *)(*plVar3 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar5 = uVar5 & uVar14 - 1;
      }
      else if (uVar14 <= uVar5) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar5 / uVar14;
        }
        uVar5 = uVar5 - uVar9 * uVar14;
      }
      *(long **)(lVar7 + uVar5 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar10;
    *plVar10 = (long)plVar3;
  }
  param_1[3] = param_1[3] + 1;
  return plVar3;
}



/* Entry: 1001cbc64; end: 1001cc023;  */

long * FUN_1001cbc64(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x24 = uVar5 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar14 <= param_2) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = param_2 / uVar14;
        }
        unaff_x24 = param_2 - uVar9 * uVar14;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == param_2) {
          if (plVar8[2] == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar14 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar14 <= uVar9) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar9 / uVar14;
            }
            uVar9 = uVar9 - uVar6 * uVar14;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = param_1 + 2;
  plVar3 = (long *)0x20;
  func_0x000107c60e20();
  uStack_58 = 1;
  *plVar3 = 0;
  plVar3[1] = param_2;
  plVar3[2] = *param_3;
  plVar3[3] = 0;
  plStack_60 = plVar8;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_1001cbf34;
  uVar5 = 1;
  if (2 < uVar14) {
    uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar5 = uVar5 | uVar14 << 1;
  uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar9) {
    uVar5 = uVar9;
  }
  plStack_68 = plVar3;
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    func_0x000107c60c44();
    uVar14 = param_1[1];
  }
  if (uVar14 < uVar5) {
LAB_1001cbdd4:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001cc010);
      (*pcVar2)();
    }
    lVar7 = uVar5 << 3;
    func_0x000107c60e20();
    lVar4 = *param_1;
    *param_1 = lVar7;
    if (lVar4 != 0) {
      func_0x000107c60e14();
      lVar7 = *param_1;
    }
    param_1[1] = uVar5;
    func_0x000107c60ee4(lVar7,uVar5 << 3);
    plVar10 = (long *)param_1[2];
    uVar14 = uVar5;
    if (plVar10 != (long *)0x0) {
      uVar9 = plVar10[1];
      uVar6 = uVar5 - 1;
      if ((uVar5 & uVar6) == 0) {
        uVar9 = uVar9 & uVar6;
      }
      else if (uVar5 <= uVar9) {
        uVar13 = 0;
        if (uVar5 != 0) {
          uVar13 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar13 * uVar5;
      }
      *(long **)(lVar7 + uVar9 * 8) = plVar8;
      plVar11 = (long *)*plVar10;
      while (plVar11 != (long *)0x0) {
        uVar13 = plVar11[1];
        if ((uVar5 & uVar6) == 0) {
          uVar13 = uVar13 & uVar6;
        }
        else if (uVar5 <= uVar13) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar13 / uVar5;
          }
          uVar13 = uVar13 - uVar1 * uVar5;
        }
        plVar12 = plVar11;
        if (uVar13 != uVar9) {
          if (*(long *)(lVar7 + uVar13 * 8) == 0) {
            *(long **)(lVar7 + uVar13 * 8) = plVar10;
            uVar9 = uVar13;
          }
          else {
            *plVar10 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar7 + uVar13 * 8);
            **(long **)(lVar7 + uVar13 * 8) = (long)plVar11;
            plVar12 = plVar10;
          }
        }
        plVar10 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (uVar5 < uVar14) {
    uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar9) {
      uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 < uVar14) {
      if (uVar5 != 0) goto LAB_1001cbdd4;
      lVar7 = *param_1;
      *param_1 = 0;
      if (lVar7 != 0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x24 = uVar14 - 1 & param_2;
  }
  else {
    unaff_x24 = param_2;
    if (uVar14 <= param_2) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = param_2 / uVar14;
      }
      unaff_x24 = param_2 - uVar5 * uVar14;
    }
  }
LAB_1001cbf34:
  lVar7 = *param_1;
  plVar10 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar3 = *plVar8;
    *plVar8 = (long)plVar3;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar8;
    if (*plVar3 != 0) {
      uVar5 = *(ulong *)(*plVar3 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar5 = uVar5 & uVar14 - 1;
      }
      else if (uVar14 <= uVar5) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar5 / uVar14;
        }
        uVar5 = uVar5 - uVar9 * uVar14;
      }
      *(long **)(lVar7 + uVar5 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar10;
    *plVar10 = (long)plVar3;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1001cc024(&plStack_68);
  return plVar3;
}



/* Entry: 1001cc024; end: 1001cc06b;  */

void FUN_1001cc024(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c61170(*(undefined8 *)(lVar1 + 0x18));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1001cc06c; end: 1001cc07b; -[SCDocPrefItem nameGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001cc06c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ea3c);
}



/* Entry: 1001cc07c; end: 1001cc08b; -[SCDocPrefItem valUnsignedInteger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001cc07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ea4c);
}



/* Entry: 1001cc08c; end: 1001cc09b; -[SCDocPrefItem valFloat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001cc08c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11278ea50);
}



/* Entry: 1001cc09c; end: 1001cc0ab; -[SCDocPrefItem valDouble] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001cc09c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ea54);
}



/* Entry: 1001cc0ac; end: 1001cc1f3;  */

undefined1 *
FUN_1001cc0ac(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_11);
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_78 = PTR_PTR_1127065a8;
    lStack_80 = param_3;
    func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_4;
      func_0x000107c61174(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      func_0x000107c61170(uVar2);
      func_0x000107c61174(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      func_0x000107c61170(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_7;
      *(undefined1 *)((long)plVar1 + 0x15) = param_8;
      *(undefined8 *)((long)plVar1 + 0x30) = param_9;
      *(undefined8 *)((long)plVar1 + 0x38) = param_10;
      *(undefined4 *)((long)plVar1 + 0x18) = param_1;
      *(undefined8 *)((long)plVar1 + 0x40) = param_2;
      func_0x000107c61174(param_11);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = param_11;
      func_0x000107c61170(uVar2);
    }
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return puVar3;
}



/* Entry: 1001cc1f4; end: 1001cc2d3;  */

/* WARNING: Possible PIC construction at 0x0001001cc288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001cc28c) */

void FUN_1001cc1f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar1 = param_2;
  func_0x000107c5dba0();
  *(char *)(param_3 + 0x14) = (char)uVar1;
  uVar1 = param_2;
  func_0x000107c5db80();
  *(char *)(param_3 + 0x15) = (char)uVar1;
  uVar1 = param_2;
  func_0x000107c5db98();
  *(undefined8 *)(param_3 + 0x30) = uVar1;
  uVar1 = param_2;
  func_0x000107c5dba8();
  *(undefined8 *)(param_3 + 0x38) = uVar1;
  func_0x000107c5db90(param_2);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  func_0x000107c5db88(param_2);
  *(ulong *)(param_3 + 0x40) = CONCAT44(uVar3,uVar2);
  func_0x000107c5db8c(param_2);
  func_0x000107c61180();
  func_0x000107c61198(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1001cc2d4; end: 1001cc907; -[SCSQLiteDocObjectTransactionContext submit:] */

/* WARNING: Removing unreachable block (ram,0x0001001cc740) */
/* WARNING: Removing unreachable block (ram,0x0001001cc53c) */
/* WARNING: Removing unreachable block (ram,0x0001001cc858) */

void FUN_1001cc2d4(long param_1,undefined8 ****param_2,undefined8 ****param_3)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 ****unaff_x21;
  undefined8 *puVar9;
  undefined8 unaff_x22;
  undefined8 *puVar10;
  undefined8 unaff_x23;
  undefined **ppuVar11;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 ***pppuStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char cStack_e9;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char cStack_81;
  undefined8 ***pppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  if (param_3 == (undefined8 ****)0x0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    unaff_x20 = param_1 + 0x40;
    func_0x000107c61148();
    if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
      ppppuVar2 = param_3;
      func_0x000107c61158(param_3);
      func_0x000107c60b14();
      func_0x000107c61180();
      func_0x000107c3d608(unaff_x20);
      func_0x000107c61170(ppppuVar2);
      lVar3 = unaff_x20;
      func_0x000107c41220();
      ppppuVar2 = param_3;
      func_0x000107c5c688();
      lVar4 = *(long *)(param_1 + 8);
      param_2 = &pppuStack_120;
      pppuStack_120 = ppppuVar2;
      func_0x0001001cc948();
      if (lVar4 == 0) {
        func_0x000107c40bbc(param_3);
        FUN_1001ccb30(*(undefined8 *)(param_1 + 8),pppuStack_120,pppuStack_120);
        param_2 = (undefined8 ****)pppuStack_120;
        FUN_1001ccb30(param_1 + 0x10,pppuStack_120,pppuStack_120);
      }
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined2 *)(param_1 + 0xd4) = 0;
      lVar4 = *(long *)(param_1 + 0xb8);
      if (lVar4 == 0) {
        lVar8 = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
      else {
        lVar8 = lVar4 + *(long *)(param_1 + 0xb0);
      }
      *(long *)(param_1 + 0xc0) = lVar8;
      *(long *)(param_1 + 200) = lVar4;
      *(undefined2 *)(param_1 + 0xd6) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 1;
      puVar9 = *(undefined8 **)(param_1 + 0xe8);
      if (puVar9 != (undefined8 *)0x0) {
        puVar10 = puVar9 + 1;
        func_0x000107c3072c(*puVar10);
        *puVar9 = puVar10;
        puVar9[2] = 0;
        *puVar10 = 0;
      }
      unaff_x21 = param_3;
      func_0x000107c61158();
      func_0x000107c60b14();
      func_0x000107c61180();
      unaff_x22 = *(undefined8 *)(param_1 + 0x38);
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_1001cd270;
      puStack_140 = &UNK_110d259e8;
      func_0x000107c61174(param_3);
      pppuStack_138 = param_3;
      lStack_130 = param_1;
      lStack_128 = lVar3;
      func_0x000107c61174(unaff_x20);
      func_0x000107c61174(unaff_x21);
      func_0x000107c61174(unaff_x22);
      func_0x000107c61174(&puStack_158);
      iVar1 = (int)*(undefined8 *)(lVar3 + 0x58);
      func_0x000107c61390();
      if (iVar1 == 0) {
        unaff_x23 = 0x38;
        func_0x000107c60e20();
        param_2 = (undefined8 ****)&UNK_10f780cf6;
        FUN_1001ccebc();
        ppuVar11 = &puStack_158;
        (*pcStack_148)();
        func_0x000107c61180();
        if (ppuVar11 == (undefined **)0x0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x58);
          func_0x000107c61380();
          uVar6 = *(undefined8 *)(lVar3 + 0x58);
          func_0x000107c61374(uVar6);
          FUN_10002b838(&uStack_98,uVar6);
          func_0x000107c30730(unaff_x23);
          uStack_f8 = uStack_90;
          uStack_100 = uStack_98;
          cStack_e9 = cStack_81;
          FUN_10002b838(auStack_118,"");
          param_2 = (undefined8 ****)0x1;
          func_0x000107c310c4(&uStack_e0,1,7,uVar5,&uStack_100,auStack_118,0);
          *(undefined8 *)(param_1 + 0x48) = uStack_e0;
          *(undefined4 *)(param_1 + 0x50) = uStack_d8;
          if (*(char *)(param_1 + 0x6f) < '\0') {
            func_0x000107c60e14(*(undefined8 *)(param_1 + 0x58));
          }
          *(undefined8 *)(param_1 + 0x60) = uStack_c8;
          *(ulong *)(param_1 + 0x58) = uStack_d0;
          *(ulong *)(param_1 + 0x68) = uStack_c0;
          uStack_c0 = uStack_c0 & 0xffffffffffffff;
          uStack_d0 = uStack_d0 & 0xffffffffffffff00;
          if (*(char *)(param_1 + 0x87) < '\0') {
            func_0x000107c60e14(*(undefined8 *)(param_1 + 0x70));
            *(undefined8 *)(param_1 + 0x78) = uStack_b0;
            *(ulong *)(param_1 + 0x70) = uStack_b8;
            *(ulong *)(param_1 + 0x80) = uStack_a8;
            uStack_a8 = uStack_a8 & 0xffffffffffffff;
            uStack_b8 = uStack_b8 & 0xffffffffffffff00;
            *(undefined4 *)(param_1 + 0x88) = uStack_a0;
            if ((long)uStack_c0 < 0) {
              func_0x000107c60e14(uStack_d0);
            }
          }
          else {
            *(undefined8 *)(param_1 + 0x78) = uStack_b0;
            *(ulong *)(param_1 + 0x70) = uStack_b8;
            *(ulong *)(param_1 + 0x80) = uStack_a8;
            uStack_a8 = uStack_a8 & 0xffffffffffffff;
            uStack_b8 = uStack_b8 & 0xffffffffffffff00;
            *(undefined4 *)(param_1 + 0x88) = uStack_a0;
          }
          if (cStack_101 < '\0') {
            func_0x000107c60e14(auStack_118[0]);
          }
          if (cStack_e9 < '\0') {
            func_0x000107c60e14(uStack_100);
          }
          uStack_e0 = *(undefined8 *)(param_1 + 0x48);
          uStack_d8 = *(undefined4 *)(param_1 + 0x50);
          if (*(char *)(param_1 + 0x6f) < '\0') {
            param_2 = *(undefined8 *****)(param_1 + 0x58);
            FUN_100033dac(&uStack_d0,param_2,*(undefined8 *)(param_1 + 0x60));
          }
          else {
            uStack_c8 = *(undefined8 *)(param_1 + 0x60);
            uStack_d0 = *(ulong *)(param_1 + 0x58);
            uStack_c0 = *(ulong *)(param_1 + 0x68);
          }
          if (*(char *)(param_1 + 0x87) < '\0') {
            param_2 = *(undefined8 *****)(param_1 + 0x70);
            FUN_100033dac(&uStack_b8,param_2,*(undefined8 *)(param_1 + 0x78));
          }
          else {
            uStack_b0 = *(undefined8 *)(param_1 + 0x78);
            uStack_b8 = *(ulong *)(param_1 + 0x70);
            uStack_a8 = *(ulong *)(param_1 + 0x80);
          }
          uStack_a0 = *(undefined4 *)(param_1 + 0x88);
          puVar7 = PTR____NSArray0__struct_11034ab48;
          if (unaff_x21 != (undefined8 ****)0x0) {
            puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
            pppuStack_80 = unaff_x21;
            func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
            func_0x000107c61180();
          }
          func_0x000107c421dc(unaff_x22);
          if (unaff_x21 != (undefined8 ****)0x0) {
            func_0x000107c61170(puVar7);
          }
          if ((long)uStack_a8 < 0) {
            func_0x000107c60e14(uStack_b8);
          }
          if ((long)uStack_c0 < 0) {
            func_0x000107c60e14(uStack_d0);
          }
          if ((int)uVar5 == 0xb) {
            func_0x000107c306f0(unaff_x20);
          }
        }
        else {
          func_0x000107c61174(ppuVar11);
        }
        func_0x000107c61170(ppuVar11);
        FUN_1001ced2c(unaff_x23);
        func_0x000107c60e14();
      }
      else {
        ppuVar11 = (undefined **)0x0;
      }
      func_0x000107c61170(&puStack_158);
      func_0x000107c61170(unaff_x22);
      func_0x000107c61170(unaff_x21);
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(pppuStack_138);
      func_0x000107c61170(unaff_x21);
    }
    else {
      ppuVar11 = (undefined **)0x0;
    }
    func_0x000107c61170(unaff_x20);
  }
  ppppuVar2 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
    return;
  }
  func_0x000107c60e78();
  if ((long)uStack_c0 < 0) {
    func_0x000107c60e14(uStack_d0);
  }
  FUN_1001ced2c(unaff_x23);
  func_0x000107c60e14();
  func_0x000107c61170(&puStack_158);
  func_0x000107c61170(unaff_x22);
  func_0x000107c61170(unaff_x21);
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(pppuStack_138);
  func_0x000107c61170(unaff_x21);
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  puVar7 = &UNK_1103f5e78;
  FUN_1000285a8(0x112d6a5b8,&UNK_10d92db30);
  func_0x000107c613fc(&UNK_1103f5e78,0x20,7);
  *(undefined8 *****)(puVar7 + 0x10) = ppppuVar2;
  *(undefined8 *****)(puVar7 + 0x18) = param_2;
  func_0x000107c6157c(ppppuVar2);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1003a5c6c,puVar7);
  return;
}


