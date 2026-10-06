/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058b583c; end: 1058b591b;  */

uint FUN_1058b583c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  
  lVar1 = param_2;
  _objc_retain(param_2);
  _objc_autoreleasePoolPush();
  lVar2 = param_2;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b25c0;
  if (lVar3 == 0) {
    uVar6 = 1;
  }
  else {
    lVar2 = param_2;
    func_0x00010c23ff80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (puVar4 == (undefined *)0x0) {
      uVar6 = 1;
    }
    else {
      puVar5 = puVar4;
      func_0x00010c0d73c0(puVar4);
      uVar6 = (uint)puVar5 ^ 1;
    }
    _objc_release(puVar4);
  }
  _objc_autoreleasePoolPop(lVar1);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 1058b591c; end: 1058b634f;  */

undefined *
FUN_1058b591c(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  int iVar26;
  undefined *puVar27;
  undefined *puVar28;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar5 = param_1;
  func_0x000107e756d8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  puVar13 = puVar5;
  func_0x000107e75194();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_4;
  func_0x000108ec1518();
  uVar8 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c09aa40();
  _objc_release(uVar8);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(puVar5);
  puVar23 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar23 == (undefined *)0x0) {
      _objc_release(puVar5);
      puVar23 = PTR_PTR_1126b60f8;
      puVar7 = puVar10;
      func_0x00010bf51e00();
      puVar27 = puVar11;
      func_0x00010bf51e00(puVar11);
      func_0x00010c0f2b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar27);
      _objc_release(puVar7);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
        return puVar23;
      }
      ___stack_chk_fail();
      _objc_retain();
      if (puVar13 == (undefined *)0x0) {
        puVar23 = (undefined *)0x1;
      }
      else {
        puVar23 = puVar13;
        func_0x00010b5fa088();
        if (puVar23 == (undefined *)0x270f) {
          puVar23 = (undefined *)0x0;
        }
        else {
          puVar23 = puVar13;
          func_0x00010b5fa5d4(puVar13);
        }
      }
      _objc_release(puVar13);
      return puVar23;
    }
    puVar27 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      puVar22 = *(undefined **)((long)puVar27 * 8);
      puVar12 = puVar22;
      func_0x00010bf9e140();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010bf529e0();
      if ((puVar13 == (undefined *)0x0) ||
         (puVar13 = puVar12, func_0x00010c08fa60(), puVar13 == (undefined *)0x0)) {
        puVar25 = (undefined *)0x0;
      }
      else {
        puVar25 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar14 = puVar22;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      puVar13 = param_3;
      FUN_1058b569c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_retain(puVar22);
      _objc_retain(puVar25);
      _objc_retain(puVar15);
      puVar14 = puVar15;
      func_0x00010c127ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar14;
      func_0x00010bf4c440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar14);
      if (puVar24 == (undefined *)0x0) {
        _objc_release(puVar15);
        _objc_release(puVar25);
        _objc_release(puVar22);
LAB_1058b5c58:
        puVar13 = PTR_PTR_1126af4d0;
        puVar14 = param_2;
        func_0x00010c269d40(param_2);
        _objc_retainAutoreleasedReturnValue();
        if (puVar25 == (undefined *)0x0) {
          func_0x00010bfa7380();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bfa7380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          puVar24 = puVar13;
          func_0x00010bf529e0();
          puVar14 = puVar13;
          if (puVar24 == (undefined *)0x0) {
            _objc_release(puVar25);
            puVar25 = (undefined *)0x0;
            puVar13 = (undefined *)0x0;
          }
          else {
            _objc_retain(puVar13);
          }
        }
        _objc_release(puVar14);
        puVar14 = puVar13;
        func_0x0001006372a4(puVar13,&PTR___NSConcreteGlobalBlock_1108bc028);
        _objc_release(puVar13);
        puVar24 = puVar14;
        if ((uVar9 & 1) == 0) {
          puVar13 = puVar14;
          func_0x00010bf529e0();
          func_0x0001006372a4(puVar14,&PTR___NSConcreteGlobalBlock_1108bc008);
          _objc_release(puVar14);
          puVar14 = puVar24;
          func_0x00010bf529e0();
          bVar3 = puVar14 < puVar13;
        }
        else {
          bVar3 = false;
        }
        puVar13 = puVar22;
        if (puVar25 != (undefined *)0x0) {
          puVar13 = puVar25;
        }
        _objc_retain(puVar13);
        puVar16 = param_4;
        func_0x00010bf1f440();
        puVar14 = puVar13;
        if ((int)puVar16 != 0) {
          puVar16 = puVar13;
          func_0x00010bf97200();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010c08fa60();
          _objc_release(puVar16);
          puVar16 = PTR_PTR_1126af4c0;
          if (puVar17 != (undefined *)0x0) {
            puVar17 = puVar13;
            func_0x00010bf97200(puVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = param_2;
            func_0x00010c269d40(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa70a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar18);
            _objc_release(puVar17);
            if (puVar16 != (undefined *)0x0) {
              puVar14 = puVar16;
            }
            _objc_retain(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar16);
          }
        }
        puVar16 = puVar14;
        func_0x000107e7774c(puVar14,param_4);
        _objc_retainAutoreleasedReturnValue();
        iVar26 = 0;
        if (puVar16 != (undefined *)0x0) {
          iVar26 = (int)puVar7;
        }
        if (iVar26 == 1) {
          puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar13;
          func_0x00010bf433a0();
          bVar4 = puVar17 == (undefined *)0xffffffffffffffff;
          _objc_release(puVar13);
        }
        else {
          bVar4 = false;
        }
        if (puVar25 != (undefined *)0x0) {
          puVar13 = puVar15;
          func_0x00010c127ea0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar13;
          func_0x00010bf4c440();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c080ca0();
          _objc_release(puVar17);
          _objc_release(puVar13);
        }
        puVar17 = PTR_PTR_1126bf968;
        _objc_alloc();
        func_0x00010c050f00();
        puVar18 = puVar24;
        func_0x00010bfaea20();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar14;
        func_0x00010bf9c1c0();
        puVar20 = puVar14;
        puVar13 = param_4;
        FUN_1058b552c(puVar14,param_4,param_6);
        puVar28 = puVar24;
        func_0x00010bf529e0();
        iVar26 = (int)puVar19;
        if ((puVar28 == (undefined *)0x0) &&
           (((iVar26 == 0 || (puVar20 == (undefined *)0x0)) ||
            (puVar19 = param_4, func_0x000108ec159c(), (long)iVar26 <= (long)puVar19)))) {
          bVar3 = false;
        }
        else {
          if (iVar26 == 0 || bVar3) {
LAB_1058b60b0:
            puVar19 = puVar24;
            func_0x00010bf529e0();
            bVar3 = false;
            if (puVar19 == (undefined *)0x0) goto LAB_1058b61b4;
          }
          else {
            _objc_retain(puVar18);
            puVar19 = puVar18;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            while (puVar19 != (undefined *)0x0) {
              puVar28 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(puVar18);
                }
                iVar26 = (int)*(undefined8 *)((long)puVar28 * 8);
                func_0x00010bf3d2a0();
                if (iVar26 == 3) {
                  bVar3 = true;
                  goto LAB_1058b6024;
                }
                puVar28 = puVar28 + 1;
              } while (puVar19 != puVar28);
              puVar19 = puVar18;
              func_0x00010bf52a60();
            }
            bVar3 = false;
LAB_1058b6024:
            _objc_release(puVar18);
            puVar19 = param_4;
            func_0x00010bf1f440();
            if ((bVar3) && (((ulong)puVar19 & 1) != 0)) goto LAB_1058b60b0;
            func_0x000108ec1be0(param_4);
            puVar19 = puVar14;
            func_0x00010bf9e140();
            _objc_retainAutoreleasedReturnValue();
            puVar28 = puVar19;
            puVar13 = param_5;
            func_0x000107e77618();
            _objc_release(puVar19);
            if ((((ulong)puVar28 & 1) != 0) ||
               (puVar19 = puVar18, func_0x00010bf529e0(), puVar20 <= puVar19)) goto LAB_1058b60b0;
          }
          func_0x00010bf977c0();
          if ((int)puVar22 == 0x4a) {
            puVar22 = param_4;
            func_0x00010bf1f460();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar22 != (undefined *)0x0) {
              bVar3 = false;
              goto LAB_1058b61b4;
            }
          }
          puVar22 = PTR_PTR_1126bf970;
          _objc_alloc();
          puVar19 = puVar14;
          func_0x00010bf97200(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c113c80();
          func_0x00010bf529e0();
          func_0x00010c245cc0();
          puVar28 = puVar18;
          func_0x00010bf529e0(puVar18);
          func_0x00010c03dce0((double)puVar28 / (double)puVar20,puVar22);
          _objc_release(puVar15);
          _objc_release(puVar19);
          bVar3 = true;
          puVar15 = puVar22;
        }
LAB_1058b61b4:
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar14);
        _objc_release(puVar24);
        if (bVar3) {
          if (!bVar4) goto LAB_1058b61f0;
          goto LAB_1058b61fc;
        }
      }
      else {
        puVar14 = puVar22;
        if (puVar25 != (undefined *)0x0) {
          puVar14 = puVar25;
        }
        _objc_retain(puVar14);
        puVar24 = puVar22;
        func_0x00010c080ca0();
        if ((int)puVar24 == 0) {
          puVar24 = (undefined *)0x1;
        }
        else {
          puVar16 = puVar15;
          func_0x00010c127ea0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010c26ad40();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar17;
          func_0x00010c071ae0();
          _objc_release(puVar17);
          _objc_release(puVar16);
        }
        puVar16 = puVar15;
        func_0x00010c127ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010bf4c440();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar17;
        func_0x00010c071ae0();
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar14);
        _objc_release(puVar15);
        _objc_release(puVar25);
        _objc_release(puVar22);
        if (((int)puVar18 == 0) || (((ulong)puVar24 & 1) == 0)) goto LAB_1058b5c58;
LAB_1058b61f0:
        func_0x00010befa120(puVar10);
LAB_1058b61fc:
        func_0x00010befa120(puVar11);
      }
      _objc_release(puVar15);
      _objc_release(puVar25);
      _objc_release(puVar12);
      puVar27 = puVar27 + 1;
    } while (puVar27 != puVar23);
    puVar23 = puVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1058b6350; end: 1058b6357;  */

long FUN_1058b6350(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  if (param_2 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_2;
    func_0x00010b5fa088();
    if (lVar1 == 9999) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2;
      func_0x00010b5fa5d4(param_2);
    }
  }
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 1058b6358; end: 1058b6377;  */

bool FUN_1058b6358(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf3d2a0(param_2);
  return (int)param_2 != 0;
}



/* Entry: 1058b6378; end: 1058b67e7;  */

