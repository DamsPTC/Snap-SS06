/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cb1af8; end: 106cb1b73; -[SCUserSync hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106cb1af8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275bdc4);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + _DAT_11275bdc8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106cb1c08;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (*(long *)((long)puVar2 + (long)_DAT_11275bdc8) !=
        *(long *)((long)param_3 + (long)_DAT_11275bdc8))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_106cb1c08;
    }
    puVar4 = *(undefined8 **)((long)puVar2 + (long)_DAT_11275bdc4);
    if (puVar4 != *(undefined8 **)((long)param_3 + (long)_DAT_11275bdc4)) {
      func_0x00010c071ae0();
      goto LAB_106cb1c08;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_106cb1c08:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106cb1b74; end: 106cb1c23; -[SCUserSync isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106cb1b74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cb1c08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (*(long *)(param_1 + (long)_DAT_11275bdc8) != *(long *)(param_3 + (long)_DAT_11275bdc8))) {
      lVar3 = 0;
      goto LAB_106cb1c08;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11275bdc4);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11275bdc4)) {
      func_0x00010c071ae0();
      goto LAB_106cb1c08;
    }
  }
  lVar3 = 1;
LAB_106cb1c08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cb1c24; end: 106cb1c33; -[SCUserSync userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cb1c24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bdc4);
}



/* Entry: 106cb1c34; end: 106cb1c43; -[SCUserSync attemptCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cb1c34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bdc8);
}



/* Entry: 106cb1c44; end: 106cb1c57; -[SCUserSync .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb1c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275bdc4,0);
  return;
}



/* Entry: 106cb1c58; end: 106cb1cbb;  */

undefined ** FUN_106cb1c58(void)

{
  int iVar1;
  
  if ((bRam000000011381e830 & 1) == 0) {
    iVar1 = 0x1381e830;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113184190,0x100000000);
      ___cxa_guard_release(0x11381e830);
    }
  }
  return &PTR_PTR_113184190;
}



/* Entry: 106cb1cbc; end: 106cb1d43;  */

void FUN_106cb1cbc(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cb1d44; end: 106cb1dcf;  */

void FUN_106cb1d44(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106cb1dd0; end: 106cb1e87;  */

undefined8 FUN_106cb1dd0(void)

{
  int iVar1;
  
  if ((bRam000000011381e8a8 & 1) == 0) {
    iVar1 = 0x1381e8a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381e840 = 0xe;
      puRam000000011381e848 = &UNK_10f3cd240;
      uRam000000011381e850 = 0x10001;
      pcRam000000011381e858 = FUN_106cb1e88;
      pcRam000000011381e860 = FUN_106cb1ec0;
      ppuRam000000011381e838 = &PTR_DAT_110864b98;
      uRam000000011381e878 = 0;
      uRam000000011381e870 = 0;
      uRam000000011381e888 = 0;
      uRam000000011381e880 = 0;
      uRam000000011381e898 = 0;
      uRam000000011381e890 = 0;
      uRam000000011381e8a0 = 0;
      ___cxa_atexit(&DAT_105077cd4,0x11381e838,0x100000000);
      ___cxa_guard_release(0x11381e8a8);
    }
  }
  return 0x11381e838;
}



/* Entry: 106cb1e88; end: 106cb1ebf;  */

undefined8 FUN_106cb1e88(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 106cb1ec0; end: 106cb1f13;  */

undefined8 FUN_106cb1ec0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c118da0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106cb1f14; end: 106cb1fcf;  */

undefined8 FUN_106cb1f14(void)

{
  int iVar1;
  
  if ((bRam000000011381e920 & 1) == 0) {
    iVar1 = 0x1381e920;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381e8b8 = 0xe;
      puRam000000011381e8c0 = &UNK_10f3cd24d;
      uRam000000011381e8c8 = 0x1010000;
      pcRam000000011381e8d0 = FUN_106cb1fd0;
      pcRam000000011381e8d8 = FUN_106cb2008;
      ppuRam000000011381e8b0 = &PTR_DAT_110864b98;
      uRam000000011381e8f0 = 0;
      uRam000000011381e8e8 = 0;
      uRam000000011381e900 = 0;
      uRam000000011381e8f8 = 0;
      uRam000000011381e910 = 0;
      uRam000000011381e908 = 0;
      uRam000000011381e918 = 0;
      ___cxa_atexit(&DAT_105077cd4,0x11381e8b0,0x100000000);
      ___cxa_guard_release(0x11381e920);
    }
  }
  return 0x11381e8b0;
}



/* Entry: 106cb1fd0; end: 106cb2007;  */

undefined8 FUN_106cb1fd0(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 106cb2008; end: 106cb205b;  */

undefined8 FUN_106cb2008(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf179e0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106cb205c; end: 106cb2067; +[SCDeviceProperty table] */

undefined * FUN_106cb205c(void)

{
  return &UNK_10f3cd25e;
}



/* Entry: 106cb2068; end: 106cb2397; +[SCDeviceProperty immutableObjectParse:bufferSize:] */

void FUN_106cb2068(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  char cVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar5 = PTR_PTR_1126d1ff0;
  _objc_alloc(PTR_PTR_1126d1ff0);
  lVar6 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar3 < 5) {
    puVar8 = (undefined *)0x0;
    uVar11 = 0;
    cVar14 = '\0';
    uVar9 = 0;
    uVar10 = 0;
    bVar4 = false;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    goto LAB_106cb2190;
  }
  uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
  if (uVar7 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar7);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar2 + (ulong)*puVar2 + 4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)*piVar1;
    uVar3 = *(ushort *)((long)piVar1 - lVar6);
  }
  lVar6 = -lVar6;
  uVar16 = 0;
  uVar17 = 0;
  if (uVar3 < 7) {
    uVar9 = 0;
LAB_106cb2184:
    cVar14 = '\0';
    uVar10 = 0;
LAB_106cb2188:
    uVar11 = 0;
    bVar4 = false;
LAB_106cb218c:
    uVar15 = 0;
LAB_106cb2190:
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 6);
    if (uVar7 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    if (uVar3 < 9) goto LAB_106cb2184;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 8);
    if (uVar7 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    if (uVar3 < 0xb) {
      cVar14 = '\0';
      goto LAB_106cb2188;
    }
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 10);
    if (uVar7 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = *(char *)((long)piVar1 + uVar7);
    }
    if (uVar3 < 0xd) goto LAB_106cb2188;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0xc);
    if (uVar7 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)piVar1 + uVar7) != '\0';
    }
    if (uVar3 < 0xf) {
      uVar11 = 0;
      goto LAB_106cb218c;
    }
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0xe);
    if (uVar7 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    if (uVar3 < 0x11) goto LAB_106cb218c;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0x10);
    if (uVar7 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    if (uVar3 < 0x13) goto LAB_106cb2190;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0x12);
    if (uVar7 != 0) {
      uVar17 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    if (uVar3 < 0x15) goto LAB_106cb2190;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0x14);
    if (uVar7 != 0) {
      uVar16 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    if (uVar3 < 0x17) goto LAB_106cb2190;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0x16);
    if (uVar7 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((0x18 < uVar3) && (*(short *)((long)piVar1 + lVar6 + 0x18) != 0)) {
      puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      goto LAB_106cb2198;
    }
  }
  puVar13 = (undefined *)0x0;
