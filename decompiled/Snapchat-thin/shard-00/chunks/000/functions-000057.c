/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001854b4; end: 100188097;  */

uint FUN_1001854b4(long param_1,int param_2)

{
  if (param_2 == 1) {
    if (*(long *)(param_1 + 0x30) != 0) {
      return (uint)(*(char *)(*(long *)(param_1 + 0x30) + 4) == '\0');
    }
  }
  else if (param_2 == 0) {
    FUN_100184c40();
    return (uint)param_1 ^ 1;
  }
  return 0;
}



/* Entry: 100188098; end: 100188337;  */

void FUN_100188098(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **unaff_x21;
  long *plVar16;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c4f558(param_1,param_2,&PTR____CFConstantStringClassReference_110f60878,0,0);
  func_0x000107c61180();
  ppuVar15 = (undefined **)PTR_PTR_1126dffd8;
  func_0x000107c610f4();
  puStack_148 = param_1;
  func_0x000107c5dc0c(param_1);
  func_0x000107c61180();
  uStack_f8 = 0;
  ppuVar14 = ppuVar15;
  func_0x000107c4636c();
  uStack_150 = uStack_f8;
  func_0x000107c61174();
  func_0x000107c61170(param_1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuVar3 = ppuVar14;
  func_0x000107c50930(ppuVar14);
  func_0x000107c61180();
  func_0x000107c40808();
  func_0x000107c3e170();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar3);
  ppuVar3 = ppuVar14;
  ppuStack_158 = ppuVar14;
  func_0x000107c50930();
  func_0x000107c61180();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  puStack_130 = (undefined8 *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  ppuVar5 = ppuVar3;
  func_0x000107c4080c();
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar14 = (undefined **)*puStack_130;
    ppuVar15 = &PTR_PTR_1126df000;
    do {
      unaff_x21 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_130 != ppuVar14) {
          func_0x000107c61128(ppuVar3);
        }
        plVar16 = *(long **)(lStack_138 + (long)unaff_x21 * 8);
        plVar6 = plVar16;
        func_0x000107c50938(plVar16);
        func_0x000107c61180();
        plVar7 = plVar16;
        func_0x000107c5091c();
        func_0x000107c61180();
        plVar8 = plVar6;
        param_2 = plVar7;
        FUN_10018d0b4(plVar6);
        func_0x000107c61180();
        func_0x000107c61170(plVar7);
        func_0x000107c61170(plVar6);
        puVar9 = PTR_PTR_1126dffe0;
        func_0x000107c610f4(PTR_PTR_1126dffe0);
        func_0x000107c3ac28(plVar16);
        func_0x000107c61180();
        func_0x000107c45d5c(puVar9);
        func_0x000107c61170(plVar16);
        func_0x000107c3d798(puVar4);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(plVar8);
        unaff_x21 = (undefined **)((long)unaff_x21 + 1);
      } while (ppuVar5 != unaff_x21);
      ppuVar5 = ppuVar3;
      func_0x000107c4080c();
    } while (ppuVar5 != (undefined **)0x0);
  }
  puVar9 = PTR_PTR_1126dffe8;
  func_0x000107c610f4(PTR_PTR_1126dffe8);
  func_0x000107c453e8();
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(ppuStack_158);
  func_0x000107c61170(uStack_150);
  puVar10 = puStack_148;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  func_0x000107c60e78();
  uStack_168 = 0x100188338;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  lVar12 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar12 < 0) {
    lVar12 = puVar10[1];
    if (lVar12 == 0) {
      return;
    }
  }
  else if (*(char *)((long)puVar10 + 0x17) == '\0') {
    return;
  }
  lVar13 = (long)*(char *)((long)puVar10 + 0x2f);
  if (lVar13 < 0) {
    lVar13 = puVar10[4];
  }
  puStack_190 = puVar4;
  ppuStack_188 = unaff_x21;
  ppuStack_180 = ppuVar15;
  ppuStack_178 = ppuVar14;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x000107c60c84(extraout_x8,lVar12 + lVar13 + 4);
  lVar12 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar12 < 0) {
    lVar12 = puVar10[1];
    if (lVar12 == 0) goto LAB_1001883b4;
  }
  else if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_1001883b4;
  *param_2 = lVar12 << 0x20;
  func_0x0001001884fc(extraout_x8,puVar10);
LAB_1001883b4:
  func_0x000107c60c58(extraout_x8,&UNK_10e58a898);
  lVar13 = (long)*(char *)((long)puVar10 + 0x2f);
  lVar12 = lVar13;
  if (lVar13 < 0) {
    lVar12 = puVar10[4];
  }
  if (lVar12 != 0) {
    uVar1 = extraout_x8[1];
    if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
    }
    if (*(char *)((long)puVar10 + 0x2f) < '\0') {
      lVar13 = puVar10[4];
    }
    param_2[3] = uVar1 & 0xffffffff | lVar13 << 0x20;
    func_0x0001001884fc(extraout_x8,puVar10 + 3);
  }
  lVar12 = (long)*(char *)((long)puVar10 + 0x17);
  puVar11 = puVar10;
  if (lVar12 < 0) {
    lVar12 = puVar10[1];
    puVar11 = (undefined8 *)*puVar10;
  }
  func_0x000100187890(puVar11,lVar12);
  if (((uint)puVar11 != 0xffffffff) && ((uint)puVar11 != (uint)*(ushort *)(puVar10 + 6))) {
    func_0x000107c60c8c(extraout_x8,0x3a);
    uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
    uStack_198 = 0xaaaaaaaaaaaaaaaa;
    uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
    func_0x000100888f90(&uStack_1a8,*(undefined2 *)(puVar10 + 6));
    uVar1 = extraout_x8[1];
    if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
    }
    uVar2 = uStack_1a0;
    if (-1 < (long)uStack_198) {
      uVar2 = uStack_198 >> 0x38;
    }
    param_2[4] = uVar1 & 0xffffffff | uVar2 << 0x20;
    func_0x0001001884fc(extraout_x8,&uStack_1a8);
    func_0x000100188090();
  }
  return;
}



/* Entry: 100188338; end: 1001886af;  */

void FUN_100188338(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar4 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = param_2[1];
    if (lVar4 == 0) {
      return;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) == '\0') {
    return;
  }
  lVar5 = (long)*(char *)((long)param_2 + 0x2f);
  if (lVar5 < 0) {
    lVar5 = param_2[4];
  }
  func_0x000107c60c84(param_1,lVar4 + lVar5 + 4);
  lVar4 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = param_2[1];
    if (lVar4 == 0) goto LAB_1001883b4;
  }
  else if (*(char *)((long)param_2 + 0x17) == '\0') goto LAB_1001883b4;
  *param_3 = lVar4 << 0x20;
  func_0x0001001884fc(param_1,param_2);
LAB_1001883b4:
  func_0x000107c60c58(param_1,&UNK_10e58a898);
  lVar5 = (long)*(char *)((long)param_2 + 0x2f);
  lVar4 = lVar5;
  if (lVar5 < 0) {
    lVar4 = param_2[4];
  }
  if (lVar4 != 0) {
    uVar1 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    if (*(char *)((long)param_2 + 0x2f) < '\0') {
      lVar5 = param_2[4];
    }
    param_3[3] = uVar1 & 0xffffffff | lVar5 << 0x20;
    func_0x0001001884fc(param_1,param_2 + 3);
  }
  lVar4 = (long)*(char *)((long)param_2 + 0x17);
  puVar3 = param_2;
  if (lVar4 < 0) {
    lVar4 = param_2[1];
    puVar3 = (undefined8 *)*param_2;
  }
  func_0x000100187890(puVar3,lVar4);
  if (((uint)puVar3 != 0xffffffff) && ((uint)puVar3 != (uint)*(ushort *)(param_2 + 6))) {
    func_0x000107c60c8c(param_1,0x3a);
    uStack_40 = 0xaaaaaaaaaaaaaaaa;
    uStack_38 = 0xaaaaaaaaaaaaaaaa;
    uStack_48 = 0xaaaaaaaaaaaaaaaa;
    func_0x000100888f90(&uStack_48,*(undefined2 *)(param_2 + 6));
    uVar1 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    uVar2 = uStack_40;
    if (-1 < (long)uStack_38) {
      uVar2 = uStack_38 >> 0x38;
    }
    param_3[4] = uVar1 & 0xffffffff | uVar2 << 0x20;
    func_0x0001001884fc(param_1,&uStack_48);
    func_0x000100188090();
  }
  return;
}



/* Entry: 1001886b0; end: 1001886b7; -[SCLRUCache setObject:forKey:] */

void FUN_1001886b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey_cost__112651b88,param_3,param_4,0);
  return;
}



/* Entry: 1001886b8; end: 10018871f;  */

void FUN_1001886b8(void)

{
  return;
}



/* Entry: 100188720; end: 10018884f; -[SCLRUCache setObject:forKey:cost:] */

/* WARNING: Possible PIC construction at 0x0001001887f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100188830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001887f8) */

void FUN_100188720(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_4);
  if (param_3 != 0) {
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x000107c61174(param_3);
    func_0x000107c4d9c0(puVar3,param_2,param_4);
    func_0x000107c61180();
    bVar1 = puVar3 == (undefined *)0x0;
    if (bVar1) {
      puVar3 = PTR_PTR_1126e00c0;
      func_0x000107c610fc(PTR_PTR_1126e00c0);
      func_0x000107c559a4();
      func_0x000107c56bcc(*(undefined8 *)(param_1 + 8),param_2,puVar3,param_4);
    }
    puVar2 = puVar3;
    func_0x000107c40804(puVar3);
    func_0x000107c3c2dc(param_1,param_2,puVar3);
    func_0x000107c3b610(param_1,param_2,param_5 - (long)puVar2,bVar1);
    func_0x000107c539f0(puVar3,param_2,param_5);
    func_0x000107c5a494(puVar3,param_2,param_3);
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100188850; end: 100189263;  */

undefined8 * FUN_100188850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    func_0x0001001888d4();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 100189264; end: 100189293; -[SCLRUCacheNode setKey:] */

void FUN_100189264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100189294; end: 10018958f;  */

void FUN_100189294(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar5 = (undefined *)0x0;
  if (param_1 == 0) goto LAB_1001894e4;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
  pbVar3 = param_2;
  func_0x000107c6115c(param_2,puVar5);
  if (((ulong)pbVar3 & 1) == 0) {
    pbVar3 = PTR_PTR_1126bdbc0;
    func_0x000107c41308();
    func_0x000107c61180();
    if ((param_2 == (byte *)0x0) || (pbVar3 != (byte *)0x0)) {
      puVar5 = PTR_PTR_1126e0340;
      func_0x000107c610f4(PTR_PTR_1126e0340);
      func_0x000107c47058(0,0);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    goto LAB_1001894dc;
  }
  func_0x000107c61174(param_2);
  pbVar3 = param_2;
  func_0x000107c61178();
  func_0x000107c4d994();
  puVar5 = (undefined *)0x0;
  bVar1 = *pbVar3;
  uVar4 = (uint)bVar1;
  pbVar3 = param_2;
  if (bVar1 < 0x53) {
    if (uVar4 == 0x4b || bVar1 < 0x4b) {
      if ((bVar1 == 0x43) || (bVar1 == 0x49)) {
LAB_100189490:
        puVar5 = PTR_PTR_1126e0340;
        func_0x000107c610f4(PTR_PTR_1126e0340);
        func_0x000107c5d388(param_2);
        goto LAB_1001894c0;
      }
    }
    else if ((uVar4 == 0x4c) || (bVar1 == 0x51)) goto LAB_100189490;
  }
  else {
    uVar2 = uVar4 - 100;
    if (uVar2 < 0x10) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0xa120U) == 0) {
        if (uVar2 == 0) {
          puVar5 = PTR_PTR_1126e0340;
          func_0x000107c610f4(PTR_PTR_1126e0340);
          func_0x000107c4223c(param_2);
        }
        else {
          if (uVar2 != 2) goto LAB_100189448;
          puVar5 = PTR_PTR_1126e0340;
          func_0x000107c610f4(PTR_PTR_1126e0340);
          func_0x000107c436dc(param_2);
        }
      }
      else {
        puVar5 = PTR_PTR_1126e0340;
        func_0x000107c610f4(PTR_PTR_1126e0340);
        func_0x000107c49820(param_2);
      }
    }
    else {
LAB_100189448:
      if (uVar4 == 0x53) goto LAB_100189490;
      if (bVar1 != 99) goto LAB_1001894dc;
      puVar5 = PTR_PTR_1126e0340;
      func_0x000107c610f4(PTR_PTR_1126e0340);
      func_0x000107c3f7f8(param_2);
    }
LAB_1001894c0:
    func_0x000107c47058(puVar5);
  }