/* WARNING: Possible PIC construction at 0x0001058b6440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001058b6540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001058b6608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001058b6544) */
/* WARNING: Removing unreachable block (ram,0x0001058b657c) */
/* WARNING: Removing unreachable block (ram,0x0001058b6444) */
/* WARNING: Removing unreachable block (ram,0x0001058b66e8) */
/* WARNING: Removing unreachable block (ram,0x0001058b646c) */
/* WARNING: Removing unreachable block (ram,0x0001058b6478) */
/* WARNING: Removing unreachable block (ram,0x0001058b660c) */
/* WARNING: Removing unreachable block (ram,0x0001058b6638) */
/* WARNING: Removing unreachable block (ram,0x0001058b66f0) */
/* WARNING: Removing unreachable block (ram,0x0001058b6704) */
/* WARNING: Removing unreachable block (ram,0x0001058b6674) */
/* WARNING: Removing unreachable block (ram,0x0001058b6688) */

void FUN_1058b6378(long param_1,long param_2,uint param_3,long param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 auStack_300 [5];
  undefined8 auStack_2d8 [5];
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  ppuVar5 = &PTR___NSConcreteGlobalBlock_1108bc088;
  lVar3 = param_2;
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108bc088);
  puStack_228 = (undefined8 *)0x0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bf52a60();
  if (lVar4 == 0) {
    _objc_release(param_1);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puStack_268 = (undefined8 *)0x0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain(param_1);
    lVar4 = param_1;
    func_0x00010bf52a60();
    if (lVar4 == 0) {
      _objc_release(param_1);
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      puStack_2a8 = (undefined8 *)0x0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      _objc_retain(param_2);
      lVar4 = param_2;
      func_0x00010bf52a60();
      if (lVar4 == 0) {
        _objc_release(param_2);
        _objc_release(puVar6);
        lVar4 = param_4;
        pcVar1 = FUN_1058b67f0;
        puVar2 = auStack_2d8;
        if ((param_3 & 1) == 0) {
          lVar4 = lVar3;
          pcVar1 = FUN_1058b6924;
          puVar2 = auStack_300;
        }
        *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        puVar2[1] = 0xc2000000;
        puVar2[2] = pcVar1;
        puVar2[3] = &UNK_1108bc0a8;
        _objc_retain(lVar4);
        puVar2[4] = lVar4;
        puVar7 = puVar2;
        _objc_retainBlock(puVar2);
        _objc_release(puVar2[4]);
        lVar4 = param_1;
        func_0x00010c0d3c80(param_1);
        lVar8 = lVar4;
        func_0x00010c246ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(puVar7);
        _objc_release(lVar3);
        _objc_release(param_4);
        _objc_release(param_2);
        _objc_release(param_1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
          return;
        }
        ___stack_chk_fail();
      }
      else {
        if (*plStack_2a0 != *plStack_2a0) {
          _objc_enumerationMutation(param_2);
        }
        ppuVar5 = (undefined **)*puStack_2a8;
      }
    }
    else {
      if (*plStack_260 != *plStack_260) {
        _objc_enumerationMutation(param_1);
      }
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuVar5 = (undefined **)*puStack_268;
      func_0x00010c113c80(ppuVar5);
      func_0x00010c0df840(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (*plStack_220 != *plStack_220) {
      _objc_enumerationMutation(param_1);
    }
    ppuVar5 = (undefined **)*puStack_228;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfa3410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar5,PTR_s_featuredStoryId_1125c66a8);
  return;
}



/* Entry: 1058b67e8; end: 1058b67ef;  */

void FUN_1058b67e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_featuredStoryId_1125c66a8);
  return;
}



/* Entry: 1058b67f0; end: 1058b6923;  */

ulong FUN_1058b67f0(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_2;
  func_0x00010c0deea0();
  uVar3 = param_2;
  func_0x00010c0deee0();
  uVar5 = param_3;
  func_0x00010c0deea0();
  uVar4 = param_3;
  func_0x00010c0deee0();
  if ((uVar2 == uVar3) == (uVar5 != uVar4)) {
    uVar5 = 0xffffffffffffffff;
    if (uVar2 == uVar3) {
      uVar5 = 1;
    }
  }
  else {
    uVar2 = param_2;
    func_0x00010c127ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107e69bc0();
    if ((int)uVar3 == 0) {
      _objc_release(uVar2);
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x000108ec18d8();
      _objc_release(uVar2);
      if (iVar1 != 0) {
        uVar2 = param_3;
        func_0x00010bf53c00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar2 != 0) {
          uVar5 = 0xffffffffffffffff;
          goto LAB_1058b68f8;
        }
      }
    }
    uVar2 = param_2;
    func_0x00010c113c80();
    uVar3 = param_3;
    func_0x00010c113c80();
    uVar5 = (ulong)(uVar3 < uVar2);
    if (uVar2 < uVar3) {
      uVar5 = 0xffffffffffffffff;
    }
  }
LAB_1058b68f8:
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 1058b6924; end: 1058b6a1f;  */

undefined * FUN_1058b6924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfa3400(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0(uVar5);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = param_3;
  func_0x00010bfa3400(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfecde0(uVar4);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_2);
  return puVar3;
}



/* Entry: 1058b6a20; end: 1058b6b7f;  */

void FUN_1058b6a20(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        puVar6 = *(undefined1 **)(lStack_128 + lVar8 * 8);
        puVar2 = puVar6;
        func_0x00010bfa3400();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        puVar5 = (undefined8 *)puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((uVar3 & 1) != 0) {
          _objc_retain(puVar6);
          goto LAB_1058b6b28;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_2;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar6 = (undefined1 *)0x0;
LAB_1058b6b28:
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar5);
  _objc_retain(puVar5);
  _objc_retain(param_1);
  func_0x00010c0f8500(lVar4);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(param_1);
  return;
}



/* Entry: 1058b6b80; end: 1058b6c37;  */