LAB_106cb2198:
  func_0x00010c05b8e0(uVar17,uVar16,puVar5,param_2,puVar8,uVar9,uVar10,(int)cVar14,bVar4,uVar11,
                      uVar15,puVar12,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106cb2398; end: 106cb23bb; +[SCDeviceProperty objectClassFunctionPointer] */

undefined1  [16] FUN_106cb2398(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x106cb23b4;
  auVar1._0_8_ = 0x106cb23ac;
  return auVar1;
}



/* Entry: 106cb23bc; end: 106cb250f;  */

undefined1 *
FUN_106cb23bc(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  _objc_retain(param_5);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_78 = PTR_PTR_1126f6210;
    lStack_80 = param_3;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      *(undefined1 *)((long)plVar1 + 0x14) = param_8;
      *(undefined1 *)((long)plVar1 + 0x15) = param_9;
      *(undefined8 *)((long)plVar1 + 0x38) = param_10;
      *(undefined8 *)((long)plVar1 + 0x40) = param_11;
      *(undefined4 *)((long)plVar1 + 0x18) = param_1;
      *(undefined8 *)((long)plVar1 + 0x48) = param_2;
      _objc_retain(param_12);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x50);
      *(undefined8 *)((long)plVar1 + 0x50) = param_12;
      _objc_release(uVar2);
      _objc_retain(param_13);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x58);
      *(undefined8 *)((long)plVar1 + 0x58) = param_13;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_5);
  return puVar3;
}



/* Entry: 106cb2510; end: 106cb2583;  */