LAB_1001894dc:
  func_0x000107c61170(pbVar3);
LAB_1001894e4:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100189590; end: 100189597; -[SCLRUCacheNode cost] */

undefined8 FUN_100189590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100189598; end: 100189693; -[SCLRUCache _removeNodeFromLinkedList:] */

/* WARNING: Possible PIC construction at 0x000100189628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100189654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100189674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100189678) */

void FUN_100189598(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4f1f0();
  func_0x000107c61180();
  lVar2 = param_3;
  func_0x000107c4d660();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c56a8c(lVar1,param_2,lVar2);
  }
  if (lVar2 != 0) {
    func_0x000107c57818(lVar2,param_2,lVar1);
  }
  if (param_3 == *(long *)(param_1 + 0x10)) {
    func_0x000107c4d660();
    func_0x000107c61180();
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
  }
  else if (param_3 == *(long *)(param_1 + 0x18)) {
    func_0x000107c4f1f0();
    func_0x000107c61180();
    lVar2 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
  }
  else {
    func_0x000107c57818(param_3,param_2,0);
    func_0x000107c56a8c(param_3,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100189694; end: 1001896ab; -[SCLRUCacheNode previous] */

void FUN_100189694(long param_1)

{
  func_0x000107c61148(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1001896ac; end: 1001896c3; -[SCLRUCacheNode next] */

void FUN_1001896ac(long param_1)

{
  func_0x000107c61148(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1001896c4; end: 100189f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001896c4(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  code *pcStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined *puStack_3a0;
  undefined **ppuStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_279 [513];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_1;
  ppuVar12 = param_3;
  FUN_10006f5b0(param_1,param_3);
  if (((ulong)ppuVar6 & 1) != 0) goto LAB_100189ef4;
  ppuVar12 = param_1;
  func_0x000107c4d9e8();
  ppuVar6 = param_1;
  func_0x000107c40808();
  if ((ppuVar6 == (undefined **)0x1) && (ppuVar12 != (undefined **)0x0)) {
    ppuVar6 = *(undefined ***)((long)param_3 + (long)_DAT_112796274);
    func_0x000107c3ff54();
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    ppuVar7 = ppuVar12;
    func_0x000107c4080c();
    if (ppuVar7 != (undefined **)0x0) {
      lVar9 = *plStack_2b0;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_2b0 != lVar9) {
            func_0x000107c61128(ppuVar12);
          }
          uVar8 = *(undefined8 *)(lStack_2b8 + (long)ppuVar13 * 8);
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x000107c61158(PTR__OBJC_CLASS___NSArray_1126ae530);
          ppuVar3 = ppuVar6;
          func_0x000107c6115c(ppuVar6,puVar1);
          if (((ulong)ppuVar3 & 1) == 0) {
            func_0x000107c5dc2c();
          }
          else {
            func_0x000107c49820(uVar8);
            func_0x000107c4d9a4();
          }
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar7 != ppuVar13);
        ppuVar7 = ppuVar12;
        func_0x000107c4080c();
      } while (ppuVar7 != (undefined **)0x0);
    }
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar6 = *(undefined ***)((long)param_3 + (long)_DAT_112796278);
      puStack_3a0 = (undefined *)((ulong)puStack_3a0 & 0xffffffffffffff00);
      ppuVar12 = &puStack_3a0;
      func_0x000107c3deec(ppuVar6);
    }
    else {
      func_0x000107c3ab6c(ppuVar6);
      ppuVar12 = param_3;
    }
    goto LAB_100189ef4;
  }
  ppuVar12 = param_1;
  func_0x000107c4d9e8();
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar6 = param_1;
    func_0x000107c3fa20();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61158();
    if (ppuVar6 == ppuVar7) {
      lVar4 = *(long *)((long)param_3 + (long)_DAT_11279627c);
      lVar9 = lVar4;
      func_0x000107c60790(lVar4);
      func_0x000107c60798(lVar4,param_1,lVar9 + 1);
      uVar5 = 0x19;
    }
    else {
      uVar5 = 9;
    }
    puStack_3a0 = (undefined *)CONCAT71(puStack_3a0._1_7_,uVar5);
    func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    uVar2 = *(ulong *)((long)param_3 + (long)_DAT_112796278);
    func_0x000107c4adac();
    if ((uVar2 & 3) != 0) {
      func_0x000107c45310(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    }
    ppuVar3 = param_1;
    func_0x000107c40808();
    puStack_3a0 = (undefined *)CONCAT44(puStack_3a0._4_4_,(int)ppuVar3);
    func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    puStack_3a0 = (undefined *)0x0;
    uStack_390 = 0x2020000000;
    uStack_388 = 0;
    puStack_3d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3d0 = 0xc2000000;
    pcStack_3c8 = FUN_100189fc4;
    puStack_3c0 = &UNK_110d95b48;
    ppuVar12 = &puStack_3d8;
    ppuStack_3b8 = &puStack_3a0;
    ppuStack_3b0 = param_3;
    ppuStack_3a8 = ppuVar3;
    ppuStack_398 = &puStack_3a0;
    func_0x000107c429c4(param_1);
    ppuVar13 = (undefined **)ppuStack_398[3];
    while (ppuVar13 < ppuVar3) {
      auStack_279[0] = 0;
      func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
      auStack_279[0] = 0;
      ppuVar12 = (undefined **)auStack_279;
      func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
      ppuVar13 = (undefined **)(ppuStack_398[3] + 1);
      ppuStack_398[3] = (undefined *)ppuVar13;
    }
    if (ppuVar6 != ppuVar7) {
      lVar4 = *(long *)((long)param_3 + (long)_DAT_11279627c);
      lVar9 = lVar4;
      func_0x000107c60790(lVar4);
      ppuVar12 = (undefined **)(lVar9 + 1);
      func_0x000107c60798(lVar4,param_1,ppuVar12);
    }
    ppuVar6 = &puStack_3a0;
    func_0x000107c60bcc(ppuVar6,8);
    goto LAB_100189ef4;
  }
  ppuVar7 = param_1;
  func_0x000107c3db60();
  func_0x000107c4ec60(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  func_0x000107c4351c();
  puVar1 = *(undefined **)((long)param_3 + (long)_DAT_112796288);
  func_0x000107c4d9e8();
  if (puVar1 == (undefined *)0x0) {
LAB_100189960:
    puVar1 = PTR_PTR_1126e2d48;
    func_0x000107c61160();
    func_0x000107c61104();
    *(undefined ***)(puVar1 + 8) = ppuVar12;
    *(undefined ***)(puVar1 + 0x10) = ppuVar7;
    func_0x000107c56bd8(*(undefined8 *)((long)param_3 + (long)_DAT_112796288));
  }
  else {
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    plStack_2f0 = (long *)0x0;
    ppuVar6 = ppuVar7;
    func_0x000107c4080c();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar7 = *(undefined ***)(puVar1 + 0x10);
    }
    else {
      puVar10 = (undefined *)0x0;
      lVar9 = *plStack_2f0;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_2f0 != lVar9) {
            func_0x000107c61128(ppuVar7);
          }
          uVar2 = *(ulong *)(puVar1 + 0x10);
          func_0x000107c40404();
          if ((uVar2 & 1) == 0) {
            if (puVar10 == (undefined *)0x0) {
              puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x000107c3e15c();
            }
            func_0x000107c3d798(puVar10);
          }
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar6 != ppuVar13);
        ppuVar6 = ppuVar7;
        func_0x000107c4080c();
      } while (ppuVar6 != (undefined **)0x0);
      ppuVar7 = *(undefined ***)(puVar1 + 0x10);
      if (puVar10 != (undefined *)0x0) {
        func_0x000107c3e164();
        goto LAB_100189960;
      }
    }
  }
  lVar9 = *(long *)((long)param_3 + (long)_DAT_112796280);
  func_0x000107c60794(lVar9,puVar1);
  uVar2 = lVar9 - 1;
  if (lVar9 == 0 || uVar2 == 0x7fffffffffffffff) {
    uVar11 = *(ulong *)((long)param_3 + (long)_DAT_112796280);
    uVar2 = uVar11;
    func_0x000107c60790();
    func_0x000107c60798(uVar11,puVar1,uVar2 + 1);
    puStack_3a0 = (undefined *)CONCAT71(puStack_3a0._1_7_,0x1e);
    func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    lVar9 = *(long *)(puVar1 + 8);
    func_0x000107c3ac4c();
    uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_112796278);
    if (lVar9 == 0) {
      puStack_3a0 = (undefined *)((ulong)puStack_3a0 & 0xffffffffffffff00);
      func_0x000107c3deec(uVar8);
    }
    else {
      func_0x000107c613d0();
      func_0x000107c3deec(uVar8);
    }
    uVar11 = *(ulong *)((long)param_3 + (long)_DAT_112796278);
    func_0x000107c4adac();
    if ((uVar11 & 3) != 0) {
      func_0x000107c45310(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    }
    ppuVar12 = ppuVar7;
    func_0x000107c40808();
    puStack_3a0 = (undefined *)CONCAT44(puStack_3a0._4_4_,(int)ppuVar12);
    func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    lStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    plStack_330 = (long *)0x0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    ppuVar12 = ppuVar7;
    func_0x000107c4080c();
    if (ppuVar12 != (undefined **)0x0) {
      lVar9 = *plStack_330;
      do {
        ppuVar6 = (undefined **)0x0;
        do {
          if (*plStack_330 != lVar9) {
            func_0x000107c61128(ppuVar7);
          }
          lVar4 = *(long *)(lStack_338 + (long)ppuVar6 * 8);
          func_0x000107c417f0();
          func_0x000107c3ac4c();
          uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_112796278);
          if (lVar4 == 0) {
            puStack_3a0 = (undefined *)((ulong)puStack_3a0 & 0xffffffffffffff00);
            func_0x000107c3deec(uVar8);
          }
          else {
            func_0x000107c613d0();
            func_0x000107c3deec(uVar8);
          }
          ppuVar6 = (undefined **)((long)ppuVar6 + 1);
        } while (ppuVar12 != ppuVar6);
        ppuVar12 = ppuVar7;
        func_0x000107c4080c();
      } while (ppuVar12 != (undefined **)0x0);
    }
  }
  lVar4 = *(long *)((long)param_3 + (long)_DAT_11279627c);
  lVar9 = lVar4;
  func_0x000107c60790(lVar4);
  func_0x000107c60798(lVar4,param_1,lVar9 + 1);
  if (uVar2 < 0x100) {
    puStack_3a0._0_1_ = 0x1f;
    func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    puStack_3a0 = (undefined *)CONCAT71(puStack_3a0._1_7_,(char)uVar2);
    func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
  }
  else if (uVar2 >> 0x10 == 0) {
    puStack_3a0 = (undefined *)CONCAT71(puStack_3a0._1_7_,0x20);
    func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    uVar11 = *(ulong *)((long)param_3 + (long)_DAT_112796278);
    func_0x000107c4adac();
    if ((uVar11 & 1) != 0) {
      func_0x000107c45310(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    }
    puStack_3a0 = (undefined *)CONCAT62(puStack_3a0._2_6_,(short)uVar2);
    func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
  }
  else {
    puStack_3a0 = (undefined *)CONCAT71(puStack_3a0._1_7_,0x21);
    func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    uVar11 = *(ulong *)((long)param_3 + (long)_DAT_112796278);
    func_0x000107c4adac();
    if ((uVar11 & 3) != 0) {
      func_0x000107c45310(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    }
    puStack_3a0 = (undefined *)CONCAT44(puStack_3a0._4_4_,(int)uVar2);
    func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
  }
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_378 = 0;
  puStack_380 = (undefined *)0x0;
  ppuVar12 = &puStack_380;
  ppuVar13 = ppuVar7;
  func_0x000107c4080c();
  ppuVar6 = (undefined **)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    lVar9 = *plStack_370;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if (*plStack_370 != lVar9) {
          func_0x000107c61128(ppuVar7);
        }
        ppuVar6 = param_1;
        func_0x000107c4d9e8();
        if (ppuVar6 == (undefined **)0x0) {
          puStack_3a0 = (undefined *)((ulong)puStack_3a0 & 0xffffffffffffff00);
          func_0x000107c3deec(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
        }
        else {
          func_0x000107c3ab6c();
        }
        ppuVar12 = (undefined **)((long)ppuVar12 + 1);
      } while (ppuVar13 != ppuVar12);
      ppuVar12 = &puStack_380;
      ppuVar13 = ppuVar7;
      func_0x000107c4080c();
      ppuVar6 = (undefined **)0x0;
    } while (ppuVar13 != (undefined **)0x0);
  }
