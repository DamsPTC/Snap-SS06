/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101abcbe0; end: 101abccdf;  */

undefined8 FUN_101abcbe0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar2 = param_1;
  (*pcVar5)(param_1,5,lVar1);
  uVar3 = param_2;
  (*pcVar5)(param_2,5,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar1);
      goto LAB_101abcc88;
    }
    (**(code **)(lVar4 + 0x28))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_101abcc88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,5,lVar1);
  }
  return param_1;
}



/* Entry: 101abcce0; end: 101abccf7;  */

void FUN_101abcce0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101abccf8; end: 101abcd2f;  */

void FUN_101abccf8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000101abcd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,5,lVar1);
  return;
}



/* Entry: 101abcd30; end: 101abcd33;  */

void FUN_101abcd30(void)

{
  return;
}



/* Entry: 101abcd34; end: 101abcd73;  */

void FUN_101abcd34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000101abcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,5,lVar1);
  return;
}



/* Entry: 101abcd74; end: 101abcd87;  */

void FUN_101abcd74(undefined8 param_1)

{
  if (lRam0000000112df8c88 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66fc00);
  return;
}



/* Entry: 101abcd88; end: 101abcdb7;  */

void FUN_101abcd88(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 101abcdb8; end: 101abce0b;  */

void FUN_101abcdb8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    func_0x000107c61530(param_1,0x100,*(long *)(lVar1 + -8) + 0x40,5);
  }
  return;
}



/* Entry: 101abce0c; end: 101abcf3b;  */

void FUN_101abce0c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 101abcf3c; end: 101abcfbf;  */

void FUN_101abcf3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112df8cf8;
  FUN_101abd8a8(0x112df8cf8,0x101abd824,&UNK_10d9c939c);
  uVar2 = 0x112df8d00;
  FUN_101abd8a8(0x112df8d00,0x101abd824,&UNK_10d9c9198);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 101abcfc0; end: 101abd003;  */

void FUN_101abcfc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101abd004; end: 101abd087;  */

