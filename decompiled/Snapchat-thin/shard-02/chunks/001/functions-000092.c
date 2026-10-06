/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101930d64; end: 101930dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101930d64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dd5de0);
  func_0x000107c6157c(uVar1);
  func_0x000100075034(param_2,0,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101930dc4; end: 101930dcf;  */

void FUN_101930dc4(undefined1 *param_1)

{
  *param_1 = 2;
  return;
}



/* Entry: 101930dd0; end: 101930e1b;  */

void FUN_101930dd0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101930e1c; end: 101930e9f; -[_TtC33BitmojiClientRenderConfigProvider33BitmojiClientRenderConfigProvider initWithConfigProvider:memoryPressureState:renderStyleProvider:contentDelivery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101930e1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c614f0(param_3);
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  ppuVar2 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  lVar8 = param_1;
  func_0x000107c614f0();
  lVar5 = _DAT_112dd5de0;
  puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
  func_0x0001000285a8(0x112dd5dd0,&UNK_10d998790);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined ***)(param_1 + lVar5) = ppuVar2;
  *(undefined8 *)(param_1 + _DAT_112dd5df8) = 0;
  *(undefined8 *)(param_1 + _DAT_112dd5dd8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112dd5de8) = param_5;
  *(undefined8 *)(param_1 + _DAT_112dd5df0) = param_6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar8;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  plVar3 = &lStack_70;
  func_0x000107c61154(plVar3,puVar4);
  puVar4 = &UNK_110413f88;
  func_0x000107c613fc(&UNK_110413f88,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,plVar3);
  func_0x000107c61174();
  lVar5 = param_4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    lVar8 = 0;
  }
  else {
    pcStack_80 = FUN_101931a14;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101930dd0;
    puStack_88 = &UNK_110413fa0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar1 = puStack_78;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar1);
    lVar8 = lVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar5);
  }
  uVar7 = *(undefined8 *)((long)plVar3 + _DAT_112dd5df8);
  *(long *)((long)plVar3 + _DAT_112dd5df8) = lVar8;
  func_0x000107c61170(plVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar7);
  return plVar3;
}



/* Entry: 101930ea0; end: 10193106f; -[_TtC33BitmojiClientRenderConfigProvider33BitmojiClientRenderConfigProvider offscreenRenderingLensIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101930ea0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112dd5dd8);
  func_0x000107c61174();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efc1390);
  uVar2 = 0x3239353432383336;
  uVar3 = 0xeb00000000393339;
  func_0x000107c5fadc(0x3239353432383336,0xeb00000000393339);
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  if (lVar4 == 0) {
    lVar4 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 101931070; end: 10193132b;  */

/* WARNING: Removing unreachable block (ram,0x0001019311b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101931070(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long unaff_x20;
  ulong uVar14;
  undefined1 auVar15 [16];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar10 = 0;
  lVar13 = *(long *)(unaff_x20 + _DAT_112dd5dd8);
  uVar11 = 0x800000010efc1470;
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c);
  puVar4 = PTR_PTR_1126af7d0;
  func_0x000107c610f8(PTR_PTR_1126af7d0);
  func_0x000107c453e4();
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar4);
  if (lVar13 != 0) {
    lVar5 = lVar13;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar5);
      uVar1 = (uint)(uVar11 >> 0x20);
      uVar12 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar12 == 0) {
          if ((uVar11 & 0xff000000000000) == 0) {
LAB_1019311c0:
            func_0x00010006c090(lVar6,uVar11);
            goto LAB_1019311d0;
          }
        }
        else if ((long)(int)lVar6 == lVar6 >> 0x20) goto LAB_1019311c0;
      }
      else if ((uVar12 != 2) || (*(long *)(lVar6 + 0x10) == *(long *)(lVar6 + 0x18)))
      goto LAB_1019311c0;
      func_0x000107c610f8(PTR_PTR_1126a7e28);
      func_0x00010006c00c(lVar6,uVar11);
      lVar5 = lVar6;
      FUN_101931954(lVar6,uVar11);
      func_0x00010006c090(lVar6,uVar11);
      if (lVar5 == 0) {
        func_0x00010006c090(lVar6,uVar11);
      }
      else {
        lVar7 = lVar5;
        func_0x000107c4130c();
        func_0x000107c61180();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10193132c);
          (*pcVar2)();
        }
        uStack_a0 = param_1;
        uStack_98 = param_2;
        func_0x000107c61434(param_2);
        puVar8 = &uStack_a0;
        func_0x000107c6061c(puVar8,PTR___sSSN_11034da80);
        lVar9 = lVar7;
        func_0x000107c3ac74();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        func_0x000107c615e8(puVar8);
        if (lVar9 == 0) {
          func_0x000107c61170(lVar5);
          func_0x00010006c090(lVar6,uVar11);
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          func_0x000107c60234(&uStack_a0,lVar9);
          func_0x000107c61170(lVar5);
          func_0x00010006c090(lVar6,uVar11);
          func_0x000107c615e8(lVar9);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          func_0x00010006e7f4(&uStack_80);
        }
        else {
          func_0x000107c6147c(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6)
          ;
          if ((uVar10 & 1) != 0) {
            uVar10 = uStack_b0 & 0xffffffffffff;
            if ((uStack_a8 & 0x2000000000000000) != 0) {
              uVar10 = uStack_a8 >> 0x38 & 0xf;
            }
            uVar11 = uStack_b0;
            uVar14 = uStack_a8;
            if (uVar10 != 0) goto LAB_1019311d4;
            func_0x000107c6142c(uStack_a8);
          }
        }
      }
    }
  }
LAB_1019311d0:
  uVar11 = 0;
  uVar14 = 0xe000000000000000;
LAB_1019311d4:
  func_0x000107c61170(lVar13);
  auVar15._8_8_ = uVar14;
  auVar15._0_8_ = uVar11;
  return auVar15;
}



/* Entry: 10193132c; end: 1019313c7; -[_TtC33BitmojiClientRenderConfigProvider33BitmojiClientRenderConfigProvider getLensIdForRenderSurface:rendererId:] */

void FUN_10193132c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  func_0x000101930f74(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1019313c8; end: 101931427; -[_TtC33BitmojiClientRenderConfigProvider33BitmojiClientRenderConfigProvider isUnderMemoryPressure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1019313c8(long param_1)

{
  undefined8 uVar1;
  char cStack_21;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dd5de0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&cStack_21);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  return cStack_21 != '\0';
}



/* Entry: 101931428; end: 10193165b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101931428(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long unaff_x20;
  ulong uVar6;
  char cStack_51;
  
  func_0x000109006644();
  if ((param_4 == 0) || (param_5 != 4)) {
    if (param_5 == 4) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112dd5de8);
      if (lVar3 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          lVar2 = lVar3;
          func_0x000107c40ee4();
          func_0x000107c615e8(lVar3);
          if (lVar2 == 3) {
            return 0;
          }
        }
      }
LAB_101931530:
      uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dd5de0);
      func_0x000107c6157c(uVar1);
      func_0x0001000c74f0(&cStack_51);
      func_0x000107c61574(uVar1);
      if (cStack_51 != '\0') {
        return 1;
      }
      if (param_5 == 3) {
        iVar5 = (int)*(undefined8 *)(unaff_x20 + _DAT_112dd5dd8);
        uVar1 = 0xd000000000000026;
        func_0x000107c5fadc(0xd000000000000026,0x800000010efc13c0);
        func_0x000107c3ebd4();
        func_0x000107c61170(uVar1);
        if (iVar5 == 0) {
          return 4;
        }
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_112dd5df0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        return 3;
      }
      puVar4 = PTR_PTR_1126b9680;
      func_0x000107c61168();
      iVar5 = (int)puVar4;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c49e50();
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar3);
      if (iVar5 == 0) {
        return 3;
      }
      return 2;
    }
    if (param_5 == 3) {
      uVar6 = *(ulong *)(unaff_x20 + _DAT_112dd5dd8);
      uVar1 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010efc13f0);
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar1);
      if ((uVar6 & 1) != 0) goto LAB_101931530;
    }
  }
  return 0;
}



/* Entry: 10193165c; end: 1019316f3; -[_TtC33BitmojiClientRenderConfigProvider33BitmojiClientRenderConfigProvider getClientRenderGatingForAvatarId:friendAvatarId:featureAttribution:] */

undefined8 FUN_10193165c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = param_2;
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_101931428(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  return param_3;
}



/* Entry: 1019316f4; end: 101931753; -[_TtC33BitmojiClientRenderConfigProvider33BitmojiClientRenderConfigProvider init] */

void FUN_1019316f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiClientRenderConfigProvider.BitmojiClientRenderConfigProvider",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101931720);
  (*pcVar1)();
}



/* Entry: 101931754; end: 1019317bb; -[_TtC33BitmojiClientRenderConfigProvider33BitmojiClientRenderConfigProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101931790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101931794) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101931754(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd5de0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd5dd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dd5df8));
  return;
}



/* Entry: 1019317bc; end: 101931913;  */

int FUN_1019317bc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101931838;
        goto LAB_10193181c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10193181c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101931838:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101931914; end: 101931953;  */

void FUN_101931914(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd5e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d998814;
  func_0x000107c61520(&UNK_10d998814,&UNK_110413f68);
  puRam0000000112dd5e28 = puVar1;
  return;
}



/* Entry: 101931954; end: 101931a13;  */

