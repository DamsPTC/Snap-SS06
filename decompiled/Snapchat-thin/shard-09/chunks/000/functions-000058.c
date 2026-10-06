/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068ecc4c; end: 1068eccfb; -[SCContentFeedDatabaseFeedCardRank hash] */

undefined8 * FUN_1068ecc4c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x38);
  uVar6 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  uStack_50 = uVar3;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1068ecde8:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1068ecdf4;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar5 & 1) != 0) &&
        (((*(long *)((long)puVar4 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10))) &&
         (*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20))))) &&
       ((*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38))))) {
      dVar9 = ABS(*(double *)((long)puVar4 + 0x30) - *(double *)(param_3 + 0x30));
      dVar8 = ABS(*(double *)((long)puVar4 + 0x30) + *(double *)(param_3 + 0x30)) *
              2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        puVar7 = *(undefined1 **)((long)puVar4 + 0x18);
        if (puVar7 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1068ecdf4;
        }
        goto LAB_1068ecde8;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_1068ecdf4:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 1068eccfc; end: 1068ece0f; -[SCContentFeedDatabaseFeedCardRank isEqual:] */

long FUN_1068eccfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1068ecde8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068ecdf4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((((uVar3 & 1) != 0) &&
        (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) &&
       ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1068ecdf4;
        }
        goto LAB_1068ecde8;
      }
    }
    lVar4 = 0;
  }
LAB_1068ecdf4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1068ece10; end: 1068ece47;  */

undefined8 FUN_1068ece10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 1068ece48; end: 1068ece53; -[SCContentFeedDatabaseFeedCardRank .cxx_destruct] */

void FUN_1068ece48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1068ece54; end: 1068ecf2f;  */

undefined1 *
FUN_1068ece54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126f3ba0;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return puVar4;
}



/* Entry: 1068ecf30; end: 1068ecf53; -[SCContentFeedDatabaseFeed copyWithZone:] */

undefined8 FUN_1068ecf30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068ecf54; end: 1068ecfeb; -[SCContentFeedDatabaseFeed hash] */

undefined8 * FUN_1068ecf54(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_28;
  
  puVar2 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x20);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x30);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  func_0x000100505190(&uStack_60,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_1068ed0ac:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1068ed0b8;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar3 & 1) != 0) &&
        (((*(long *)((long)puVar2 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10))) &&
         (*(long *)((long)puVar2 + 0x20) == *(long *)(param_3 + 0x20))))) &&
       (*(long *)((long)puVar2 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar4 = *(long *)((long)puVar2 + 0x18);
      if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x28);
        if (puVar5 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_1068ed0b8;
        }
        goto LAB_1068ed0ac;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_1068ed0b8:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 1068ecfec; end: 1068ed0d3; -[SCContentFeedDatabaseFeed isEqual:] */

long FUN_1068ecfec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1068ed0ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068ed0b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) &&
       (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_1068ed0b8;
        }
        goto LAB_1068ed0ac;
      }
    }
    lVar3 = 0;
  }
LAB_1068ed0b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068ed0d4; end: 1068ed11b;  */

undefined8 FUN_1068ed0d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 1068ed11c; end: 1068ed14b; -[SCContentFeedDatabaseFeed .cxx_destruct] */

void FUN_1068ed11c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1068ed14c; end: 1068ed1eb;  */

undefined1 *
FUN_1068ed14c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126f3ba8;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
    }
  }
  _objc_release(param_4);
  return puVar4;
}



/* Entry: 1068ed1ec; end: 1068ed20f; -[SCContentFeedDatabasePreservedStory copyWithZone:] */

undefined8 FUN_1068ed1ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068ed210; end: 1068ed28f; -[SCContentFeedDatabasePreservedStory hash] */

undefined8 * FUN_1068ed210(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x20);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_50,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1068ed334;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)((long)puVar2 + 0x20) != *(long *)(param_3 + 0x20))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_1068ed334;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_1068ed334;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_1068ed334:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 1068ed290; end: 1068ed34f; -[SCContentFeedDatabasePreservedStory isEqual:] */

long FUN_1068ed290(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068ed334;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_1068ed334;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_1068ed334;
    }
  }
  lVar3 = 1;
LAB_1068ed334:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068ed350; end: 1068ed35b; -[SCContentFeedDatabasePreservedStory .cxx_destruct] */

