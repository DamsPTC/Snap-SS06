/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0060d904; end: 0060d933; -[SCDocObjectFetchedResult error] */

void FUN_0060d904(long param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_0060d2fc(param_1 + 0x28);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0060d934; end: 0060d943; -[SCDocObjectFetchedResult count] */

long FUN_0060d934(long param_1)

{
  return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3;
}



/* Entry: 0060d944; end: 0060d96f; -[SCDocObjectFetchedResult objectAtIndexedSubscript:] */

void FUN_0060d944(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + param_3 * 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0060d970; end: 0060d9ab; -[SCDocObjectFetchedResult firstObject] */

void FUN_0060d970(long param_1)

{
  undefined8 uVar1;
  
  if (*(undefined8 **)(param_1 + 0x10) == *(undefined8 **)(param_1 + 8)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(param_1 + 8);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0060d9ac; end: 0060d9e7; -[SCDocObjectFetchedResult lastObject] */

void FUN_0060d9ac(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0060d9e8; end: 0060da9b; -[SCDocObjectFetchedResult asArray] */

void FUN_0060d9e8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0,param_2,
                  *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar5 = *(undefined8 **)(param_1 + 8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    uVar4 = *puVar5;
    _objc_retain(uVar4);
    func_0x0077e720(puVar2,param_2,uVar4);
    _objc_release(uVar4);
  }
  puVar3 = puVar2;
  func_0x00780e20(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0060da9c; end: 0060dacb; -[SCDocObjectFetchedResult countByEnumeratingWithState:objects:count:] */

long FUN_0060da9c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  if (*param_3 != 0) {
    return 0;
  }
  param_3[2] = (long)(param_3 + 3);
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_3 = 1;
  param_3[1] = lVar1;
  return lVar2 - lVar1 >> 3;
}



/* Entry: 0060dacc; end: 0060db37; -[SCDocObjectFetchedResult hash] */

ulong FUN_0060dacc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long **)(param_1 + 0x10) != *(long **)(param_1 + 8)) {
    lVar1 = **(long **)(param_1 + 8);
    func_0x007843a0(lVar1);
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x10) + -8);
    func_0x007843a0(uVar2);
    uVar2 = uVar2 | lVar1 << 0x20;
    uVar2 = ~uVar2 + uVar2 * 0x40000;
    uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
    uVar2 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
    return uVar2 ^ uVar2 >> 0x16;
  }
  return 0;
}



/* Entry: 0060db38; end: 0060dc17; -[SCDocObjectFetchedResult isEqual:] */

undefined8 FUN_0060db38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_0060dbd8:
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_0060dbe4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
      if (lVar4 == *(long *)(param_3 + 0x10) - *(long *)(param_3 + 8)) {
        if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
          lVar6 = 0;
          do {
            lVar3 = *(long *)(*(long *)(param_1 + 8) + lVar6 * 8);
            if ((lVar3 != *(long *)(*(long *)(param_3 + 8) + lVar6 * 8)) &&
               (func_0x007877e0(), (int)lVar3 == 0)) goto LAB_0060dbe0;
            lVar6 = lVar6 + 1;
          } while (lVar4 >> 3 != lVar6);
        }
        goto LAB_0060dbd8;
      }
    }
LAB_0060dbe0:
    uVar5 = 0;
  }
LAB_0060dbe4:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 0060dc18; end: 0060dcb3; -[SCDocObjectFetchedResult .cxx_destruct] */

void FUN_0060dc18(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  lStack_28 = param_1 + 8;
  FUN_0060dd68(&lStack_28);
  return;
}



/* Entry: 0060dcb4; end: 0060dce7; -[SCDocObjectFetchedResult .cxx_construct] */

void FUN_0060dcb4(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  return;
}



/* Entry: 0060dce8; end: 0060dd3f;  */

undefined8 * FUN_0060dce8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    _objc_retain(uVar2);
    uVar1 = *param_3;
    *param_3 = uVar2;
    _objc_release(uVar1);
    param_3 = param_3 + 1;
  }
  return param_3;
}



/* Entry: 0060dd40; end: 0060dd67;  */