void FUN_106cb2510(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106cb2584();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106cb2584; end: 106cb2a4f;  */

void FUN_106cb2584(undefined8 param_1,undefined *param_2)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_78;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar11 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar11 < 0) {
      puVar11 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar11 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar11;
        func_0x00010bf636c0();
        _objc_release(puVar11);
        func_0x0001001b9e08(puVar1,&UNK_10f3cd26d);
        puVar11 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_106cb2984;
        puVar11 = param_2;
        func_0x00010c2923e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar11;
        _objc_retainAutorelease(puVar11);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar11);
        _objc_release(puVar11);
        puVar11 = param_2;
        func_0x00010c118da0(param_2);
        _sqlite3_bind_int64(puVar1,2,puVar11);
        puVar11 = puVar1;
        _sqlite3_step();
        if ((int)puVar11 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar11 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d1ff0);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar11;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          _objc_release(puVar11);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_106cb297c;
          puVar11 = PTR_PTR_1126d1ff8;
          _objc_alloc();
          puStack_78 = puVar3;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar3;
          func_0x00010c118da0(puVar3);
          puVar4 = puVar3;
          func_0x00010bf179e0(puVar3);
          puVar5 = puVar3;
          func_0x00010c2950a0(puVar3);
          puVar6 = puVar3;
          func_0x00010c294f80(puVar3);
          puVar7 = puVar3;
          func_0x00010c295040(puVar3);
          puVar8 = puVar3;
          func_0x00010c2950c0();
          func_0x00010c295020(puVar3);
          uVar12 = param_1;
          func_0x00010c294fe0(puVar3);
          puVar9 = puVar3;
          func_0x00010c295080();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar3;
          func_0x00010c294fc0();
          _objc_retainAutoreleasedReturnValue();
          FUN_106cb23bc(param_1,uVar12,puVar11,puVar2,puStack_78,puVar1,puVar4,puVar5,puVar6,puVar7,
                        puVar8,puVar9,puVar10);
          param_2 = puVar3;
          goto LAB_106cb270c;
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar11 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d1ff0);
      puVar2 = puVar11;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar11);
      if (puVar2 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126d1ff8;
        _objc_alloc();
        puStack_78 = puVar2;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c118da0(puVar2);
        puVar4 = puVar2;
        func_0x00010bf179e0(puVar2);
        puVar5 = puVar2;
        func_0x00010c2950a0(puVar2);
        puVar6 = puVar2;
        func_0x00010c294f80(puVar2);
        puVar7 = puVar2;
        func_0x00010c295040(puVar2);
        puVar8 = puVar2;
        func_0x00010c2950c0();
        func_0x00010c295020(puVar2);
        uVar12 = param_1;
        func_0x00010c294fe0(puVar2);
        puVar9 = puVar2;
        func_0x00010c295080();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010c294fc0();
        _objc_retainAutoreleasedReturnValue();
        FUN_106cb23bc(param_1,uVar12,puVar11,puVar1,puStack_78,puVar3,puVar4,puVar5,puVar6,puVar7,
                      puVar8,puVar9,puVar10);
        param_2 = puVar2;
LAB_106cb270c:
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puStack_78);
        goto LAB_106cb2984;
      }
LAB_106cb297c:
      param_2 = (undefined *)0x0;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_106cb2984:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106cb2a50; end: 106cb2ac3;  */

void FUN_106cb2a50(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106cb2584();
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



/* Entry: 106cb2ac4; end: 106cb2dff;  */

void FUN_106cb2ac4(undefined8 param_1,long param_2,undefined1 *param_3)

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
  undefined *puVar11;
  undefined8 uVar12;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d1ff8;
  FUN_106cb2510(PTR_PTR_1126d1ff8,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar11 = PTR_PTR_1126d1ff8;
    _objc_retain(param_2);
    _objc_opt_self(puVar11);
    puVar11 = PTR_PTR_1126d1ff8;
    if (param_2 == 0) {
      _objc_opt_new();
      *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      lVar2 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c118da0();
      lVar4 = param_2;
      func_0x00010bf179e0(param_2);
      lVar5 = param_2;
      func_0x00010c2950a0(param_2);
      lVar6 = param_2;
      func_0x00010c294f80(param_2);
      lVar7 = param_2;
      func_0x00010c295040(param_2);
      lVar8 = param_2;
      func_0x00010c2950c0();
      func_0x00010c295020(param_2);
      uVar12 = param_1;
      func_0x00010c294fe0(param_2);
      lVar9 = param_2;
      func_0x00010c295080();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_2;
      func_0x00010c294fc0();
      _objc_retainAutoreleasedReturnValue();
      FUN_106cb23bc(param_1,uVar12,puVar11,0xffffffffffffffff,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,
                    lVar8,lVar9,lVar10);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar2);
    }
    *(undefined4 *)(puVar11 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    lVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c118da0();
    *(long *)(puVar1 + 0x28) = lVar2;
    lVar2 = param_2;
    func_0x00010bf179e0();
    *(long *)(puVar1 + 0x30) = lVar2;
    lVar2 = param_2;
    func_0x00010c2950a0();
    puVar1[0x14] = (char)lVar2;
    lVar2 = param_2;
    func_0x00010c294f80();
    puVar1[0x15] = (char)lVar2;
    lVar2 = param_2;
    func_0x00010c295040();
    *(long *)(puVar1 + 0x38) = lVar2;
    lVar2 = param_2;
    func_0x00010c2950c0();
    *(long *)(puVar1 + 0x40) = lVar2;
    func_0x00010c295020(param_2);
    *(int *)(puVar1 + 0x18) = (int)param_1;
    func_0x00010c294fe0(param_2);
    *(undefined8 *)(puVar1 + 0x48) = param_1;
    lVar2 = param_2;
    func_0x00010c295080(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c294fc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    _objc_retain(puVar1);
    puVar11 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106cb2e00; end: 106cb2e8b;  */

void FUN_106cb2e00(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d1ff0;
    _objc_alloc(PTR_PTR_1126d1ff0);
    func_0x00010c05b8e0(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x48));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb2e8c; end: 106cb2ec7; -[SCDevicePropertyChangeRequest .cxx_destruct] */

void FUN_106cb2e8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 106cb2ec8; end: 106cb2ed3; -[SCDevicePropertyChangeRequest table] */

undefined * FUN_106cb2ec8(void)

{
  return &UNK_10f3cd25e;
}



/* Entry: 106cb2ed4; end: 106cb2f1b; -[SCDevicePropertyChangeRequest createTableWithSQLite:] */

void FUN_106cb2ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dded670,0xa0,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 106cb2f1c; end: 106cb330b; -[SCDevicePropertyChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106cb2f1c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_106cb2e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106cb330c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar10;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3cd2e7);
    if (lVar6 == 0) goto LAB_106cb32a8;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar4);
    puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar10 + (ulong)*puVar10);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar7 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar6,3,uVar9);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106cb32a8;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar5);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d1ff0);
    func_0x00010c21c9a0(puVar8);