long FUN_101931954(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar9 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar9);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  ppuVar4 = &puStack_e0;
  ppuVar6 = &puStack_e0;
  ppuVar8 = &puStack_e0;
  unaff_x20 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (unaff_x20 != 0) {
    puVar2 = &UNK_110413fd8;
    func_0x000107c613fc(&UNK_110413fd8,0x18,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    puVar3 = &UNK_110414000;
    func_0x000107c613fc(&UNK_110414000,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_101931a24;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_c0 = FUN_101931a44;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_10006eb60;
    puStack_c8 = &UNK_110414018;
    puStack_b8 = puVar3;
    func_0x000107c60bc4(&puStack_e0);
    puVar3 = puStack_b8;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_110414050;
    func_0x000107c613fc(&UNK_110414050,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    puVar5 = &UNK_110414078;
    func_0x000107c613fc(&UNK_110414078,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_101931a64;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_c0 = (code *)0x101931abc;
    puStack_e0 = puVar1;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_10006eb60;
    puStack_c8 = &UNK_110414090;
    puStack_b8 = puVar5;
    func_0x000107c60bc4(&puStack_e0);
    puVar5 = puStack_b8;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1104140c8;
    func_0x000107c613fc(&UNK_1104140c8,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    puVar7 = &UNK_1104140f0;
    func_0x000107c613fc(&UNK_1104140f0,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x101931a84;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_c0 = (code *)0x101931ac0;
    puStack_e0 = puVar1;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_10006eb60;
    puStack_c8 = &UNK_110414108;
    puStack_b8 = puVar7;
    func_0x000107c60bc4(&puStack_e0);
    puVar7 = puStack_b8;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61574(puVar7);
    func_0x000107c4c6c0(uVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(unaff_x20);
  }
  return unaff_x20;
}



/* Entry: 101931a14; end: 101931a23;  */

void FUN_101931a14(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = &UNK_110413fd8;
    func_0x000107c613fc(&UNK_110413fd8,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    puVar4 = &UNK_110414000;
    func_0x000107c613fc(&UNK_110414000,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_101931a24;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_101931a44;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10006eb60;
    puStack_88 = &UNK_110414018;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar4 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_110414050;
    func_0x000107c613fc(&UNK_110414050,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    puVar6 = &UNK_110414078;
    func_0x000107c613fc(&UNK_110414078,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_101931a64;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcStack_80 = (code *)0x101931abc;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10006eb60;
    puStack_88 = &UNK_110414090;
    puStack_78 = puVar6;
    func_0x000107c60bc4(&puStack_a0);
    puVar6 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_1104140c8;
    func_0x000107c613fc(&UNK_1104140c8,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    puVar8 = &UNK_1104140f0;
    func_0x000107c613fc(&UNK_1104140f0,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x101931a84;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    pcStack_80 = (code *)0x101931ac0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10006eb60;
    puStack_88 = &UNK_110414108;
    puStack_78 = puVar8;
    func_0x000107c60bc4(&puStack_a0);
    puVar8 = puStack_78;
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar8);
    func_0x000107c4c6c0(param_1);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101931a24; end: 101931a43;  */

void FUN_101931a24(void)

{
  long unaff_x20;
  
  FUN_101930d64(*(undefined8 *)(unaff_x20 + 0x10),FUN_101930d50);
  return;
}



/* Entry: 101931a44; end: 101931a63;  */

void FUN_101931a44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101931a64; end: 101931aa3;  */

void FUN_101931a64(void)

{
  long unaff_x20;
  
  FUN_101930d64(*(undefined8 *)(unaff_x20 + 0x10),0x101930d58);
  return;
}



/* Entry: 101931aa4; end: 101931ae3;  */

void FUN_101931aa4(long param_1,long param_2)

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



/* Entry: 101931ae4; end: 101931b27;  */

uint FUN_101931ae4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_101937b60(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101931b28; end: 101931bd7;  */

void FUN_101931b28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  uVar5 = *(undefined4 *)(unaff_x20 + 4);
  uVar6 = unaff_x20[5];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fb58(auStack_98,uVar1,uVar3);
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_98,uVar2,lVar4);
  }
  func_0x000107c6069c(uVar5);
  func_0x000107c60690(uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 101931bd8; end: 101931c53;  */

void FUN_101931bd8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  uVar3 = *(undefined4 *)(unaff_x20 + 4);
  uVar4 = unaff_x20[5];
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  if (lVar2 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar1,lVar2);
  }
  func_0x000107c6069c(uVar3);
  func_0x000107c60690(uVar4);
  return;
}



/* Entry: 101931c54; end: 101931cff;  */

void FUN_101931c54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  uVar5 = *(undefined4 *)(unaff_x20 + 4);
  uVar6 = unaff_x20[5];
  func_0x000107c6068c(auStack_98);
  func_0x000107c5fb58(auStack_98,uVar1,uVar3);
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_98,uVar2,lVar4);
  }
  func_0x000107c6069c(uVar5);
  func_0x000107c60690(uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 101931d00; end: 101931d9f;  */

long FUN_101931d00(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  uVar4 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  lVar5 = param_1[6];
  lVar2 = param_1[7];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  lVar1 = param_2[6];
  lVar3 = param_2[7];
  FUN_101937b60(&uStack_90,&uStack_60);
  if ((uVar4 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    if ((lVar5 != lVar1) || (lVar2 != lVar3)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(lVar5,lVar2,lVar1,lVar3,0);
      return lVar5;
    }
    lVar5 = 1;
  }
  return lVar5;
}



/* Entry: 101931da0; end: 101931e6b;  */

void FUN_101931da0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_a8 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar5 = unaff_x20[3];
  uVar7 = *(undefined4 *)(unaff_x20 + 4);
  uVar3 = unaff_x20[5];
  uVar6 = unaff_x20[6];
  uVar8 = unaff_x20[7];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fb58(auStack_a8,uVar1,uVar4);
  if (lVar5 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_a8,uVar2,lVar5);
  }
  func_0x000107c6069c(uVar7);
  func_0x000107c60690(uVar3);
  func_0x000107c5fb58(auStack_a8,uVar6,uVar8);
  func_0x000107c606a8();
  return;
}



/* Entry: 101931e6c; end: 101931f07;  */

/* WARNING: Possible PIC construction at 0x000101931e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101931ebc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101931ea0) */
/* WARNING: Removing unreachable block (ram,0x000101931ec4) */
/* WARNING: Removing unreachable block (ram,0x000101931ea4) */
/* WARNING: Removing unreachable block (ram,0x000101931ec0) */
/* WARNING: Removing unreachable block (ram,0x000101931ed0) */

void FUN_101931e6c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 101931f08; end: 101931fcf;  */

void FUN_101931f08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_a8 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar5 = unaff_x20[3];
  uVar7 = *(undefined4 *)(unaff_x20 + 4);
  uVar3 = unaff_x20[5];
  uVar6 = unaff_x20[6];
  uVar8 = unaff_x20[7];
  func_0x000107c6068c(auStack_a8);
  func_0x000107c5fb58(auStack_a8,uVar1,uVar4);
  if (lVar5 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_a8,uVar2,lVar5);
  }
  func_0x000107c6069c(uVar7);
  func_0x000107c60690(uVar3);
  func_0x000107c5fb58(auStack_a8,uVar6,uVar8);
  func_0x000107c606a8();
  return;
}



/* Entry: 101931fd0; end: 10193204b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101931fd0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dd5e88;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dd5e88);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112dd5e50);
    func_0x000107c614f0();
    FUN_10193204c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 10193204c; end: 1019329c3;  */

undefined * FUN_10193204c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 unaff_x20;
  undefined *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined *apuStack_90 [2];
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar6 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc14e0);
  uVar7 = 0;
  uVar10 = 0xe000000000000000;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar6 = unaff_x20;
  func_0x000107c5faec(unaff_x20);
  func_0x000107c61170(unaff_x20);
  uStack_70 = 0x2c;
  uStack_68 = 0xe100000000000000;
  puStack_80 = &uStack_70;
  lVar8 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_1019382fc,apuStack_90,uVar6,uVar10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar14 = 0;
  uVar16 = *(ulong *)(lVar8 + 0x10);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar15 = (undefined8 *)(lVar8 + 0x18 + uVar14 * 0x20);
    do {
      puVar11 = puVar15;
      if (uVar16 == uVar14) {
        func_0x000107c6142c(lVar8);
        lVar8 = *(long *)(puVar12 + 0x10);
        if (lVar8 == 0) {
          func_0x000107c61574(puVar12);
          puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          apuStack_90[0] = puVar13;
          func_0x000100403514(0,lVar8,0);
          puVar15 = (undefined8 *)(puVar12 + 0x38);
          do {
            puVar13 = apuStack_90[0];
            uVar6 = puVar15[-3];
            uVar10 = puVar15[-2];
            uVar7 = puVar15[-1];
            uVar4 = *puVar15;
            func_0x000107c61434(uVar4);
            func_0x000107c5fb2c(uVar6,uVar10,uVar7,uVar4);
            func_0x000107c6142c(uVar4);
            uVar14 = *(ulong *)(puVar13 + 0x10);
            apuStack_90[0] = puVar13;
            if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar14) {
              func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),uVar14 + 1,1);
            }
            puVar13 = apuStack_90[0];
            puVar15 = puVar15 + 4;
            *(ulong *)(apuStack_90[0] + 0x10) = uVar14 + 1;
            *(undefined8 *)(apuStack_90[0] + uVar14 * 0x10 + 0x20) = uVar6;
            *(undefined8 *)(apuStack_90[0] + uVar14 * 0x10 + 0x28) = uVar10;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          func_0x000107c61574(puVar12);
        }
        return puVar13;
      }
      if (*(ulong *)(lVar8 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1019322fc);
        (*pcVar5)();
      }
      uVar14 = uVar14 + 1;
      uVar1 = puVar11[1];
      uVar3 = puVar11[2];
      puVar15 = puVar11 + 4;
    } while ((uVar3 ^ uVar1) < 0x4000);
    uVar6 = puVar11[3];
    uVar7 = puVar11[4];
    func_0x000107c61434(uVar7);
    puVar9 = puVar12;
    func_0x000107c61558();
    apuStack_90[0] = puVar12;
    if (((ulong)puVar9 & 1) == 0) {
      FUN_101936124(0,*(long *)(puVar12 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(apuStack_90[0] + 0x10);
    if (*(ulong *)(apuStack_90[0] + 0x18) >> 1 <= uVar2) {
      FUN_101936124(1 < *(ulong *)(apuStack_90[0] + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(apuStack_90[0] + 0x10) = uVar2 + 1;
    *(ulong *)(apuStack_90[0] + uVar2 * 0x20 + 0x20) = uVar1;
    *(ulong *)(apuStack_90[0] + uVar2 * 0x20 + 0x28) = uVar3;
    *(undefined8 *)(apuStack_90[0] + uVar2 * 0x20 + 0x30) = uVar6;
    *(undefined8 *)(apuStack_90[0] + uVar2 * 0x20 + 0x38) = uVar7;
    puVar12 = apuStack_90[0];
  } while( true );
}



/* Entry: 1019329c4; end: 101933503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1019329c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,byte param_10,undefined8 param_11)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_240 [8];
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined1 *puStack_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uStack_1cc = (uint)param_10;
  lVar3 = 0;
  uStack_1b8 = param_8;
  func_0x000107c5eec8();
  lStack_1a0 = *(long *)(lVar3 + -8);
  lStack_198 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = auStack_240 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  puStack_1d8 = puVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_1e8 = puVar11 + -extraout_x12;
  lStack_1e0 = extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_180 = (long)(puVar11 + -extraout_x12) - extraout_x12_00;
  uStack_a0 = param_9;
  uStack_98 = param_11;
  uStack_e0 = CONCAT44(uStack_9c,param_9);
  uStack_d8 = param_11;
  uStack_1d0 = param_9;
  uStack_110 = param_9;
  uStack_190 = param_11;
  uStack_108 = param_11;
  plVar1 = (long *)(param_1 + _DAT_112dd5e78);
  uStack_1c8 = param_4;
  uStack_1c0 = param_6;
  uStack_1b0 = param_2;
  lStack_188 = param_1;
  uStack_130 = param_4;
  uStack_128 = param_5;
  uStack_120 = param_6;
  uStack_118 = param_7;
  uStack_100 = param_4;
  uStack_f8 = param_5;
  uStack_f0 = param_6;
  uStack_e8 = param_7;
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  uStack_c0 = param_4;
  uStack_b8 = param_5;
  uStack_b0 = param_6;
  uStack_a8 = param_7;
  uStack_90 = param_2;
  uStack_88 = param_3;
  func_0x000107c61428(plVar1,&puStack_170,0x20,0);
  lVar12 = *plVar1;
  lVar3 = *(long *)(lVar12 + 0x10);
  uVar17 = 0;
  func_0x000107c61438(param_7);
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_3);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 == 0) {
    plStack_208 = plVar1;
    uStack_200 = param_5;
    uStack_1f8 = param_7;
    uStack_1f0 = param_3;
    func_0x000107c61434(param_5);
  }
  else {
    func_0x000107c61434(lVar12);
    func_0x000107c61434(param_5);
    puVar4 = &uStack_130;
    func_0x000101936370();
    if ((uVar17 & 1) != 0) {
      lVar18 = *(long *)(*(long *)(lVar12 + 0x38) + (long)puVar4 * 8);
      func_0x000107c6157c(lVar18);
      func_0x000107c614a8(&puStack_170);
      func_0x000107c6142c(param_7);
      func_0x000107c6142c(param_5);
      func_0x000107c6142c(lVar12);
      func_0x000101937e18(&uStack_c0);
      func_0x000107c6157c(lVar18);
      goto LAB_101933148;
    }
    plStack_208 = plVar1;
    uStack_1f8 = param_7;
    uStack_1f0 = param_3;
    func_0x000107c6142c(lVar12);
    uStack_200 = param_5;
  }
  func_0x000107c614a8(&puStack_170);
  lVar2 = lStack_180;
  func_0x000107c5eec4(lStack_180);
  lVar3 = lStack_188;
  uVar14 = *(undefined8 *)(lStack_188 + _DAT_112dd5e60);
  uStack_210 = *(undefined8 *)(lStack_188 + _DAT_112dd5e48);
  uVar13 = *(undefined8 *)(lStack_188 + _DAT_112dd5e70);
  uStack_228 = *(undefined8 *)(lStack_188 + _DAT_112dd5e68);
  puVar5 = &UNK_1104143b0;
  uStack_238 = uVar14;
  func_0x000107c613fc(&UNK_1104143b0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,lVar3);
  lVar12 = lStack_198;
  lVar3 = lStack_1a0;
  puVar9 = puStack_1e8;
  pcVar15 = *(code **)(lStack_1a0 + 0x10);
  (*pcVar15)(puStack_1e8,lVar2,lStack_198);
  uStack_230 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uStack_230 + 0x58 & (uStack_230 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1104143d8;
  func_0x000107c613fc(&UNK_1104143d8,uVar17 + lStack_1e0,uStack_230 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uStack_f8;
  *(undefined8 *)(puVar6 + 0x18) = uStack_100;
  *(undefined8 *)(puVar6 + 0x30) = uStack_e8;
  *(undefined8 *)(puVar6 + 0x28) = uStack_f0;
  *(undefined8 *)(puVar6 + 0x40) = uStack_d8;
  *(undefined8 *)(puVar6 + 0x38) = uStack_e0;
  *(undefined8 *)(puVar6 + 0x50) = uStack_c8;
  *(undefined8 *)(puVar6 + 0x48) = uStack_d0;
  pcStack_220 = *(code **)(lVar3 + 0x20);
  puStack_218 = puVar5;
  puStack_1a8 = puVar6;
  (*pcStack_220)(puVar6 + uVar17,puVar9,lVar12);
  lVar18 = 0;
  func_0x000101935940();
  func_0x000107c613fc();
  *(undefined **)(lVar18 + _DAT_112dd5ec0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar18 + _DAT_112dd5ec8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = (undefined8 *)(lVar18 + _DAT_112dd5ed0);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(lVar18 + _DAT_112dd5ed8) = 0;
  lVar3 = _DAT_112dd5ee0;
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  puStack_1e8 = puVar6;
  func_0x000107c6157c(puVar5);
  func_0x000101937d68(&uStack_c0,&puStack_170);
  func_0x000107c4d608();
  func_0x000107c61180();
  lVar2 = lStack_180;
  *(undefined **)(lVar18 + lVar3) = puVar6;
  *(undefined8 *)(lVar18 + 0x10) = uVar14;
  *(undefined8 *)(lVar18 + 0x18) = uStack_228;
  *(undefined8 *)(lVar18 + 0x20) = uStack_190;
  (*pcVar15)(lVar18 + _DAT_112dd5eb8,lStack_180,lVar12);
  puVar5 = &UNK_110414400;
  func_0x000107c613fc(&UNK_110414400,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,lVar18);
  puVar11 = puStack_1d8;
  (*pcVar15)(puStack_1d8,lVar2,lVar12);
  uVar16 = uStack_230 + 0x28 & (uStack_230 ^ 0xffffffffffffffff);
  uVar17 = lStack_1e0 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_110414428;
  func_0x000107c613fc(&UNK_110414428,uVar17 + 0x48,uStack_230 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = 0x101937d24;
  *(undefined **)(puVar6 + 0x20) = puStack_1a8;
  (*pcStack_220)(puVar6 + uVar16,puVar11,lVar12);
  uVar10 = uStack_210;
  uVar14 = uStack_238;
  *(undefined8 *)(puVar6 + uVar17) = uStack_210;
  puVar4 = (undefined8 *)(puVar6 + uVar17 + 8);
  puVar4[3] = uStack_118;
  puVar4[2] = uStack_120;
  puVar4[5] = uStack_108;
  puVar4[4] = CONCAT44(uStack_10c,uStack_110);
  puVar4[1] = uStack_128;
  *puVar4 = uStack_130;
  *(undefined8 *)(puVar6 + uVar17 + 0x38) = uStack_238;
  *(undefined8 *)(puVar6 + uVar17 + 0x40) = uVar13;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_150 = (code *)0x101937d9c;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0x42000000;
  puStack_160 = &UNK_1004725e8;
  puStack_158 = &UNK_110414440;
  ppuVar7 = &puStack_170;
  puStack_148 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar9 = puStack_148;
  func_0x000107c615f4(uVar14,2);
  param_5 = uStack_200;
  func_0x000107c61434(uStack_200);
  param_7 = uStack_1f8;
  func_0x000107c61434(uStack_1f8);
  func_0x000107c6157c(lVar18);
  puVar6 = puStack_1a8;
  func_0x000107c6157c(puStack_1a8);
  func_0x000107c61174(uVar10);
  func_0x000107c61574(puVar9);
  puVar8 = puStack_1e8;
  func_0x000107c408f0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar9 = puVar8;
  func_0x000107c4f63c();
  func_0x000107c61180();
  func_0x000107c61574(puVar6);
  func_0x000107c61170(puVar8);
  uVar14 = *(undefined8 *)(lVar18 + _DAT_112dd5ee0);
  *(undefined **)(lVar18 + _DAT_112dd5ee0) = puVar9;
  func_0x000107c61574(puStack_218);
  func_0x000107c61170(uVar14);
  plVar1 = plStack_208;
  func_0x000107c61428(plStack_208,&puStack_170,0x21,0);
  func_0x000107c6157c(lVar18);
  lVar3 = *plVar1;
  func_0x000107c61558();
  lStack_178 = *plVar1;
  *plVar1 = -0x8000000000000000;
  FUN_10193660c(lVar18,&uStack_130,lVar3);
  func_0x000107c6142c(param_7);
  func_0x000107c6142c(param_5);
  *plVar1 = lStack_178;
  func_0x000107c614a8(&puStack_170);
  func_0x000101937e18(&uStack_c0);
  (**(code **)(lStack_1a0 + 8))(lStack_180,lStack_198);
  param_3 = uStack_1f0;
LAB_101933148:
  uVar14 = uStack_1b0;
  FUN_101935374(uStack_1b0,param_3);
  uVar13 = *(undefined8 *)(lVar18 + _DAT_112dd5ee0);
  puVar6 = &UNK_110414478;
  func_0x000107c613fc(&UNK_110414478,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar14;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  pcStack_150 = FUN_101937e44;
  uStack_168 = 0x42000000;
  puStack_160 = (undefined *)0x101933f04;
  puStack_158 = &UNK_110414490;
  ppuVar7 = &puStack_170;
  puStack_170 = puVar5;
  puStack_148 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_148;
  func_0x000107c61434(param_3);
  func_0x000107c6157c(lVar18);
  func_0x000107c61174(uVar13);
  func_0x000107c61574(puVar6);
  uVar10 = uVar13;
  func_0x000107c43494(uVar13);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar13);
  uVar13 = uVar10;
  func_0x000107c435e4(uVar10);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  puVar6 = &UNK_1104144c8;
  func_0x000107c613fc(&UNK_1104144c8,0x60,7);
  lVar3 = lStack_188;
  *(long *)(puVar6 + 0x10) = lStack_188;
  *(undefined8 *)(puVar6 + 0x18) = uVar14;
  *(undefined8 *)(puVar6 + 0x20) = param_3;
  *(undefined8 *)(puVar6 + 0x28) = uStack_1c8;
  *(undefined8 *)(puVar6 + 0x30) = param_5;
  *(undefined8 *)(puVar6 + 0x38) = uStack_1c0;
  *(undefined8 *)(puVar6 + 0x40) = param_7;
  *(undefined8 *)(puVar6 + 0x48) = uStack_1b8;
  *(undefined4 *)(puVar6 + 0x50) = uStack_1d0;
  puVar6[0x54] = (byte)uStack_1cc & 1;
  *(undefined8 *)(puVar6 + 0x58) = uStack_190;
  pcStack_150 = (code *)0x101937e88;
  uStack_168 = 0x42000000;
  puStack_160 = (undefined *)0x1019386b4;
  puStack_158 = &UNK_1104144e0;
  ppuVar7 = &puStack_170;
  puStack_170 = puVar5;
  puStack_148 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_148;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_7);
  func_0x000107c61434(param_3);
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  uVar10 = uVar13;
  func_0x000107c436a8(uVar13);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar13);
  puVar6 = &UNK_110414518;
  func_0x000107c613fc(&UNK_110414518,0x20,7);
  *(long *)(puVar6 + 0x10) = lVar3;
  *(long *)(puVar6 + 0x18) = lVar18;
  pcStack_150 = FUN_101937ed0;
  uStack_168 = 0x42000000;
  puStack_160 = &UNK_1010a3098;
  puStack_158 = &UNK_110414530;
  ppuVar7 = &puStack_170;
  puStack_170 = puVar5;
  puStack_148 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_148;
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  uVar13 = uVar10;
  func_0x000107c421bc(uVar10);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar10);
  puVar6 = &UNK_110414568;
  func_0x000107c613fc(&UNK_110414568,0x30,7);
  *(long *)(puVar6 + 0x10) = lVar3;
  *(long *)(puVar6 + 0x18) = lVar18;
  *(undefined8 *)(puVar6 + 0x20) = uVar14;
  *(undefined8 *)(puVar6 + 0x28) = param_3;
  pcStack_150 = (code *)0x101937ed8;
  uStack_168 = 0x42000000;
  puStack_160 = &UNK_1000f6b44;
  puStack_158 = &UNK_110414580;
  ppuVar7 = &puStack_170;
  puStack_170 = puVar5;
  puStack_148 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar5 = puStack_148;
  func_0x000107c61434(param_3);
  func_0x000107c61174(lVar3);
  func_0x000107c61574(puVar5);
  uVar14 = uVar13;
  func_0x000107c421b8(uVar13);
  func_0x000107c61180();
  func_0x000107c61574(lVar18);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar13);
  return uVar14;
}



/* Entry: 101933504; end: 1019335ff; -[_TtC40SCBitmoji3DStickerServicesImplementation23Bitmoji3DStickerFetcher fetch3DStickerForId:avatarId:friendAvatarId:scale:feature:isReaction:renderStyle:] */

void FUN_101933504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_1);
  func_0x0001019322fc(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,param_7,param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101933600; end: 10193365f; -[_TtC40SCBitmoji3DStickerServicesImplementation23Bitmoji3DStickerFetcher init] */

void FUN_101933600(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmoji3DStickerServicesImplementation.Bitmoji3DStickerFetcher",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10193362c);
  (*pcVar1)();
}



/* Entry: 101933660; end: 1019336f7; -[_TtC40SCBitmoji3DStickerServicesImplementation23Bitmoji3DStickerFetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019336cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019336d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101933660(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd5e40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd5e48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd5e50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd5e58));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd5e60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dd5e78));
  return;
}



/* Entry: 1019336f8; end: 10193377f;  */

void FUN_1019336f8(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    uStack_38 = param_3[5];
    uStack_40 = param_3[4];
    FUN_101933780(&uStack_60,param_4,param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101933780; end: 101933acf;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101933780(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long alStack_80 [4];
  
  lVar3 = 0x112dd6108;
  func_0x0001000285a8(0x112dd6108,&UNK_10d998ae8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)alStack_80 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5eec8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar12,param_2);
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar9 = (ulong)uVar1;
  alStack_80[0] = param_1;
  func_0x000107c5eea0(lVar10);
  lVar3 = 0;
  func_0x000101935c7c();
  *(uint *)(lVar10 + *(int *)(lVar3 + 0x14)) = uVar1;
  *(undefined8 *)(lVar10 + *(int *)(lVar3 + 0x18)) = param_3;
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar10,0,1,lVar3);
  func_0x000107c61428(unaff_x20 + _DAT_112dd5e80,alStack_80 + 1,0x21,0);
  FUN_101933ad0(lVar10,lVar12);
  func_0x000107c614a8(alStack_80 + 1);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112dd5e58);
  puVar4 = PTR_PTR_1126b9718;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c5bd5c();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101933acc);
    (*pcVar2)();
  }
  uVar13 = 0x65727574616566;
  uVar8 = uVar13;
  func_0x000107c5fadc(0x65727574616566,0xe700000000000000);
  uVar6 = uVar9;
  func_0x00010900605c(uVar9);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c5e508(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c3d708(uVar11);
  func_0x000107c61170(puVar7);
  func_0x000107c5bda4();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    uVar8 = 0x5f72656b63697473;
    func_0x000107c5fadc(0x5f72656b63697473,0xed0000746e756f63);
    puVar5 = PTR___sSiN_11034deb0;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    alStack_80[1] = param_3;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
    puVar7 = puVar4;
    func_0x000107c5e508(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c5fadc(0x65727574616566,0xe700000000000000);
    func_0x00010900605c(uVar9);
    func_0x000107c61180();
    puVar4 = puVar7;
    func_0x000107c5e508(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar9);
    func_0x000107c45314(uVar11);
    func_0x000107c61170(puVar4);
    func_0x000107c61428(unaff_x20 + _DAT_112dd5e78,alStack_80 + 1,0x21,0);
    lVar3 = alStack_80[0];
    FUN_101936424(alStack_80[0]);
    func_0x000107c614a8(alStack_80 + 1);
    func_0x000107c61574(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101933ad0);
  (*pcVar2)();
}



/* Entry: 101933ad0; end: 101933c5f;  */

void FUN_101933ad0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar2 = 0x112dd6108;
  func_0x0001000285a8(0x112dd6108,&UNK_10d998ae8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar1 = 0;
  func_0x000101935c7c();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_101938268(param_1,lVar5);
  lVar2 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar1);
  if ((int)lVar2 == 1) {
    FUN_101937f6c(lVar5);
    FUN_1019364e8(puVar4,param_2);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    FUN_101937f6c(puVar4);
  }
  else {
    func_0x000101937fb4(lVar5,lVar6);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_58 = *unaff_x20;
    FUN_101936778(lVar6,param_2,uVar3);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    *unaff_x20 = uStack_58;
  }
  return;
}



/* Entry: 101933c60; end: 101933e7f;  */

undefined1 FUN_101933c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 uStack_61;
  
  uStack_61 = 0;
  puVar4 = &UNK_110414888;
  func_0x000107c613fc(&UNK_110414888,0x28,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_61;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  puVar5 = &UNK_1104148b0;
  func_0x000107c613fc(&UNK_1104148b0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1019381d0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x1019386a0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_10103b958;
  puStack_80 = &UNK_1104148c8;
  ppuVar6 = &puStack_98;
  puStack_70 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_70;
  func_0x000107c61434(param_3);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_110414900;
  func_0x000107c613fc(&UNK_110414900,0x18,7);
  *(undefined1 **)(puVar7 + 0x10) = &uStack_61;
  puVar8 = &UNK_110414928;
  func_0x000107c613fc(&UNK_110414928,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x1019381dc;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  uStack_78 = 0x1019386a4;
  puStack_98 = puVar1;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100e27b38;
  puStack_80 = &UNK_110414940;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar1 = puStack_70;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_61;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6f,0xec,0x25,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101933e7c);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x6f,0xef,0x1c,1);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101933e80);
  (*pcVar3)();
}



/* Entry: 101933e80; end: 101933f5b;  */

void FUN_101933e80(long param_1,byte *param_2,long param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_1 == 0) {
    bVar2 = 0;
  }
  else {
    pbVar1 = param_2;
    func_0x000107c5faec();
    if ((param_3 == param_1) && (param_4 == pbVar1)) {
      bVar2 = 1;
    }
    else {
      func_0x000107c605b8(param_3,param_4,param_1,pbVar1,0);
      bVar2 = (byte)param_3;
    }
    func_0x000107c6142c(pbVar1);
  }
  *param_2 = bVar2 & 1;
  return;
}



/* Entry: 101933f5c; end: 1019341e7;  */

long FUN_101933f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined1 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = 0;
  puVar4 = &UNK_110414798;
  func_0x000107c613fc(&UNK_110414798,0x68,7);
  *(long **)(puVar4 + 0x10) = &lStack_78;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  *(undefined8 *)(puVar4 + 0x30) = param_5;
  *(undefined8 *)(puVar4 + 0x38) = param_6;
  *(undefined8 *)(puVar4 + 0x40) = param_7;
  *(undefined8 *)(puVar4 + 0x48) = param_8;
  *(undefined8 *)(puVar4 + 0x50) = param_9;
  *(undefined4 *)(puVar4 + 0x58) = param_10;
  puVar4[0x5c] = param_11;
  *(undefined8 *)(puVar4 + 0x60) = param_12;
  puVar5 = &UNK_1104147c0;
  func_0x000107c613fc(&UNK_1104147c0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x10193817c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x101938698;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10103b958;
  puStack_90 = &UNK_1104147d8;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_80;
  func_0x000107c61434(param_8);
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_110414810;
  func_0x000107c613fc(&UNK_110414810,0x18,7);
  *(long **)(puVar7 + 0x10) = &lStack_78;
  puVar8 = &UNK_110414838;
  func_0x000107c613fc(&UNK_110414838,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_1019381c8;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  uStack_88 = 0x10193869c;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e27b38;
  puStack_90 = &UNK_110414850;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  lVar2 = lStack_78;
  if (lStack_78 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019341e8);
    (*pcVar3)();
  }
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6f,0xf8,0x25,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar8;
    func_0x000107c61544(puVar8,"",0x6f,0x103,0x1c,1);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar4 & 1) == 0) {
      return lVar2;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019341e4);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1019341e0);
  (*pcVar3)();
}