void FUN_1058b6b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c0f8500(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1058b6c38; end: 1058b6dc7;  */

void FUN_1058b6c38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar8 = *(ulong *)(lVar7 * 8);
      uVar3 = uVar8;
      func_0x00010bf33360();
      if (uVar3 < 0x30 && (1L << (uVar3 & 0x3f) & 0xb86000000000U) != 0) {
        uVar3 = uVar8;
        func_0x00010bf3fe40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c28ed80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c113e20(uVar8);
        func_0x000107fe47e4(param_2,uVar9,uVar4,uVar8);
        _objc_release(uVar4);
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1058b6dc8; end: 1058b6dcb;  */

void FUN_1058b6dc8(void)

{
  return;
}



/* Entry: 1058b6dcc; end: 1058b6e5b; -[SCMemoriesFeaturedStoryTaskThrottler startTaskIfNecessaryWithTaskCreationBlock:] */

void FUN_1058b6dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1058b6e5c;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1058b6e5c; end: 1058b6e67;  */

void FUN_1058b6e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startTaskIfNecessaryWithTaskCre_11258e098,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1058b6e68; end: 1058b6eeb; -[SCMemoriesFeaturedStoryTaskThrottler _startTaskIfNecessaryWithTaskCreationBlock:] */

void FUN_1058b6e68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x10) == 1) {
    lVar1 = param_3;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    _objc_release(uVar2);
  }
  else if (*(long *)(param_1 + 0x10) == 0) {
    lVar1 = param_3;
    (**(code **)(param_3 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x10) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058b6eec; end: 1058b6f43; -[SCMemoriesFeaturedStoryTaskThrottler didFinishCurrentTask] */

void FUN_1058b6eec(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1058b6f44;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 1058b6f44; end: 1058b6f4b;  */

void FUN_1058b6f44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfe1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didFinishCurrentTask_11255d210);
  return;
}



/* Entry: 1058b6f4c; end: 1058b6f9f; -[SCMemoriesFeaturedStoryTaskThrottler _didFinishCurrentTask] */

void FUN_1058b6f4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    func_0x00010c250e80(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058b6fa0; end: 1058b6fdb; -[SCMemoriesFeaturedStoryTaskThrottler .cxx_destruct] */

void FUN_1058b6fa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058b6fdc; end: 1058b712b; -[SCMemoriesHighlightContentDataSourceServiceProvider _createGRPCSnapFeedService:performer:] */

void FUN_1058b6fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100b6b1ec(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000108ec1898(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320(puVar2,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c1eeba0(puVar2,param_2,5000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf56360(uVar3,param_2,&PTR____CFConstantStringClassReference_110e09e18,puVar2,param_4)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126bfa00;
  _objc_alloc(PTR_PTR_1126bfa00);
  func_0x00010c058f80();
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1058b712c; end: 1058b7173;  */

void FUN_1058b712c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdee140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058b7174; end: 1058b7313; -[SCMemoriesHighlightContentDataSourceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058b7174(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b890);
  _objc_destroyWeak(param_1 + _DAT_11272b88c);
  _objc_destroyWeak(param_1 + _DAT_11272b888);
  _objc_destroyWeak(param_1 + _DAT_11272b884);
  _objc_destroyWeak(param_1 + _DAT_11272b880);
  _objc_destroyWeak(param_1 + _DAT_11272b87c);
  _objc_destroyWeak(param_1 + _DAT_11272b878);
  _objc_destroyWeak(param_1 + _DAT_11272b874);
  _objc_destroyWeak(param_1 + _DAT_11272b814);
  _objc_destroyWeak(param_1 + _DAT_11272b870);
  _objc_destroyWeak(param_1 + _DAT_11272b86c);
  _objc_destroyWeak(param_1 + _DAT_11272b868);
  _objc_destroyWeak(param_1 + _DAT_11272b864);
  _objc_destroyWeak(param_1 + _DAT_11272b860);
  _objc_destroyWeak(param_1 + _DAT_11272b85c);
  _objc_destroyWeak(param_1 + _DAT_11272b858);
  _objc_destroyWeak(param_1 + _DAT_11272b854);
  _objc_destroyWeak(param_1 + _DAT_11272b850);
  _objc_destroyWeak(param_1 + _DAT_11272b84c);
  _objc_destroyWeak(param_1 + _DAT_11272b848);
  _objc_destroyWeak(param_1 + _DAT_11272b844);
  _objc_destroyWeak(param_1 + _DAT_11272b840);
  _objc_destroyWeak(param_1 + _DAT_11272b83c);
  _objc_destroyWeak(param_1 + _DAT_11272b838);
  _objc_destroyWeak(param_1 + _DAT_11272b834);
  _objc_destroyWeak(param_1 + _DAT_11272b830);
  _objc_destroyWeak(param_1 + _DAT_11272b82c);
  _objc_destroyWeak(param_1 + _DAT_11272b828);
  _objc_destroyWeak(param_1 + _DAT_11272b824);
  _objc_destroyWeak(param_1 + _DAT_11272b820);
  _objc_destroyWeak(param_1 + _DAT_11272b81c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b818);
  return;
}



/* Entry: 1058b7314; end: 1058b738b;  */

void FUN_1058b7314(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108bc158,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1058b738c; end: 1058b75bb;  */

void FUN_1058b738c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
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
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108bc1a8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar5 = 0;
    puVar3 = auStack_78;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
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
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_a8 = FUN_1058b75bc;
  puStack_d0 = puVar3;
  pcStack_c8 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126bfa10);
  if (pcVar2 == (char *)0x0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,pcVar2);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar3 = &uStack_110;
  func_0x00010054c81c(puVar3,&lStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  puVar3 = puVar4;
  func_0x00010c0b8600(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058b75bc; end: 1058b770b;  */

void FUN_1058b75bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126bfa10);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  puVar1 = puVar2;
  func_0x00010c0b8600(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058b770c; end: 1058b772b;  */

void FUN_1058b770c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf3fb80(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058b772c; end: 1058b77fb;  */

void FUN_1058b772c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bfa10;
  _objc_alloc(PTR_PTR_1126bfa10);
  func_0x00010bfff700();
  puVar2 = puVar1;
  FUN_1058b80b8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058b77fc; end: 1058b7a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1058b77fc(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  puVar8 = &uStack_170;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126bfa10);
  if (param_1 == (undefined1 *)0x0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_1);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar1 = &uStack_110;
  func_0x00010054c81c(puVar1,&lStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(puVar2);
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = *plStack_160;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_160 != lVar7) {
          _objc_enumerationMutation(puVar2);
        }
        puVar3 = PTR_PTR_1126bfa18;
        FUN_1058b8044(PTR_PTR_1126bfa18,*(undefined8 *)(lStack_168 + (long)puVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar1 != puVar8);
      puVar1 = puVar2;
      puVar8 = &uStack_170;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined8 *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  __Unwind_Resume();
  ppuVar5 = &puStack_1a0;
  pcStack_178 = FUN_1058b7a50;
  puStack_190 = puVar2;
  puStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puStack_198 = PTR_PTR_1126eab48;
  puStack_1a0 = puVar4;
  _objc_msgSendSuper2(&puStack_1a0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar4 = (undefined1 *)puVar8;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_11272b898);
    *(undefined1 **)((long)ppuVar5 + (long)_DAT_11272b898) = puVar4;
    _objc_release(uVar6);
  }
  _objc_release(puVar8);
  return (undefined1 *)ppuVar5;
}



/* Entry: 1058b7a50; end: 1058b7acf; -[SCMemoriesFeaturedStoriesAlreadySyncedCollections initWithCollctionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1058b7a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eab48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272b898);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272b898) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058b7ad0; end: 1058b7af3; -[SCMemoriesFeaturedStoriesAlreadySyncedCollections copyWithZone:] */

undefined8 FUN_1058b7ad0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1058b7af4; end: 1058b7b03; -[SCMemoriesFeaturedStoriesAlreadySyncedCollections hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058b7af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272b898),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1058b7b04; end: 1058b7b9b; -[SCMemoriesFeaturedStoriesAlreadySyncedCollections isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1058b7b04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1058b7b80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1058b7b80;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11272b898);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11272b898)) {
      func_0x00010c071ae0();
      goto LAB_1058b7b80;
    }
  }
  lVar3 = 1;
LAB_1058b7b80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1058b7b9c; end: 1058b7bab; -[SCMemoriesFeaturedStoriesAlreadySyncedCollections collctionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1058b7b9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272b898);
}



/* Entry: 1058b7bac; end: 1058b7bbf; -[SCMemoriesFeaturedStoriesAlreadySyncedCollections .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058b7bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272b898,0);
  return;
}



/* Entry: 1058b7bc0; end: 1058b7bcb; +[SCMemoriesFeaturedStoriesAlreadySyncedCollections table] */

undefined * FUN_1058b7bc0(void)

{
  return &UNK_10f305ac0;
}



/* Entry: 1058b7bcc; end: 1058b7c77; +[SCMemoriesFeaturedStoriesAlreadySyncedCollections immutableObjectParse:bufferSize:] */

void FUN_1058b7bcc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126bfa10;
  _objc_alloc(PTR_PTR_1126bfa10);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar4 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar4);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar2 + (ulong)*puVar2 + 4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfff700(puVar3,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058b7c78; end: 1058b7c9b; +[SCMemoriesFeaturedStoriesAlreadySyncedCollections objectClassFunctionPointer] */

undefined1  [16] FUN_1058b7c78(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1058b7c94;
  auVar1._0_8_ = 0x1058b7c8c;
  return auVar1;
}



/* Entry: 1058b7c9c; end: 1058b7d37;  */

undefined1 * FUN_1058b7c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126eab50;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1058b7d38; end: 1058b8043;  */

void FUN_1058b7d38(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
LAB_1058b7fac:
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar4 < 0) {
      puVar1 = param_1;
      func_0x00010bf3fb80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = (undefined *)0x0;
      if (puVar1 == (undefined *)0x0) goto LAB_1058b7fb0;
      puVar4 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010bf636c0();
      _objc_release(puVar4);
      func_0x0001001b9e08(puVar1,&UNK_10f305af2);
      puVar4 = (undefined *)0x0;
      if (puVar1 == (undefined *)0x0) goto LAB_1058b7fb0;
      puVar4 = param_1;
      func_0x00010bf3fb80(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar2 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
      _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
      _objc_release(puVar4);
      _objc_release(puVar4);
      puVar4 = puVar1;
      _sqlite3_step();
      if ((int)puVar4 != 100) goto LAB_1058b7fac;
      puVar2 = puVar1;
      _sqlite3_column_int64(puVar1,0);
      puVar4 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bfa10);
      _sqlite3_column_blob(puVar1,1);
      _sqlite3_column_bytes(puVar1,1);
      puVar3 = puVar4;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar4);
      _sqlite3_reset(puVar1);
      if (puVar3 == (undefined *)0x0) goto LAB_1058b7fa8;
      puVar4 = PTR_PTR_1126bfa18;
      _objc_alloc(PTR_PTR_1126bfa18);
      puVar1 = puVar3;
      func_0x00010bf3fb80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_1058b7c9c(puVar4,puVar2,puVar1);
      param_1 = puVar3;
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar4 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bfa10);
      puVar3 = puVar4;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar4);
      if (puVar3 == (undefined *)0x0) {
LAB_1058b7fa8:
        param_1 = (undefined *)0x0;
        goto LAB_1058b7fac;
      }
      puVar4 = PTR_PTR_1126bfa18;
      _objc_alloc(PTR_PTR_1126bfa18);
      puVar1 = puVar3;
      func_0x00010bf3fb80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_1058b7c9c(puVar4,puVar2,puVar1);
      param_1 = puVar3;
    }
    _objc_release(puVar1);
  }
LAB_1058b7fb0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058b8044; end: 1058b80b7;  */

void FUN_1058b8044(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1058b7d38();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058b80b8; end: 1058b8263;  */

void FUN_1058b80b8(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bfa18;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1058b7d38();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar3 = PTR_PTR_1126bfa18;
    _objc_retain(param_1);
    _objc_opt_self(puVar3);
    puVar3 = PTR_PTR_1126bfa18;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010bf3fb80(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_1058b7c9c(puVar3,0xffffffffffffffff,puVar2);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar3 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar3 = param_1;
    func_0x00010bf3fb80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar3);
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058b8264; end: 1058b82c3;  */

void FUN_1058b8264(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bfa10;
    _objc_alloc(PTR_PTR_1126bfa10);
    func_0x00010bfff700();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058b82c4; end: 1058b82cf; -[SCMemoriesFeaturedStoriesAlreadySyncedCollectionsChangeRequest .cxx_destruct] */

void FUN_1058b82c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1058b82d0; end: 1058b82db; -[SCMemoriesFeaturedStoriesAlreadySyncedCollectionsChangeRequest table] */

undefined * FUN_1058b82d0(void)

{
  return &UNK_10f305ac0;
}



/* Entry: 1058b82dc; end: 1058b8323; -[SCMemoriesFeaturedStoriesAlreadySyncedCollectionsChangeRequest createTableWithSQLite:] */

void FUN_1058b82dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddbff40,0xa9,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1058b8324; end: 1058b86ab; -[SCMemoriesFeaturedStoriesAlreadySyncedCollectionsChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1058b8324(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1058b8264(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1058b86ac(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f305ba3);
    if (lVar6 == 0) goto LAB_1058b8648;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1058b8648;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bfa10);
    func_0x00010c21c9a0(puVar7);
LAB_1058b8630:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f305b56);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bfa10);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1058b8654;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1058b8654;
    }
    FUN_1058b8264(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1058b86ac(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f305c02);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bfa10);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1058b8630;
      }
    }
LAB_1058b8648:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1058b8654:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1058b86ac; end: 1058b883b;  */

ulong FUN_1058b86ac(ulong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  func_0x00010bf3fb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_2 == (char *)0x0) {
    uVar7 = 0;
    goto LAB_1058b879c;
  }
  pcVar3 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  uVar7 = param_1;
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
    _strlen(pcVar3);
    func_0x0001001cde08(param_1,pcVar3,pcVar4);
    goto LAB_1058b879c;
  }
  pcVar3 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar3 == (char *)0x0) {
    pcVar3 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar3 != (char *)0x0) goto LAB_1058b875c;
    uVar7 = 0;
  }
  else {
LAB_1058b875c:
    pcVar5 = pcVar3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar6 = pcVar3;
    func_0x00010c08fa60(pcVar3);
    pcVar4 = "";
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    func_0x0001001cde08(param_1,pcVar4,pcVar6);
  }
  _objc_release(pcVar3);
LAB_1058b879c:
  _objc_release(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001001ce2e4(param_1,4,uVar7 & 0xffffffff);
  func_0x0001001ce548(param_1,((int)uVar8 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1058b883c; end: 1058b88af; -[UNIMemoriesSnapFeedService initWithUnifiedGrpcService:] */

undefined1 * FUN_1058b883c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eab58;
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



/* Entry: 1058b88b0; end: 1058b8993; -[UNIMemoriesSnapFeedService memoriesSnapFeedWithRequest:callOptionsBuilder:handler:] */

void FUN_1058b88b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bfa20;
  _objc_opt_class(PTR_PTR_1126bfa20);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e09e38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058b8994; end: 1058b899f; -[UNIMemoriesSnapFeedService .cxx_destruct] */

void FUN_1058b8994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058b89a0; end: 1058b8a1b;  */

undefined * FUN_1058b89a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0ed0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e09e58,
                        &UNK_10ddbffec,&UNK_10ddc0018,3,FUN_1058b8a1c,0);
    do {
      if (puRam00000001136c0ed0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0ed0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0ed0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0ed0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0ed0;
}



/* Entry: 1058b8a1c; end: 1058b8a27;  */

bool FUN_1058b8a1c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1058b8a28; end: 1058b8a8f; +[MemoriesSnapFeedRequest descriptor] */

void FUN_1058b8a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ed8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a75520,
                        &PTR____CFConstantStringClassReference_110e09e78,
                        &PTR_s_snapchat_memories_113107970,&PTR_DAT_113107988,2,0x18,0x1c);
    puRam00000001136c0ed8 = puVar1;
  }
  return;
}