LAB_100189ef4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    func_0x000107c60e78();
    func_0x000107c60bcc(&puStack_3a0,8);
    func_0x000107c60bd8(ppuVar6);
    func_0x000107c60bcc(&puStack_3a0,8);
    func_0x000107c60bd8(ppuVar6);
    func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(ppuVar6 + 5,ppuVar12);
    return;
  }
  return;
}



/* Entry: 100189f64; end: 100189f7f; -[SCLRUCacheNode setPrevious:] */

void FUN_100189f64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 100189f80; end: 100189f8b; -[SCLRUCacheNode setNext:] */

void FUN_100189f80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 100189f8c; end: 100189f93; -[SCLRUCacheNode setCost:] */

void FUN_100189f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 100189f94; end: 100189fc3; -[SCLRUCacheNode setValue:] */

void FUN_100189f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100189fc4; end: 10018a087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100189fc4(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (param_3 == 0) {
    uStack_32 = 0;
    func_0x000107c3deec(*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112796278),param_2,
                        &uStack_32,1);
    lVar2 = *(long *)(param_1 + 0x28);
  }
  else {
    func_0x000107c3ab6c(param_3);
    lVar2 = *(long *)(param_1 + 0x28);
  }
  if (param_2 == 0) {
    uStack_31 = 0;
    func_0x000107c3deec(*(undefined8 *)(lVar2 + _DAT_112796278));
  }
  else {
    func_0x000107c3ab6c(param_2);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(long *)(lVar2 + 0x18) + 1;
  *(ulong *)(lVar2 + 0x18) = uVar1;
  if (*(ulong *)(param_1 + 0x30) <= uVar1) {
    *param_4 = 1;
  }
  return;
}



/* Entry: 10018a088; end: 10018a093;  */

void FUN_10018a088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_dispose_11034bce8)(*(undefined8 *)(param_1 + 0x20),8);
  return;
}



/* Entry: 10018a094; end: 10018a123; -[SCLRUCache _moveNodeToHead:] */

/* WARNING: Possible PIC construction at 0x00010018a0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010018a110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010018a0f8) */
/* WARNING: Removing unreachable block (ram,0x00010018a100) */