void FUN_0060dd40(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_0040d774("vector");
  pcVar1 = "vector";
  FUN_0040d774();
  puVar3 = *(undefined8 **)pcVar1;
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)puVar3[1];
    puVar2 = puVar4;
    if (puVar4 != puVar5) {
      do {
        puVar5 = puVar5 + -1;
        _objc_release(*puVar5);
      } while (puVar5 != puVar4);
      puVar2 = (undefined8 *)**(undefined8 **)pcVar1;
    }
    puVar3[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(puVar2);
    return;
  }
  return;
}



/* Entry: 0060dd68; end: 0060ddd3;  */

void FUN_0060dd68(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar2[1];
    puVar1 = puVar3;
    if (puVar3 != puVar4) {
      do {
        puVar4 = puVar4 + -1;
        _objc_release(*puVar4);
      } while (puVar4 != puVar3);
      puVar1 = *(undefined8 **)*param_1;
    }
    puVar2[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(puVar1);
    return;
  }
  return;
}



/* Entry: 0060ddd4; end: 0060de0f;  */

void FUN_0060ddd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retainAutorelease();
  func_0x0077bcc0();
                    /* WARNING: Could not recover jumptable at 0x0077af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_bind_text_0099a9a0)(param_3,param_4,param_1,0xffffffff,0xffffffffffffffff);
  return;
}



/* Entry: 0060de10; end: 0060de9f;  */

ulong FUN_0060de10(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  _objc_retain(param_3);
  if (param_4 == 0xb) {
    func_0x007878e0(param_1,param_2,param_3);
    param_1 = (ulong)((uint)param_1 ^ 1);
  }
  else if (param_4 == 10) {
    func_0x007878e0(param_1,param_2,param_3);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 0060dea0; end: 0060df2f; -[SCDocObjectContext initWithPath:options:monitor:] */

undefined8 FUN_0060dea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  func_0x00782f20(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                  *(undefined8 *)PTR__NSInternalInconsistencyException_00999c88,
                  &PTR____CFConstantStringClassReference_00a212a0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ad20();
  _objc_release(puVar1);
  _objc_release(param_1);
  return 0;
}



/* Entry: 0060df30; end: 0060df33; -[SCDocObjectContext performChanges:completionQueue:completionHandler:] */

void FUN_0060df30(void)

{
  return;
}



/* Entry: 0060df34; end: 0060df9f; -[SCDocObjectContext observe:callbackQueue:changeHandler:] */

undefined8 FUN_0060df34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  func_0x00782f20(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                  *(undefined8 *)PTR__NSInternalInconsistencyException_00999c88,
                  &PTR____CFConstantStringClassReference_00a212a0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ad20();
  _objc_release(puVar1);
  return 0;
}



/* Entry: 0060dfa0; end: 0060e00b; -[SCDocObjectContext observeFetchedResult:callbackQueue:changeHandler:] */

undefined8 FUN_0060dfa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  func_0x00782f20(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                  *(undefined8 *)PTR__NSInternalInconsistencyException_00999c88,
                  &PTR____CFConstantStringClassReference_00a212a0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ad20();
  _objc_release(puVar1);
  return 0;
}



/* Entry: 0060e00c; end: 0060e00f; -[SCDocObjectContext shutdownAsynchronously:] */

void FUN_0060e00c(void)

{
  return;
}



/* Entry: 0060e010; end: 0060e07b; -[SCDocObjectContext dataConnection] */

undefined8 FUN_0060e010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  func_0x00782f20(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                  *(undefined8 *)PTR__NSInternalInconsistencyException_00999c88,
                  &PTR____CFConstantStringClassReference_00a212a0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ad20();
  _objc_release(puVar1);
  return 0;
}



/* Entry: 0060e07c; end: 0060e083; -[SCDocObjectContext objectForClass:byRowid:buffer:bufferSize:] */

undefined8 FUN_0060e07c(void)

{
  return 0;
}



/* Entry: 0060e084; end: 0060e087; -[SCDocObjectContext setUpdatedObject:forClass:byRowid:] */

void FUN_0060e084(void)

{
  return;
}



/* Entry: 0060e088; end: 0060e11f; +[SCDocObjectContext docObjectCurrentContext] */

void FUN_0060e088(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  func_0x00781420(PTR__OBJC_CLASS___NSThread_00ac30f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00792800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0060e120; end: 0060e1cf; +[SCDocObjectContext setDocObjectCurrentContext:] */

void FUN_0060e120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  func_0x00781420(PTR__OBJC_CLASS___NSThread_00ac30f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00792800();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0060e1d0; end: 0060e1d7; -[SCDocObjectContext unsafeObserveWithoutDispatch:changeHandler:] */

undefined8 FUN_0060e1d0(void)

{
  return 0;
}



/* Entry: 0060e1d8; end: 0060e1df; -[SCDocObjectContext unsafeObserveFetchedResultWithoutDispatch:changeHandler:] */

undefined8 FUN_0060e1d8(void)

{
  return 0;
}



/* Entry: 0060e1e0; end: 0060e25b;  */

undefined * FUN_0060e1e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b630a8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46bc0,&UNK_0081b908,&UNK_0081b950,5,
                    FUN_0060e25c,0);
    do {
      if (puRam0000000000b630a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b630a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb630a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b630a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b630a8;
}



/* Entry: 0060e25c; end: 0060e267;  */

bool FUN_0060e25c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 0060e268; end: 0060e2e3;  */

undefined * FUN_0060e268(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b630b0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46be0,&UNK_0081b964,&UNK_0081b98c,5,
                    FUN_0060e2e4,0);
    do {
      if (puRam0000000000b630b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b630b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb630b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b630b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b630b0;
}



/* Entry: 0060e2e4; end: 0060e2ef;  */

bool FUN_0060e2e4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 0060e2f0; end: 0060e36b; +[FeatureProvidedSignals descriptor] */

undefined * FUN_0060e2f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b630b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00addd70,
                    &PTR____CFConstantStringClassReference_00a46c00,&PTR_DAT_00b20bf8,
                    &PTR_DAT_00b20d10,0x1b,0xd0,0x1c);
    func_0x00791440();
    puRam0000000000b630b8 = puVar1;
  }
  return puRam0000000000b630b8;
}



/* Entry: 0060e36c; end: 0060e3ff; +[FeatureProvidedSignals_StoryMetadata descriptor] */

undefined * FUN_0060e36c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b630c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00addd98,
                    &PTR____CFConstantStringClassReference_00a46c20,&PTR_DAT_00b20bf8,
                    &PTR_DAT_00b20c50,3,8,0x1c);
    func_0x00791440();
    func_0x00791420(puVar1,param_2,&PTR_PTR_00addd70);
    puRam0000000000b630c0 = puVar1;
  }
  return puRam0000000000b630c0;
}