void FUN_1068ed350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1068ed35c; end: 1068ee3e3; -[SCDiscoverFeedDeeplinkHandlingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068ed35c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  long lVar134;
  undefined *puVar135;
  long lVar136;
  undefined8 uVar137;
  undefined8 uVar138;
  undefined8 uVar139;
  undefined8 uVar140;
  undefined8 uVar141;
  undefined8 uVar142;
  undefined8 uVar143;
  long lVar144;
  long lVar145;
  long lVar146;
  long lVar147;
  long lVar148;
  long lVar149;
  long lVar150;
  long lVar151;
  long lVar152;
  long lVar153;
  long lVar154;
  
  puVar1 = PTR_PTR_1126ced70;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112753198;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11275319c;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_1127531a0;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127531a4;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_1127531a8;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar144 = (long)_DAT_1127531ac;
  lVar10 = param_1 + lVar144;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0e9fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar144 = param_1 + lVar144;
  _objc_loadWeakRetained();
  lVar12 = lVar144;
  func_0x00010c0eb220();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_1127531b0;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c08f6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar151 = (long)_DAT_1127531b4;
  lVar15 = param_1 + lVar151;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_1127531b8;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar149 = (long)_DAT_1127531bc;
  lVar19 = param_1 + lVar149;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar136 = (long)_DAT_1127531c0;
  lVar21 = param_1 + lVar136;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar145 = (long)_DAT_1127531c4;
  lVar23 = param_1 + lVar145;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_1127531c8;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = (long)_DAT_1127531d0;
  uVar137 = *(undefined8 *)(param_1 + _DAT_1127531cc);
  lVar27 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_1127531d4;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar153 = (long)_DAT_1127531d8;
  lVar31 = param_1 + lVar153;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar153 = param_1 + lVar153;
  _objc_loadWeakRetained();
  lVar33 = lVar153;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_1127531dc;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar154 = (long)_DAT_1127531e0;
  lVar36 = param_1 + lVar154;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_1127531e4;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c11b420();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + _DAT_1127531e8;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + lVar151;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar151 = param_1 + lVar151;
  _objc_loadWeakRetained();
  lVar44 = lVar151;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_1127531ec;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + _DAT_1127531f0;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar154 = param_1 + lVar154;
  _objc_loadWeakRetained();
  lVar49 = lVar154;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_1127531f4;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar152 = (long)_DAT_1127531f8;
  lVar52 = param_1 + lVar152;
  _objc_loadWeakRetained();
  lVar53 = param_1 + _DAT_1127531fc;
  _objc_loadWeakRetained();
  lVar54 = lVar53;
  func_0x00010c23fec0();
  _objc_retainAutoreleasedReturnValue();
  uVar138 = *(undefined8 *)(param_1 + _DAT_112753200);
  lVar55 = param_1 + _DAT_112753204;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010c0ffb00();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + lVar152;
  _objc_loadWeakRetained();
  lVar58 = lVar57;
  func_0x00010bfe9f40();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1 + _DAT_112753208;
  _objc_loadWeakRetained();
  lVar60 = lVar59;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar62 = param_1 + lVar149;
  _objc_loadWeakRetained();
  lVar63 = lVar62;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  lVar149 = param_1 + lVar149;
  _objc_loadWeakRetained();
  lVar64 = lVar149;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar150 = (long)_DAT_11275320c;
  lVar65 = param_1 + lVar150;
  _objc_loadWeakRetained();
  lVar66 = lVar65;
  func_0x00010c08f140();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + _DAT_112753210;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + _DAT_112753214;
  _objc_loadWeakRetained();
  lVar70 = lVar69;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1 + _DAT_112753218;
  _objc_loadWeakRetained();
  lVar72 = lVar71;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = param_1 + _DAT_11275321c;
  _objc_loadWeakRetained();
  lVar74 = lVar73;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = param_1 + _DAT_112753220;
  _objc_loadWeakRetained();
  lVar76 = lVar75;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = param_1 + _DAT_112753224;
  _objc_loadWeakRetained();
  lVar78 = lVar77;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar150 = param_1 + lVar150;
  _objc_loadWeakRetained();
  lVar79 = lVar150;
  func_0x00010c08f180();
  _objc_retainAutoreleasedReturnValue();
  lVar152 = param_1 + lVar152;
  _objc_loadWeakRetained();
  lVar80 = lVar152;
  func_0x00010bfea160();
  _objc_retainAutoreleasedReturnValue();
  lVar81 = param_1 + _DAT_112753228;
  _objc_loadWeakRetained();
  lVar82 = lVar81;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar83 = param_1 + _DAT_11275322c;
  _objc_loadWeakRetained();
  lVar84 = lVar83;
  func_0x00010c08f500();
  _objc_retainAutoreleasedReturnValue();
  lVar145 = param_1 + lVar145;
  _objc_loadWeakRetained();
  lVar85 = lVar145;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar86 = param_1 + _DAT_112753230;
  _objc_loadWeakRetained();
  lVar87 = lVar86;
  func_0x00010c0dc480();
  _objc_retainAutoreleasedReturnValue();
  lVar88 = param_1 + _DAT_112753234;
  _objc_loadWeakRetained();
  lVar89 = lVar88;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = param_1 + _DAT_112753238;
  _objc_loadWeakRetained();
  lVar91 = lVar90;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  uVar139 = *(undefined8 *)(param_1 + _DAT_11275323c);
  uVar140 = *(undefined8 *)(param_1 + _DAT_112753240);
  lVar146 = (long)_DAT_112753244;
  lVar92 = param_1 + lVar146;
  _objc_loadWeakRetained();
  lVar93 = lVar92;
  func_0x00010c108ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar146 = param_1 + lVar146;
  _objc_loadWeakRetained();
  lVar94 = lVar146;
  func_0x00010c108e80();
  _objc_retainAutoreleasedReturnValue();
  lVar95 = param_1 + _DAT_112753248;
  _objc_loadWeakRetained();
  lVar96 = lVar95;
  func_0x00010bef3d60();
  _objc_retainAutoreleasedReturnValue();
  lVar97 = param_1 + _DAT_11275324c;
  _objc_loadWeakRetained();
  lVar98 = lVar97;
  func_0x00010c069380();
  _objc_retainAutoreleasedReturnValue();
  uVar141 = *(undefined8 *)(param_1 + _DAT_112753250);
  lVar99 = param_1 + _DAT_112753254;
  _objc_loadWeakRetained();
  lVar100 = lVar99;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar101 = param_1 + _DAT_112753258;
  _objc_loadWeakRetained();
  lVar102 = lVar101;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar103 = param_1 + _DAT_11275325c;
  _objc_loadWeakRetained();
  lVar104 = lVar103;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  uVar142 = *(undefined8 *)(param_1 + _DAT_112753260);
  lVar105 = param_1 + _DAT_112753264;
  _objc_loadWeakRetained();
  lVar147 = (long)_DAT_112753268;
  lVar106 = param_1 + lVar147;
  _objc_loadWeakRetained();
  lVar107 = lVar106;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  uVar143 = *(undefined8 *)(param_1 + _DAT_11275326c);
  lVar108 = param_1 + _DAT_112753270;
  _objc_loadWeakRetained();
  lVar109 = lVar108;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar110 = param_1 + _DAT_112753274;
  _objc_loadWeakRetained();
  lVar111 = lVar110;
  func_0x00010c260a80();
  _objc_retainAutoreleasedReturnValue();
  lVar112 = param_1 + _DAT_11275327c;
  _objc_loadWeakRetained();
  lVar113 = lVar112;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar114 = param_1 + _DAT_112753284;
  _objc_loadWeakRetained();
  lVar115 = param_1 + _DAT_112753288;
  _objc_loadWeakRetained();
  lVar116 = param_1 + _DAT_11275328c;
  _objc_loadWeakRetained();
  lVar147 = param_1 + lVar147;
  _objc_loadWeakRetained();
  lVar117 = param_1 + _DAT_112753290;
  _objc_loadWeakRetained();
  lVar118 = lVar117;
  func_0x00010c131960();
  _objc_retainAutoreleasedReturnValue();
  lVar119 = param_1 + _DAT_112753298;
  _objc_loadWeakRetained();
  lVar148 = (long)_DAT_11275329c;
  lVar120 = param_1 + lVar148;
  _objc_loadWeakRetained();
  lVar121 = lVar120;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar148 = param_1 + lVar148;
  _objc_loadWeakRetained();
  lVar122 = lVar148;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar123 = param_1 + _DAT_1127532a0;
  _objc_loadWeakRetained();
  lVar124 = lVar123;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar125 = param_1 + _DAT_1127532a4;
  _objc_loadWeakRetained();
  lVar126 = lVar125;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  lVar127 = param_1 + _DAT_1127532a8;
  _objc_loadWeakRetained();
  lVar128 = lVar127;
  func_0x00010bf81640();
  _objc_retainAutoreleasedReturnValue();
  lVar129 = param_1 + _DAT_1127532ac;
  _objc_loadWeakRetained();
  lVar130 = lVar129;
  func_0x00010c258d20();
  _objc_retainAutoreleasedReturnValue();
  lVar131 = param_1 + _DAT_1127532b0;
  _objc_loadWeakRetained();
  lVar132 = lVar131;
  func_0x00010bf534e0();
  _objc_retainAutoreleasedReturnValue();
  lVar136 = param_1 + lVar136;
  _objc_loadWeakRetained();
  lVar133 = lVar136;
  func_0x00010bf82540();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127532b4;
  _objc_loadWeakRetained();
  lVar134 = param_1;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05df00(puVar1,param_2,lVar3,lVar4,lVar6,lVar7,lVar9,lVar11,lVar12,lVar14,lVar16,
                      lVar18,lVar20,lVar22,lVar24,lVar26,uVar137,lVar28,lVar30,lVar32,lVar33,lVar35,
                      lVar37,lVar39,lVar41,lVar43,lVar44,lVar46,lVar48,lVar49,lVar51,lVar52,lVar54,
                      uVar138,lVar56,lVar58,lVar60,lVar61,lVar63,lVar64,lVar66,lVar68,lVar70,lVar72,
                      lVar74,lVar76,lVar78,lVar79,lVar80,lVar82,lVar84,lVar85,lVar87,lVar89,lVar91,
                      uVar139,uVar140,lVar93,lVar94,lVar96,lVar98,uVar141,lVar100,lVar102,lVar104,
                      uVar142,lVar105,lVar107,uVar143,lVar109);
  _objc_release(lVar134);
  _objc_release(param_1);
  _objc_release(lVar133);
  _objc_release(lVar136);
  _objc_release(lVar132);
  _objc_release(lVar131);
  _objc_release(lVar130);
  _objc_release(lVar129);
  _objc_release(lVar128);
  _objc_release(lVar127);
  _objc_release(lVar126);
  _objc_release(lVar125);
  _objc_release(lVar124);
  _objc_release(lVar123);
  _objc_release(lVar122);
  _objc_release(lVar148);
  _objc_release(lVar121);
  _objc_release(lVar120);
  _objc_release(lVar119);
  _objc_release(lVar118);
  _objc_release(lVar117);
  _objc_release(lVar147);
  _objc_release(lVar116);
  _objc_release(lVar115);
  _objc_release(lVar114);
  _objc_release(lVar113);
  _objc_release(lVar112);
  _objc_release(lVar111);
  _objc_release(lVar110);
  _objc_release(lVar109);
  _objc_release(lVar108);
  _objc_release(lVar107);
  _objc_release(lVar106);
  _objc_release(lVar105);
  _objc_release(lVar104);
  _objc_release(lVar103);
  _objc_release(lVar102);
  _objc_release(lVar101);
  _objc_release(lVar100);
  _objc_release(lVar99);
  _objc_release(lVar98);
  _objc_release(lVar97);
  _objc_release(lVar96);
  _objc_release(lVar95);
  _objc_release(lVar94);
  _objc_release(lVar146);
  _objc_release(lVar93);
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(lVar87);
  _objc_release(lVar86);
  _objc_release(lVar85);
  _objc_release(lVar145);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar80);
  _objc_release(lVar152);
  _objc_release(lVar79);
  _objc_release(lVar150);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar149);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar154);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar151);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar153);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar144);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar135 = PTR_PTR_1126ced78;
  _objc_alloc(PTR_PTR_1126ced78);
  func_0x00010c00ce00();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar135);
  return;
}