void FUN_10018a094(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 != *(long *)(param_1 + 0x10)) {
    func_0x000107c3c2dc(param_1,param_2,param_3);
    func_0x000107c56a8c(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c57818(*(long *)(param_1 + 0x10),param_2,param_3);
    }
    func_0x000107c61174(param_3);
    lVar1 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10018a124; end: 10018a12b; -[SCLRUCache count] */

undefined8 FUN_10018a124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10018a12c; end: 10018a133; -[SCLRUCache setCount:] */

void FUN_10018a12c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10018a134; end: 10018a13b; -[SCLRUCache totalCost] */

undefined8 FUN_10018a134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10018a13c; end: 10018a143; -[SCLRUCache setTotalCost:] */

void FUN_10018a13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10018a144; end: 10018a14b; -[SCLRUCache totalCostLimit] */

undefined8 FUN_10018a144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10018a14c; end: 10018a153; -[SCLRUCache countLimit] */

undefined8 FUN_10018a14c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10018a154; end: 10018a16b;  */

void FUN_10018a154(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001001a2e34(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10018a16c; end: 10018a17b;  */

void FUN_10018a16c(void)

{
  return;
}



/* Entry: 10018a17c; end: 10018a69b;  */

/* WARNING: Removing unreachable block (ram,0x00010018a508) */

void FUN_10018a17c(ulong param_1,ulong *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar10;
  byte *extraout_x8;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  long lVar17;
  
  pbVar12 = (byte *)*param_2;
  pbVar3 = (byte *)param_2[1];
  lVar17 = (long)pbVar3 - (long)pbVar12;
  while( true ) {
    if (pbVar3 <= pbVar12) {
      return;
    }
    bVar5 = *pbVar12;
    iVar16 = (int)(char)bVar5;
    func_0x000107c61048();
    if (iVar16 == 0) break;
    FUN_10018ab98();
    lVar17 = lVar17 + -1;
  }
  uVar2 = (uint)bVar5;
  bVar7 = true;
  if (uVar2 - 0x30 < 10) {
    iVar16 = 1;
  }
  else {
    if (uVar2 == 0x22) {
      puVar8 = param_2;
      FUN_10018a74c(param_2,param_2[4],(int)param_2[5]);
      if ((int)puVar8 != 0) {
        return;
      }
      uVar9 = param_2[7];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_2[6] + 0x20);
      uVar11 = param_2[4];
      goto LAB_10018a584;
    }
    if (uVar2 != 0x2d) {
      if (uVar2 == 0x7b) {
        FUN_10018a728();
        uVar11 = param_1;
        (**(code **)(param_2[6] + 0x28))(param_1,param_2[7]);
        if ((int)uVar11 != 0) {
          return;
        }
        uVar9 = *param_2;
        uVar13 = param_2[1];
        while( true ) {
          if (uVar13 <= uVar9) {
            return;
          }
          while( true ) {
            if (uVar13 <= uVar9) {
              return;
            }
            func_0x00010018a740();
            if ((int)uVar11 == 0) break;
            FUN_10018ab98();
          }
          if (((uint)param_1 & 0xff) == 0x7d) break;
          puVar8 = param_2;
          FUN_10018a74c(param_2,param_2[2],(int)param_2[3]);
          if ((int)puVar8 != 0) {
            return;
          }
          pcVar15 = (char *)*param_2;
          pcVar4 = (char *)param_2[1];
          pcVar14 = pcVar15;
          while( true ) {
            pcVar14 = pcVar14 + 1;
            if (pcVar4 <= pcVar15) {
              return;
            }
            cVar6 = *pcVar15;
            iVar16 = (int)cVar6;
            func_0x000107c61048();
            if (iVar16 == 0) break;
            pcVar15 = pcVar15 + 1;
            *param_2 = (ulong)pcVar15;
          }
          if (cVar6 != ':') {
            return;
          }
          do {
            *param_2 = (ulong)pcVar14;
            if (pcVar4 <= pcVar14) break;
            iVar16 = (int)*pcVar14;
            func_0x000107c61048();
            pcVar14 = pcVar14 + 1;
          } while (iVar16 != 0);
          uVar11 = param_2[2];
          FUN_10018a17c(uVar11,param_2);
          if ((int)uVar11 != 0) {
            return;
          }
          uVar9 = *param_2;
          uVar13 = param_2[1];
          while( true ) {
            if (uVar13 <= uVar9) {
              return;
            }
            func_0x00010018a740();
            if ((int)uVar11 == 0) break;
            FUN_10018ab98();
          }
          param_1 = 0x3a;
        }
LAB_10018a670:
        FUN_10018a728();
                    /* WARNING: Could not recover jumptable at 0x00010018a690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2[6] + 0x38))(param_2[7]);
        return;
      }
      if (uVar2 == 0x66) {
        if (lVar17 < 5) {
          return;
        }
        if (pbVar12[1] != 0x61) {
          return;
        }
        if (pbVar12[2] != 0x6c) {
          return;
        }
        if (pbVar12[3] != 0x73) {
          return;
        }
        if (pbVar12[4] != 0x65) {
          return;
        }
        func_0x00010018aba4(pbVar12 + 5);
      }
      else {
        if (uVar2 == 0x6e) {
          if (lVar17 < 4) {
            return;
          }
          if (pbVar12[1] != 0x75) {
            return;
          }
          if (pbVar12[2] != 0x6c) {
            return;
          }
          if (pbVar12[3] != 0x6c) {
            return;
          }
          *param_2 = (ulong)(pbVar12 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010018a3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_2[6] + 0x18))(param_1,param_2[7]);
          return;
        }
        if (uVar2 != 0x74) {
          if (uVar2 != 0x5b) {
            return;
          }
          FUN_10018a728();
          uVar11 = param_1;
          (**(code **)(param_2[6] + 0x30))(param_1,param_2[7]);
          if ((int)uVar11 != 0) {
            return;
          }
          uVar9 = *param_2;
          uVar13 = param_2[1];
          while( true ) {
            if (uVar13 <= uVar9) {
              return;
            }
            while( true ) {
              if (uVar13 <= uVar9) {
                return;
              }
              func_0x00010018a740();
              if ((int)uVar11 == 0) break;
              FUN_10018ab98();
            }
            if (((uint)param_1 & 0xff) == 0x5d) break;
            uVar11 = 0;
            FUN_10018a17c(0,param_2);
            if ((int)uVar11 != 0) {
              return;
            }
            uVar9 = *param_2;
            uVar13 = param_2[1];
            while( true ) {
              if (uVar13 <= uVar9) {
                return;
              }
              func_0x00010018a740();
              if ((int)uVar11 == 0) break;
              FUN_10018ab98();
            }
            if (((uint)param_1 & 0xff) == 0x2c) {
              FUN_10018ab98();
            }
          }
          goto LAB_10018a670;
        }
        if (lVar17 < 4) {
          return;
        }
        if (pbVar12[1] != 0x72) {
          return;
        }
        if (pbVar12[2] != 0x75) {
          return;
        }
        if (pbVar12[3] != 0x65) {
          return;
        }
        func_0x00010018aba4(pbVar12 + 4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010018a3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_10018a728();
    if ((int)(char)pbVar12[1] - 0x3aU < 0xfffffff6) {
      return;
    }
    bVar7 = false;
    iVar16 = -1;
    pbVar12 = extraout_x8;
  }
  lVar17 = 0;
  lVar10 = 0;
  uVar11 = 0;
  while( true ) {
    if (pbVar3 <= pbVar12 + lVar17) {
      return;
    }
    bVar5 = pbVar12[lVar17];
    uVar2 = (int)(char)bVar5 - 0x30;
    bVar1 = 9 < uVar2;
    if (0x1999999999999999 < uVar11 || 9 < uVar2) break;
    uVar11 = uVar11 * 10;
    if (CARRY8(uVar11,(ulong)uVar2)) {
      bVar1 = false;
      break;
    }
    uVar11 = uVar11 + uVar2;
    *param_2 = (ulong)(pbVar12 + lVar17 + 1);
    lVar10 = lVar10 + 0x100000000;
    lVar17 = lVar17 + 1;
  }
  uVar2 = bVar5 - 0x2b;
  if (uVar11 < 0x8000000000000001) {
    bVar7 = true;
  }
  if (((!bVar1) || (!bVar7)) ||
     (uVar2 < 0x3b && (0x3fffffffbff8012U >> ((ulong)uVar2 & 0x3f) & 1) == 0)) {
    while( true ) {
      if (pbVar3 <= pbVar12 + lVar17) {
        return;
      }
      uVar2 = pbVar12[lVar17] - 0x2b;
      if (0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004007fedU) == 0) break;
      *param_2 = (ulong)(pbVar12 + lVar17 + 1);
      lVar10 = lVar10 + 0x100000000;
      lVar17 = lVar17 + 1;
    }
    if ((int)param_2[5] <= (int)lVar17) {
      return;
    }
    func_0x000107c613d8(param_2[4],pbVar12,lVar10 >> 0x20);
    *(undefined1 *)(param_2[4] + (lVar10 >> 0x20)) = 0;
    func_0x000107c613b4(param_2[4],&UNK_10f3b319e);
    (**(code **)(param_2[6] + 8))(param_1,param_2[7]);
    return;
  }
  uVar11 = uVar11 * (long)iVar16;
  uVar9 = param_2[7];
  UNRECOVERED_JUMPTABLE_00 = *(code **)(param_2[6] + 0x10);
LAB_10018a584:
                    /* WARNING: Could not recover jumptable at 0x00010018a59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar11,uVar9);
  return;
}



/* Entry: 10018a69c; end: 10018a727;  */

void FUN_10018a69c(long param_1,int param_2,long param_3,int param_4,long param_5,undefined8 param_6
                  ,undefined4 *param_7)

{
  int iVar1;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  int iStack_58;
  undefined4 uStack_54;
  long lStack_50;
  int iStack_48;
  undefined4 uStack_44;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_68 = param_1 + param_2;
  iStack_58 = param_4 / 4;
  uStack_54 = 0;
  lStack_50 = param_3 + iStack_58;
  iStack_48 = param_4 - iStack_58;
  uStack_44 = 0;
  iVar1 = 0;
  lStack_70 = param_1;
  lStack_60 = param_3;
  lStack_40 = param_5;
  uStack_38 = param_6;
  FUN_10018a17c(0,&lStack_70);
  if (iVar1 == 0) {
    (**(code **)(param_5 + 0x40))();
    iVar1 = (int)param_6;
  }
  if ((param_7 != (undefined4 *)0x0) && (iVar1 != 0)) {
    *param_7 = 0;
  }
  return;
}



/* Entry: 10018a728; end: 10018a74b;  */

void FUN_10018a728(void)

{
  long *unaff_x19;
  long unaff_x21;
  
  *unaff_x19 = unaff_x21 + 1;
  return;
}



/* Entry: 10018a74c; end: 10018aa7b;  */

undefined8 FUN_10018a74c(undefined8 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  
  *param_2 = 0;
  pbVar7 = (byte *)*param_1;
  if (*pbVar7 == 0x22) {
    bVar8 = true;
    pbVar10 = pbVar7;
    do {
      lVar6 = ((ulong)~(uint)pbVar7 << 0x20) + ((long)pbVar10 << 0x20);
      iVar11 = ~(uint)pbVar7 + (int)pbVar10;
      pbVar9 = pbVar10 + 1;
      do {
        if ((byte *)param_1[1] <= pbVar9) {
          return 4;
        }
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        lVar6 = lVar6 + 0x100000000;
        iVar11 = iVar11 + 1;
        if (bVar1 == 0x22) {
          if (param_3 <= iVar11) {
            return 2;
          }
          pbVar7 = pbVar7 + 1;
          *param_1 = pbVar10;
          if (bVar8) {
            func_0x000107c610b4(param_2,pbVar7,lVar6 >> 0x20);
            param_2[lVar6 >> 0x20] = 0;
            return 0;
          }
          goto LAB_10018a844;
        }
        pbVar9 = pbVar10;
      } while (bVar1 != 0x5c);
      bVar8 = false;
    } while( true );
  }
LAB_10018a7f8:
  return 1;
LAB_10018a844:
  if (pbVar9 <= pbVar7) {
    *param_2 = 0;
    return 0;
  }
  if (*pbVar7 == 0x5c) {
    pbVar10 = pbVar7 + 1;
    bVar1 = *pbVar10;
    switch(bVar1) {
    case 0x6e:
      *param_2 = 10;
      break;
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
      goto LAB_10018a7f8;
    case 0x72:
      *param_2 = 0xd;
      break;
    case 0x74:
      *param_2 = 9;
      break;
    case 0x75:
      if (pbVar9 < pbVar7 + 6) {
        return 4;
      }
      uVar4 = *(int *)(&UNK_10dde43f8 + (long)(char)pbVar7[3] * 4) << 8 |
              *(int *)(&UNK_10dde43f8 + (long)(char)pbVar7[2] * 4) << 0xc |
              *(int *)(&UNK_10dde43f8 + (long)(char)pbVar7[4] * 4) << 4 |
              *(uint *)(&UNK_10dde43f8 + (long)(char)pbVar7[5] * 4);
      if (uVar4 >> 0x10 != 0 || (uVar4 & 0xfc00) == 0xdc00) {
        return 1;
      }
      if ((uVar4 & 0xfc00) == 0xd800) {
        if (pbVar9 < pbVar7 + 0xc) {
          return 4;
        }
        if (pbVar7[6] != 0x5c) {
          return 1;
        }
        if (pbVar7[7] != 0x75) {
          return 1;
        }
        uVar2 = *(int *)(&UNK_10dde43f8 + (long)(char)pbVar7[9] * 4) << 8 |
                *(int *)(&UNK_10dde43f8 + (long)(char)pbVar7[8] * 4) << 0xc |
                *(int *)(&UNK_10dde43f8 + (long)(char)pbVar7[10] * 4) << 4 |
                *(uint *)(&UNK_10dde43f8 + (long)(char)pbVar7[0xb] * 4);
        if (uVar2 >> 10 != 0x37) {
          return 1;
        }
        uVar4 = uVar2 + uVar4 * 0x400 + 0xfc9f2400;
        lVar6 = 7;
      }
      else {
        lVar6 = 1;
      }
      if (uVar4 < 0x80) {
        *param_2 = (byte)uVar4;
        lVar5 = 1;
      }
      else {
        bVar1 = (byte)uVar4 & 0x3f | 0x80;
        if (uVar4 < 0x800) {
          *param_2 = (byte)(uVar4 >> 6) | 0xc0;
          param_2[1] = bVar1;
          lVar5 = 2;
        }
        else {
          bVar3 = (byte)(uVar4 >> 6) & 0x3f | 0x80;
          if (uVar4 >> 0x10 == 0) {
            *param_2 = (byte)(uVar4 >> 0xc) | 0xe0;
            param_2[1] = bVar3;
            param_2[2] = bVar1;
            lVar5 = 3;
          }
          else {
            *param_2 = (byte)(uVar4 >> 0x12) | 0xf0;
            param_2[1] = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
            param_2[2] = bVar3;
            param_2[3] = bVar1;
            lVar5 = 4;
          }
        }
      }
      pbVar12 = param_2 + lVar5;
      pbVar10 = pbVar7 + lVar6 + 4;
      goto LAB_10018a85c;
    default:
      if (bVar1 == 0x66) {
        *param_2 = 0xc;
      }
      else if (bVar1 == 0x2f) {
        *param_2 = 0x2f;
      }
      else if (bVar1 == 0x5c) {
        *param_2 = 0x5c;
      }
      else if (bVar1 == 0x62) {
        *param_2 = 8;
      }
      else {
        if (bVar1 != 0x22) {
          return 1;
        }
        *param_2 = 0x22;
      }
    }
    pbVar12 = param_2 + 1;
  }
  else {
    pbVar12 = param_2 + 1;
    *param_2 = *pbVar7;
    pbVar10 = pbVar7;
  }
LAB_10018a85c:
  pbVar7 = pbVar10 + 1;
  param_2 = pbVar12;
  goto LAB_10018a844;
}



/* Entry: 10018aa7c; end: 10018aa87;  */

void FUN_10018aa7c(void)

{
  return;
}



/* Entry: 10018aa88; end: 10018ab3b;  */

undefined8 FUN_10018aa88(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c613c0(param_1,"version");
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    if (param_2 != 1) {
      func_0x000106aeaba8();
      func_0x000106aee914();
      return 5;
    }
  }
  else {
    FUN_10018abf0();
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x10) = (int)param_2;
    }
    else {
      FUN_10018abf0();
      if (iVar1 == 0) {
        *(int *)(param_3 + 0x14) = (int)param_2;
      }
    }
  }
  FUN_10018ab3c((double)param_2,param_1,param_3);
  return 0;
}



/* Entry: 10018ab3c; end: 10018ab97;  */

undefined8 FUN_10018ab3c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c613c0(param_2,&UNK_10f3b2445);
  if ((int)uVar1 == 0) {
    *param_3 = param_1;
  }
  func_0x000107c613c0(param_2,&UNK_10f3b2462);
  if ((int)param_2 == 0) {
    param_3[1] = param_1;
  }
  return 0;
}



/* Entry: 10018ab98; end: 10018abb7;  */

void FUN_10018ab98(void)

{
  long *unaff_x19;
  long unaff_x21;
  
  *unaff_x19 = unaff_x21 + 1;
  return;
}



/* Entry: 10018abb8; end: 10018abef;  */

undefined8 FUN_10018abb8(undefined8 param_1,undefined1 param_2,long param_3)

{
  func_0x000107c613c0(param_1,&UNK_10f3b2433);
  if ((int)param_1 == 0) {
    *(undefined1 *)(param_3 + 0x2c) = param_2;
  }
  return 0;
}



/* Entry: 10018abf0; end: 10018abf7;  */

void FUN_10018abf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)();
  return;
}



