/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106956694; end: 10695684b;  */

void FUN_106956694(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long *unaff_x26;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10695684c;
  puStack_98 = &UNK_11094d3a0;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar2;
  _objc_retain(uVar3);
  lVar5 = *(long *)(param_1 + 0x48);
  uStack_78 = uVar3;
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 != 0) {
      unaff_x26 = &lStack_b8;
      _objc_retain(lVar4);
      bVar6 = false;
      lStack_b8 = lVar4;
      goto LAB_1069567b4;
    }
  }
  bVar6 = true;
LAB_1069567b4:
  func_0x00010c0f8500(uVar1);
  if (lVar5 != 0) {
    _objc_release(uVar2);
  }
  if (!bVar6) {
    _objc_release(*unaff_x26);
  }
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10695684c; end: 10695693b;  */

void FUN_10695684c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    func_0x00010bf97ce0(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10695693c; end: 106956bb7;  */

void FUN_10695693c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cf408;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) goto LAB_106956b88;
  puVar2 = puVar1;
  func_0x00010bf6ece0();
  if (1 < (int)puVar2 - 1U) {
    if ((int)puVar2 != 3) goto LAB_106956b88;
    puVar2 = puVar1;
    func_0x00010c0ee2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bfd4d80();
    _objc_release(puVar2);
    if (((ulong)puVar9 & 1) != 0) goto LAB_106956b88;
  }
  lVar3 = param_2;
  func_0x00010846a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3cf60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  FUN_106956bb8(lVar3,uVar4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar6 = lVar5;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c067fc0();
  FUN_106956c74(lVar7,lVar3,puVar1,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar8 = lVar3;
  func_0x00010c08fa60();
  if (((lVar8 != 0) && (lVar8 = lVar6, func_0x00010c08fa60(), lVar8 != 0)) && (lVar7 != 0)) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x78);
    _objc_retain(lVar7);
    _objc_retain(lVar5);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar11);
    _objc_retain(puVar1);
    func_0x00010be3c600(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar5);
    _objc_release(lVar7);
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
LAB_106956b88:
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106956bb8; end: 106956c73;  */

void FUN_106956bb8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010bf6ece0();
  if (param_3 != 3) {
    if (param_3 == 2) {
      uVar1 = param_2;
      func_0x000108ea5f00(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x000108ea5f8c(param_1,uVar1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      goto LAB_106956c50;
    }
    if (param_3 != 1) {
      uVar2 = 0;
      goto LAB_106956c50;
    }
  }
  _objc_retain(param_2);
  uVar2 = param_2;
LAB_106956c50:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106956c74; end: 106956eff;  */

void FUN_106956c74(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf6ece0();
  iVar1 = (int)uVar2;
  if (iVar1 == 3) {
    uVar2 = param_3;
    func_0x00010c0ee2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106956248();
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0ee2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106961e98();
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c3330;
    _objc_alloc(PTR_PTR_1126c3330);
    func_0x00010c04d900();
    puVar6 = PTR_PTR_1126c2fd0;
    func_0x00010c0ee380(PTR_PTR_1126c2fd0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar1 == 2) {
    puVar6 = param_1;
    func_0x0001084dc184(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar2 = param_3;
    func_0x00010bf62120(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf62e40();
    _objc_retainAutoreleasedReturnValue();
    FUN_106961e20();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (puVar5 != (undefined *)0x0) {
      func_0x00010c27dd80(puVar5);
    }
    puVar4 = PTR_PTR_1126c3328;
    _objc_alloc(PTR_PTR_1126c3328);
    func_0x00010c1143e0(puVar5);
    func_0x00010c04dca0(puVar4);
    puVar6 = PTR_PTR_1126c2fd0;
    func_0x00010bf62300(PTR_PTR_1126c2fd0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    if (iVar1 != 1) {
      puVar6 = (undefined *)0x0;
      goto LAB_106956ec8;
    }
    uVar2 = param_3;
    func_0x00010c0d4ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf62e40();
    _objc_retainAutoreleasedReturnValue();
    FUN_106961e20();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c2fc8;
    _objc_alloc(PTR_PTR_1126c2fc8);
    func_0x00010c0559e0();
    puVar6 = PTR_PTR_1126c2fd0;
    func_0x00010c293b20(PTR_PTR_1126c2fd0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
LAB_106956ec8:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106956f00; end: 106956f2b;  */

void FUN_106956f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined *puVar31;
  ulong uVar32;
  ulong uVar33;
  undefined *puVar34;
  ulong uVar35;
  ulong uVar36;
  undefined *puVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined *puStack_200;
  undefined *puStack_1f0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a0;
  ulong uStack_180;
  ulong uStack_160;
  
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  uVar19 = *(ulong *)(param_1 + 0x28);
  uVar20 = *(ulong *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0xb8);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0xc0);
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = uVar19;
  _objc_retain();
  _objc_retain(uVar19);
  _objc_retain(uVar20);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  uVar35 = uVar20;
  func_0x00010bfd4460();
  if ((int)uVar35 == 0) {
    uStack_180 = 0;
  }
  else {
    uStack_180 = uVar20;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uStack_180);
  }
  _objc_retain(uVar20);
  uVar35 = uVar20;
  func_0x00010bfd4420();
  if ((int)uVar35 == 0) {
    uVar35 = 0;
  }
  else {
    uVar35 = uVar20;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
  }
  dVar42 = 0.0;
  uVar36 = uVar35;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar36;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (uVar23 == 0) {
    uVar26 = 0;
  }
  else {
    do {
      uVar32 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(uVar36);
        }
        uVar26 = *(undefined8 *)(uVar32 * 8);
        uVar7 = uVar26;
        func_0x00010bf0d0a0();
        if ((int)uVar7 == 1) {
          func_0x00010bf4e080();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106954ad0;
        }
        uVar32 = uVar32 + 1;
      } while (uVar23 != uVar32);
      uVar23 = uVar36;
      func_0x00010bf52a60();
    } while (uVar23 != 0);
    uVar26 = 0;
  }
LAB_106954ad0:
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar20);
  uVar35 = uVar20;
  func_0x00010bfdc7e0();
  if ((int)uVar35 == 0) {
    uVar35 = 0;
  }
  else {
    uVar35 = uVar20;
    func_0x00010c248460();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uVar35);
  }
  uVar36 = uVar20;
  func_0x00010bfddcc0();
  if ((int)uVar36 == 0) {
    uVar36 = 0;
  }
  else {
    uVar36 = uVar20;
    func_0x00010c2814e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uVar36);
  }
  uVar23 = uVar20;
  func_0x00010bfdabc0();
  if ((int)uVar23 == 0) {
    uStack_1a0 = 0;
  }
  else {
    uStack_1a0 = uVar20;
    func_0x00010c1197a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uStack_1a0);
  }
  uVar23 = uVar20;
  func_0x00010bfd84a0();
  if ((int)uVar23 == 0) {
    uStack_160 = 0;
  }
  else {
    uStack_160 = uVar20;
    func_0x00010c08f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uStack_160);
  }
  puVar29 = PTR_PTR_1126cf3a0;
  func_0x00010c0c5ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0ee2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar7;
  func_0x00010bfd9d20();
  if ((int)uVar27 == 0) {
    puStack_1b0 = (undefined *)0x0;
  }
  else {
    puStack_1b0 = PTR_PTR_1126cf3a8;
    _objc_alloc();
    uVar27 = uVar3;
    func_0x00010c0ee2a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar27;
    func_0x00010c0ed760();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x000108f52130();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032520();
    _objc_retain();
    _objc_release(puStack_1b0);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar27);
  }
  _objc_release(uVar7);
  puVar10 = PTR_PTR_1126cc4e0;
  _objc_alloc();
  puVar11 = PTR_PTR_1126cf3b0;
  _objc_retain(uVar26);
  _objc_alloc();
  uVar7 = uVar26;
  func_0x00010c297e20(uVar26);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar26);
  uVar27 = uVar7;
  func_0x000108f0e94c(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0607c0();
  _objc_release(uVar27);
  _objc_release(uVar7);
  _objc_retain(uVar20);
  uVar23 = uVar20;
  func_0x00010bfda540();
  uVar32 = 0;
  if ((int)uVar23 != 0) {
    uVar32 = uVar20;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar23 = uVar32;
  func_0x00010bfda560();
  if ((int)uVar23 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = uVar32;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar30 = uVar20;
  func_0x00010bfdd660();
  if ((int)uVar30 == 0) {
    uVar30 = 0;
    puStack_1b8 = (undefined *)0x0;
  }
  else {
    uVar30 = uVar20;
    func_0x00010c270d80();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar23 == 0) || (uVar30 == 0)) {
      puStack_1b8 = (undefined *)0x0;
    }
    else {
      func_0x00010bf85640(uVar23);
      uVar33 = uVar32;
      FUN_106955fbc();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar33;
      func_0x00010c0c4bc0();
      if ((int)uVar22 == 0) {
        uVar22 = uVar23;
        func_0x00010bf8b420(uVar23);
        dVar42 = (double)(uVar22 & 0xffffffff);
      }
      else {
        uVar22 = uVar33;
        func_0x00010c0c4bc0(uVar33);
        dVar42 = (double)(uVar22 & 0xffffffff) / 1000.0;
      }
      uVar22 = uVar30;
      func_0x00010c23fb40(uVar30);
      puStack_1b8 = PTR_PTR_1126cf3b8;
      _objc_alloc();
      func_0x00010c00eac0(dVar42,(double)uVar22 / 1000.0 + 86400.0,(double)uVar22 / 1000.0);
      _objc_release(uVar33);
    }
  }
  _objc_release(uVar30);
  _objc_release(uVar23);
  _objc_release(uVar32);
  _objc_release(uVar20);
  _objc_retain(uVar20);
  _objc_retain(uVar35);
  uVar23 = uVar20;
  func_0x00010bfda540();
  if ((int)uVar23 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = uVar20;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar32 = uVar23;
  FUN_106955fbc();
  _objc_retainAutoreleasedReturnValue();
  if (uVar32 == 0) {
    puStack_1f0 = (undefined *)0x0;
  }
  else {
    uVar30 = uVar23;
    func_0x00010bfda560();
    if ((int)uVar30 == 0) {
      uVar30 = 0;
    }
    else {
      uVar30 = uVar23;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar33 = uVar32;
    func_0x00010c27dd80();
    func_0x00010bfdc680();
    _objc_retain(uVar35);
    iVar6 = (int)uVar33;
    if ((iVar6 < 3) && (iVar6 != -0x4524111)) {
      if (iVar6 == 0) {
        if (uVar35 != 0) {
          uVar33 = uVar35;
          func_0x00010c298be0();
          iVar6 = (int)uVar33;
          if (iVar6 < 2) {
            if (((iVar6 != -0x4524111) && (iVar6 != 0)) && (iVar6 != 1)) goto LAB_106954f44;
          }
          else if (iVar6 < 4) {
            if ((iVar6 != 2) && (iVar6 != 3)) {
LAB_106954f44:
              func_0x00010c298be0();
            }
          }
          else if ((iVar6 != 4) && (iVar6 != 5)) goto LAB_106954f44;
        }
      }
      else if ((iVar6 == 1) && (uVar35 != 0)) goto LAB_106954f44;
    }
    _objc_release(uVar35);
    uVar33 = uVar32;
    func_0x00010bfd6a20();
    if ((int)uVar33 == 0) {
      uVar33 = 0;
    }
    else {
      uVar33 = uVar32;
      func_0x00010bf93e60(uVar32);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(uVar20);
    uVar22 = uVar20;
    func_0x00010bfd5ee0();
    if ((int)uVar22 == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = uVar20;
      func_0x00010bf5aee0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar12 = uVar22;
    func_0x00010bf4b5a0();
    if ((int)uVar12 != 0) {
      func_0x00010c0750a0();
    }
    _objc_release(uVar22);
    _objc_release(uVar20);
    puStack_1f0 = PTR_PTR_1126cf3c0;
    _objc_alloc();
    uVar22 = uVar33;
    func_0x00010c086560(uVar33);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar22;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar33;
    func_0x00010c085300(uVar33);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf020();
    func_0x00010c01b280();
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar22);
    _objc_release(uVar33);
    _objc_release(uVar30);
  }
  _objc_release(uVar32);
  _objc_release(uVar23);
  _objc_release(uVar35);
  _objc_release(uVar20);
  _objc_retain(uVar2);
  puVar31 = PTR_PTR_1126cf3c8;
  _objc_retain(uVar36);
  _objc_alloc();
  func_0x00010c0ed100();
  uVar23 = uVar36;
  func_0x00010bf93ae0(uVar36);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar36);
  uVar32 = uVar23;
  func_0x000108f0e990(uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar32;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c09ea00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126cf3d0;
  _objc_alloc(PTR_PTR_1126cf3d0);
  func_0x00010c0b55a0(uVar7);
  dVar38 = dVar42;
  func_0x00010c08b3c0(uVar7);
  dVar39 = dVar38;
  func_0x00010bf01f00(uVar7);
  dVar40 = dVar39;
  func_0x00010bfe4080(uVar7);
  dVar41 = dVar40;
  func_0x00010c249ca0(uVar7);
  func_0x00010c027c60(dVar42,dVar38,dVar39,dVar40,0,0,dVar41,0,puVar15);
  func_0x00010bffafc0();
  _objc_release(puVar15);
  _objc_release(uVar7);
  _objc_release(uVar30);
  _objc_release(uVar32);
  _objc_release(uVar23);
  _objc_release(uVar2);
  _objc_retain(uVar20);
  _objc_retain(uVar2);
  _objc_retain(uVar20);
  uVar23 = uVar20;
  func_0x00010bfd4420();
  if ((int)uVar23 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = uVar20;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar30 = uVar23;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (uVar32 != 0) {
    uVar33 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(uVar30);
      }
      uVar27 = *(undefined8 *)(uVar33 * 8);
      uVar7 = uVar27;
      func_0x00010bf0d0a0();
      if ((int)uVar7 == 3) {
        func_0x00010c2a3a80(uVar27);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1069553b0;
      }
      uVar33 = uVar33 + 1;
    } while (uVar32 != uVar33);
    uVar32 = uVar30;
    func_0x00010bf52a60();
  }
  uVar27 = 0;
LAB_1069553b0:
  _objc_release(uVar30);
  _objc_release(uVar23);
  _objc_release(uVar20);
  puVar15 = PTR_PTR_1126cf3d8;
  _objc_alloc();
  uVar7 = uVar27;
  func_0x00010bdc2b80(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar20);
  uVar23 = uVar20;
  func_0x00010bfdabc0();
  if ((int)uVar23 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = uVar20;
    func_0x00010c1197a0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar32 = uVar20;
  func_0x00010bfdd660();
  if ((int)uVar32 == 0) {
    uVar32 = 0;
    puVar25 = (undefined *)0x0;
  }
  else {
    uVar32 = uVar20;
    func_0x00010c270d80();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = (undefined *)0x0;
    if ((uVar23 != 0) && (uVar32 != 0)) {
      uVar30 = uVar23;
      func_0x00010bf05f80();
      puVar25 = (undefined *)0x0;
      iVar6 = (int)uVar30;
      if (iVar6 < 3) {
        if ((iVar6 != -0x4524111) && (iVar6 != 0)) goto LAB_106955548;
      }
      else if ((iVar6 < 5) || ((iVar6 == 5 || (iVar6 != 6)))) {
LAB_106955548:
        puVar25 = PTR_PTR_1126c3340;
        _objc_alloc(PTR_PTR_1126c3340);
        func_0x00010c0c4300(uVar32);
        func_0x00010c0066c0(puVar25);
      }
    }
  }
  _objc_release(uVar32);
  _objc_release(uVar23);
  _objc_release(uVar20);
  uVar9 = uVar2;
  func_0x00010bf30620(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar16 = uVar9;
  func_0x000108f0e94c(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4d60();
  _objc_release(uVar16);
  _objc_release(uVar9);
  _objc_release(puVar25);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar27);
  _objc_release(uVar20);
  _objc_retain(uStack_180);
  uVar23 = uStack_180;
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar23 == 0) {
    puStack_200 = (undefined *)0x0;
  }
  else {
    uVar23 = uStack_180;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar23;
    func_0x00010bfdaa60();
    if ((int)uVar32 == 0) {
      uVar32 = 0;
    }
    else {
      uVar30 = uStack_180;
      func_0x00010c24a0a0(uStack_180);
      _objc_retainAutoreleasedReturnValue();
      uVar33 = uVar30;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = uVar33;
      func_0x00010bfe2ee0();
      uVar22 = uStack_180;
      func_0x00010c24a0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar22;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar12;
      func_0x00010c0b5940();
      func_0x000100c4a928(uVar32);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar22);
      _objc_release(uVar33);
      _objc_release(uVar30);
    }
    _objc_release(uVar23);
    puStack_200 = PTR_PTR_1126cf3e0;
    _objc_alloc();
    uVar23 = uVar32;
    func_0x00010c0b5ac0(uVar32);
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uStack_180;
    func_0x00010c24a0a0(uStack_180);
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar30;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uStack_180;
    func_0x00010c24a0a0(uStack_180);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0();
    func_0x00010c03ae60();
    _objc_release(uVar22);
    _objc_release(uVar33);
    _objc_release(uVar30);
    _objc_release(uVar23);
    _objc_release(uVar32);
  }
  _objc_release(uStack_180);
  _objc_retain(uVar26);
  uVar7 = uVar26;
  func_0x00010bfd5c60();
  if ((int)uVar7 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar25 = PTR_PTR_1126cf3e8;
    _objc_alloc();
    uVar7 = uVar26;
    func_0x00010bf4e840(uVar26);
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar7;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cda0();
    _objc_release(uVar27);
    _objc_release(uVar7);
  }
  _objc_release(uVar26);
  _objc_retain(uVar36);
  uVar23 = uVar36;
  func_0x00010bfddce0();
  if ((int)uVar23 == 0) {
    puVar28 = (undefined *)0x0;
  }
  else {
    puVar28 = PTR_PTR_1126cf3f0;
    _objc_alloc();
    uVar23 = uVar36;
    func_0x00010c281680(uVar36);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar23;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cda0();
    _objc_release(uVar32);
    _objc_release(uVar23);
  }
  _objc_release(uVar36);
  _objc_retain(uStack_1a0);
  uVar23 = uStack_1a0;
  func_0x00010bfdc3a0();
  if ((int)uVar23 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = uStack_1a0;
    func_0x00010c241c00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar32 = uVar23;
  func_0x00010bfdc760();
  if ((int)uVar32 == 0) {
LAB_106955948:
    puVar37 = (undefined *)0x0;
  }
  else {
    uVar32 = uVar23;
    func_0x00010c2475a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar32 == 0) goto LAB_106955948;
    uVar30 = uVar32;
    func_0x00010bfe2ee0();
    uVar17 = uVar32;
    func_0x00010c0b5940();
    func_0x000100c4a928();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar30;
    func_0x00010c08fa60();
    if (uVar33 == 0) {
      puVar37 = (undefined *)0x0;
    }
    else {
      puVar37 = PTR_PTR_1126cf3f8;
      _objc_alloc();
      func_0x00010c04a9a0();
    }
    _objc_release(uVar30);
    _objc_release(uVar32);
  }
  _objc_release(uVar23);
  _objc_release(uStack_1a0);
  _objc_retain(uStack_1a0);
  uVar23 = uStack_1a0;
  func_0x00010bf05f80();
  if ((int)uVar23 == 6) {
    uVar23 = uStack_1a0;
    func_0x00010bfdc3a0();
    if ((int)uVar23 == 0) {
      uVar23 = 0;
    }
    else {
      uVar23 = uStack_1a0;
      func_0x00010c241c00();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar32 = uVar23;
    func_0x00010c247580();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar32;
    func_0x000108f0e94c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar32);
    uVar32 = uVar30;
    func_0x00010c08fa60();
    if (uVar32 == 0) {
      puVar34 = (undefined *)0x0;
    }
    else {
      puVar34 = PTR_PTR_1126cf400;
      _objc_alloc();
      func_0x00010c00d4e0();
    }
    _objc_release(uVar30);
    _objc_release(uVar23);
  }
  else {
    puVar34 = (undefined *)0x0;
  }
  _objc_release(uStack_1a0);
  func_0x00010c141c40();
  _objc_retain(uStack_160);
  uVar23 = uStack_160;
  func_0x00010bfd4d40();
  if ((int)uVar23 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    uVar23 = uStack_160;
    func_0x00010bf24a40(uStack_160);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar23;
    func_0x00010bfe2ee0();
    uVar30 = uStack_160;
    func_0x00010bf24a40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar30;
    func_0x00010c0b5940();
    func_0x000100c4a928(uVar32);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar30);
    _objc_release(uVar23);
    puVar24 = PTR_PTR_1126c32f8;
    _objc_alloc();
    func_0x00010c0eede0(uStack_160);
    func_0x00010c0eebe0(uStack_160);
    func_0x00010bff9aa0();
    _objc_release(uVar32);
  }
  _objc_release(uStack_160);
  func_0x00010c044c20();
  _objc_release(puVar24);
  _objc_release(puVar34);
  _objc_release(puVar37);
  _objc_release(puVar28);
  _objc_release(puVar25);
  _objc_release(puStack_200);
  _objc_release(puVar15);
  _objc_release(puVar31);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1b8);
  _objc_release(puVar11);
  _objc_release(puStack_1b0);
  _objc_release(puVar29);
  _objc_release(uStack_160);
  _objc_release(uStack_1a0);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar26);
  _objc_release(uStack_180);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(uVar17);
  func_0x000108ea5f00(uVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar17);
  _objc_retain(uVar18);
  uVar20 = uVar17;
  func_0x00010bfda540();
  if ((uVar20 & 1) == 0) {
    uVar20 = 0;
    FUN_106955fbc();
    _objc_retainAutoreleasedReturnValue();
    if (uVar20 != 0) goto LAB_106955d9c;
LAB_106955e6c:
    puVar31 = (undefined *)0x0;
  }
  else {
    uVar19 = uVar17;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    FUN_106955fbc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
    if (uVar20 == 0) goto LAB_106955e6c;
LAB_106955d9c:
    uVar19 = uVar20;
    func_0x00010bfd6a20();
    if ((int)uVar19 == 0) {
      puVar29 = (undefined *)0x0;
    }
    else {
      uVar19 = uVar20;
      func_0x00010bf93e60(uVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = PTR_PTR_1126bfca8;
      _objc_alloc(PTR_PTR_1126bfca8);
      uVar35 = uVar19;
      func_0x00010c086560(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar36 = uVar35;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar19;
      func_0x00010c085300(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar32 = uVar23;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020b60(puVar29);
      _objc_release(uVar32);
      _objc_release(uVar23);
      _objc_release(uVar36);
      _objc_release(uVar35);
      _objc_release(uVar19);
    }
    func_0x00010c27dd80();
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR_PTR_1126c3390;
    _objc_alloc(PTR_PTR_1126c3390);
    func_0x00010bffa840();
    _objc_release(puVar11);
    _objc_release(puVar29);
  }
  _objc_release(uVar20);
  _objc_release(uVar18);
  _objc_release(uVar17);
  puVar10 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(puVar31);
  _objc_release(uVar18);
  _objc_release(uVar17);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106956f2c; end: 10695706b; -[SCStoriesSnapPostCoordinator updatePostingState:forStory:] */

void FUN_106956f2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x106956fd4;
    puStack_50 = &UNK_110844b80;
    lStack_48 = param_1;
    uStack_38 = param_3;
    _objc_retain(param_4);
    lStack_40 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10695706c; end: 106957113; -[SCStoriesSnapPostCoordinator updatePostingState:clientIds:] */

void FUN_10695706c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106957114;
    puStack_50 = &UNK_110844b80;
    lStack_48 = param_1;
    uStack_38 = param_3;
    _objc_retain(param_4);
    lStack_40 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106957114; end: 106957123;  */

void FUN_106957114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedd9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePostingState_clientIds__112595010,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106957124; end: 1069573ef; -[SCStoriesSnapPostCoordinator _updatePostingState:clientIds:] */

void FUN_106957124(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar14 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  puVar9 = &uStack_130;
  lVar8 = param_4;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_4);
        }
        lVar12 = *(long *)(lStack_128 + lVar10 * 8);
        lVar2 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0(lVar2,param_2,lVar12);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
LAB_106957228:
          lVar4 = *(long *)(param_1 + 8);
          func_0x00010c0e00e0(lVar4,param_2,lVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar4;
          func_0x00010c067fc0();
          _objc_release(lVar4);
          if (lVar2 != 2) {
            lVar2 = *(long *)(param_1 + 8);
            func_0x00010c0e00e0(lVar2,param_2,lVar12);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if ((param_3 != 2) || (lVar2 != 0)) {
              func_0x00010befa120(puVar1,param_2,lVar12);
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar5,lVar12);
              _objc_release(puVar5);
              if (-1 < param_3) {
                func_0x000108ea5f00();
                _objc_retainAutoreleasedReturnValue();
                lVar2 = lVar12;
                func_0x00010c08fa60();
                if (lVar2 != 0) {
                  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,0,lVar12);
                  func_0x00010bed7c80(param_1);
                }
                _objc_release(lVar12);
              }
            }
          }
        }
        else {
          lVar3 = *(long *)(param_1 + 8);
          func_0x00010c0e00e0(lVar3,param_2,lVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c067fc0();
          _objc_release(lVar3);
          _objc_release(lVar2);
          if (lVar4 != param_3) goto LAB_106957228;
        }
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      puVar9 = &uStack_130;
      lVar8 = param_4;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(param_4);
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar6 != (undefined8 *)0x0) {
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf51e00(uVar7);
    func_0x00010c0d9840(uVar11,param_2,uVar7);
    _objc_release(uVar7);
    func_0x00010bed7c80(param_1);
    param_1 = param_1 + 0x130;
    _objc_loadWeakRetained();
    puVar6 = puVar1;
    func_0x00010bf51e00();
    puVar9 = puVar6;
    func_0x00010c1059c0(param_1,param_2,puVar6,param_3);
    _objc_release(puVar6);
    _objc_release(param_1);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  dVar15 = dVar14;
  _objc_retain(puVar9);
  puVar1 = puVar9;
  func_0x00010c08fa60();
  if (puVar1 == (undefined8 *)0x0) goto LAB_1069574f0;
  lVar8 = *(long *)(param_4 + 0x18);
  func_0x00010c0e00e0(lVar8,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
LAB_106957478:
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar14,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_4 + 0x18),param_2,puVar5,puVar9);
    _objc_release(puVar5);
  }
  else {
    uVar7 = *(undefined8 *)(param_4 + 0x18);
    func_0x00010c0e00e0(uVar7,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar7);
    _objc_release(lVar8);
    if (dVar15 < dVar14) goto LAB_106957478;
  }
  uVar11 = *(undefined8 *)(param_4 + 0x38);
  uVar7 = *(undefined8 *)(param_4 + 0x18);
  func_0x00010bf51e00(uVar7);
  func_0x00010c0d9840(uVar11,param_2,uVar7);
  _objc_release(uVar7);
  param_4 = param_4 + 0x130;
  _objc_loadWeakRetained(param_4);
  func_0x00010c105940(dVar14);
  _objc_release(param_4);