void FUN_101abd004(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112df8ce8;
  FUN_101abd8a8(0x112df8ce8,FUN_101abd810,&UNK_10d9c930c);
  uVar2 = 0x112df8cf0;
  FUN_101abd8a8(0x112df8cf0,FUN_101abd810,&UNK_10d9c92ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 101abd088; end: 101abd0ff;  */

undefined8 FUN_101abd088(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 101abd100; end: 101abd1f3;  */

undefined1 * FUN_101abd100(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 101abd1f4; end: 101abd74f;  */

uint FUN_101abd1f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  code *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  char acStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_2;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  pcVar9 = acStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)pcVar9 - extraout_x12;
  lVar2 = 0;
  FUN_101abc1ac();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  pcVar10 = (char *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)pcVar10 - extraout_x12_00;
  lVar6 = 0x112df8c98;
  func_0x0001000285a8(0x112df8c98,&UNK_10d9c9088);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar11 - extraout_x8_01;
  lVar6 = (long)*(int *)(lVar6 + 0x30);
  FUN_101abd750(param_1,lVar5,FUN_101abc1ac);
  FUN_101abd750(uStack_68,lVar5 + lVar6,FUN_101abc1ac);
  lVar3 = lVar5;
  func_0x000107c614c4(lVar5,lVar2);
  if ((int)lVar3 == 0) {
    FUN_101abd750(lVar5,lVar11,FUN_101abc1ac);
    lVar3 = lVar5 + lVar6;
    func_0x000107c614c4(lVar3,lVar2);
    if ((int)lVar3 == 0) {
      pcVar8 = *(code **)(lVar4 + 0x20);
      (*pcVar8)(lVar12,lVar11,lVar1);
      (*pcVar8)(pcVar9,lVar5 + lVar6,lVar1);
      lVar6 = lVar12;
      func_0x000107c5edac(lVar12,pcVar9);
      uVar7 = (uint)lVar6;
      pcVar8 = *(code **)(lVar4 + 8);
      (*pcVar8)(pcVar9,lVar1);
      (*pcVar8)(lVar12,lVar1);
LAB_101abd454:
      func_0x000101abd7d4(lVar5,FUN_101abc1ac);
      goto LAB_101abd464;
    }
    (**(code **)(lVar4 + 8))(lVar11,lVar1);
  }
  else if ((int)lVar3 == 1) {
    FUN_101abd750(lVar5,pcVar10,FUN_101abc1ac);
    lVar3 = lVar5 + lVar6;
    func_0x000107c614c4(lVar3,lVar2);
    if ((int)lVar3 == 1) {
      uVar7 = (uint)(*pcVar10 == *(char *)(lVar5 + lVar6));
      goto LAB_101abd454;
    }
  }
  else {
    lVar6 = lVar5 + lVar6;
    func_0x000107c614c4(lVar6,lVar2);
    if ((int)lVar6 == 2) {
      func_0x000101abd7d4(lVar5,FUN_101abc1ac);
      uVar7 = 1;
      goto LAB_101abd464;
    }
  }
  func_0x000101abd794(lVar5,0x112df8c98,&UNK_10d9c9088);
  uVar7 = 0;
LAB_101abd464:
  return uVar7 & 1;
}



/* Entry: 101abd750; end: 101abd80f;  */

undefined8 FUN_101abd750(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101abd810; end: 101abd837;  */

void FUN_101abd810(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11043d870;
  if (lRam0000000112df8ca8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112df8ca8 = param_1;
  }
  return;
}



/* Entry: 101abd838; end: 101abd87b;  */

void FUN_101abd838(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101abd87c; end: 101abd8a7;  */

void FUN_101abd87c(void)

{
  FUN_101abd8a8(0x112df8cb8,0x101abd824,&UNK_10d9c915c);
  return;
}



/* Entry: 101abd8a8; end: 101abd8e7;  */

void FUN_101abd8a8(long *param_1,code *param_2,long param_3)

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



/* Entry: 101abd8e8; end: 101abd9c3;  */

void FUN_101abd8e8(void)

{
  FUN_101abd8a8(0x112df8cc0,0x101abd824,&UNK_10d9c9130);
  return;
}



/* Entry: 101abd9c4; end: 101abda13;  */

void FUN_101abd9c4(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 101abda14; end: 101abdb23;  */

void FUN_101abda14(long param_1)

{
  undefined *puVar1;
  undefined8 in_x4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c3d5c4(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101abdb24; end: 101abdcc3;  */

void FUN_101abdb24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long in_x4;
  undefined8 in_x5;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  FUN_101abe848(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    uVar1 = 0;
    func_0x000101315130(0);
    puVar2 = &uStack_78;
    func_0x000107c6147c(puVar2,auStack_70,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar1 = uStack_78;
      func_0x000107c43778(uStack_78);
      func_0x000107c61180();
      func_0x000107c61170(uStack_78);
      func_0x000107c5c520(uVar1);
      func_0x000107c61170(uVar1);
    }
  }
  lVar3 = in_x4;
  func_0x000107c43778();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5c520();
  lVar4 = lVar3;
  func_0x000107c4377c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
  }
  func_0x000107c61174(lVar3);
  func_0x000107c4eaec(in_x4);
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c43790(param_1);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c3d5c4(in_x5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101abdcc4; end: 101abdd43;  */

undefined1  [16] FUN_101abdcc4(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar8);
  puVar1 = auStack_88;
  func_0x000107c5fb58(puVar1,uVar6,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      func_0x000107c5faec();
      uVar3 = param_1;
      puVar4 = puVar1;
      func_0x000107c5faec();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      func_0x000107c605b8(uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0))
      goto LAB_101abde1c;
    }
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar4);
    uVar9 = 1;
  }
LAB_101abde1c:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 101abdd44; end: 101abde3b;  */

undefined1  [16] FUN_101abdd44(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_101abde1c;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_101abde1c:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 101abde3c; end: 101abdf5f;  */

undefined * FUN_101abde3c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    func_0x0001000285a8(0x112df8d18,&UNK_10d9c93f0);
    puVar3 = puVar7;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      puVar5 = &uStack_88;
      FUN_101abe848(param_1,puVar5,0x112df8d10,&UNK_10d9c93e8);
      uVar1 = uStack_88;
      uVar4 = uStack_88;
      FUN_101abdcc4();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101abdf5c);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      func_0x000100102924(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101abdf60);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 101abdf60; end: 101abe077;  */

/* WARNING: Removing unreachable block (ram,0x000101abe3c4) */

long FUN_101abdf60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 **ppuVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ulong auStack_1d0 [4];
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  ulong uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puVar6;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  uVar2 = 0;
  func_0x000101abd824();
  uVar3 = uVar2;
  FUN_101abe804();
  uVar8 = param_3;
  func_0x000107c5f9dc(param_3,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
  func_0x000107c6142c(param_3);
  func_0x000107c46378();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar8);
  puVar4 = (undefined8 *)0x0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar15 = 0;
  func_0x000107c5eb9c();
  lVar21 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  uVar3 = (long)&lStack_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5fb10();
  lVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  puVar20 = (undefined8 *)(uVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar6 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar6;
  func_0x000107c4a02c();
  if (iVar1 != 0) {
    func_0x000107c3ef6c();
    func_0x000107c61180();
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    puVar7 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170();
    uVar14 = (ulong)puVar7 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar14 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar14 == 0) {
      func_0x000107c6142c(uVar2);
    }
    else {
      uStack_d8 = 0x3e5e5b625c696c3c;
      uStack_d0 = 0xeb000000003e2a5d;
      uStack_e8 = 0x20a280e23024;
      uStack_e0 = 0xa600000000000000;
      lStack_1b0 = lVar15;
      puStack_190 = puVar7;
      puStack_188 = (undefined8 *)uVar2;
      func_0x000100e8b654();
      puVar6 = PTR___sSSN_11034da80;
      puVar20[-2] = puVar4;
      puVar20[-1] = puVar4;
      puVar20[-4] = PTR___sSSN_11034da80;
      puVar20[-3] = puVar4;
      puVar7 = &uStack_d8;
      puVar9 = &uStack_e8;
      func_0x000107c601fc(puVar7,puVar9,0x401,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
      func_0x000107c6142c(uVar2);
      puStack_190 = puVar7;
      puStack_188 = puVar9;
      func_0x000107c5fb04(puVar20);
      uVar2 = 0;
      puVar7 = puVar20;
      puStack_1a8 = puVar4;
      func_0x000107c60214(puVar20,0,puVar6,puVar4);
      pcVar19 = *(code **)(lVar22 + 8);
      (*pcVar19)(puVar20,lVar5);
      func_0x000107c6142c(puVar9);
      if (uVar2 >> 0x3c < 0xf) {
        lVar15 = 0x112df8d08;
        func_0x0001000285a8(0x112df8d08,&UNK_10d9c93e0);
        func_0x000107c61534();
        *(undefined8 *)(lVar15 + 0x18) = 4;
        *(undefined8 *)(lVar15 + 0x10) = 2;
        uVar17 = *(undefined8 *)PTR__NSDocumentTypeDocumentOption_1103457e8;
        *(undefined8 *)(lVar15 + 0x20) = uVar17;
        uVar18 = *(undefined8 *)PTR__NSHTMLTextDocumentType_110345800;
        uVar8 = 0;
        puStack_1a0 = puVar7;
        func_0x000101abd810();
        *(undefined8 *)(lVar15 + 0x28) = uVar18;
        uVar16 = *(undefined8 *)PTR__NSCharacterEncodingDocumentOption_1103457d0;
        *(undefined8 *)(lVar15 + 0x40) = uVar8;
        *(undefined8 *)(lVar15 + 0x48) = uVar16;
        uStack_198 = uVar2;
        func_0x000100de78a0(puStack_1a0,uVar2);
        func_0x000107c61174(uVar17);
        func_0x000107c61174(uVar18);
        func_0x000107c61174();
        func_0x000107c5fb04(puVar20);
        func_0x000107c5fb0c();
        *(undefined **)(lVar15 + 0x68) = PTR___sSuN_11034e220;
        *(undefined8 *)(lVar15 + 0x50) = uVar16;
        (*pcVar19)(puVar20,lVar5);
        lVar5 = lVar15;
        FUN_101abde3c(lVar15);
        func_0x000107c61588(lVar15);
        uVar8 = 0x112df8d10;
        func_0x0001000285a8(0x112df8d10,&UNK_10d9c93e8);
        func_0x000107c61408((undefined8 *)(lVar15 + 0x20),2,uVar8);
        func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
        uVar2 = uStack_198;
        puVar20 = puStack_1a0;
        FUN_101abdf60(puStack_1a0,uStack_198,lVar5,0);
        puVar4 = puStack_1a0;
        uVar14 = uVar2;
        func_0x0001000b44c0(puStack_1a0);
        if (puVar20 == (undefined8 *)0x0) {
          func_0x0001000b44c0(puVar4,uVar2);
        }
        else {
          puVar4 = puVar20;
          func_0x000107c61174();
          puVar7 = puVar4;
          func_0x000107c5c158();
          func_0x000107c61180();
          puVar9 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          puStack_190 = puVar9;
          puStack_188 = (undefined8 *)uVar14;
          func_0x000107c5eb88(uVar3);
          uVar2 = uVar3;
          puVar11 = PTR___sSSN_11034da80;
          func_0x000107c601f0(uVar3,PTR___sSSN_11034da80,puStack_1a8);
          (**(code **)(lVar21 + 8))(uVar3,lStack_1b0);
          func_0x000107c6142c(uVar14);
          puVar6 = puVar11;
          func_0x000107c6142c();
          uVar3 = uVar2 & 0xffffffffffff;
          if (((ulong)puVar11 & 0x2000000000000000) != 0) {
            uVar3 = (ulong)puVar11 >> 0x38 & 0xf;
          }
          if (uVar3 != 0) {
            func_0x00010052bbec();
            func_0x000107c61180();
            puVar10 = puVar6;
            func_0x000107c43784();
            func_0x000107c61180();
            func_0x000107c615e8(puVar6);
            func_0x000107c4adac(puVar4);
            puVar6 = &UNK_11043d990;
            func_0x000107c613fc(&UNK_11043d990,0x20,7);
            *(undefined **)(puVar6 + 0x10) = puVar10;
            *(undefined8 **)(puVar6 + 0x18) = puVar4;
            puVar11 = &UNK_11043d9b8;
            func_0x000107c613fc(&UNK_11043d9b8,0x20,7);
            *(code **)(puVar11 + 0x10) = FUN_101abe7b8;
            *(undefined **)(puVar11 + 0x18) = puVar6;
            pcStack_170 = FUN_101abe7c0;
            puStack_190 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
            puStack_188 = (undefined8 *)0x42000000;
            uStack_180 = 0x101abda9c;
            puStack_178 = &UNK_11043d9d0;
            ppuVar12 = &puStack_190;
            puStack_168 = puVar11;
            func_0x000107c60bc4(ppuVar12);
            puVar13 = puStack_168;
            func_0x000107c61174();
            func_0x000107c61174(puVar10);
            func_0x000107c6157c(puVar11);
            func_0x000107c61574(puVar13);
            func_0x000107c429b4(puVar4);
            func_0x000107c61170(puVar10);
            func_0x000107c60bd0(ppuVar12);
            puVar13 = puVar11;
            func_0x000107c61544(puVar11,"",0x6c,0x5b,0x46,1);
            func_0x000107c61574(puVar6);
            func_0x000107c61574(puVar11);
            if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x101abe7b8);
              (*pcVar19)();
            }
            func_0x000107c4adac(puVar4);
            puVar6 = &UNK_11043da08;
            func_0x000107c613fc(&UNK_11043da08,0x18,7);
            *(undefined8 **)(puVar6 + 0x10) = puVar4;
            puVar11 = &UNK_11043da30;
            func_0x000107c613fc(&UNK_11043da30,0x20,7);
            *(undefined8 *)(puVar11 + 0x10) = 0x101abe7fc;
            *(undefined **)(puVar11 + 0x18) = puVar6;
            pcStack_170 = FUN_101abe890;
            puStack_190 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
            puStack_188 = (undefined8 *)0x42000000;
            uStack_180 = 0x101abda9c;
            puStack_178 = &UNK_11043da48;
            ppuVar12 = &puStack_190;
            puStack_168 = puVar11;
            func_0x000107c60bc4(ppuVar12);
            puVar13 = puStack_168;
            func_0x000107c61174(puVar4);
            func_0x000107c6157c(puVar11);
            func_0x000107c61574(puVar13);
            func_0x000107c429b4(puVar4);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c61170(puVar4);
            func_0x0001000b44c0(puStack_1a0,uStack_198);
            puVar13 = puVar11;
            func_0x000107c61544(puVar11,"",0x6c,0x4d,0x46,1);
            func_0x000107c61574(puVar6);
            func_0x000107c61574(puVar11);
            if (((ulong)puVar13 & 1) == 0) {
              return (long)puVar20;
            }
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x101abe78c);
            (*pcVar19)();
          }
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar4);
          func_0x0001000b44c0(puStack_1a0,uStack_198);
        }
      }
    }
  }
  return 0;
}