LAB_106cb3290:
    _objc_release(puVar8);
    _objc_retain(puVar5);
    puVar8 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f3cd2bd);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d1ff0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar8);
            _objc_release(puVar5);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106cb32b4;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_106cb32b4;
    }
    FUN_106cb2e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106cb330c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f3cd330);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar4);
      puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar10 + (ulong)*puVar10);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar7 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,4,uVar9);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d1ff0);
        func_0x00010c21c9a0(puVar8);
        goto LAB_106cb3290;
      }
    }
LAB_106cb32a8:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106cb32b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106cb330c; end: 106cb35f3;  */

ulong FUN_106cb330c(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_106cb35f4(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010c118da0(param_3);
  uVar7 = param_3;
  func_0x00010bf179e0(param_3);
  uVar8 = param_3;
  func_0x00010c2950a0();
  uVar9 = param_3;
  func_0x00010c294f80();
  uVar10 = param_3;
  func_0x00010c295040();
  uVar11 = param_3;
  func_0x00010c2950c0(param_3);
  func_0x00010c295020(param_3);
  uVar18 = param_1;
  func_0x00010c294fe0(param_3);
  uVar12 = param_3;
  func_0x00010c295080();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  FUN_106cb35f4(param_2,uVar12);
  uVar14 = param_3;
  func_0x00010c294fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar14 == 0) {
    uVar17 = 0;
  }
  else {
    uVar15 = uVar14;
    _objc_retainAutorelease(uVar14);
    func_0x00010bf25f00();
    uVar16 = uVar14;
    func_0x00010c08fa60(uVar14);
    uVar17 = param_2;
    func_0x0001001d1030(param_2,uVar15,uVar16);
  }
  _objc_release(uVar14);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(uVar18,0,param_2,0x14);
  func_0x0001001ce170(param_2,0x10,uVar11,0);
  func_0x0001001ce1c8(param_2,0xe,uVar10,0);
  func_0x0001001ce170(param_2,8,uVar7,0);
  func_0x0001001ce170(param_2,6,uVar6,0);
  func_0x0001001ce220(param_2,0x18,uVar17 & 0xffffffff);
  func_0x0001001ce2e4(param_2,0x16,uVar13 & 0xffffffff);
  func_0x0001001ce290(param_1,0,param_2,0x12);
  func_0x0001001ce2e4(param_2,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_2,0xc,uVar9 & 0xffffffff,0);
  func_0x0001001ce42c(param_2,10,uVar8 & 0xffffffff,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106cb35f4; end: 106cb3723;  */

undefined8 FUN_106cb35f4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_106cb36d4;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_106cb36d4;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_106cb3694;
    param_1 = 0;
  }
  else {
LAB_106cb3694:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_106cb36d4:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106cb3724; end: 106cb3787;  */

undefined ** FUN_106cb3724(void)

{
  int iVar1;
  
  if ((bRam000000011381e928 & 1) == 0) {
    iVar1 = 0x1381e928;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113184200,0x100000000);
      ___cxa_guard_release(0x11381e928);
    }
  }
  return &PTR_PTR_113184200;
}



/* Entry: 106cb3788; end: 106cb380f;  */

void FUN_106cb3788(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cb3810; end: 106cb389b;  */

void FUN_106cb3810(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106cb389c; end: 106cb38a7; +[SCUserSync table] */

undefined * FUN_106cb389c(void)

{
  return &UNK_10f3cd382;
}



/* Entry: 106cb38a8; end: 106cb3997; +[SCUserSync immutableObjectParse:bufferSize:] */

void FUN_106cb38a8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d2008;
  _objc_alloc(PTR_PTR_1126d2008);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    if ((6 < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6)), uVar7 != 0)) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar7);
      goto LAB_106cb3958;
    }
  }
  uVar4 = 0;
LAB_106cb3958:
  func_0x00010c05ac60(puVar3,param_2,puVar8,uVar4);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106cb3998; end: 106cb39bb; +[SCUserSync objectClassFunctionPointer] */

undefined1  [16] FUN_106cb3998(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x106cb39b4;
  auVar1._0_8_ = 0x106cb39ac;
  return auVar1;
}



/* Entry: 106cb39bc; end: 106cb3a5f;  */