LAB_1069574f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1069573f0; end: 106957507; -[SCStoriesSnapPostCoordinator updatePostingProgress:forStory:] */

void FUN_1069573f0(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  dVar5 = param_1;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_1069574f0;
  lVar1 = *(long *)(param_2 + 0x18);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_106957478:
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,puVar3,param_4);
    _objc_release(puVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c0e00e0(uVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if (dVar5 < param_1) goto LAB_106957478;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar4,param_3,uVar2);
  _objc_release(uVar2);
  param_2 = param_2 + 0x130;
  _objc_loadWeakRetained(param_2);
  func_0x00010c105940(param_1);
  _objc_release(param_2);
LAB_1069574f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106957508; end: 106957603; -[SCStoriesSnapPostCoordinator postingStateWithClientId:] */

undefined8 FUN_106957508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 2;
  func_0x00010bf3d040(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c25ff60(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar1 = puStack_48[3];
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106957604; end: 10695768f;  */

void FUN_106957604(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x000108ea5f00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c067fc0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106957690; end: 106957707; -[SCStoriesSnapPostCoordinator clientIdToPostingStateObservable] */

void FUN_106957690(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2519e0(uVar1,param_2,PTR____NSDictionary0__struct_11034ab58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106957708; end: 1069577af;  */

void FUN_106957708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_2);
  _objc_opt_new();
  _objc_retain();
  func_0x00010bf97ce0(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069577b0; end: 106957813;  */

void FUN_1069577b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x000108ea5f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106957814; end: 10695788b; -[SCStoriesSnapPostCoordinator clientIdToPostingProgressObservable] */

void FUN_106957814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2519e0(uVar1,param_2,PTR____NSDictionary0__struct_11034ab58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10695788c; end: 106957933;  */

void FUN_10695788c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_2);
  _objc_opt_new();
  _objc_retain();
  func_0x00010bf97ce0(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106957934; end: 106957997;  */

void FUN_106957934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x000108ea5f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106957998; end: 106957a7b; -[SCStoriesSnapPostCoordinator currentClientIdToPostingState] */

void FUN_106957998(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106957a7c;
  uStack_30 = 0x106957a8c;
  uStack_28 = 0;
  func_0x00010bf3d040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ff60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106957a7c; end: 106957a93;  */

void FUN_106957a7c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106957a94; end: 106957acb;  */

void FUN_106957a94(long param_1,undefined8 param_2)

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



/* Entry: 106957acc; end: 106957baf; -[SCStoriesSnapPostCoordinator currentClientIdToPostingProgress] */

void FUN_106957acc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106957a7c;
  uStack_30 = 0x106957a8c;
  uStack_28 = 0;
  func_0x00010bf3d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ff60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106957bb0; end: 106957be7;  */

void FUN_106957bb0(long param_1,undefined8 param_2)

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



/* Entry: 106957be8; end: 106957d2b; -[SCStoriesSnapPostCoordinator _updateFailedSnapCount] */

void FUN_106957be8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_2b0 [8];
  undefined8 uStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar1);
      }
      func_0x00010bf529e0();
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar8 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lVar9 = *(long *)(puVar3 + 8);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar1 = *plStack_240;
    do {
      lVar7 = 0;
      do {
        if (*plStack_240 != lVar1) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(undefined8 *)(lStack_248 + lVar7 * 8);
        lVar5 = *(long *)(puVar3 + 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar5;
        func_0x00010c067fc0();
        _objc_release(lVar5);
        if (lVar11 < 1) {
          func_0x000108ea5f00(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar10);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar9;
      puVar6 = &uStack_250;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  puVar3 = puVar4;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_298,puVar4);
  uVar10 = *(undefined8 *)(puVar4 + 0x68);
  _objc_copyWeak(auStack_2b0,auStack_298);
  uStack_2a8 = uVar8;
  puStack_2a0 = (undefined1 *)puVar6;
  func_0x00010c0f7fc0(uVar10);
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(auStack_298);
  return;
}



/* Entry: 106957d2c; end: 106957eab; -[SCStoriesSnapPostCoordinator pendingSnapComponentIds] */

void FUN_106957d2c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined1 *puStack_180;
  undefined1 auStack_178 [8];
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar11 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        lVar3 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c067fc0();
        _objc_release(lVar3);
        if (lVar4 < 1) {
          func_0x000108ea5f00(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar7;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_178,puVar1);
  uVar8 = *(undefined8 *)(puVar1 + 0x68);
  _objc_copyWeak(auStack_190,auStack_178);
  uStack_188 = uVar11;
  puStack_180 = (undefined1 *)puVar6;
  func_0x00010c0f7fc0(uVar8);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_178);
  return;
}



/* Entry: 106957eac; end: 106957f73; -[SCStoriesSnapPostCoordinator updateStoryLatestPostTimestamp:forStoryType:] */

void FUN_106957eac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106957f74; end: 106957fab;  */

void FUN_106957f74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee0fa0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106957fac; end: 106957ff7; -[SCStoriesSnapPostCoordinator getStoryLastestPostTimestampForStoryType:] */

double FUN_106957fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x70);
  func_0x0001084e7a98(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2709c0();
  _objc_release(uVar1);
  return (double)uVar2;
}



/* Entry: 106957ff8; end: 1069580b7; -[SCStoriesSnapPostCoordinator _updateStoryLatestTimestamp:forStoryType:] */

void FUN_106957ff8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc0000000;
  pcStack_60 = FUN_1069580b8;
  puStack_58 = &UNK_11094d410;
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uStack_50 = param_4;
  uStack_48 = param_1;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar2;
  uStack_98 = 0xc0000000;
  uStack_90 = 0x1069580cc;
  puStack_88 = &UNK_11094d430;
  uStack_80 = param_1;
  uStack_78 = param_4;
  func_0x00010c0f8500(uVar1,param_3,&puStack_70,uVar3,&puStack_a0);
  _objc_release(uVar3);
  return;
}



/* Entry: 1069580b8; end: 1069580cf;  */

void FUN_1069580b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9e68;
  _objc_alloc(PTR_PTR_1126d9e68);
  func_0x00010c04e380();
  puVar2 = puVar1;
  func_0x000108521314();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069580d0; end: 106958187; -[SCStoriesSnapPostCoordinator insertPostingSnapProSnap:businessIds:] */

void FUN_1069580d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106958188;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106958188; end: 1069581c7;  */

void FUN_106958188(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069581c8; end: 106958257; -[SCStoriesSnapPostCoordinator insertPostingSnapProSnapWithBusinessIdsToSnap:] */

void FUN_1069581c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106958258;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106958258; end: 106958297;  */

void FUN_106958258(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106958298; end: 106958337;  */

void FUN_106958298(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cc248;
  _objc_alloc(PTR_PTR_1126cc248);
  func_0x00010c047040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106958338; end: 1069583ef; -[SCStoriesSnapPostCoordinator removePendingSnapProSnapWithClientId:businessId:] */

void FUN_106958338(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069583f0;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069583f0; end: 10695842f;  */

void FUN_1069583f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106958430; end: 1069584bf; -[SCStoriesSnapPostCoordinator querySnapProPendingSnapsExistWithCompletion:] */

void FUN_106958430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1069584c0;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069584c0; end: 106958507;  */

void FUN_1069584c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdc5c0();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106958508; end: 10695857f; -[SCStoriesSnapPostCoordinator _recordPostAttemptType:forSnapComponentId:] */

void FUN_106958508(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,puVar2,param_4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106958580; end: 1069586df; -[SCStoriesSnapPostCoordinator _postAttemptTypeForClientIds:] */

undefined1 * FUN_106958580(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long unaff_x21;
  undefined8 uVar3;
  undefined1 *unaff_x22;
  long lVar4;
  long lVar5;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar4 = *plStack_110;
    unaff_x21 = lVar5;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        puVar1 = *(undefined1 **)(lStack_118 + lVar5 * 8);
        unaff_x22 = *(undefined1 **)(param_1 + 0x60);
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = (undefined8 *)puVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        if (unaff_x22 != (undefined1 *)0x0) {
          puVar1 = unaff_x22;
          func_0x00010c067fc0();
          _objc_release(unaff_x22);
          goto LAB_106958694;
        }
        lVar5 = lVar5 + 1;
      } while (unaff_x21 != lVar5);
      unaff_x21 = param_3;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  puVar1 = (undefined1 *)0x0;
LAB_106958694:
  _objc_release(param_3);
  lVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1069586e0;
  puStack_150 = unaff_x22;
  lStack_148 = unaff_x21;
  puStack_140 = puVar1;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  uVar3 = *(undefined8 *)(lVar5 + 0x68);
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_106958770;
  puStack_168 = &UNK_110841f80;
  puStack_160 = (undefined1 *)puVar2;
  lStack_158 = lVar5;
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_180);
  _objc_release(puStack_160);
  _objc_release(puVar2);
  return (undefined1 *)puVar2;
}



/* Entry: 1069586e0; end: 10695876f; -[SCStoriesSnapPostCoordinator retryStoryPostWithClientId:] */

void FUN_1069586e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106958770;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106958770; end: 106958a7f;  */

void FUN_106958770(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be87940(*(undefined8 *)(param_1 + 0x28));
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0);
  func_0x00010bf1f440();
  if (iVar1 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = uVar7;
    func_0x00010bdc9f60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcd460(uVar7);
    _objc_release(uVar8);
    func_0x00010be03fa0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  if (lVar3 == 0) {
    func_0x00010c0ac960(*(undefined8 *)(uVar6 + 0xb0));
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bdc9f60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2bda0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar7);
  }
  else {
    func_0x00010be96e40();
    if ((uVar6 & 1) == 0) {
      _objc_initWeak(auStack_78,*(undefined8 *)(param_1 + 0x28));
      puVar4 = PTR_PTR_1126b2730;
      _objc_alloc(PTR_PTR_1126b2730);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106958a80;
      puStack_90 = &UNK_110841fb0;
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      uStack_88 = uVar7;
      _objc_copyWeak(auStack_80,auStack_78);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar8);
      _objc_retain(uVar2);
      _objc_copyWeak(auStack_b0,auStack_78);
      func_0x00010c04f4c0(puVar4);
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13f9e0();
      _objc_release(uVar7);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_b0);
      _objc_release(uVar2);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_80);
      _objc_release(uStack_88);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106958a80; end: 106958b03;  */

void FUN_106958a80(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106958b04; end: 106958cff; -[SCStoriesSnapPostCoordinator _retryCrossPostLegIfApplicableWithSnapComponentId:clientId:] */

undefined8 FUN_106958b04(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar6 = 0;
    goto LAB_106958cb8;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_106958c30:
    uVar6 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xd0);
    func_0x00010bf1f440();
    if (iVar1 == 0) goto LAB_106958c30;
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    lVar4 = param_1;
    func_0x00010bdc9f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar3 == 0) {
      func_0x00010bdfa9e0(param_1);
      lVar3 = param_4;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar5 = uVar6;
      func_0x00010c23a7e0();
      if ((int)uVar5 != 0) {
        func_0x000100162d98("APPSTORE",&PTR___NSConcreteGlobalBlock_11094d480);
      }
      _objc_release(uVar6);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0xa0);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010c13f900(uVar6);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar4);
    uVar6 = 1;
  }
  _objc_release(lVar2);
LAB_106958cb8:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 106958d00; end: 106958d53;  */

void FUN_106958d00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa9e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106958d54; end: 106958d9f;  */

void FUN_106958d54(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e65b98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e65b98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 106958da0; end: 106958f67; -[SCStoriesSnapPostCoordinator _allPendingStoryIdsWithSnapComponentId:] */

void FUN_106958da0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = *(long *)(param_1 + 0x70);
  func_0x0001084d9ff0(lVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c25a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar5 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c259cc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf24f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  puVar7 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0ac990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0xb0),PTR_s_logPostingRetryWithResult__112608c70);
  return;
}



/* Entry: 106958f68; end: 106958f6f; -[SCStoriesSnapPostCoordinator _logRetryWithResult:] */

void FUN_106958f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ac990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb0),PTR_s_logPostingRetryWithResult__112608c70);
  return;
}



/* Entry: 106958f70; end: 10695914b; -[SCStoriesSnapPostCoordinator _appendShadowStatusKeysWithClientId:storyIds:clientState:site:toKeys:clientStates:] */

void FUN_106958f70(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        param_2 = *(undefined8 *)(lVar8 * 8);
        lVar3 = param_3;
        FUN_10695914c(param_3,param_2);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          func_0x00010c0aca00(*(undefined8 *)(param_1 + 0xb0));
        }
        else {
          func_0x00010befa120(param_7);
          func_0x00010befa120(param_8);
        }
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar4 = PTR_PTR_1126b0cd8;
  func_0x00010846a418(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (puVar4 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126be738;
    _objc_alloc(PTR_PTR_1126be738);
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04daa0(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10695914c; end: 10695921f;  */

void FUN_10695914c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010846a418(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126be738;
    _objc_alloc(PTR_PTR_1126be738);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04daa0(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106959220; end: 106959433; -[SCStoriesSnapPostCoordinator _dispatchShadowStatusQueryAtSite:keys:clientStates:] */

void FUN_106959220(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar2 = PTR_PTR_1126cf410;
    _objc_alloc(PTR_PTR_1126cf410);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106959434;
    puStack_90 = &UNK_11085b4f0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uStack_88 = param_3;
    _objc_retain(param_4);
    lStack_80 = param_4;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(param_3);
    _objc_copyWeak(auStack_b0,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c04f4c0(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcad20();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_b0);
    _objc_release(param_3);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106959434; end: 10695948b;  */

void FUN_106959434(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde9f80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10695948c; end: 1069594c7;  */

void FUN_10695948c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde9f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069594c8; end: 1069595d3; -[SCStoriesSnapPostCoordinator _countShadowStatuses:site:keys:clientStates:] */

void FUN_1069594c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1069595d4;
  puStack_70 = &UNK_1108475b0;
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_58 = param_4;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1069595d4; end: 106959903;  */

void FUN_1069595d4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 == 0) {
LAB_106959820:
      lVar1 = *(long *)(param_1 + 0x28);
      func_0x00010bf529e0();
      if (lVar1 != 0) {
        uVar15 = 0;
        do {
          uVar3 = *(ulong *)(param_1 + 0x40);
          func_0x00010bf529e0();
          if (uVar15 < uVar3) {
            uVar14 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c252440();
            _objc_release(uVar14);
          }
          uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb0);
          uVar14 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0dfd40(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0aca00(uVar16);
          _objc_release(uVar14);
          uVar15 = uVar15 + 1;
          uVar3 = *(ulong *)(param_1 + 0x28);
          func_0x00010bf529e0();
        } while (uVar15 < uVar3);
      }
      return;
    }
    func_0x00010bf529e0();
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar1 == lVar2) {
      lVar1 = *(long *)(param_1 + 0x40);
      func_0x00010bf529e0();
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010bf529e0();
      if (lVar1 == lVar2) {
        uVar15 = 0;
        do {
          uVar3 = *(ulong *)(param_1 + 0x40);
          func_0x00010bf529e0();
          if (uVar3 <= uVar15) goto LAB_106959820;
          uVar4 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar4;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar14;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar16;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0dfd40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar5;
          func_0x00010c0720c0();
          if ((int)uVar9 == 0) {
            uVar3 = 0;
          }
          else {
            uVar10 = *(ulong *)(param_1 + 0x40);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c0dfd40(uVar13);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar13;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar12;
            func_0x00010c0720c0();
            _objc_release(uVar9);
            _objc_release(uVar13);
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(uVar10);
          }
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar16);
          _objc_release(uVar14);
          _objc_release(uVar4);
          uVar15 = uVar15 + 1;
        } while ((uVar3 & 1) != 0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0ac9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb0),
             PTR_s_logPostingStatusShadowDroppedWit_112608c88,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106959904; end: 106959c6f; -[SCStoriesSnapPostCoordinator onStorySendUpdated:storyDestinations:content:state:] */

void FUN_106959904(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bfeba20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_1069560d4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x106959a70;
    puStack_90 = &UNK_1108bad48;
    _objc_retain(lVar2);
    lStack_88 = lVar2;
    _objc_retain(param_5);
    lStack_80 = param_5;
    lStack_78 = param_1;
    _objc_retain(param_3);
    uStack_70 = param_3;
    _objc_retain(param_4);
    uStack_68 = param_4;
    puStack_60 = puVar3;
    uStack_58 = param_6;
    _objc_retain(puVar3);
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_a8);
    _objc_release(puStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(lStack_80);
    _objc_release(lStack_88);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106959c70; end: 106959dcb;  */

/* WARNING: Possible PIC construction at 0x000106959ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106959ea4) */
/* WARNING: Removing unreachable block (ram,0x000106959ee4) */
/* WARNING: Removing unreachable block (ram,0x000106959ef0) */
/* WARNING: Removing unreachable block (ram,0x000106959ef4) */
/* WARNING: Removing unreachable block (ram,0x000106959f04) */
/* WARNING: Removing unreachable block (ram,0x000106959f0c) */
/* WARNING: Removing unreachable block (ram,0x000106959f2c) */
/* WARNING: Removing unreachable block (ram,0x000106959f4c) */
/* WARNING: Removing unreachable block (ram,0x000106959f5c) */
/* WARNING: Removing unreachable block (ram,0x000106959f70) */
/* WARNING: Removing unreachable block (ram,0x000106959f8c) */
/* WARNING: Removing unreachable block (ram,0x000106959fac) */
/* WARNING: Removing unreachable block (ram,0x000106959fd8) */
/* WARNING: Removing unreachable block (ram,0x00010695a018) */
/* WARNING: Removing unreachable block (ram,0x00010695a024) */
/* WARNING: Removing unreachable block (ram,0x00010695a028) */
/* WARNING: Removing unreachable block (ram,0x00010695a038) */
/* WARNING: Removing unreachable block (ram,0x00010695a040) */
/* WARNING: Removing unreachable block (ram,0x00010695a068) */
/* WARNING: Removing unreachable block (ram,0x00010695a078) */
/* WARNING: Removing unreachable block (ram,0x00010695a084) */
/* WARNING: Removing unreachable block (ram,0x00010695a0a0) */
/* WARNING: Removing unreachable block (ram,0x000106959fb4) */
/* WARNING: Removing unreachable block (ram,0x00010695a0b4) */
/* WARNING: Removing unreachable block (ram,0x000106959fc0) */
/* WARNING: Removing unreachable block (ram,0x000106959fa0) */
/* WARNING: Removing unreachable block (ram,0x00010695a0b8) */
/* WARNING: Removing unreachable block (ram,0x00010695a0cc) */
/* WARNING: Removing unreachable block (ram,0x00010695a0ec) */
/* WARNING: Removing unreachable block (ram,0x00010695a16c) */
/* WARNING: Removing unreachable block (ram,0x00010695a14c) */

void FUN_106959c70(long param_1)

{
  char cVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **in_x5;
  undefined **in_x6;
  undefined **ppuVar22;
  long in_x7;
  long lVar23;
  undefined **ppuVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined **ppuStack_6d0;
  undefined **ppuStack_6a0;
  undefined *puStack_690;
  undefined8 uStack_688;
  code *pcStack_680;
  undefined *puStack_678;
  undefined **ppuStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined8 uStack_658;
  code *pcStack_650;
  undefined *puStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined1 auStack_630 [8];
  undefined *puStack_628;
  undefined8 uStack_620;
  code *pcStack_618;
  undefined *puStack_610;
  undefined **ppuStack_608;
  undefined **ppuStack_600;
  undefined **ppuStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  long lStack_5d0;
  undefined1 auStack_5c8 [8];
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  long lStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined *apuStack_570 [16];
  long lStack_4f0;
  undefined *puStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *apuStack_430 [16];
  long lStack_3b0;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *apuStack_d8 [16];
  long lStack_58;
  
  puVar26 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  ppuVar18 = apuStack_d8;
  ppuVar20 = (undefined **)0x10;
  lVar23 = param_1;
  func_0x00010bf52a60();
  ppuVar4 = (undefined **)0x0;
  if (lVar23 != 0) {
    lVar27 = *plStack_110;
    do {
      lVar28 = 0;
      do {
        if (*plStack_110 != lVar27) {
          _objc_enumerationMutation(param_1);
        }
        puVar26 = *(undefined8 **)(lStack_118 + lVar28 * 8);
        ppuVar3 = (undefined **)PTR_PTR_1126be758;
        _objc_alloc();
        ppuVar18 = (undefined **)0x0;
        func_0x00010c008360();
        if ((ppuVar3 != (undefined **)0x0) &&
           (ppuVar4 = ppuVar3, func_0x00010bf0d0a0(), (int)ppuVar4 == 0xf)) {
          ppuVar4 = ppuVar3;
          func_0x00010c24c560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar3);
          goto LAB_106959d80;
        }
        _objc_release(ppuVar3);
        lVar28 = lVar28 + 1;
      } while (lVar23 != lVar28);
      ppuVar18 = apuStack_d8;
      ppuVar20 = (undefined **)0x10;
      lVar23 = param_1;
      puVar26 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar23 != 0);
    ppuVar4 = (undefined **)0x0;
  }
LAB_106959d80:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uVar15 = uStack_120;
  ppuVar3 = ppuVar18;
  ppuVar21 = ppuVar20;
  ppuVar22 = in_x6;
  _objc_retain(puVar26);
  _objc_retain(ppuVar18);
  _objc_retain(ppuVar20);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(uVar15);
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09dc00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = &puStack_470;
  lStack_3b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar18 = ppuVar20;
  ppuVar16 = in_x6;
  _objc_retain();
  _objc_retain(ppuVar20);
  _objc_retain(in_x6);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = in_x6;
  func_0x00010c08fa60();
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar16 = in_x6;
    func_0x00010befa120(ppuVar5);
  }
  if ((in_x7 != 0) && (ppuVar4 = ppuVar20, func_0x00010bf529e0(), ppuVar4 != (undefined **)0x0)) {
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    lStack_468 = 0;
    puStack_470 = (undefined *)0x0;
    uStack_458 = 0;
    plStack_460 = (long *)0x0;
    lVar23 = in_x7;
    func_0x00010bf6ecc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = apuStack_430;
    ppuVar21 = (undefined **)0x10;
    lVar27 = lVar23;
    func_0x00010bf52a60();
    if (lVar27 != 0) {
      lVar28 = *plStack_460;
      do {
        lVar29 = 0;
        do {
          if (*plStack_460 != lVar28) {
            _objc_enumerationMutation(lVar23);
          }
          uVar6 = *(ulong *)(lStack_468 + lVar29 * 8);
          func_0x00010c0c6200();
          ppuVar4 = ppuVar20;
          func_0x00010bf529e0();
          if ((undefined **)(uVar6 & 0xffffffff) < ppuVar4) {
            ppuVar4 = ppuVar20;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar4;
            func_0x000107d6b108();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar4);
            ppuVar4 = ppuVar3;
            func_0x00010c08fa60();
            if (ppuVar4 != (undefined **)0x0) {
              func_0x00010befa120(ppuVar5);
            }
            _objc_release(ppuVar3);
          }
          lVar29 = lVar29 + 1;
        } while (lVar27 != lVar29);
        ppuVar3 = apuStack_430;
        ppuVar21 = (undefined **)0x10;
        lVar27 = lVar23;
        ppuVar19 = &puStack_470;
        func_0x00010bf52a60();
      } while (lVar27 != 0);
    }
    _objc_release(lVar23);
    ppuVar16 = ppuVar19;
  }
  ppuVar4 = ppuVar5;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(in_x6);
  _objc_release(ppuVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_4f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar21);
  _objc_retain(in_x5);
  _objc_retain(ppuVar22);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar20 = ppuVar21;
  func_0x00010bfeba20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar20;
  FUN_106959c70();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar20);
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  lStack_5a8 = 0;
  puStack_5b0 = (undefined *)0x0;
  uStack_598 = 0;
  plStack_5a0 = (long *)0x0;
  _objc_retain(ppuVar3);
  ppuVar20 = &puStack_5b0;
  ppuVar19 = apuStack_570;
  ppuStack_6a0 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuStack_6a0 != (undefined **)0x0) {
    lVar23 = *plStack_5a0;
    do {
      ppuVar20 = (undefined **)0x0;
      do {
        if (*plStack_5a0 != lVar23) {
          _objc_enumerationMutation(ppuVar3);
        }
        ppuVar24 = *(undefined ***)(lStack_5a8 + (long)ppuVar20 * 8);
        ppuVar19 = (undefined **)PTR_PTR_1126cf408;
        _objc_alloc();
        ppuVar8 = ppuVar24;
        func_0x00010c259680(ppuVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008360();
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar19;
        func_0x00010bf6ece0();
        iVar2 = (int)ppuVar8;
        if (iVar2 == 3) {
          ppuVar8 = ppuVar19;
          func_0x00010c0ee2a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar8;
          func_0x00010bfd4d80();
          _objc_release(ppuVar8);
          if (ppuVar16 == (undefined **)0x0) {
            lVar27 = in_x7 + 0x130;
            _objc_loadWeakRetained(lVar27);
            ppuVar8 = in_x5;
            func_0x00010bf3cf60(in_x5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c105aa0(lVar27);
            _objc_release(ppuVar8);
            _objc_release(lVar27);
          }
          if (((ulong)ppuVar9 & 1) == 0) goto LAB_10695a598;
        }
        else {
          if (iVar2 == 4) {
            ppuVar10 = ppuVar19;
            func_0x00010c242960(ppuVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar4);
          }
          else {
LAB_10695a598:
            ppuVar8 = ppuVar24;
            func_0x00010c259cc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar8;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar9;
            func_0x00010846a3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar9);
            _objc_release(ppuVar8);
            if (iVar2 - 1U < 3 && ppuVar16 == (undefined **)0x0) {
              func_0x00010befa120(puVar7);
            }
            ppuVar8 = in_x5;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(ppuVar22);
            ppuVar9 = ppuVar22;
            if (ppuVar5 != (undefined **)0x0) {
              cVar1 = *(char *)(in_x7 + 0xd8);
              if (cVar1 == '\x01') {
                ppuStack_6d0 = ppuVar19;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                ppuVar11 = ppuStack_6d0;
                func_0x00010c08fa60();
                if (ppuVar11 == (undefined **)0x0) goto LAB_10695a67c;
                ppuVar13 = ppuVar19;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
LAB_10695a6d8:
                _objc_release(ppuStack_6d0);
              }
              else {
LAB_10695a67c:
                ppuVar11 = ppuVar21;
                func_0x00010c09dc00(ppuVar21);
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = in_x5;
                func_0x00010bf3cf60(in_x5);
                _objc_retainAutoreleasedReturnValue();
                ppuVar13 = ppuVar10;
                ppuVar18 = ppuVar5;
                FUN_10695ab9c(ppuVar10,ppuVar5,ppuVar11,ppuVar12);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar12);
                _objc_release(ppuVar11);
                if (cVar1 != '\0') goto LAB_10695a6d8;
              }
              ppuVar11 = ppuVar19;
              func_0x00010bf6ece0();
              ppuVar12 = ppuVar13;
              func_0x00010c08fa60();
              if (ppuVar12 == (undefined **)0x0 || (int)ppuVar11 == 3) {
                if ((int)ppuVar11 != 3) goto LAB_10695a778;
                func_0x00010c1d0640(*(undefined8 *)(in_x7 + 0x28));
              }
              else {
                _objc_retain(ppuVar13);
                _objc_release(ppuVar8);
                ppuVar9 = ppuVar13;
                func_0x000108ea5f00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar22);
                ppuVar8 = ppuVar13;
LAB_10695a778:
                ppuVar11 = ppuVar9;
                func_0x00010c0720c0();
                if (((ulong)ppuVar11 & 1) == 0) {
                  func_0x00010c1d0640(*(undefined8 *)(in_x7 + 0x28));
                }
              }
              _objc_release(ppuVar13);
            }
            uVar14 = *(ulong *)(in_x7 + 0x50);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar14;
            func_0x00010bf4b900();
            _objc_release(uVar14);
            if ((uVar6 & 1) == 0) {
              func_0x00010c25b720();
              uVar15 = 10;
              if (ppuVar24 != (undefined **)0xc) {
                uVar15 = 0;
              }
              _objc_initWeak(&puStack_5b8,in_x7);
              uVar25 = *(undefined8 *)(in_x7 + 0x70);
              puStack_628 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_620 = 0xc2000000;
              pcStack_618 = FUN_10695aca0;
              puStack_610 = &UNK_11094d4d0;
              _objc_copyWeak(auStack_5c8,&puStack_5b8);
              _objc_retain(ppuVar10);
              ppuStack_608 = ppuVar10;
              _objc_retain(ppuVar9);
              ppuStack_600 = ppuVar9;
              _objc_retain(ppuVar5);
              ppuStack_5f8 = ppuVar5;
              _objc_retain(ppuVar21);
              ppuStack_5f0 = ppuVar21;
              _objc_retain(ppuVar19);
              ppuStack_5e8 = ppuVar19;
              uStack_5c0 = uVar15;
              _objc_retain(ppuVar8);
              ppuStack_5e0 = ppuVar8;
              _objc_retain(in_x5);
              uVar15 = *(undefined8 *)(in_x7 + 0x68);
              ppuStack_5d8 = in_x5;
              lStack_5d0 = in_x7;
              func_0x00010c11de00(uVar15);
              _objc_retainAutoreleasedReturnValue();
              puStack_660 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_658 = 0xc2000000;
              pcStack_650 = FUN_10695b038;
              puStack_648 = &UNK_11085dbf8;
              ppuVar18 = &puStack_5b8;
              _objc_copyWeak(auStack_630);
              _objc_retain(ppuVar10);
              ppuStack_640 = ppuVar10;
              _objc_retain(ppuVar9);
              ppuStack_638 = ppuVar9;
              func_0x00010c0f8500(uVar25);
              _objc_release(uVar15);
              _objc_release(ppuStack_638);
              _objc_release(ppuStack_640);
              _objc_destroyWeak(auStack_630);
              _objc_release(ppuStack_5d8);
              _objc_release(ppuStack_5e0);
              _objc_release(ppuStack_5e8);
              _objc_release(ppuStack_5f0);
              _objc_release(ppuStack_5f8);
              _objc_release(ppuStack_600);
              _objc_release(ppuStack_608);
              _objc_destroyWeak(auStack_5c8);
              _objc_destroyWeak(&puStack_5b8);
            }
            _objc_release(ppuVar9);
            _objc_release(ppuVar8);
          }
          _objc_release(ppuVar10);
        }
        _objc_release(ppuVar19);
        ppuVar20 = (undefined **)((long)ppuVar20 + 1);
      } while (ppuStack_6a0 != ppuVar20);
      ppuVar20 = &puStack_5b0;
      ppuVar19 = apuStack_570;
      ppuStack_6a0 = ppuVar3;
      func_0x00010bf52a60();
    } while (ppuStack_6a0 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar8 = ppuVar4;
  func_0x00010bf529e0();
  if (ppuVar8 != (undefined **)0x0) {
    uVar15 = *(undefined8 *)(in_x7 + 0x98);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar21;
    ppuVar19 = in_x5;
    func_0x00010c066c40();
    _objc_release(uVar15);
    if (ppuVar16 == (undefined **)0x0) {
      ppuVar20 = ppuVar4;
      func_0x000100504554(ppuVar4,&PTR___NSConcreteGlobalBlock_11094d520);
      ppuVar18 = &PTR___NSConcreteGlobalBlock_11094d540;
      ppuVar16 = ppuVar20;
      func_0x0001006372a4();
      _objc_release(ppuVar20);
      uVar15 = *(undefined8 *)(in_x7 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar22;
      ppuVar19 = ppuVar16;
      func_0x00010c07a8c0();
      _objc_release(uVar15);
      _objc_release(ppuVar16);
    }
  }
  puVar17 = puVar7;
  func_0x00010bf529e0();
  if (puVar17 != (undefined *)0x0) {
    uVar15 = *(undefined8 *)(in_x7 + 0x70);
    puStack_690 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_688 = 0xc2000000;
    pcStack_680 = FUN_10695b0f8;
    puStack_678 = &UNK_110864a38;
    _objc_retain(ppuVar22);
    ppuStack_670 = ppuVar22;
    _objc_retain(puVar7);
    ppuVar20 = &puStack_690;
    ppuVar19 = (undefined **)0x0;
    puStack_668 = puVar7;
    func_0x00010c0f8500(uVar15);
    _objc_release(puStack_668);
    _objc_release(ppuStack_670);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar7);
  _objc_release(ppuVar22);
  _objc_release(in_x5);
  _objc_release(ppuVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_630);
  _objc_destroyWeak(auStack_5c8);
  _objc_destroyWeak(&puStack_5b8);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(ppuVar18);
  _objc_retain(ppuVar20);
  _objc_retain(ppuVar19);
  if ((((ppuVar18 == (undefined **)0x0) ||
       (ppuVar4 = ppuVar20, func_0x00010bf529e0(), ppuVar4 == (undefined **)0x0)) ||
      (ppuVar4 = ppuVar3, FUN_106961f2c(ppuVar3,ppuVar18),
      ppuVar4 == (undefined **)0x7fffffffffffffff)) ||
     (ppuVar5 = ppuVar20, func_0x00010bf529e0(), ppuVar5 <= ppuVar4)) {
LAB_10695ac5c:
    _objc_retain(ppuVar19);
    ppuVar4 = ppuVar19;
  }
  else {
    ppuVar5 = ppuVar20;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar5;
    func_0x000107d6b108();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar4;
    func_0x00010c08fa60();
    if (ppuVar5 == (undefined **)0x0) {
      _objc_release(ppuVar4);
      goto LAB_10695ac5c;
    }
  }
  _objc_release(ppuVar19);
  _objc_release(ppuVar20);
  _objc_release(ppuVar18);
  _objc_release(ppuVar3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106959dcc; end: 10695a36f; -[SCStoriesSnapPostCoordinator _handleSpotlightAutoSharePostingStateUpdate:storyDestinations:content:state:postMetadata:spotlightShareInfo:currentTime:] */

/* WARNING: Possible PIC construction at 0x000106959ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106959ea4) */
/* WARNING: Removing unreachable block (ram,0x000106959ee4) */
/* WARNING: Removing unreachable block (ram,0x000106959ef0) */
/* WARNING: Removing unreachable block (ram,0x000106959ef4) */
/* WARNING: Removing unreachable block (ram,0x000106959f04) */
/* WARNING: Removing unreachable block (ram,0x000106959f0c) */
/* WARNING: Removing unreachable block (ram,0x000106959f2c) */
/* WARNING: Removing unreachable block (ram,0x000106959f4c) */
/* WARNING: Removing unreachable block (ram,0x000106959f5c) */
/* WARNING: Removing unreachable block (ram,0x000106959f70) */
/* WARNING: Removing unreachable block (ram,0x000106959f8c) */
/* WARNING: Removing unreachable block (ram,0x000106959fac) */
/* WARNING: Removing unreachable block (ram,0x000106959fd8) */
/* WARNING: Removing unreachable block (ram,0x00010695a018) */
/* WARNING: Removing unreachable block (ram,0x00010695a024) */
/* WARNING: Removing unreachable block (ram,0x00010695a028) */
/* WARNING: Removing unreachable block (ram,0x00010695a038) */
/* WARNING: Removing unreachable block (ram,0x00010695a040) */
/* WARNING: Removing unreachable block (ram,0x00010695a068) */
/* WARNING: Removing unreachable block (ram,0x00010695a078) */
/* WARNING: Removing unreachable block (ram,0x00010695a084) */
/* WARNING: Removing unreachable block (ram,0x00010695a0a0) */
/* WARNING: Removing unreachable block (ram,0x000106959fb4) */
/* WARNING: Removing unreachable block (ram,0x00010695a0b4) */
/* WARNING: Removing unreachable block (ram,0x000106959fc0) */
/* WARNING: Removing unreachable block (ram,0x000106959fa0) */
/* WARNING: Removing unreachable block (ram,0x00010695a0b8) */
/* WARNING: Removing unreachable block (ram,0x00010695a0cc) */
/* WARNING: Removing unreachable block (ram,0x00010695a0ec) */
/* WARNING: Removing unreachable block (ram,0x00010695a16c) */
/* WARNING: Removing unreachable block (ram,0x00010695a14c) */

void FUN_106959dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,long param_8,
                  undefined8 param_9)

{
  char cVar1;
  int iVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined **ppuVar24;
  undefined8 uVar25;
  undefined **ppuVar26;
  long lVar27;
  long lVar28;
  undefined **ppuStack_5b0;
  undefined **ppuStack_580;
  undefined *puStack_570;
  undefined8 uStack_568;
  code *pcStack_560;
  undefined *puStack_558;
  undefined **ppuStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined8 uStack_538;
  code *pcStack_530;
  undefined *puStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined1 auStack_510 [8];
  undefined *puStack_508;
  undefined8 uStack_500;
  code *pcStack_4f8;
  undefined *puStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  long lStack_4b0;
  undefined1 auStack_4a8 [8];
  undefined8 uStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined *apuStack_450 [16];
  long lStack_3d0;
  undefined *puStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *apuStack_310 [16];
  long lStack_290;
  
  ppuVar6 = param_4;
  ppuVar21 = param_5;
  ppuVar22 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09dc00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &puStack_350;
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar19 = param_5;
  ppuVar17 = param_7;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_7);
  ppuVar26 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_7;
  func_0x00010c08fa60();
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar17 = param_7;
    func_0x00010befa120(ppuVar26);
  }
  if ((param_8 != 0) && (ppuVar3 = param_5, func_0x00010bf529e0(), ppuVar3 != (undefined **)0x0)) {
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_348 = 0;
    puStack_350 = (undefined *)0x0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    lVar23 = param_8;
    func_0x00010bf6ecc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = apuStack_310;
    ppuVar21 = (undefined **)0x10;
    lVar4 = lVar23;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar27 = *plStack_340;
      do {
        lVar28 = 0;
        do {
          if (*plStack_340 != lVar27) {
            _objc_enumerationMutation(lVar23);
          }
          uVar5 = *(ulong *)(lStack_348 + lVar28 * 8);
          func_0x00010c0c6200();
          ppuVar6 = param_5;
          func_0x00010bf529e0();
          if ((undefined **)(uVar5 & 0xffffffff) < ppuVar6) {
            ppuVar6 = param_5;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar6;
            func_0x000107d6b108();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar6);
            ppuVar6 = ppuVar3;
            func_0x00010c08fa60();
            if (ppuVar6 != (undefined **)0x0) {
              func_0x00010befa120(ppuVar26);
            }
            _objc_release(ppuVar3);
          }
          lVar28 = lVar28 + 1;
        } while (lVar4 != lVar28);
        ppuVar6 = apuStack_310;
        ppuVar21 = (undefined **)0x10;
        lVar4 = lVar23;
        ppuVar8 = &puStack_350;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar23);
    ppuVar17 = ppuVar8;
  }
  ppuVar3 = ppuVar26;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar26);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar21);
  _objc_retain(param_6);
  _objc_retain(ppuVar22);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar26 = ppuVar21;
  func_0x00010bfeba20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar26;
  FUN_106959c70();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar26);
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  lStack_488 = 0;
  puStack_490 = (undefined *)0x0;
  uStack_478 = 0;
  plStack_480 = (long *)0x0;
  _objc_retain(ppuVar6);
  ppuVar26 = &puStack_490;
  ppuVar20 = apuStack_450;
  ppuStack_580 = ppuVar6;
  func_0x00010bf52a60();
  if (ppuStack_580 != (undefined **)0x0) {
    lVar23 = *plStack_480;
    do {
      ppuVar26 = (undefined **)0x0;
      do {
        if (*plStack_480 != lVar23) {
          _objc_enumerationMutation(ppuVar6);
        }
        ppuVar24 = *(undefined ***)(lStack_488 + (long)ppuVar26 * 8);
        ppuVar20 = (undefined **)PTR_PTR_1126cf408;
        _objc_alloc();
        ppuVar9 = ppuVar24;
        func_0x00010c259680(ppuVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008360();
        _objc_release(ppuVar9);
        ppuVar9 = ppuVar20;
        func_0x00010bf6ece0();
        iVar2 = (int)ppuVar9;
        if (iVar2 == 3) {
          ppuVar9 = ppuVar20;
          func_0x00010c0ee2a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar9;
          func_0x00010bfd4d80();
          _objc_release(ppuVar9);
          if (ppuVar17 == (undefined **)0x0) {
            lVar4 = param_8 + 0x130;
            _objc_loadWeakRetained(lVar4);
            ppuVar9 = param_6;
            func_0x00010bf3cf60(param_6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c105aa0(lVar4);
            _objc_release(ppuVar9);
            _objc_release(lVar4);
          }
          if (((ulong)ppuVar10 & 1) == 0) goto LAB_10695a598;
        }
        else {
          if (iVar2 == 4) {
            ppuVar11 = ppuVar20;
            func_0x00010c242960(ppuVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar3);
          }
          else {
LAB_10695a598:
            ppuVar9 = ppuVar24;
            func_0x00010c259cc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar9;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar10;
            func_0x00010846a3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar10);
            _objc_release(ppuVar9);
            if (iVar2 - 1U < 3 && ppuVar17 == (undefined **)0x0) {
              func_0x00010befa120(puVar7);
            }
            ppuVar9 = param_6;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(ppuVar22);
            ppuVar10 = ppuVar22;
            if (ppuVar8 != (undefined **)0x0) {
              cVar1 = *(char *)(param_8 + 0xd8);
              if (cVar1 == '\x01') {
                ppuStack_5b0 = ppuVar20;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = ppuStack_5b0;
                func_0x00010c08fa60();
                if (ppuVar12 == (undefined **)0x0) goto LAB_10695a67c;
                ppuVar14 = ppuVar20;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
LAB_10695a6d8:
                _objc_release(ppuStack_5b0);
              }
              else {
LAB_10695a67c:
                ppuVar12 = ppuVar21;
                func_0x00010c09dc00(ppuVar21);
                _objc_retainAutoreleasedReturnValue();
                ppuVar13 = param_6;
                func_0x00010bf3cf60(param_6);
                _objc_retainAutoreleasedReturnValue();
                ppuVar14 = ppuVar11;
                ppuVar19 = ppuVar8;
                FUN_10695ab9c(ppuVar11,ppuVar8,ppuVar12,ppuVar13);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar13);
                _objc_release(ppuVar12);
                if (cVar1 != '\0') goto LAB_10695a6d8;
              }
              ppuVar12 = ppuVar20;
              func_0x00010bf6ece0();
              ppuVar13 = ppuVar14;
              func_0x00010c08fa60();
              if (ppuVar13 == (undefined **)0x0 || (int)ppuVar12 == 3) {
                if ((int)ppuVar12 != 3) goto LAB_10695a778;
                func_0x00010c1d0640(*(undefined8 *)(param_8 + 0x28));
              }
              else {
                _objc_retain(ppuVar14);
                _objc_release(ppuVar9);
                ppuVar10 = ppuVar14;
                func_0x000108ea5f00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar22);
                ppuVar9 = ppuVar14;
LAB_10695a778:
                ppuVar12 = ppuVar10;
                func_0x00010c0720c0();
                if (((ulong)ppuVar12 & 1) == 0) {
                  func_0x00010c1d0640(*(undefined8 *)(param_8 + 0x28));
                }
              }
              _objc_release(ppuVar14);
            }
            uVar15 = *(ulong *)(param_8 + 0x50);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar15;
            func_0x00010bf4b900();
            _objc_release(uVar15);
            if ((uVar5 & 1) == 0) {
              func_0x00010c25b720();
              uVar16 = 10;
              if (ppuVar24 != (undefined **)0xc) {
                uVar16 = 0;
              }
              _objc_initWeak(&puStack_498,param_8);
              uVar25 = *(undefined8 *)(param_8 + 0x70);
              puStack_508 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_500 = 0xc2000000;
              pcStack_4f8 = FUN_10695aca0;
              puStack_4f0 = &UNK_11094d4d0;
              _objc_copyWeak(auStack_4a8,&puStack_498);
              _objc_retain(ppuVar11);
              ppuStack_4e8 = ppuVar11;
              _objc_retain(ppuVar10);
              ppuStack_4e0 = ppuVar10;
              _objc_retain(ppuVar8);
              ppuStack_4d8 = ppuVar8;
              _objc_retain(ppuVar21);
              ppuStack_4d0 = ppuVar21;
              _objc_retain(ppuVar20);
              ppuStack_4c8 = ppuVar20;
              uStack_4a0 = uVar16;
              _objc_retain(ppuVar9);
              ppuStack_4c0 = ppuVar9;
              _objc_retain(param_6);
              uVar16 = *(undefined8 *)(param_8 + 0x68);
              ppuStack_4b8 = param_6;
              lStack_4b0 = param_8;
              func_0x00010c11de00(uVar16);
              _objc_retainAutoreleasedReturnValue();
              puStack_540 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_538 = 0xc2000000;
              pcStack_530 = FUN_10695b038;
              puStack_528 = &UNK_11085dbf8;
              ppuVar19 = &puStack_498;
              _objc_copyWeak(auStack_510);
              _objc_retain(ppuVar11);
              ppuStack_520 = ppuVar11;
              _objc_retain(ppuVar10);
              ppuStack_518 = ppuVar10;
              func_0x00010c0f8500(uVar25);
              _objc_release(uVar16);
              _objc_release(ppuStack_518);
              _objc_release(ppuStack_520);
              _objc_destroyWeak(auStack_510);
              _objc_release(ppuStack_4b8);
              _objc_release(ppuStack_4c0);
              _objc_release(ppuStack_4c8);
              _objc_release(ppuStack_4d0);
              _objc_release(ppuStack_4d8);
              _objc_release(ppuStack_4e0);
              _objc_release(ppuStack_4e8);
              _objc_destroyWeak(auStack_4a8);
              _objc_destroyWeak(&puStack_498);
            }
            _objc_release(ppuVar10);
            _objc_release(ppuVar9);
          }
          _objc_release(ppuVar11);
        }
        _objc_release(ppuVar20);
        ppuVar26 = (undefined **)((long)ppuVar26 + 1);
      } while (ppuStack_580 != ppuVar26);
      ppuVar26 = &puStack_490;
      ppuVar20 = apuStack_450;
      ppuStack_580 = ppuVar6;
      func_0x00010bf52a60();
    } while (ppuStack_580 != (undefined **)0x0);
  }
  _objc_release(ppuVar6);
  ppuVar9 = ppuVar3;
  func_0x00010bf529e0();
  if (ppuVar9 != (undefined **)0x0) {
    uVar16 = *(undefined8 *)(param_8 + 0x98);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = ppuVar21;
    ppuVar20 = param_6;
    func_0x00010c066c40();
    _objc_release(uVar16);
    if (ppuVar17 == (undefined **)0x0) {
      ppuVar26 = ppuVar3;
      func_0x000100504554(ppuVar3,&PTR___NSConcreteGlobalBlock_11094d520);
      ppuVar19 = &PTR___NSConcreteGlobalBlock_11094d540;
      ppuVar17 = ppuVar26;
      func_0x0001006372a4();
      _objc_release(ppuVar26);
      uVar16 = *(undefined8 *)(param_8 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar26 = ppuVar22;
      ppuVar20 = ppuVar17;
      func_0x00010c07a8c0();
      _objc_release(uVar16);
      _objc_release(ppuVar17);
    }
  }
  puVar18 = puVar7;
  func_0x00010bf529e0();
  if (puVar18 != (undefined *)0x0) {
    uVar16 = *(undefined8 *)(param_8 + 0x70);
    puStack_570 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_568 = 0xc2000000;
    pcStack_560 = FUN_10695b0f8;
    puStack_558 = &UNK_110864a38;
    _objc_retain(ppuVar22);
    ppuStack_550 = ppuVar22;
    _objc_retain(puVar7);
    ppuVar26 = &puStack_570;
    ppuVar20 = (undefined **)0x0;
    puStack_548 = puVar7;
    func_0x00010c0f8500(uVar16);
    _objc_release(puStack_548);
    _objc_release(ppuStack_550);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar3);
  _objc_release(puVar7);
  _objc_release(ppuVar22);
  _objc_release(param_6);
  _objc_release(ppuVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_510);
  _objc_destroyWeak(auStack_4a8);
  _objc_destroyWeak(&puStack_498);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(ppuVar19);
  _objc_retain(ppuVar26);
  _objc_retain(ppuVar20);
  if ((((ppuVar19 == (undefined **)0x0) ||
       (ppuVar3 = ppuVar26, func_0x00010bf529e0(), ppuVar3 == (undefined **)0x0)) ||
      (ppuVar3 = ppuVar6, FUN_106961f2c(ppuVar6,ppuVar19),
      ppuVar3 == (undefined **)0x7fffffffffffffff)) ||
     (ppuVar17 = ppuVar26, func_0x00010bf529e0(), ppuVar17 <= ppuVar3)) {
LAB_10695ac5c:
    _objc_retain(ppuVar20);
    ppuVar3 = ppuVar20;
  }
  else {
    ppuVar17 = ppuVar26;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar17;
    func_0x000107d6b108();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    ppuVar17 = ppuVar3;
    func_0x00010c08fa60();
    if (ppuVar17 == (undefined **)0x0) {
      _objc_release(ppuVar3);
      goto LAB_10695ac5c;
    }
  }
  _objc_release(ppuVar20);
  _objc_release(ppuVar26);
  _objc_release(ppuVar19);
  _objc_release(ppuVar6);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10695a370; end: 10695ab9b; -[SCStoriesSnapPostCoordinator _handlePostingState:storyDestinations:content:postMetadata:snapComponentId:] */

void FUN_10695a370(long param_1,undefined **param_2,long param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined **ppuStack_260;
  undefined **ppuStack_230;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar21 = param_5;
  func_0x00010bfeba20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar21;
  FUN_106959c70();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar21);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  puStack_140 = (undefined *)0x0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(param_4);
  ppuVar21 = &puStack_140;
  ppuVar17 = apuStack_100;
  ppuStack_230 = param_4;
  func_0x00010bf52a60();
  if (ppuStack_230 != (undefined **)0x0) {
    lVar18 = *plStack_130;
    do {
      ppuVar21 = (undefined **)0x0;
      do {
        if (*plStack_130 != lVar18) {
          _objc_enumerationMutation(param_4);
        }
        ppuVar19 = *(undefined ***)(lStack_138 + (long)ppuVar21 * 8);
        ppuVar17 = (undefined **)PTR_PTR_1126cf408;
        _objc_alloc();
        ppuVar6 = ppuVar19;
        func_0x00010c259680(ppuVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008360();
        _objc_release(ppuVar6);
        ppuVar6 = ppuVar17;
        func_0x00010bf6ece0();
        iVar2 = (int)ppuVar6;
        if (iVar2 == 3) {
          ppuVar6 = ppuVar17;
          func_0x00010c0ee2a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar6;
          func_0x00010bfd4d80();
          _objc_release(ppuVar6);
          if (param_3 == 0) {
            lVar8 = param_1 + 0x130;
            _objc_loadWeakRetained(lVar8);
            ppuVar6 = param_6;
            func_0x00010bf3cf60(param_6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c105aa0(lVar8);
            _objc_release(ppuVar6);
            _objc_release(lVar8);
          }
          if (((ulong)ppuVar7 & 1) == 0) goto LAB_10695a598;
        }
        else {
          if (iVar2 == 4) {
            ppuVar9 = ppuVar17;
            func_0x00010c242960(ppuVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar4);
          }
          else {
LAB_10695a598:
            ppuVar6 = ppuVar19;
            func_0x00010c259cc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar6;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar7;
            func_0x00010846a3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar7);
            _objc_release(ppuVar6);
            if (iVar2 - 1U < 3 && param_3 == 0) {
              func_0x00010befa120(puVar3);
            }
            ppuVar6 = param_6;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(param_7);
            ppuVar7 = param_7;
            if (ppuVar5 != (undefined **)0x0) {
              cVar1 = *(char *)(param_1 + 0xd8);
              if (cVar1 == '\x01') {
                ppuStack_260 = ppuVar17;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                ppuVar10 = ppuStack_260;
                func_0x00010c08fa60();
                if (ppuVar10 == (undefined **)0x0) goto LAB_10695a67c;
                ppuVar12 = ppuVar17;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
LAB_10695a6d8:
                _objc_release(ppuStack_260);
              }
              else {
LAB_10695a67c:
                ppuVar10 = param_5;
                func_0x00010c09dc00(param_5);
                _objc_retainAutoreleasedReturnValue();
                ppuVar11 = param_6;
                func_0x00010bf3cf60(param_6);
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = ppuVar9;
                param_2 = ppuVar5;
                FUN_10695ab9c(ppuVar9,ppuVar5,ppuVar10,ppuVar11);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar11);
                _objc_release(ppuVar10);
                if (cVar1 != '\0') goto LAB_10695a6d8;
              }
              ppuVar10 = ppuVar17;
              func_0x00010bf6ece0();
              ppuVar11 = ppuVar12;
              func_0x00010c08fa60();
              if (ppuVar11 == (undefined **)0x0 || (int)ppuVar10 == 3) {
                if ((int)ppuVar10 != 3) goto LAB_10695a778;
                func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
              }
              else {
                _objc_retain(ppuVar12);
                _objc_release(ppuVar6);
                ppuVar7 = ppuVar12;
                func_0x000108ea5f00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(param_7);
                ppuVar6 = ppuVar12;
LAB_10695a778:
                ppuVar10 = ppuVar7;
                func_0x00010c0720c0();
                if (((ulong)ppuVar10 & 1) == 0) {
                  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
                }
              }
              _objc_release(ppuVar12);
            }
            uVar13 = *(ulong *)(param_1 + 0x50);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar13;
            func_0x00010bf4b900();
            _objc_release(uVar13);
            if ((uVar14 & 1) == 0) {
              func_0x00010c25b720();
              uVar15 = 10;
              if (ppuVar19 != (undefined **)0xc) {
                uVar15 = 0;
              }
              _objc_initWeak(&puStack_148,param_1);
              uVar20 = *(undefined8 *)(param_1 + 0x70);
              puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_1b0 = 0xc2000000;
              pcStack_1a8 = FUN_10695aca0;
              puStack_1a0 = &UNK_11094d4d0;
              _objc_copyWeak(auStack_158,&puStack_148);
              _objc_retain(ppuVar9);
              ppuStack_198 = ppuVar9;
              _objc_retain(ppuVar7);
              ppuStack_190 = ppuVar7;
              _objc_retain(ppuVar5);
              ppuStack_188 = ppuVar5;
              _objc_retain(param_5);
              ppuStack_180 = param_5;
              _objc_retain(ppuVar17);
              ppuStack_178 = ppuVar17;
              uStack_150 = uVar15;
              _objc_retain(ppuVar6);
              ppuStack_170 = ppuVar6;
              _objc_retain(param_6);
              uVar15 = *(undefined8 *)(param_1 + 0x68);
              ppuStack_168 = param_6;
              lStack_160 = param_1;
              func_0x00010c11de00(uVar15);
              _objc_retainAutoreleasedReturnValue();
              puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_1e8 = 0xc2000000;
              pcStack_1e0 = FUN_10695b038;
              puStack_1d8 = &UNK_11085dbf8;
              param_2 = &puStack_148;
              _objc_copyWeak(auStack_1c0);
              _objc_retain(ppuVar9);
              ppuStack_1d0 = ppuVar9;
              _objc_retain(ppuVar7);
              ppuStack_1c8 = ppuVar7;
              func_0x00010c0f8500(uVar20);
              _objc_release(uVar15);
              _objc_release(ppuStack_1c8);
              _objc_release(ppuStack_1d0);
              _objc_destroyWeak(auStack_1c0);
              _objc_release(ppuStack_168);
              _objc_release(ppuStack_170);
              _objc_release(ppuStack_178);
              _objc_release(ppuStack_180);
              _objc_release(ppuStack_188);
              _objc_release(ppuStack_190);
              _objc_release(ppuStack_198);
              _objc_destroyWeak(auStack_158);
              _objc_destroyWeak(&puStack_148);
            }
            _objc_release(ppuVar7);
            _objc_release(ppuVar6);
          }
          _objc_release(ppuVar9);
        }
        _objc_release(ppuVar17);
        ppuVar21 = (undefined **)((long)ppuVar21 + 1);
      } while (ppuStack_230 != ppuVar21);
      ppuVar21 = &puStack_140;
      ppuVar17 = apuStack_100;
      ppuStack_230 = param_4;
      func_0x00010bf52a60();
    } while (ppuStack_230 != (undefined **)0x0);
  }
  _objc_release(param_4);
  ppuVar6 = ppuVar4;
  func_0x00010bf529e0();
  if (ppuVar6 != (undefined **)0x0) {
    uVar15 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = param_5;
    ppuVar17 = param_6;
    func_0x00010c066c40();
    _objc_release(uVar15);
    if (param_3 == 0) {
      ppuVar21 = ppuVar4;
      func_0x000100504554(ppuVar4,&PTR___NSConcreteGlobalBlock_11094d520);
      param_2 = &PTR___NSConcreteGlobalBlock_11094d540;
      ppuVar6 = ppuVar21;
      func_0x0001006372a4();
      _objc_release(ppuVar21);
      uVar15 = *(undefined8 *)(param_1 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = param_7;
      ppuVar17 = ppuVar6;
      func_0x00010c07a8c0();
      _objc_release(uVar15);
      _objc_release(ppuVar6);
    }
  }
  puVar16 = puVar3;
  func_0x00010bf529e0();
  if (puVar16 != (undefined *)0x0) {
    uVar15 = *(undefined8 *)(param_1 + 0x70);
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_10695b0f8;
    puStack_208 = &UNK_110864a38;
    _objc_retain(param_7);
    ppuStack_200 = param_7;
    _objc_retain(puVar3);
    ppuVar21 = &puStack_220;
    ppuVar17 = (undefined **)0x0;
    puStack_1f8 = puVar3;
    func_0x00010c0f8500(uVar15);
    _objc_release(puStack_1f8);
    _objc_release(ppuStack_200);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(&puStack_148);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(ppuVar21);
  _objc_retain(ppuVar17);
  if ((((param_2 != (undefined **)0x0) &&
       (ppuVar4 = ppuVar21, func_0x00010bf529e0(), ppuVar4 != (undefined **)0x0)) &&
      (ppuVar4 = param_4, FUN_106961f2c(param_4,param_2),
      ppuVar4 != (undefined **)0x7fffffffffffffff)) &&
     (ppuVar5 = ppuVar21, func_0x00010bf529e0(), ppuVar4 < ppuVar5)) {
    ppuVar4 = ppuVar21;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x000107d6b108();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar5;
    func_0x00010c08fa60();
    if (ppuVar4 != (undefined **)0x0) goto LAB_10695ac68;
    _objc_release(ppuVar5);
  }
  _objc_retain(ppuVar17);
  ppuVar5 = ppuVar17;
LAB_10695ac68:
  _objc_release(ppuVar17);
  _objc_release(ppuVar21);
  _objc_release(param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10695ab9c; end: 10695ac9f;  */

void FUN_10695ab9c(ulong param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((((param_2 != 0) && (uVar1 = param_3, func_0x00010bf529e0(), uVar1 != 0)) &&
      (uVar1 = param_1, FUN_106961f2c(param_1,param_2), uVar1 != 0x7fffffffffffffff)) &&
     (uVar2 = param_3, func_0x00010bf529e0(), uVar1 < uVar2)) {
    uVar1 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000107d6b108();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010c08fa60();
    if (uVar1 != 0) goto LAB_10695ac68;
    _objc_release(uVar2);
  }
  _objc_retain(param_4);
  uVar2 = param_4;
LAB_10695ac68:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10695aca0; end: 10695ae1b;  */

void FUN_10695aca0(long param_1,undefined8 param_2)

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
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    _objc_retain(param_2);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar9);
    func_0x00010be3c600(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(param_2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10695ae1c; end: 10695b037;  */

void FUN_10695ae1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    FUN_1069547f4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010695af50(lVar1,*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    FUN_106956c74(uVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x68));
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bf3cf60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_106956bb8(uVar4,uVar3,*(undefined8 *)(param_1 + 0x48));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      _objc_retain(uVar4);
    }
    func_0x00010c0aaae0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
    uVar3 = uVar2;
    FUN_106954904(0x40f5180000000000,uVar2,uVar4,lVar1,*(undefined8 *)(param_1 + 0x58),
                  *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb8),
                  *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xc0),*(undefined8 *)(param_1 + 0x48))
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10695b038; end: 10695b073;  */

void FUN_10695b038(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be2ec60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10695b074; end: 10695b0eb;  */

void FUN_10695b074(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bfd4d80();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bf24ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108f579f0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10695b0ec; end: 10695b0f7;  */

bool FUN_10695b0ec(undefined8 param_1,long param_2)

{
  return param_2 != 0;
}



/* Entry: 10695b0f8; end: 10695b15b;  */

void FUN_10695b0f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  _objc_opt_new(puVar3);
  func_0x00010c26f320();
  func_0x0001084da554(param_2,uVar1,uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10695b15c; end: 10695b217; -[SCStoriesSnapPostCoordinator _handleRecoveredSnapWithStoryId:snapComponentId:] */

void FUN_10695b15c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x50);
  _objc_retain(param_4);
  func_0x00010c0e00e0(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50),param_2,puVar1,param_3);
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10695b218; end: 10695b8c7; -[SCStoriesSnapPostCoordinator onStorySendComplete:content:completedStoryDestinations:] */

void FUN_10695b218(long param_1,undefined8 param_2,long param_3,undefined *param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 uVar16;
  long lVar17;
  undefined *puStack_348;
  undefined1 auStack_2d0 [8];
  undefined1 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_4;
  func_0x00010bfeba20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_1069560d4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) goto LAB_10695b848;
  puVar2 = param_4;
  func_0x00010bfeba20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_106959c70();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf1f440();
  puStack_348 = (undefined *)0x0;
  if (iVar1 != 0) {
    puStack_348 = PTR_PTR_1126cf418;
    _objc_alloc();
    func_0x00010bff6560();
  }
  puVar2 = puVar3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar10 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(param_5);
  _objc_retain(uVar10);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  _objc_retain(param_5);
  lVar13 = param_5;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar12 = *plStack_230;
    do {
      lVar17 = 0;
      do {
        if (*plStack_230 != lVar12) {
          _objc_enumerationMutation(param_5);
        }
        uVar14 = *(undefined8 *)(lStack_238 + lVar17 * 8);
        puVar7 = PTR_PTR_1126cf408;
        _objc_alloc();
        func_0x00010c259cc0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar14;
        func_0x00010c259680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008360();
        _objc_release(uVar8);
        _objc_release(uVar14);
        puVar9 = puVar7;
        func_0x00010c0ee2a0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar9;
        FUN_106956248();
        _objc_release(puVar9);
        if (((ulong)puVar15 & 1) != 0) {
          uVar8 = uVar10;
          func_0x00010bf1f440();
          uVar16 = (undefined1)uVar8;
          _objc_release(puVar7);
          goto LAB_10695b48c;
        }
        _objc_release(puVar7);
        lVar17 = lVar17 + 1;
      } while (lVar13 != lVar17);
      lVar13 = param_5;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  uVar16 = 0;
LAB_10695b48c:
  _objc_release(param_5);
  _objc_release(uVar10);
  _objc_release(param_5);
  if (puVar4 == (undefined *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xd0);
    func_0x000108f49500();
    if (iVar1 != 0) goto LAB_10695b4b8;
    lVar13 = param_5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar13;
    func_0x00010c13ca20();
    _objc_release(lVar13);
    puVar7 = puVar5;
    if (lVar12 != 0) {
      puVar7 = puVar6;
    }
    func_0x00010befa160(puVar7);
LAB_10695b618:
    puVar7 = puVar5;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_178 = puVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
LAB_10695b64c:
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      plStack_2b0 = (long *)0x0;
      _objc_retain(puVar7);
      puVar9 = puVar7;
      func_0x00010bf52a60();
      if (puVar9 != (undefined *)0x0) {
        lVar13 = *plStack_2b0;
        do {
          puVar15 = (undefined *)0x0;
          do {
            if (*plStack_2b0 != lVar13) {
              _objc_enumerationMutation(puVar7);
            }
            func_0x00010c288b20(param_1);
            puVar15 = puVar15 + 1;
          } while (puVar9 != puVar15);
          puVar9 = puVar7;
          func_0x00010bf52a60();
        } while (puVar9 != (undefined *)0x0);
      }
      _objc_release(puVar7);
      _objc_initWeak(auStack_f0,param_1);
      _objc_retain(puStack_348);
      _objc_retain(puVar2);
      _objc_copyWeak(auStack_2d0,auStack_f0);
      _objc_retain(puVar5);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(puVar4);
      uStack_2c8 = uVar16;
      func_0x00010be73540(param_1);
      _objc_release(puVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_2d0);
      _objc_release(puVar2);
      _objc_release(puStack_348);
      _objc_destroyWeak(auStack_f0);
      _objc_release(puVar7);
    }
  }
  else {
LAB_10695b4b8:
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    _objc_retain(param_5);
    lVar13 = param_5;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      lVar12 = *plStack_270;
      do {
        lVar17 = 0;
        do {
          if (*plStack_270 != lVar12) {
            _objc_enumerationMutation(param_5);
          }
          lVar11 = *(long *)(lStack_278 + lVar17 * 8);
          func_0x00010c13ca20();
          puVar7 = puVar5;
          if (lVar11 != 0) {
            puVar7 = puVar6;
          }
          func_0x00010befa120(puVar7);
          lVar17 = lVar17 + 1;
        } while (lVar13 != lVar17);
        lVar13 = param_5;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(param_5);
    puVar7 = puVar5;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      func_0x00010bf529e0(puVar6);
    }
    if (puVar4 == (undefined *)0x0) goto LAB_10695b618;
    func_0x00010be52160(param_1);
    puVar7 = puVar5;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      puVar9 = param_4;
      func_0x00010c09dc00(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010695a170(puVar4,puVar9,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      goto LAB_10695b64c;
    }
  }
  puVar7 = puVar6;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010be2e400(param_1);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puStack_348);
  _objc_release(puVar4);
LAB_10695b848:
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(puVar3 + 0x50);
    _objc_destroyWeak(auStack_f0);
    __Unwind_Resume();
    uVar10 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar10);
    param_3 = param_3 + 0x50;
    _objc_loadWeakRetained(param_3);
    func_0x00010be31760();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar10);
    return;
  }
  return;
}



/* Entry: 10695b8c8; end: 10695b923;  */

void FUN_10695b8c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31760();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10695b924; end: 10695ba9f; -[SCStoriesSnapPostCoordinator _persistSuccessfulStoryDestinations:clientId:content:spotlightShareInfo:completion:] */

void FUN_10695b924(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_8);
  _objc_opt_new(puVar2);
  func_0x00010c26f320();
  _objc_release(puVar2);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10695baa0;
  puStack_98 = &UNK_11094d590;
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uStack_90 = param_4;
  uStack_88 = param_5;
  uStack_80 = param_7;
  lStack_78 = param_2;
  uStack_70 = param_6;
  uStack_68 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar1,param_3,&puStack_b0,uVar3,param_8);
  _objc_release(param_8);
  _objc_release(uVar3);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10695baa0; end: 10695be5b;  */

