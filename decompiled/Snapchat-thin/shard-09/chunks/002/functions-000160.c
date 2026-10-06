/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106af6b70; end: 106af6baf;  */

undefined8 * FUN_106af6b70(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x0001001a597c(param_4,param_3);
  uVar2 = *param_2;
  puVar1 = (undefined8 *)(ulong)(param_1 << 3 | 1);
  func_0x0001001a59d0(puVar1,param_4);
  *puVar1 = uVar2;
  return puVar1 + 1;
}



/* Entry: 106af6bb0; end: 106af6c03;  */

void FUN_106af6bb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000106af6d34();
  while (uStack_48 != 0) {
    uVar2 = *(undefined8 *)(uStack_48 + 0x20);
    puVar1 = param_1;
    FUN_106af6c04(param_1,uStack_48 + 8);
    *puVar1 = uVar2;
    func_0x000106af6d20();
  }
  return;
}



/* Entry: 106af6c04; end: 106af6c2b;  */

long FUN_106af6c04(void)

{
  long alStack_30 [4];
  
  FUN_106af6c2c(alStack_30);
  return alStack_30[0] + 0x20;
}



/* Entry: 106af6c2c; end: 106af6ce7;  */

void FUN_106af6c2c(undefined8 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  
  piVar1 = param_3;
  piVar2 = param_3;
  func_0x0001006039a0();
  func_0x000106af6d04();
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)(ulong)(*param_2 + 1);
    piVar1 = param_2;
    func_0x00010055e6e8();
    if ((int)piVar1 != 0) {
      func_0x0001006039a0(param_3);
      func_0x000106af6d04();
      piVar2 = piVar3;
    }
    piVar1 = param_2;
    func_0x00010055df10(param_2,0x28);
    func_0x00010063bf24(piVar1 + 2,*(undefined8 *)(param_2 + 6),param_3);
    piVar1[8] = 0;
    piVar1[9] = 0;
    func_0x00010055e950(param_2,piVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)piVar2;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 106af6ce8; end: 106af6d63;  */

ulong * FUN_106af6ce8(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (param_3 < (ulong *)*param_1) {
    return param_3;
  }
  do {
    if ((char)param_1[7] == '\x01') {
      return param_1 + 2;
    }
    uVar1 = *param_1;
    puVar2 = param_1;
    func_0x0001006b07dc();
    param_3 = (ulong *)((long)puVar2 + (long)((int)param_3 - (int)uVar1));
  } while ((ulong *)*param_1 <= param_3);
  return param_3;
}



/* Entry: 106af6d64; end: 106af6ddf; -[SCMutableCircularString initWithCapacity:] */

undefined1 * FUN_106af6d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4d30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25d900();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106af6de0; end: 106af6f6f; -[SCMutableCircularString appendString:] */