/* Entry: 0060e400; end: 0060e493; +[FeatureProvidedSignals_SpectacleMetadata descriptor] */

undefined * FUN_0060e400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b630c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adddc0,
                    &PTR____CFConstantStringClassReference_00a46c40,&PTR_DAT_00b20bf8,
                    &PTR_DAT_00b20c10,2,8,0x1c);
    func_0x00791440();
    func_0x00791420(puVar1,param_2,&PTR_PTR_00addd70);
    puRam0000000000b630c8 = puVar1;
  }
  return puRam0000000000b630c8;
}



/* Entry: 0060e494; end: 0060e517; +[FeatureProvidedSignals_HashSignals descriptor] */

undefined * FUN_0060e494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b630d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00addde8,
                    &PTR____CFConstantStringClassReference_00a46c60,&PTR_DAT_00b20bf8,
                    &PTR_s_userId_00b20cb0,3,0x18,0x1c);
    func_0x00791420();
    puRam0000000000b630d0 = puVar1;
  }
  return puRam0000000000b630d0;
}



/* Entry: 0060e518; end: 0060e5fb; +[BillboardSignals descriptor] */

void FUN_0060e518(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b630d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adde88,
                    &PTR____CFConstantStringClassReference_00a46c80,&PTR_DAT_00b21070,
                    &PTR_DAT_00b21088,0x34,0xd8,0x1c);
    puRam0000000000b630d8 = puVar1;
  }
  return;
}



/* Entry: 0060e5fc; end: 0060e607;  */