/* Entry: 1058b8a90; end: 1058b8af7; +[MemoriesSnapFeedResponse descriptor] */

void FUN_1058b8a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a75570,
                        &PTR____CFConstantStringClassReference_110e09e98,
                        &PTR_s_snapchat_memories_113107970,&PTR_DAT_113107a48,7,0x30,0x1c);
    puRam00000001136c0ee0 = puVar1;
  }
  return;
}



/* Entry: 1058b8af8; end: 1058b8b5f; +[ItemRanking descriptor] */

void FUN_1058b8af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a755e8,
                        &PTR____CFConstantStringClassReference_110e09eb8,
                        &PTR_s_snapchat_memories_113107970,&PTR_s_itemId_1131079c8,2,0x18,0x1c);
    puRam00000001136c0ee8 = puVar1;
  }
  return;
}



/* Entry: 1058b8b60; end: 1058b8be3; +[ItemRanking_DebugInfo descriptor] */

undefined * FUN_1058b8b60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a75610,
                        &PTR____CFConstantStringClassReference_110defeb8,
                        &PTR_s_snapchat_memories_113107970,&PTR_DAT_113107a08,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c0ef0 = puVar1;
  }
  return puRam00000001136c0ef0;
}



/* Entry: 1058b8be4; end: 1058b8cef; -[SCMemoriesLocationDataProviderImpl initWithBackupManager:locationRepository:] */

undefined1 *
FUN_1058b8be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126eab60;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058b8cf0; end: 1058b8fe3; -[SCMemoriesLocationDataProviderImpl fetchLocationMemoriesIdsWithMinLatitude:maxLatitude:minLongitude:maxLongitude:] */

void FUN_1058b8cf0(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                  undefined1 *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **unaff_x24;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (-90.0 <= param_1) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1) && !NAN(param_2)) {
      bVar1 = param_1 < param_2;
      bVar2 = param_1 == param_2;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    if (param_2 <= 90.0) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (-180.0 <= param_3) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_3) && !NAN(param_4)) {
          bVar1 = param_3 < param_4;
          bVar2 = param_3 == param_4;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        if (param_4 <= 180.0) {
          _objc_initWeak(auStack_80,param_5);
          puVar6 = param_5;
          func_0x00010be40700();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(param_5 + 0x10);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0e10a0(param_1,param_2,param_3,param_4);
          _objc_retainAutoreleasedReturnValue();
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0xc2000000;
          pcStack_98 = FUN_1058b8fe4;
          puStack_90 = &UNK_1108ac6c8;
          unaff_x24 = &puStack_a8;
          param_6 = auStack_80;
          _objc_copyWeak(auStack_88,param_6);
          puVar9 = puVar6;
          func_0x00010bf41860();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = *(undefined **)(param_5 + 0x18);
          puVar10 = puVar9;
          func_0x00010c25ffc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          _objc_destroyWeak(auStack_88);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(puVar6);
          puVar6 = auStack_80;
          _objc_destroyWeak();
          goto LAB_1058b8e80;
        }
        ppuStack_70 = &PTR____CFConstantStringClassReference_110e09f38;
      }
      else {
        ppuStack_70 = &PTR____CFConstantStringClassReference_110e09f18;
      }
    }
    else {
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e09ef8;
    }
  }
  else {
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e09ed8;
  }
  uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&ppuStack_70,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af5d0;
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar10 = PTR_PTR_1126ae6b8;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release();
LAB_1058b8e80:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x24 + 4);
    _objc_destroyWeak(auStack_80);
    __Unwind_Resume(puVar6);
    _objc_retain(puVar11);
    _objc_retain(param_6);
    puVar6 = puVar6 + 0x20;
    _objc_loadWeakRetained(puVar6);
    puVar10 = puVar6;
    func_0x00010bde2180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(param_6);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1058b8fe4; end: 1058b905f;  */

void FUN_1058b8fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde2180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058b9060; end: 1058b910b; -[SCMemoriesLocationDataProviderImpl _isFinishedInitialSync] */