void FUN_10695baa0(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined *puStack_150;
  long lStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar12 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar12);
  puVar7 = &uStack_130;
  uVar9 = (uint)auStack_f0;
  lStack_140 = lVar12;
  func_0x00010bf52a60();
  if (lStack_140 != 0) {
    lVar17 = *plStack_120;
    do {
      lVar18 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(lVar12);
        }
        puVar21 = *(undefined **)(lStack_128 + lVar18 * 8);
        puVar3 = puVar21;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar3;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar15;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010846a3a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar15);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126cf408;
        _objc_alloc();
        puVar15 = puVar21;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar15;
        func_0x00010c259680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008360();
        _objc_release(puVar4);
        _objc_release(puVar15);
        puVar15 = puVar3;
        func_0x00010bf6ece0();
        if ((int)puVar15 != 4) {
          puVar15 = *(undefined **)(param_1 + 0x28);
          _objc_retain(puVar15);
          lVar23 = *(long *)(param_1 + 0x30);
          if (lVar23 != 0) {
            cVar1 = *(char *)(*(long *)(param_1 + 0x38) + 0xd8);
            if (cVar1 == '\x01') {
              puStack_150 = puVar3;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puStack_150;
              func_0x00010c08fa60();
              if (puVar4 == (undefined *)0x0) {
                lVar23 = *(long *)(param_1 + 0x30);
                goto LAB_10695bc7c;
              }
              puVar4 = puVar3;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
LAB_10695bcbc:
              _objc_release(puStack_150);
            }
            else {
LAB_10695bc7c:
              uVar13 = *(undefined8 *)(param_1 + 0x40);
              func_0x00010c09dc00(uVar13);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar5;
              FUN_10695ab9c(puVar5,lVar23,uVar13,*(undefined8 *)(param_1 + 0x28));
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar13);
              if (cVar1 != '\0') goto LAB_10695bcbc;
            }
            puVar6 = puVar4;
            func_0x00010c08fa60();
            if (puVar6 != (undefined *)0x0) {
              _objc_retain(puVar4);
              _objc_release(puVar15);
              puVar15 = puVar4;
            }
            _objc_release(puVar4);
          }
          uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78);
          func_0x00010c261c60();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar21;
          func_0x00010c15f5a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bedbf40(uVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(puVar21);
          puVar4 = puVar3;
          func_0x00010bf6ece0();
          if ((int)puVar4 - 1U < 3) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(puVar15);
        }
        _objc_release(puVar3);
        _objc_release(puVar5);
        lVar18 = lVar18 + 1;
      } while (lStack_140 != lVar18);
      puVar7 = &uStack_130;
      uVar9 = (uint)auStack_f0;
      lStack_140 = lVar12;
      func_0x00010bf52a60();
    } while (lStack_140 != 0);
  }
  _objc_release(lVar12);
  puVar22 = puVar2;
  func_0x00010bf529e0();
  if (puVar22 != (undefined8 *)0x0) {
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb0);
    puVar7 = puVar2;
    func_0x0001084da758(*(undefined8 *)(param_1 + 0x48),param_2,uVar13);
    _objc_release(uVar13);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  puVar2 = puVar7;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  ppuVar16 = &PTR____CFConstantStringClassReference_110e65c18;
  if (puVar2 != (undefined8 *)0x0) {
    uVar11 = 0;
    uVar14 = 0;
    do {
      puVar22 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar7);
        }
        uVar19 = *(undefined8 *)((long)puVar22 * 8);
        puVar3 = PTR_PTR_1126cf408;
        _objc_alloc();
        func_0x00010c259cc0(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar19;
        func_0x00010c259680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008360();
        _objc_release(uVar13);
        _objc_release(uVar19);
        puVar15 = puVar3;
        func_0x00010c0ee2a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar15;
        FUN_106956248();
        _objc_release(puVar15);
        uVar11 = (uint)puVar4 ^ 1 | uVar11;
        uVar14 = (uint)puVar4 | uVar14;
        _objc_release(puVar3);
        puVar22 = (undefined8 *)((long)puVar22 + 1);
      } while (puVar2 != puVar22);
      puVar2 = puVar7;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e65bf8;
    if ((uVar14 & 1) == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e65c18;
    }
    ppuVar16 = &PTR____CFConstantStringClassReference_110e65bd8;
    if ((uVar14 & 1 & uVar11) == 0) {
      ppuVar16 = ppuVar8;
    }
  }
  _objc_retain(ppuVar16);
  _objc_retain(puVar7);
  puVar2 = puVar7;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar2 != (undefined8 *)0x0) {
    puVar22 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar7);
      }
      lVar20 = *(long *)((long)puVar22 * 8);
      puVar3 = PTR_PTR_1126cf408;
      _objc_alloc();
      lVar18 = lVar20;
      func_0x00010c259cc0(lVar20);
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar18;
      func_0x00010c259680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360();
      _objc_release(lVar23);
      _objc_release(lVar18);
      puVar15 = puVar3;
      func_0x00010c0ee2a0();
      _objc_retainAutoreleasedReturnValue();
      FUN_106956248();
      _objc_release(puVar15);
      lVar18 = lVar20;
      func_0x00010c13ca20();
      if (((lVar18 != 0) && (lVar18 = lVar20, func_0x00010c13ca20(), lVar18 != 1)) &&
         (func_0x00010c13ca20(), lVar20 != 2)) {
        func_0x00010c13ca20();
      }
      func_0x00010c0a4280(*(undefined8 *)(param_2 + 0xb0));
      _objc_release(puVar3);
      puVar22 = (undefined8 *)((long)puVar22 + 1);
    } while (puVar2 != puVar22);
    puVar2 = puVar7;
    func_0x00010bf52a60();
  }
  _objc_release(puVar7);
  uVar10 = (ulong)uVar9;
  ppuVar8 = ppuVar16;
  func_0x00010c0a42a0(*(undefined8 *)(param_2 + 0xb0));
  _objc_release(ppuVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  puVar3 = PTR_PTR_1126b01c0;
  _objc_retain(uVar10);
  func_0x00010bfcf680(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  func_0x000108606910();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar13 = puVar7[0x1c];
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar15;
  func_0x00010860511c(puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar8);
  func_0x00010c15bf60(uVar13);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(uVar13);
  _objc_release(ppuVar8);
  _objc_release(ppuVar8);
  _objc_release(puVar15);
  return;
}



/* Entry: 10695be5c; end: 10695c1ef; -[SCStoriesSnapPostCoordinator _logCrossPostSendMetricsForDestinations:isPartial:] */

void FUN_10695be5c(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  ppuVar14 = &PTR____CFConstantStringClassReference_110e65c18;
  if (lVar1 != 0) {
    uVar12 = 0;
    uVar13 = 0;
    do {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar15 = *(undefined8 *)(lVar17 * 8);
        puVar2 = PTR_PTR_1126cf408;
        _objc_alloc();
        func_0x00010c259cc0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar15;
        func_0x00010c259680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008360();
        _objc_release(uVar8);
        _objc_release(uVar15);
        puVar3 = puVar2;
        func_0x00010c0ee2a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        FUN_106956248();
        _objc_release(puVar3);
        uVar12 = (uint)puVar4 ^ 1 | uVar12;
        uVar13 = (uint)puVar4 | uVar13;
        _objc_release(puVar2);
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    ppuVar9 = &PTR____CFConstantStringClassReference_110e65bf8;
    if ((uVar13 & 1) == 0) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110e65c18;
    }
    ppuVar14 = &PTR____CFConstantStringClassReference_110e65bd8;
    if ((uVar13 & 1 & uVar12) == 0) {
      ppuVar14 = ppuVar9;
    }
  }
  _objc_retain(ppuVar14);
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar16 = *(long *)(lVar17 * 8);
      puVar2 = PTR_PTR_1126cf408;
      _objc_alloc();
      lVar6 = lVar16;
      func_0x00010c259cc0(lVar16);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c259680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360();
      _objc_release(lVar7);
      _objc_release(lVar6);
      puVar3 = puVar2;
      func_0x00010c0ee2a0();
      _objc_retainAutoreleasedReturnValue();
      FUN_106956248();
      _objc_release(puVar3);
      lVar6 = lVar16;
      func_0x00010c13ca20();
      if (((lVar6 != 0) && (lVar6 = lVar16, func_0x00010c13ca20(), lVar6 != 1)) &&
         (func_0x00010c13ca20(), lVar16 != 2)) {
        func_0x00010c13ca20();
      }
      func_0x00010c0a4280(*(undefined8 *)(param_1 + 0xb0));
      _objc_release(puVar2);
      lVar17 = lVar17 + 1;
    } while (lVar5 != lVar17);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar10 = (ulong)param_4;
  ppuVar9 = ppuVar14;
  func_0x00010c0a42a0(*(undefined8 *)(param_1 + 0xb0));
  _objc_release(ppuVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  puVar2 = PTR_PTR_1126b01c0;
  _objc_retain(uVar10);
  func_0x00010bfcf680(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108606910();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar8 = *(undefined8 *)(param_3 + 0xe0);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010860511c(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar9);
  func_0x00010c15bf60(uVar8);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(ppuVar9);
  _objc_release(ppuVar9);
  _objc_release(puVar3);
  return;
}



/* Entry: 10695c1f0; end: 10695c337; -[SCStoriesSnapPostCoordinator _sendGroupStoryShareToOwningGroupConversationId:storySnapId:mediaType:] */

void FUN_10695c1f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b01c0;
  _objc_retain(param_4);
  func_0x00010bfcf680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000108606910();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010860511c(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c15bf60(uVar3);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10695c338; end: 10695c33b;  */

void FUN_10695c338(void)

{
  return;
}



/* Entry: 10695c33c; end: 10695d0eb; -[SCStoriesSnapPostCoordinator _handleSuccessfulStoryDestinations:clientId:taskQueueId:content:spotlightShareInfo:suppressLegacyPostingToast:] */

void FUN_10695c33c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  char cVar1;
  undefined1 *puVar2;
  long *plVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long *plVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long *plVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  undefined **ppuVar30;
  undefined1 **ppuVar31;
  undefined1 *puVar32;
  ulong uVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined *unaff_x22;
  undefined *puVar37;
  long lVar38;
  long lVar39;
  undefined *puVar40;
  undefined *unaff_x23;
  undefined *puVar41;
  undefined1 *puVar42;
  undefined *puVar43;
  long lVar44;
  undefined1 *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  long *plVar48;
  undefined *unaff_x26;
  double dVar49;
  double dVar50;
  undefined **ppuStack_968;
  undefined **ppuStack_918;
  undefined1 *puStack_8f0;
  undefined *puStack_8e0;
  undefined8 uStack_8d0;
  undefined *puStack_8c8;
  undefined1 auStack_7c0 [8];
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  long lStack_7a8;
  long *plStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  long *plStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined *puStack_728;
  undefined8 uStack_720;
  code *pcStack_718;
  undefined *puStack_710;
  undefined **ppuStack_708;
  long lStack_700;
  undefined1 auStack_6f8 [8];
  undefined8 uStack_6f0;
  undefined1 auStack_6e8 [8];
  undefined8 uStack_6e0;
  long lStack_6d8;
  long *plStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined *puStack_5a0;
  undefined1 *puStack_518;
  long lStack_510;
  undefined1 *puStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined *puStack_470;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_448 [128];
  long lStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  ulong uStack_358;
  undefined *puStack_350;
  undefined1 uStack_348;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  ulong uStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar37 = param_3;
  puVar47 = param_6;
  puVar41 = param_7;
  puVar5 = param_8;
  lStack_2d0 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_2d8 = param_7;
  _objc_retain(param_7);
  puVar34 = param_3;
  func_0x00010bf529e0();
  if (puVar34 != (undefined *)0x0) {
    uStack_33c = SUB84(param_8,0);
    puVar34 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    uStack_338 = param_5;
    _objc_opt_new();
    puVar37 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar47 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_308 = puVar37;
    _objc_opt_new();
    puVar37 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    puStack_220 = (undefined8 *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    puStack_2c8 = puVar37;
    _objc_retain(param_3);
    puVar37 = param_3;
    func_0x00010bf52a60();
    puVar41 = (undefined *)0x0;
    puStack_330 = param_3;
    puStack_320 = puVar34;
    puStack_318 = param_6;
    puStack_2f0 = puVar47;
    puStack_2e0 = param_4;
    if (puVar37 == (undefined *)0x0) {
      uStack_310 = 0xffffffffffffffff;
    }
    else {
      puStack_2f8 = (undefined *)*puStack_220;
      uStack_310 = 0xffffffffffffffff;
      puStack_2e8 = puVar37;
      do {
        puVar37 = (undefined *)0x0;
        do {
          puStack_2c0 = puVar41;
          if ((undefined *)*puStack_220 != puStack_2f8) {
            _objc_enumerationMutation(param_3);
          }
          puVar35 = *(undefined **)(lStack_228 + (long)puVar37 * 8);
          puVar47 = puVar35;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          puVar41 = puVar47;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar41;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          puVar43 = puVar5;
          func_0x00010846a3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar41);
          _objc_release(puVar47);
          puVar47 = puVar35;
          func_0x00010c261c60(puVar35);
          _objc_retainAutoreleasedReturnValue();
          puVar41 = puVar47;
          func_0x00010c15f5a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_2f0);
          _objc_release(puVar41);
          _objc_release(puVar47);
          puVar47 = PTR_PTR_1126cf408;
          _objc_alloc();
          puVar41 = puVar35;
          func_0x00010c259cc0(puVar35);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar41;
          func_0x00010c259680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c008360();
          _objc_release(puVar5);
          _objc_release(puVar41);
          func_0x00010c1d0640(puStack_2c8);
          puVar41 = puVar35;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar41;
          func_0x00010c25b720();
          _objc_release(puVar41);
          if (puVar5 == (undefined *)0xc) {
            func_0x00010befa120(puStack_308);
          }
          puVar41 = puVar47;
          func_0x00010bf6ece0();
          puStack_2b8 = puVar47;
          if ((int)puVar41 == 4) {
            puVar41 = param_6;
            func_0x00010c12a260();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar41;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            if (puVar5 == (undefined *)0x0) {
              func_0x00010c261c60();
              _objc_retainAutoreleasedReturnValue();
              puVar47 = puVar35;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar35);
            }
            else {
              _objc_retain(puVar5);
              puVar47 = puVar5;
            }
            _objc_release(puVar5);
            _objc_release(puVar41);
            puVar41 = puVar47;
            func_0x00010c0c6260();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar41;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            puVar35 = puVar5;
            func_0x00010c0c6c20();
            _objc_release(puVar5);
            _objc_release(puVar41);
            if (puVar35 == (undefined *)0x3) {
              uStack_310 = 1;
              puVar41 = puStack_2c0;
              param_4 = puStack_2e0;
              uVar33 = uStack_310;
            }
            else {
              puVar41 = puVar47;
              func_0x00010c0c6260();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar41;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              puVar35 = puVar5;
              func_0x00010c0c6c20();
              _objc_release(puVar5);
              _objc_release(puVar41);
              puVar41 = puStack_2c0;
              param_4 = puStack_2e0;
              uVar33 = 2;
              if (puVar35 != (undefined *)0x9) {
                uVar33 = uStack_310;
              }
            }
          }
          else {
            _objc_retain(param_4);
            puVar41 = puStack_2b8;
            puVar47 = param_4;
            if (puStack_2d8 != (undefined *)0x0) {
              cVar1 = *(char *)(lStack_2d0 + 0xd8);
              if (cVar1 == '\x01') {
                puVar5 = puStack_2b8;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                puStack_328 = puVar5;
                func_0x00010c08fa60();
                if (puVar5 == (undefined *)0x0) goto LAB_10695c67c;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(param_4);
LAB_10695c6c4:
                _objc_release(puStack_328);
              }
              else {
LAB_10695c67c:
                puVar5 = param_6;
                func_0x00010c09dc00(param_6);
                _objc_retainAutoreleasedReturnValue();
                puVar41 = puVar43;
                FUN_10695ab9c(puVar43,puStack_2d8,puVar5,param_4);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(param_4);
                _objc_release(puVar5);
                if (cVar1 != '\0') goto LAB_10695c6c4;
              }
              puVar5 = puVar41;
              func_0x00010c08fa60();
              if (puVar5 != (undefined *)0x0) {
                puVar47 = puVar41;
              }
              _objc_retain(puVar47);
              _objc_release(puVar41);
            }
            uVar6 = *(ulong *)(lStack_2d0 + 0x78);
            puStack_300 = puVar43;
            func_0x00010bfa94a0();
            _objc_retainAutoreleasedReturnValue();
            uVar33 = uVar6;
            func_0x00010c25b340();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar33;
            func_0x00010bf529e0();
            _objc_release(uVar33);
            puVar41 = puStack_2c0;
            if (uVar7 != 0) {
              uVar33 = 0;
              do {
                uVar7 = uVar6;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar7;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar7);
                uVar7 = uVar8;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar7;
                func_0x000108ea5f00();
                _objc_retainAutoreleasedReturnValue();
                puVar34 = puVar47;
                func_0x000108ea5f00(puVar47);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar9;
                func_0x00010c0720c0();
                _objc_release(puVar34);
                _objc_release(uVar9);
                _objc_release(uVar7);
                if ((int)uVar10 != 0) {
                  func_0x00010c261c60();
                  _objc_retainAutoreleasedReturnValue();
                  puVar41 = puVar35;
                  func_0x00010c15f5a0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puStack_2c0);
                  _objc_release(puVar35);
                  uVar33 = uVar8;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = uVar33;
                  func_0x00010c27dd80();
                  func_0x0001084f2c4c();
                  uStack_310 = uVar7;
                  _objc_release(uVar33);
                  _objc_release(uVar8);
                  param_3 = puStack_330;
                  param_4 = puStack_2e0;
                  param_6 = puStack_318;
                  puVar34 = puStack_320;
                  break;
                }
                _objc_release(uVar8);
                uVar33 = uVar33 + 1;
                uVar7 = uVar6;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar7;
                func_0x00010bf529e0();
                _objc_release(uVar7);
                puVar41 = puStack_2c0;
                param_3 = puStack_330;
                param_4 = puStack_2e0;
                param_6 = puStack_318;
                puVar34 = puStack_320;
              } while (uVar33 < uVar8);
            }
            _objc_release(uVar6);
            puVar43 = puStack_300;
            uVar33 = uStack_310;
          }
          uStack_310 = uVar33;
          _objc_release(puVar47);
          puVar47 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar34);
          _objc_release(puVar47);
          _objc_release(puStack_2b8);
          _objc_release(puVar43);
          puVar37 = puVar37 + 1;
        } while (puVar37 != puStack_2e8);
        puVar37 = param_3;
        func_0x00010bf52a60();
        puStack_2e8 = puVar37;
      } while (puVar37 != (undefined *)0x0);
    }
    puStack_2e8 = (undefined *)0x0;
    puStack_2c0 = puVar41;
    _objc_release(param_3);
    puVar43 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar37 = puStack_2c8;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar47 = puVar37;
    func_0x00010bf52a60();
    unaff_x22 = puStack_308;
    if (puVar47 != (undefined *)0x0) {
      lVar38 = *plStack_260;
      do {
        puVar41 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar38) {
            _objc_enumerationMutation(puVar37);
          }
          uVar36 = *(undefined8 *)(lStack_268 + (long)puVar41 * 8);
          uVar13 = uVar36;
          func_0x00010bf6ece0();
          if ((int)uVar13 == 4) {
            func_0x00010c242960(uVar36);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar43);
            _objc_release(uVar36);
          }
          puVar41 = puVar41 + 1;
        } while (puVar47 != puVar41);
        puVar47 = puVar37;
        func_0x00010bf52a60();
      } while (puVar47 != (undefined *)0x0);
    }
    _objc_release(puVar37);
    lVar38 = lStack_2d0;
    uVar36 = *(undefined8 *)(lStack_2d0 + 0x98);
    func_0x00010c269d40(uVar36);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar38 + 0x48);
    func_0x00010c0e00e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010c11ee60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puStack_2f0;
    func_0x00010bf78500(uVar36);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(uVar36);
    puVar37 = puStack_2c8;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    _objc_retain(puStack_2c8);
    puVar47 = puVar37;
    func_0x00010bf52a60();
    puStack_2b8 = puVar47;
    if (puVar47 != (undefined *)0x0) {
      puStack_2e8 = (undefined *)*plStack_2a0;
      puStack_2f8 = puVar43;
      do {
        puVar47 = (undefined *)0x0;
        do {
          if ((undefined *)*plStack_2a0 != puStack_2e8) {
            _objc_enumerationMutation(puVar37);
          }
          puVar41 = puVar37;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar43;
          func_0x00010bf529e0();
          if ((puVar5 == (undefined *)0x0) ||
             (puVar5 = puVar41, func_0x00010bf6ece0(), (int)puVar5 != 1)) {
            puVar37 = unaff_x23;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar37 != (undefined *)0x0) {
              puVar34 = puVar41;
              func_0x00010bf6ece0();
              puVar5 = puVar41;
              if ((int)puVar34 == 4) {
                puVar43 = puVar41;
                func_0x00010c242960();
                _objc_retainAutoreleasedReturnValue();
                puVar34 = puVar43;
                func_0x00010bfd4d80();
                if ((int)puVar34 == 0) {
                  puVar34 = (undefined *)0x0;
                }
                else {
                  puVar35 = puVar41;
                  func_0x00010c242960(puVar41);
                  _objc_retainAutoreleasedReturnValue();
                  puVar40 = puVar35;
                  func_0x00010bf24ec0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar34 = puVar40;
                  func_0x000108f579f0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar40);
                  _objc_release(puVar35);
                }
                _objc_release(puVar43);
                puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c242960(puVar41);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25b820();
                func_0x00010c0df760(puVar43);
                _objc_retainAutoreleasedReturnValue();
LAB_10695cd88:
                _objc_release(puVar5);
              }
              else {
                puVar34 = puVar41;
                func_0x00010bf6ece0();
                if ((int)puVar34 == 3) {
                  func_0x00010c0ee2a0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar34 = puVar5;
                  func_0x00010bfd4d80();
                  if ((int)puVar34 == 0) {
                    puVar34 = (undefined *)0x0;
                  }
                  else {
                    puVar43 = puVar41;
                    func_0x00010c0ee2a0(puVar41);
                    _objc_retainAutoreleasedReturnValue();
                    puVar35 = puVar43;
                    func_0x00010bf24ec0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar34 = puVar35;
                    func_0x000108f579f0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar35);
                    _objc_release(puVar43);
                  }
                  puVar43 = (undefined *)0x0;
                  goto LAB_10695cd88;
                }
                puVar34 = (undefined *)0x0;
                puVar43 = (undefined *)0x0;
              }
              puVar5 = puStack_2e0;
              if (puStack_2d8 == (undefined *)0x0) {
                _objc_retain(puStack_2e0);
              }
              else {
                puVar35 = puVar41;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                puVar40 = puVar35;
                func_0x00010c08fa60();
                puVar5 = puStack_2e0;
                if (puVar40 == (undefined *)0x0) {
                  _objc_retain(puStack_2e0);
                }
                else {
                  puVar5 = puVar41;
                  func_0x00010bf3cf60(puVar41);
                  _objc_retainAutoreleasedReturnValue();
                }
                _objc_release(puVar35);
              }
              lVar38 = lStack_2d0 + 0x130;
              _objc_loadWeakRetained(lVar38);
              _objc_retain(puVar41);
              puVar35 = puVar41;
              func_0x00010bf6ece0();
              if ((2 < (int)puVar35) && ((int)puVar35 == 3)) {
                puVar35 = puVar41;
                func_0x00010c0ee2a0();
                _objc_retainAutoreleasedReturnValue();
                puVar40 = puVar35;
                FUN_106956248();
                _objc_release(puVar35);
                if (((ulong)puVar40 & 1) == 0) {
                  puVar35 = puVar41;
                  func_0x00010c0ee2a0();
                  _objc_retainAutoreleasedReturnValue();
                  FUN_106961e98();
                  _objc_release(puVar35);
                }
              }
              _objc_release(puVar41);
              func_0x00010c1056c0(lVar38);
              _objc_release(lVar38);
              _objc_release(puVar5);
              _objc_release(puVar43);
              _objc_release(puVar34);
              unaff_x22 = puStack_308;
              puVar43 = puStack_2f8;
              param_6 = puStack_318;
              puVar34 = puStack_320;
            }
            _objc_release(puVar37);
            puVar37 = puStack_2c8;
          }
          _objc_release(puVar41);
          puVar47 = puVar47 + 1;
        } while (puStack_2b8 != puVar47);
        puVar47 = puVar37;
        func_0x00010bf52a60();
        puStack_2b8 = puVar47;
      } while (puVar47 != (undefined *)0x0);
    }
    _objc_release(puVar37);
    param_7 = param_6;
    func_0x00010c0fe1c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b8 = param_7;
    func_0x00010bf0d920();
    _objc_retainAutoreleasedReturnValue();
    param_8 = param_7;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = puStack_2c0;
    param_4 = puStack_2e0;
    puVar47 = param_6;
    puVar41 = unaff_x23;
    puVar5 = puVar34;
    puStack_370 = puVar37;
    puStack_368 = unaff_x22;
    puStack_360 = puVar43;
    if (param_8 == (undefined *)0x0) {
      uVar13 = uStack_338;
      func_0x00010c272380(uStack_338);
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = puStack_2c0;
      param_4 = puStack_2e0;
      uStack_348 = (undefined1)uStack_33c;
      uStack_358 = uStack_310;
      puStack_350 = puStack_2d8;
      puVar37 = puStack_2e0;
      func_0x00010be2e420(lStack_2d0);
      _objc_release(uVar13);
    }
    else {
      uStack_348 = (undefined1)uStack_33c;
      uStack_358 = uStack_310;
      puStack_350 = puStack_2d8;
      puVar37 = puStack_2e0;
      func_0x00010be2e420(lStack_2d0);
    }
    param_3 = puStack_330;
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(puStack_2b8);
    _objc_release(puVar43);
    _objc_release(puStack_2c8);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar34);
    _objc_release(unaff_x26);
    param_5 = uStack_338;
  }
  _objc_release(puStack_2d8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar34 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar31 = &puStack_490;
  pcStack_378 = FUN_10695d0ec;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3c0 = unaff_x26;
  puStack_3b8 = param_4;
  puStack_3b0 = param_3;
  puStack_3a8 = unaff_x23;
  puStack_3a0 = unaff_x22;
  puStack_398 = param_8;
  puStack_390 = param_7;
  uStack_388 = param_5;
  puStack_380 = &stack0xfffffffffffffff0;
  _objc_retain(puVar37);
  dVar49 = 0.0;
  lStack_488 = 0;
  puStack_490 = (undefined1 *)0x0;
  uStack_478 = 0;
  plStack_480 = (long *)0x0;
  uStack_468 = 0;
  puStack_470 = (undefined *)0x0;
  uStack_458 = 0;
  uStack_460 = 0;
  puVar32 = auStack_448;
  lVar38 = 0x10;
  puVar43 = puVar37;
  func_0x00010bf52a60();
  if (puVar43 != (undefined *)0x0) {
    lVar44 = *plStack_480;
    do {
      puVar35 = (undefined *)0x0;
      do {
        if (*plStack_480 != lVar44) {
          _objc_enumerationMutation(puVar37);
        }
        lVar39 = *(long *)(lStack_488 + (long)puVar35 * 8);
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        lVar38 = lVar39;
        func_0x00010c08fa60();
        if (lVar38 != 0) {
          func_0x00010c12d3e0(*(undefined8 *)(puVar34 + 0x20));
          func_0x00010c12d3e0(*(undefined8 *)(puVar34 + 0x28));
          func_0x00010c12d3e0(*(undefined8 *)(puVar34 + 0x60));
        }
        func_0x00010c12d3e0(*(undefined8 *)(puVar34 + 0x48));
        func_0x00010c12d3e0(*(undefined8 *)(puVar34 + 0x58));
        _objc_release(lVar39);
        puVar35 = puVar35 + 1;
      } while (puVar43 != puVar35);
      puVar32 = auStack_448;
      lVar38 = 0x10;
      puVar43 = puVar37;
      ppuVar31 = &puStack_490;
      func_0x00010bf52a60();
    } while (puVar43 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  puVar34 = puStack_470;
  plVar3 = plStack_480;
  lVar44 = lStack_488;
  puVar2 = puStack_490;
  lStack_510 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar31);
  _objc_retain(puVar32);
  _objc_retain(lVar38);
  _objc_retain(puVar47);
  _objc_retain(puVar41);
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  _objc_retain(lVar44);
  _objc_retain(plVar3);
  _objc_retain(puVar34);
  if (puVar34 == (undefined *)0x0) {
    puVar43 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_518 = (undefined1 *)ppuVar31;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar35 = puVar47;
    func_0x00010c09dc00(puVar47);
    _objc_retainAutoreleasedReturnValue();
    puVar43 = puVar34;
    func_0x00010695a170(puVar34,puVar35,ppuVar31);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar35);
  }
  func_0x00010be76400();
  ppuVar12 = *(undefined ***)(puVar37 + 0x48);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar37 + 0x58);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde00e0(puVar37);
  puVar35 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar50 = *(double *)(puVar37 + 0xf8);
  _objc_release(puVar35);
  if ((uStack_468 & 1) == 0) {
    ppuVar14 = ppuVar12;
    func_0x00010c23a7e0();
    dVar49 = dVar49 - dVar50;
    iVar4 = 0;
    if (2.0 < dVar49) {
      iVar4 = (int)ppuVar14;
    }
    if (iVar4 == 1) {
      func_0x000100162d98("APPSTORE",&PTR___NSConcreteGlobalBlock_11094d5c0);
      puVar35 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(double *)(puVar37 + 0xf8) = dVar49;
      _objc_release(puVar35);
    }
  }
  ppuVar14 = ppuVar12;
  func_0x00010c0ca740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar12;
  func_0x00010c27b4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar14);
  ppuVar16 = ppuVar15;
  func_0x00010bf529e0();
  ppuStack_968 = ppuVar14;
  if (ppuVar16 != (undefined **)0x0) {
    iVar4 = (int)*(undefined8 *)(puVar37 + 0xd0);
    func_0x00010bf1f440();
    if (iVar4 != 0) {
      ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x00010c0ecd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      ppuStack_968 = ppuVar16;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar14);
      _objc_release(ppuVar16);
    }
  }
  puVar35 = puVar41;
  func_0x00010bf529e0();
  uVar36 = uStack_478;
  puVar40 = puVar47;
  if (puVar35 == (undefined *)0x0) goto LAB_10695d5c8;
  ppuVar16 = ppuVar12;
  func_0x00010c0ca7a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar16;
  func_0x00010bf529e0();
  if (ppuVar17 == (undefined **)0x0) {
    ppuVar17 = ppuStack_968;
    func_0x00010bf529e0();
    _objc_release(ppuVar16);
    if (ppuVar17 == (undefined **)0x0) goto LAB_10695d5c8;
  }
  else {
    _objc_release(ppuVar16);
  }
  if (lVar38 == 0) {
    plVar22 = plVar3;
    func_0x00010bf529e0();
    if (plVar22 == (long *)0x0) goto LAB_10695d5c8;
    plVar22 = plVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    plVar18 = plVar22;
    func_0x00010bfd4d80();
    _objc_release(plVar22);
    if ((int)plVar18 == 0) goto LAB_10695d5c8;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    lStack_6d8 = 0;
    uStack_6e0 = 0;
    uStack_6c8 = 0;
    plStack_6d0 = (long *)0x0;
    _objc_retain(plVar3);
    plVar22 = plVar3;
    func_0x00010bf52a60();
    plVar18 = plVar3;
    if (plVar22 != (long *)0x0) {
      lVar39 = *plStack_6d0;
      do {
        plVar48 = (long *)0x0;
        do {
          if (*plStack_6d0 != lVar39) {
            _objc_enumerationMutation(plVar3);
          }
          puVar40 = *(undefined **)(lStack_6d8 + (long)plVar48 * 8);
          uVar11 = *(undefined8 *)(puVar37 + 0x88);
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar35 = puVar40;
          func_0x00010bf24ec0(puVar40);
          _objc_retainAutoreleasedReturnValue();
          puVar46 = puVar35;
          func_0x000108f579f0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25b820(puVar40);
          func_0x00010c0dd5e0(uVar11);
          _objc_release(puVar46);
          _objc_release(puVar35);
          _objc_release(uVar11);
          plVar48 = (long *)((long)plVar48 + 1);
        } while (plVar22 != plVar48);
        plVar22 = plVar3;
        func_0x00010bf52a60();
      } while (plVar22 != (long *)0x0);
    }
  }
  else {
    plVar18 = *(long **)(puVar37 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dd5e0();
  }
  _objc_release(plVar18);
LAB_10695d5c8:
  plVar22 = plVar3;
  func_0x00010bf529e0();
  if (plVar22 == (long *)0x0) {
    ppuStack_918 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuStack_918 = ppuVar12;
    func_0x00010c134520();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar16 = ppuVar12;
  func_0x00010c22b440(ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc82c0(puVar37);
  _objc_release(ppuVar16);
  if (puVar47 != (undefined *)0x0) {
    puVar35 = puVar47;
    FUN_1069547f4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    puVar46 = puVar47;
    func_0x00010c0fe1c0(puVar47);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar46;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeea60();
    _objc_release(puVar19);
    _objc_release(puVar46);
    func_0x00010c1ec620(ppuVar16);
    ppuVar17 = ppuVar16;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar35 != (undefined *)0x0) && (ppuVar17 != (undefined **)0x0)) {
      ppuVar20 = ppuVar12;
      func_0x00010c11ee60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar20;
      func_0x00010c08fa60();
      if (ppuVar21 == (undefined **)0x0) {
        _objc_release(ppuVar20);
      }
      else {
        plVar22 = plVar3;
        func_0x00010bf529e0();
        _objc_release(ppuVar20);
        if (plVar22 == (long *)0x0) {
          _objc_initWeak(auStack_6e8,puVar37);
          puVar40 = PTR_PTR_1126b01c0;
          ppuVar20 = ppuVar12;
          func_0x00010c11ee60(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c294260();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar20);
          uVar11 = *(undefined8 *)(puVar37 + 0xf0);
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar46 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_5a0 = puVar40;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(PTR___dispatch_main_q_11034be20);
          puStack_728 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_720 = 0xc2000000;
          pcStack_718 = FUN_10695e46c;
          puStack_710 = &UNK_110858fb0;
          _objc_copyWeak(auStack_6f8,auStack_6e8);
          _objc_retain(ppuVar12);
          ppuStack_708 = ppuVar12;
          _objc_retain(lVar38);
          uStack_6f0 = uVar36;
          lStack_700 = lVar38;
          func_0x00010bf504e0(uVar11);
          _objc_release(PTR___dispatch_main_q_11034be20);
          _objc_release(puVar46);
          _objc_release(uVar11);
          _objc_release(lStack_700);
          _objc_release(ppuStack_708);
          _objc_destroyWeak(auStack_6f8);
          _objc_release(puVar40);
          _objc_destroyWeak(auStack_6e8);
        }
      }
      uStack_748 = 0;
      uStack_750 = 0;
      uStack_738 = 0;
      uStack_740 = 0;
      uStack_768 = 0;
      uStack_770 = 0;
      uStack_758 = 0;
      plStack_760 = (long *)0x0;
      _objc_retain(puVar2);
      puVar42 = puVar2;
      func_0x00010bf52a60();
      if (puVar42 == (undefined1 *)0x0) {
        puStack_8e0 = (undefined *)0x0;
        puVar40 = (undefined *)0x0;
      }
      else {
        puStack_8e0 = (undefined *)0x0;
        puVar40 = (undefined *)0x0;
        lVar39 = *plStack_760;
        do {
          puVar45 = (undefined1 *)0x0;
          do {
            if (*plStack_760 != lVar39) {
              _objc_enumerationMutation(puVar2);
            }
            puVar23 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar24 = puVar23;
            func_0x00010bf6ece0();
            if ((int)puVar24 == 1) {
              puVar46 = puVar41;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puStack_8e0);
              puStack_8e0 = puVar46;
            }
            puVar24 = puVar23;
            func_0x00010bf6ece0();
            _objc_release(puVar23);
            puVar40 = (undefined *)(ulong)((uint)((int)puVar24 == 4) | (uint)puVar40);
            puVar45 = puVar45 + 1;
          } while (puVar42 != puVar45);
          puVar42 = puVar2;
          func_0x00010bf52a60();
        } while (puVar42 != (undefined1 *)0x0);
      }
      _objc_release(puVar2);
      uStack_788 = 0;
      uStack_790 = 0;
      uStack_778 = 0;
      uStack_780 = 0;
      lStack_7a8 = 0;
      uStack_7b0 = 0;
      uStack_798 = 0;
      plStack_7a0 = (long *)0x0;
      _objc_retain(puVar2);
      puStack_8f0 = puVar2;
      func_0x00010bf52a60();
      if (puStack_8f0 != (undefined1 *)0x0) {
        lVar39 = *plStack_7a0;
        do {
          puVar42 = (undefined1 *)0x0;
          do {
            if (*plStack_7a0 != lVar39) {
              _objc_enumerationMutation(puVar2);
            }
            puVar46 = *(undefined **)(lStack_7a8 + (long)puVar42 * 8);
            puVar45 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = (undefined1 *)ppuVar31;
            if (puVar34 == (undefined *)0x0) {
              _objc_retain(puVar35);
              _objc_retain(ppuVar31);
              puVar19 = puVar35;
            }
            else {
              puVar19 = puVar46;
              func_0x00010695af50(puVar46,puVar34,puVar47);
              _objc_retainAutoreleasedReturnValue();
              puVar24 = puVar45;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              puVar25 = puVar24;
              func_0x00010c08fa60();
              if (puVar25 == (undefined1 *)0x0) {
                _objc_retain(ppuVar31);
              }
              else {
                puVar23 = puVar45;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(puVar24);
            }
            puVar24 = puVar45;
            func_0x00010bf6ece0();
            if (((uint)((int)puVar24 == 1) & (uint)puVar40) == 0) {
              puVar24 = puVar45;
              func_0x00010bf6ece0();
              if ((int)puVar24 == 4) {
                _objc_retain(puStack_8e0);
                puStack_8c8 = puStack_8e0;
              }
              else {
                puStack_8c8 = (undefined *)0x0;
              }
              puVar24 = puVar45;
              func_0x00010bf6ece0();
              if ((int)puVar24 == 2) {
                uVar11 = *(undefined8 *)(puVar37 + 0x70);
                func_0x0001084dc184(uVar11,puVar46);
                _objc_retainAutoreleasedReturnValue();
                uStack_8d0 = uVar11;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar11);
              }
              else {
                uStack_8d0 = 0;
              }
              lVar26 = lVar44;
              func_0x00010bf4b900();
              if ((int)lVar26 != 0) {
                puVar46 = puVar41;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar27 = puVar46;
                func_0x00010c08fa60();
                _objc_release(puVar46);
                if (puVar27 != (undefined *)0x0) {
                  puVar46 = puVar41;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_initWeak(auStack_6e8,puVar37);
                  uVar11 = *(undefined8 *)(puVar37 + 0x68);
                  _objc_copyWeak(auStack_7c0,auStack_6e8);
                  _objc_retain(puVar46);
                  uStack_7b8 = uVar36;
                  func_0x00010c0f7fe0(0x4000000000000000,uVar11);
                  _objc_release(puVar46);
                  _objc_destroyWeak(auStack_7c0);
                  _objc_destroyWeak(auStack_6e8);
                  _objc_release(puVar46);
                }
              }
              puVar46 = puVar47;
              func_0x00010bfeba20();
              _objc_retainAutoreleasedReturnValue();
              puVar27 = puVar46;
              FUN_1069560d4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar46);
              puVar24 = puVar45;
              func_0x00010bf6ece0();
              if ((int)puVar24 == 1) {
                uVar11 = *(undefined8 *)(puVar37 + 0x108);
                func_0x00010c269d40(uVar11);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25aac0();
                func_0x00010bdfb2c0(puVar37);
                puVar24 = puVar45;
                func_0x00010c0d4ba0(puVar45);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1e34a0();
                _objc_release(puVar24);
                _objc_release(uVar11);
              }
              ppuVar20 = ppuVar14;
              func_0x00010bf529e0();
              if ((ppuVar20 == (undefined **)0x0) &&
                 (ppuVar20 = ppuStack_918, func_0x00010c08fa60(), ppuVar20 == (undefined **)0x0)) {
                ppuVar20 = ppuVar15;
                func_0x00010bf529e0();
                if (ppuVar20 == (undefined **)0x0) {
                  uVar11 = *(undefined8 *)(puVar37 + 200);
                  ppuVar20 = ppuVar17;
                  func_0x00010c23f880(ppuVar17);
                  _objc_retainAutoreleasedReturnValue();
                  puVar46 = puVar41;
                  func_0x00010c0e00e0(puVar41);
                  _objc_retainAutoreleasedReturnValue();
                  puVar29 = puVar5;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c067fc0();
                  ppuVar21 = ppuVar12;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c08fa60();
                  func_0x00010bfcd380();
                  ppuVar30 = ppuVar12;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c11ee20();
                  func_0x00010c0b1140(uVar11);
                  _objc_release(ppuVar30);
                  _objc_release(ppuVar21);
                  _objc_release(puVar29);
                  _objc_release(puVar46);
                }
                else {
                  ppuVar20 = (undefined **)PTR_PTR_1126cf420;
                  _objc_alloc();
                  func_0x00010c03eaa0();
                  uVar11 = *(undefined8 *)(puVar37 + 200);
                  ppuVar21 = ppuVar17;
                  func_0x00010c23f880(ppuVar17);
                  _objc_retainAutoreleasedReturnValue();
                  puVar46 = puVar41;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar29 = puVar5;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c067fc0();
                  ppuVar30 = ppuVar12;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c08fa60();
                  func_0x00010bfcd380();
                  ppuVar28 = ppuVar12;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c11ee20();
                  func_0x00010c0b1140(uVar11);
                  _objc_release(ppuVar28);
                  _objc_release(ppuVar30);
                  _objc_release(puVar29);
                  _objc_release(puVar46);
                  _objc_release(ppuVar21);
                }
              }
              else {
                _objc_retain(ppuStack_918);
                _objc_retain(puVar19);
                _objc_retain(ppuVar17);
                _objc_retain(puVar32);
                _objc_retain(puVar23);
                _objc_retain(puVar41);
                _objc_retain(puStack_8c8);
                _objc_retain(puVar5);
                _objc_retain(puVar45);
                _objc_retain(uStack_8d0);
                _objc_retain(uVar13);
                _objc_retain(ppuVar12);
                _objc_retain(puVar27);
                func_0x00010be115c0(puVar37);
                _objc_release(puVar27);
                _objc_release(ppuVar12);
                _objc_release(uVar13);
                _objc_release(uStack_8d0);
                _objc_release(puVar45);
                _objc_release(puVar5);
                _objc_release(puStack_8c8);
                _objc_release(puVar41);
                _objc_release(puVar23);
                _objc_release(puVar32);
                _objc_release(ppuVar17);
                _objc_release(puVar19);
                ppuVar20 = ppuStack_918;
              }
              _objc_release(ppuVar20);
              _objc_release(puVar27);
              _objc_release(uStack_8d0);
              _objc_release(puStack_8c8);
            }
            _objc_release(puVar23);
            _objc_release(puVar19);
            _objc_release(puVar45);
            puVar42 = puVar42 + 1;
          } while (puStack_8f0 != puVar42);
          puStack_8f0 = puVar2;
          func_0x00010bf52a60();
        } while (puStack_8f0 != (undefined1 *)0x0);
      }
      _objc_release(puVar2);
      uVar36 = *(undefined8 *)(puVar37 + 200);
      ppuVar20 = ppuVar17;
      func_0x00010c23f880(ppuVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5120(uVar36);
      _objc_release(ppuVar20);
      _objc_release(puStack_8e0);
    }
    _objc_release(ppuVar17);
    _objc_release(ppuVar16);
    _objc_release(puVar35);
  }
  _objc_release(ppuStack_918);
  _objc_release(ppuStack_968);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(uVar13);
  _objc_release(ppuVar12);
  _objc_release(puVar43);
  _objc_release(puVar34);
  _objc_release(plVar3);
  _objc_release(lVar44);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar41);
  _objc_release(puVar47);
  _objc_release(lVar38);
  _objc_release(puVar32);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_510) {
    ___stack_chk_fail();
    _objc_destroyWeak(puVar40 + 0x30);
    _objc_destroyWeak(auStack_6e8);
    __Unwind_Resume(ppuVar31);
    ppuVar12 = &PTR____CFConstantStringClassReference_110dbbb98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
    _objc_retainAutoreleasedReturnValue();
    puVar34 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    FUN_107240204(ppuVar12,puVar34,&PTR____CFConstantStringClassReference_110e22c98);
    _objc_release(puVar34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
    return;
  }
  return;
}