bool FUN_0060e5fc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 0060e608; end: 0060e683;  */

undefined * FUN_0060e608(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b630e8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46cc0,&UNK_0081b9f4,&UNK_0081ba4c,6,
                    FUN_0060e684,0);
    do {
      if (puRam0000000000b630e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b630e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb630e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b630e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b630e8;
}



/* Entry: 0060e684; end: 0060e68f;  */

bool FUN_0060e684(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 0060e690; end: 0060e773; +[BoltSignals descriptor] */

void FUN_0060e690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b630f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00addfc8,
                    &PTR____CFConstantStringClassReference_00a46ce0,&PTR_DAT_00b21708,
                    &PTR_DAT_00b21720,4,0x10,0x1c);
    puRam0000000000b630f0 = puVar1;
  }
  return;
}



/* Entry: 0060e774; end: 0060e77f;  */

bool FUN_0060e774(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 0060e780; end: 0060e7fb;  */

undefined * FUN_0060e780(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63100 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46d20,&UNK_0081bac4,&UNK_0081baec,3,
                    FUN_0060e7fc,0);
    do {
      if (puRam0000000000b63100 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63100;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63100,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63100 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63100;
}



/* Entry: 0060e7fc; end: 0060e807;  */

bool FUN_0060e7fc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0060e808; end: 0060e883;  */

undefined * FUN_0060e808(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63108 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46d40,&UNK_0081baf8,&UNK_0081bb24,2,
                    FUN_0060e884,0);
    do {
      if (puRam0000000000b63108 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63108;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63108,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63108 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63108;
}



/* Entry: 0060e884; end: 0060e88f;  */

bool FUN_0060e884(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 0060e890; end: 0060e90b;  */

undefined * FUN_0060e890(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63110 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46d60,&UNK_0081bb2c,&UNK_0081bb50,3,
                    FUN_0060e90c,0);
    do {
      if (puRam0000000000b63110 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63110;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63110,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63110 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63110;
}



/* Entry: 0060e90c; end: 0060e917;  */

bool FUN_0060e90c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0060e918; end: 0060e993; +[SCCofConfigTargetingRequest descriptor] */

undefined * FUN_0060e918(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63118 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade068,
                    &PTR____CFConstantStringClassReference_00a46d80,&PTR_DAT_00b217a0,
                    &PTR_DAT_00b21898,0x2c,0x110,0x1c);
    func_0x00791440();
    puRam0000000000b63118 = puVar1;
  }
  return puRam0000000000b63118;
}



/* Entry: 0060e994; end: 0060e9fb; +[SCCofPropertyOverrides descriptor] */

void FUN_0060e994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63120 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade0b8,
                    &PTR____CFConstantStringClassReference_00a46da0,&PTR_DAT_00b217a0,
                    &PTR_DAT_00b217b8,1,4,0x1c);
    puRam0000000000b63120 = puVar1;
  }
  return;
}



/* Entry: 0060e9fc; end: 0060ea63; +[SCCofConnectivity descriptor] */

void FUN_0060e9fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63128 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade108,
                    &PTR____CFConstantStringClassReference_00a46dc0,&PTR_DAT_00b217a0,
                    &PTR_DAT_00b21818,4,0x20,0x1c);
    puRam0000000000b63128 = puVar1;
  }
  return;
}



/* Entry: 0060ea64; end: 0060eb47; +[SCCofDecoderEncoderAvailablity descriptor] */

void FUN_0060ea64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63130 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade158,
                    &PTR____CFConstantStringClassReference_00a46de0,&PTR_DAT_00b217a0,
                    &PTR_DAT_00b217d8,2,4,0x1c);
    puRam0000000000b63130 = puVar1;
  }
  return;
}



/* Entry: 0060eb48; end: 0060eb53;  */