/* Entry: 10018abf8; end: 10018ac5f;  */

undefined8 FUN_10018abf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  func_0x000107c613c0(param_1,&UNK_10f3b24b1);
  if ((int)param_1 == 0) {
    param_1 = param_2;
    func_0x000107c613c8();
    *(undefined8 *)(param_3 + 0x40) = param_1;
  }
  iVar1 = (int)param_1;
  FUN_10018abf0();
  if (iVar1 == 0) {
    func_0x000107c613c8();
    *(undefined8 *)(param_3 + 0x48) = param_2;
  }
  return 0;
}



/* Entry: 10018ac60; end: 10018aca7;  */

undefined8 FUN_10018ac60(void)

{
  return 0;
}



/* Entry: 10018aca8; end: 10018acd7; -[KSCrash getLastCrashReportID] */

void FUN_10018aca8(long param_1)

{
  func_0x000107c50260();
  if (param_1 != 0) {
    FUN_1001f3dfc();
    func_0x000107c5c1f0();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10018acd8; end: 10018acfb; -[KSCrash reportID] */

undefined8 FUN_10018acd8(void)

{
  return uRam000000011381b4e0;
}



/* Entry: 10018acfc; end: 10018ad33;  */

void FUN_10018acfc(undefined8 param_1)

{
  FUN_1000721e8();
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ac4c();
  func_0x000107c616a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10018ad34; end: 10018ad43;  */

void FUN_10018ad34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010018ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10018ad44; end: 10018ae4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018ad44(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112da9878;
  if (param_1 != 0) {
    func_0x000107c497b4(*(undefined8 *)(param_1 + _DAT_112da9878));
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    puVar2 = &UNK_1103ce5d0;
    func_0x000107c613fc(&UNK_1103ce5d0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    pcStack_58 = FUN_1001f8edc;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_1001f8e48;
    puStack_60 = &UNK_1103ce868;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c615f0(uVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c51da8(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 10018ae4c; end: 10018aeaf; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader install] */

/* WARNING: Possible PIC construction at 0x00010018ae7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010018ae9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010018ae80) */
/* WARNING: Removing unreachable block (ram,0x00010018aea0) */

void FUN_10018ae4c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10018aeb0();
  FUN_1001ad520();
  func_0x000107c56cd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10018aeb0; end: 10018b0fb;  */

undefined ** FUN_10018aeb0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined *unaff_x20;
  long lVar9;
  long alStack_90 [4];
  undefined auStack_70 [8];
  undefined *puStack_68;
  ulong uStack_60;
  byte abStack_51 [9];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar5 = auStack_70 + lVar1;
  FUN_100071fe8(puVar5);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  puVar8 = (undefined *)0x1;
  puVar3 = puVar5;
  (**(code **)(lVar9 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar5);
LAB_10018af50:
    ppuVar4 = (undefined **)0x0;
    puVar8 = unaff_x20;
    goto LAB_10018b044;
  }
  func_0x000107c5edc4();
  (**(code **)(lVar9 + 8))(puVar5,lVar2);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c5fadc(puVar3,puVar8);
  puVar7 = puVar5;
  func_0x000107c43418();
  func_0x000107c61170(puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6 = puVar3;
    func_0x000107c5fadc(puVar3,puVar8);
    puStack_68 = (undefined *)0x0;
    puVar7 = puVar5;
    func_0x000107c409e0();
    func_0x000107c61170(puVar6);
    unaff_x20 = puStack_68;
    if ((int)puVar7 == 0) {
      puVar3 = puStack_68;
      func_0x000107c61174();
      func_0x000107c6142c(puVar8);
      func_0x000107c5ed30();
      func_0x000107c61170(puVar3);
      func_0x000107c61654();
      func_0x000107c61170(puVar5);
      func_0x000107c614ac(unaff_x20);
      goto LAB_10018af50;
    }
    func_0x000107c61174();
  }
  if (((ulong)puVar8 >> 0x3c & 1) == 0) {
    if (((ulong)puVar8 >> 0x3d & 1) == 0) {
      if (((ulong)puVar3 >> 0x3c & 1) == 0) goto LAB_10018b0b8;
      ppuVar4 = (undefined **)(((ulong)puVar8 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_60 = (ulong)puVar8 & 0xffffffffffffff;
      ppuVar4 = &puStack_68;
      puStack_68 = puVar3;
    }
    FUN_1001ad450(ppuVar4);
    func_0x000107c6142c(puVar8);
    func_0x000107c61170(puVar5);
  }
  else {
LAB_10018b0b8:
    func_0x000107c602f0(abStack_51,0x1001ad4f4,0,puVar3,puVar8,PTR___sSbN_11034dd40);
    func_0x000107c6142c(puVar8);
    func_0x000107c61170(puVar5);
    ppuVar4 = (undefined **)(ulong)abStack_51[0];
  }
LAB_10018b044:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar4;
  }
  func_0x000107c60e78(ppuVar4);
  *(undefined **)((long)alStack_90 + lVar1) = puVar8;
  *(undefined **)((long)alStack_90 + lVar1 + 8) = puVar5;
  *(undefined1 **)((long)alStack_90 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_90 + lVar1 + 0x18) = FUN_10018b0fc;
  FUN_10018a154();
  return ppuVar4;
}



/* Entry: 10018b0fc; end: 10018c0cf;  */

undefined8 FUN_10018b0fc(undefined8 param_1)

{
  FUN_10018a154(param_1,0);
  return param_1;
}



/* Entry: 10018c0d0; end: 10018c137; +[CdnClientConfig descriptor] */

void FUN_10018c0d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f4790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c73020,
                        &PTR____CFConstantStringClassReference_110f61098,&PTR_DAT_11336f188,
                        &PTR_DAT_11336f1a0,1,0x10,0x1c);
    puRam00000001137f4790 = puVar1;
  }
  return;
}



/* Entry: 10018c138; end: 10018c1b3;  */

void FUN_10018c138(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10018c1b4; end: 10018c1bf;  */

void FUN_10018c1b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100110488(uVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  if ((int)uVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    FUN_100083b20(&puStack_88);
    puVar6 = puStack_88;
    func_0x0001000ad7c4();
    FUN_100083b20(&uStack_58);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    puStack_68 = &UNK_101434c70;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    uStack_78 = 0x100213230;
    puStack_70 = &UNK_1103b7df8;
    ppuVar4 = &puStack_88;
    uStack_60 = uVar5;
    func_0x000107c60bc4(ppuVar4);
    uVar1 = uStack_60;
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(uVar1);
    func_0x000107c3e4fc(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    uVar5 = 0;
    FUN_10009fc44(0);
    func_0x000107c610f8();
    FUN_10018c4a8(puVar6,uVar2,uStack_58,puVar3,uVar5);
    puVar3 = PTR__OBJC_CLASS___MXMetricManager_1126a6dd0;
    func_0x000107c61168(PTR__OBJC_CLASS___MXMetricManager_1126a6dd0);
    func_0x000107c5aa04();
    func_0x000107c61180();
    func_0x000107c3d898();
    func_0x000107c61170(puVar3);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10018c1c0; end: 10018c327;  */

void FUN_10018c1c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100110488();
  if ((int)param_2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    FUN_100083b20(&puStack_88);
    puVar4 = puStack_88;
    func_0x0001000ad7c4();
    FUN_100083b20(&uStack_58);
    puVar1 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    puStack_68 = &UNK_101434c70;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    uStack_78 = 0x100213230;
    puStack_70 = &UNK_1103b7df8;
    ppuVar2 = &puStack_88;
    uStack_60 = param_5;
    func_0x000107c60bc4(ppuVar2);
    uVar3 = uStack_60;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(uVar3);
    func_0x000107c3e4fc(puVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    uVar3 = 0;
    FUN_10009fc44(0);
    func_0x000107c610f8();
    FUN_10018c4a8(puVar4,param_2,uStack_58,puVar1,uVar3);
    puVar1 = PTR__OBJC_CLASS___MXMetricManager_1126a6dd0;
    func_0x000107c61168(PTR__OBJC_CLASS___MXMetricManager_1126a6dd0);
    func_0x000107c5aa04();
    func_0x000107c61180();
    func_0x000107c3d898();
    func_0x000107c61170(puVar1);
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 10018c328; end: 10018c33b;  */

void FUN_10018c328(long param_1,long param_2)

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



/* Entry: 10018c33c; end: 10018c4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018c33c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  undefined *puVar3;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112da9b28);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar2 = _DAT_112da9b30;
  puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(long *)(unaff_x20 + _DAT_112da9b38) = param_1;
  FUN_1000285a8(0x112da9b40,&UNK_10d951150);
  func_0x000107c615f0(param_1);
  FUN_1000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112da9b48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da9b50) = param_3;
  puVar3 = &UNK_10d951048;
  FUN_1000285a8(0x112da9858);
  func_0x000107c615f0(param_3);
  FUN_1000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112da9b58) = param_4;
  if (param_1 == 0) {
    lVar2 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c4a9b4();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar2 = 0;
      puVar3 = (undefined *)0x0;
    }
    else {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
  }
  *plVar1 = lVar2;
  plVar1[1] = (long)puVar3;
  func_0x000107c6142c();
  FUN_10009fc44();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10018c4a8; end: 10018c50b;  */

undefined8
FUN_10018c4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10018c33c();
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 10018c50c; end: 10018c597; +[CdnClientConfig_RoutingDefinition descriptor] */

undefined * FUN_10018c50c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f4798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c73070,
                        &PTR____CFConstantStringClassReference_110f610b8,&PTR_DAT_11336f188,
                        &PTR_DAT_11336f240,3,0x20,0x1c);
    func_0x000107c5a894();
    func_0x000107c5a88c(puVar1,param_2,&PTR_PTR_112c73020);
    puRam00000001137f4798 = puVar1;
  }
  return puRam00000001137f4798;
}



/* Entry: 10018c598; end: 10018c5a7; -[GPBDescriptor setupContainingMessageClass:] */

void FUN_10018c598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,&UNK_10e60ddfc,param_3,0);
  return;
}



/* Entry: 10018c5a8; end: 10018c623; +[CdnClientConfig_RoutingRule descriptor] */

undefined * FUN_10018c5a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f47a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c730c0,
                        &PTR____CFConstantStringClassReference_110f610d8,&PTR_DAT_11336f188,
                        &PTR_DAT_11336f1c0,2,0xc,0x1c);
    func_0x000107c5a88c();
    puRam00000001137f47a0 = puVar1;
  }
  return puRam00000001137f47a0;
}



/* Entry: 10018c624; end: 10018c697; -[SCAuthenticationWatchdogFactoryServices initWithAuthenticationWatchdogFactory:] */

undefined1 * FUN_10018c624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ed908;
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



/* Entry: 10018c698; end: 10018c6c3;  */

void FUN_10018c698(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10018c6c4; end: 10018c6cb; -[SCAuthenticationWatchdogFactoryServices watchdogFactory] */

undefined8 FUN_10018c6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10018c6cc; end: 10018c7c3;  */

undefined * FUN_10018c6cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f47b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f61118,
                        &UNK_10e5714d8,&UNK_10e5714f8,4,FUN_1001b1e48,0);
    do {
      if (puRam00000001137f47b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137f47b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f47b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f47b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f47b0;
}



/* Entry: 10018c7c4; end: 10018c83b; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger lastCrashReportId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018c7c4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112da9830);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10018c83c; end: 10018c8b7; +[CdnClientConfig_CdnInfo descriptor] */

undefined * FUN_10018c83c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f47a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c73110,
                        &PTR____CFConstantStringClassReference_110f610f8,&PTR_DAT_11336f188,
                        &PTR_DAT_11336f200,2,0x10,0x1c);
    func_0x000107c5a88c();
    puRam00000001137f47a8 = puVar1;
  }
  return puRam00000001137f47a8;
}