undefined1 * FUN_106cb39bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126f6218;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106cb3a60; end: 106cb3d83;  */

void FUN_106cb3a60(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar5 < 0) {
      puVar5 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010bf636c0();
        _objc_release(puVar5);
        func_0x0001001b9e08(puVar1,&UNK_10f3cd38b);
        puVar5 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_106cb3cf0;
        puVar5 = param_1;
        func_0x00010c2923e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar5);
        _objc_release(puVar5);
        puVar5 = puVar1;
        _sqlite3_step();
        if ((int)puVar5 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar5 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d2008);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar5;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar5);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_106cb3ce8;
          puVar5 = PTR_PTR_1126d2010;
          _objc_alloc(PTR_PTR_1126d2010);
          puVar1 = puVar3;
          func_0x00010c2923e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf0d8c0(puVar3);
          FUN_106cb39bc(puVar5,puVar2,puVar1,puVar4);
          param_1 = puVar3;
          goto LAB_106cb3b3c;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d2008);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126d2010;
        _objc_alloc(PTR_PTR_1126d2010);
        puVar1 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf0d8c0(puVar3);
        FUN_106cb39bc(puVar5,puVar2,puVar1,puVar4);
        param_1 = puVar3;
LAB_106cb3b3c:
        _objc_release(puVar1);
        goto LAB_106cb3cf0;
      }
LAB_106cb3ce8:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_106cb3cf0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106cb3d84; end: 106cb3df7;  */

void FUN_106cb3d84(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106cb3a60();
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



/* Entry: 106cb3df8; end: 106cb3fbb;  */

void FUN_106cb3df8(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d2010;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_106cb3a60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar4 = PTR_PTR_1126d2010;
    _objc_retain(param_1);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126d2010;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c2923e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf0d8c0(param_1);
      FUN_106cb39bc(puVar4,0xffffffffffffffff,puVar2,puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar4 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar4 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010bf0d8c0();
    *(undefined **)(puVar1 + 0x20) = puVar4;
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106cb3fbc; end: 106cb401b;  */

void FUN_106cb3fbc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d2008;
    _objc_alloc(PTR_PTR_1126d2008);
    func_0x00010c05ac60();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb401c; end: 106cb4027; -[SCUserSyncChangeRequest .cxx_destruct] */

void FUN_106cb401c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106cb4028; end: 106cb4033; -[SCUserSyncChangeRequest table] */

undefined * FUN_106cb4028(void)

{
  return &UNK_10f3cd382;
}



/* Entry: 106cb4034; end: 106cb407b; -[SCUserSyncChangeRequest createTableWithSQLite:] */

void FUN_106cb4034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dded710,0x76,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 106cb407c; end: 106cb4403; -[SCUserSyncChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106cb407c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_106cb3fbc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106cb4404(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3cd3e5);
    if (lVar6 == 0) goto LAB_106cb43a0;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106cb43a0;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d2008);
    func_0x00010c21c9a0(puVar7);
LAB_106cb4388:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f3cd3c1);
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
            _objc_opt_class(PTR_PTR_1126d2008);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106cb43ac;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_106cb43ac;
    }
    FUN_106cb3fbc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106cb4404(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f3cd416);
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
        _objc_opt_class(PTR_PTR_1126d2008);
        func_0x00010c21c9a0(puVar7);
        goto LAB_106cb4388;
      }
    }
LAB_106cb43a0:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106cb43ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106cb4404; end: 106cb45df;  */

ulong FUN_106cb4404(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_106cb4504;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_106cb4504;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_106cb44c4;
    uVar9 = 0;
  }
  else {
LAB_106cb44c4:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_106cb4504:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010bf0d8c0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,6,pcVar5,0);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106cb45e0; end: 106cb4653; -[SCSupportsHevcPropertyHandler initWithRdc:] */

undefined1 * FUN_106cb45e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6220;
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



/* Entry: 106cb4654; end: 106cb48c7; -[SCSupportsHevcPropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_106cb4654(long param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 in_b0;
  undefined1 uVar12;
  undefined1 in_register_00005001;
  undefined1 uVar13;
  undefined1 in_register_00005002;
  undefined1 uVar14;
  undefined1 in_register_00005003;
  undefined1 uVar15;
  undefined1 in_register_00005004;
  undefined1 uVar16;
  undefined1 in_register_00005005;
  undefined1 uVar17;
  undefined1 in_register_00005006;
  undefined1 uVar18;
  undefined1 in_register_00005007;
  undefined1 uVar19;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  lVar10 = *(long *)(param_1 + 8);
  lVar2 = param_3;
  func_0x00010c122fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c292740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc4ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  lVar2 = param_3;
  func_0x00010c122fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c292740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(lVar4);
      uVar8 = 1;
      func_0x000106cb4b44(1);
      _objc_retainAutoreleasedReturnValue();
LAB_106cb4870:
      _objc_release(lVar10);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar4);
      }
      lVar5 = lVar10;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
LAB_106cb484c:
        uVar8 = 0;
        func_0x000106cb4b44(0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar4);
        goto LAB_106cb4870;
      }
      lVar6 = lVar5;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) goto LAB_106cb484c;
      func_0x00010bf179e0(lVar5);
      dVar1 = (double)CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(
                                                  uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))
                                              ));
      _objc_release(lVar6);
      if (dVar1 + 604800000.0 <
          (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0))))))))
      goto LAB_106cb484c;
      lVar6 = lVar5;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf1f3c0();
      _objc_release(lVar6);
      if ((int)lVar7 == 0) goto LAB_106cb484c;
      _objc_release(lVar5);
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106cb48c8; end: 106cb48d3; -[SCSupportsHevcPropertyHandler .cxx_destruct] */