/* Entry: 101abe078; end: 101abe7b7;  */

/* WARNING: Removing unreachable block (ram,0x000101abe3c4) */

void FUN_101abe078(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  ulong auStack_180 [4];
  long lStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  ulong uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puVar4;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar20 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  uVar18 = (long)&lStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5fb10();
  lVar21 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  puVar19 = (undefined8 *)(uVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar4;
  func_0x000107c4a02c();
  if (iVar1 != 0) {
    func_0x000107c3ef6c();
    func_0x000107c61180();
    if (param_1 != (undefined8 *)0x0) {
      puVar5 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170();
      uVar12 = (ulong)puVar5 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar12 = param_2 >> 0x38 & 0xf;
      }
      if (uVar12 == 0) {
        func_0x000107c6142c(param_2);
      }
      else {
        uStack_88 = 0x3e5e5b625c696c3c;
        uStack_80 = 0xeb000000003e2a5d;
        uStack_98 = 0x20a280e23024;
        uStack_90 = 0xa600000000000000;
        lStack_160 = lVar2;
        puStack_140 = puVar5;
        puStack_138 = (undefined8 *)param_2;
        func_0x000100e8b654();
        puVar4 = PTR___sSSN_11034da80;
        puVar19[-2] = param_1;
        puVar19[-1] = param_1;
        puVar19[-4] = PTR___sSSN_11034da80;
        puVar19[-3] = param_1;
        puVar5 = &uStack_88;
        puVar7 = &uStack_98;
        func_0x000107c601fc(puVar5,puVar7,0x401,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
        func_0x000107c6142c(param_2);
        puStack_140 = puVar5;
        puStack_138 = puVar7;
        func_0x000107c5fb04(puVar19);
        uVar12 = 0;
        puVar5 = puVar19;
        puStack_158 = param_1;
        func_0x000107c60214(puVar19,0,puVar4,param_1);
        pcVar17 = *(code **)(lVar21 + 8);
        (*pcVar17)(puVar19,lVar3);
        func_0x000107c6142c(puVar7);
        if (uVar12 >> 0x3c < 0xf) {
          lVar2 = 0x112df8d08;
          func_0x0001000285a8(0x112df8d08,&UNK_10d9c93e0);
          func_0x000107c61534();
          *(undefined8 *)(lVar2 + 0x18) = 4;
          *(undefined8 *)(lVar2 + 0x10) = 2;
          uVar15 = *(undefined8 *)PTR__NSDocumentTypeDocumentOption_1103457e8;
          *(undefined8 *)(lVar2 + 0x20) = uVar15;
          uVar16 = *(undefined8 *)PTR__NSHTMLTextDocumentType_110345800;
          uVar6 = 0;
          puStack_150 = puVar5;
          FUN_101abd810();
          *(undefined8 *)(lVar2 + 0x28) = uVar16;
          uVar14 = *(undefined8 *)PTR__NSCharacterEncodingDocumentOption_1103457d0;
          *(undefined8 *)(lVar2 + 0x40) = uVar6;
          *(undefined8 *)(lVar2 + 0x48) = uVar14;
          uStack_148 = uVar12;
          func_0x000100de78a0(puStack_150,uVar12);
          func_0x000107c61174(uVar15);
          func_0x000107c61174(uVar16);
          func_0x000107c61174();
          func_0x000107c5fb04(puVar19);
          func_0x000107c5fb0c();
          *(undefined **)(lVar2 + 0x68) = PTR___sSuN_11034e220;
          *(undefined8 *)(lVar2 + 0x50) = uVar14;
          (*pcVar17)(puVar19,lVar3);
          lVar3 = lVar2;
          FUN_101abde3c(lVar2);
          func_0x000107c61588(lVar2);
          uVar6 = 0x112df8d10;
          func_0x0001000285a8(0x112df8d10,&UNK_10d9c93e8);
          func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar6);
          func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
          uVar12 = uStack_148;
          puVar5 = puStack_150;
          FUN_101abdf60(puStack_150,uStack_148,lVar3,0);
          puVar19 = puStack_150;
          uVar13 = uVar12;
          func_0x0001000b44c0(puStack_150);
          if (puVar5 == (undefined8 *)0x0) {
            func_0x0001000b44c0(puVar19,uVar12);
          }
          else {
            func_0x000107c61174();
            puVar19 = puVar5;
            func_0x000107c5c158();
            func_0x000107c61180();
            puVar7 = puVar19;
            func_0x000107c5faec();
            func_0x000107c61170(puVar19);
            puStack_140 = puVar7;
            puStack_138 = (undefined8 *)uVar13;
            func_0x000107c5eb88(uVar18);
            uVar12 = uVar18;
            puVar9 = PTR___sSSN_11034da80;
            func_0x000107c601f0(uVar18,PTR___sSSN_11034da80,puStack_158);
            (**(code **)(lVar20 + 8))(uVar18,lStack_160);
            func_0x000107c6142c(uVar13);
            puVar4 = puVar9;
            func_0x000107c6142c();
            uVar18 = uVar12 & 0xffffffffffff;
            if (((ulong)puVar9 & 0x2000000000000000) != 0) {
              uVar18 = (ulong)puVar9 >> 0x38 & 0xf;
            }
            if (uVar18 == 0) {
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar5);
              func_0x0001000b44c0(puStack_150,uStack_148);
            }
            else {
              func_0x00010052bbec();
              func_0x000107c61180();
              puVar8 = puVar4;
              func_0x000107c43784();
              func_0x000107c61180();
              func_0x000107c615e8(puVar4);
              func_0x000107c4adac(puVar5);
              puVar4 = &UNK_11043d990;
              func_0x000107c613fc(&UNK_11043d990,0x20,7);
              *(undefined **)(puVar4 + 0x10) = puVar8;
              *(undefined8 **)(puVar4 + 0x18) = puVar5;
              puVar9 = &UNK_11043d9b8;
              func_0x000107c613fc(&UNK_11043d9b8,0x20,7);
              *(code **)(puVar9 + 0x10) = FUN_101abe7b8;
              *(undefined **)(puVar9 + 0x18) = puVar4;
              pcStack_120 = FUN_101abe7c0;
              puStack_140 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
              puStack_138 = (undefined8 *)0x42000000;
              uStack_130 = 0x101abda9c;
              puStack_128 = &UNK_11043d9d0;
              ppuVar10 = &puStack_140;
              puStack_118 = puVar9;
              func_0x000107c60bc4(ppuVar10);
              puVar11 = puStack_118;
              func_0x000107c61174();
              func_0x000107c61174(puVar8);
              func_0x000107c6157c(puVar9);
              func_0x000107c61574(puVar11);
              func_0x000107c429b4(puVar5);
              func_0x000107c61170(puVar8);
              func_0x000107c60bd0(ppuVar10);
              puVar11 = puVar9;
              func_0x000107c61544(puVar9,"",0x6c,0x5b,0x46,1);
              func_0x000107c61574(puVar4);
              func_0x000107c61574(puVar9);
              if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar17 = (code *)SoftwareBreakpoint(1,0x101abe7b8);
                (*pcVar17)();
              }
              func_0x000107c4adac(puVar5);
              puVar4 = &UNK_11043da08;
              func_0x000107c613fc(&UNK_11043da08,0x18,7);
              *(undefined8 **)(puVar4 + 0x10) = puVar5;
              puVar9 = &UNK_11043da30;
              func_0x000107c613fc(&UNK_11043da30,0x20,7);
              *(undefined8 *)(puVar9 + 0x10) = 0x101abe7fc;
              *(undefined **)(puVar9 + 0x18) = puVar4;
              pcStack_120 = FUN_101abe890;
              puStack_140 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
              puStack_138 = (undefined8 *)0x42000000;
              uStack_130 = 0x101abda9c;
              puStack_128 = &UNK_11043da48;
              ppuVar10 = &puStack_140;
              puStack_118 = puVar9;
              func_0x000107c60bc4(ppuVar10);
              puVar11 = puStack_118;
              func_0x000107c61174(puVar5);
              func_0x000107c6157c(puVar9);
              func_0x000107c61574(puVar11);
              func_0x000107c429b4(puVar5);
              func_0x000107c60bd0(ppuVar10);
              func_0x000107c61170(puVar5);
              func_0x0001000b44c0(puStack_150,uStack_148);
              puVar11 = puVar9;
              func_0x000107c61544(puVar9,"",0x6c,0x4d,0x46,1);
              func_0x000107c61574(puVar4);
              func_0x000107c61574(puVar9);
              if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar17 = (code *)SoftwareBreakpoint(1,0x101abe78c);
                (*pcVar17)();
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 101abe7b8; end: 101abe7bf;  */

void FUN_101abe7b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_101abe848(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    uVar3 = 0;
    func_0x000101315130(0);
    puVar4 = &uStack_78;
    func_0x000107c6147c(puVar4,auStack_70,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar3 = uStack_78;
      func_0x000107c43778(uStack_78);
      func_0x000107c61180();
      func_0x000107c61170(uStack_78);
      func_0x000107c5c520(uVar3);
      func_0x000107c61170(uVar3);
    }
  }
  lVar5 = lVar1;
  func_0x000107c43778();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5c520();
  lVar6 = lVar5;
  func_0x000107c4377c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 != 0) {
    func_0x000107c61170(lVar5);
    lVar5 = lVar6;
  }
  func_0x000107c61174(lVar5);
  func_0x000107c4eaec(lVar1);
  puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c43790(param_1);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c3d5c4(uVar2);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 101abe7c0; end: 101abe7df;  */

void FUN_101abe7c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101abe7e0; end: 101abe803;  */

void FUN_101abe7e0(long param_1,long param_2)

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



/* Entry: 101abe804; end: 101abe847;  */

void FUN_101abe804(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112df8cf8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000101abd824(0xff);
  puVar2 = &UNK_10d9c939c;
  func_0x000107c61520(&UNK_10d9c939c,uVar1);
  puRam0000000112df8cf8 = puVar2;
  return;
}



/* Entry: 101abe848; end: 101abe88f;  */

undefined8 FUN_101abe848(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101abe890; end: 101abea13;  */

void FUN_101abe890(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101abea14; end: 101abeb77;  */

void FUN_101abea14(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x656e6f646e616261;
  if (cVar2 != '\x01') {
    uVar1 = 0x6465747065636361;
  }
  uVar3 = 0xe900000000000064;
  if (cVar2 != '\x01') {
    uVar3 = 0xe800000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101abeb78; end: 101abebef;  */

void FUN_101abeb78(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101abebf0; end: 101abec37;  */

void FUN_101abebf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x656e6f646e616261;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6465747065636361;
  }
  uVar2 = 0xe900000000000064;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 101abec38; end: 101abec77;  */

void FUN_101abec38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df8d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c9490;
  func_0x000107c61520(&UNK_10d9c9490,&UNK_11043daf0);
  puRam0000000112df8d20 = puVar1;
  return;
}



/* Entry: 101abec78; end: 101abecbf;  */

void FUN_101abec78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_101abecc0(param_1,param_2,param_3);
  return;
}



/* Entry: 101abecc0; end: 101abedcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101abecc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112df8d80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112df8d88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112df8d90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112df8d98) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112df8da0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112df8da8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112df8db0;
  puVar4 = PTR_PTR_1126a88b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112df8db8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112df8dc0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112df8dc8) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101abedd0; end: 101abef27;  */

/* WARNING: Possible PIC construction at 0x000101abee28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101abeec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101abee2c) */
/* WARNING: Removing unreachable block (ram,0x000101abeecc) */

void FUN_101abedd0(undefined8 param_1)

{
  func_0x000103dbf46c();
  func_0x0001000c10c0("observe(_:presentingOn:)");
  func_0x000107c61180();
  func_0x000100471e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101abef28; end: 101abf07f; -[SCTermsOfUsePromptRouter presentIn:surface:onComplete:] */

void FUN_101abef28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101abf974(param_3,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101abf080; end: 101abf0a7; -[SCTermsOfUsePromptRouter containerWasDismissed] */

void FUN_101abf080(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101abefa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101abf0a8; end: 101abf457;  */

void FUN_101abf0a8(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  FUN_101abcd74();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_101abc1ac();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar3 = 0;
    func_0x000101abc7b8();
    FUN_101abfff4(param_1 + *(int *)(lVar3 + 0x14),lVar7);
    lVar3 = lVar7;
    func_0x000107c614c4(lVar7,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar8 + 0x20))(lVar5,lVar7,lVar1);
      func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61618();
      if (param_3 == 0) {
        (**(code **)(lVar8 + 0x38))(puVar6,4,5,lVar1);
        func_0x0001000285a8(0x112df8dd0,&UNK_10d9c94c0);
        puVar4 = puVar6;
        func_0x000100854cb0(puVar6);
        func_0x000103dbf524();
        func_0x000107c61170(param_2);
        func_0x000107c61574(puVar4);
        FUN_101abf918(puVar6);
      }
      else {
        func_0x000101abf2d0(lVar5,param_3,param_4);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_2);
      }
      (**(code **)(lVar8 + 8))(lVar5,lVar1);
    }
    else {
      if ((int)lVar3 == 1) {
        FUN_101ac0038();
      }
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 101abf458; end: 101abf5bf;  */

undefined8
FUN_101abf458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5ed90();
  func_0x000107c3ede4(param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 101abf5c0; end: 101abf6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101abf5c0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar3 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112df8d88);
    *(undefined8 *)(lVar3 + _DAT_112df8d88) = 0;
    func_0x000107c61170();
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
  lVar3 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    pcVar5 = *(code **)(lVar3 + _DAT_112df8da0);
    if (pcVar5 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar4 = ((undefined8 *)(lVar3 + _DAT_112df8da0))[1];
      func_0x000100b64c10(pcVar5,uVar4);
      func_0x000107c61170(lVar3);
      (*pcVar5)();
      func_0x00010058d43c(pcVar5,uVar4);
    }
  }
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112df8da0);
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x00010058d43c(uVar4,uVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101abf6dc; end: 101abf73b; -[SCTermsOfUsePromptRouter init] */

void FUN_101abf6dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TermsOfUsePromptImplementation.TermsOfUsePromptRouter",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101abf708);
  (*pcVar1)();
}



/* Entry: 101abf73c; end: 101abf7f7; -[SCTermsOfUsePromptRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101abf758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101abf778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101abf7b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101abf77c) */
/* WARNING: Removing unreachable block (ram,0x000101abf75c) */
/* WARNING: Removing unreachable block (ram,0x000101abf7bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101abf73c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df8db8));
  return;
}



/* Entry: 101abf7f8; end: 101abf917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101abf7f8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_68;
  long lStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  lVar2 = param_2;
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_101abbf04();
  lVar1 = _DAT_112df8e20;
  ppuStack_38 = &PTR_DAT_11043d838;
  uVar4 = 0x112df8e00;
  auStack_58[0] = param_1;
  uStack_40 = uVar3;
  func_0x0001000285a8(0x112df8e00,&UNK_10d9c94e8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_2 + lVar1) = uVar4;
  lVar1 = _DAT_112df8e28;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_2 + lVar1) = uVar4;
  *(undefined8 *)(param_2 + _DAT_112df8e30) = 0;
  *(undefined8 *)(param_2 + _DAT_112df8e38) = 0;
  *(undefined8 *)(param_2 + _DAT_112df8e40) = 0;
  *(undefined8 *)(param_2 + _DAT_112df8e48) = 0;
  FUN_101ac01b4(auStack_58,param_2 + _DAT_112df8e18);
  plVar5 = &lStack_68;
  lStack_68 = param_2;
  lStack_60 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(auStack_58);
  return plVar5;
}



/* Entry: 101abf918; end: 101abf953;  */

undefined8 FUN_101abf918(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101abcd74();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101abf954; end: 101abf973;  */

void FUN_101abf954(void)

{
  func_0x000107c61168(&PTR_PTR_1127f32a8);
  return;
}



/* Entry: 101abf974; end: 101abffdb;  */

/* WARNING: Possible PIC construction at 0x000101abfc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101abfca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101abfd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101abfd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101abfd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101abffa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101abfd54) */
/* WARNING: Removing unreachable block (ram,0x000101abfd34) */
/* WARNING: Removing unreachable block (ram,0x000101abfd18) */
/* WARNING: Removing unreachable block (ram,0x000101abfca8) */
/* WARNING: Removing unreachable block (ram,0x000101abfc50) */
/* WARNING: Removing unreachable block (ram,0x000101abffac) */
/* WARNING: Removing unreachable block (ram,0x000101abffb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101abf974(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long alStack_b0 [4];
  long lStack_90;
  long *aplStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar4 = 0;
  FUN_101abcd74();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = 0;
  func_0x000101abc7b8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  plVar14 = (long *)((long)alStack_b0 +
                    (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                    (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  puVar15 = &UNK_11043db68;
  func_0x000107c613fc(&UNK_11043db68,0x18,7);
  *(long *)(puVar15 + 0x10) = param_4;
  if ((*(long *)(param_3 + _DAT_112df8d80) == 0) && (*(long *)(param_3 + _DAT_112df8d88) == 0)) {
    lVar13 = *(long *)(param_3 + _DAT_112df8db8);
    func_0x000107c60bc4(param_4);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar13 != 0) {
      lVar5 = lVar13;
      alStack_b0[1] = param_1;
      func_0x000107c4ab08();
      func_0x000107c61180();
      alStack_b0[3] = lVar5;
      lStack_90 = lVar13;
      FUN_101abe078();
      if (lVar13 == 0) {
        lVar4 = alStack_b0[3];
        func_0x000107c5dd14();
        aplStack_88[0] = (long *)CONCAT44(aplStack_88[0]._4_4_,(int)lVar4);
        puVar9 = PTR___ss5Int32VN_11034ee20;
        puVar11 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
        func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                            PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
        uVar16 = *(undefined8 *)(param_3 + _DAT_112df8db0);
        uVar10 = 0xd000000000000012;
        func_0x000107c5fadc(0xd000000000000012,0x800000010eff61c0);
        uVar7 = 0x6e776f6e6b6e75;
        if (param_2 == 1) {
          uVar7 = 0x736168705f706866;
        }
        uVar12 = 0xe700000000000000;
        if (param_2 == 1) {
          uVar12 = 0xed0000656e6f5f65;
        }
        uVar1 = 0xed00006f77745f65;
        uVar3 = 0x736168705f706866;
        if (param_2 != 2) {
          uVar1 = uVar12;
          uVar3 = uVar7;
        }
        uVar7 = 0x6e65706f5f707061;
        if (param_2 != 0) {
          uVar7 = uVar3;
        }
        uVar12 = 0xe800000000000000;
        if (param_2 != 0) {
          uVar12 = uVar1;
        }
        func_0x000107c5fadc(uVar7,uVar12);
        func_0x000107c6142c(uVar12);
        func_0x000107c5fadc(puVar9,puVar11);
        func_0x0001056e4798(uVar16,uVar10,uVar7,puVar9,1);
        func_0x000107c6142c(puVar11);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(puVar9);
        (**(code **)(param_4 + 0x10))(param_4);
      }
      else {
        alStack_b0[2] = *(undefined8 *)(param_3 + _DAT_112df8db0);
        lVar6 = 0;
        alStack_b0[0] = lVar13;
        FUN_101abbf04();
        lVar5 = lVar6;
        func_0x000107c613fc();
        lVar13 = lStack_90;
        *(long *)(lVar5 + _DAT_112df8970) = lStack_90;
        *(long *)(lVar5 + _DAT_112df8978) = alStack_b0[3];
        *(long *)(lVar5 + _DAT_112df8980) = param_2;
        *(long *)(lVar5 + _DAT_112df8988) = alStack_b0[2];
        iVar2 = *(int *)(lVar4 + 0x14);
        uVar7 = 0;
        FUN_101abc1ac(0);
        func_0x000107c6159c((long)plVar14 + (long)iVar2,uVar7,2);
        lVar4 = alStack_b0[0];
        *plVar14 = alStack_b0[0];
        func_0x000107c615f0(lVar13);
        func_0x000107c61174();
        func_0x000107c61174();
        alStack_b0[0] = lVar4;
        func_0x000107c61174(alStack_b0[2]);
        plVar8 = plVar14;
        func_0x000103dbf4dc();
        ppuStack_68 = &PTR_DAT_11043d838;
        uVar7 = 0;
        aplStack_88[0] = plVar8;
        lStack_70 = lVar6;
        FUN_101ac167c(0);
        func_0x000107c610f8();
        func_0x0001000c6518(aplStack_88,lVar6);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
        plVar14 = (long *)((long)plVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
        (**(code **)(extraout_x12 + 0x10))(plVar14);
        lVar4 = *plVar14;
        func_0x000107c6157c(plVar8);
        FUN_101abf7f8(lVar4,uVar7);
        func_0x0001000834e4(aplStack_88);
        puVar15 = *(undefined **)(lVar4 + _DAT_112df8e20);
        func_0x000107c6157c(puVar15);
        func_0x000103dbf524();
      }
      goto code_r0x000107c61574;
    }
    uVar12 = *(undefined8 *)(param_3 + _DAT_112df8db0);
    uVar16 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010eff61a0);
    uVar7 = 0xed00006f77745f65;
    uVar10 = 0x736168705f706866;
    if (param_2 != 2) {
      uVar7 = 0xe700000000000000;
      uVar10 = 0x6e776f6e6b6e75;
    }
    uVar1 = 0xed0000656e6f5f65;
    uVar3 = 0x736168705f706866;
    if (param_2 != 1) {
      uVar1 = uVar7;
      uVar3 = uVar10;
    }
    uVar7 = 0x6e65706f5f707061;
    if (param_2 != 0) {
      uVar7 = uVar3;
    }
    uVar10 = 0xe800000000000000;
    if (param_2 != 0) {
      uVar10 = uVar1;
    }
    func_0x000107c5fadc(uVar7,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x0001056e4798(uVar12,uVar16,uVar7,0,1);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar7);
  }
  else {
    func_0x000107c60bc4(param_4);
  }
  (**(code **)(param_4 + 0x10))(param_4);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar15);
  return;
}



/* Entry: 101abffdc; end: 101abfff3;  */

void FUN_101abffdc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101abffe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101abfff4; end: 101ac0037;  */

undefined8 FUN_101abfff4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101abc1ac();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101ac0038; end: 101ac017f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac0038(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar5 = *(long *)(unaff_x20 + _DAT_112df8d80);
  if (lVar5 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112df8d80) = 0;
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112df8d90);
    *(undefined8 *)(unaff_x20 + _DAT_112df8d90) = 0;
    func_0x000107c61574(uVar1);
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112df8d98);
    *(undefined8 *)(unaff_x20 + _DAT_112df8d98) = 0;
    func_0x000107c61170(uVar1);
    uVar1 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112df8da8);
    *(undefined8 *)(unaff_x20 + _DAT_112df8da8) = uVar1;
    func_0x000107c61574(uVar4);
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112df8d88);
    *(long *)(unaff_x20 + _DAT_112df8d88) = lVar5;
    func_0x000107c615f0(lVar5);
    func_0x000107c615e8(uVar1);
    puVar2 = &UNK_11043db90;
    func_0x000107c613fc(&UNK_11043db90,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_40 = 0x101ac0190;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_11043dc48;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c41864(lVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 101ac0180; end: 101ac01b3;  */

undefined8 FUN_101ac0180(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5ed90();
  func_0x000107c3ede4(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101ac01b4; end: 101ac01f7;  */

long FUN_101ac01b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101ac01f8; end: 101ac032b;  */

void FUN_101ac01f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar3 = uStack_48;
  uVar1 = 0x112df8e10;
  func_0x0001000285a8(0x112df8e10,&UNK_10da65b50);
  func_0x000107c610f8();
  func_0x00010017da58(uVar3,uVar1);
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c5c818();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000107c61174(puVar2);
  func_0x000100083b20(&uStack_50);
  uVar3 = 0;
  FUN_101abf954(0);
  func_0x000107c610f8();
  FUN_101abecc0(uVar1,puVar2,uStack_50,uVar3);
  uVar3 = 0;
  func_0x0001002ac020(0);
  func_0x000107c610f8();
  func_0x00010242959c(uVar1,uVar3);
  func_0x000107c61170(puVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ac032c; end: 101ac0347;  */

void FUN_101ac032c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  uVar3 = uStack_48;
  uVar1 = 0x112df8e10;
  func_0x0001000285a8(0x112df8e10,&UNK_10da65b50);
  func_0x000107c610f8();
  func_0x00010017da58(uVar3,uVar1);
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c5c818();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000107c61174(puVar2);
  func_0x000100083b20(&uStack_50);
  uVar3 = 0;
  FUN_101abf954(0);
  func_0x000107c610f8();
  FUN_101abecc0(uVar1,puVar2,uStack_50,uVar3);
  uVar3 = 0;
  func_0x0001002ac020(0);
  func_0x000107c610f8();
  func_0x00010242959c(uVar1,uVar3);
  func_0x000107c61170(puVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ac0348; end: 101ac03a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ac0348(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112df8e30;
  lVar2 = *(long *)(unaff_x20 + _DAT_112df8e30);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_101ac03a8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 101ac03a8; end: 101ac048b;  */

undefined * FUN_101ac03a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  func_0x000107c61174(puVar1);
  func_0x000107c59c74();
  func_0x000107c56ba8(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010eff6280);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 101ac048c; end: 101ac0867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ac048c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112df8e38;
  lVar2 = *(long *)(unaff_x20 + _DAT_112df8e38);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x000101ac04f0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 101ac0868; end: 101ac0883; -[_TtC30TermsOfUsePromptImplementation30TermsOfUsePromptViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac0868(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lStack_90;
  long lStack_88;
  
  func_0x000107c61174(param_3);
  func_0x000101ac0774();
  lVar2 = param_1;
  func_0x000107c614f0();
  lStack_90 = param_1;
  lStack_88 = lVar2;
  func_0x000107c61154(&lStack_90,PTR_s_viewDidLoad_112684cd8);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1004);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  lVar2 = 0x112d360b0;
  FUN_101ac17e0(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 5;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  lVar4 = lVar2;
  func_0x000101ac05a4();
  *(long *)(lVar2 + 0x20) = lVar4;
  func_0x000101ac068c();
  *(long *)(lVar2 + 0x28) = lVar4;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  uVar5 = 0;
  FUN_101ac1858(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar4 = lVar2;
  func_0x000107c5fc48(lVar2,uVar5);
  func_0x000107c61574(lVar2);
  func_0x000107c45784();
  func_0x000107c61170(lVar4);
  func_0x000107c52b2c(puVar3);
  func_0x000107c59594(0x4020000000000000,puVar3);
  func_0x000107c61174();
  func_0x000107c5a050();
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1008);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  FUN_101ac0348();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac100c);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  func_0x000101ac048c();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1010);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = 0x112d360b8;
  FUN_101ac17e0(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0x15;
  *(undefined8 *)(lVar2 + 0x10) = 10;
  lVar4 = _DAT_112df8e30;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112df8e30);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1014);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c4ac04();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar7;
  func_0x000107c5cbe4(lVar7);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar8 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x20) = uVar8;
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1018);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar8 = uVar5;
  func_0x000107c40284(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar2 + 0x28) = uVar8;
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac101c);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar8 = uVar5;
  func_0x000107c40284(0xc038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar2 + 0x30) = uVar8;
  lVar6 = _DAT_112df8e38;
  uVar8 = *(undefined8 *)(param_1 + _DAT_112df8e38);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c3ec1c(uVar9);
  func_0x000107c61180();
  uVar5 = uVar8;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar7 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar8 = uVar5;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar2 + 0x40) = uVar8;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1024);
      (*pcVar1)();
    }
    lVar7 = lVar4;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar8 = uVar5;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar2 + 0x48) = uVar8;
    uVar8 = *(undefined8 *)(param_1 + lVar6);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar10 = puVar3;
    func_0x000107c5cbe4(puVar3);
    func_0x000107c61180();
    uVar5 = uVar8;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar10);
    *(undefined8 *)(lVar2 + 0x50) = uVar5;
    puVar10 = puVar3;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1028);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar11 = puVar10;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar2 + 0x58) = puVar11;
    puVar10 = puVar3;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac102c);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar11 = puVar10;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar2 + 0x60) = puVar11;
    puVar10 = puVar3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = param_1;
      func_0x000107c4ac04(param_1);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar6 = lVar4;
      func_0x000107c3ec1c(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      puVar12 = puVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar6);
      *(undefined **)(lVar2 + 0x68) = puVar12;
      uVar5 = 0;
      FUN_101ac1858(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = lVar2;
      func_0x000107c5fc48(lVar2,uVar5);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar11);
      func_0x000107c61170(lVar4);
      func_0x000101ac1030();
      func_0x000107c61170(puVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1030);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1020);
  (*pcVar1)();
}