void FUN_1058b9060(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf011a0();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e04e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1058b910c; end: 1058b917b;  */

void FUN_1058b910c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bf3e5a0(param_2);
  puVar2 = PTR_PTR_1126af5d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058b917c; end: 1058b93fb; -[SCMemoriesLocationDataProviderImpl _combineState:location:] */

void FUN_1058b917c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_e0 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1058b93fc;
  uStack_70 = 0x1058b940c;
  uStack_68 = 0;
  puStack_b8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 2;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1058b9414;
  puStack_c0 = &UNK_1108bc298;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x1058b9448;
  puStack_e8 = &UNK_11084d888;
  puStack_a8 = puStack_b8;
  puStack_88 = puStack_e0;
  func_0x00010c0c0800(param_3);
  if (puStack_88[5] == 0) {
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_1058b93fc;
    uStack_110 = 0x1058b940c;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    puStack_108 = puVar1;
    func_0x00010c0c0800(param_4);
    puVar1 = PTR_PTR_1126af5d0;
    if (puStack_88[5] == 0) {
      puVar2 = PTR_PTR_1126bfa30;
      _objc_alloc(PTR_PTR_1126bfa30);
      func_0x00010c026ce0();
      func_0x00010c2619e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
    }
    __Block_object_dispose(&uStack_130,8);
    _objc_release(puStack_108);
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058b93fc; end: 1058b9413;  */

void FUN_1058b93fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058b9414; end: 1058b947f;  */

void FUN_1058b9414(long param_1,uint param_2)

{
  func_0x00010bf1f3c0();
  *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (ulong)(param_2 ^ 1);
  return;
}



/* Entry: 1058b9480; end: 1058b9633;  */

void FUN_1058b9480(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_4;
  _objc_retain(param_4);
  uVar4 = 0;
  lVar7 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar8 = *(undefined8 *)(lVar10 * 8);
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
      puVar2 = PTR_PTR_1126bfa28;
      _objc_alloc(PTR_PTR_1126bfa28);
      uVar3 = uVar8;
      func_0x00010c241220(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ea00(uVar8);
      uVar11 = uVar4;
      func_0x00010bf313a0(uVar8);
      func_0x00010c0fd0e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02a6e0(uVar4,param_2,uVar11,puVar2);
      func_0x00010befa120(uVar9);
      _objc_release(puVar2);
      _objc_release(uVar8);
      _objc_release(uVar3);
      lVar10 = lVar10 + 1;
    } while (lVar7 != lVar10);
    lVar7 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar7 + 0x28);
  *(long *)(lVar7 + 0x28) = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1058b9634; end: 1058b966b;  */

void FUN_1058b9634(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058b966c; end: 1058b96a7; -[SCMemoriesLocationDataProviderImpl .cxx_destruct] */

void FUN_1058b966c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058b96a8; end: 1058b971f;  */

void FUN_1058b96a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c7640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c230100();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    _objc_alloc(PTR_PTR_1126bfa40);
    func_0x00010bff66e0();
  }
  else {
    _objc_alloc(PTR_PTR_1126bfa38);
    func_0x00010c008d40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058b9720; end: 1058b977b; -[SCMemoriesLocationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058b9720(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b8c8);
  _objc_destroyWeak(param_1 + _DAT_11272b8c4);
  _objc_destroyWeak(param_1 + _DAT_11272b8c0);
  _objc_destroyWeak(param_1 + _DAT_11272b8bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b8b8);
  return;
}



/* Entry: 1058b977c; end: 1058b97ef; -[SCGrapheneMemoriesMeoMetric2 init] */

undefined1 * FUN_1058b977c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eab68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058b97f0; end: 1058b9867;  */

void FUN_1058b97f0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108bc2f8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1058b9868; end: 1058b99db;  */

void FUN_1058b9868(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108bc348,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  puVar2 = PTR_PTR_1126b37c0;
  _objc_retain();
  _objc_opt_new(puVar2);
  func_0x00010c1ca400();
  _objc_release(pcVar1);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  func_0x00010c196600();
  puVar4 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  func_0x00010c1b5d40();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058b99dc; end: 1058b9e93;  */

void FUN_1058b99dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b37c0;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c1ca400();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  func_0x00010c196600();
  puVar3 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  func_0x00010c1b5d40();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058b9e94; end: 1058ba0db; -[SCMemoriesMashupSnapDocFactoryImpl initWithSnapDocOverlayImageGenerator:musicSyncSnapDocFactory:templateSnapDocFactory:capabilitiesManager:snapDocConverter:snapDocEditorFactory:circumstanceEngine:memoriesExperimentService:] */

undefined8 *
FUN_1058b9e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126eab70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1058ba0dc; end: 1058ba213; -[SCMemoriesMashupSnapDocFactoryImpl generateSoundSyncSnapDocFromCRFeaturedStory:] */

void FUN_1058ba0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0fa980(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  func_0x00010be1bec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010bfb26a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1058ba214; end: 1058ba38b;  */

void FUN_1058ba214(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ae6b8;
  if (param_1 == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1058ba38c;
    uStack_40 = 0x1058ba39c;
    puStack_38 = (undefined *)0x0;
    _objc_retain(param_2);
    func_0x00010c0c0800(param_2);
    puVar2 = (undefined *)puStack_58[5];
    _objc_retain(puVar2);
    _objc_release(param_2);
    __Block_object_dispose(&uStack_60,8);
    puVar1 = puStack_38;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058ba38c; end: 1058ba3a3;  */

void FUN_1058ba38c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058ba3a4; end: 1058ba42f;  */

void FUN_1058ba3a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be88fc0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058ba430; end: 1058ba827; -[SCMemoriesMashupSnapDocFactoryImpl generateMashupSnapDocWithTemplate:mediaSegments:] */

void FUN_1058ba430(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126ae6b8;
  if (param_3 == 0) {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010bf52a60();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      lVar7 = *plStack_130;
      do {
        lVar5 = 0;
        do {
          if (*plStack_130 != lVar7) {
            _objc_enumerationMutation(param_4);
          }
          puVar4 = PTR_PTR_1126ae6b8;
          lVar6 = *(long *)(lStack_138 + lVar5 * 8);
          if (lVar6 == 0) {
            puVar3 = PTR_PTR_1126af5d0;
            func_0x00010bfa01c0(PTR_PTR_1126af5d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0860a0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
LAB_1058ba784:
            _objc_release(param_4);
            goto LAB_1058ba790;
          }
          uStack_160 = 0;
          uStack_150 = 0x2020000000;
          uStack_148 = 0;
          puStack_158 = &uStack_160;
          func_0x00010bfea600(lVar6);
          _objc_retainAutoreleasedReturnValue();
          puStack_188 = puVar3;
          uStack_180 = 0xc2000000;
          pcStack_178 = FUN_1058ba828;
          puStack_170 = &UNK_11084d758;
          puStack_1b0 = puVar3;
          uStack_1a8 = 0xc2000000;
          uStack_1a0 = 0x1058ba838;
          puStack_198 = &UNK_11084e6b0;
          puStack_1d8 = puVar3;
          uStack_1d0 = 0xc2000000;
          uStack_1c8 = 0x1058ba848;
          puStack_1c0 = &UNK_11084e680;
          puStack_1b8 = &uStack_160;
          puStack_190 = &uStack_160;
          puStack_168 = &uStack_160;
          func_0x00010c0be500();
          _objc_release(lVar6);
          if ((*(char *)(puStack_158 + 3) == '\x01') &&
             (puVar2 = param_1, func_0x00010bdddd60(), puVar4 = PTR_PTR_1126ae6b8,
             ((ulong)puVar2 & 1) == 0)) {
            puVar3 = PTR_PTR_1126af5d0;
            func_0x00010bfa01c0(PTR_PTR_1126af5d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0860a0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            __Block_object_dispose(&uStack_160,8);
            goto LAB_1058ba784;
          }
          __Block_object_dispose(&uStack_160,8);
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar1 = param_4;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_4);
    _objc_initWeak(&uStack_160,param_1);
    func_0x00010be1c080(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1e0,&uStack_160);
    puVar4 = puVar3;
    func_0x00010bfb26a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_1e0);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_destroyWeak(&uStack_160);
  }
LAB_1058ba790:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(param_4 + 0x20);
    _objc_destroyWeak(&uStack_160);
    __Unwind_Resume();
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058ba828; end: 1058ba85b;  */

void FUN_1058ba828(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1058ba85c; end: 1058ba9d3;  */

void FUN_1058ba85c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ae6b8;
  if (param_1 == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1058ba38c;
    uStack_40 = 0x1058ba39c;
    puStack_38 = (undefined *)0x0;
    _objc_retain(param_2);
    func_0x00010c0c0800(param_2);
    puVar2 = (undefined *)puStack_58[5];
    _objc_retain(puVar2);
    _objc_release(param_2);
    __Block_object_dispose(&uStack_60,8);
    puVar1 = puStack_38;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058ba9d4; end: 1058baa5f;  */

void FUN_1058ba9d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be88fc0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058baa60; end: 1058bab57; -[SCMemoriesMashupSnapDocFactoryImpl templateFromTemplateId:templateSnapDoc:] */

void FUN_1058baa60(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = (undefined *)0x0;
  if ((param_4 != 0) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126bfa60;
    _objc_opt_new(PTR_PTR_1126bfa60);
    lVar1 = param_4;
    func_0x00010bf63640(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd0e0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010c21acc0(puVar2,param_2,2);
    puVar3 = PTR_PTR_1126bfa68;
    _objc_alloc(PTR_PTR_1126bfa68);
    lVar1 = param_3;
    func_0x00010bf64920(param_3,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051020(puVar3,param_2,lVar1,puVar2);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058bab58; end: 1058bab5f; -[SCMemoriesMashupSnapDocFactoryImpl generateCollageSnapDocWithSnapDoc:collageUCOLensID:collageCreativeTools:aiSnapsLensContext:] */

void FUN_1058bab58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_generateCollageSnapDocWithSnapDo_1125cd668);
  return;
}



/* Entry: 1058bab60; end: 1058bb12b; -[SCMemoriesMashupSnapDocFactoryImpl generateCollageSnapDocWithSnapDoc:collageUCOLensID:collageCreativeTools:aiSnapsLensContext:musicPickerTrack:] */

void FUN_1058bab60(long param_1,undefined **param_2,long param_3,long param_4,undefined *param_5,
                  long param_6,long param_7)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  undefined8 uVar29;
  double dVar30;
  undefined *apuStack_288 [16];
  long lStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_6;
  lVar19 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_180 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar20 = *(undefined **)(param_1 + 0x30);
  puVar3 = PTR_PTR_1126b25c0;
  _objc_opt_new(PTR_PTR_1126b25c0);
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_5;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar3;
  func_0x00010bfd9560();
  _objc_release(puVar3);
  if ((int)puVar24 == 0) {
    if (param_7 != 0) {
      puVar3 = (undefined *)0x0;
      goto LAB_1058bac80;
    }
  }
  else {
    puVar24 = param_5;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar24;
    func_0x00010c0d29c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    if (param_7 == 0) {
      if (puVar3 == (undefined *)0x0) goto LAB_1058bac98;
      func_0x00010bee0060(param_1);
    }
    else {
LAB_1058bac80:
      func_0x00010bee0080(param_1);
    }
    _objc_release(puVar3);
  }
LAB_1058bac98:
  ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = param_5;
  func_0x00010c0928a0();
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x000108ec0884();
  lStack_198 = param_4;
  if (lVar2 != 0) {
    puVar3 = *(undefined **)(param_1 + 0x38);
    func_0x000108ec0884();
  }
  uVar29 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puStack_1a8 = puVar20;
  lStack_1a0 = param_7;
  lStack_190 = param_1;
  puStack_188 = param_5;
  ppuStack_178 = ppuVar18;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  fVar28 = (float)uVar29;
  puStack_1b0 = puVar3;
  if (lVar2 != 0) {
    lVar26 = *plStack_130;
    do {
      lVar27 = 0;
      do {
        if (*plStack_130 != lVar26) {
          _objc_enumerationMutation(param_3);
        }
        puVar24 = *(undefined **)(lStack_138 + lVar27 * 8);
        puVar3 = PTR_PTR_1126bfa70;
        func_0x00010bfea520(PTR_PTR_1126bfa70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuStack_178);
        func_0x00010c0c6280();
        _objc_retainAutoreleasedReturnValue();
        param_5 = puVar24;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6c20();
        _objc_release(param_5);
        _objc_release(puVar24);
        _objc_release(puVar3);
        lVar27 = lVar27 + 1;
      } while (lVar2 != lVar27);
      lVar2 = param_3;
      func_0x00010bf52a60();
      fVar28 = (float)uVar29;
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  lVar26 = lStack_190;
  iVar1 = (int)*(undefined8 *)(lStack_190 + 0x38);
  ppuVar18 = (undefined **)0x1;
  func_0x00010bf1f440();
  lVar2 = lStack_198;
  if (lStack_198 == 0) {
    puVar20 = (undefined *)0x0;
    puVar3 = puStack_1a8;
    puVar24 = puStack_188;
  }
  else {
    lVar4 = param_3;
    func_0x00010bf529e0();
    func_0x00010c282800(lVar2);
    puVar24 = puStack_188;
    puVar3 = PTR_PTR_1126bfa78;
    param_5 = PTR_PTR_1126bfa70;
    lVar19 = lStack_180;
    if (iVar1 == 0) {
      lVar27 = lVar26;
      func_0x00010be1d6c0(lVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(param_3);
      func_0x00010be1ec20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = (undefined **)0x2;
      puVar5 = param_5;
      func_0x00010befae80(param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar26);
      _objc_release(lVar27);
      func_0x00010befa120(ppuStack_178);
      puVar20 = (undefined *)0x0;
    }
    else {
      func_0x00010be1d6c0(lVar26);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf54740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar26);
      ppuVar18 = (undefined **)0x1;
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f8 = puVar5;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_5 = puVar3;
    }
    puVar3 = puStack_1a8;
    _objc_release(puVar5);
  }
  lVar26 = lStack_1a0;
  puVar5 = PTR_PTR_1126b3068;
  _objc_alloc_init();
  puVar23 = PTR_PTR_1126b25e8;
  _objc_alloc_init(PTR_PTR_1126b25e8);
  func_0x00010c1ac2a0(puVar5);
  _objc_release(puVar23);
  func_0x00010c1dd500(puVar3);
  if ((iVar1 == 0) || (puVar23 = puVar20, func_0x00010bf529e0(), puVar23 == (undefined *)0x0)) {
    ppuVar6 = ppuStack_178;
    puVar23 = puVar3;
    ppuVar15 = ppuStack_178;
    func_0x00010bf08820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_5 = PTR_PTR_1126ae560;
    _objc_opt_new();
    ppuVar6 = ppuStack_178;
    puVar23 = puVar3;
    func_0x00010bf08820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    fVar28 = -32.0;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_1058bb12c;
    puStack_158 = &UNK_1108a7748;
    puStack_150 = param_5;
    _objc_retain(puVar20);
    ppuVar18 = *(undefined ***)(lStack_190 + 0x50);
    puStack_148 = puVar20;
    _objc_retain(param_5);
    puVar24 = puStack_188;
    ppuVar15 = &puStack_170;
    func_0x00010c297260(puVar23);
    _objc_release(puVar23);
    puVar23 = param_5;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_148);
    _objc_release(puStack_150);
    _objc_release(param_5);
  }
  _objc_release(puVar5);
  _objc_release(puVar20);
  _objc_release(ppuVar6);
  _objc_release(puVar3);
  _objc_release(lVar26);
  _objc_release(lStack_180);
  _objc_release(puVar24);
  _objc_release(lVar2);
  lVar27 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_1e8 = lVar26;
  lStack_1c8 = lVar2;
  pcStack_1b8 = FUN_1058bb12c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_200 = param_3;
  puStack_1f8 = puVar24;
  puStack_1f0 = puVar3;
  ppuStack_1e0 = ppuVar6;
  puStack_1d8 = param_5;
  puStack_1d0 = puVar23;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  if (ppuVar15 == (undefined **)0x0) {
    uVar29 = 0;
    lVar22 = *(long *)(lVar27 + 0x28);
    _objc_retain(lVar22);
    ppuVar18 = apuStack_288;
    lVar2 = lVar22;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    fVar28 = (float)uVar29;
    while (lVar2 != 0) {
      lVar25 = 0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(lVar22);
        }
        ppuVar6 = *(undefined ***)(lVar25 * 8);
        func_0x00010c142920();
        _objc_retainAutoreleasedReturnValue();
        fVar28 = (float)uVar29;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar15 = ppuVar6;
          func_0x00010bf43ca0(*(undefined8 *)(lVar27 + 0x20));
          _objc_release(ppuVar6);
          _objc_release(lVar22);
          goto LAB_1058bb254;
        }
        lVar25 = lVar25 + 1;
      } while (lVar2 != lVar25);
      ppuVar18 = apuStack_288;
      lVar2 = lVar22;
      func_0x00010bf52a60();
      fVar28 = (float)uVar29;
    }
    _objc_release(lVar22);
    ppuVar15 = param_2;
    func_0x00010bf43d60(*(undefined8 *)(lVar27 + 0x20));
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(lVar27 + 0x20));
  }
LAB_1058bb254:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar15);
  _objc_retain(lVar4);
  ppuVar6 = ppuVar15;
  func_0x00010c0905a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar15;
  func_0x00010bf1a980();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010b6fb260();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010c08fa60();
  if (ppuVar10 == (undefined **)0x0) {
    ppuVar10 = ppuVar6;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb260();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar9);
  ppuVar11 = ppuVar10;
  func_0x00010c08fa60();
  ppuVar9 = (undefined **)0x0;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar18 = &PTR____CFConstantStringClassReference_110dad0b8;
    ppuVar9 = ppuVar8;
    func_0x00010c1d0640();
  }
  func_0x00010b6fb26c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar9;
  func_0x00010c08fa60();
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar11 = ppuVar6;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb26c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar9);
  ppuVar12 = ppuVar11;
  func_0x00010c08fa60();
  ppuVar9 = (undefined **)0x0;
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar18 = &PTR____CFConstantStringClassReference_110dad858;
    ppuVar9 = ppuVar8;
    func_0x00010c1d0640();
  }
  func_0x00010b6fb284();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar12 = ppuVar9;
  _objc_opt_isKindOfClass(ppuVar9,puVar3);
  _objc_release();
  if (((ulong)ppuVar12 & 1) == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    func_0x00010b6fb284();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar9;
    func_0x00010c08fa60();
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar12 = ppuVar7;
      func_0x00010c14fa80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010b6fb284();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar9);
    ppuVar9 = ppuVar12;
    func_0x00010c08fa60();
    ppuVar18 = (undefined **)0x0;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar18 = ppuVar8;
      func_0x00010c1d0640();
    }
    func_0x00010b6fb278();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar18;
    func_0x00010c08fa60();
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar9 = ppuVar7;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010b6fb278();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar18);
    ppuVar13 = ppuVar9;
    func_0x00010c08fa60();
    ppuVar18 = (undefined **)0x0;
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar18 = ppuVar8;
      func_0x00010c1d0640();
    }
    func_0x00010b6fb290();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar18;
    func_0x00010c08fa60();
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar13 = ppuVar7;
      func_0x00010bfb7be0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010b6fb290();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar18);
    ppuVar18 = ppuVar13;
    func_0x00010c08fa60();
    if (ppuVar18 != (undefined **)0x0) {
      func_0x00010c1d0640(ppuVar8);
    }
    if (lVar4 != 0) {
      puVar3 = PTR_PTR_1126bfa80;
      func_0x00010c0e18c0(PTR_PTR_1126bfa80);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR_PTR_1126bfa88;
      func_0x00010c095580(PTR_PTR_1126bfa88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar8);
      _objc_release(puVar24);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126bfa88;
      func_0x00010bfa1de0(PTR_PTR_1126bfa88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar8);
      _objc_release(puVar3);
      lVar26 = lVar4;
      func_0x00010bfc0980(lVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126bfa88;
      func_0x00010bfc0980(PTR_PTR_1126bfa88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar8);
      _objc_release(puVar3);
      _objc_release(lVar26);
      lVar26 = lVar4;
      func_0x00010bfb81c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar26 != 0) {
        lVar26 = lVar4;
        func_0x00010bfb81c0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126bfa88;
        func_0x00010bfb81c0(PTR_PTR_1126bfa88);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar8);
        _objc_release(puVar3);
        _objc_release(lVar26);
      }
      lVar26 = lVar4;
      func_0x00010c137980();
      if ((int)lVar26 != 0) {
        puVar3 = PTR_PTR_1126bfa90;
        func_0x00010bf926c0(PTR_PTR_1126bfa90);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR_PTR_1126bfa88;
        func_0x00010c290520(PTR_PTR_1126bfa88);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar8);
        _objc_release(puVar24);
        _objc_release(puVar3);
      }
      lVar26 = lVar4;
      func_0x00010c265fc0();
      puVar3 = PTR_PTR_1126bfa98;
      if ((int)lVar26 == 0) {
        func_0x00010bf0bfc0(PTR_PTR_1126bfa98);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c265b40();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar24 = PTR_PTR_1126bfa88;
      func_0x00010c106760(PTR_PTR_1126bfa88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar8);
      _objc_release(puVar24);
      _objc_release(puVar3);
    }
    ppuVar18 = ppuVar15;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar18;
    func_0x00010bfd9580();
    _objc_release(ppuVar18);
    if ((int)ppuVar14 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar8);
      _objc_release(puVar3);
      func_0x00010bdcabe0(param_2);
      dVar30 = (double)(ulong)(uint)(fVar28 * 1000.0);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(dVar30,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar8);
      _objc_release(puVar3);
      ppuVar18 = ppuVar15;
      func_0x00010c0d2940(ppuVar15);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar18;
      func_0x00010c0d29c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24fb80();
      _objc_release(ppuVar14);
      _objc_release(ppuVar18);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar30 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar8);
      _objc_release(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar8);
    _objc_release(puVar24);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar15;
    func_0x00010c274600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar18;
    func_0x00010c274620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar18);
    ppuVar18 = ppuVar14;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (ppuVar18 != (undefined **)0x0) {
      ppuVar21 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(ppuVar14);
        }
        lVar25 = *(long *)((long)ppuVar21 * 8);
        lVar27 = lVar25;
        func_0x00010bfe5b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        lVar22 = lVar27;
        func_0x00010c08fa60();
        if ((lVar22 != 0) && (lVar22 = lVar25, func_0x00010c08fa60(), lVar22 != 0)) {
          func_0x00010befa120(puVar3);
          func_0x00010befa120(puVar24);
        }
        _objc_release(lVar25);
        _objc_release(lVar27);
        ppuVar21 = (undefined **)((long)ppuVar21 + 1);
      } while (ppuVar18 != ppuVar21);
      ppuVar18 = ppuVar14;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar14);
    puVar5 = puVar3;
    func_0x00010bf529e0();
    puVar20 = (undefined *)0x0;
    if (puVar5 != (undefined *)0x0) {
      puVar20 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010c1d0640(ppuVar8);
      _objc_release(puVar20);
      puVar20 = puVar24;
      func_0x00010bf51e00();
      func_0x00010c1d0640(ppuVar8);
      _objc_release();
    }
    func_0x00010b6fb29c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar20;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