/* Entry: 10018c8b8; end: 10018cb9f; -[SCAuthenticationWorkflow initWithApplicationDataChecker:userSessionRepository:appStartExperimentReader:legacyAuthFlowProxy:router:performer:authTokenManager:authenticationStateTracker:grapheneRegistry:userTraceLogger:systemApplicationLogger:snapTokenStore:watchdogFactory:] */

undefined8 *
FUN_10018c8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_68 = PTR_PTR_1126e9cf0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 4,param_6);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = 0;
    func_0x000107c61170();
    if (param_8 == 0) {
      FUN_100078e94();
      func_0x000107c61180();
      uVar3 = puVar1[6];
      puVar1[6] = uVar2;
    }
    else {
      func_0x000107c61174(param_8);
      uVar3 = puVar1[6];
      puVar1[6] = param_8;
    }
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126aeea8;
    func_0x000107c61160();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar4;
    func_0x000107c61170(uVar2);
    puVar1[0x14] = 0;
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10018cba0; end: 10018cc3b;  */

void FUN_10018cba0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10018cc3c; end: 10018cee7;  */

undefined * FUN_10018cc3c(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [40];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_88 [40];
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar4 = 0x112d37798;
    FUN_1000285a8(0x112d37798,&UNK_10d902e10);
    func_0x000107c60498(puVar11,uVar4);
    puVar12 = puVar11;
  }
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar12);
  func_0x000107c61434(param_1);
  lVar13 = 0;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar13 << 6;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar9;
      uVar1 = puVar9[1];
      FUN_1000bb420(*(long *)(param_1 + 0x38) + uVar6 * 0x20,auStack_88);
      uStack_b8 = uVar4;
      uStack_b0 = uVar1;
      func_0x000107c61434(uVar1);
      func_0x000107c6147c(&uStack_150,&uStack_b8,PTR___sSSN_11034da80,
                          PTR___ss11AnyHashableVN_11034e448,7);
      FUN_100102924(auStack_88,auStack_128);
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      uStack_e8 = uStack_138;
      uStack_f0 = uStack_140;
      uStack_e0 = uStack_130;
      FUN_100102924(auStack_128,auStack_d8);
      uStack_148 = uStack_f8;
      uStack_150 = uStack_100;
      uStack_138 = uStack_e8;
      uStack_140 = uStack_f0;
      uStack_130 = uStack_e0;
      FUN_100102924(auStack_d8,&uStack_b8);
      uVar5 = *(ulong *)(puVar12 + 0x28);
      func_0x000107c602c4();
      uVar10 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
      uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar5 >> 6;
      uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(puVar12 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar3 = false;
        uVar6 = 0x3f - uVar10 >> 6;
        do {
          uVar5 = uVar7 + 1;
          if ((uVar5 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10018cee8);
            (*pcVar2)();
          }
          uVar7 = 0;
          if (uVar5 != uVar6) {
            uVar7 = uVar5;
          }
          bVar3 = (bool)(uVar5 == uVar6 | bVar3);
        } while (*(ulong *)(puVar12 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar12 + uVar7 * 8 + 0x40);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar7 << 6;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar7 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar12 + uVar7 + 0x40)
      ;
      puVar9 = (undefined8 *)(*(long *)(puVar12 + 0x30) + uVar6 * 0x28);
      puVar9[1] = uStack_148;
      *puVar9 = uStack_150;
      puVar9[3] = uStack_138;
      puVar9[2] = uStack_140;
      puVar9[4] = uStack_130;
      FUN_100102924(&uStack_b8,*(long *)(puVar12 + 0x38) + uVar6 * 0x20);
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
    }
    bVar3 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10018cee4);
      (*pcVar2)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar13) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  func_0x000107c61574(puVar12);
  func_0x000107c61574(param_1);
  return puVar12;
}



/* Entry: 10018cee8; end: 10018d003;  */

long FUN_10018cee8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x21;
  long *unaff_x26;
  
  lVar1 = *unaff_x26;
  lVar2 = unaff_x26[1];
  lVar4 = lVar1;
  while (lVar3 = lVar4, (lVar2 - lVar1) / 0x138 != 0) {
    func_0x00010018cef4();
    func_0x00010017c4b0();
    func_0x00010018cf08(unaff_x21 + 0x138);
    lVar4 = extraout_x8;
    if ((bool)in_ZR) {
      lVar4 = lVar3;
    }
  }
  return lVar3;
}



/* Entry: 10018d004; end: 10018d04b; -[SCAuthenticationWorkflow beginWorkflow] */

void FUN_10018d004(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000107c49a48();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be95e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__resumePersistedUserSessionOrBeg_112583128,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf17ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_beginDataUnavailableWorkflowWith_1125a3960,
             *(undefined8 *)(param_1 + 8),param_1);
  return;
}



/* Entry: 10018d04c; end: 10018d0b3; -[SCManagerApplicationDataChecker isApplicationDataAvailable] */

long FUN_10018d04c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x0001000882bc();
  func_0x000107c61180();
  if (lVar1 == 0) {
    param_1 = param_1 + 8;
    func_0x000107c61148(param_1);
    lVar2 = param_1;
    func_0x000107c4a28c();
    func_0x000107c61170(param_1);
  }
  else {
    lVar2 = 1;
  }
  func_0x000107c61170(lVar1);
  return lVar2;
}



/* Entry: 10018d0b4; end: 10018d33f;  */