/* Entry: 10695d0ec; end: 10695d243; -[SCStoriesSnapPostCoordinator _clearCompletedStoryPostStateForClientIds:] */

void FUN_10695d0ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long *plVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  ulong uVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined1 **ppuVar28;
  undefined *puVar29;
  undefined1 *puVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  ulong uVar35;
  undefined1 *puVar36;
  long lVar37;
  undefined1 *puVar38;
  ulong uVar39;
  long *plVar40;
  double dVar41;
  double dVar42;
  undefined **ppuStack_5f8;
  undefined **ppuStack_5a8;
  undefined1 *puStack_580;
  long lStack_570;
  undefined8 uStack_560;
  long lStack_558;
  undefined1 auStack_450 [8];
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  undefined **ppuStack_398;
  long lStack_390;
  undefined1 auStack_388 [8];
  undefined8 uStack_380;
  undefined1 auStack_378 [8];
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_230;
  undefined1 *puStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  ppuVar28 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar41 = 0.0;
  lStack_118 = 0;
  puStack_120 = (undefined1 *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  puStack_100 = (undefined *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar30 = auStack_d8;
  lVar31 = 0x10;
  lVar4 = param_3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar37 = *plStack_110;
    do {
      lVar31 = 0;
      do {
        if (*plStack_110 != lVar37) {
          _objc_enumerationMutation(param_3);
        }
        lVar34 = *(long *)(lStack_118 + lVar31 * 8);
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar34;
        func_0x00010c08fa60();
        if (lVar5 != 0) {
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20));
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x60));
        }
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x48));
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58));
        _objc_release(lVar34);
        lVar31 = lVar31 + 1;
      } while (lVar4 != lVar31);
      puVar30 = auStack_d8;
      lVar31 = 0x10;
      lVar4 = param_3;
      ppuVar28 = &puStack_120;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar29 = puStack_100;
  plVar2 = plStack_110;
  lVar4 = lStack_118;
  puVar1 = puStack_120;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar28);
  _objc_retain(puVar30);
  _objc_retain(lVar31);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puVar1);
  _objc_retain(lVar4);
  _objc_retain(plVar2);
  _objc_retain(puVar29);
  if (puVar29 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1a8 = (undefined1 *)ppuVar28;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar35 = param_6;
    func_0x00010c09dc00(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar29;
    func_0x00010695a170(puVar29,uVar35,ppuVar28);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar35);
  }
  func_0x00010be76400();
  ppuVar7 = *(undefined ***)(param_3 + 0x48);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + 0x58);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde00e0(param_3);
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar42 = *(double *)(param_3 + 0xf8);
  _objc_release(puVar9);
  if ((uStack_f8 & 1) == 0) {
    ppuVar10 = ppuVar7;
    func_0x00010c23a7e0();
    dVar41 = dVar41 - dVar42;
    iVar3 = 0;
    if (2.0 < dVar41) {
      iVar3 = (int)ppuVar10;
    }
    if (iVar3 == 1) {
      func_0x000100162d98("APPSTORE",&PTR___NSConcreteGlobalBlock_11094d5c0);
      puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(double *)(param_3 + 0xf8) = dVar41;
      _objc_release(puVar9);
    }
  }
  ppuVar10 = ppuVar7;
  func_0x00010c0ca740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar7;
  func_0x00010c27b4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar10);
  ppuVar12 = ppuVar11;
  func_0x00010bf529e0();
  ppuStack_5f8 = ppuVar10;
  if (ppuVar12 != (undefined **)0x0) {
    iVar3 = (int)*(undefined8 *)(param_3 + 0xd0);
    func_0x00010bf1f440();
    if (iVar3 != 0) {
      ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x00010c0ecd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      ppuStack_5f8 = ppuVar12;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      _objc_release(ppuVar12);
    }
  }
  lVar37 = param_7;
  func_0x00010bf529e0();
  uVar33 = uStack_108;
  uVar35 = param_6;
  if (lVar37 == 0) goto LAB_10695d5c8;
  ppuVar12 = ppuVar7;
  func_0x00010c0ca7a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  func_0x00010bf529e0();
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar13 = ppuStack_5f8;
    func_0x00010bf529e0();
    _objc_release(ppuVar12);
    if (ppuVar13 == (undefined **)0x0) goto LAB_10695d5c8;
  }
  else {
    _objc_release(ppuVar12);
  }
  if (lVar31 == 0) {
    plVar20 = plVar2;
    func_0x00010bf529e0();
    if (plVar20 == (long *)0x0) goto LAB_10695d5c8;
    plVar20 = plVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    plVar14 = plVar20;
    func_0x00010bfd4d80();
    _objc_release(plVar20);
    if ((int)plVar14 == 0) goto LAB_10695d5c8;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    _objc_retain(plVar2);
    plVar20 = plVar2;
    func_0x00010bf52a60();
    plVar14 = plVar2;
    if (plVar20 != (long *)0x0) {
      lVar37 = *plStack_360;
      do {
        plVar40 = (long *)0x0;
        do {
          if (*plStack_360 != lVar37) {
            _objc_enumerationMutation(plVar2);
          }
          uVar35 = *(ulong *)(lStack_368 + (long)plVar40 * 8);
          uVar18 = *(undefined8 *)(param_3 + 0x88);
          func_0x00010c269d40(uVar18);
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar35;
          func_0x00010bf24ec0(uVar35);
          _objc_retainAutoreleasedReturnValue();
          uVar39 = uVar21;
          func_0x000108f579f0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25b820(uVar35);
          func_0x00010c0dd5e0(uVar18);
          _objc_release(uVar39);
          _objc_release(uVar21);
          _objc_release(uVar18);
          plVar40 = (long *)((long)plVar40 + 1);
        } while (plVar20 != plVar40);
        plVar20 = plVar2;
        func_0x00010bf52a60();
      } while (plVar20 != (long *)0x0);
    }
  }
  else {
    plVar14 = *(long **)(param_3 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dd5e0();
  }
  _objc_release(plVar14);
LAB_10695d5c8:
  plVar20 = plVar2;
  func_0x00010bf529e0();
  if (plVar20 == (long *)0x0) {
    ppuStack_5a8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuStack_5a8 = ppuVar7;
    func_0x00010c134520();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar12 = ppuVar7;
  func_0x00010c22b440(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc82c0(param_3);
  _objc_release(ppuVar12);
  if (param_6 != 0) {
    uVar21 = param_6;
    FUN_1069547f4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    uVar39 = param_6;
    func_0x00010c0fe1c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar39;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeea60();
    _objc_release(uVar15);
    _objc_release(uVar39);
    func_0x00010c1ec620(ppuVar12);
    ppuVar13 = ppuVar12;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar21 != 0) && (ppuVar13 != (undefined **)0x0)) {
      ppuVar16 = ppuVar7;
      func_0x00010c11ee60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar16;
      func_0x00010c08fa60();
      if (ppuVar17 == (undefined **)0x0) {
        _objc_release(ppuVar16);
      }
      else {
        plVar20 = plVar2;
        func_0x00010bf529e0();
        _objc_release(ppuVar16);
        if (plVar20 == (long *)0x0) {
          _objc_initWeak(auStack_378,param_3);
          puVar9 = PTR_PTR_1126b01c0;
          ppuVar16 = ppuVar7;
          func_0x00010c11ee60(ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c294260();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar16);
          uVar18 = *(undefined8 *)(param_3 + 0xf0);
          func_0x00010c269d40(uVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_230 = puVar9;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(PTR___dispatch_main_q_11034be20);
          puStack_3b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_3b0 = 0xc2000000;
          pcStack_3a8 = FUN_10695e46c;
          puStack_3a0 = &UNK_110858fb0;
          _objc_copyWeak(auStack_388,auStack_378);
          _objc_retain(ppuVar7);
          ppuStack_398 = ppuVar7;
          _objc_retain(lVar31);
          uStack_380 = uVar33;
          lStack_390 = lVar31;
          func_0x00010bf504e0(uVar18);
          _objc_release(PTR___dispatch_main_q_11034be20);
          _objc_release(puVar19);
          _objc_release(uVar18);
          _objc_release(lStack_390);
          _objc_release(ppuStack_398);
          _objc_destroyWeak(auStack_388);
          _objc_release(puVar9);
          _objc_destroyWeak(auStack_378);
        }
      }
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      plStack_3f0 = (long *)0x0;
      _objc_retain(puVar1);
      puVar36 = puVar1;
      func_0x00010bf52a60();
      if (puVar36 == (undefined1 *)0x0) {
        lStack_570 = 0;
        uVar35 = 0;
      }
      else {
        lStack_570 = 0;
        uVar35 = 0;
        lVar37 = *plStack_3f0;
        do {
          puVar38 = (undefined1 *)0x0;
          do {
            if (*plStack_3f0 != lVar37) {
              _objc_enumerationMutation(puVar1);
            }
            puVar22 = puVar1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puVar22;
            func_0x00010bf6ece0();
            if ((int)puVar23 == 1) {
              lVar5 = param_7;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lStack_570);
              lStack_570 = lVar5;
            }
            puVar23 = puVar22;
            func_0x00010bf6ece0();
            _objc_release(puVar22);
            uVar35 = (ulong)((uint)((int)puVar23 == 4) | (uint)uVar35);
            puVar38 = puVar38 + 1;
          } while (puVar36 != puVar38);
          puVar36 = puVar1;
          func_0x00010bf52a60();
        } while (puVar36 != (undefined1 *)0x0);
      }
      _objc_release(puVar1);
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      lStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      plStack_430 = (long *)0x0;
      _objc_retain(puVar1);
      puStack_580 = puVar1;
      func_0x00010bf52a60();
      if (puStack_580 != (undefined1 *)0x0) {
        lVar37 = *plStack_430;
        do {
          puVar36 = (undefined1 *)0x0;
          do {
            if (*plStack_430 != lVar37) {
              _objc_enumerationMutation(puVar1);
            }
            uVar39 = *(ulong *)(lStack_438 + (long)puVar36 * 8);
            puVar38 = puVar1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar22 = (undefined1 *)ppuVar28;
            if (puVar29 == (undefined *)0x0) {
              _objc_retain(uVar21);
              _objc_retain(ppuVar28);
              uVar15 = uVar21;
            }
            else {
              uVar15 = uVar39;
              func_0x00010695af50(uVar39,puVar29,param_6);
              _objc_retainAutoreleasedReturnValue();
              puVar23 = puVar38;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              puVar24 = puVar23;
              func_0x00010c08fa60();
              if (puVar24 == (undefined1 *)0x0) {
                _objc_retain(ppuVar28);
              }
              else {
                puVar22 = puVar38;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(puVar23);
            }
            puVar23 = puVar38;
            func_0x00010bf6ece0();
            if (((uint)((int)puVar23 == 1) & (uint)uVar35) == 0) {
              puVar23 = puVar38;
              func_0x00010bf6ece0();
              if ((int)puVar23 == 4) {
                _objc_retain(lStack_570);
                lStack_558 = lStack_570;
              }
              else {
                lStack_558 = 0;
              }
              puVar23 = puVar38;
              func_0x00010bf6ece0();
              if ((int)puVar23 == 2) {
                uVar18 = *(undefined8 *)(param_3 + 0x70);
                func_0x0001084dc184(uVar18,uVar39);
                _objc_retainAutoreleasedReturnValue();
                uStack_560 = uVar18;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar18);
              }
              else {
                uStack_560 = 0;
              }
              lVar5 = lVar4;
              func_0x00010bf4b900();
              if ((int)lVar5 != 0) {
                lVar5 = param_7;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar34 = lVar5;
                func_0x00010c08fa60();
                _objc_release(lVar5);
                if (lVar34 != 0) {
                  lVar5 = param_7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_initWeak(auStack_378,param_3);
                  uVar18 = *(undefined8 *)(param_3 + 0x68);
                  _objc_copyWeak(auStack_450,auStack_378);
                  _objc_retain(lVar5);
                  uStack_448 = uVar33;
                  func_0x00010c0f7fe0(0x4000000000000000,uVar18);
                  _objc_release(lVar5);
                  _objc_destroyWeak(auStack_450);
                  _objc_destroyWeak(auStack_378);
                  _objc_release(lVar5);
                }
              }
              uVar39 = param_6;
              func_0x00010bfeba20();
              _objc_retainAutoreleasedReturnValue();
              uVar25 = uVar39;
              FUN_1069560d4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar39);
              puVar23 = puVar38;
              func_0x00010bf6ece0();
              if ((int)puVar23 == 1) {
                uVar18 = *(undefined8 *)(param_3 + 0x108);
                func_0x00010c269d40(uVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25aac0();
                func_0x00010bdfb2c0(param_3);
                puVar23 = puVar38;
                func_0x00010c0d4ba0(puVar38);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1e34a0();
                _objc_release(puVar23);
                _objc_release(uVar18);
              }
              ppuVar16 = ppuVar10;
              func_0x00010bf529e0();
              if ((ppuVar16 == (undefined **)0x0) &&
                 (ppuVar16 = ppuStack_5a8, func_0x00010c08fa60(), ppuVar16 == (undefined **)0x0)) {
                ppuVar16 = ppuVar11;
                func_0x00010bf529e0();
                if (ppuVar16 == (undefined **)0x0) {
                  uVar32 = *(undefined8 *)(param_3 + 200);
                  ppuVar16 = ppuVar13;
                  func_0x00010c23f880(ppuVar13);
                  _objc_retainAutoreleasedReturnValue();
                  lVar5 = param_7;
                  func_0x00010c0e00e0(param_7);
                  _objc_retainAutoreleasedReturnValue();
                  uVar18 = param_8;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c067fc0();
                  ppuVar17 = ppuVar7;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c08fa60();
                  func_0x00010bfcd380();
                  ppuVar27 = ppuVar7;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c11ee20();
                  func_0x00010c0b1140(uVar32);
                  _objc_release(ppuVar27);
                  _objc_release(ppuVar17);
                  _objc_release(uVar18);
                  _objc_release(lVar5);
                }
                else {
                  ppuVar16 = (undefined **)PTR_PTR_1126cf420;
                  _objc_alloc();
                  func_0x00010c03eaa0();
                  uVar32 = *(undefined8 *)(param_3 + 200);
                  ppuVar17 = ppuVar13;
                  func_0x00010c23f880(ppuVar13);
                  _objc_retainAutoreleasedReturnValue();
                  lVar5 = param_7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar18 = param_8;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c067fc0();
                  ppuVar27 = ppuVar7;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c08fa60();
                  func_0x00010bfcd380();
                  ppuVar26 = ppuVar7;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c11ee20();
                  func_0x00010c0b1140(uVar32);
                  _objc_release(ppuVar26);
                  _objc_release(ppuVar27);
                  _objc_release(uVar18);
                  _objc_release(lVar5);
                  _objc_release(ppuVar17);
                }
              }
              else {
                _objc_retain(ppuStack_5a8);
                _objc_retain(uVar15);
                _objc_retain(ppuVar13);
                _objc_retain(puVar30);
                _objc_retain(puVar22);
                _objc_retain(param_7);
                _objc_retain(lStack_558);
                _objc_retain(param_8);
                _objc_retain(puVar38);
                _objc_retain(uStack_560);
                _objc_retain(uVar8);
                _objc_retain(ppuVar7);
                _objc_retain(uVar25);
                func_0x00010be115c0(param_3);
                _objc_release(uVar25);
                _objc_release(ppuVar7);
                _objc_release(uVar8);
                _objc_release(uStack_560);
                _objc_release(puVar38);
                _objc_release(param_8);
                _objc_release(lStack_558);
                _objc_release(param_7);
                _objc_release(puVar22);
                _objc_release(puVar30);
                _objc_release(ppuVar13);
                _objc_release(uVar15);
                ppuVar16 = ppuStack_5a8;
              }
              _objc_release(ppuVar16);
              _objc_release(uVar25);
              _objc_release(uStack_560);
              _objc_release(lStack_558);
            }
            _objc_release(puVar22);
            _objc_release(uVar15);
            _objc_release(puVar38);
            puVar36 = puVar36 + 1;
          } while (puStack_580 != puVar36);
          puStack_580 = puVar1;
          func_0x00010bf52a60();
        } while (puStack_580 != (undefined1 *)0x0);
      }
      _objc_release(puVar1);
      uVar33 = *(undefined8 *)(param_3 + 200);
      ppuVar16 = ppuVar13;
      func_0x00010c23f880(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5120(uVar33);
      _objc_release(ppuVar16);
      _objc_release(lStack_570);
    }
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(uVar21);
  }
  _objc_release(ppuStack_5a8);
  _objc_release(ppuStack_5f8);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(uVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(puVar29);
  _objc_release(plVar2);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(lVar31);
  _objc_release(puVar30);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(uVar35 + 0x30);
  _objc_destroyWeak(auStack_378);
  __Unwind_Resume(ppuVar28);
  ppuVar7 = &PTR____CFConstantStringClassReference_110dbbb98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_107240204(ppuVar7,puVar29,&PTR____CFConstantStringClassReference_110e22c98);
  _objc_release(puVar29);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 10695d244; end: 10695e3fb; -[SCStoriesSnapPostCoordinator _handlePostSuccessWithClientId:sendMessageAttemptId:updatedSnapServerId:content:storyIdToStorySnapId:storyIdToStorySnapIndex:storyIdToDestinationMetadata:friendOfGroupStoryIds:snapProDestinations:mediaType:spotlightShareInfo:suppressLegacyPostingToast:] */

void FUN_10695d244(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,ulong param_7,long param_8,undefined8 param_9,long param_10,
                  undefined8 param_11,long param_12,undefined8 param_13,undefined *param_14,
                  byte param_15)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  double dVar28;
  undefined **ppuStack_4d8;
  undefined **ppuStack_488;
  long lStack_460;
  long lStack_450;
  undefined8 uStack_440;
  long lStack_438;
  undefined1 auStack_330 [8];
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined **ppuStack_278;
  long lStack_270;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_110;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  if (param_14 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar24 = param_7;
    func_0x00010c09dc00(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_14;
    func_0x00010695a170(param_14,uVar24,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar24);
  }
  func_0x00010be76400();
  ppuVar3 = *(undefined ***)(param_2 + 0x48);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde00e0(param_2);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar28 = *(double *)(param_2 + 0xf8);
  _objc_release(puVar5);
  if ((param_15 & 1) == 0) {
    ppuVar6 = ppuVar3;
    func_0x00010c23a7e0();
    param_1 = param_1 - dVar28;
    iVar1 = 0;
    if (2.0 < param_1) {
      iVar1 = (int)ppuVar6;
    }
    if (iVar1 == 1) {
      func_0x000100162d98("APPSTORE",&PTR___NSConcreteGlobalBlock_11094d5c0);
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(double *)(param_2 + 0xf8) = param_1;
      _objc_release(puVar5);
    }
  }
  ppuVar6 = ppuVar3;
  func_0x00010c0ca740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar3;
  func_0x00010c27b4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar6);
  ppuVar8 = ppuVar7;
  func_0x00010bf529e0();
  ppuStack_4d8 = ppuVar6;
  if (ppuVar8 != (undefined **)0x0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0xd0);
    func_0x00010bf1f440();
    if (iVar1 != 0) {
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x00010c0ecd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      ppuStack_4d8 = ppuVar8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      _objc_release(ppuVar8);
    }
  }
  lVar22 = param_8;
  func_0x00010bf529e0();
  uVar24 = param_7;
  if (lVar22 == 0) goto LAB_10695d5c8;
  ppuVar8 = ppuVar3;
  func_0x00010c0ca7a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bf529e0();
  if (ppuVar9 == (undefined **)0x0) {
    ppuVar9 = ppuStack_4d8;
    func_0x00010bf529e0();
    _objc_release(ppuVar8);
    if (ppuVar9 == (undefined **)0x0) goto LAB_10695d5c8;
  }
  else {
    _objc_release(ppuVar8);
  }
  if (param_6 == 0) {
    lVar22 = param_12;
    func_0x00010bf529e0();
    if (lVar22 == 0) goto LAB_10695d5c8;
    lVar22 = param_12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar22;
    func_0x00010bfd4d80();
    _objc_release(lVar22);
    if ((int)lVar10 == 0) goto LAB_10695d5c8;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    _objc_retain(param_12);
    lVar22 = param_12;
    func_0x00010bf52a60();
    lVar10 = param_12;
    if (lVar22 != 0) {
      lVar25 = *plStack_240;
      do {
        lVar27 = 0;
        do {
          if (*plStack_240 != lVar25) {
            _objc_enumerationMutation(param_12);
          }
          uVar24 = *(ulong *)(lStack_248 + lVar27 * 8);
          uVar14 = *(undefined8 *)(param_2 + 0x88);
          func_0x00010c269d40(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar24;
          func_0x00010bf24ec0(uVar24);
          _objc_retainAutoreleasedReturnValue();
          uVar26 = uVar16;
          func_0x000108f579f0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25b820(uVar24);
          func_0x00010c0dd5e0(uVar14);
          _objc_release(uVar26);
          _objc_release(uVar16);
          _objc_release(uVar14);
          lVar27 = lVar27 + 1;
        } while (lVar22 != lVar27);
        lVar22 = param_12;
        func_0x00010bf52a60();
      } while (lVar22 != 0);
    }
  }
  else {
    lVar10 = *(long *)(param_2 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dd5e0();
  }
  _objc_release(lVar10);
LAB_10695d5c8:
  lVar22 = param_12;
  func_0x00010bf529e0();
  if (lVar22 == 0) {
    ppuStack_488 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuStack_488 = ppuVar3;
    func_0x00010c134520();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar8 = ppuVar3;
  func_0x00010c22b440(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc82c0(param_2);
  _objc_release(ppuVar8);
  if (param_7 != 0) {
    uVar16 = param_7;
    FUN_1069547f4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    uVar26 = param_7;
    func_0x00010c0fe1c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar26;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeea60();
    _objc_release(uVar11);
    _objc_release(uVar26);
    func_0x00010c1ec620(ppuVar8);
    ppuVar9 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar16 != 0) && (ppuVar9 != (undefined **)0x0)) {
      ppuVar12 = ppuVar3;
      func_0x00010c11ee60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar12;
      func_0x00010c08fa60();
      if (ppuVar13 == (undefined **)0x0) {
        _objc_release(ppuVar12);
      }
      else {
        lVar22 = param_12;
        func_0x00010bf529e0();
        _objc_release(ppuVar12);
        if (lVar22 == 0) {
          _objc_initWeak(auStack_258,param_2);
          puVar5 = PTR_PTR_1126b01c0;
          ppuVar12 = ppuVar3;
          func_0x00010c11ee60(ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c294260();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar12);
          uVar14 = *(undefined8 *)(param_2 + 0xf0);
          func_0x00010c269d40(uVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_110 = puVar5;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(PTR___dispatch_main_q_11034be20);
          puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_290 = 0xc2000000;
          pcStack_288 = FUN_10695e46c;
          puStack_280 = &UNK_110858fb0;
          _objc_copyWeak(auStack_268,auStack_258);
          _objc_retain(ppuVar3);
          ppuStack_278 = ppuVar3;
          _objc_retain(param_6);
          uStack_260 = param_13;
          lStack_270 = param_6;
          func_0x00010bf504e0(uVar14);
          _objc_release(PTR___dispatch_main_q_11034be20);
          _objc_release(puVar15);
          _objc_release(uVar14);
          _objc_release(lStack_270);
          _objc_release(ppuStack_278);
          _objc_destroyWeak(auStack_268);
          _objc_release(puVar5);
          _objc_destroyWeak(auStack_258);
        }
      }
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      plStack_2d0 = (long *)0x0;
      _objc_retain(param_10);
      lVar22 = param_10;
      func_0x00010bf52a60();
      if (lVar22 == 0) {
        lStack_450 = 0;
        uVar24 = 0;
      }
      else {
        lStack_450 = 0;
        uVar24 = 0;
        lVar10 = *plStack_2d0;
        do {
          lVar25 = 0;
          do {
            if (*plStack_2d0 != lVar10) {
              _objc_enumerationMutation(param_10);
            }
            lVar27 = param_10;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = lVar27;
            func_0x00010bf6ece0();
            if ((int)lVar17 == 1) {
              lVar17 = param_8;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lStack_450);
              lStack_450 = lVar17;
            }
            lVar17 = lVar27;
            func_0x00010bf6ece0();
            _objc_release(lVar27);
            uVar24 = (ulong)((uint)((int)lVar17 == 4) | (uint)uVar24);
            lVar25 = lVar25 + 1;
          } while (lVar22 != lVar25);
          lVar22 = param_10;
          func_0x00010bf52a60();
        } while (lVar22 != 0);
      }
      _objc_release(param_10);
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      lStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      plStack_310 = (long *)0x0;
      _objc_retain(param_10);
      lStack_460 = param_10;
      func_0x00010bf52a60();
      if (lStack_460 != 0) {
        lVar22 = *plStack_310;
        do {
          lVar10 = 0;
          do {
            if (*plStack_310 != lVar22) {
              _objc_enumerationMutation(param_10);
            }
            uVar26 = *(ulong *)(lStack_318 + lVar10 * 8);
            lVar25 = param_10;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar27 = param_4;
            if (param_14 == (undefined *)0x0) {
              _objc_retain(uVar16);
              _objc_retain(param_4);
              uVar11 = uVar16;
            }
            else {
              uVar11 = uVar26;
              func_0x00010695af50(uVar26,param_14,param_7);
              _objc_retainAutoreleasedReturnValue();
              lVar17 = lVar25;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              lVar18 = lVar17;
              func_0x00010c08fa60();
              if (lVar18 == 0) {
                _objc_retain(param_4);
              }
              else {
                lVar27 = lVar25;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(lVar17);
            }
            lVar17 = lVar25;
            func_0x00010bf6ece0();
            if (((uint)((int)lVar17 == 1) & (uint)uVar24) == 0) {
              lVar17 = lVar25;
              func_0x00010bf6ece0();
              if ((int)lVar17 == 4) {
                _objc_retain(lStack_450);
                lStack_438 = lStack_450;
              }
              else {
                lStack_438 = 0;
              }
              lVar17 = lVar25;
              func_0x00010bf6ece0();
              if ((int)lVar17 == 2) {
                uVar14 = *(undefined8 *)(param_2 + 0x70);
                func_0x0001084dc184(uVar14,uVar26);
                _objc_retainAutoreleasedReturnValue();
                uStack_440 = uVar14;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar14);
              }
              else {
                uStack_440 = 0;
              }
              uVar14 = param_11;
              func_0x00010bf4b900();
              if ((int)uVar14 != 0) {
                lVar17 = param_8;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar18 = lVar17;
                func_0x00010c08fa60();
                _objc_release(lVar17);
                if (lVar18 != 0) {
                  lVar17 = param_8;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_initWeak(auStack_258,param_2);
                  uVar14 = *(undefined8 *)(param_2 + 0x68);
                  _objc_copyWeak(auStack_330,auStack_258);
                  _objc_retain(lVar17);
                  uStack_328 = param_13;
                  func_0x00010c0f7fe0(0x4000000000000000,uVar14);
                  _objc_release(lVar17);
                  _objc_destroyWeak(auStack_330);
                  _objc_destroyWeak(auStack_258);
                  _objc_release(lVar17);
                }
              }
              uVar26 = param_7;
              func_0x00010bfeba20();
              _objc_retainAutoreleasedReturnValue();
              uVar19 = uVar26;
              FUN_1069560d4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar26);
              lVar17 = lVar25;
              func_0x00010bf6ece0();
              if ((int)lVar17 == 1) {
                uVar14 = *(undefined8 *)(param_2 + 0x108);
                func_0x00010c269d40(uVar14);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25aac0();
                func_0x00010bdfb2c0(param_2);
                lVar17 = lVar25;
                func_0x00010c0d4ba0(lVar25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1e34a0();
                _objc_release(lVar17);
                _objc_release(uVar14);
              }
              ppuVar12 = ppuVar6;
              func_0x00010bf529e0();
              if ((ppuVar12 == (undefined **)0x0) &&
                 (ppuVar12 = ppuStack_488, func_0x00010c08fa60(), ppuVar12 == (undefined **)0x0)) {
                ppuVar12 = ppuVar7;
                func_0x00010bf529e0();
                if (ppuVar12 == (undefined **)0x0) {
                  uVar23 = *(undefined8 *)(param_2 + 200);
                  ppuVar12 = ppuVar9;
                  func_0x00010c23f880(ppuVar9);
                  _objc_retainAutoreleasedReturnValue();
                  lVar17 = param_8;
                  func_0x00010c0e00e0(param_8);
                  _objc_retainAutoreleasedReturnValue();
                  uVar14 = param_9;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c067fc0();
                  ppuVar13 = ppuVar3;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c08fa60();
                  func_0x00010bfcd380();
                  ppuVar21 = ppuVar3;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c11ee20();
                  func_0x00010c0b1140(uVar23);
                  _objc_release(ppuVar21);
                  _objc_release(ppuVar13);
                  _objc_release(uVar14);
                  _objc_release(lVar17);
                }
                else {
                  ppuVar12 = (undefined **)PTR_PTR_1126cf420;
                  _objc_alloc();
                  func_0x00010c03eaa0();
                  uVar23 = *(undefined8 *)(param_2 + 200);
                  ppuVar13 = ppuVar9;
                  func_0x00010c23f880(ppuVar9);
                  _objc_retainAutoreleasedReturnValue();
                  lVar17 = param_8;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar14 = param_9;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c067fc0();
                  ppuVar21 = ppuVar3;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c08fa60();
                  func_0x00010bfcd380();
                  ppuVar20 = ppuVar3;
                  func_0x00010c11ee60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c11ee20();
                  func_0x00010c0b1140(uVar23);
                  _objc_release(ppuVar20);
                  _objc_release(ppuVar21);
                  _objc_release(uVar14);
                  _objc_release(lVar17);
                  _objc_release(ppuVar13);
                }
              }
              else {
                _objc_retain(ppuStack_488);
                _objc_retain(uVar11);
                _objc_retain(ppuVar9);
                _objc_retain(param_5);
                _objc_retain(lVar27);
                _objc_retain(param_8);
                _objc_retain(lStack_438);
                _objc_retain(param_9);
                _objc_retain(lVar25);
                _objc_retain(uStack_440);
                _objc_retain(uVar4);
                _objc_retain(ppuVar3);
                _objc_retain(uVar19);
                func_0x00010be115c0(param_2);
                _objc_release(uVar19);
                _objc_release(ppuVar3);
                _objc_release(uVar4);
                _objc_release(uStack_440);
                _objc_release(lVar25);
                _objc_release(param_9);
                _objc_release(lStack_438);
                _objc_release(param_8);
                _objc_release(lVar27);
                _objc_release(param_5);
                _objc_release(ppuVar9);
                _objc_release(uVar11);
                ppuVar12 = ppuStack_488;
              }
              _objc_release(ppuVar12);
              _objc_release(uVar19);
              _objc_release(uStack_440);
              _objc_release(lStack_438);
            }
            _objc_release(lVar27);
            _objc_release(uVar11);
            _objc_release(lVar25);
            lVar10 = lVar10 + 1;
          } while (lStack_460 != lVar10);
          lStack_460 = param_10;
          func_0x00010bf52a60();
        } while (lStack_460 != 0);
      }
      _objc_release(param_10);
      uVar14 = *(undefined8 *)(param_2 + 200);
      ppuVar12 = ppuVar9;
      func_0x00010c23f880(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5120(uVar14);
      _objc_release(ppuVar12);
      _objc_release(lStack_450);
    }
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(uVar16);
  }
  _objc_release(ppuStack_488);
  _objc_release(ppuStack_4d8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(uVar24 + 0x30);
  _objc_destroyWeak(auStack_258);
  __Unwind_Resume(param_4);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dbbb98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_107240204(ppuVar3,puVar2,&PTR____CFConstantStringClassReference_110e22c98);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 10695e3fc; end: 10695e46b;  */

void FUN_10695e3fc(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbbb98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_107240204(ppuVar1,puVar2,&PTR____CFConstantStringClassReference_110e22c98);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 10695e46c; end: 10695e60f;  */

void FUN_10695e46c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11ee60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010860629c(lVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0xe8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c600();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126c2810;
    _objc_alloc(PTR_PTR_1126c2810);
    func_0x00010c04e240();
    uVar3 = *(undefined8 *)(lVar1 + 0xe0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15d8c0(uVar3);
    _objc_release(puVar6);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be9f400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10695e610; end: 10695e647;  */

void FUN_10695e610(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9f400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10695e648; end: 10695e7ef;  */

void FUN_10695e648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126cf420;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c03eaa0();
  _objc_release(param_3);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 200);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c23f880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c11ee60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010bfcd380();
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c11ee60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ee20();
  func_0x00010c0b1140(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10695e7f0; end: 10695e92f;  */

void FUN_10695e7f0(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0xa0));
  return;
}



/* Entry: 10695e930; end: 10695ea53; -[SCStoriesSnapPostCoordinator _handlePostFailureWithClientId:completedStoryDestinations:partialFailure:spotlightShareInfo:suppressLegacyPostingToast:keepAlive:] */

void FUN_10695e930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10695ea54;
  puStack_88 = &UNK_11094d690;
  uStack_80 = param_8;
  uStack_78 = param_3;
  uStack_70 = param_6;
  lStack_68 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_57 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_8);
  return;
}



/* Entry: 10695ea54; end: 10695f21f;  */

void FUN_10695ea54(long param_1,undefined **param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined **ppuVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  undefined **ppuStack_228;
  uint uStack_208;
  undefined **ppuStack_200;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  undefined **ppuVar17;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_1 + 0x20);
  _objc_retain();
  ppuVar5 = *(undefined ***)(param_1 + 0x28);
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x30) == 0) {
    uStack_208 = 0;
  }
  else {
    uStack_208 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xd0);
    func_0x00010bf1f440();
  }
  uVar2 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xd0);
  func_0x00010bf1f440();
  ppuVar7 = ppuVar5;
  func_0x00010c08fa60();
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (ppuVar7 != (undefined **)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010bf72040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72040();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar20 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar20);
    lVar24 = lVar20;
    func_0x00010bf52a60();
    if (lVar24 == 0) {
      ppuStack_228 = (undefined **)0x0;
      ppuStack_200 = (undefined **)0x0;
    }
    else {
      ppuStack_228 = (undefined **)0x0;
      ppuStack_200 = (undefined **)0x0;
      lVar27 = *plStack_130;
      do {
        lVar28 = 0;
        do {
          if (*plStack_130 != lVar27) {
            _objc_enumerationMutation(lVar20);
          }
          lVar21 = *(long *)(lStack_138 + lVar28 * 8);
          lVar13 = lVar21;
          func_0x00010c259cc0(lVar21);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar13;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar14;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar15;
          func_0x00010846a3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar15);
          _objc_release(lVar14);
          _objc_release(lVar13);
          if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (*(long *)(param_1 + 0x30) == 0)) {
            ppuVar25 = (undefined **)0x0;
            uVar3 = 0;
          }
          else {
            ppuVar7 = (undefined **)PTR_PTR_1126cf408;
            _objc_alloc();
            lVar13 = lVar21;
            func_0x00010c259cc0(lVar21);
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar13;
            func_0x00010c259680();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c008360();
            _objc_release(lVar14);
            _objc_release(lVar13);
            ppuVar25 = ppuVar7;
            func_0x00010c0ee2a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar17 = ppuVar25;
            FUN_106956248();
            uVar3 = (uint)ppuVar17;
            _objc_release(ppuVar25);
            ppuVar25 = ppuVar7;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            ppuVar17 = ppuVar25;
            func_0x00010c08fa60();
            _objc_release(ppuVar25);
            if (ppuVar17 == (undefined **)0x0) {
              func_0x00010befa120(puVar6);
              ppuVar25 = (undefined **)0x0;
            }
            else {
              ppuVar25 = ppuVar7;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              ppuVar17 = ppuVar25;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar25);
              ppuVar25 = ppuVar17;
              func_0x00010c08fa60();
              if (ppuVar25 == (undefined **)0x0) {
                ppuVar25 = (undefined **)0x0;
              }
              else {
                ppuVar18 = ppuVar7;
                func_0x00010bf3cf60(ppuVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar10);
                ppuVar25 = ppuVar17;
                ppuVar17 = ppuVar18;
              }
              _objc_release(ppuVar17);
              ppuVar17 = ppuVar7;
              func_0x00010bf3cf60(ppuVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar6);
              _objc_release(ppuVar17);
            }
            _objc_release(ppuVar7);
          }
          ppuVar7 = ppuVar25;
          if ((uVar2 & ppuVar25 != (undefined **)0x0) == 0) {
            ppuVar7 = ppuVar5;
          }
          _objc_retain(ppuVar7);
          func_0x00010c13ca20();
          uVar1 = 0;
          if (lVar21 != 3) {
            uVar1 = uStack_208;
          }
          if ((uVar3 & uVar1) == 1) {
            func_0x00010befa120(puVar12);
            _objc_retain(ppuVar25);
            _objc_release(ppuStack_200);
            ppuStack_200 = ppuVar25;
          }
          else if (((uVar3 | uVar1 ^ 1) & 1) == 0) {
            func_0x00010befa120(puVar11);
            _objc_retain(ppuVar25);
            _objc_release(ppuStack_228);
            ppuStack_228 = ppuVar25;
          }
          else {
            param_2 = ppuVar7;
            if ((lVar21 == 4) || (lVar21 == 2)) {
              FUN_10695f220(puVar8,ppuVar7,lVar16);
            }
            else {
              FUN_10695f220(puVar9,ppuVar7,lVar16);
            }
          }
          _objc_release(ppuVar7);
          _objc_release(ppuVar25);
          _objc_release(lVar16);
          lVar28 = lVar28 + 1;
        } while (lVar24 != lVar28);
        lVar24 = lVar20;
        func_0x00010bf52a60();
      } while (lVar24 != 0);
    }
    _objc_release(lVar20);
    puVar19 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_10695f2d0;
    puStack_160 = &UNK_11094d610;
    plVar26 = (long *)(param_1 + 0x38);
    lStack_158 = *plVar26;
    _objc_retain(puVar10);
    uVar22 = *(undefined8 *)(param_1 + 0x28);
    puStack_150 = puVar10;
    _objc_retain(uVar22);
    uStack_148 = uVar22;
    func_0x00010bf97ce0(puVar9);
    func_0x00010bed7c80(*plVar26);
    uStack_180 = (undefined1)*(undefined8 *)(*plVar26 + 0xd0);
    func_0x000108f49438();
    puStack_1b0 = puVar19;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_10695f39c;
    puStack_198 = &UNK_11094d640;
    lStack_190 = *plVar26;
    uVar22 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar22);
    uStack_188 = uVar22;
    func_0x00010bf97ce0(puVar8);
    puVar19 = puVar11;
    func_0x00010bf529e0();
    if (puVar19 != (undefined *)0x0) {
      func_0x00010bdfaa00(*(undefined8 *)(param_1 + 0x38));
    }
    puVar19 = puVar12;
    func_0x00010bf529e0();
    if ((puVar19 != (undefined *)0x0) &&
       (ppuVar7 = ppuStack_200, func_0x00010c08fa60(), ppuVar7 != (undefined **)0x0)) {
      plVar26 = (long *)(param_1 + 0x38);
      func_0x00010c0a4280(*(undefined8 *)(*plVar26 + 0xb0));
      _objc_initWeak(&puStack_1b8,*plVar26);
      uVar22 = *(undefined8 *)(*plVar26 + 0xa0);
      param_2 = &puStack_1b8;
      _objc_copyWeak(auStack_1c0,param_2);
      _objc_retain(ppuStack_200);
      uVar23 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar23);
      func_0x00010c13f900(uVar22);
      _objc_release(uVar23);
      _objc_release(ppuStack_200);
      _objc_destroyWeak(auStack_1c0);
      _objc_destroyWeak(&puStack_1b8);
    }
    _objc_release(uStack_188);
    _objc_release(uStack_148);
    _objc_release(puStack_150);
    _objc_release(ppuStack_228);
    _objc_release(ppuStack_200);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar9);
  }
  puVar9 = puVar6;
  func_0x00010bf529e0();
  if (puVar9 == (undefined *)0x0) {
    func_0x00010befa120(puVar6);
  }
  lVar24 = *(long *)(param_1 + 0x38);
  puVar9 = puVar6;
  func_0x00010bf00560(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedd9a0(lVar24);
  _objc_release(puVar9);
  uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
  lVar24 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (((*(byte *)(param_1 + 0x49) & 1) == 0) &&
     (uVar23 = uVar22, func_0x00010c23a7e0(), (int)uVar23 != 0)) {
    param_2 = &PTR___NSConcreteGlobalBlock_11094d670;
    func_0x000100162d98("APPSTORE",&PTR___NSConcreteGlobalBlock_11094d670);
  }
  _objc_release(uVar22);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(&puStack_1b8);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(lVar24);
  lVar20 = lVar24;
  func_0x00010c08fa60();
  if (lVar20 != 0) {
    puVar6 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(puVar4);
    }
    func_0x00010befa120(puVar6);
    _objc_release(puVar6);
  }
  _objc_release(lVar24);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10695f220; end: 10695f2cf;  */