/* Entry: 101ac0884; end: 101ac1307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac0884(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1004);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  lVar2 = 0x112d360b0;
  FUN_101ac17e0(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 5;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  lVar4 = lVar2;
  func_0x000101ac05a4();
  *(long *)(lVar2 + 0x20) = lVar4;
  func_0x000101ac068c();
  *(long *)(lVar2 + 0x28) = lVar4;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  uVar5 = 0;
  FUN_101ac1858(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar4 = lVar2;
  func_0x000107c5fc48(lVar2,uVar5);
  func_0x000107c61574(lVar2);
  func_0x000107c45784();
  func_0x000107c61170(lVar4);
  func_0x000107c52b2c(puVar3);
  func_0x000107c59594(0x4020000000000000,puVar3);
  func_0x000107c61174();
  func_0x000107c5a050();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1008);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  FUN_101ac0348();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac100c);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  func_0x000101ac048c();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1010);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = 0x112d360b8;
  FUN_101ac17e0(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0x15;
  *(undefined8 *)(lVar2 + 0x10) = 10;
  lVar4 = _DAT_112df8e30;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112df8e30);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1014);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c4ac04();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar7;
  func_0x000107c5cbe4(lVar7);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar8 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x20) = uVar8;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1018);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar8 = uVar5;
  func_0x000107c40284(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar2 + 0x28) = uVar8;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac101c);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar8 = uVar5;
  func_0x000107c40284(0xc038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar2 + 0x30) = uVar8;
  lVar6 = _DAT_112df8e38;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112df8e38);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c3ec1c(uVar9);
  func_0x000107c61180();
  uVar5 = uVar8;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar7 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar8 = uVar5;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar2 + 0x40) = uVar8;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1024);
      (*pcVar1)();
    }
    lVar7 = lVar4;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar8 = uVar5;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar2 + 0x48) = uVar8;
    uVar8 = *(undefined8 *)(unaff_x20 + lVar6);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar10 = puVar3;
    func_0x000107c5cbe4(puVar3);
    func_0x000107c61180();
    uVar5 = uVar8;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar10);
    *(undefined8 *)(lVar2 + 0x50) = uVar5;
    puVar10 = puVar3;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1028);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar11 = puVar10;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar2 + 0x58) = puVar11;
    puVar10 = puVar3;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac102c);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar11 = puVar10;
    func_0x000107c40284(0xc038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar2 + 0x60) = puVar11;
    puVar10 = puVar3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = unaff_x20;
      func_0x000107c4ac04(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      lVar6 = lVar4;
      func_0x000107c3ec1c(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      puVar12 = puVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar6);
      *(undefined **)(lVar2 + 0x68) = puVar12;
      uVar5 = 0;
      FUN_101ac1858(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = lVar2;
      func_0x000107c5fc48(lVar2,uVar5);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar11);
      func_0x000107c61170(lVar4);
      func_0x000101ac1030();
      func_0x000107c61170(puVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1030);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1020);
  (*pcVar1)();
}



/* Entry: 101ac1308; end: 101ac132f; -[_TtC30TermsOfUsePromptImplementation30TermsOfUsePromptViewController viewDidLoad] */