void FUN_106af6de0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = lVar4 + lVar1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = lVar5 / lVar6;
    }
    lVar7 = lVar5 - lVar7 * lVar6;
    *(long *)(param_1 + 0x10) = lVar7;
    if (lVar5 - lVar6 == 0 || lVar5 < lVar6) {
      if (*(long *)(param_1 + 0x18) < lVar6) {
        func_0x00010bf070e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + lVar1;
      }
      else {
        func_0x00010c130d20(*(undefined8 *)(param_1 + 8),param_2,lVar4,lVar1,param_3);
      }
    }
    else {
      if (*(long *)(param_1 + 0x18) < lVar6) {
        lVar2 = param_3;
        func_0x00010c260c80(param_3,param_2,lVar5 - lVar6,lVar6 - lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(*(undefined8 *)(param_1 + 8),param_2,lVar2);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
        lVar7 = *(long *)(param_1 + 0x10);
        _objc_release(lVar2);
      }
      lVar5 = param_3;
      func_0x00010c260c00(param_3,param_2,lVar1 - lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130d20(*(undefined8 *)(param_1 + 8),param_2,0,*(undefined8 *)(param_1 + 0x10),
                          lVar5);
      lVar6 = *(long *)(param_1 + 0x20);
      lVar7 = param_3;
      if (lVar1 - lVar6 == 0 || lVar1 < lVar6) {
        func_0x00010c260c20(param_3,param_2,lVar6 - lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        uVar3 = *(undefined8 *)(param_1 + 8);
        lVar5 = *(long *)(param_1 + 0x20) - lVar4;
      }
      else {
        func_0x00010c260c80(param_3,param_2,lVar1 - lVar6,lVar6 - *(long *)(param_1 + 0x10));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        uVar3 = *(undefined8 *)(param_1 + 8);
        lVar4 = *(long *)(param_1 + 0x10);
        lVar5 = *(long *)(param_1 + 0x20) - lVar4;
      }
      func_0x00010c130d20(uVar3,param_2,lVar4,lVar5,lVar7);
      _objc_release(lVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106af6f70; end: 106af701b; -[SCMutableCircularString string] */

void FUN_106af6f70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + 0x18) < *(long *)(param_1 + 0x20)) {
    puVar3 = *(undefined **)(param_1 + 8);
    _objc_retain(puVar3);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c260c00(uVar1,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c260c20(uVar2,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106af701c; end: 106af7023; -[SCMutableCircularString length] */

undefined8 FUN_106af701c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106af7024; end: 106af702b; -[SCMutableCircularString capacity] */

undefined8 FUN_106af7024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106af702c; end: 106af7037; -[SCMutableCircularString .cxx_destruct] */

void FUN_106af702c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106af7038; end: 106af70bb; +[SCShakeBetaLogger logEvent:message:] */

void FUN_106af7038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar2;
  
  uVar2 = param_4;
  _objc_retain();
  iVar1 = (int)uVar2;
  func_0x00010795f4d4();
  puVar4 = PTR_PTR_1126d0648;
  if (iVar1 != 0) {
    puVar3 = PTR_PTR_1126d0648;
    func_0x00010bfcb0c0(PTR_PTR_1126d0648,param_2,param_3);
    func_0x00010bfc3240(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bf06d20(puVar4,param_2,param_4,param_3);
    }
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106af70bc; end: 106af7197; +[SCShakeBetaLogger retrieveLogForTeam:completion:] */

void FUN_106af70bc(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong in_x3;
  
  uVar1 = in_x3;
  _objc_retain();
  func_0x00010795f4d4();
  if ((uVar1 & 1) == 0) {
    (**(code **)(in_x3 + 0x10))(in_x3,0);
  }
  else {
    puVar2 = PTR_PTR_1126d0648;
    func_0x00010bfc3240();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      (**(code **)(in_x3 + 0x10))(in_x3,0);
    }
    else {
      _objc_retain(in_x3);
      func_0x00010bfc7300(puVar2);
      _objc_release(in_x3);
    }
    _objc_release(puVar2);
  }
  _objc_release(in_x3);
  return;
}



/* Entry: 106af7198; end: 106af71a3;  */

void FUN_106af7198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106af71a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106af71a4; end: 106af72ff; +[SCShakeBetaLogger writeLogToFileForTeam:baseUrl:completion:] */

void FUN_106af71a4(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 in_x3;
  ulong in_x4;
  
  _objc_retain(in_x3);
  uVar1 = in_x4;
  _objc_retain();
  func_0x00010795f4d4();
  if ((uVar1 & 1) == 0) {
    (**(code **)(in_x4 + 0x10))(in_x4,0);
  }
  else {
    puVar2 = PTR_PTR_1126d0648;
    func_0x00010bfc3240();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      (**(code **)(in_x4 + 0x10))(in_x4,0);
    }
    else {
      puVar3 = puVar2;
      func_0x00010bfacec0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = in_x3;
      func_0x00010bdc2c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126d0650;
      _objc_retain(in_x4);
      _objc_retain(uVar4);
      func_0x00010c13eae0(puVar3);
      _objc_release(in_x4);
      _objc_release(uVar4);
      _objc_release(uVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(in_x4);
  _objc_release(in_x3);
  return;
}



/* Entry: 106af7300; end: 106af7353;  */

void FUN_106af7300(long param_1,undefined8 param_2)

{
  func_0x00010bf64920(param_2,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e060();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106af7354; end: 106af7467; -[SCShakeBetaLoggerBuffer initWithCapacity:fileName:performerLabel:performerContext:] */

undefined1 *
FUN_106af7354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f4d38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d0658;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106af7468; end: 106af7547; -[SCShakeBetaLoggerBuffer appendLog:key:] */

void FUN_106af7468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106af7548; end: 106af7613;  */

void FUN_106af7548(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = PTR_PTR_1126d0648;
    func_0x00010bfc7dc0(PTR_PTR_1126d0648,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e71578);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bf070e0(*(undefined8 *)(lVar1 + 8),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106af7614; end: 106af76eb; -[SCShakeBetaLoggerBuffer getLogData:] */

void FUN_106af7614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106af76ec; end: 106af7753;  */

void FUN_106af76ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c25cd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106af7754; end: 106af775b; -[SCShakeBetaLoggerBuffer capacity] */

undefined8 FUN_106af7754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106af775c; end: 106af7763; -[SCShakeBetaLoggerBuffer fileName] */

undefined8 FUN_106af775c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106af7764; end: 106af779f; -[SCShakeBetaLoggerBuffer .cxx_destruct] */

void FUN_106af7764(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106af77a0; end: 106af77eb; +[SCShakeBetaLoggerConfig getAllTeams] */

void FUN_106af77a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0648;
  func_0x00010be23480(PTR_PTR_1126d0648);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106af77ec; end: 106af786f; +[SCShakeBetaLoggerConfig getBufferForTeam:] */

void FUN_106af77ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d0648;
  func_0x00010be23480(PTR_PTR_1126d0648);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e00e0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106af7870; end: 106af7893; +[SCShakeBetaLoggerConfig getTeamForKey:] */

undefined8 FUN_106af7870(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined8 *)(&UNK_10dde5738 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 106af7894; end: 106af78bb; +[SCShakeBetaLoggerConfig getNameForKey:] */

undefined ** FUN_106af7894(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return (undefined **)(&PTR_PTR_110960528)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd2518;
}



/* Entry: 106af78bc; end: 106af7a0f; +[SCShakeBetaLoggerConfig _getTeamBuffers] */

void FUN_106af78bc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c6678 != -1) {
    func_0x00010002a2fc(0x1136c6678,&PTR___NSConcreteGlobalBlock_110960508);
  }
  uVar1 = uRam00000001136c6670;
  _objc_retain(uRam00000001136c6670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106af7a10; end: 106af7a97; -[SCInternalLogWriter initWithDataWriter:infoProviderRegistry:] */

long FUN_106af7a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106af7a98; end: 106af7b9b; -[SCInternalLogWriter writeLogsToURL:] */

undefined8 FUN_106af7a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(0);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106af7b9c;
  puStack_58 = &UNK_110960548;
  lStack_50 = param_1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010bf97ce0(0,param_2,&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106af7c2c;
  puStack_80 = &UNK_110960578;
  uStack_78 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97c20(uVar2,param_2,&puStack_98);
  _objc_release(uVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(0);
  return 1;
}



/* Entry: 106af7b9c; end: 106af7c2b;  */

void FUN_106af7b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeb940(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106af7c2c; end: 106af7c77;  */

void FUN_106af7c2c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_writeLogsToURL__11268d230);
  if ((uVar1 & 1) != 0) {
    func_0x00010c2be020(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106af7c78; end: 106af7d17; -[SCInternalLogWriter provideMultipleShakeLogs] */

void FUN_106af7c78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106af7d18;
  puStack_30 = &UNK_110960578;
  _objc_retain(puVar1);
  puStack_28 = puVar1;
  func_0x00010bf97c20(uVar2,param_2,&puStack_48);
  _objc_release(uVar2);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106af7d18; end: 106af7dcb;  */

void FUN_106af7d18(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_provideShakeLog_1126240b0);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010c119a40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_provideMultipleShakeLogs_112624080);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010c119980();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      func_0x00010befa160(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106af7dcc; end: 106af7f0b; -[SCInternalLogWriter _writeDataWithFileName:data:baseUrl:] */

undefined8
FUN_106af7dcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar5 = 1;
  }
  else {
    func_0x00010bdc2c60(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0f5800(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c2bdac0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      func_0x00010be64100();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126d0668;
        _objc_opt_new(PTR_PTR_1126d0668);
        lVar3 = param_4;
        func_0x00010c08fa60(param_4);
        FUN_106af8660(puVar4,param_1,lVar3);
        _objc_release(puVar4);
      }
      _objc_release(param_1);
    }
    _objc_release(param_5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106af7f0c; end: 106af832b; -[SCInternalLogWriter _normalizedFeatureFromFileName:] */

void FUN_106af7f0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  uint uVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar1 = uVar2;
    func_0x00010c0f58c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    func_0x00010c08fa60();
    _objc_release(uVar1);
    uVar1 = uVar2;
    while (uVar13 != 0) {
      uVar3 = uVar1;
      func_0x00010c25cea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = uVar3;
      func_0x00010c0f58c0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar1;
      func_0x00010c08fa60();
      _objc_release(uVar1);
      uVar1 = uVar3;
    }
    uVar13 = uVar1;
    func_0x00010bfdcf80(uVar1,param_2,&PTR____CFConstantStringClassReference_110e71678);
    uVar3 = uVar1;
    if ((int)uVar13 != 0) {
      uVar13 = uVar1;
      func_0x00010c08fa60(uVar1);
      ppuVar4 = &PTR____CFConstantStringClassReference_110e71678;
      func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110e71678);
      func_0x00010c260c20(uVar1,param_2,uVar13 - (long)ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c08fa60();
    if (uVar1 != 0) {
      uVar13 = 0;
      do {
        func_0x00010bf35920(uVar3,param_2,uVar13);
        puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c28ed60();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf359c0();
        _objc_release(puVar6);
        if ((uVar13 != 0) && ((int)puVar7 != 0)) {
          func_0x00010bf35920(uVar3,param_2,uVar13 - 1);
          puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c0b5aa0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf359c0();
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010bf66760();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar7;
            func_0x00010bf359c0();
            uVar15 = (uint)puVar14;
            _objc_release(puVar7);
          }
          else {
            uVar15 = 1;
          }
          _objc_release(puVar6);
          if (uVar13 + 1 < uVar1) {
            func_0x00010bf35920(uVar3);
            puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c0b5aa0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010bf359c0();
            uVar12 = (uint)puVar7;
            _objc_release(puVar6);
          }
          else {
            uVar12 = 0;
          }
          if (((uVar15 | uVar12) & 1) != 0) {
            func_0x00010bf070e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dc1338);
          }
        }
        func_0x00010bf06ba0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dc1af8);
        uVar13 = uVar13 + 1;
      } while (uVar1 != uVar13);
    }
    puVar6 = puVar5;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                        &PTR____CFConstantStringClassReference_110e71698);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    puVar14 = puVar6;
    func_0x00010c08fa60(puVar6);
    func_0x00010c25d900(ppuVar8,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar6;
    func_0x00010c08fa60();
    if (puVar14 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        puVar9 = puVar6;
        func_0x00010bf35920(puVar6,param_2,puVar14);
        puVar10 = puVar7;
        func_0x00010bf359c0(puVar7,param_2,puVar9);
        if ((int)puVar10 == 0) {
          func_0x00010bf070e0(ppuVar8,param_2,&PTR____CFConstantStringClassReference_110dc1338);
        }
        else {
          func_0x00010bf06ba0(ppuVar8,param_2,&PTR____CFConstantStringClassReference_110dc1af8);
        }
        puVar14 = puVar14 + 1;
        puVar9 = puVar6;
        func_0x00010c08fa60();
      } while (puVar14 < puVar9);
    }
    puVar14 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                        &PTR____CFConstantStringClassReference_110dc1338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar8;
    func_0x00010c25d0a0(ppuVar8,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    ppuVar4 = ppuVar11;
    func_0x00010c08fa60();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    else {
      _objc_retain(ppuVar11);
      ppuVar4 = ppuVar11;
    }
    _objc_release(ppuVar11);
    _objc_release(ppuVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106af832c; end: 106af835b; -[SCInternalLogWriter .cxx_destruct] */

void FUN_106af832c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106af835c; end: 106af835f; -[SCSnapchatBetaShakeLogWriter writeLogsToURL:] */

void FUN_106af835c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be06ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dumpBetaLogs__11255f448);
  return;
}



/* Entry: 106af8360; end: 106af836b; -[SCSnapchatBetaShakeLogWriter provideMultipleShakeLogs] */

undefined * FUN_106af8360(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106af836c; end: 106af8377; -[SCSnapchatBetaShakeLogWriter asyncLogSources] */

undefined * FUN_106af836c(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106af8378; end: 106af85af; -[SCSnapchatBetaShakeLogWriter _dumpBetaLogs:] */

ulong FUN_106af8378(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  _objc_retain();
  _dispatch_group_create();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  puVar3 = PTR_PTR_1126d0648;
  func_0x00010bfc23e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar3);
      }
      uVar8 = *(undefined8 *)((long)puVar9 * 8);
      _dispatch_group_enter(lVar2);
      puVar1 = PTR_PTR_1126d0650;
      func_0x00010c067fc0(uVar8);
      _objc_retain(lVar2);
      func_0x00010c2be000(puVar1);
      _objc_release(lVar2);
      puVar9 = puVar9 + 1;
    } while (puVar4 != puVar9);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  uVar8 = 0;
  _dispatch_time(0,5000000000);
  _dispatch_group_wait(lVar2,uVar8);
  bVar6 = *(byte *)(puStack_118 + 3);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return (ulong)(bVar6 & 1);
  }
  ___stack_chk_fail();
  bVar6 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  uVar5 = *(ulong *)(param_3 + 0x20);
  _dispatch_group_leave(uVar5);
  lVar7 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  *(byte *)(lVar7 + 0x18) = bVar6 | *(byte *)(lVar7 + 0x18);
  return uVar5;
}



/* Entry: 106af85b0; end: 106af85eb;  */

void FUN_106af85b0(long param_1,byte param_2)

{
  long lVar1;
  
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(byte *)(lVar1 + 0x18) = param_2 | *(byte *)(lVar1 + 0x18);
  return;
}



/* Entry: 106af85ec; end: 106af865f; -[SCGrapheneShakeToReportMetric2 init] */

undefined1 * FUN_106af85ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4d40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106af8660; end: 106af87d3;  */

void FUN_106af8660(long param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b4cd8;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109605c8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar1 = (undefined *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar1 = (undefined *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume(puVar2);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    puVar3 = puVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = puVar1;
    puVar4 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    while (PTR__OBJC_CLASS___UINavigationController_1126af6f0 = puVar4, puVar3 != (undefined *)0x0)
    {
      puVar4 = puVar2;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar3 = puVar4;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar2 = puVar4;
      puVar4 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    }
    _objc_opt_class(puVar4);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar4);
    puVar4 = puVar2;
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010c2a0180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar3 = PTR_PTR_1126b10a8;
    func_0x00010c29c260();
    puVar2 = puVar4;
    if ((int)puVar3 != 0) {
      puVar2 = PTR_PTR_1126b10a8;
      func_0x00010bfc9060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_visibleViewController_112685a88;
    puVar3 = puVar2;
    _objc_opt_respondsToSelector(puVar2,PTR_s_visibleViewController_112685a88);
    while (((ulong)puVar3 & 1) != 0) {
      puVar5 = puVar2;
      func_0x00010c2a0180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar3 = puVar5;
      _objc_opt_respondsToSelector(puVar5,puVar4);
      puVar2 = puVar5;
    }
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106af87d4; end: 106af8937; +[SCShakeToReportUtil topViewControllerForRootViewController:] */

void FUN_106af87d4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = param_3;
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  while (PTR__OBJC_CLASS___UINavigationController_1126af6f0 = puVar2, puVar1 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar1 = puVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = puVar2;
    puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  }
  _objc_opt_class(puVar2);
  puVar1 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar2 = puVar3;
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar1 = PTR_PTR_1126b10a8;
  func_0x00010c29c260();
  puVar3 = puVar2;
  if ((int)puVar1 != 0) {
    puVar3 = PTR_PTR_1126b10a8;
    func_0x00010bfc9060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = PTR_s_visibleViewController_112685a88;
  puVar1 = puVar3;
  _objc_opt_respondsToSelector(puVar3,PTR_s_visibleViewController_112685a88);
  while (((ulong)puVar1 & 1) != 0) {
    puVar4 = puVar3;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar1 = puVar4;
    _objc_opt_respondsToSelector(puVar4,puVar2);
    puVar3 = puVar4;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106af8938; end: 106af8943; +[SCCShakeToReportCodematizerExportComponent componentPath] */

undefined ** FUN_106af8938(void)

{
  return &PTR____CFConstantStringClassReference_110e716b8;
}



/* Entry: 106af8944; end: 106af8963; -[SCCShakeToReportCodematizerExportComponent initWithViewModel:componentContext:runtime:] */

void FUN_106af8944(void)

{
  FUN_106af8b98(PTR_PTR_1126f4d48);
  return;
}



/* Entry: 106af8964; end: 106af8997; -[SCCShakeToReportCodematizerExportComponent setViewModel:] */

void FUN_106af8964(void)

{
  func_0x000106af8bac();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af8bbc();
  func_0x000106af8bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106af8998; end: 106af89cf; -[SCCShakeToReportCodematizerExportComponent viewModel] */

void FUN_106af8998(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af8bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af89d0; end: 106af89db; +[SCCShakeToReportSegmentedControl componentPath] */

undefined ** FUN_106af89d0(void)

{
  return &PTR____CFConstantStringClassReference_110e716d8;
}



/* Entry: 106af89dc; end: 106af89fb; -[SCCShakeToReportSegmentedControl initWithViewModel:componentContext:runtime:] */

void FUN_106af89dc(void)

{
  FUN_106af8b98(PTR_PTR_1126f4d50);
  return;
}



/* Entry: 106af89fc; end: 106af8a2f; -[SCCShakeToReportSegmentedControl setViewModel:] */

void FUN_106af89fc(void)

{
  func_0x000106af8bac();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af8bbc();
  func_0x000106af8bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106af8a30; end: 106af8a67; -[SCCShakeToReportSegmentedControl viewModel] */

void FUN_106af8a30(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af8bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af8a68; end: 106af8a73; +[SCCShakeToReportShakePromptComponent componentPath] */

undefined ** FUN_106af8a68(void)

{
  return &PTR____CFConstantStringClassReference_110e716f8;
}



/* Entry: 106af8a74; end: 106af8a93; -[SCCShakeToReportShakePromptComponent initWithViewModel:componentContext:runtime:] */

void FUN_106af8a74(void)

{
  FUN_106af8b98(PTR_PTR_1126f4d58);
  return;
}



/* Entry: 106af8a94; end: 106af8ac7; -[SCCShakeToReportShakePromptComponent setViewModel:] */

void FUN_106af8a94(void)

{
  func_0x000106af8bac();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af8bbc();
  func_0x000106af8bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106af8ac8; end: 106af8aff; -[SCCShakeToReportShakePromptComponent viewModel] */

void FUN_106af8ac8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af8bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af8b00; end: 106af8b0b; +[SCCShakeToReportShakeToReportComponent componentPath] */

undefined ** FUN_106af8b00(void)

{
  return &PTR____CFConstantStringClassReference_110e71718;
}



/* Entry: 106af8b0c; end: 106af8b2b; -[SCCShakeToReportShakeToReportComponent initWithViewModel:componentContext:runtime:] */

void FUN_106af8b0c(void)

{
  FUN_106af8b98(PTR_PTR_1126f4d60);
  return;
}



/* Entry: 106af8b2c; end: 106af8b5f; -[SCCShakeToReportShakeToReportComponent setViewModel:] */

void FUN_106af8b2c(void)

{
  func_0x000106af8bac();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af8bbc();
  func_0x000106af8bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106af8b60; end: 106af8b97; -[SCCShakeToReportShakeToReportComponent viewModel] */

void FUN_106af8b60(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af8bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af8b98; end: 106af8bf3;  */

void FUN_106af8b98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 106af8bf4; end: 106af8bfb; -[SCCShakeToReportShakePromptResult__Enum init] */

void FUN_106af8bf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 106af8bfc; end: 106af8cb3; -[SCCShakeToReportCodematizerExportContext initWithOnDismiss:onExport:onCopyHierarchy:] */

undefined8 *
FUN_106af8bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x000106af93d8();
  _objc_retainBlock();
  func_0x000106af93d0();
  puStack_48 = PTR_PTR_1126f4d68;
  uStack_50 = param_1;
  func_0x000106af93c4();
  puVar1 = &uStack_50;
  _objc_msgSendSuper2(puVar1,param_2,0);
  func_0x000106af93d8();
  func_0x000106af93f8();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106af8cb4; end: 106af8cc3; +[SCCShakeToReportCodematizerExportContext valdiMarshallableObjectDescriptor] */

void FUN_106af8cb4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onDismiss_110960628;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af8cc4; end: 106af8d03; -[SCCShakeToReportCodematizerExportViewModel initWithTitle:hierarchyTitle:hierarchyText:notesTitle:placeholder:exportButtonTitle:hierarchyActionTitle:] */

void FUN_106af8cc4(undefined8 param_1)

{
  func_0x000106af9384(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106af8d04; end: 106af8d13; +[SCCShakeToReportCodematizerExportViewModel valdiMarshallableObjectDescriptor] */

void FUN_106af8d04(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_title_110960688;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af8d14; end: 106af8d3f; -[SCCShakeToReportScreen initWithName:topics:] */

void FUN_106af8d14(void)

{
  func_0x000106af93c4();
  func_0x000106af9378();
  return;
}



/* Entry: 106af8d40; end: 106af8d5b; +[SCCShakeToReportScreen valdiMarshallableObjectDescriptor] */

void FUN_106af8d40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110960748;
  param_1[1] = &PTR_DAT_110960790;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af8d5c; end: 106af8d8f; -[SCCShakeToReportSegmentedControlContext init] */

void FUN_106af8d5c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4d80;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106af8d90; end: 106af8dab; +[SCCShakeToReportSegmentedControlContext valdiMarshallableObjectDescriptor] */

void FUN_106af8d90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109607d0;
  param_1[1] = 0;
  param_1[2] = &PTR_s_od_v_1109607a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af8dac; end: 106af8dcf;  */

undefined8 FUN_106af8dac(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 106af8dd0; end: 106af8e1f;  */

void FUN_106af8dd0(void)

{
  func_0x000106af9400();
  func_0x000106af93e0();
  func_0x000106af9394(FUN_106af92c8);
  func_0x000106af9408();
  func_0x000106af93b8();
  func_0x000106af93d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af8e20; end: 106af8e4f; -[SCCShakeToReportSegmentedControlViewModel initWithPills:] */

void FUN_106af8e20(void)

{
  func_0x000106af93c4();
  func_0x000106af9384();
  return;
}



/* Entry: 106af8e50; end: 106af8e5f; +[SCCShakeToReportSegmentedControlViewModel valdiMarshallableObjectDescriptor] */

void FUN_106af8e50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110960800;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af8e60; end: 106af8eb3; -[SCCShakeToReportShakePromptContext initWithOnSelected:] */

undefined8 FUN_106af8e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retainBlock();
  func_0x000106af93c4();
  func_0x000106af9378();
  func_0x000106af93d8();
  return param_3;
}



/* Entry: 106af8eb4; end: 106af8ed7; +[SCCShakeToReportShakePromptContext valdiMarshallableObjectDescriptor] */

void FUN_106af8eb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110960890;
  param_1[1] = &PTR_DAT_1109608c0;
  param_1[2] = &PTR_s_oi_v_110960860;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af8ed8; end: 106af8efb;  */

undefined8 FUN_106af8ed8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 106af8efc; end: 106af8f4b;  */

void FUN_106af8efc(void)

{
  func_0x000106af9400();
  func_0x000106af93e0();
  func_0x000106af9394(0x106af92f4);
  func_0x000106af9408();
  func_0x000106af93b8();
  func_0x000106af93d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af8f4c; end: 106af8f77; -[SCCShakeToReportShakePromptViewModel initWithTweaksEnabled:checkForUpdates:] */

void FUN_106af8f4c(void)

{
  func_0x000106af93c4();
  func_0x000106af9378();
  return;
}



/* Entry: 106af8f78; end: 106af8f87; +[SCCShakeToReportShakePromptViewModel valdiMarshallableObjectDescriptor] */

void FUN_106af8f78(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109608d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af8f88; end: 106af9173; -[SCCShakeToReportShakeToReportContext initWithDeckContainerFactory:onDismiss:onDone:onTapImage:onTapReplaceAttachment:onTapRecordVideo:onTapAddVideoFromRoll:onTapRemoveVideo:onTapPrivacyPolicy:imageUpdates:videoUpdates:] */

undefined8 *
FUN_106af8f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain();
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar2 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  _objc_retainBlock();
  func_0x000106af93f8();
  _objc_retainBlock();
  _objc_release(param_8);
  uVar3 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  uVar4 = param_10;
  _objc_retainBlock();
  _objc_release(param_10);
  _objc_retainBlock();
  _objc_release(param_11);
  puStack_70 = PTR_PTR_1126f4da0;
  uStack_78 = param_1;
  func_0x000106af93c4();
  puVar5 = &uStack_78;
  _objc_msgSendSuper2(puVar5,param_2,0);
  func_0x000106af93d8();
  _objc_release(param_12);
  _objc_release(param_3);
  func_0x000106af93d0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x000106af93f8();
  _objc_release(param_7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar5;
}



/* Entry: 106af9174; end: 106af9197; +[SCCShakeToReportShakeToReportContext valdiMarshallableObjectDescriptor] */

void FUN_106af9174(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110960948;
  param_1[1] = &PTR_DAT_110960a68;
  param_1[2] = &PTR_DAT_110960918;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af9198; end: 106af91db;  */

undefined8 FUN_106af9198(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],param_2[5],*param_2,param_2[1],*(uint *)(param_2 + 3) & 1,
             *(uint *)(param_2 + 4) & 1,param_2[6],param_2[7],param_2[8],param_2[9]);
  return 0;
}



/* Entry: 106af91dc; end: 106af922b;  */

void FUN_106af91dc(void)

{
  func_0x000106af9400();
  func_0x000106af93e0();
  func_0x000106af9394(0x106af9324);
  func_0x000106af9408();
  func_0x000106af93b8();
  func_0x000106af93d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af922c; end: 106af926f; -[SCCShakeToReportShakeToReportViewModel initWithTopics:internal:showType:] */

void FUN_106af922c(void)

{
  func_0x000106af93c4();
  func_0x000106af9384();
  return;
}



/* Entry: 106af9270; end: 106af928b; +[SCCShakeToReportShakeToReportViewModel valdiMarshallableObjectDescriptor] */

void FUN_106af9270(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110960a80;
  param_1[1] = &PTR_DAT_110960b70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af928c; end: 106af92b7; -[SCCShakeToReportTopic initWithName:] */

void FUN_106af928c(void)

{
  func_0x000106af93c4();
  func_0x000106af9378();
  return;
}



/* Entry: 106af92b8; end: 106af92c7; +[SCCShakeToReportTopic valdiMarshallableObjectDescriptor] */

void FUN_106af92b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110960b88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af92c8; end: 106af936b;  */

void FUN_106af92c8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106af936c; end: 106af940f;  */

void FUN_106af936c(undefined8 *param_1)

{
  undefined8 in_x9;
  
  *param_1 = in_x9;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106af9410; end: 106af9483; -[SCInternalShakeMenuPluginScope initWithOptionRegistry:] */

undefined1 * FUN_106af9410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4db8;
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



/* Entry: 106af9484; end: 106af948b; -[SCInternalShakeMenuPluginScope optionRegistry] */

undefined8 FUN_106af9484(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106af948c; end: 106af9497; -[SCInternalShakeMenuPluginScope .cxx_destruct] */

void FUN_106af948c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106af9498; end: 106af95ab; -[SCInternalShakeMenuOption initWithEmojiIcon:title:subtitle:dismissS2R:action:] */

undefined1 *
FUN_106af9498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f4dc0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106af95ac; end: 106af95cf; -[SCInternalShakeMenuOption copyWithZone:] */

undefined8 FUN_106af95ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106af95d0; end: 106af95d7; -[SCInternalShakeMenuOption emojiIcon] */

undefined8 FUN_106af95d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106af95d8; end: 106af95df; -[SCInternalShakeMenuOption title] */

undefined8 FUN_106af95d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106af95e0; end: 106af95e7; -[SCInternalShakeMenuOption subtitle] */

undefined8 FUN_106af95e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