void FUN_10695f220(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(param_1);
    }
    func_0x00010befa120(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10695f2d0; end: 10695f39b;  */

void FUN_10695f2d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76380(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10695f39c; end: 10695f483;  */

void FUN_10695f39c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010bdfaa00();
    }
    else {
      func_0x00010be87940(*(undefined8 *)(param_1 + 0x20));
      func_0x00010be2bdc0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10695f484; end: 10695f4cf;  */

void FUN_10695f484(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e65b98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e65b98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10695f4d0; end: 10695f4d7; -[SCStoriesSnapPostCoordinator _handleLostStoryPostWithSnapComponentId:storyIds:] */

void FUN_10695f4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2bdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleLostStoryPostWithSnapComp_112568910,param_3,param_4,0);
  return;
}



/* Entry: 10695f4d8; end: 10695f623; -[SCStoriesSnapPostCoordinator _handleLostStoryPostWithSnapComponentId:storyIds:keepAlive:] */

void FUN_10695f4d8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10695f624;
    puStack_68 = &UNK_1108576a8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    lStack_60 = param_3;
    _objc_retain(param_5);
    uStack_58 = param_5;
    _objc_retainBlock(&puStack_80);
    func_0x00010c13f8e0(*(undefined8 *)(param_1 + 0xa0));
    _objc_release(ppuVar2);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10695f624; end: 10695f677;  */

void FUN_10695f624(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfaa00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10695f678; end: 10695f67f; -[SCStoriesSnapPostCoordinator _deleteUnrecoverableSnapsWithSnapComponentId:storyIds:] */

void FUN_10695f678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfaa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__deleteUnrecoverableSnapsWithSna_11255c420,param_3,param_4,0);
  return;
}