/* Entry: 1068ee3e4; end: 1068ee797; -[SCDiscoverFeedDeeplinkHandlingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068ee3e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127532ac);
  _objc_destroyWeak(param_1 + _DAT_1127532a8);
  _objc_destroyWeak(param_1 + _DAT_1127532a4);
  _objc_destroyWeak(param_1 + _DAT_112753298);
  _objc_storeStrong(param_1 + _DAT_112753294,0);
  _objc_destroyWeak(param_1 + _DAT_1127532a0);
  _objc_destroyWeak(param_1 + _DAT_112753244);
  _objc_destroyWeak(param_1 + _DAT_112753284);
  _objc_storeStrong(param_1 + _DAT_112753280,0);
  _objc_storeStrong(param_1 + _DAT_112753278,0);
  _objc_destroyWeak(param_1 + _DAT_11275327c);
  _objc_destroyWeak(param_1 + _DAT_112753274);
  _objc_destroyWeak(param_1 + _DAT_11275322c);
  _objc_storeStrong(param_1 + _DAT_11275326c,0);
  _objc_destroyWeak(param_1 + _DAT_112753264);
  _objc_storeStrong(param_1 + _DAT_112753260,0);
  _objc_storeStrong(param_1 + _DAT_112753240,0);
  _objc_storeStrong(param_1 + _DAT_11275323c,0);
  _objc_storeStrong(param_1 + _DAT_112753200,0);
  _objc_storeStrong(param_1 + _DAT_1127531cc,0);
  _objc_storeStrong(param_1 + _DAT_112753250,0);
  _objc_destroyWeak(param_1 + _DAT_11275328c);
  _objc_destroyWeak(param_1 + _DAT_112753290);
  _objc_destroyWeak(param_1 + _DAT_112753270);
  _objc_destroyWeak(param_1 + _DAT_112753258);
  _objc_destroyWeak(param_1 + _DAT_1127532b4);
  _objc_destroyWeak(param_1 + _DAT_112753288);
  _objc_destroyWeak(param_1 + _DAT_112753268);
  _objc_destroyWeak(param_1 + _DAT_11275325c);
  _objc_destroyWeak(param_1 + _DAT_112753248);
  _objc_destroyWeak(param_1 + _DAT_11275324c);
  _objc_destroyWeak(param_1 + _DAT_1127531dc);
  _objc_destroyWeak(param_1 + _DAT_1127531f8);
  _objc_destroyWeak(param_1 + _DAT_1127531c8);
  _objc_destroyWeak(param_1 + _DAT_1127531d8);
  _objc_destroyWeak(param_1 + _DAT_1127531d4);
  _objc_destroyWeak(param_1 + _DAT_1127531d0);
  _objc_destroyWeak(param_1 + _DAT_1127531c4);
  _objc_destroyWeak(param_1 + _DAT_1127531c0);
  _objc_destroyWeak(param_1 + _DAT_1127531bc);
  _objc_destroyWeak(param_1 + _DAT_112753254);
  _objc_destroyWeak(param_1 + _DAT_1127531b8);
  _objc_destroyWeak(param_1 + _DAT_1127531b4);
  _objc_destroyWeak(param_1 + _DAT_1127531b0);
  _objc_destroyWeak(param_1 + _DAT_1127531ac);
  _objc_destroyWeak(param_1 + _DAT_1127531a8);
  _objc_destroyWeak(param_1 + _DAT_1127531a4);
  _objc_destroyWeak(param_1 + _DAT_1127531a0);
  _objc_destroyWeak(param_1 + _DAT_112753198);
  _objc_destroyWeak(param_1 + _DAT_1127531e0);
  _objc_destroyWeak(param_1 + _DAT_1127531e4);
  _objc_destroyWeak(param_1 + _DAT_1127531e8);
  _objc_destroyWeak(param_1 + _DAT_1127531ec);
  _objc_destroyWeak(param_1 + _DAT_1127531f0);
  _objc_destroyWeak(param_1 + _DAT_1127531f4);
  _objc_destroyWeak(param_1 + _DAT_1127531fc);
  _objc_destroyWeak(param_1 + _DAT_112753204);
  _objc_destroyWeak(param_1 + _DAT_112753208);
  _objc_destroyWeak(param_1 + _DAT_11275320c);
  _objc_destroyWeak(param_1 + _DAT_112753210);
  _objc_destroyWeak(param_1 + _DAT_112753214);
  _objc_destroyWeak(param_1 + _DAT_11275321c);
  _objc_destroyWeak(param_1 + _DAT_112753218);
  _objc_destroyWeak(param_1 + _DAT_11275329c);
  _objc_destroyWeak(param_1 + _DAT_112753224);
  _objc_destroyWeak(param_1 + _DAT_112753220);
  _objc_destroyWeak(param_1 + _DAT_112753228);
  _objc_destroyWeak(param_1 + _DAT_112753230);
  _objc_destroyWeak(param_1 + _DAT_112753234);
  _objc_destroyWeak(param_1 + _DAT_11275319c);
  _objc_destroyWeak(param_1 + _DAT_1127532b0);
  _objc_destroyWeak(param_1 + _DAT_112753238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127532b8);
  return;
}



/* Entry: 1068ee798; end: 1068ee80b; -[SCDiscoverFeedFriendsSectionLegacyServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068ee798(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127532c0);
  _objc_destroyWeak(param_1 + _DAT_1127532cc);
  _objc_destroyWeak(param_1 + _DAT_1127532d0);
  _objc_destroyWeak(param_1 + _DAT_1127532bc);
  _objc_destroyWeak(param_1 + _DAT_1127532c4);
  _objc_destroyWeak(param_1 + _DAT_1127532c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127532d4);
  return;
}



/* Entry: 1068ee80c; end: 1068ee8c7; -[SCDiscoverFeedMessagingServiceProvider _initializeDiscoverMessageSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068ee80c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ced98;
  _objc_alloc(PTR_PTR_1126ced98);
  lVar2 = param_1 + _DAT_1127532d8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127532dc;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf9e360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051960(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068ee8c8; end: 1068ee907;  */