void FUN_101ac1308(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ac0884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ac1330; end: 101ac14cf;  */

void FUN_101ac1330(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2;
    FUN_101ac0348();
    func_0x000107c61170(param_2);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c59c6c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101ac14d0; end: 101ac14d7; -[_TtC30TermsOfUsePromptImplementation30TermsOfUsePromptViewController handleAcceptTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac14d0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_101abcd74();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,2,5,lVar1);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_101abf918(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101ac14d8; end: 101ac14df; -[_TtC30TermsOfUsePromptImplementation30TermsOfUsePromptViewController handleCloseTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac14d8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_101abcd74();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,3,5,lVar1);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_101abf918(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101ac14e0; end: 101ac1593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac14e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_101abcd74();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_3,5,lVar1);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_101abf918(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101ac1594; end: 101ac15f3; -[_TtC30TermsOfUsePromptImplementation30TermsOfUsePromptViewController initWithNibName:bundle:] */

void FUN_101ac1594(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TermsOfUsePromptImplementation.TermsOfUsePromptViewController",0x3d,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac15c0);
  (*pcVar1)();
}



/* Entry: 101ac15f4; end: 101ac167b; -[_TtC30TermsOfUsePromptImplementation30TermsOfUsePromptViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ac1640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ac1660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ac1644) */
/* WARNING: Removing unreachable block (ram,0x000101ac1664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac15f4(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112df8e18);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112df8e20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112df8e28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df8e30));
  return;
}



/* Entry: 101ac167c; end: 101ac169b;  */

void FUN_101ac167c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f33b0);
  return;
}



/* Entry: 101ac169c; end: 101ac17df; -[_TtC30TermsOfUsePromptImplementation30TermsOfUsePromptViewController textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101ac169c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  FUN_101abcd74();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(lVar3,param_4);
  if (param_7 == 0) {
    (**(code **)(lVar4 + 0x10))(puVar2,lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))(puVar2,0,5,lVar1);
    func_0x000107c61174(param_1);
    func_0x0001002a64a8(puVar2);
    FUN_101abf918(puVar2);
    (**(code **)(lVar4 + 8))(lVar3,lVar1);
    func_0x000107c61170(param_1);
  }
  else {
    (**(code **)(lVar4 + 8))(lVar3,lVar1);
  }
  return param_7 != 0;
}



/* Entry: 101ac17e0; end: 101ac1857;  */

void FUN_101ac17e0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101ac1858(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101ac1858; end: 101ac1897;  */

void FUN_101ac1858(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101ac1898; end: 101ac18a7;  */

void FUN_101ac1898(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    FUN_101ac0348();
    func_0x000107c61170(lVar2);
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c59c6c(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 101ac18a8; end: 101ac18e7;  */

void FUN_101ac18a8(void)

{
  func_0x000101ac1438();
  return;
}



/* Entry: 101ac18e8; end: 101ac19af;  */

/* WARNING: Possible PIC construction at 0x000101ac1980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ac1994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ac1984) */
/* WARNING: Removing unreachable block (ram,0x000101ac1998) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac18e8(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112df8e90);
  *(undefined **)(unaff_x20 + _DAT_112df8e90) = puVar2;
  func_0x000107c61174();
  func_0x000107c615e8(uVar3);
  pcVar1 = *(code **)(unaff_x20 + _DAT_112df8e80);
  func_0x000107c61174(puVar2);
  (*pcVar1)(param_1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101ac19b0; end: 101ac1a0f; -[_TtC30TermsOfUsePromptImplementation21TermsOfUseWebLauncher init] */

void FUN_101ac19b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TermsOfUsePromptImplementation.TermsOfUseWebLauncher",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac19dc);
  (*pcVar1)();
}



/* Entry: 101ac1a10; end: 101ac1a6f; -[_TtC30TermsOfUsePromptImplementation21TermsOfUseWebLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac1a10(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112df8e78));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112df8e80 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112df8e88 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112df8e90));
  return;
}



/* Entry: 101ac1a70; end: 101ac1a8f;  */

void FUN_101ac1a70(void)

{
  func_0x000107c61168(&PTR_PTR_1127f34a0);
  return;
}



/* Entry: 101ac1a90; end: 101ac1bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac1a90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = &UNK_11043dcf0;
  func_0x000107c613fc(&UNK_11043dcf0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  lVar4 = *(long *)(unaff_x20 + _DAT_112df8e78);
  func_0x000107c6157c(puVar1);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    FUN_101ac1bec(puVar1);
    func_0x000107c61578(puVar1,2);
  }
  else {
    func_0x000107c61574(puVar1);
    puVar2 = &UNK_11043dd18;
    func_0x000107c613fc(&UNK_11043dd18,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_101ac1c8c;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    pcStack_40 = FUN_101ac1c94;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_11043dd30;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    puVar2 = puStack_38;
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c5e2a4(lVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 101ac1bc4; end: 101ac1beb; -[_TtC30TermsOfUsePromptImplementation21TermsOfUseWebLauncher didDismiss] */

void FUN_101ac1bc4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ac1a90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ac1bec; end: 101ac1c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac1bec(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112df8e90;
  if (param_1 != 0) {
    uVar3 = 0;
    if (*(long *)(param_1 + _DAT_112df8e90) != 0) {
      func_0x000107c41864();
      uVar3 = *(undefined8 *)(param_1 + lVar2);
    }
    *(undefined8 *)(param_1 + lVar2) = 0;
    func_0x000107c615e8(uVar3);
    pcVar1 = *(code **)(param_1 + _DAT_112df8e88);
    uVar3 = ((undefined8 *)(param_1 + _DAT_112df8e88))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar1)();
    func_0x000107c61170(param_1);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 101ac1c8c; end: 101ac1c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac1c8c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112df8e90;
  if (lVar3 != 0) {
    uVar4 = 0;
    if (*(long *)(lVar3 + _DAT_112df8e90) != 0) {
      func_0x000107c41864();
      uVar4 = *(undefined8 *)(lVar3 + lVar2);
    }
    *(undefined8 *)(lVar3 + lVar2) = 0;
    func_0x000107c615e8(uVar4);
    pcVar1 = *(code **)(lVar3 + _DAT_112df8e88);
    uVar4 = ((undefined8 *)(lVar3 + _DAT_112df8e88))[1];
    func_0x000107c6157c(uVar4);
    (*pcVar1)();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 101ac1c94; end: 101ac1cb3;  */

void FUN_101ac1c94(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ac1cb4; end: 101ac1ccf;  */

void FUN_101ac1cb4(long param_1,long param_2)

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



/* Entry: 101ac1cd0; end: 101ac1f2f;  */

undefined1  [16] FUN_101ac1cd0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010eff63d0);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010eff6390);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac1d98);
  (*pcVar1)();
}



/* Entry: 101ac1f30; end: 101ac1faf;  */

undefined1  [16] FUN_101ac1f30(void)

{
  return ZEXT816(0x11043de60);
}



/* Entry: 101ac1fb0; end: 101ac2073;  */

void FUN_101ac1fb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112df8ec8;
  func_0x0001000285a8(0x112df8ec8,&UNK_10d9c9760);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ac2074; end: 101ac2077;  */

void FUN_101ac2074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df8ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c9770;
  func_0x000107c61520(&UNK_10d9c9770,&UNK_11043e0a0);
  puRam0000000112df8ed8 = puVar1;
  return;
}



/* Entry: 101ac2078; end: 101ac20e3;  */

void FUN_101ac2078(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df8ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c9770;
  func_0x000107c61520(&UNK_10d9c9770,&UNK_11043e0a0);
  puRam0000000112df8ed8 = puVar1;
  return;
}



/* Entry: 101ac20e4; end: 101ac20e7;  */

void FUN_101ac20e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df8ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c9818;
  func_0x000107c61520(&UNK_10d9c9818,&UNK_11043e130);
  puRam0000000112df8ef0 = puVar1;
  return;
}



/* Entry: 101ac20e8; end: 101ac2153;  */

void FUN_101ac20e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df8ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c9818;
  func_0x000107c61520(&UNK_10d9c9818,&UNK_11043e130);
  puRam0000000112df8ef0 = puVar1;
  return;
}



/* Entry: 101ac2154; end: 101ac21d7;  */

void FUN_101ac2154(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 101ac21d8; end: 101ac21db;  */

void FUN_101ac21d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df8f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c9888;
  func_0x000107c61520(&UNK_10d9c9888,&UNK_11043e130);
  puRam0000000112df8f08 = puVar1;
  return;
}



/* Entry: 101ac21dc; end: 101ac221b;  */

void FUN_101ac21dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df8f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c9888;
  func_0x000107c61520(&UNK_10d9c9888,&UNK_11043e130);
  puRam0000000112df8f08 = puVar1;
  return;
}



/* Entry: 101ac221c; end: 101ac221f;  */

void FUN_101ac221c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df8f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c9840;
  func_0x000107c61520(&UNK_10d9c9840,&UNK_11043e130);
  puRam0000000112df8f10 = puVar1;
  return;
}



/* Entry: 101ac2220; end: 101ac225f;  */

void FUN_101ac2220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df8f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c9840;
  func_0x000107c61520(&UNK_10d9c9840,&UNK_11043e130);
  puRam0000000112df8f10 = puVar1;
  return;
}


