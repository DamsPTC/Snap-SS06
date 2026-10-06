/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5f089c; end: 10b5f08a3; -[EGODatabaseResult errorCode] */

undefined4 FUN_10b5f089c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b5f08a4; end: 10b5f08ab; -[EGODatabaseResult setErrorCode:] */

void FUN_10b5f08a4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b5f08ac; end: 10b5f08b3; -[EGODatabaseResult errorMessage] */

undefined8 FUN_10b5f08ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5f08b4; end: 10b5f08bb; -[EGODatabaseResult setErrorMessage:] */

void FUN_10b5f08b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b5f08bc; end: 10b5f08c3; -[EGODatabaseResult columnCount] */

undefined4 FUN_10b5f08bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b5f08c4; end: 10b5f08cb; -[EGODatabaseResult setColumnCount:] */

void FUN_10b5f08c4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b5f08cc; end: 10b5f08d3; -[EGODatabaseResult columnNames] */

undefined8 FUN_10b5f08cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5f08d4; end: 10b5f08db; -[EGODatabaseResult setColumnNames:] */

void FUN_10b5f08d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b5f08dc; end: 10b5f08e3; -[EGODatabaseResult columnTypes] */

undefined8 FUN_10b5f08dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5f08e4; end: 10b5f08eb; -[EGODatabaseResult setColumnTypes:] */

void FUN_10b5f08e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b5f08ec; end: 10b5f08f3; -[EGODatabaseResult rows] */

undefined8 FUN_10b5f08ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b5f08f4; end: 10b5f08fb; -[EGODatabaseResult setRows:] */

void FUN_10b5f08f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b5f08fc; end: 10b5f0943; -[EGODatabaseResult .cxx_destruct] */

void FUN_10b5f08fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b5f0944; end: 10b5f09f3; -[EGODatabaseRow initWithDatabaseResult:data:] */

undefined1 *
FUN_10b5f0944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706688;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf417a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb0a0(puVar1);
    _objc_release(uVar2);
    func_0x00010c189480(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5f09f4; end: 10b5f0a57; -[EGODatabaseRow indexForName:] */

undefined8 FUN_10b5f09f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0d5220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b5f0a58; end: 10b5f0a9b; -[EGODatabaseRow intForColumn:] */

long FUN_10b5f0a58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfecb60();
  if (lVar1 == 0x7fffffffffffffff) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c067e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_intForColumnAtIndex__1125f7990,lVar1);
  return param_1;
}



/* Entry: 10b5f0a9c; end: 10b5f0aff; -[EGODatabaseRow intForColumnAtIndex:] */

undefined8 FUN_10b5f0a9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b5f0b00; end: 10b5f0b83; -[EGODatabaseRow longForColumn:] */

long FUN_10b5f0b00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bfecb60();
  if (lVar1 == 0x7fffffffffffffff) {
    lVar2 = 0;
  }
  else {
    func_0x00010bf63640(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b4fe0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return lVar2;
}



/* Entry: 10b5f0b84; end: 10b5f0be7; -[EGODatabaseRow longForColumnAtIndex:] */

undefined8 FUN_10b5f0b84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b4fe0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b5f0be8; end: 10b5f0c03; -[EGODatabaseRow boolForColumn:] */

bool FUN_10b5f0be8(int param_1)

{
  func_0x00010c067de0();
  return param_1 != 0;
}



/* Entry: 10b5f0c04; end: 10b5f0c1f; -[EGODatabaseRow boolForColumnAtIndex:] */

bool FUN_10b5f0c04(int param_1)

{
  func_0x00010c067e00();
  return param_1 != 0;
}



/* Entry: 10b5f0c20; end: 10b5f0c63; -[EGODatabaseRow doubleForColumn:] */

undefined8 FUN_10b5f0c20(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010bfecb60();
  if (lVar1 == 0x7fffffffffffffff) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf88350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_doubleForColumnAtIndex__1125bfa78,lVar1);
  return param_1;
}



/* Entry: 10b5f0c64; end: 10b5f0cc7; -[EGODatabaseRow doubleForColumnAtIndex:] */

undefined8 FUN_10b5f0c64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b5f0cc8; end: 10b5f0d0f; -[EGODatabaseRow stringForColumn:] */