LAB_1058bbb78:
      _objc_release(puVar20);
    }
    else {
      func_0x00010b6fb2a8();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar5;
      func_0x00010c08fa60();
      _objc_release(puVar5);
      _objc_release();
      if (puVar23 != (undefined *)0x0) {
        func_0x00010b6fb29c();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar8);
        _objc_release(puVar5);
        _objc_release();
        func_0x00010b6fb2a8();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar8);
        _objc_release(puVar5);
        goto LAB_1058bbb78;
      }
    }
    ppuVar18 = (undefined **)0x0;
    puVar20 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = (undefined *)0x0;
    if (puVar20 != (undefined *)0x0) {
      _objc_retain(puVar20);
      puVar23 = puVar20;
    }
    _objc_release(puVar20);
    _objc_release(puVar24);
    _objc_release(puVar3);
    _objc_release(ppuVar13);
    _objc_release(ppuVar9);
    _objc_release(ppuVar12);
  }
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(lVar4);
  _objc_release(ppuVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126b37c8;
    _objc_retain(lVar19);
    _objc_retain(ppuVar18);
    func_0x00010c0cb140(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar24 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar20 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar5 = PTR_PTR_1126b37d8;
    _objc_opt_new(PTR_PTR_1126b37d8);
    func_0x00010c1a99c0();
    func_0x00010c1ba8a0(puVar3);
    func_0x00010c1bcc80(puVar20);
    func_0x00010c196600(puVar24);
    func_0x00010c1b5d40(puVar23);
    puVar16 = PTR_PTR_1126b3848;
    _objc_opt_new(PTR_PTR_1126b3848);
    func_0x00010be465e0(ppuVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(ppuVar18);
    puVar17 = puVar16;
    func_0x00010c065d40(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6960();
    _objc_release(puVar17);
    _objc_release(ppuVar15);
    puVar17 = PTR_PTR_1126b37e0;
    _objc_opt_new(PTR_PTR_1126b37e0);
    func_0x00010c1bc1e0();
    func_0x00010c1c73c0(puVar23);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar5);
    _objc_release(puVar20);
    _objc_release(puVar24);
    _objc_release(puVar3);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 1058bb12c; end: 1058bb293;  */

void FUN_1058bb12c(float param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined **param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  double dVar20;
  undefined *apuStack_d8 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 == (undefined *)0x0) {
    uVar19 = 0;
    lVar15 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar15);
    param_5 = apuStack_d8;
    lVar13 = lVar15;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    param_1 = (float)uVar19;
    while (lVar13 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar15);
        }
        puVar1 = *(undefined **)(lVar18 * 8);
        func_0x00010c142920();
        _objc_retainAutoreleasedReturnValue();
        param_1 = (float)uVar19;
        if (puVar1 != (undefined *)0x0) {
          param_4 = puVar1;
          func_0x00010bf43ca0(*(undefined8 *)(param_2 + 0x20));
          _objc_release(puVar1);
          _objc_release(lVar15);
          goto LAB_1058bb254;
        }
        lVar18 = lVar18 + 1;
      } while (lVar13 != lVar18);
      param_5 = apuStack_d8;
      lVar13 = lVar15;
      func_0x00010bf52a60();
      param_1 = (float)uVar19;
    }
    _objc_release(lVar15);
    param_4 = param_3;
    func_0x00010bf43d60(*(undefined8 *)(param_2 + 0x20));
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_2 + 0x20));
  }