/* Entry: 10695f680; end: 10695f687; -[SCStoriesSnapPostCoordinator _deleteUnrecoverableSnapsWithSnapComponentId:storyIds:keepAlive:] */

void FUN_10695f680(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfaa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deleteUnrecoverableSnapsWithSna_11255c428);
  return;
}



/* Entry: 10695f688; end: 10695f8d3; -[SCStoriesSnapPostCoordinator _deleteUnrecoverableSnapsWithSnapComponentId:storyIds:keepAlive:completion:] */

void FUN_10695f688(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 == 0)) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010bf6c460(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    func_0x00010c0ac900(*(undefined8 *)(param_1 + 0xb0));
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_88);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10695f8d4; end: 10695f99b;  */

void FUN_10695f8d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  if ((int)param_2 != 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be282c0();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10695f99c; end: 10695f9e3; -[SCStoriesSnapPostCoordinator _onMessageSendComplete:] */

void FUN_10695f99c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c15c200();
  if (param_3 - 1U < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b0cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xb0),PTR_s_logStoriesEmitRetryPostMetrics__112609d40,
               1 >> (ulong)((uint)(param_3 - 1U) & 0x1f));
    return;
  }
  return;
}



/* Entry: 10695f9e4; end: 10695ff67; -[SCStoriesSnapPostCoordinator updateIncidentalAttachmentsWithLocalMessageContent:callback:] */

