/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108543f0c; end: 1085440bb;  */

undefined * FUN_108543f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(puVar2);
        }
        uVar6 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
        uVar5 = uVar6;
        func_0x00010c296d80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d4f60(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4,param_2,uVar5,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar5);
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  if (puVar1 + -4 < (undefined *)0x12) {
    return (undefined *)(ulong)*(uint *)(&UNK_10df358a8 + (long)(puVar1 + -4) * 4);
  }
  return (undefined *)0x5;
}



/* Entry: 108aede78; end: 108aedfb3;  */

void FUN_108aede78(void)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 uStack_40;
  int iStack_34;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828210 & 1) == 0) {
    iVar2 = 0x13828210;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      iStack_34 = 0;
      uStack_30 = 0x1900000006;
      uStack_40 = 4;
      puVar3 = &uStack_30;
      _sysctl(puVar3,2,&iStack_34,&uStack_40,0,0);
      if ((int)puVar3 == 0) goto LAB_108aedf30;
      iVar2 = 1;
      goto LAB_108aedf3c;
    }
  }
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
    ___stack_chk_fail(iRam0000000113828208);
LAB_108aedf30:
    iVar2 = iStack_34;
    if (iStack_34 < 1) break;
LAB_108aedf3c:
    iRam0000000113828208 = iVar2;
    ___cxa_guard_release(0x113828210);
  }
  puVar4 = (uint *)&UNK_10f4fd0a9;
  iVar2 = 0x4d;
  func_0x000108aed9a4(&UNK_10f4fd0a9,0x4d,&UNK_10f4fd0fa,&UNK_10df7f1b0);
  if (iVar2 == 0) {
    *puVar4 = 0xffffffff;
    *(undefined1 *)(puVar4 + 1) = 0;
  }
  else {
    uVar1 = fpcr;
    uVar5 = (uint)uVar1;
    *puVar4 = uVar5;
    *(bool *)(puVar4 + 1) = (uVar1 & 0x1000000) == 0;
    if ((uVar5 >> 0x18 & 1) == 0) {
      fpcr = (ulong)(uVar5 | 0x1000000);
      return;
    }
  }
  return;
}



/* Entry: 108b6a550; end: 108b6a5c3;  */

bool FUN_108b6a550(undefined8 param_1)

{
  undefined8 uStack_20;
  long lStack_18;
  
  uStack_20 = 8;
  lStack_18 = 0;
  _sysctlbyname(param_1,&lStack_18,&uStack_20,0,0);
  return (int)param_1 == 0 && lStack_18 != 0;
}



/* Entry: 108e6d2d8; end: 108e6d407;  */