bool FUN_0060eb48(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0060eb54; end: 0060ebcf;  */

undefined * FUN_0060eb54(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63140 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46e20,&UNK_0081bb98,&UNK_0081bbc4,4,
                    FUN_0060ebd0,0);
    do {
      if (puRam0000000000b63140 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63140;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63140,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63140 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63140;
}



/* Entry: 0060ebd0; end: 0060ebdb;  */

bool FUN_0060ebd0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 0060ebdc; end: 0060ec6b;  */

undefined * FUN_0060ebdc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63148 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec20(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46e40,&UNK_0081bbd4,&UNK_0081bc00,4,
                    FUN_0060ec6c,0,&UNK_0081bc10);
    do {
      if (puRam0000000000b63148 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63148;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63148,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63148 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63148;
}



/* Entry: 0060ec6c; end: 0060ec77;  */

bool FUN_0060ec6c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 0060ec78; end: 0060ecf3;  */

undefined * FUN_0060ec78(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63150 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46e60,&UNK_0081bc1a,&UNK_0081bc40,3,
                    FUN_0060ecf4,0);
    do {
      if (puRam0000000000b63150 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63150;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63150,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63150 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63150;
}



/* Entry: 0060ecf4; end: 0060ecff;  */

bool FUN_0060ecf4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0060ed00; end: 0060ed7b;  */

undefined * FUN_0060ed00(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63158 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46e80,&UNK_0081bc4c,&UNK_0081bc7c,3,
                    FUN_0060ed7c,0);
    do {
      if (puRam0000000000b63158 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63158;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63158,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63158 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63158;
}



/* Entry: 0060ed7c; end: 0060ed87;  */

bool FUN_0060ed7c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0060ed88; end: 0060ee03;  */

undefined * FUN_0060ed88(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63160 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46ea0,&UNK_0081bc88,&UNK_0081bcbc,3,
                    FUN_0060ee04,0);
    do {
      if (puRam0000000000b63160 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63160;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63160,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63160 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63160;
}



/* Entry: 0060ee04; end: 0060ee0f;  */

bool FUN_0060ee04(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0060ee10; end: 0060ee8b;  */

undefined * FUN_0060ee10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63168 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46ec0,&UNK_0081bcc8,&UNK_0081bd04,3,
                    FUN_0060ee8c,0);
    do {
      if (puRam0000000000b63168 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63168;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63168,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63168 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63168;
}



/* Entry: 0060ee8c; end: 0060ee97;  */

bool FUN_0060ee8c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0060ee98; end: 0060ef27;  */

undefined * FUN_0060ee98(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63170 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec20(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a46ee0,&UNK_0081bd10,&UNK_0081bd40,5,
                    FUN_0060ef28,0,&UNK_0081bd54);
    do {
      if (puRam0000000000b63170 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63170;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63170,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63170 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63170;
}



/* Entry: 0060ef28; end: 0060ef33;  */

bool FUN_0060ef28(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 0060ef34; end: 0060ef9b; +[CameraSignals descriptor] */

void FUN_0060ef34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63178 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade1f8,
                    &PTR____CFConstantStringClassReference_00a46f00,&PTR_DAT_00b21e18,
                    &PTR_DAT_00b21e30,0xd,0x30,0x1c);
    puRam0000000000b63178 = puVar1;
  }
  return;
}



/* Entry: 0060ef9c; end: 0060f093; +[CognacSignals descriptor] */

void FUN_0060ef9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63180 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade298,
                    &PTR____CFConstantStringClassReference_00a46f20,&PTR_DAT_00b21fd0,
                    &PTR_DAT_00b21fe8,1,0x10,0x1c);
    puRam0000000000b63180 = puVar1;
  }
  return;
}



/* Entry: 0060f094; end: 0060f09f;  */

bool FUN_0060f094(uint param_1)

{
  return param_1 < 0x3e;
}



/* Entry: 0060f0a0; end: 0060f107; +[ContentManagerSignals descriptor] */

void FUN_0060f0a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63190 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade338,
                    &PTR____CFConstantStringClassReference_00a46f60,&PTR_DAT_00b22008,
                    &PTR_DAT_00b22020,1,8,0x1c);
    puRam0000000000b63190 = puVar1;
  }
  return;
}



/* Entry: 0060f108; end: 0060f1eb; +[CreativeToolsSignals descriptor] */

void FUN_0060f108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63198 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade3d8,
                    &PTR____CFConstantStringClassReference_00a46f80,&PTR_DAT_00b22040,
                    &PTR_DAT_00b22058,3,4,0x1c);
    puRam0000000000b63198 = puVar1;
  }
  return;
}