void FUN_106cb48c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cb48d4; end: 106cb49a7; -[SCSupportsHevcPropertyHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb48d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + _DAT_11275be14;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c118c80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d2018;
  _objc_alloc(PTR_PTR_1126d2018);
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_11275be1c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010c122b40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ce20(puVar3,param_2,lVar5);
  func_0x00010c126ee0(lVar2,param_2,0x30,puVar3,0);
  _objc_release(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cb49a8; end: 106cb4a33; -[SCSupportsHevcPropertyHandlerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb49a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11275be14;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c118c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e1e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126f6228;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cb4a34; end: 106cb4a77; -[SCSupportsHevcPropertyHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb4a34(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275be1c);
  _objc_destroyWeak(param_1 + _DAT_11275be14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275be18);
  return;
}



/* Entry: 106cb4a78; end: 106cb4a8f; -[SCCofOverrideFetcher initWithPropertyOverrideFilePath:] */

undefined8 FUN_106cb4a78(void)

{
  _objc_release();
  return 0;
}



/* Entry: 106cb4a90; end: 106cb4a97; -[SCCofOverrideFetcher getPropertyOverride:] */

undefined8 FUN_106cb4a90(void)

{
  return 0;
}



/* Entry: 106cb4a98; end: 106cb4a9b; -[SCCofOverrideFetcher refreshPropertyOverridesMap] */

void FUN_106cb4a98(void)

{
  return;
}



/* Entry: 106cb4a9c; end: 106cb4aa3; -[SCCofOverrideFetcher readDataFromFile] */

undefined8 FUN_106cb4a9c(void)

{
  return 0;
}



/* Entry: 106cb4aa4; end: 106cb4aab; -[SCCofOverrideFetcher propertyOverrideFilePath] */

undefined8 FUN_106cb4aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cb4aac; end: 106cb4adb; -[SCCofOverrideFetcher setPropertyOverrideFilePath:] */

void FUN_106cb4aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cb4adc; end: 106cb4ae3; -[SCCofOverrideFetcher propertyOverridesMap] */

undefined8 FUN_106cb4adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cb4ae4; end: 106cb4b13; -[SCCofOverrideFetcher setPropertyOverridesMap:] */

void FUN_106cb4ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cb4b14; end: 106cb4b7b; -[SCCofOverrideFetcher .cxx_destruct] */

void FUN_106cb4b14(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cb4b7c; end: 106cb4bbb;  */

void FUN_106cb4b7c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af9b8;
  _objc_alloc_init(PTR_PTR_1126af9b8);
  func_0x00010c19de40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb4bbc; end: 106cb4c73;  */

void FUN_106cb4bbc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af9b8;
  _objc_alloc_init(PTR_PTR_1126af9b8);
  func_0x00010c1add20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb4c74; end: 106cb4cdb; +[SCCofClientPropertyOverrideList descriptor] */

void FUN_106cb4c74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7d20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2fce0,
                        &PTR____CFConstantStringClassReference_110e81ed8,
                        &PTR_s_snapchat_cdp_cof_113184270,&PTR_DAT_113184288,1,0x10,0x1c);
    puRam00000001136c7d20 = puVar1;
  }
  return;
}



/* Entry: 106cb4cdc; end: 106cb4d43; +[SCCofClientPropertyOverride descriptor] */

void FUN_106cb4cdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7d28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2fd30,
                        &PTR____CFConstantStringClassReference_110e81ef8,
                        &PTR_s_snapchat_cdp_cof_113184270,&PTR_s_propertyId_1131842a8,3,0x18,0x1c);
    puRam00000001136c7d28 = puVar1;
  }
  return;
}



/* Entry: 106cb4d44; end: 106cb4ddf; -[SCDeviceCapabilityProperty initWithPropertyType:becomesStaleAtMs:item:] */

undefined1 *
FUN_106cb4d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f6230;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1e5100(puVar1);
    func_0x00010c1b5d40(puVar1);
    func_0x00010c16fc60(param_1,puVar1);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106cb4de0; end: 106cb4de7; -[SCDeviceCapabilityProperty propertyType] */

undefined8 FUN_106cb4de0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cb4de8; end: 106cb4def; -[SCDeviceCapabilityProperty setPropertyType:] */

void FUN_106cb4de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106cb4df0; end: 106cb4dfb; -[SCDeviceCapabilityProperty item] */

void FUN_106cb4df0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 106cb4dfc; end: 106cb4e03; -[SCDeviceCapabilityProperty setItem:] */