/* Entry: 1019341e8; end: 101934393;  */

/* WARNING: Possible PIC construction at 0x00010193432c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010193433c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101934364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101934340) */
/* WARNING: Removing unreachable block (ram,0x000101934330) */
/* WARNING: Removing unreachable block (ram,0x000101934368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019341e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_3 + _DAT_112dd5e40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    param_6 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar2);
    func_0x000107c61180();
  }
  else {
    func_0x000107c5fadc(param_6,param_7);
    if (param_9 != 0) {
      func_0x000107c5fadc(param_8,param_9);
    }
    puVar2 = PTR_PTR_1126af5d8;
    func_0x000107c610f8(PTR_PTR_1126af5d8);
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c458c8(0,0,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 101934394; end: 101934483;  */

/* WARNING: Possible PIC construction at 0x0001019343f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101934410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019343f4) */
/* WARNING: Removing unreachable block (ram,0x000101934414) */

void FUN_101934394(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c42d78();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101934484; end: 1019346af;  */

void FUN_101934484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_110414608;
  func_0x000107c613fc(&UNK_110414608,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar4 = &UNK_110414630;
  func_0x000107c613fc(&UNK_110414630,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101937f0c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101937f14;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_110414648;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61580(param_3,2);
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110414680;
  func_0x000107c613fc(&UNK_110414680,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_1104146a8;
  func_0x000107c613fc(&UNK_1104146a8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101937f60;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x101938694;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104146c0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6f,0x10b,0x25,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1019346ac);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x6f,0x10d,0x1c,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019346b0);
  (*pcVar2)();
}



/* Entry: 1019346b0; end: 1019349df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019346b0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = _DAT_112dd5eb8;
  lVar9 = (long)&puStack_90 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126b9718;
  func_0x000107c61168();
  func_0x000107c5bdac();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    uVar8 = *(undefined8 *)(param_2 + _DAT_112dd5e60);
    (**(code **)(lVar12 + 0x10))(lVar9,param_3 + lVar1,lVar3);
    uVar7 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar13 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
    uVar11 = lVar10 + uVar13 + 7 & 0xfffffffffffffff8;
    puVar5 = &UNK_110414748;
    func_0x000107c613fc(&UNK_110414748,uVar11 + 8,uVar7 | 7);
    *(long *)(puVar5 + 0x10) = param_2;
    (**(code **)(lVar12 + 0x20))(puVar5 + uVar13,lVar9,lVar3);
    *(undefined **)(puVar5 + uVar11) = puVar4;
    uStack_70 = 0x1019386b8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110414760;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_68;
    func_0x000107c61174(param_2);
    func_0x000107c61174(puVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101934848);
  (*pcVar2)();
}



/* Entry: 1019349e0; end: 101934ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019349e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112dd5e60);
  puVar1 = &UNK_1104145b8;
  func_0x000107c613fc(&UNK_1104145b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  pcStack_50 = FUN_101937ee4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104145d0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101934ab8; end: 101934d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101934ab8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  uint auStack_70 [2];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112dd6108;
  func_0x0001000285a8(0x112dd6108,&UNK_10d998ae8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)auStack_70 - extraout_x8;
  lVar2 = 0;
  func_0x000101935c7c();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + _DAT_112dd5e80,auStack_68,0x21,0);
  FUN_1019364e8(lVar10,param_3);
  func_0x000107c614a8(auStack_68);
  lVar1 = lVar10;
  (**(code **)(lVar11 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_101937f6c(lVar10);
  }
  else {
    func_0x000101937fb4(lVar10,lVar8);
    uVar9 = *(undefined8 *)(param_2 + _DAT_112dd5e58);
    uVar3 = 0x5f72656b63697473;
    func_0x000107c5fadc(0x5f72656b63697473,0xed0000746e756f63);
    puVar4 = PTR___sSiN_11034deb0;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c((long)*(int *)(lVar2 + 0x18),PTR___sSiN_11034deb0,
                        PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
    func_0x000107c5e508(param_4);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
    uVar5 = 0x65727574616566;
    func_0x000107c5fadc(0x65727574616566,0xe700000000000000);
    uVar6 = (ulong)*(uint *)(lVar8 + *(int *)(lVar2 + 0x14));
    func_0x00010900605c(uVar6);
    func_0x000107c61180();
    uVar3 = param_4;
    func_0x000107c5e508(param_4);
    func_0x000107c61180();
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c5ee84();
    func_0x000107c3d8dc(param_1 * -1000.0,uVar9);
    func_0x000107c61170(uVar3);
    func_0x000101937ff8(lVar8);
  }
  return;
}



/* Entry: 101934d04; end: 101935077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101934d04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar6 = 0;
  lStack_118 = param_3;
  uStack_110 = param_4;
  uStack_108 = param_7;
  uStack_100 = param_2;
  uStack_f8 = param_9;
  uStack_f0 = param_5;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar6 + -8);
  lVar12 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)&puStack_120 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &UNK_110414978;
  func_0x000107c613fc(&UNK_110414978,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  puStack_120 = puVar7;
  (**(code **)(lVar15 + 0x10))(lVar14,param_6,lVar6);
  uStack_88 = param_8[1];
  uStack_90 = *param_8;
  uStack_98 = param_8[3];
  uStack_a0 = param_8[2];
  uVar11 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar16 = uVar11 + 0x28 & (uVar11 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar7 = &UNK_1104149a0;
  func_0x000107c613fc(&UNK_1104149a0,uVar13 + 0x48,uVar11 | 7);
  uVar4 = uStack_108;
  lVar12 = lStack_118;
  puVar3 = puStack_120;
  *(long *)(puVar7 + 0x10) = lStack_118;
  *(undefined8 *)(puVar7 + 0x18) = uStack_110;
  *(undefined8 *)(puVar7 + 0x20) = uStack_f0;
  (**(code **)(lVar15 + 0x20))(puVar7 + uVar16,lVar14,lVar6);
  uVar5 = uStack_100;
  *(undefined **)(puVar7 + uVar13) = puVar3;
  *(undefined8 *)(puVar7 + uVar13 + 8) = uVar4;
  puVar1 = (undefined8 *)(puVar7 + uVar13 + 0x10);
  uVar17 = *param_8;
  uVar19 = param_8[3];
  uVar18 = param_8[2];
  puVar1[1] = param_8[1];
  *puVar1 = uVar17;
  puVar1[3] = uVar19;
  puVar1[2] = uVar18;
  uVar17 = param_8[4];
  puVar1[5] = param_8[5];
  puVar1[4] = uVar17;
  *(undefined8 *)(puVar7 + uVar13 + 0x40) = uStack_100;
  func_0x000107c61428(lVar12 + 0x10,auStack_b8,0,0);
  lVar6 = lVar12 + 0x10;
  func_0x000107c61648();
  if (lVar6 == 0) {
    func_0x000107c6157c(lVar12);
    func_0x000107c6157c(uStack_f0);
    func_0x000107c6157c(puVar3);
    func_0x000107c61174(uVar4);
    func_0x000100402194(&uStack_90,&puStack_e8);
    func_0x000101223174(&uStack_a0,&puStack_e8);
    func_0x000107c615f0(uVar5);
  }
  else {
    puVar1 = (undefined8 *)(lVar6 + _DAT_112dd5ed0);
    uVar17 = *puVar1;
    uVar18 = puVar1[1];
    *puVar1 = FUN_1019381ec;
    puVar1[1] = puVar7;
    func_0x000107c6157c(lVar12);
    func_0x000107c6157c(uStack_f0);
    func_0x000107c6157c(puVar3);
    func_0x000107c61174(uVar4);
    func_0x000100402194(&uStack_90,&puStack_e8);
    func_0x000101223174(&uStack_a0,&puStack_e8);
    func_0x000107c615f0(uVar5);
    func_0x000107c6157c(puVar7);
    func_0x00010058d43c(uVar17,uVar18);
    func_0x000107c61574(lVar6);
  }
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_c8 = FUN_1019381ec;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0x42000000;
  puStack_d8 = &UNK_1000f6b44;
  puStack_d0 = &UNK_1104149b8;
  ppuVar8 = &puStack_e8;
  puStack_c0 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar10 = puStack_c0;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar10);
  uVar4 = uStack_f8;
  func_0x000107c4e528(param_1,uStack_f8);
  func_0x000107c60bd0(ppuVar8);
  puVar9 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar10 = &UNK_1104149f0;
  func_0x000107c613fc(&UNK_1104149f0,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar4;
  *(undefined **)(puVar10 + 0x18) = puVar3;
  pcStack_c8 = FUN_101938258;
  puStack_e8 = puVar2;
  uStack_e0 = 0x42000000;
  puStack_d8 = &UNK_1000f6b44;
  puStack_d0 = &UNK_110414a08;
  ppuVar8 = &puStack_e8;
  puStack_c0 = puVar10;
  func_0x000107c60bc4(ppuVar8);
  puVar10 = puStack_c0;
  func_0x000107c6157c(puVar3);
  func_0x000107c615f0(uVar4);
  func_0x000107c61574(puVar10);
  func_0x000107c408f0(puVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar7);
  return puVar9;
}



/* Entry: 101935078; end: 101935293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101935078(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_c0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  lVar2 = _DAT_112dd5ed8;
  lVar1 = _DAT_112dd5ec0;
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _DAT_112dd5ed8) & 1) == 0) {
      func_0x000107c61428(param_1 + _DAT_112dd5ec0,auStack_90,0,0);
      if (*(long *)(*(long *)(param_1 + lVar1) + 0x10) == 0) {
        uVar6 = 0;
        *(undefined1 *)(param_1 + lVar2) = 1;
      }
      else {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (param_6 == 0) {
          lVar7 = 0;
        }
        else {
          uVar6 = *param_7;
          func_0x000107c5fadc(uVar6,param_7[1]);
          if (param_7[3] == 0) {
            uStack_c0 = 0;
          }
          else {
            uStack_c0 = param_7[2];
            func_0x000107c5fadc();
          }
          uVar8 = *(undefined8 *)(param_1 + lVar1);
          uVar3 = uVar8;
          func_0x000107c61434(uVar8);
          func_0x000107c5fc48();
          func_0x000107c6142c(uVar8);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          lVar5 = param_6;
          func_0x000107c5c2ac();
          func_0x000107c61180();
          func_0x000107c615e8(param_6);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uStack_c0);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(puVar4);
          lVar7 = lVar5;
          func_0x000107c5c310();
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
        }
        func_0x000107c61428(param_5 + 0x10,auStack_a8,1,0);
        uVar6 = *(undefined8 *)(param_5 + 0x10);
        *(long *)(param_5 + 0x10) = lVar7;
        func_0x000107c61170(uVar6);
        *(undefined1 *)(param_1 + lVar2) = 1;
        uVar6 = *(undefined8 *)(*(long *)(param_1 + lVar1) + 0x10);
      }
      (*param_2)(uVar6);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101935294; end: 10193532f;  */

void FUN_101935294(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uStack_40 = 0x101938260;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110414a30;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101935330; end: 101935373;  */

void FUN_101935330(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  return;
}



/* Entry: 101935374; end: 10193556b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101935374(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112dd5ec8;
  func_0x000107c61428(unaff_x20 + _DAT_112dd5ec8,auStack_68,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    lVar9 = param_1;
    uVar2 = param_2;
    func_0x000100029284();
    if ((uVar2 & 1) == 0) {
      func_0x000107c6142c(lVar6);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar6 + 0x38) + lVar9 * 8);
      func_0x000107c6142c(lVar6);
      if (lVar9 != 0) goto LAB_10193549c;
    }
  }
  lVar6 = _DAT_112dd5ec0;
  func_0x000107c61428(unaff_x20 + _DAT_112dd5ec0,auStack_80,0x21,0);
  uVar7 = *(ulong *)(unaff_x20 + lVar6);
  func_0x000107c61434(param_2);
  uVar2 = uVar7;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + lVar6) = uVar7;
  uVar3 = uVar7;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    func_0x00010193625c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7,
                        PTR__swift_bridgeObjectRelease_11034f258);
    *(ulong *)(unaff_x20 + lVar6) = uVar3;
  }
  uVar7 = *(ulong *)(uVar3 + 0x10);
  uVar2 = uVar7 + 1;
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar7) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x00010193625c(uVar4,uVar2,1,uVar3,PTR__swift_bridgeObjectRelease_11034f258);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2;
  lVar9 = uVar4 + uVar7 * 0x10;
  *(long *)(lVar9 + 0x20) = param_1;
  *(ulong *)(lVar9 + 0x28) = param_2;
  *(ulong *)(unaff_x20 + lVar6) = uVar4;
  func_0x000107c614a8(auStack_80);
  if (*(ulong *)(unaff_x20 + 0x18) <= uVar2) {
    pcVar10 = *(code **)(unaff_x20 + _DAT_112dd5ed0);
    lVar9 = 0;
    if (pcVar10 == (code *)0x0) goto LAB_10193549c;
    uVar8 = ((undefined8 *)(unaff_x20 + _DAT_112dd5ed0))[1];
    func_0x000107c6157c(uVar8);
    (*pcVar10)();
    func_0x00010058d43c(pcVar10,uVar8);
  }
  lVar9 = 0;
LAB_10193549c:
  if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x101935518);
    (*pcVar10)();
  }
  func_0x000107c61428(unaff_x20 + lVar1,auStack_80,0x21,0);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar8);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_101687ce0(lVar9 + 1,param_1,param_2,uVar8);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  func_0x000107c614a8(auStack_80);
  return;
}



/* Entry: 10193556c; end: 10193582b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193556c(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = _DAT_112dd5ec8;
  func_0x000107c61428(unaff_x20 + _DAT_112dd5ec8,auStack_78,0,0);
  lVar10 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar10 + 0x10) != 0) {
    func_0x000107c61434(lVar10);
    uVar11 = param_1;
    uVar15 = param_2;
    func_0x000100029284();
    if ((uVar15 & 1) == 0) {
      func_0x000107c6142c(lVar10);
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar10 + 0x38) + uVar11 * 8);
      func_0x000107c6142c(lVar10);
      lVar10 = lVar12 + -1;
      if (SBORROW8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101935824);
        (*pcVar5)();
      }
      func_0x000107c61428(unaff_x20 + lVar4,auStack_90,0x21,0);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
      func_0x000107c61558(uVar6);
      uVar9 = *(undefined8 *)(unaff_x20 + lVar4);
      *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
      FUN_101687ce0(lVar10,param_1,param_2,uVar6);
      *(undefined8 *)(unaff_x20 + lVar4) = uVar9;
      func_0x000107c614a8(auStack_90);
      lVar4 = _DAT_112dd5ec0;
      if (lVar10 == 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112dd5ec0,auStack_90,0x21,0);
        uVar11 = *(ulong *)(unaff_x20 + lVar4);
        uVar15 = *(ulong *)(uVar11 + 0x10);
        if (uVar15 == 0) {
          uVar13 = 0;
          uVar14 = 0;
        }
        else {
          lVar10 = 0;
          uVar13 = 0;
          do {
            uVar14 = *(ulong *)(uVar11 + lVar10 + 0x20);
            uVar2 = *(ulong *)(uVar11 + lVar10 + 0x28);
            if ((uVar14 == param_1 && uVar2 == param_2) ||
               (func_0x000107c605b8(uVar14,uVar2,param_1,param_2,0), (uVar14 & 1) != 0)) {
              uVar14 = uVar13 + 1;
              uVar15 = *(ulong *)(uVar11 + 0x10);
              if (uVar15 - 1 != uVar13) {
                do {
                  if (uVar15 <= uVar14) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101935820);
                    (*pcVar5)();
                  }
                  uVar2 = *(ulong *)(uVar11 + lVar10 + 0x30);
                  uVar3 = *(ulong *)(uVar11 + lVar10 + 0x38);
                  if ((uVar2 != param_1 || uVar3 != param_2) &&
                     (uVar7 = uVar2, func_0x000107c605b8(uVar2,uVar3,param_1,param_2,0),
                     (uVar7 & 1) == 0)) {
                    if (uVar14 != uVar13) {
                      if (uVar15 <= uVar13) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x101935828);
                        (*pcVar5)();
                      }
                      puVar1 = (undefined8 *)(uVar11 + 0x20 + uVar13 * 0x10);
                      uVar6 = *puVar1;
                      uVar9 = puVar1[1];
                      func_0x000107c61434(uVar9);
                      func_0x000107c61434(uVar3);
                      uVar15 = uVar11;
                      func_0x000107c61558();
                      *(ulong *)(unaff_x20 + lVar4) = uVar11;
                      if ((uVar15 & 1) == 0) {
                        func_0x0001014c4f24();
                        *(ulong *)(unaff_x20 + lVar4) = uVar11;
                      }
                      lVar12 = uVar11 + uVar13 * 0x10;
                      uVar8 = *(undefined8 *)(lVar12 + 0x28);
                      *(ulong *)(lVar12 + 0x20) = uVar2;
                      *(ulong *)(lVar12 + 0x28) = uVar3;
                      func_0x000107c6142c(uVar8);
                      *(ulong *)(unaff_x20 + lVar4) = uVar11;
                      if (*(ulong *)(uVar11 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x10193582c);
                        (*pcVar5)();
                      }
                      lVar12 = uVar11 + lVar10;
                      uVar8 = *(undefined8 *)(lVar12 + 0x38);
                      *(undefined8 *)(lVar12 + 0x30) = uVar6;
                      *(undefined8 *)(lVar12 + 0x38) = uVar9;
                      func_0x000107c6142c(uVar8);
                      *(ulong *)(unaff_x20 + lVar4) = uVar11;
                    }
                    uVar13 = uVar13 + 1;
                  }
                  uVar14 = uVar14 + 1;
                  uVar15 = *(ulong *)(uVar11 + 0x10);
                  lVar10 = lVar10 + 0x10;
                } while (uVar14 != uVar15);
              }
              goto LAB_1019356e0;
            }
            uVar13 = uVar13 + 1;
            lVar10 = lVar10 + 0x10;
          } while (uVar15 != uVar13);
          uVar14 = *(ulong *)(uVar11 + 0x10);
          uVar13 = uVar15;
LAB_1019356e0:
          if ((long)uVar14 < (long)uVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1019356f0);
            (*pcVar5)();
          }
        }
        func_0x000101755f94(uVar13,uVar14);
        func_0x000107c614a8(auStack_90);
      }
    }
  }
  return;
}



/* Entry: 10193582c; end: 1019358c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193582c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = _DAT_112dd5eb8;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dd5ec0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dd5ec8));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + _DAT_112dd5ed0),
                      ((undefined8 *)(unaff_x20 + _DAT_112dd5ed0))[1]);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112dd5ee0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019358c4; end: 101935917;  */

undefined1  [16] FUN_1019358c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar3 = *unaff_x20;
  uVar4 = 0x64696c61766e69;
  if (uVar3 == 3) {
    uVar4 = 0x30;
  }
  uVar1 = 0xe700000000000000;
  if (uVar3 == 3) {
    uVar1 = 0xe100000000000000;
  }
  uVar2 = 0x32;
  if (uVar3 != 2) {
    uVar2 = uVar4;
  }
  uVar4 = 0xe100000000000000;
  if (uVar3 != 2) {
    uVar4 = uVar1;
  }
  uVar1 = 0x31;
  if (1 < uVar3) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe100000000000000;
  if (1 < uVar3) {
    uVar2 = uVar4;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 101935918; end: 101935937;  */

void FUN_101935918(void)

{
  func_0x000107c61168(&PTR_PTR_1127ecb30);
  return;
}



/* Entry: 101935938; end: 101935953;  */

void FUN_101935938(void)

{
  if (lRam0000000112dd5f10 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e659da8);
  return;
}



/* Entry: 101935954; end: 101935a0b;  */

void FUN_101935954(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_68 = &UNK_10d998970;
  lVar1 = 0x13f;
  puStack_58 = puStack_60;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___sBbWV_11034d660 + 0x40;
    puStack_38 = &UNK_10d998988;
    puStack_28 = PTR___sBOWV_11034d658 + 0x40;
    puStack_30 = &UNK_10d9989a0;
    puStack_40 = puStack_48;
    func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 101935a0c; end: 101935a9b;  */

long * FUN_101935a0c(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101935a9c; end: 101935acf;  */

void FUN_101935a9c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000101935acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Entry: 101935ad0; end: 101935c63;  */

long FUN_101935ad0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined4 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined4 *)(param_2 + *(int *)(param_3 + 0x14));
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  return param_1;
}



/* Entry: 101935c64; end: 101935c8f;  */

void FUN_101935c64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101935c90; end: 101935cbf;  */

void FUN_101935c90(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 101935cc0; end: 101935db7;  */

void FUN_101935cc0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBi32_WV_11034d668 + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 101935db8; end: 101935e33;  */

undefined8 * FUN_101935db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 101935e34; end: 101935e87;  */

undefined8 * FUN_101935e34(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 101935e88; end: 101935f3f;  */

int FUN_101935e88(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101935f40; end: 101936097;  */

void FUN_101935f40(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101936098; end: 10193609b;  */

void FUN_101936098(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd60f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d998a80;
  func_0x000107c61520(&UNK_10d998a80,&UNK_1104142e0);
  puRam0000000112dd60f8 = puVar1;
  return;
}



/* Entry: 10193609c; end: 101936107;  */

void FUN_10193609c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd60f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d998a80;
  func_0x000107c61520(&UNK_10d998a80,&UNK_1104142e0);
  puRam0000000112dd60f8 = puVar1;
  return;
}



/* Entry: 101936108; end: 101936123;  */

void FUN_101936108(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101936124; end: 101936147;  */

void FUN_101936124(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101936148();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101936148; end: 101936423;  */

undefined *
FUN_101936148(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10193625c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d56390;
    func_0x0001000285a8(0x112d56390,&UNK_10d947440);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSsN_11034e1d8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101936424; end: 1019364e7;  */

undefined8 FUN_101936424(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000101936370();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101936ad4();
    }
    lVar2 = *(long *)(lVar3 + 0x30) + param_1 * 0x30;
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 8));
    func_0x000107c6142c(uVar4);
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x0001019375a0(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar4;
}



/* Entry: 1019364e8; end: 10193660b;  */

void FUN_1019364e8(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x0001000c8928(param_2);
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    func_0x000101935c7c();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101936c74();
    }
    lVar5 = *(long *)(lVar3 + 0x30);
    lVar4 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar4 + -8) + 8))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * param_2,lVar4);
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    func_0x000101935c7c();
    lVar6 = *(long *)(lVar4 + -8);
    func_0x000101937fb4(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    func_0x0001019377dc(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019365f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 10193660c; end: 101936777;  */

void FUN_10193660c(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar8 = *unaff_x20;
  puVar2 = param_2;
  puVar7 = param_2;
  func_0x000101936370();
  lVar3 = *(long *)(lVar8 + 0x10);
  uVar6 = (ulong)~(uint)puVar7 & 1;
  lVar4 = lVar3 + uVar6;
  if (SCARRY8(lVar3,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019366d8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x000101936ed4(lVar4);
    puVar2 = param_2;
    func_0x000101936370();
    if (((uint)puVar7 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1104142e0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019366a0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000101936ad4();
    lVar4 = *unaff_x20;
    goto joined_r0x0001019366ec;
  }
  lVar4 = *unaff_x20;
joined_r0x0001019366ec:
  if (((ulong)puVar7 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + (long)puVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + (long)puVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar5);
    return;
  }
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  lVar3 = lVar4 + ((ulong)puVar2 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << ((ulong)puVar2 & 0x3f);
  puVar7 = (undefined8 *)(*(long *)(lVar4 + 0x30) + (long)puVar2 * 0x30);
  uVar9 = param_2[5];
  uVar5 = param_2[4];
  puVar7[3] = uStack_58;
  puVar7[2] = uStack_60;
  puVar7[5] = uVar9;
  puVar7[4] = uVar5;
  puVar7[1] = uStack_48;
  *puVar7 = uStack_50;
  *(undefined8 *)(*(long *)(lVar4 + 0x38) + (long)puVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101936778);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  func_0x000100402194(&uStack_50,auStack_70);
  func_0x000101223174(&uStack_60,auStack_70);
  return;
}



/* Entry: 101936778; end: 1019368f7;  */

ulong FUN_101936778(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar3 = param_2;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = *unaff_x20;
  uVar4 = param_2;
  func_0x0001000c8928(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101936894);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < (long)(lVar5 + uVar6)) {
    param_3 = param_3 & 1;
    func_0x0001019371f8();
    uVar4 = param_2;
    func_0x0001000c8928(param_2);
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019368f8);
      (*pcVar1)();
    }
    lVar5 = *unaff_x20;
  }
  else if ((param_3 & 1) == 0) {
    func_0x000101936c74();
    lVar5 = *unaff_x20;
  }
  else {
    lVar5 = *unaff_x20;
  }
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    lVar2 = 0;
    func_0x000101935c7c();
    uVar4 = lVar5 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * uVar4;
    lVar2 = 0;
    func_0x000101935c7c();
    (**(code **)(*(long *)(lVar2 + -8) + 0x28))(uVar4,param_1,lVar2);
    return uVar4;
  }
  (**(code **)(lVar8 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_1019368f8(uVar4,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                lVar5);
  return uVar4;
}



/* Entry: 1019368f8; end: 1019369a7;  */

void FUN_1019368f8(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  lVar3 = *(long *)(param_4 + 0x38);
  lVar2 = 0;
  func_0x000101935c7c();
  func_0x000101937fb4(param_3,lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019369a8);
  (*pcVar1)();
}



/* Entry: 1019369a8; end: 101937a63;  */

undefined1  [16] FUN_1019369a8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar8 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    lVar10 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar9 = (ulong *)(lVar10 + param_2 * 0x30);
      uVar7 = *puVar9;
      uVar5 = puVar9[2];
      uVar3 = puVar9[3];
      uVar4 = puVar9[4];
      uVar11 = puVar9[5];
      if ((uVar7 == uVar1 && puVar9[1] == uVar2) ||
         (func_0x000107c605b8(uVar7,puVar9[1],uVar1,uVar2,0), (uVar7 & 1) != 0)) {
        uVar7 = param_1[3];
        if (uVar3 == 0) {
          if (uVar7 == 0) goto LAB_101936a8c;
        }
        else if ((uVar7 != 0) &&
                ((uVar5 == param_1[2] && uVar3 == uVar7 ||
                 (func_0x000107c605b8(uVar5,uVar3,param_1[2],uVar7,0), (uVar5 & 1) != 0)))) {
LAB_101936a8c:
          if (((int)uVar4 == (int)param_1[4]) && (uVar11 == param_1[5])) {
            uVar6 = 1;
            goto LAB_101936ab0;
          }
        }
      }
      param_2 = param_2 + 1 & ~uVar8;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  uVar6 = 0;
LAB_101936ab0:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = param_2;
  return auVar12;
}



/* Entry: 101937a64; end: 101937b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101937a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_8;
  func_0x000107c610f8();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(lVar2 + _DAT_112dd5e78) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(lVar2 + _DAT_112dd5e80) = puVar1;
  *(undefined8 *)(lVar2 + _DAT_112dd5e88) = 0;
  *(undefined8 *)(lVar2 + _DAT_112dd5e40) = param_2;
  *(undefined8 *)(lVar2 + _DAT_112dd5e48) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112dd5e50) = param_4;
  *(undefined8 *)(lVar2 + _DAT_112dd5e58) = param_5;
  *(undefined8 *)(lVar2 + _DAT_112dd5e60) = param_6;
  *(undefined8 *)(lVar2 + _DAT_112dd5e68) = param_7;
  *(undefined8 *)(lVar2 + _DAT_112dd5e70) = param_1;
  lStack_70 = lVar2;
  lStack_68 = param_8;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101937b60; end: 101937c03;  */

bool FUN_101937b60(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    uVar1 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar1 != 0) {
        return false;
      }
    }
    else {
      if (uVar1 == 0) {
        return false;
      }
      uVar2 = param_1[2];
      if ((uVar2 != param_2[2] || param_1[3] != uVar1) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
      {
        return false;
      }
    }
    if ((int)param_1[4] == (int)param_2[4]) {
      return param_1[5] == param_2[5];
    }
  }
  return false;
}



/* Entry: 101937c04; end: 101937c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101937c04(ulong param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((param_3 & 1) == 0) {
    uVar3 = param_1;
    FUN_101931fd0();
    lVar4 = *(long *)(uVar3 + 0x10);
    func_0x000107c6142c();
    if (lVar4 != 0) {
      func_0x000107c5fbbc(param_1,param_2);
      uVar3 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112dd5e88) + 0x10);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101937c80);
        (*pcVar2)();
      }
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = param_1 / uVar3;
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_112dd5e88) + (param_1 - uVar1 * uVar3) * 0x10;
      param_1 = *(ulong *)(lVar4 + 0x20);
      param_2 = *(undefined8 *)(lVar4 + 0x28);
    }
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 101937c80; end: 101937cc3;  */

void FUN_101937c80(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001019326ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x20 + 0x48),
                      *(undefined1 *)(unaff_x20 + 0x4c),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101937cc4; end: 101937cdf;  */

void FUN_101937cc4(long param_1,long param_2)

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



/* Entry: 101937ce0; end: 101937d23;  */

void FUN_101937ce0(void)

{
  long unaff_x20;
  
  FUN_1019329c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined4 *)(unaff_x20 + 0x50),*(undefined1 *)(unaff_x20 + 0x54),
                *(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101937d24; end: 101937e43;  */

void FUN_101937d24(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_48 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_50 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_38 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_40 = *(undefined8 *)(unaff_x20 + 0x38);
    FUN_101933780(&uStack_60,unaff_x20 + (uVar2 + 0x58 & (uVar2 ^ 0xffffffffffffffff)),param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101937e44; end: 101937e4b;  */

undefined1 FUN_101937e44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 uStack_61;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_61 = 0;
  puVar6 = &UNK_110414888;
  func_0x000107c613fc(&UNK_110414888,0x28,7);
  *(undefined1 **)(puVar6 + 0x10) = &uStack_61;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  puVar7 = &UNK_1104148b0;
  func_0x000107c613fc(&UNK_1104148b0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x1019381d0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x1019386a0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_10103b958;
  puStack_80 = &UNK_1104148c8;
  ppuVar8 = &puStack_98;
  puStack_70 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_70;
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_110414900;
  func_0x000107c613fc(&UNK_110414900,0x18,7);
  *(undefined1 **)(puVar9 + 0x10) = &uStack_61;
  puVar10 = &UNK_110414928;
  func_0x000107c613fc(&UNK_110414928,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x1019381dc;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uStack_78 = 0x1019386a4;
  puStack_98 = puVar3;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100e27b38;
  puStack_80 = &UNK_110414940;
  ppuVar11 = &puStack_98;
  puStack_70 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar3 = puStack_70;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar3);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  uVar4 = uStack_61;
  func_0x000107c61574(puVar6);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x6f,0xec,0x25,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101933e7c);
    (*pcVar5)();
  }
  puVar6 = puVar10;
  func_0x000107c61544(puVar10,"",0x6f,0xef,0x1c,1);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar6 & 1) == 0) {
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101933e80);
  (*pcVar5)();
}



/* Entry: 101937e4c; end: 101937ecf;  */

void FUN_101937e4c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101937ed0; end: 101937ee3;  */

void FUN_101937ed0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar6 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  puVar4 = &UNK_110414608;
  func_0x000107c613fc(&UNK_110414608,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  puVar5 = &UNK_110414630;
  func_0x000107c613fc(&UNK_110414630,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101937f0c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101937f14;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_110414648;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c61580(uVar1,2);
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_110414680;
  func_0x000107c613fc(&UNK_110414680,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar7;
  *(undefined8 *)(puVar8 + 0x18) = uVar1;
  puVar9 = &UNK_1104146a8;
  func_0x000107c613fc(&UNK_1104146a8,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_101937f60;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_80 = (code *)0x101938694;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104146c0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar2);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6f,0x10b,0x25,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019346ac);
    (*pcVar3)();
  }
  puVar4 = puVar9;
  func_0x000107c61544(puVar9,"",0x6f,0x10d,0x1c,1);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1019346b0);
  (*pcVar3)();
}



/* Entry: 101937ee4; end: 101937f0b;  */

void FUN_101937ee4(void)

{
  long unaff_x20;
  
  FUN_10193556c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101937f0c; end: 101937f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101937f0c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar14 = *(long *)(lVar5 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = _DAT_112dd5eb8;
  lVar11 = (long)&puStack_90 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar6 = PTR_PTR_1126b9718;
  func_0x000107c61168();
  func_0x000107c5bdac();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    uVar10 = *(undefined8 *)(lVar1 + _DAT_112dd5e60);
    (**(code **)(lVar14 + 0x10))(lVar11,lVar2 + lVar3,lVar5);
    uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
    uVar15 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
    uVar13 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
    puVar7 = &UNK_110414748;
    func_0x000107c613fc(&UNK_110414748,uVar13 + 8,uVar9 | 7);
    *(long *)(puVar7 + 0x10) = lVar1;
    (**(code **)(lVar14 + 0x20))(puVar7 + uVar15,lVar11,lVar5);
    *(undefined **)(puVar7 + uVar13) = puVar6;
    uStack_70 = 0x1019386b8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110414760;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_68;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(puVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(uVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101934848);
  (*pcVar4)();
}



/* Entry: 101937f14; end: 101937f33;  */

void FUN_101937f14(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101937f34; end: 101937f5f;  */

void FUN_101937f34(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101937f60; end: 101937f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101937f60(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar14 = *(long *)(lVar5 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = _DAT_112dd5eb8;
  lVar11 = (long)&puStack_90 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar6 = PTR_PTR_1126b9718;
  func_0x000107c61168();
  func_0x000107c5bda8();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    uVar10 = *(undefined8 *)(lVar1 + _DAT_112dd5e60);
    (**(code **)(lVar14 + 0x10))(lVar11,lVar2 + lVar3,lVar5);
    uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
    uVar15 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
    uVar13 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
    puVar7 = &UNK_1104146f8;
    func_0x000107c613fc(&UNK_1104146f8,uVar13 + 8,uVar9 | 7);
    *(long *)(puVar7 + 0x10) = lVar1;
    (**(code **)(lVar14 + 0x20))(puVar7 + uVar15,lVar11,lVar5);
    *(undefined **)(puVar7 + uVar13) = puVar6;
    uStack_70 = 0x101937f68;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110414710;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_68;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(puVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(uVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1019349e0);
  (*pcVar4)();
}



/* Entry: 101937f6c; end: 1019380b7;  */

undefined8 FUN_101937f6c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dd6108;
  func_0x0001000285a8(0x112dd6108,&UNK_10d998ae8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1019380b8; end: 101938137;  */

void FUN_1019380b8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101938138; end: 1019381c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101938138(double param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint auStack_70 [2];
  undefined1 auStack_68 [24];
  
  lVar5 = 0;
  func_0x000107c5eec8();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar9 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar9 + 7 & 0xffffffffffffff8));
  lVar5 = 0x112dd6108;
  func_0x0001000285a8(0x112dd6108,&UNK_10d998ae8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)auStack_70 - extraout_x8;
  lVar1 = 0;
  func_0x000101935c7c();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar6 + _DAT_112dd5e80,auStack_68,0x21,0);
  FUN_1019364e8(lVar12,unaff_x20 + uVar9);
  func_0x000107c614a8(auStack_68);
  lVar5 = lVar12;
  (**(code **)(lVar13 + 0x30))(lVar12,1,lVar1);
  if ((int)lVar5 == 1) {
    FUN_101937f6c(lVar12);
  }
  else {
    func_0x000101937fb4(lVar12,lVar10);
    uVar11 = *(undefined8 *)(lVar6 + _DAT_112dd5e58);
    uVar2 = 0x5f72656b63697473;
    func_0x000107c5fadc(0x5f72656b63697473,0xed0000746e756f63);
    puVar3 = PTR___sSiN_11034deb0;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c((long)*(int *)(lVar1 + 0x18),PTR___sSiN_11034deb0,
                        PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
    func_0x000107c5e508(uVar8);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    uVar4 = 0x65727574616566;
    func_0x000107c5fadc(0x65727574616566,0xe700000000000000);
    uVar9 = (ulong)*(uint *)(lVar10 + *(int *)(lVar1 + 0x14));
    func_0x00010900605c(uVar9);
    func_0x000107c61180();
    uVar2 = uVar8;
    func_0x000107c5e508(uVar8);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar9);
    func_0x000107c5ee84();
    func_0x000107c3d8dc(param_1 * -1000.0,uVar11);
    func_0x000107c61170(uVar2);
    func_0x000101937ff8(lVar10);
  }
  return;
}



/* Entry: 1019381c8; end: 1019381eb;  */

/* WARNING: Possible PIC construction at 0x0001019343f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101934410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019343f4) */
/* WARNING: Removing unreachable block (ram,0x000101934414) */

void FUN_1019381c8(long param_1)

{
  long unaff_x20;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  }
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c42d78();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019381ec; end: 101938257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019381ec(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_c0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = 0;
  func_0x000107c5eec8();
  uVar12 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  uVar12 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + (uVar12 + 0x28 & (uVar12 ^ 0xffffffffffffffff))
           + 7 & 0xfffffffffffffff8;
  lVar9 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + uVar12);
  lVar11 = *(long *)(unaff_x20 + uVar12 + 8);
  puVar1 = (undefined8 *)(unaff_x20 + uVar12 + 0x10);
  func_0x000107c61428(lVar9 + 0x10,auStack_78,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61648();
  lVar4 = _DAT_112dd5ed8;
  lVar3 = _DAT_112dd5ec0;
  if (lVar9 != 0) {
    if ((*(byte *)(lVar9 + _DAT_112dd5ed8) & 1) == 0) {
      func_0x000107c61428(lVar9 + _DAT_112dd5ec0,auStack_90,0,0);
      if (*(long *)(*(long *)(lVar9 + lVar3) + 0x10) == 0) {
        uVar8 = 0;
        *(undefined1 *)(lVar9 + lVar4) = 1;
      }
      else {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          uVar8 = *puVar1;
          func_0x000107c5fadc(uVar8,puVar1[1]);
          if (puVar1[3] == 0) {
            uStack_c0 = 0;
          }
          else {
            uStack_c0 = puVar1[2];
            func_0x000107c5fadc();
          }
          uVar13 = *(undefined8 *)(lVar9 + lVar3);
          uVar5 = uVar13;
          func_0x000107c61434(uVar13);
          func_0x000107c5fc48();
          func_0x000107c6142c(uVar13);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          lVar7 = lVar11;
          func_0x000107c5c2ac();
          func_0x000107c61180();
          func_0x000107c615e8(lVar11);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uStack_c0);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(puVar6);
          lVar11 = lVar7;
          func_0x000107c5c310();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
        }
        func_0x000107c61428(lVar10 + 0x10,auStack_a8,1,0);
        uVar8 = *(undefined8 *)(lVar10 + 0x10);
        *(long *)(lVar10 + 0x10) = lVar11;
        func_0x000107c61170(uVar8);
        *(undefined1 *)(lVar9 + lVar4) = 1;
        uVar8 = *(undefined8 *)(*(long *)(lVar9 + lVar3) + 0x10);
      }
      (*pcVar2)(uVar8);
    }
    func_0x000107c61574(lVar9);
  }
  return;
}



/* Entry: 101938258; end: 101938267;  */

void FUN_101938258(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  uStack_40 = 0x101938260;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110414a30;
  uStack_38 = uVar2;
  func_0x000107c60bc4(&puStack_60);
  uVar3 = uStack_38;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 101938268; end: 1019382fb;  */

undefined8 FUN_101938268(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dd6108;
  func_0x0001000285a8(0x112dd6108,&UNK_10d998ae8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}