/* Entry: 0060f1ec; end: 0060f1f7;  */

bool FUN_0060f1ec(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 0060f1f8; end: 0060f25f; +[CreatorSignals descriptor] */

void FUN_0060f1f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b631a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade478,
                    &PTR____CFConstantStringClassReference_00a46fc0,&PTR_DAT_00b220b8,
                    &PTR_DAT_00b220d0,1,0x10,0x1c);
    puRam0000000000b631a8 = puVar1;
  }
  return;
}



/* Entry: 0060f260; end: 0060f2c7; +[PublicStoryData descriptor] */

void FUN_0060f260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b631b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade4c8,
                    &PTR____CFConstantStringClassReference_00a46fe0,&PTR_DAT_00b220b8,
                    &PTR_DAT_00b220f0,3,0x10,0x1c);
    puRam0000000000b631b0 = puVar1;
  }
  return;
}



/* Entry: 0060f2c8; end: 0060f32f; +[DiscoverFeedSignals descriptor] */

void FUN_0060f2c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b631b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade568,
                    &PTR____CFConstantStringClassReference_00a47000,&PTR_DAT_00b22150,
                    &PTR_DAT_00b22168,1,0x10,0x1c);
    puRam0000000000b631b8 = puVar1;
  }
  return;
}



/* Entry: 0060f330; end: 0060f3ab; +[DiscoverFeedSignals_DiscoverFeedSectionCacheInfo descriptor] */

undefined * FUN_0060f330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b631c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade5b8,
                    &PTR____CFConstantStringClassReference_00a47020,&PTR_DAT_00b22150,
                    &PTR_DAT_00b22188,1,8,0x1c);
    func_0x00791420();
    puRam0000000000b631c0 = puVar1;
  }
  return puRam0000000000b631c0;
}



/* Entry: 0060f3ac; end: 0060f413; +[LensesSignals descriptor] */

void FUN_0060f3ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b631c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade658,
                    &PTR____CFConstantStringClassReference_00a47040,&PTR_DAT_00b221a8,
                    &PTR_DAT_00b221c0,4,0x18,0x1c);
    puRam0000000000b631c8 = puVar1;
  }
  return;
}



/* Entry: 0060f414; end: 0060f4f7; +[MdpMediaAttribution descriptor] */

void FUN_0060f414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b631d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade6f8,
                    &PTR____CFConstantStringClassReference_00a47060,&PTR_DAT_00b22240,
                    &PTR_DAT_00b22258,2,0xc,0x1c);
    puRam0000000000b631d0 = puVar1;
  }
  return;
}



/* Entry: 0060f4f8; end: 0060f503;  */

bool FUN_0060f4f8(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 0060f504; end: 0060f57f;  */

undefined * FUN_0060f504(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b631e0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a470a0,&UNK_0081c314,&UNK_0081c33c,5,
                    FUN_0060f580,0);
    do {
      if (puRam0000000000b631e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b631e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb631e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b631e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b631e0;
}



/* Entry: 0060f580; end: 0060f58b;  */

bool FUN_0060f580(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 0060f58c; end: 0060f66f; +[MediaSignals descriptor] */

void FUN_0060f58c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b631e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade7e8,
                    &PTR____CFConstantStringClassReference_00a470c0,&PTR_DAT_00b22298,
                    &PTR_DAT_00b222b0,2,0xc,0x1c);
    puRam0000000000b631e8 = puVar1;
  }
  return;
}



/* Entry: 0060f670; end: 0060f67b;  */

bool FUN_0060f670(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0060f67c; end: 0060f6e3; +[SCCofNetworkSignals descriptor] */

void FUN_0060f67c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b631f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade888,
                    &PTR____CFConstantStringClassReference_00a47100,&PTR_DAT_00b222f0,
                    &PTR_DAT_00b22308,1,8,0x1c);
    puRam0000000000b631f8 = puVar1;
  }
  return;
}



/* Entry: 0060f6e4; end: 0060f74b; +[OperaSignals descriptor] */