void FUN_1068ee8c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be3b420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068ee908; end: 1068ee94b; -[SCDiscoverFeedMessagingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068ee908(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127532dc);
  _objc_destroyWeak(param_1 + _DAT_1127532d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127532e0);
  return;
}



/* Entry: 1068ee94c; end: 1068ee9ef; -[SCDiscoverMessageSender initWithTextMessageSender:externalMediaPreparer:] */

undefined1 *
FUN_1068ee94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3bb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068ee9f0; end: 1068eef43; -[SCDiscoverMessageSender sendAdShare:conversationIds:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:] */

void FUN_1068ee9f0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uStack_a8;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_8);
    _objc_retain(param_7);
    lVar1 = param_3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0c5900();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c294d60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a360(uVar3);
    _objc_release(lVar4);
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00010befd440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      uStack_a8 = (undefined *)0x0;
    }
    else {
      uStack_a8 = PTR_PTR_1126be800;
      _objc_alloc();
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      lVar5 = param_3;
      func_0x00010befd440(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar6);
      func_0x00010c051920();
      _objc_release(puVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    _objc_retain(param_5);
    puVar7 = PTR_PTR_1126ceda8;
    _objc_alloc_init();
    lVar4 = lVar2;
    func_0x000107d6b30c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4020(puVar7);
    _objc_release(lVar4);
    puVar8 = PTR_PTR_1126be930;
    _objc_opt_new();
    func_0x00010c1ba400();
    lVar4 = param_5;
    func_0x00010bf4d560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar6 = PTR_PTR_1126b0cd8;
    if (lVar9 != 0) {
      lVar4 = param_5;
      func_0x00010bf4d560(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c22ab40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc35c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      puVar10 = PTR_PTR_1126bc778;
      _objc_opt_new(PTR_PTR_1126bc778);
      func_0x00010c1feca0(puVar8);
      _objc_release(puVar10);
      puVar10 = puVar6;
      func_0x00010bfe5d80(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010c22ab40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar6);
    }
    puVar6 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    func_0x00010c1fea60();
    puVar10 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c27dd80(lVar2);
    func_0x000107d6b2ec();
    func_0x00010c02b8e0(puVar10);
    puVar11 = puVar10;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    lVar4 = lVar2;
    func_0x000107d6ad3c();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar12 = puVar6;
    func_0x00010bf63640(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf21f60(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b60(puVar10);
    puVar15 = puVar10;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar4);
    _objc_release(puVar11);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(param_5);
    _objc_release(lVar2);
    func_0x00010c15c260(uVar3);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(puVar15);
    _objc_release(uVar3);
    _objc_release(uStack_a8);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1068eef44; end: 1068eef73; -[SCDiscoverMessageSender .cxx_destruct] */

void FUN_1068eef44(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068eef74; end: 1068ef08b; -[SCChatExternalMediaPreparer initWithMediaDataIngester:mediaStateManager:contentDelivery:circumstanceEngine:] */

undefined1 *
FUN_1068eef74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f3bb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cedb0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068ef08c; end: 1068ef153; -[SCChatExternalMediaPreparer _durationMs:] */

undefined8 FUN_1068ef08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0be620(param_3);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1068ef154; end: 1068ef16b;  */

void FUN_1068ef154(void)

{
  return;
}



/* Entry: 1068ef16c; end: 1068ef34f; -[SCChatExternalMediaPreparer prepareUploadForMedia:mediaMetadata:trackingId:captureSessionId:conversationIds:] */

void FUN_1068ef16c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1068ef350;
  puStack_88 = &UNK_1108a01d0;
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_6);
  uStack_68 = param_6;
  _objc_retainBlock(&puStack_a0);
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_prepareDataToUploadForMediaId_tr_11261fe98);
  uVar3 = param_4;
  if ((uVar2 & 1) == 0) {
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1091c0(param_3);
  }
  else {
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1091e0(param_3);
  }
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068ef350; end: 1068ef49b;  */

void FUN_1068ef350(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      FUN_1068f0a70(*(undefined8 *)(lVar1 + 0x28),&PTR____CFConstantStringClassReference_110e64638,
                    &PTR____CFConstantStringClassReference_110e64658,1);
      uVar4 = *(undefined8 *)(lVar1 + 8);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0c5180(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf76240(uVar4);
      _objc_release(uVar3);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0c5180(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be87ac0(lVar1);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0c5180(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14a8a0(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010bea58a0(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068ef49c; end: 1068ef767; -[SCChatExternalMediaPreparer prepareUploadForMedia:snapDocKey:snapDocMediaMetadata:trackingId:captureSessionId:conversationIds:] */

void FUN_1068ef49c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar2 = &puStack_f0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_1;
  func_0x00010be07440();
  if ((int)lVar1 == 0) {
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x1068ef98c;
    puStack_d8 = &UNK_110949060;
    _objc_retain(param_4);
    uStack_d0 = param_4;
    _objc_retain(param_6);
    uStack_c8 = param_6;
    _objc_copyWeak(auStack_a8,auStack_58);
    _objc_retain(param_3);
    uStack_c0 = param_3;
    _objc_retain(param_5);
    uStack_b8 = param_5;
    _objc_retain(param_7);
    uStack_b0 = param_7;
    _objc_retainBlock(&puStack_f0);
    uVar3 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_prepareDataToUploadForMediaId_tr_11261fe98);
    if ((uVar3 & 1) == 0) {
      func_0x00010c1091c0(param_3);
    }
    else {
      func_0x00010c1091e0(param_3);
    }
    _objc_release(ppuVar2);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
  }
  else {
    FUN_1068f0a70(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dab0d8,
                  &PTR____CFConstantStringClassReference_110df2458,1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1068ef768;
    puStack_88 = &UNK_110949030;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    uStack_80 = param_4;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(param_6);
    uStack_70 = param_6;
    _objc_retain(param_7);
    uStack_68 = param_7;
    func_0x00010c109100(param_3);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_60);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068ef768; end: 1068ef8f3;  */

void FUN_1068ef768(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      FUN_1068f0a70(*(undefined8 *)(lVar1 + 0x28),&PTR____CFConstantStringClassReference_110dad2d8,
                    &PTR____CFConstantStringClassReference_110e64698,1);
      func_0x00010bf76240(*(undefined8 *)(lVar1 + 8));
    }
    else {
      FUN_1068f0a70(*(undefined8 *)(lVar1 + 0x28),&PTR____CFConstantStringClassReference_110dab0d8,
                    &PTR____CFConstantStringClassReference_110e64698,1);
      _objc_initWeak(auStack_68,lVar1);
      _objc_copyWeak(auStack_70,auStack_68);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      func_0x00010bea58e0(lVar1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1068ef8f4; end: 1068efa6f;  */

void FUN_1068ef8f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    FUN_1068f0a70(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dab0d8,
                  &PTR____CFConstantStringClassReference_110df24f8,1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14a8a0();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068efa70; end: 1068efc87; -[SCChatExternalMediaPreparer prepareUploadForMediaData:mediaMetadata:trackingId:captureSessionId:conversationIds:] */

void FUN_1068efa70(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar2 = &puStack_b0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76240(uVar3);
    _objc_release(uVar4);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1068efc88;
    puStack_98 = &UNK_110857e00;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    uStack_90 = param_4;
    _objc_retain(param_3);
    lStack_88 = param_3;
    _objc_retain(param_5);
    uStack_80 = param_5;
    _objc_retain(param_6);
    uStack_78 = param_6;
    _objc_retainBlock(&puStack_b0);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14a8a0(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(lStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068efc88; end: 1068efd17;  */

void FUN_1068efc88(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if ((param_2 & 1) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c0c5180(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf76240(uVar3);
      _objc_release(uVar2);
    }
    else {
      func_0x00010bea58a0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068efd18; end: 1068efd8f; -[SCChatExternalMediaPreparer _recordVideoCodecHintFromMedia:forMediaId:] */

void FUN_1068efd18(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_videoCodecOfPreparedData_112684018);
  if (((uVar1 & 1) != 0) && (uVar1 = param_3, func_0x00010c2997c0(), uVar1 != 0)) {
    func_0x00010c221360(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068efd90; end: 1068eff63; -[SCChatExternalMediaPreparer _setMediaUploadReferenceForMediaData:mediaMetadata:trackingId:captureSessionId:] */

void FUN_1068efd90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  uVar9 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf93e00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf93e00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = param_4;
  func_0x00010bf8b160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be06b20(param_1,param_2,uVar6);
  func_0x00010c0df840(puVar7,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c27dd80();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068eff64;
  puStack_70 = &UNK_110949090;
  uStack_68 = param_4;
  _objc_retain(param_4);
  func_0x00010c21d0e0(uVar9,param_2,uVar1,param_3,0,uVar3,uVar5,puVar7,uVar8,param_6,&puStack_88);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(param_4);
  return;
}



/* Entry: 1068eff64; end: 1068f0087;  */

void FUN_1068eff64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0880(param_2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068f0088; end: 1068f0097;  */

void FUN_1068f0088(void)

{
  return;
}



/* Entry: 1068f0098; end: 1068f032f; -[SCChatExternalMediaPreparer _setMediaUploadReferenceForMediaData:snapDocKey:snapDocMediaMetadata:trackingId:captureSessionId:] */

void FUN_1068f0098(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  puVar1 = param_5;
  func_0x00010bfd6a20();
  puVar4 = param_5;
  if ((int)puVar1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar2 = param_5;
    func_0x00010bf93e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar1,param_2,puVar3,4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bf93e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar2,param_2,puVar3,4);
  }
  else {
    puVar2 = param_5;
    func_0x00010bf93e60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf93e60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = param_5;
  func_0x00010c27dd80();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uint)puVar3 < 4) {
    uVar6 = *(undefined8 *)(&UNK_10dde2e00 + ((ulong)puVar3 & 0xffffffff) * 8);
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar3 = param_5;
  func_0x00010c0c4bc0(param_5);
  func_0x00010c0df820(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068f0330;
  puStack_70 = &UNK_110949090;
  uStack_68 = param_4;
  _objc_retain(param_4);
  func_0x00010c21d0e0(uVar5,param_2,param_4,param_3,0,puVar1,puVar2,puVar4,uVar6,param_7,&puStack_88
                     );
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1068f0330; end: 1068f0453;  */

void FUN_1068f0330(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0880(param_2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068f0454; end: 1068f0463;  */

void FUN_1068f0454(void)

{
  return;
}



/* Entry: 1068f0464; end: 1068f0717; -[SCChatExternalMediaPreparer _setMediaUploadReferenceForVideoFilter:snapDocKey:snapDocMediaMetadata:trackingId:captureSessionId:transcodeCompletionHandler:] */

void FUN_1068f0464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = param_5;
  func_0x00010bfd6a20();
  puVar4 = param_5;
  if ((int)puVar1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar2 = param_5;
    func_0x00010bf93e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bf93e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar2);
  }
  else {
    puVar2 = param_5;
    func_0x00010bf93e60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf93e60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  func_0x00010c24e4c0(uVar5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068f0718; end: 1068f087b;  */

void FUN_1068f0718(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0880(param_2);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068f087c; end: 1068f08fb;  */

/* WARNING: Removing unreachable block (ram,0x0001068f0ae0) */
/* WARNING: Removing unreachable block (ram,0x0001068f0b24) */

void FUN_1068f087c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dab0d8;
  ppuVar3 = &PTR____CFConstantStringClassReference_110df2498;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(&PTR____CFConstantStringClassReference_110dab0d8);
  _objc_retain(&PTR____CFConstantStringClassReference_110df2498);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110dab0d8);
    ppuVar2 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dab0d8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110dab0d8);
    func_0x00010002b838(auStack_78,ppuVar2);
    _objc_retain(&PTR____CFConstantStringClassReference_110df2498);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110df2498);
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110df2498);
    _objc_release(&PTR____CFConstantStringClassReference_110df2498);
    func_0x00010002b838(auStack_60,ppuVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1109490f0,&uStack_98,1);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110df2498);
  _objc_release(&PTR____CFConstantStringClassReference_110dab0d8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(&PTR____CFConstantStringClassReference_110df2498);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(&PTR____CFConstantStringClassReference_110df2498);
    _objc_release(&PTR____CFConstantStringClassReference_110dab0d8);
    __Unwind_Resume(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1068f08fc; end: 1068f09a7; -[SCChatExternalMediaPreparer _eligibleForChunkedUploadingWithMedia:] */

undefined8 FUN_1068f08fc(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_prepareChunkedTranscodeVideoFilt_11261fe60);
  if ((uVar2 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010c067f00();
    func_0x00010bf8b160(param_4);
    if ((double)iVar1 <= param_1) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bf1f440(uVar3);
      goto LAB_1068f098c;
    }
  }
  uVar3 = 0;
LAB_1068f098c:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 1068f09a8; end: 1068f09fb; -[SCChatExternalMediaPreparer .cxx_destruct] */

void FUN_1068f09a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068f09fc; end: 1068f0a6f; -[SCGrapheneChatMediaChunkedTranscodingMetric2 init] */

undefined1 * FUN_1068f09fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3bc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1068f0a70; end: 1068f0c9f;  */

void FUN_1068f0a70(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1109490f0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1068f0ca0; end: 1068f0ca3; -[SCAttribute initWithDictionary:] */

void FUN_1068f0ca0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1068f0ca4; end: 1068f0ca7; -[SCAttribute initWithCoder:] */

void FUN_1068f0ca4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1068f0ca8; end: 1068f0cab; -[SCAttribute encodeWithCoder:] */

void FUN_1068f0ca8(void)

{
  return;
}



/* Entry: 1068f0cac; end: 1068f0cb7; -[SCAttribute attributeParameters] */

void FUN_1068f0cac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSDictionary_1126ae670,PTR_s_dictionary_1125ba130);
  return;
}



/* Entry: 1068f0cb8; end: 1068f0d77; -[SCAttribute attributeType] */

void FUN_1068f0cb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar2 = PTR_PTR_1126cedb8;
  _objc_retain();
  _objc_alloc_init(puVar2);
  func_0x00010c2064c0();
  _objc_release(puVar1);
  func_0x00010c189b80(0x4024000000000000,puVar2);
  func_0x00010c217520(0x4000000000000000,puVar2);
  func_0x00010c1d9b00(0x4022000000000000,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068f0d78; end: 1068f0deb; -[SCChatInputViewControllerLogger initWithUserTrackedLogger:] */

undefined1 * FUN_1068f0d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3bc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068f0dec; end: 1068f0eb7; -[SCChatInputViewControllerLogger logInputDrawer:activationFromState:] */

void FUN_1068f0dec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5698);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  func_0x00010bea38c0(param_1);
  if (lVar1 != 0) {
    func_0x00010bf89e60(param_3);
  }
  uVar3 = param_1;
  func_0x00010bf89e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be55800(param_1);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068f0eb8; end: 1068f0fa7; -[SCChatInputViewControllerLogger logInputDrawer:deactivationFromState:] */

void FUN_1068f0eb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5698);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010bf89e60(param_3);
  }
  uVar3 = param_1;
  func_0x00010bf89e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  func_0x00010bea38c0(param_1);
  func_0x00010be55800(param_1);
  _objc_release(uVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068f0fa8; end: 1068f10ff; -[SCChatInputViewControllerLogger logInputDrawer:transitionFromState:toState:] */

void FUN_1068f0fa8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5698);
  lVar1 = param_3;
  if ((int)lVar4 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  lVar4 = 0;
  if (param_4 != 0) {
    lVar4 = 2;
  }
  lVar2 = 3;
  if (param_4 != 2) {
    lVar2 = 0;
  }
  lVar3 = 1;
  if (param_5 == 1) {
    lVar3 = lVar2;
  }
  if (param_5 != 2) {
    lVar4 = lVar3;
  }
  if (lVar1 != 0) {
    func_0x00010bf89e60(param_3);
  }
  uVar5 = param_1;
  func_0x00010bf89e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf51e00();
  _objc_release(uVar5);
  func_0x00010bea38c0(param_1);
  uVar5 = uVar6;
  if (lVar4 == 0) {
    uVar7 = param_1;
    func_0x00010bf89e40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf51e00();
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  func_0x00010be55800(param_1);
  _objc_release(uVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068f1100; end: 1068f117f; -[SCChatInputViewControllerLogger logSubmenuExpansion:] */

void FUN_1068f1100(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bac18;
  _objc_opt_new(PTR_PTR_1126bac18);
  func_0x00010c191860();
  func_0x00010c191840(puVar1,param_2,5);
  func_0x00010c206c40(puVar1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068f1180; end: 1068f11a7; -[SCChatInputViewControllerLogger drawerSessionId] */

void FUN_1068f1180(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068f11a8; end: 1068f1387; -[SCChatInputViewControllerLogger _logLoggableDrawer:viewMode:actionType:drawerType:drawerSessionId:] */

void FUN_1068f11a8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  if (param_6 == 1) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    param_1 = 0;
    if (param_6 != 0) goto LAB_1068f125c;
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined **)(param_2 + 0x18) = puVar2;
  }
  _objc_release(uVar1);
LAB_1068f125c:
  func_0x00010c262560(param_4);
  func_0x00010c15e320(param_4);
  func_0x00010c0e9e20(param_4);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126bac18;
  _objc_alloc_init(PTR_PTR_1126bac18);
  func_0x00010c191840();
  func_0x00010c191860(puVar2);
  func_0x00010c191940(puVar2);
  func_0x00010c226c40(puVar2);
  func_0x00010c1918e0(puVar2);
  if ((param_6 < 2) && (func_0x00010c1918c0(puVar2), param_6 == 1)) {
    func_0x00010c1b6240(puVar2);
    func_0x00010c2156e0(param_1,puVar2);
  }
  _objc_release(param_8);
  uVar3 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_appendFieldsForActionType_toChat_11259f488);
  if ((uVar3 & 1) != 0) {
    func_0x00010bf06b80(param_4);
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068f1388; end: 1068f13db; -[SCChatInputViewControllerLogger _setDrawerSessionIfNecessary:] */

void FUN_1068f1388(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 == 1) {
    lVar1 = 0;
  }
  else {
    if (param_3 != 0) {
      return;
    }
    lVar1 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068f13dc; end: 1068f1417; -[SCChatInputViewControllerLogger .cxx_destruct] */

void FUN_1068f13dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068f1418; end: 1068f1533; -[SCChatMediaContentDownloadableItem initWithChatMediaContent:messageBodyType:messageId:analyticsMessageId:conversationId:userInitiated:requestSource:] */

undefined1 *
FUN_1068f1418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f3bd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068f1534; end: 1068f153b; -[SCChatMediaContentDownloadableItem mediaId] */

void FUN_1068f1534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 1068f153c; end: 1068f1543; -[SCChatMediaContentDownloadableItem conversationId] */

undefined8 FUN_1068f153c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068f1544; end: 1068f154b; -[SCChatMediaContentDownloadableItem messageId] */

undefined8 FUN_1068f1544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068f154c; end: 1068f1553; -[SCChatMediaContentDownloadableItem analyticsMessageId] */

undefined8 FUN_1068f154c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068f1554; end: 1068f155b; -[SCChatMediaContentDownloadableItem messageBodyType] */

undefined8 FUN_1068f1554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1068f155c; end: 1068f1563; -[SCChatMediaContentDownloadableItem chatMediaContent] */

undefined8 FUN_1068f155c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1068f1564; end: 1068f156b; -[SCChatMediaContentDownloadableItem userInitiated] */

undefined1 FUN_1068f1564(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1068f156c; end: 1068f1573; -[SCChatMediaContentDownloadableItem requestSource] */

undefined8 FUN_1068f156c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1068f1574; end: 1068f15bb; -[SCChatMediaContentDownloadableItem .cxx_destruct] */

void FUN_1068f1574(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068f15bc; end: 1068f1677; -[SCChatMediaContentDownloadHandler initWithChatRequestManager:mediaStateManager:chatLogger:] */

undefined1 *
FUN_1068f15bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3bd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068f1678; end: 1068f1933; -[SCChatMediaContentDownloadHandler downloadItem:completion:] */

void FUN_1068f1678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bedb680(param_1,param_2,param_3,1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0(uVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e64798);
  _objc_release(uVar2);
  _objc_release(uVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0cb2a0();
  uVar4 = param_3;
  func_0x00010bf36ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf36ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf026e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf36ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c292920();
  func_0x00010c136720();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c15c160(param_1,param_2,uVar2,uVar1,uVar3,uVar4,uVar6,uVar7,uVar9,(char)uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068f1934; end: 1068f19d7;  */

void FUN_1068f1934(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bedb680(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068f19c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,1);
    return;
  }
  return;
}



/* Entry: 1068f19d8; end: 1068f1ae7;  */

void FUN_1068f19d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  func_0x00010bedb680(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068f1acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x10))(lVar5,0);
    return;
  }
  return;
}



/* Entry: 1068f1ae8; end: 1068f1bbf; -[SCChatMediaContentDownloadHandler _updateMediaStateForItem:state:] */

void FUN_1068f1ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0cb5a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0cb2a0(param_3);
  _objc_release(param_3);
  func_0x00010c283520(param_1,param_2,uVar1,uVar2,uVar3,uVar4,param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068f1bc0; end: 1068f1cbf; -[SCChatMediaContentDownloadHandler boostDownloadRequest:] */

void FUN_1068f1bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0cb5a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf026e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0cb2a0(param_3);
  uVar5 = param_3;
  func_0x00010bf36ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c136720(param_3);
  _objc_release(param_3);
  func_0x00010bf1f700(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068f1cc0; end: 1068f1cf3; -[SCChatMediaContentDownloadHandler .cxx_destruct] */

void FUN_1068f1cc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1068f1cf4; end: 1068f1dff; -[SCChatMediaReferenceManager addReferenceToMediaId:forMessage:conversationId:] */

void FUN_1068f1cf4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) &&
     (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1068f1e00;
    puStack_68 = &UNK_11084c4a0;
    _objc_retain(param_3);
    lStack_60 = param_3;
    _objc_retain(param_4);
    lStack_58 = param_4;
    _objc_retain(param_5);
    lStack_50 = param_5;
    lStack_48 = param_1;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
    _objc_release(lStack_50);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068f1e00; end: 1068f1f47;  */

void FUN_1068f1e00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cedc0;
  _objc_alloc(PTR_PTR_1126cedc0);
  func_0x00010c0052a0();
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10),param_2,puVar3,
                        *(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18),param_2,puVar3,puVar1);
    _objc_release(puVar3);
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
  func_0x00010c0e00e0(uVar4,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
  func_0x00010c0e00e0(uVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068f1f48; end: 1068f200f; -[SCChatMediaReferenceManager referencesForMediaId:block:] */

void FUN_1068f1f48(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1068f2010;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(param_4);
    lStack_48 = param_1;
    uStack_38 = param_4;
    _objc_retain(param_3);
    lStack_40 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068f2010; end: 1068f2057;  */

void FUN_1068f2010(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068f2058; end: 1068f20f7; -[SCChatMediaReferenceManager removeReferencesForConversationId:] */

void FUN_1068f2058(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1068f20f8;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1068f20f8; end: 1068f21f7;  */

void FUN_1068f20f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be36cc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_c8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010be8c460(*(undefined8 *)(param_1 + 0x20),param_2,
                            *(undefined8 *)(lStack_108 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      puVar5 = auStack_c8;
      lVar2 = lVar1;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1068f21f8;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  lStack_130 = lVar1;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  puVar3 = (undefined1 *)puVar4;
  func_0x00010c08fa60();
  if ((puVar3 != (undefined1 *)0x0) &&
     (puVar3 = puVar5, func_0x00010c08fa60(), puVar3 != (undefined1 *)0x0)) {
    uVar6 = *(undefined8 *)(lVar2 + 8);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_1068f22c8;
    puStack_160 = &UNK_110848ba8;
    _objc_retain(puVar5);
    puStack_158 = puVar5;
    _objc_retain(puVar4);
    puStack_150 = (undefined1 *)puVar4;
    lStack_148 = lVar2;
    func_0x00010c0f7fc0(uVar6,param_2,&puStack_178);
    _objc_release(puStack_150);
    _objc_release(puStack_158);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 1068f21f8; end: 1068f22c7; -[SCChatMediaReferenceManager removeReferencesForMessageId:conversationId:] */

void FUN_1068f21f8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1068f22c8;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retain(param_3);
    lStack_40 = param_3;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_40);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068f22c8; end: 1068f230b;  */

void FUN_1068f22c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cedc0;
  _objc_alloc(PTR_PTR_1126cedc0);
  func_0x00010c0052a0();
  func_0x00010be8c460(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068f230c; end: 1068f24a7; -[SCChatMediaReferenceManager _removeIdentifier:] */

void FUN_1068f230c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 unaff_x22;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0e00e0(uVar3,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360();
        _objc_release(uVar3);
        lVar4 = *(long *)(param_1 + 0x10);
        func_0x00010c0e00e0(lVar4,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        _objc_release(lVar4);
        if (lVar5 == 0) {
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1068f24a8;
  uStack_160 = unaff_x22;
  lStack_158 = lVar1;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  lVar1 = *(long *)(lVar2 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar2 + 0x18);
    func_0x00010bf002e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_1068f2574;
    puStack_170 = &UNK_110949160;
    _objc_retain(puVar6);
    uVar3 = uVar7;
    puStack_168 = (undefined1 *)puVar6;
    func_0x00010bfaea20(uVar7,param_2,&puStack_188);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_168);
    _objc_release(uVar7);
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1068f24a8; end: 1068f2573; -[SCChatMediaReferenceManager _identifiersMatchingConversationId:] */

void FUN_1068f24a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf002e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1068f2574;
    puStack_40 = &UNK_110949160;
    _objc_retain(param_3);
    uVar3 = uVar2;
    uStack_38 = param_3;
    func_0x00010bfaea20(uVar2,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_38);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1068f2574; end: 1068f25bb;  */

undefined8 FUN_1068f2574(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1068f25bc; end: 1068f25f7; -[SCChatMediaReferenceManager .cxx_destruct] */

void FUN_1068f25bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068f25f8; end: 1068f265f;  */

void FUN_1068f25f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cedc8;
  _objc_alloc(PTR_PTR_1126cedc8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffdda0(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068f2660; end: 1068f26bb;  */

void FUN_1068f2660(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf11840();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068f26bc; end: 1068f28e7; -[SCChatMediaRequestManager downloadChatMediaForChatMediaContent:messageBodyType:messageId:messageTrackingId:conversationId:isGroupConversation:requestContext:requestSource:downloadSuccess:downloadFailure:] */

void FUN_1068f26bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_70,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_98,auStack_70);
  _objc_retain(param_3);
  uStack_90 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_88 = param_9;
  uStack_80 = param_10;
  uStack_78 = param_8;
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1068f28e8; end: 1068f293f;  */

void FUN_1068f28e8(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068f2940; end: 1068f2cb3; -[SCChatMediaRequestManager _downloadChatMediaForChatMediaContent:messageBodyType:messageId:messageTrackingId:conversationId:isGroupConversation:requestContext:requestSource:downloadSuccess:downloadFailure:] */

void FUN_1068f2940(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar3 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3fc40(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_2 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  if (param_10 < 8) {
    if ((1L << (param_10 & 0x3f) & 0xceU) == 0) {
      if (param_10 != 5) goto LAB_1068f2a68;
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) goto LAB_1068f2ac8;
      goto LAB_1068f2a78;
    }
  }
  else {
LAB_1068f2a68:
    _objc_release(uVar4);
LAB_1068f2a78:
    uVar4 = *(ulong *)(param_2 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2ee0(uVar4,param_3,uVar3,&PTR____CFConstantStringClassReference_110e64838);
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
LAB_1068f2ac8:
  uVar3 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010bf8b160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar6 = param_4;
  func_0x00010c0c6c20(param_4);
  uVar7 = param_4;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0d2280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be52600(param_1,param_2,param_3,param_7,uVar3,uVar9,param_5,param_8,uVar6,param_9,
                      uVar8,param_10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar3);
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126cedd0;
  _objc_alloc(PTR_PTR_1126cedd0);
  uVar11 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bf1f3c0();
  uVar2 = (uint)uVar3 ^ 1;
  if (param_10 != 5) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if ((1L << (param_10 & 0x3f) & 0xceU) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if (param_10 < 8) {
    uVar2 = uVar1;
  }
  func_0x00010bffdbc0(puVar10,param_3,param_4,param_5,param_6,param_7,param_8,uVar2,param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x00010bebfd00(param_2,param_3,uVar9,puVar10,param_12,param_13);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(puVar10);
  _objc_release(uVar11);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068f2cb4; end: 1068f315b; -[SCChatMediaRequestManager _logDiscreteStepForMessageId:mediaId:itemMediaId:mediaDurationSec:bodyType:conversationId:mediaType:isGroupConversation:multiSnapMetadata:requestContext:] */

void FUN_1068f2cb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_12);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1068f2e20;
  puStack_d8 = &UNK_1109491f0;
  uStack_80 = param_10;
  uStack_a0 = param_13;
  uStack_a8 = param_12;
  lStack_d0 = param_2;
  uStack_c8 = param_6;
  uStack_c0 = param_5;
  uStack_b8 = param_4;
  uStack_b0 = param_8;
  uStack_98 = param_7;
  uStack_90 = param_9;
  uStack_88 = param_1;
  _objc_retain(param_12);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f88c0(uVar1,param_3,&puStack_f0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  return;
}



/* Entry: 1068f315c; end: 1068f3307; -[SCChatMediaRequestManager _startDownloadHandler:downloableItem:downloadSuccess:downloadFailure:] */

void FUN_1068f315c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar2);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068f3308; end: 1068f33b3;  */

void FUN_1068f3308(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3c380(lVar4,param_2,uVar1,uVar2,uVar5);
  _objc_release(uVar5);
  _objc_release(lVar4);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebfd20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1068f33b4; end: 1068f34f7; -[SCChatMediaRequestManager _startDownloadHandler:downloableItem:mediaId:] */

void FUN_1068f33b4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be3fc40();
  if ((uVar1 & 1) == 0) {
    func_0x00010be3c3a0(param_1);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bf88d60(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010bdd5160(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