void FUN_106cb4dfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106cb4e04; end: 106cb4e0b; -[SCDeviceCapabilityProperty becomesStaleAtMs] */

undefined8 FUN_106cb4e04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106cb4e0c; end: 106cb4e13; -[SCDeviceCapabilityProperty setBecomesStaleAtMs:] */

void FUN_106cb4e0c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 106cb4e14; end: 106cb4e1f; -[SCDeviceCapabilityProperty .cxx_destruct] */

void FUN_106cb4e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106cb4e20; end: 106cb4e93; -[SCRecipientDeviceCapabilityServices initWithRecipientDeviceCapability:] */

undefined1 * FUN_106cb4e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6238;
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



/* Entry: 106cb4e94; end: 106cb4e9b; -[SCRecipientDeviceCapabilityServices recipientDeviceCapability] */

undefined8 FUN_106cb4e94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cb4e9c; end: 106cb4ea7; -[SCRecipientDeviceCapabilityServices .cxx_destruct] */

void FUN_106cb4e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cb4ea8; end: 106cb4f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb4ea8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beaad00(param_1);
    lVar1 = param_1 + _DAT_11275be38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf145a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25eee0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb4f1c; end: 106cb4fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb4f1c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_1 + _DAT_11275be3c;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c085740();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126d2020;
    _objc_opt_class(PTR_PTR_1126d2020);
    uVar2 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c2110c0(uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb4fe4; end: 106cb5037; -[SCSystemJobSchedulerEntryPoint _setupBackgroundWakeup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb4fe4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11275be40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c81e0(0x4082c00000000000);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb5038; end: 106cb50f3; -[SCSystemJobSchedulerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb5038(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275be68);
  _objc_destroyWeak(param_1 + _DAT_11275be64);
  _objc_destroyWeak(param_1 + _DAT_11275be3c);
  _objc_destroyWeak(param_1 + _DAT_11275be60);
  _objc_destroyWeak(param_1 + _DAT_11275be5c);
  _objc_destroyWeak(param_1 + _DAT_11275be38);
  _objc_destroyWeak(param_1 + _DAT_11275be58);
  _objc_destroyWeak(param_1 + _DAT_11275be54);
  _objc_destroyWeak(param_1 + _DAT_11275be50);
  _objc_destroyWeak(param_1 + _DAT_11275be4c);
  _objc_destroyWeak(param_1 + _DAT_11275be48);
  _objc_destroyWeak(param_1 + _DAT_11275be44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275be40);
  return;
}



/* Entry: 106cb50f4; end: 106cb5177; -[SCUnauthenticatedJobSchedulerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb50f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11275be6c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be89490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerEmptyUserProviders_11257fec0);
    return;
  }
  return;
}



/* Entry: 106cb5178; end: 106cb5443; -[SCUnauthenticatedJobSchedulerEntryPoint _registerEmptyUserProviders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb5178(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  puVar2 = (undefined *)(param_1 + _DAT_11275be6c);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d2020;
  _objc_opt_class(PTR_PTR_1126d2020);
  puVar3 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar2);
  puVar2 = puVar4;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release();
  iVar1 = (int)puVar4;
  func_0x000100288f58();
  if (iVar1 == 0) {
    puVar3 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf07b60();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
joined_r0x000106cb5288:
    PTR__OBJC_CLASS___NSSet_1126ae870 = puVar3;
    if (puVar4 == (undefined *)0x2) {
      _objc_opt_new(puVar3);
      func_0x00010c21e9c0(puVar2);
      goto LAB_106cb541c;
    }
  }
  else {
    lVar5 = 0;
    if (param_1 != 0) {
      lVar5 = param_1 + _DAT_11275be74;
      _objc_loadWeakRetained();
    }
    lVar6 = lVar5;
    func_0x00010c252360();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c114e20();
    if ((int)lVar7 == 0) {
      puVar3 = PTR_PTR_1126ae520;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf07b60();
      _objc_release(puVar3);
      _objc_release(lVar6);
      _objc_release(lVar5);
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      goto joined_r0x000106cb5288;
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  puVar8 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6bc0;
  puVar3 = PTR_PTR_1126ae960;
  puVar9 = PTR_PTR_1126cebd0;
  func_0x00010c1273e0(PTR_PTR_1126cebd0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c085760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd420(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae970;
  func_0x00010bfe2ec0(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  func_0x00010c2a1660(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar3 = puVar2;
LAB_106cb541c:
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 106cb5444; end: 106cb547f;  */

void FUN_106cb5444(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c21e9c0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cb5480; end: 106cb54c3; -[SCUnauthenticatedJobSchedulerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb5480(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275be74);
  _objc_destroyWeak(param_1 + _DAT_11275be6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275be70);
  return;
}



/* Entry: 106cb54c4; end: 106cb559f; -[SCUserJobProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb54c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275be78);
  *(undefined **)(param_1 + _DAT_11275be78) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_28,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275be7c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf9d5c0(uVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106cb55a0; end: 106cb55eb;  */

void FUN_106cb55a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2028;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb55ec; end: 106cb57ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb55ec(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275be80;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf22660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0d3c80();
    _objc_release(lVar2);
    func_0x00010befa160(lVar4);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c0be7e0(*(undefined8 *)(lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    param_3 = *(undefined8 *)(param_1 + _DAT_11275be78);
    func_0x00010be464a0(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126d2030;
  _objc_retain(param_3);
  _objc_retain(lVar6);
  _objc_alloc(puVar5);
  func_0x00010c020820();
  _objc_release(param_3);
  _objc_release(lVar6);
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11275be78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106cb5800; end: 106cb588b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb5800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2030;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c020820();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275be78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cb588c; end: 106cb5973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb588c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdeee40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_submitOnRegister_112675710);
  if ((uVar2 & 1) != 0) {
    func_0x00010c25f3a0(param_2);
  }
  puVar3 = PTR_PTR_1126d2030;
  _objc_alloc(PTR_PTR_1126d2030);
  uVar2 = param_2;
  func_0x00010bf647a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020820(puVar3);
  _objc_release(uVar2);
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275be78));
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cb5974; end: 106cb5b1b; -[SCUserJobProviderEntryPoint _createJobProcessor:] */

void FUN_106cb5974(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5780);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  puVar4 = PTR_DAT_1126a5788;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010010fab4(param_3,puVar4);
  lVar2 = param_3;
  if ((int)lVar3 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(param_3);
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126ae720;
      func_0x00010bf11fe0(PTR_PTR_1126ae720);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106cb5b1c; end: 106cb5ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb5b1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d2038;
    _objc_alloc(PTR_PTR_1126d2038);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + _DAT_11275be84;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c009360(puVar4,param_2,uVar3,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106cb5ba8; end: 106cb5bd7;  */

void FUN_106cb5ba8(void)

{
  _objc_alloc(PTR_PTR_1126d2040);
  func_0x00010c009340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cb5bd8; end: 106cb5d3b; -[SCUserJobProviderEntryPoint _submitJobProcessorOnRegister:] */

void FUN_106cb5bd8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  FUN_106cb5d3c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126d2020;
  _objc_opt_class(PTR_PTR_1126d2020);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    lVar5 = param_3;
    func_0x00010c0856a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar3 = PTR_DAT_1126a5790;
    _objc_retain(lVar6);
    lVar7 = lVar6;
    func_0x00010010fab4(lVar6,puVar3);
    lVar5 = lVar6;
    if ((int)lVar7 == 0) {
      lVar5 = 0;
    }
    _objc_retain(lVar5);
    _objc_release(lVar6);
    if (lVar5 != 0) {
      lVar7 = lVar6;
      func_0x00010c085540(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25f200(uVar2);
      _objc_release(lVar7);
    }
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cb5d3c; end: 106cb5d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb5d3c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275be8c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cb5d60; end: 106cb5f0b; -[SCUserJobProviderEntryPoint _jobProvidersRegistered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb5d60(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_1;
  FUN_106cb5d3c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126d2020;
  _objc_opt_class(PTR_PTR_1126d2020);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if (uVar2 != 0) {
    func_0x00010c21e9c0(uVar4);
    _objc_retain(param_3);
    lVar6 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        iVar8 = (int)*(undefined8 *)(lVar9 * 8);
        func_0x00010c25f3a0();
        if (iVar8 != 0) {
          func_0x00010bec6160(param_1);
        }
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + _DAT_11275be7c,0);
  _objc_destroyWeak(param_3 + _DAT_11275be80);
  _objc_destroyWeak(param_3 + _DAT_11275be84);
  _objc_destroyWeak(param_3 + _DAT_11275be8c);
  _objc_destroyWeak(param_3 + _DAT_11275be88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_11275be78,0);
  return;
}



/* Entry: 106cb5f0c; end: 106cb5f7b; -[SCUserJobProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb5f0c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275be7c,0);
  _objc_destroyWeak(param_1 + _DAT_11275be80);
  _objc_destroyWeak(param_1 + _DAT_11275be84);
  _objc_destroyWeak(param_1 + _DAT_11275be8c);
  _objc_destroyWeak(param_1 + _DAT_11275be88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275be78,0);
  return;
}



/* Entry: 106cb5f7c; end: 106cb605b; -[SCBatchJob initWithJobUUID:batchCompletionCallback:] */

undefined1 *
FUN_106cb5f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    uVar4 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cb605c; end: 106cb6083; -[SCBatchJob succeededJobs] */

void FUN_106cb605c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cb6084; end: 106cb60ab; -[SCBatchJob failedJobs] */

void FUN_106cb6084(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cb60ac; end: 106cb6127; -[SCBatchJob jobSucceeded:] */

void FUN_106cb60ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c12d360(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c06d0c0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106cb6114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_1);
    return;
  }
  return;
}



/* Entry: 106cb6128; end: 106cb61a3; -[SCBatchJob jobFailed:] */

void FUN_106cb6128(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c12d360(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c06d0c0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106cb6190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_1);
    return;
  }
  return;
}