LAB_1058bb254:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = param_4;
  func_0x00010c0905a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010bf1a980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar3;
  func_0x00010b6fb260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar16;
  func_0x00010c08fa60();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = puVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb260();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar16);
  puVar5 = puVar4;
  func_0x00010c08fa60();
  puVar16 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    param_5 = &PTR____CFConstantStringClassReference_110dad0b8;
    puVar16 = puVar3;
    func_0x00010c1d0640();
  }
  func_0x00010b6fb26c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar16;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb26c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar16);
  puVar6 = puVar5;
  func_0x00010c08fa60();
  puVar16 = (undefined *)0x0;
  if (puVar6 != (undefined *)0x0) {
    param_5 = &PTR____CFConstantStringClassReference_110dad858;
    puVar16 = puVar3;
    func_0x00010c1d0640();
  }
  func_0x00010b6fb284();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar7 = puVar16;
  _objc_opt_isKindOfClass(puVar16,puVar6);
  _objc_release();
  if (((ulong)puVar7 & 1) == 0) {
    puVar16 = (undefined *)0x0;
    goto LAB_1058bbc04;
  }
  func_0x00010b6fb284();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar16;
  func_0x00010c08fa60();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar2;
    func_0x00010c14fa80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb284();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar16);
  puVar7 = puVar6;
  func_0x00010c08fa60();
  puVar16 = (undefined *)0x0;
  if (puVar7 != (undefined *)0x0) {
    puVar16 = puVar3;
    func_0x00010c1d0640();
  }
  func_0x00010b6fb278();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar16;
  func_0x00010c08fa60();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = puVar2;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb278();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar16);
  puVar8 = puVar7;
  func_0x00010c08fa60();
  puVar16 = (undefined *)0x0;
  if (puVar8 != (undefined *)0x0) {
    puVar16 = puVar3;
    func_0x00010c1d0640();
  }
  func_0x00010b6fb290();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar16;
  func_0x00010c08fa60();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar2;
    func_0x00010bfb7be0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb290();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar16);
  puVar16 = puVar8;
  func_0x00010c08fa60();
  if (puVar16 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar3);
  }
  if (param_7 != 0) {
    puVar16 = PTR_PTR_1126bfa80;
    func_0x00010c0e18c0(PTR_PTR_1126bfa80);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126bfa88;
    func_0x00010c095580(PTR_PTR_1126bfa88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar16);
    puVar16 = PTR_PTR_1126bfa88;
    func_0x00010bfa1de0(PTR_PTR_1126bfa88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar16);
    lVar10 = param_7;
    func_0x00010bfc0980(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126bfa88;
    func_0x00010bfc0980(PTR_PTR_1126bfa88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar16);
    _objc_release(lVar10);
    lVar10 = param_7;
    func_0x00010bfb81c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 != 0) {
      lVar10 = param_7;
      func_0x00010bfb81c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126bfa88;
      func_0x00010bfb81c0(PTR_PTR_1126bfa88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar16);
      _objc_release(lVar10);
    }
    lVar10 = param_7;
    func_0x00010c137980();
    if ((int)lVar10 != 0) {
      puVar16 = PTR_PTR_1126bfa90;
      func_0x00010bf926c0(PTR_PTR_1126bfa90);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bfa88;
      func_0x00010c290520(PTR_PTR_1126bfa88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar9);
      _objc_release(puVar16);
    }
    lVar10 = param_7;
    func_0x00010c265fc0();
    puVar16 = PTR_PTR_1126bfa98;
    if ((int)lVar10 == 0) {
      func_0x00010bf0bfc0(PTR_PTR_1126bfa98);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c265b40();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR_PTR_1126bfa88;
    func_0x00010c106760(PTR_PTR_1126bfa88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar16);
  }
  puVar16 = param_4;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar16;
  func_0x00010bfd9580();
  _objc_release(puVar16);
  if ((int)puVar9 != 0) {
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar16);
    func_0x00010bdcabe0(param_3);
    dVar20 = (double)(ulong)(uint)(param_1 * 1000.0);
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(dVar20,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar16);
    puVar16 = param_4;
    func_0x00010c0d2940(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar16;
    func_0x00010c0d29c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fb80();
    _objc_release(puVar9);
    _objc_release(puVar16);
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar20 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar16);
  }
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar16;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar16);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_4;
  func_0x00010c274600();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar16;
  func_0x00010c274620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar16 = puVar12;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (puVar16 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(puVar12);
      }
      lVar17 = *(long *)((long)puVar14 * 8);
      lVar15 = lVar17;
      func_0x00010bfe5b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar15;
      func_0x00010c08fa60();
      if ((lVar18 != 0) && (lVar18 = lVar17, func_0x00010c08fa60(), lVar18 != 0)) {
        func_0x00010befa120(puVar9);
        func_0x00010befa120(puVar11);
      }
      _objc_release(lVar17);
      _objc_release(lVar15);
      puVar14 = puVar14 + 1;
    } while (puVar16 != puVar14);
    puVar16 = puVar12;
    func_0x00010bf52a60();
  }
  _objc_release(puVar12);
  puVar12 = puVar9;
  func_0x00010bf529e0();
  puVar16 = (undefined *)0x0;
  if (puVar12 != (undefined *)0x0) {
    puVar16 = puVar9;
    func_0x00010bf51e00(puVar9);
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar16);
    puVar16 = puVar11;
    func_0x00010bf51e00();
    func_0x00010c1d0640(puVar3);
    _objc_release();
  }
  func_0x00010b6fb29c();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar16;
  func_0x00010c08fa60();
  if (puVar12 == (undefined *)0x0) {
LAB_1058bbb78:
    _objc_release(puVar16);
  }
  else {
    func_0x00010b6fb2a8();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010c08fa60();
    _objc_release(puVar12);
    _objc_release();
    if (puVar14 != (undefined *)0x0) {
      func_0x00010b6fb29c();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar12);
      _objc_release();
      func_0x00010b6fb2a8();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar12);
      goto LAB_1058bbb78;
    }
  }
  param_5 = (undefined **)0x0;
  puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = (undefined *)0x0;
  if (puVar12 != (undefined *)0x0) {
    _objc_retain(puVar12);
    puVar16 = puVar12;
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
LAB_1058bbc04:
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b37c8;
    _objc_retain(param_8);
    _objc_retain(param_5);
    func_0x00010c0cb140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar2 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar3 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar4 = PTR_PTR_1126b37d8;
    _objc_opt_new(PTR_PTR_1126b37d8);
    func_0x00010c1a99c0();
    func_0x00010c1ba8a0(puVar1);
    func_0x00010c1bcc80(puVar3);
    func_0x00010c196600(puVar2);
    func_0x00010c1b5d40(puVar16);
    puVar5 = PTR_PTR_1126b3848;
    _objc_opt_new(PTR_PTR_1126b3848);
    func_0x00010be465e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    _objc_release(param_5);
    puVar6 = puVar5;
    func_0x00010c065d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6960();
    _objc_release(puVar6);
    _objc_release(param_4);
    puVar6 = PTR_PTR_1126b37e0;
    _objc_opt_new(PTR_PTR_1126b37e0);
    func_0x00010c1bc1e0();
    func_0x00010c1c73c0(puVar16);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1058bb294; end: 1058bbc7f; -[SCMemoriesMashupSnapDocFactoryImpl _jsonLaunchParams:numberOfVideos:numberOfMedia:aiSnapsLensContext:] */

void FUN_1058bb294(float param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined **param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  double dVar19;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = param_4;
  func_0x00010c0905a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010bf1a980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar3;
  func_0x00010b6fb260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar17;
  func_0x00010c08fa60();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = puVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb260();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar17);
  puVar5 = puVar4;
  func_0x00010c08fa60();
  puVar17 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    param_5 = &PTR____CFConstantStringClassReference_110dad0b8;
    puVar17 = puVar3;
    func_0x00010c1d0640();
  }
  func_0x00010b6fb26c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar17;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb26c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar17);
  puVar6 = puVar5;
  func_0x00010c08fa60();
  puVar17 = (undefined *)0x0;
  if (puVar6 != (undefined *)0x0) {
    param_5 = &PTR____CFConstantStringClassReference_110dad858;
    puVar17 = puVar3;
    func_0x00010c1d0640();
  }
  func_0x00010b6fb284();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar7 = puVar17;
  _objc_opt_isKindOfClass(puVar17,puVar6);
  _objc_release();
  if (((ulong)puVar7 & 1) == 0) {
    puVar17 = (undefined *)0x0;
    goto LAB_1058bbc04;
  }
  func_0x00010b6fb284();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  func_0x00010c08fa60();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar2;
    func_0x00010c14fa80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb284();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar17);
  puVar7 = puVar6;
  func_0x00010c08fa60();
  puVar17 = (undefined *)0x0;
  if (puVar7 != (undefined *)0x0) {
    puVar17 = puVar3;
    func_0x00010c1d0640();
  }
  func_0x00010b6fb278();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar17;
  func_0x00010c08fa60();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = puVar2;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb278();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar17);
  puVar8 = puVar7;
  func_0x00010c08fa60();
  puVar17 = (undefined *)0x0;
  if (puVar8 != (undefined *)0x0) {
    puVar17 = puVar3;
    func_0x00010c1d0640();
  }
  func_0x00010b6fb290();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar17;
  func_0x00010c08fa60();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar2;
    func_0x00010bfb7be0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b6fb290();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar17);
  puVar17 = puVar8;
  func_0x00010c08fa60();
  if (puVar17 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar3);
  }
  if (param_7 != 0) {
    puVar17 = PTR_PTR_1126bfa80;
    func_0x00010c0e18c0(PTR_PTR_1126bfa80);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126bfa88;
    func_0x00010c095580(PTR_PTR_1126bfa88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar17);
    puVar17 = PTR_PTR_1126bfa88;
    func_0x00010bfa1de0(PTR_PTR_1126bfa88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar17);
    lVar10 = param_7;
    func_0x00010bfc0980(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126bfa88;
    func_0x00010bfc0980(PTR_PTR_1126bfa88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar17);
    _objc_release(lVar10);
    lVar10 = param_7;
    func_0x00010bfb81c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 != 0) {
      lVar10 = param_7;
      func_0x00010bfb81c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126bfa88;
      func_0x00010bfb81c0(PTR_PTR_1126bfa88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar17);
      _objc_release(lVar10);
    }
    lVar10 = param_7;
    func_0x00010c137980();
    if ((int)lVar10 != 0) {
      puVar17 = PTR_PTR_1126bfa90;
      func_0x00010bf926c0(PTR_PTR_1126bfa90);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bfa88;
      func_0x00010c290520(PTR_PTR_1126bfa88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar9);
      _objc_release(puVar17);
    }
    lVar10 = param_7;
    func_0x00010c265fc0();
    puVar17 = PTR_PTR_1126bfa98;
    if ((int)lVar10 == 0) {
      func_0x00010bf0bfc0(PTR_PTR_1126bfa98);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c265b40();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR_PTR_1126bfa88;
    func_0x00010c106760(PTR_PTR_1126bfa88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar17);
  }
  puVar17 = param_4;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar17;
  func_0x00010bfd9580();
  _objc_release(puVar17);
  if ((int)puVar9 != 0) {
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar17);
    func_0x00010bdcabe0(param_2);
    dVar19 = (double)(ulong)(uint)(param_1 * 1000.0);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(dVar19,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar17);
    puVar17 = param_4;
    func_0x00010c0d2940(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar17;
    func_0x00010c0d29c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fb80();
    _objc_release(puVar9);
    _objc_release(puVar17);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar19 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar17);
  }
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar17;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar17);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = param_4;
  func_0x00010c274600();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar17;
  func_0x00010c274620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  puVar17 = puVar12;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (puVar17 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(puVar12);
      }
      lVar18 = *(long *)((long)puVar16 * 8);
      lVar13 = lVar18;
      func_0x00010bfe5b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c08fa60();
      if ((lVar14 != 0) && (lVar14 = lVar18, func_0x00010c08fa60(), lVar14 != 0)) {
        func_0x00010befa120(puVar9);
        func_0x00010befa120(puVar11);
      }
      _objc_release(lVar18);
      _objc_release(lVar13);
      puVar16 = puVar16 + 1;
    } while (puVar17 != puVar16);
    puVar17 = puVar12;
    func_0x00010bf52a60();
  }
  _objc_release(puVar12);
  puVar12 = puVar9;
  func_0x00010bf529e0();
  puVar17 = (undefined *)0x0;
  if (puVar12 != (undefined *)0x0) {
    puVar17 = puVar9;
    func_0x00010bf51e00(puVar9);
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar17);
    puVar17 = puVar11;
    func_0x00010bf51e00();
    func_0x00010c1d0640(puVar3);
    _objc_release();
  }
  func_0x00010b6fb29c();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar17;
  func_0x00010c08fa60();
  if (puVar12 == (undefined *)0x0) {
LAB_1058bbb78:
    _objc_release(puVar17);
  }
  else {
    func_0x00010b6fb2a8();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar12;
    func_0x00010c08fa60();
    _objc_release(puVar12);
    _objc_release();
    if (puVar16 != (undefined *)0x0) {
      func_0x00010b6fb29c();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar12);
      _objc_release();
      func_0x00010b6fb2a8();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar12);
      goto LAB_1058bbb78;
    }
  }
  param_5 = (undefined **)0x0;
  puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)0x0;
  if (puVar12 != (undefined *)0x0) {
    _objc_retain(puVar12);
    puVar17 = puVar12;
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
LAB_1058bbc04:
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b37c8;
    _objc_retain(param_8);
    _objc_retain(param_5);
    func_0x00010c0cb140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar2 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar3 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar4 = PTR_PTR_1126b37d8;
    _objc_opt_new(PTR_PTR_1126b37d8);
    func_0x00010c1a99c0();
    func_0x00010c1ba8a0(puVar1);
    func_0x00010c1bcc80(puVar3);
    func_0x00010c196600(puVar2);
    func_0x00010c1b5d40(puVar17);
    puVar5 = PTR_PTR_1126b3848;
    _objc_opt_new(PTR_PTR_1126b3848);
    func_0x00010be465e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    _objc_release(param_5);
    puVar6 = puVar5;
    func_0x00010c065d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6960();
    _objc_release(puVar6);
    _objc_release(param_4);
    puVar6 = PTR_PTR_1126b37e0;
    _objc_opt_new(PTR_PTR_1126b37e0);
    func_0x00010c1bc1e0();
    func_0x00010c1c73c0(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 1058bbc80; end: 1058bbe43; -[SCMemoriesMashupSnapDocFactoryImpl _getCTItemInstanceWithLensID:collageCreativeTools:numberOfVideos:numberOfMedia:aiSnapsLensContext:] */

void FUN_1058bbc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b37c8;
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126b37d8;
  _objc_opt_new(PTR_PTR_1126b37d8);
  func_0x00010c1a99c0();
  func_0x00010c1ba8a0(puVar1,param_2,puVar5);
  func_0x00010c1bcc80(puVar4,param_2,puVar1);
  func_0x00010c196600(puVar3,param_2,puVar4);
  func_0x00010c1b5d40(puVar2,param_2,puVar3);
  puVar6 = PTR_PTR_1126b3848;
  _objc_opt_new(PTR_PTR_1126b3848);
  func_0x00010be465e0(param_1,param_2,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  puVar7 = puVar6;
  func_0x00010c065d40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6960();
  _objc_release(puVar7);
  _objc_release(param_1);
  puVar7 = PTR_PTR_1126b37e0;
  _objc_opt_new(PTR_PTR_1126b37e0);
  func_0x00010c1bc1e0();
  func_0x00010c1c73c0(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058bbe44; end: 1058bbf27; -[SCMemoriesMashupSnapDocFactoryImpl _getEffectIndexWithNumberOfSnapDoc:] */

void FUN_1058bbe44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (0 < param_3) {
    lVar5 = 0;
    do {
      puVar2 = PTR_PTR_1126bfaa0;
      _objc_opt_new(PTR_PTR_1126bfaa0);
      puVar3 = PTR_PTR_1126bfaa8;
      _objc_opt_new(PTR_PTR_1126bfaa8);
      puVar4 = PTR_PTR_1126bfab0;
      _objc_opt_new(PTR_PTR_1126bfab0);
      func_0x00010c220160();
      func_0x00010c17d440(puVar3,param_2,puVar4);
      func_0x00010c218fc0(puVar2,param_2,puVar3);
      func_0x00010befa120(puVar1,param_2,puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar5 = lVar5 + 1;
    } while (param_3 != lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058bbf28; end: 1058bc013; -[SCMemoriesMashupSnapDocFactoryImpl getSnapDocFromMediaSegment:] */

void FUN_1058bbf28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1058bc014;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = uVar2;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058bc014; end: 1058bc1cf;  */

void FUN_1058bc014(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_140,auStack_100,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_130;
    do {
      lVar6 = 0;
      do {
        if (*plStack_130 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        uVar3 = *(undefined8 *)(lStack_138 + lVar6 * 8);
        func_0x00010bfea600(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_168 = 0xc2000000;
        pcStack_160 = FUN_1058bc1d8;
        puStack_158 = &UNK_1108bc488;
        uStack_150 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(puVar1);
        puStack_148 = puVar1;
        func_0x00010c0be500(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1108bc408,
                            &PTR___NSConcreteGlobalBlock_1108bc448,&puStack_170);
        _objc_release(uVar3);
        _objc_release(puStack_148);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_140,auStack_100,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1058bc1d0; end: 1058bc1d7;  */

void FUN_1058bc1d0(void)

{
  return;
}



/* Entry: 1058bc1d8; end: 1058bc35b;  */

void FUN_1058bc1d8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ce40();
  _objc_release(uVar2);
  lVar3 = param_2;
  func_0x00010c0ff5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010bf6c5a0(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = param_2;
  func_0x00010c23fe00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c234cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bfab8,PTR_s_shouldStripUnsupportedCollageLay_11266ad50,lVar5);
  return;
}



/* Entry: 1058bc35c; end: 1058bc36b;  */

void FUN_1058bc35c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c234cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bfab8,PTR_s_shouldStripUnsupportedCollageLay_11266ad50,param_2);
  return;
}



/* Entry: 1058bc36c; end: 1058bc6ab; -[SCMemoriesMashupSnapDocFactoryImpl getSnapDocFromPhAssetMediaSegments:performer:completion:] */

void FUN_1058bc36c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf51e00();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _dispatch_group_create();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  puVar9 = auStack_100;
  lVar3 = param_3;
  func_0x00010bf52a60();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(undefined8 *)(lStack_138 + lVar11 * 8);
        _dispatch_group_enter(puVar2);
        uVar12 = uVar13;
        func_0x00010c0c5900(uVar13);
        _objc_retainAutoreleasedReturnValue();
        puStack_180 = puVar5;
        uStack_178 = 0xc2000000;
        pcStack_170 = FUN_1058bc6ac;
        puStack_168 = &UNK_1108bc4e8;
        uStack_160 = param_1;
        _objc_retain(puVar1);
        puStack_158 = puVar1;
        _objc_retain(puVar2);
        puStack_150 = puVar2;
        _objc_retain(param_4);
        uStack_148 = param_4;
        func_0x00010c0bcda0(uVar12);
        _objc_release(uVar12);
        func_0x00010bfea600(uVar13);
        _objc_retainAutoreleasedReturnValue();
        puStack_1c0 = puVar5;
        uStack_1b8 = 0xc2000000;
        pcStack_1b0 = FUN_1058bc8c0;
        puStack_1a8 = &UNK_1108bc598;
        uStack_1a0 = param_1;
        _objc_retain(puVar1);
        puStack_198 = puVar1;
        _objc_retain(puVar2);
        puStack_190 = puVar2;
        _objc_retain(param_4);
        uStack_188 = param_4;
        func_0x00010c0be500(uVar13);
        _objc_release(uVar13);
        _objc_release(uStack_188);
        _objc_release(puStack_190);
        _objc_release(puStack_198);
        _objc_release(uStack_148);
        _objc_release(puStack_150);
        _objc_release(puStack_158);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar9 = auStack_100;
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  uVar4 = param_4;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar5;
  dVar14 = 1.60807493534087e-314;
  uStack_1e8 = 0xc2000000;
  uStack_1e0 = 0x1058bcab4;
  puStack_1d8 = &UNK_11084aaa8;
  puStack_1d0 = puVar1;
  uStack_1c8 = param_5;
  _objc_retain(puVar1);
  _objc_retain(param_5);
  ppuVar8 = &puStack_1f0;
  uVar7 = uVar4;
  func_0x000100bc0718(puVar2,uVar4,ppuVar8);
  _objc_release(uVar4);
  _objc_release(puStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  _objc_retain(ppuVar8);
  uVar4 = uVar7;
  func_0x00010c0c6c20();
  if (uVar4 == 2) {
    puVar5 = PTR_PTR_1126b3080;
    func_0x00010bfad3e0(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x30);
    uVar4 = uVar7;
    func_0x00010c0fce40(uVar7);
    uVar6 = uVar7;
    func_0x00010c0fcaa0(uVar7);
    func_0x00010bf8b160(uVar7);
    puVar1 = puVar5;
    func_0x000107e6350c((double)uVar4,(double)uVar6,dVar14 * 1000.0,puVar5,uVar12,0,3,puVar9,3,
                        *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x50));
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_4 + 0x28);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_4 + 0x30);
    _objc_retain(uVar13);
    func_0x00010c297260(puVar1);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar1);
    _objc_release(puVar5);
  }
  _objc_release(ppuVar8);
  _objc_release(uVar7);
  return;
}



/* Entry: 1058bc6ac; end: 1058bc827;  */

void FUN_1058bc6ac(double param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0c6c20();
  if (uVar1 == 2) {
    puVar2 = PTR_PTR_1126b3080;
    func_0x00010bfad3e0(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30);
    uVar1 = param_3;
    func_0x00010c0fce40(param_3);
    uVar3 = param_3;
    func_0x00010c0fcaa0(param_3);
    func_0x00010bf8b160(param_3);
    puVar4 = puVar2;
    func_0x000107e6350c((double)uVar1,(double)uVar3,param_1 * 1000.0,puVar2,uVar5,0,3,param_5,3,
                        *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar6);
    func_0x00010c297260(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058bc828; end: 1058bc8b3;  */

void FUN_1058bc828(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(lVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058bc8b4; end: 1058bc8bf;  */

void FUN_1058bc8b4(void)

{
  return;
}



/* Entry: 1058bc8c0; end: 1058bca1f;  */

void FUN_1058bc8c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000108eb5cc8(param_4,0x5a);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3080;
  func_0x00010bf64b00(PTR_PTR_1126b3080);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x30);
  func_0x00010c23d0a0(param_4);
  _objc_release(param_4);
  puVar3 = puVar2;
  func_0x000107e6350c(param_1,param_2,0x40b3880000000000,puVar2,uVar4,0,2,0,3,
                      *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x50));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(uVar5);
  func_0x00010c297260(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1058bca20; end: 1058bcaab;  */

void FUN_1058bca20(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(lVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