void FUN_0060f6e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63200 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade928,
                    &PTR____CFConstantStringClassReference_00a47120,&PTR_DAT_00b22328,
                    &PTR_DAT_00b22340,3,0xc,0x1c);
    puRam0000000000b63200 = puVar1;
  }
  return;
}



/* Entry: 0060f74c; end: 0060f7b3; +[PerceptionSignals descriptor] */

void FUN_0060f74c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63208 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ade9c8,
                    &PTR____CFConstantStringClassReference_00a47140,&PTR_DAT_00b223a0,
                    &PTR_DAT_00b223b8,1,0x10,0x1c);
    puRam0000000000b63208 = puVar1;
  }
  return;
}



/* Entry: 0060f7b4; end: 0060f81b; +[RecipientsSignals descriptor] */

void FUN_0060f7b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63210 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adea68,
                    &PTR____CFConstantStringClassReference_00a47160,&PTR_DAT_00b223d8,
                    &PTR_s_userIdsArray_00b223f0,1,0x10,0x1c);
    puRam0000000000b63210 = puVar1;
  }
  return;
}



/* Entry: 0060f81c; end: 0060f897; +[RoutingSignals descriptor] */

undefined * FUN_0060f81c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63218 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adeb08,
                    &PTR____CFConstantStringClassReference_00a47180,&PTR_DAT_00b22410,
                    &PTR_s_URL_00b22428,1,0x10,0x1c);
    func_0x00791440();
    puRam0000000000b63218 = puVar1;
  }
  return puRam0000000000b63218;
}



/* Entry: 0060f898; end: 0060f97b; +[SnapKitSignals descriptor] */

void FUN_0060f898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63220 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adeba8,
                    &PTR____CFConstantStringClassReference_00a471a0,&PTR_DAT_00b22448,
                    &PTR_DAT_00b22460,1,0x10,0x1c);
    puRam0000000000b63220 = puVar1;
  }
  return;
}



/* Entry: 0060f97c; end: 0060f987;  */

bool FUN_0060f97c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 0060f988; end: 0060fa6b; +[UploadSignals descriptor] */

void FUN_0060f988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63230 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adec48,
                    &PTR____CFConstantStringClassReference_00a471e0,&PTR_DAT_00b22480,
                    &PTR_DAT_00b22498,4,0x18,0x1c);
    puRam0000000000b63230 = puVar1;
  }
  return;
}



/* Entry: 0060fa6c; end: 0060fac7;  */

undefined8 FUN_0060fa6c(uint param_1)

{
  if (((0x21 < param_1) || ((1L << ((ulong)param_1 & 0x3f) & 0x20000642bU) == 0)) &&
     ((0x25 < param_1 - 0x42 || ((1L << ((ulong)(param_1 - 0x42) & 0x3f) & 0x3800000001U) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 0060fac8; end: 0060fb43;  */

undefined * FUN_0060fac8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63240 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47220,&UNK_0081c46c,&UNK_0081c484,2,
                    FUN_0060fb44,0);
    do {
      if (puRam0000000000b63240 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63240;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63240,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63240 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63240;
}



/* Entry: 0060fb44; end: 0060fb4f;  */

bool FUN_0060fb44(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 0060fb50; end: 0060fbcb;  */

undefined * FUN_0060fb50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63248 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47240,&UNK_0081c48c,&UNK_0081c4dc,9,
                    FUN_0060fbcc,0);
    do {
      if (puRam0000000000b63248 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63248;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63248,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63248 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63248;
}



/* Entry: 0060fbcc; end: 0060fbd7;  */

bool FUN_0060fbcc(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 0060fbd8; end: 0060fc53;  */

undefined * FUN_0060fbd8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63250 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47260,&UNK_0081c500,&UNK_0081c520,5,
                    FUN_0060fc54,0);
    do {
      if (puRam0000000000b63250 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63250;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63250,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63250 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63250;
}



/* Entry: 0060fc54; end: 0060fc5f;  */

bool FUN_0060fc54(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 0060fc60; end: 0060fcdb;  */

undefined * FUN_0060fc60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63258 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47280,&UNK_0081c534,&UNK_0081c550,3,
                    FUN_0060fcdc,0);
    do {
      if (puRam0000000000b63258 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63258;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63258,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63258 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63258;
}