void FUN_10695f9e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = param_3;
  func_0x00010bfeba20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar1 = param_3;
  func_0x00010bfeba20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf52a60();
  if (lVar7 == 0) {
    _objc_release(lVar1);
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
    lVar11 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        puVar3 = PTR_PTR_1126be758;
        _objc_alloc();
        func_0x00010c008360();
        if ((puVar3 == (undefined *)0x0) ||
           (puVar4 = puVar3, func_0x00010bf0d0a0(), (int)puVar4 != 4)) {
          func_0x00010befa120(puVar2);
        }
        else {
          _objc_retain(puVar3);
          _objc_release(puVar10);
          puVar10 = puVar3;
          func_0x00010c25a920();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar10;
          func_0x00010c25a520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          _objc_release(puVar10);
          puVar9 = puVar4;
          puVar10 = puVar3;
        }
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = lVar1;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
    _objc_release(lVar1);
    if (puVar9 != (undefined *)0x0) {
      puVar3 = puVar9;
      func_0x00010c26ef80();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = puVar9;
        func_0x00010c26da00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        if (puVar4 == (undefined *)0x0) {
          puStack_158 = &uStack_160;
          uStack_160 = 0;
          uStack_150 = 0x2020000000;
          uStack_148 = 0;
          puVar3 = puVar9;
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          _objc_initWeak(auStack_168,param_1);
          puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1b8 = 0xc2000000;
          pcStack_1b0 = FUN_10695ff68;
          puStack_1a8 = &UNK_11094d6c0;
          _objc_copyWeak(auStack_170,auStack_168);
          puStack_178 = &uStack_160;
          _objc_retain(puVar9);
          puStack_1a0 = puVar9;
          _objc_retain(puVar2);
          puStack_198 = puVar2;
          _objc_retain(puVar10);
          puStack_190 = puVar10;
          _objc_retain(param_4);
          lStack_180 = param_4;
          _objc_retain(puVar3);
          ppuVar5 = &puStack_1c0;
          puStack_188 = puVar3;
          _objc_retainBlock();
          lVar1 = param_3;
          FUN_1069547f4();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_106955d08(puVar3,lVar1,1);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(param_1 + 0xa8);
          uVar6 = *(undefined8 *)(param_1 + 0x68);
          func_0x00010c11de00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(ppuVar5);
          func_0x00010c11da60(uVar12);
          _objc_release(uVar6);
          fVar13 = 30.0;
          func_0x00010bfb2cc0(0x41f00000,*(undefined8 *)(param_1 + 0xd0));
          uVar6 = *(undefined8 *)(param_1 + 0x68);
          _objc_retain(ppuVar5);
          func_0x00010c0f7fe0((double)fVar13,uVar6);
          _objc_release(ppuVar5);
          _objc_release(ppuVar5);
          _objc_release(puVar4);
          _objc_release(lVar1);
          _objc_release(ppuVar5);
          _objc_release(puStack_188);
          _objc_release(lStack_180);
          _objc_release(puStack_190);
          _objc_release(puStack_198);
          _objc_release(puStack_1a0);
          _objc_destroyWeak(auStack_170);
          _objc_destroyWeak(auStack_168);
          _objc_release(puVar3);
          __Block_object_dispose(&uStack_160,8);
        }
        else {
          (**(code **)(param_4 + 0x10))(param_4,0);
        }
      }
      else {
        func_0x00010bec91c0(param_1);
        puVar3 = puVar10;
        func_0x00010bf63640(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar3);
        puVar3 = puVar2;
        func_0x00010bf51e00();
        (**(code **)(param_4 + 0x10))(param_4,puVar3);
        _objc_release(puVar3);
      }
      goto LAB_10695fc38;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,0);
  puVar9 = (undefined *)0x0;