void FUN_10018d0b4(ulong param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  uVar3 = 0x179ec;
  FUN_1001a4848();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c610fc();
  if ((param_2 != 0) && (uVar10 = param_2, func_0x000107c40808(), uVar10 != 0)) {
    uVar10 = 0;
    do {
      uVar5 = param_2;
      func_0x000107c4d9a4(param_2);
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c44f08();
      func_0x000107c61180();
      uVar7 = param_2;
      func_0x000107c4d9a4();
      func_0x000107c61180();
      func_0x000107c3f718();
      func_0x000107c5a4a0(puVar4);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      uVar10 = uVar10 + 1;
      uVar5 = param_2;
      func_0x000107c40808();
    } while (uVar10 < uVar5);
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c610fc();
  uVar10 = param_1;
  func_0x000107c40808();
  if (uVar10 != 0) {
    uVar10 = 0;
    do {
      uVar5 = param_1;
      func_0x000107c4d9a4();
      func_0x000107c61180();
      func_0x000107c61170();
      if (uVar5 != 0) {
        uVar5 = param_1;
        func_0x000107c4d9a4();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c3f718();
        ppuVar1 = &PTR____CFConstantStringClassReference_110f60858;
        if ((int)uVar6 != 1) {
          ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        ppuVar2 = &PTR____CFConstantStringClassReference_110f60838;
        if ((int)uVar6 != 2) {
          ppuVar2 = ppuVar1;
        }
        func_0x000107c61174(ppuVar2);
        func_0x000107c61170(uVar5);
        puVar9 = puVar4;
        func_0x000107c4d9c0();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar2);
        if (puVar9 != (undefined *)0x0) {
          if (uVar10 == 0) {
            func_0x000107c5a4a0(puVar8);
          }
          uVar5 = param_1;
          func_0x000107c4d9a4();
          func_0x000107c61180();
          func_0x000107c4f924();
          func_0x000107c61170(uVar5);
          func_0x000107c5a4a0(puVar8);
        }
        func_0x000107c61170(puVar9);
      }
      uVar10 = uVar10 + 1;
      uVar5 = param_1;
      func_0x000107c40808();
    } while (uVar10 < uVar5);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10018d340; end: 10018d503; -[SCAuthenticationWorkflow _resumePersistedUserSessionOrBeginUnauthenticatedSession:] */

/* WARNING: Possible PIC construction at 0x00010018d3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010018d3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010018d454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010018d4b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010018d458) */
/* WARNING: Removing unreachable block (ram,0x00010018d3e8) */
/* WARNING: Removing unreachable block (ram,0x00010018d3c0) */
/* WARNING: Removing unreachable block (ram,0x00010018d4b4) */

void FUN_10018d340(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_10f2ebf02;
  FUN_1000ba800(&UNK_10f2ebf02);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x0001000e2a84(puVar1);
  if (lVar2 == 0) {
    puVar1 = &UNK_10f2ebf2a;
    FUN_1000ba800(&UNK_10f2ebf2a);
    func_0x000107c3e838(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
    func_0x0001000e2a84(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c5a15c();
  }
  else {
    func_0x000107c5a3e8(*(undefined8 *)(param_1 + 0x10),param_2,lVar2);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10018d504; end: 10018d567;  */

void FUN_10018d504(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  *(long **)(*param_3 + 8) = plVar1;
  *plVar1 = *param_3;
  return;
}



/* Entry: 10018d568; end: 10018d5b7; -[SCLegacyMigrationUserSessionRepository setUserSession:] */

void FUN_10018d568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c5a3e8(uVar1,param_2,param_3);
  func_0x000107c5a3e8(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10018d5b8; end: 10018d61b; -[SCPreferencesBasedUserSessionRepository setUserSession:] */

/* WARNING: Possible PIC construction at 0x00010018d5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010018d600) */

void FUN_10018d5b8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  if ((param_3 != 0 || uVar1 != 0) && (func_0x000107c49cec(uVar1,param_2,param_3), (uVar1 & 1) == 0)
     ) {
    func_0x000107c61174(param_3);
    lVar2 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    param_3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10018d61c; end: 10018d6f3; -[SCUserSession isEqual:] */

long FUN_10018d61c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_10018d6cc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10018d6d8;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x000107c49cec();
              goto LAB_10018d6d8;
            }
            goto LAB_10018d6cc;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10018d6d8:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 10018d6f4; end: 10018dc2f;  */

void FUN_10018d6f4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100174054(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x108;
    func_0x000107c2de80();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10018dc30; end: 10018dc33; -[SCLegacyUserSessionRepository setUserSession:] */

void FUN_10018dc30(void)

{
  return;
}



/* Entry: 10018dc34; end: 10018dc7f;  */

void FUN_10018dc34(long param_1)

{
  long unaff_x19;
  
  func_0x00010018b258();
  func_0x00010017b1c0();
  func_0x000100178054(param_1 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 10018dc80; end: 10018dc87; -[SCUserSession userId] */

undefined8 FUN_10018dc80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10018dc88; end: 10018dc8f; -[SCUserSession username] */

undefined8 FUN_10018dc88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10018dc90; end: 10018dcc7; +[SCUserSessionContext resumedWithDidLaunchWithDataUnavailable:] */

void FUN_10018dc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f4();
  func_0x000107c49078(param_1,param_2,0,param_3,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10018dcc8; end: 10018ddab; -[SCUserSessionContext initWithUnderlyingEnum:didLaunchWithDataUnavailable:loginInfo:registrationInfo:bootstrapData:] */

undefined1 *
FUN_10018dcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_11270e1f0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10018ddac; end: 10018ddeb; -[SCAuthenticationSubScopesRouter beginUserSessionWorkflowWithUserSession:userSessionContext:delegate:] */

void FUN_10018ddac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c3edec(uVar1);
  func_0x000107c61180();
  func_0x000107c42c1c(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10018ddec; end: 10018e133;  */

long * FUN_10018ddec(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *extraout_x8;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      param_2 = (long *)*param_2;
      if (param_2[0x20] < param_1[0x20]) {
        plVar7 = (long *)param_2[1];
        *(long **)(*param_2 + 8) = plVar7;
        *plVar7 = *param_2;
        func_0x00010018dfdc();
        *param_1 = (long)extraout_x8;
        extraout_x8[1] = (long)param_1;
        param_1 = extraout_x8;
      }
    }
    else {
      plVar7 = param_1;
      func_0x00010018dfc0(param_1,param_3 >> 1);
      FUN_10018ddec(param_1,plVar7,param_3 >> 1);
      FUN_10018ddec(plVar7,param_2,param_3 - (param_3 >> 1));
      lVar4 = param_1[0x20];
      plVar3 = plVar7;
      if (plVar7[0x20] < lVar4) {
        func_0x00010018dfd4();
        for (; (plVar3 != param_2 && (plVar3[0x20] < lVar4)); plVar3 = (long *)plVar3[1]) {
        }
        lVar4 = *plVar3;
        func_0x00010018dfdc(*(undefined8 *)(lVar4 + 8));
        plVar5 = param_1;
        func_0x00010018dfd4();
        *(long **)(*param_1 + 8) = plVar7;
        *plVar7 = *param_1;
        *param_1 = lVar4;
        *(long **)(lVar4 + 8) = param_1;
        plVar6 = plVar3;
        param_1 = plVar7;
      }
      else {
        plVar5 = (long *)param_1[1];
        plVar6 = plVar7;
      }
      while (plVar5 != plVar3 && plVar6 != param_2) {
        lVar4 = plVar5[0x20];
        if (plVar6[0x20] < lVar4) {
          plVar7 = plVar6;
          func_0x00010018dfd4();
          for (; (plVar7 != param_2 && (plVar7[0x20] < lVar4)); plVar7 = (long *)plVar7[1]) {
          }
          lVar4 = *plVar7;
          plVar1 = plVar7;
          if (plVar3 != plVar6) {
            plVar1 = plVar3;
          }
          plVar3 = *(long **)(lVar4 + 8);
          *(long **)(*plVar6 + 8) = plVar3;
          *plVar3 = *plVar6;
          plVar2 = plVar5;
          func_0x00010018dfd4();
          *(long **)(*plVar5 + 8) = plVar6;
          *plVar6 = *plVar5;
          *plVar5 = lVar4;
          *(long **)(lVar4 + 8) = plVar5;
          plVar3 = plVar1;
          plVar5 = plVar2;
          plVar6 = plVar7;
        }
        else {
          plVar5 = (long *)plVar5[1];
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10018e134; end: 10018e1cb; -[_TtC18SCUserSessionScope26SCUserSessionScopeServices buildWithUserSession:userSessionContext:delegate:] */

void FUN_10018e134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10018e1cc(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10018e1cc; end: 10018e2df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10018e1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_1000a2bc4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_113091ae8;
  func_0x000107c61614(lVar4 + _DAT_113091ae8,0);
  *(undefined8 *)(lVar4 + _DAT_113091af0) = 0;
  *(long *)(lVar4 + _DAT_113091ad8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113091ae0) = param_2;
  func_0x000107c61428(lVar4 + lVar2,auStack_68,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  FUN_10008a7c8(&uStack_80,aplStack_90);
  FUN_100083b20(aplStack_90);
  func_0x000107c61574(uStack_80);
  func_0x000107c615e8(aplStack_90[0]);
  return plVar5;
}



/* Entry: 10018e2e0; end: 10018e89f;  */

void FUN_10018e2e0(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010018e308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar4 + 4))();
      return;
    }
  }
  return;
}



/* Entry: 1001a2750; end: 1001a275b;  */

void FUN_1001a2750(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001a275c; end: 1001a2d37;  */

void FUN_1001a275c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10018e8a0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 1001a2d38; end: 1001a370f;  */

void FUN_1001a2d38(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a2d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1001a3710; end: 1001a39bf;  */

undefined8 ****** FUN_1001a3710(undefined8 ******param_1,undefined8 ******param_2,ulong *param_3)

{
  undefined8 ******ppppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 ******ppppppuVar3;
  char cVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined ***pppuVar9;
  undefined8 ******ppppppuVar10;
  undefined4 *extraout_x8;
  uint uVar11;
  undefined8 ******ppppppuVar12;
  ulong uVar13;
  undefined8 ******ppppppuVar14;
  ulong uVar15;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *****pppppuStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 *****pppppuStack_90;
  ulong *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 *****pppppuStack_68;
  undefined8 *****pppppuStack_60;
  undefined8 uStack_58;
  
  pppppuStack_68 = (undefined8 ******)0x0;
  pppppuStack_60 = (undefined8 ******)0x0;
  uStack_58 = 0;
  lVar5 = ((ulong)param_2 >> 2) * 3;
  ppppppuVar12 = (undefined8 ******)(lVar5 + 2);
  if (param_2 < (undefined8 ******)0x1c) {
    ppppppuVar8 = &pppppuStack_68;
    func_0x000107c60ee4(ppppppuVar8,ppppppuVar12);
    ppppppuVar10 = (undefined8 ******)pppppuStack_60;
  }
  else {
    ppppppuVar8 = param_1;
    if (lVar5 + 0x800000000000000aU < 0x800000000000001e) goto LAB_1001a39bc;
    ppppppuVar8 = ppppppuVar12;
    if (ppppppuVar12 < (undefined8 ******)0x2d) {
      ppppppuVar8 = (undefined8 ******)0x2c;
    }
    ppppppuVar10 = (undefined8 ******)(((ulong)ppppppuVar8 | 7) + 1);
    ppppppuVar8 = ppppppuVar10;
    func_0x000107c60e20();
    uStack_58 = (ulong)ppppppuVar10 | 0x8000000000000000;
    pppppuStack_60 = (undefined8 ******)0x0;
    pppppuStack_68 = ppppppuVar8;
    func_0x000107c60ee4();
    ppppppuVar10 = (undefined8 ******)pppppuStack_60;
  }
  pppppuStack_60 = ppppppuVar12;
  if (-1 < (long)uStack_58) {
    uStack_58 = CONCAT17((char)ppppppuVar12,(undefined7)uStack_58) & 0x7fffffffffffffff;
    pppppuStack_60 = ppppppuVar10;
  }
  *(undefined1 *)((long)ppppppuVar8 + (long)ppppppuVar12) = 0;
  ppppppuVar8 = (undefined8 ******)pppppuStack_68;
  if (-1 < (long)uStack_58) {
    ppppppuVar8 = &pppppuStack_68;
  }
  func_0x0001001a3ae4(ppppppuVar8,param_1,param_2);
  if (ppppppuVar8 == (undefined8 ******)0xffffffffffffffff) {
    if (-1 < (long)uStack_58) goto LAB_1001a3998;
  }
  else {
    ppppppuVar10 = (undefined8 ******)(long)uStack_58._7_1_;
    ppppppuVar12 = (undefined8 ******)pppppuStack_68;
    ppppppuVar7 = ppppppuVar8;
    if ((long)ppppppuVar10 < 0) {
      if (pppppuStack_60 < ppppppuVar8) {
        uVar15 = (uStack_58 & 0x7fffffffffffffff) - 1;
        uVar11 = (uint)(uStack_58 >> 0x3f);
        uVar13 = (long)ppppppuVar8 - (long)pppppuStack_60;
        ppppppuVar10 = (undefined8 ******)pppppuStack_60;
        if (uVar15 - (long)pppppuStack_60 < uVar13) goto LAB_1001a3830;
LAB_1001a3920:
        if (uVar11 == 0) {
          ppppppuVar12 = &pppppuStack_68;
        }
        func_0x000107c60ee4((long)ppppppuVar12 + (long)ppppppuVar10,uVar13);
        goto joined_r0x0001001a38e0;
      }
    }
    else if (ppppppuVar10 < ppppppuVar8) {
      uVar11 = 0;
      uVar15 = 0x16;
      uVar13 = (long)ppppppuVar8 - (long)ppppppuVar10;
      if (uVar13 <= 0x16U - (long)ppppppuVar10) goto LAB_1001a3920;
LAB_1001a3830:
      param_2 = ppppppuVar8;
      if (0x7ffffffffffffff7 - uVar15 < (uVar13 - uVar15) + (long)ppppppuVar10) {
LAB_1001a39bc:
        func_0x000104c4f6b8();
        uStack_78 = 0x1001a39c0;
        pppppuStack_a8 = (undefined8 ******)0x0;
        uStack_a0 = 0;
        uStack_98 = 0;
        cVar4 = *(char *)((long)ppppppuVar8 + 0x17);
        ppppppuVar12 = (undefined8 ******)*ppppppuVar8;
        if (-1 < (long)cVar4) {
          ppppppuVar12 = ppppppuVar8;
        }
        pppppuVar2 = ppppppuVar8[1];
        if (-1 < cVar4) {
          pppppuVar2 = (undefined8 *****)(long)cVar4;
        }
        pppppuStack_90 = param_2;
        puStack_88 = param_3;
        puStack_80 = &stack0xfffffffffffffff0;
        FUN_1001a3710(ppppppuVar12,pppppuVar2,&pppppuStack_a8);
        if (((ulong)ppppppuVar12 & 1) == 0) {
          ppuStack_d0 = (undefined **)0x0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          *extraout_x8 = 0;
          func_0x000107c60c94(extraout_x8 + 2,&ppuStack_d0);
          extraout_x8[8] = 0x80000000;
          func_0x000107c60ca0(&ppuStack_d0);
        }
        else {
          uStack_c0 = 0;
          uStack_c8 = 0;
          ppuStack_d0 = &PTR_DAT_110ce0480;
          puStack_b8 = &DAT_11383d918;
          uStack_b0 = 0;
          uVar13 = uStack_a0;
          ppppppuVar12 = (undefined8 ******)pppppuStack_a8;
          if (-1 < (long)uStack_98) {
            uVar13 = uStack_98 >> 0x38;
            ppppppuVar12 = &pppppuStack_a8;
          }
          pppuVar9 = &ppuStack_d0;
          FUN_1001a3c94(pppuVar9,ppppppuVar12,uVar13);
          if (((ulong)pppuVar9 & 1) == 0) {
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            *extraout_x8 = 0;
            func_0x000107c60c94(extraout_x8 + 2,&uStack_e8);
            extraout_x8[8] = 0x80000000;
            func_0x000107c60ca0(&uStack_e8);
          }
          else {
            uVar6 = uStack_b0._4_4_;
            *extraout_x8 = (undefined4)uStack_b0;
            func_0x000107c60c94(extraout_x8 + 2,(ulong)puStack_b8 & 0xfffffffffffffffc);
            extraout_x8[8] = uVar6;
          }
          FUN_1001a3dc4(&ppuStack_d0);
        }
        ppppppuVar12 = &pppppuStack_a8;
        func_0x000107c60ca0(ppppppuVar12);
        return ppppppuVar12;
      }
      ppppppuVar1 = (undefined8 ******)pppppuStack_68;
      if (-1 < (long)uStack_58) {
        ppppppuVar1 = &pppppuStack_68;
      }
      ppppppuVar14 = (undefined8 ******)0x7ffffffffffffff7;
      if (uVar15 < 0x3ffffffffffffff3) {
        ppppppuVar12 = ppppppuVar8;
        if (ppppppuVar8 <= (undefined8 ******)(uVar15 * 2)) {
          ppppppuVar12 = (undefined8 ******)(uVar15 * 2);
        }
        ppppppuVar3 = (undefined8 ******)0x19;
        if (((ulong)ppppppuVar12 | 7) != 0x17) {
          ppppppuVar3 = (undefined8 ******)(((ulong)ppppppuVar12 | 7) + 1);
        }
        ppppppuVar14 = (undefined8 ******)0x17;
        if ((undefined8 ******)0x16 < ppppppuVar12) {
          ppppppuVar14 = ppppppuVar3;
        }
      }
      ppppppuVar12 = ppppppuVar14;
      func_0x000107c60e20();
      if (ppppppuVar10 != (undefined8 ******)0x0) {
        func_0x000107c610b8(ppppppuVar12,ppppppuVar1,ppppppuVar10);
      }
      if (uVar15 != 0x16) {
        func_0x000107c60e14(ppppppuVar1);
      }
      uStack_58 = (ulong)ppppppuVar14 | 0x8000000000000000;
      pppppuStack_68 = ppppppuVar12;
      pppppuStack_60 = ppppppuVar10;
      func_0x000107c60ee4((long)ppppppuVar12 + (long)ppppppuVar10,uVar13);
joined_r0x0001001a38e0:
      if (-1 < (long)uStack_58) {
        uStack_58 = CONCAT17((char)ppppppuVar8,(undefined7)uStack_58) & 0x7fffffffffffffff;
        ppppppuVar7 = (undefined8 ******)pppppuStack_60;
      }
    }
    else {
      uStack_58 = CONCAT17((char)ppppppuVar8,(undefined7)uStack_58);
      ppppppuVar12 = &pppppuStack_68;
      ppppppuVar7 = (undefined8 ******)pppppuStack_60;
    }
    pppppuStack_60 = ppppppuVar7;
    *(undefined1 *)((long)ppppppuVar12 + (long)ppppppuVar8) = 0;
    ppppppuVar12 = (undefined8 ******)*param_3;
    uVar13 = param_3[2];
    ppppppuVar10 = (undefined8 ******)param_3[1];
    param_3[1] = (ulong)pppppuStack_60;
    *param_3 = (ulong)pppppuStack_68;
    param_3[2] = uStack_58;
    pppppuStack_68 = ppppppuVar12;
    pppppuStack_60 = ppppppuVar10;
    uStack_58 = uVar13;
    if (-1 < *(char *)((long)param_3 + 0x17)) goto LAB_1001a3998;
  }
  func_0x000107c60e14(pppppuStack_68);
LAB_1001a3998:
  return (undefined8 ******)(ulong)(ppppppuVar8 != (undefined8 ******)0xffffffffffffffff);
}



/* Entry: 1001a39c0; end: 1001a3c93;  */

void FUN_1001a39c0(undefined4 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  undefined8 ***pppuVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  ppuStack_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  uStack_28 = 0;
  cVar3 = *(char *)((long)param_2 + 0x17);
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (long)cVar3) {
    puVar6 = param_2;
  }
  lVar1 = param_2[1];
  if (-1 < cVar3) {
    lVar1 = (long)cVar3;
  }
  FUN_1001a3710(puVar6,lVar1,&ppuStack_38);
  if (((ulong)puVar6 & 1) == 0) {
    ppuStack_60 = (undefined **)0x0;
    uStack_58 = 0;
    uStack_50 = 0;
    *param_1 = 0;
    func_0x000107c60c94(param_1 + 2,&ppuStack_60);
    param_1[8] = 0x80000000;
    func_0x000107c60ca0(&ppuStack_60);
  }
  else {
    uStack_50 = 0;
    uStack_58 = 0;
    ppuStack_60 = &PTR_DAT_110ce0480;
    puStack_48 = &DAT_11383d918;
    uStack_40 = 0;
    uVar2 = uStack_30;
    pppuVar4 = (undefined8 ***)ppuStack_38;
    if (-1 < (long)uStack_28) {
      uVar2 = uStack_28 >> 0x38;
      pppuVar4 = &ppuStack_38;
    }
    pppuVar7 = &ppuStack_60;
    FUN_1001a3c94(pppuVar7,pppuVar4,uVar2);
    if (((ulong)pppuVar7 & 1) == 0) {
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      *param_1 = 0;
      func_0x000107c60c94(param_1 + 2,&uStack_78);
      param_1[8] = 0x80000000;
      func_0x000107c60ca0(&uStack_78);
    }
    else {
      uVar5 = uStack_40._4_4_;
      *param_1 = (undefined4)uStack_40;
      func_0x000107c60c94(param_1 + 2,(ulong)puStack_48 & 0xfffffffffffffffc);
      param_1[8] = uVar5;
    }
    FUN_1001a3dc4(&ppuStack_60);
  }
  func_0x000107c60ca0(&ppuStack_38);
  return;
}



/* Entry: 1001a3c94; end: 1001a3cb3;  */

void FUN_1001a3c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_100063660(param_1,&uStack_20);
  return;
}



/* Entry: 1001a3cb4; end: 1001a3d13;  */

void FUN_1001a3cb4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x000106af6874(param_1 + 0x18);
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1001a3d14; end: 1001a3d1f;  */

void FUN_1001a3d14(void)

{
  return;
}



/* Entry: 1001a3d20; end: 1001a3db3;  */

byte * FUN_1001a3d20(byte *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5,
                    undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  short *unaff_x19;
  byte *unaff_x20;
  ulong uVar4;
  
  func_0x000100063acc();
  uVar2 = 0;
  if ((param_4 & 0xff) == 0) {
    FUN_100063b70();
    if ((param_4 & 1) != 0) {
      func_0x000107c39b7c();
    }
    if (param_4 == 0) {
      param_1 = param_2 + 1;
      func_0x000100063b88();
    }
    else {
      func_0x000107c39b5c();
    }
    if (param_1 != (byte *)0x0) {
      pbVar3 = param_1;
      func_0x000100063e28();
      if (!(bool)uVar2) {
        func_0x000100063e34();
                    /* WARNING: Could not recover jumptable at 0x000100063e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
      if (*unaff_x19 != 0) {
        func_0x0001000644fc();
      }
      return pbVar3;
    }
    func_0x000107c39a00();
DAT_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (byte *)0x0;
  }
  func_0x000107c399e0();
  func_0x000100064c34();
  uVar4 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar4 = (uVar4 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            goto DAT_10b4c5d10;
          }
          func_0x000107c39ba4();
          uVar4 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar4 = (uVar4 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar4 = uVar4 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar4 = uVar4 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  pbVar3 = unaff_x20;
  FUN_100064d5c(unaff_x20,uVar4 >> 3 & 0x1fffffff);
  if (pbVar3 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110cf0bf0)[(ulong)*(ushort *)(pbVar3 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar3;
}



/* Entry: 1001a3db4; end: 1001a3dc3;  */

void FUN_1001a3db4(ulong *param_1)

{
  ulong uVar1;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar1 = *param_1 & 0xfffffffffffffffe;
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar1 + 8);
  }
  __ZdlPv(uVar1);
  *param_1 = 0;
  return;
}



/* Entry: 1001a3dc4; end: 1001a3fc3;  */

long FUN_1001a3dc4(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_100067de0(param_1 + 0x18);
  return param_1;
}