void FUN_10b5f0cc8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfecb60();
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010c25d280(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f0d10; end: 10b5f0da3; -[EGODatabaseRow stringForColumnAtIndex:] */

void FUN_10b5f0d10(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    func_0x00010bf6e340(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b5f0da4; end: 10b5f0deb; -[EGODatabaseRow dataForColumn:] */

void FUN_10b5f0da4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfecb60();
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010bf63a40(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f0dec; end: 10b5f0e6f; -[EGODatabaseRow dataForColumnAtIndex:] */

void FUN_10b5f0dec(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(uVar1);
    uVar3 = uVar1;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b5f0e70; end: 10b5f0eb7; -[EGODatabaseRow dateForColumn:] */

void FUN_10b5f0e70(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfecb60();
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010bf64f60(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f0eb8; end: 10b5f0edf; -[EGODatabaseRow dateForColumnAtIndex:] */

void FUN_10b5f0eb8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf88340();
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 10b5f0ee0; end: 10b5f0ee7; -[EGODatabaseRow data] */

undefined8 FUN_10b5f0ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5f0ee8; end: 10b5f0f17; -[EGODatabaseRow setData:] */

void FUN_10b5f0ee8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b5f0f18; end: 10b5f0f1f; -[EGODatabaseRow names] */

undefined8 FUN_10b5f0f18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5f0f20; end: 10b5f0f4f; -[EGODatabaseRow setNames:] */

void FUN_10b5f0f20(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b5f0f50; end: 10b5f0f7f; -[EGODatabaseRow .cxx_destruct] */

void FUN_10b5f0f50(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5f0f80; end: 10b5f0fa7;  */

undefined ** FUN_10b5f0f80(long param_1)

{
  if (param_1 - 1U < 0xb) {
    return (undefined **)(&PTR_PTR_110d25ad0)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd2518;
}



/* Entry: 10b5f0fa8; end: 10b5f10f7;  */

void FUN_10b5f0fa8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_3);
  func_0x00010bfca7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (param_2 - 1U < 0x35) {
    ppuVar4 = (undefined **)(&PTR_PTR_110d25b28)[param_2 - 1U];
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f64598;
  }
  _objc_retain(ppuVar4);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar4);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5f10f8; end: 10b5f1243;  */

void FUN_10b5f10f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfca800(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b5f1244; end: 10b5f14ab;  */

void FUN_10b5f1244(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfca7a0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5f14ac; end: 10b5f1713;  */

void FUN_10b5f14ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c0eac40(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f64278,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b5f1714; end: 10b5f1783;  */

void FUN_10b5f1714(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c0eaaa0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5f1784; end: 10b5f191b;  */

void FUN_10b5f1784(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010bf53c80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b5f191c; end: 10b5f1acb;  */

void FUN_10b5f191c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_5);
  func_0x00010c0bc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  lVar4 = param_2;
  func_0x00010c08fa60();
  puVar1 = puVar3;
  if (lVar4 != 0) {
    func_0x00010c2ac460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  FUN_10b5f5864(param_4,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5f1acc; end: 10b5f1b6b;  */

void FUN_10b5f1acc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  if (param_1 != 0) {
    _objc_retain();
    func_0x00010c28dac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bfec2a0(param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b5f1b6c; end: 10b5f1d1f;  */

void FUN_10b5f1b6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b2438;
  if (param_1 != 0) {
    _objc_retain();
    func_0x00010c28dac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c2ac460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010bfec2a0(param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10b5f1d20; end: 10b5f1dbf;  */

void FUN_10b5f1d20(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 != 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b2438;
    func_0x00010bf3e260(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bfec2a0(param_1);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5f1dc0; end: 10b5f1f0f;  */

void FUN_10b5f1dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_1);
    func_0x00010c0ea4e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c2ac460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar2);
    func_0x00010bfec2a0(param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b5f1f10; end: 10b5f1ffb;  */

void FUN_10b5f1f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c245440(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5f1ffc; end: 10b5f2143;  */

void FUN_10b5f1ffc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfa32c0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (param_3 != 0) {
    lVar3 = param_3;
    func_0x00010c25d700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  func_0x00010bfec2a0(param_1);
  if (param_4 != 0) {
    func_0x00010c067ec0(param_4);
    func_0x00010bef9180(param_1);
  }
  func_0x00010befbfe0(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5f2144; end: 10b5f2273;  */

void FUN_10b5f2144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c107fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_1);
  func_0x00010bef9180(param_1);
  func_0x00010befbfe0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5f2274; end: 10b5f23cf;  */

void FUN_10b5f2274(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf53ce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  if ((param_3 & 1) == 0) {
    func_0x00010c2ac460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  func_0x00010bfec2a0(param_1);
  func_0x00010befbfe0(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b5f23d0; end: 10b5f25f7;  */

void FUN_10b5f23d0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_1);
  func_0x00010bf53d00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  if ((param_2 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010c25d700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  func_0x00010bfec2a0(param_1);
  func_0x00010bef9180(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5f25f8; end: 10b5f2703;  */

void FUN_10b5f25f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010bf53da0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(param_1);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf53d20(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(param_1);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf53d60(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(param_1);
  puVar4 = PTR_PTR_1126b2438;
  func_0x00010bf53d80(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(param_1);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5f2704; end: 10b5f288b;  */

void FUN_10b5f2704(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_1);
  func_0x00010bf53ca0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  if ((param_2 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010c25d700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  func_0x00010bfec2a0(param_1);
  func_0x00010bef9180(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5f288c; end: 10b5f2967;  */

void FUN_10b5f288c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf53dc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5f2968; end: 10b5f2a1b;  */

void FUN_10b5f2968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf53dc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  func_0x00010befbfe0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b5f2a1c; end: 10b5f2ab3;  */

void FUN_10b5f2a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf53de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b5f2ab4; end: 10b5f2b53;  */

void FUN_10b5f2ab4(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010bf53dc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befbfe0(param_2,param_3,puVar2,(long)(param_1 * 1000.0));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b5f2b54; end: 10b5f2bc3;  */

void FUN_10b5f2b54(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010bf53d40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(param_2,param_3,puVar1,(long)(param_1 * 1000.0));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5f2bc4; end: 10b5f2d07;  */

void FUN_10b5f2bc4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010bf53cc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b5f2d08; end: 10b5f2e17;  */

void FUN_10b5f2d08(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010bf53e00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b5f2e18; end: 10b5f2ec7;  */

void FUN_10b5f2e18(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  if ((param_1 != 0) && (param_2 != 0)) {
    _objc_retain(param_2);
    _objc_retain(param_1);
    func_0x00010bfc07a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar1);
    func_0x00010bfec2a0(param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b5f2ec8; end: 10b5f316b;  */

void FUN_10b5f2ec8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010c240fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b5f316c; end: 10b5f3203;  */

void FUN_10b5f316c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c2410a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b5f3204; end: 10b5f32cf;  */

void FUN_10b5f3204(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010c241060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b5f32d0; end: 10b5f3407;  */

void FUN_10b5f32d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010c2410c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b5f3408; end: 10b5f359f;  */

void FUN_10b5f3408(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010c269460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b5f35a0; end: 10b5f3647;  */

void FUN_10b5f35a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain();
  func_0x00010bfbb640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(param_1,param_2,puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5f3648; end: 10b5f366f;  */

undefined ** FUN_10b5f3648(long param_1)

{
  if (param_1 - 1U < 0x2e) {
    return (undefined **)(&PTR_PTR_110d25cd0)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110f4c9d8;
}



/* Entry: 10b5f3670; end: 10b5f3807;  */

void FUN_10b5f3670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_10b5f0f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 1;
  FUN_10b5f191c(1,0,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfec2a0(param_1);
  func_0x00010befbfe0(param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5f3808; end: 10b5f3833; +[SCGrapheneMemoriesMetric contentLoadLatency] */

void FUN_10b5f3808(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3834; end: 10b5f385f; +[SCGrapheneMemoriesMetric prepareSnapsLatency] */

void FUN_10b5f3834(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3860; end: 10b5f388b; +[SCGrapheneMemoriesMetric sendPrepareMediaUnreg] */

void FUN_10b5f3860(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f388c; end: 10b5f38b7; +[SCGrapheneMemoriesMetric sendPrepareMediaError] */

void FUN_10b5f388c(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f38b8; end: 10b5f38e3; +[SCGrapheneMemoriesMetric snapsTabClusterFinish] */

void FUN_10b5f38b8(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f38e4; end: 10b5f390f; +[SCGrapheneMemoriesMetric snapsTabSnapsPerCluster] */

void FUN_10b5f38e4(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3910; end: 10b5f393b; +[SCGrapheneMemoriesMetric snapsTabFirstClusterFinish] */

void FUN_10b5f3910(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f393c; end: 10b5f3967; +[SCGrapheneMemoriesMetric galleryStoryCreateCancel] */

void FUN_10b5f393c(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3968; end: 10b5f3993; +[SCGrapheneMemoriesMetric galleryInitialStateTotal] */

void FUN_10b5f3968(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3994; end: 10b5f39bf; +[SCGrapheneMemoriesMetric galleryInitialStatePrivate] */

void FUN_10b5f3994(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f39c0; end: 10b5f39eb; +[SCGrapheneMemoriesMetric galleryInitialStateFailed] */

void FUN_10b5f39c0(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f39ec; end: 10b5f3a17; +[SCGrapheneMemoriesMetric galleryInitialStateDeleted] */

void FUN_10b5f39ec(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3a18; end: 10b5f3a43; +[SCGrapheneMemoriesMetric galleryInitialStatePending] */

void FUN_10b5f3a18(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3a44; end: 10b5f3a6f; +[SCGrapheneMemoriesMetric galleryInitialStateBlocking] */

void FUN_10b5f3a44(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3a70; end: 10b5f3a9b; +[SCGrapheneMemoriesMetric backupLocalOperation] */

void FUN_10b5f3a70(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3a9c; end: 10b5f3ac7; +[SCGrapheneMemoriesMetric backupTotalOperation] */

void FUN_10b5f3a9c(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3ac8; end: 10b5f3af3; +[SCGrapheneMemoriesMetric galleryAbandonDanglingSnap] */

void FUN_10b5f3ac8(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3af4; end: 10b5f3b1f; +[SCGrapheneMemoriesMetric uploadResult] */

void FUN_10b5f3af4(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3b20; end: 10b5f3b4b; +[SCGrapheneMemoriesMetric syncRespError] */

void FUN_10b5f3b20(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3b4c; end: 10b5f3b77; +[SCGrapheneMemoriesMetric backupSnapdocError] */

void FUN_10b5f3b4c(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3b78; end: 10b5f3ba3; +[SCGrapheneMemoriesMetric syncThumbnailGenerationError] */

void FUN_10b5f3b78(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3ba4; end: 10b5f3bcf; +[SCGrapheneMemoriesMetric backupFailure] */

void FUN_10b5f3ba4(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3bd0; end: 10b5f3bfb; +[SCGrapheneMemoriesMetric backupSkipOperations] */

void FUN_10b5f3bd0(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3bfc; end: 10b5f3c27; +[SCGrapheneMemoriesMetric backgroundUploadScheduled] */

void FUN_10b5f3bfc(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3c28; end: 10b5f3c53; +[SCGrapheneMemoriesMetric backgroundUploadFinished] */

void FUN_10b5f3c28(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3c54; end: 10b5f3c7f; +[SCGrapheneMemoriesMetric backupLegacyEditsSize] */

void FUN_10b5f3c54(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3c80; end: 10b5f3cab; +[SCGrapheneMemoriesMetric uploadDataCap] */

void FUN_10b5f3c80(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3cac; end: 10b5f3cd7; +[SCGrapheneMemoriesMetric backupJobAppendLatency] */

void FUN_10b5f3cac(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3cd8; end: 10b5f3d03; +[SCGrapheneMemoriesMetric gallerySnapUpload] */

void FUN_10b5f3cd8(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3d04; end: 10b5f3d2f; +[SCGrapheneMemoriesMetric backupNetworkError] */

void FUN_10b5f3d04(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5f3d30; end: 10b5f3d5b; +[SCGrapheneMemoriesMetric gallerySavingStart] */

void FUN_10b5f3d30(void)

{
  _objc_alloc(PTR_PTR_1126b2438);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