LAB_10695fc38:
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  lVar7 = 8;
  __Block_object_dispose(&uStack_160);
  __Unwind_Resume();
  _objc_retain(lVar7);
  lVar1 = param_3 + 0x50;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) &&
     (lVar11 = *(long *)(*(long *)(param_3 + 0x48) + 8), (*(byte *)(lVar11 + 0x18) & 1) == 0)) {
    *(undefined1 *)(lVar11 + 0x18) = 1;
    if (lVar7 == 0) {
      (**(code **)(*(long *)(param_3 + 0x40) + 0x10))(*(long *)(param_3 + 0x40),0);
    }
    else {
      func_0x00010c213f60(*(undefined8 *)(param_3 + 0x20));
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      uVar12 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010bf63640(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar6);
      _objc_release(uVar12);
      lVar11 = *(long *)(param_3 + 0x40);
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010bf51e00(uVar6);
      (**(code **)(lVar11 + 0x10))(lVar11,uVar6);
      _objc_release(uVar6);
    }
    func_0x00010be59b20(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 10695ff68; end: 10696005f;  */

void FUN_10695ff68(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8), (*(byte *)(lVar4 + 0x18) & 1) == 0)) {
    *(undefined1 *)(lVar4 + 0x18) = 1;
    if (param_2 == 0) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
    }
    else {
      func_0x00010c213f60(*(undefined8 *)(param_1 + 0x20));
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf63640(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      _objc_release(uVar2);
      lVar4 = *(long *)(param_1 + 0x40);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf51e00(uVar3);
      (**(code **)(lVar4 + 0x10))(lVar4,uVar3);
      _objc_release(uVar3);
    }
    func_0x00010be59b20(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