void FUN_108e6d2d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0fd0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe2ee0();
  uVar3 = uVar1;
  func_0x00010c0b5940(uVar1);
  func_0x000107c30948(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126bab10;
  func_0x00010c298180(PTR_PTR_1126bab10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bab18;
  _objc_alloc(PTR_PTR_1126bab18);
  uVar1 = param_1;
  func_0x00010c0d4f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c01bb80(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f04948; end: 108f04d73;  */

void FUN_108f04948(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR_PTR_1126b10e0;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  if (param_1 == 0) {
    func_0x000108f3477c(puVar2,&PTR____CFConstantStringClassReference_110daf6b8,
                        &PTR____CFConstantStringClassReference_110f096b8,1);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc();
    func_0x00010c057bc0();
    func_0x00010c1d0640(puVar3);
    puVar5 = puVar4;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        uVar11 = *(undefined8 *)((long)puVar12 * 8);
        uVar7 = uVar11;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        if ((int)uVar8 != 0) {
          uVar7 = uVar11;
          func_0x00010c296d80(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar7);
        }
        uVar7 = uVar11;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        if ((int)uVar8 != 0) {
          uVar7 = uVar11;
          func_0x00010c296d80(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar7);
        }
        uVar7 = uVar11;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        if ((int)uVar8 != 0) {
          uVar7 = uVar11;
          func_0x00010c296d80(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar7);
        }
        uVar7 = uVar11;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        if ((int)uVar8 != 0) {
          func_0x00010c296d80(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar11);
          puVar9 = puVar3;
          func_0x00010c0e00e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108f349ac(puVar2,puVar9,1);
          _objc_release(puVar9);
        }
        puVar12 = puVar12 + 1;
      } while (puVar6 != puVar12);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    }
    puVar6 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 == (undefined *)0x0) {
        func_0x000108f3477c(puVar2,&PTR____CFConstantStringClassReference_110daf6b8,
                            &PTR____CFConstantStringClassReference_110f096d8,1);
      }
      else {
        puVar12 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108f3477c(puVar2,puVar12,&PTR____CFConstantStringClassReference_110f096d8,1);
        _objc_release(puVar12);
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain();
    puVar2 = PTR_PTR_1126b10e0;
    _objc_opt_new(PTR_PTR_1126b10e0);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    lVar10 = param_1;
    func_0x00010c08fa60();
    if (lVar10 == 0) {
      func_0x000108f34b20(puVar2,&PTR____CFConstantStringClassReference_110f096d8,1);
    }
    else {
      func_0x00010c1d0640(puVar3);
      func_0x000108f34c94(puVar2,1);
    }
    _objc_release(puVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109bad9dc; end: 109badc2f;  */

uint * FUN_109bad9dc(uint *param_1)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  uint *unaff_x20;
  long alStack_70 [4];
  uint auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_32;
  char cStack_2e;
  undefined2 uStack_2d;
  long lStack_28;
  
  puVar2 = auStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (uint *)&DAT_10f3678c5;
  _sysctlbyname(&DAT_10f3678c5,0,&uStack_40,0,0);
  if ((int)puVar3 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)(uStack_40);
    lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    puVar2 = (uint *)((long)auStack_50 + lVar1);
    puVar3 = (uint *)&DAT_10f3678c5;
    _sysctlbyname(&DAT_10f3678c5,puVar2,&uStack_40,0,0);
    unaff_x20 = puVar2;
    if ((int)puVar3 == 0) {
      uStack_48 = 0;
      *(undefined8 **)((long)alStack_70 + lVar1 + 0x10) = &uStack_48;
      *(undefined4 **)((long)alStack_70 + lVar1) = &uStack_32;
      *(long *)((long)alStack_70 + lVar1 + 8) = (long)&uStack_48 + 4;
      puVar3 = puVar2;
      _sscanf(puVar2,&UNK_10f5a33ac);
      if ((int)puVar3 == 3) {
        if (uStack_32 == 0x6f685069 &&
            CONCAT22(uStack_2d,CONCAT11(cStack_2e,uStack_32._3_1_)) == 0x656e6f) {
          uVar5 = uStack_48._4_4_ + 1;
          if (uStack_48._4_4_ == 0xffffffff) goto LAB_109badb20;
LAB_109badb54:
          uVar6 = (ulong)uVar5;
          uVar7 = 0;
        }
        else if (uStack_32 == 0x64615069 && cStack_2e == '\0') {
          if ((int)uStack_48._4_4_ < 5) {
            if (uStack_48._4_4_ == 2) {
              uVar7 = 0;
              uVar6 = 5;
            }
            else if (uStack_48._4_4_ == 3) {
              uVar5 = 5;
              if (3 < (uint)uStack_48) {
                uVar5 = 6;
              }
              uVar6 = (ulong)uVar5;
              uVar7 = 0x58;
            }
            else {
              if (uStack_48._4_4_ != 4) goto LAB_109badb20;
              uVar7 = 0;
              uVar6 = 7;
            }
          }
          else {
            if (uStack_48._4_4_ == 5) {
              uVar5 = 0;
              if (2 < (uint)uStack_48) {
                uVar5 = 0x58;
              }
              uVar7 = (ulong)uVar5;
              goto LAB_109badbd8;
            }
            if (uStack_48._4_4_ == 6) {
              uVar5 = 0x58;
              if (8 < (uint)uStack_48) {
                uVar5 = 0;
              }
              uVar7 = (ulong)uVar5;
              uVar6 = 9;
            }
            else {
              if (uStack_48._4_4_ != 7) goto LAB_109badb20;
              uVar5 = 0x58;
              if (4 < (uint)uStack_48) {
                uVar5 = 0;
              }
              uVar7 = (ulong)uVar5;
              uVar6 = 10;
            }
          }
        }
        else {
          if (uStack_32 != 0x646f5069 || cStack_2e != '\0') goto LAB_109badb20;
          uVar5 = uStack_48._4_4_;
          if (uStack_48._4_4_ == 5) goto LAB_109badb54;
          if (uStack_48._4_4_ != 7) goto LAB_109badb20;
          uVar7 = 0;
LAB_109badbd8:
          uVar6 = 8;
        }
        *(ulong *)((long)alStack_70 + lVar1 + 0x10) = uVar6;
        *(ulong *)((long)alStack_70 + lVar1 + 0x18) = uVar7;
        puVar3 = param_1;
        _snprintf(param_1,0x30,&UNK_10f5a33c7);
        goto LAB_109badb20;
      }
    }
  }
  ___error();
  puVar3 = (uint *)(ulong)*puVar3;
  _strerror();
LAB_109badb20:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  *(uint **)(puVar2 + -8) = unaff_x20;
  *(uint **)(puVar2 + -6) = param_1;
  *(undefined1 **)(puVar2 + -4) = &stack0xfffffffffffffff0;
  *(code **)(puVar2 + -2) = FUN_109badc30;
  puVar2[-10] = 0;
  puVar2[-9] = 0;
  puVar2[-0xb] = 0;
  puVar4 = puVar3;
  _sysctlbyname();
  if ((int)puVar4 == 0) {
    if (*(long *)(puVar2 + -10) == 4) {
      _sysctlbyname(puVar3,puVar2 + -0xb,puVar2 + -10,0,0);
      return (uint *)(ulong)puVar2[-0xb];
    }
  }
  else {
    ___error();
    _strerror(*puVar4);
  }
  return (uint *)0x0;
}



/* Entry: 109badc30; end: 109badcb3;  */

undefined4 FUN_109badc30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_2c;
  long lStack_28;
  
  lStack_28 = 0;
  uStack_2c = 0;
  puVar1 = param_1;
  _sysctlbyname(param_1,0,&lStack_28,0,0);
  if ((int)puVar1 == 0) {
    if (lStack_28 == 4) {
      _sysctlbyname(param_1,&uStack_2c,&lStack_28,0,0);
      return uStack_2c;
    }
  }
  else {
    ___error();
    _strerror(*puVar1);
  }
  return 0;
}


