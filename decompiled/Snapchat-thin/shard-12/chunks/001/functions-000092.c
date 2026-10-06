/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d5d998; end: 108d5d99f; -[EGOCipherResult setColumnNames:] */

void FUN_108d5d998(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d5d9a0; end: 108d5d9a7; -[EGOCipherResult columnTypes] */

undefined8 FUN_108d5d9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108d5d9a8; end: 108d5d9af; -[EGOCipherResult setColumnTypes:] */

void FUN_108d5d9a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d5d9b0; end: 108d5d9b7; -[EGOCipherResult rows] */

undefined8 FUN_108d5d9b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108d5d9b8; end: 108d5d9bf; -[EGOCipherResult setRows:] */

void FUN_108d5d9b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d5d9c0; end: 108d5da07; -[EGOCipherResult .cxx_destruct] */

void FUN_108d5d9c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108d5da08; end: 108d5dab7; -[EGOCipherRow initWithDatabaseResult:data:] */

undefined1 *
FUN_108d5da08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe800;
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



/* Entry: 108d5dab8; end: 108d5db1b; -[EGOCipherRow indexForName:] */

undefined8 FUN_108d5dab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108d5db1c; end: 108d5db5f; -[EGOCipherRow intForColumn:] */

long FUN_108d5db1c(long param_1)

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



/* Entry: 108d5db60; end: 108d5dbc3; -[EGOCipherRow intForColumnAtIndex:] */

undefined8 FUN_108d5db60(undefined8 param_1)

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



/* Entry: 108d5dbc4; end: 108d5dc47; -[EGOCipherRow longForColumn:] */

long FUN_108d5dbc4(long param_1)

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



/* Entry: 108d5dc48; end: 108d5dcab; -[EGOCipherRow longForColumnAtIndex:] */

undefined8 FUN_108d5dc48(undefined8 param_1)

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



/* Entry: 108d5dcac; end: 108d5dcc7; -[EGOCipherRow boolForColumn:] */

bool FUN_108d5dcac(int param_1)

{
  func_0x00010c067de0();
  return param_1 != 0;
}



/* Entry: 108d5dcc8; end: 108d5dce3; -[EGOCipherRow boolForColumnAtIndex:] */

bool FUN_108d5dcc8(int param_1)

{
  func_0x00010c067e00();
  return param_1 != 0;
}



/* Entry: 108d5dce4; end: 108d5dd27; -[EGOCipherRow doubleForColumn:] */

undefined8 FUN_108d5dce4(undefined8 param_1,long param_2)

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



/* Entry: 108d5dd28; end: 108d5dd8b; -[EGOCipherRow doubleForColumnAtIndex:] */

undefined8 FUN_108d5dd28(undefined8 param_1,undefined8 param_2)

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



/* Entry: 108d5dd8c; end: 108d5ddd3; -[EGOCipherRow stringForColumn:] */

void FUN_108d5dd8c(long param_1,undefined8 param_2)

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



/* Entry: 108d5ddd4; end: 108d5de67; -[EGOCipherRow stringForColumnAtIndex:] */

void FUN_108d5ddd4(ulong param_1)

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



/* Entry: 108d5de68; end: 108d5deaf; -[EGOCipherRow dataForColumn:] */

void FUN_108d5de68(long param_1,undefined8 param_2)

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



/* Entry: 108d5deb0; end: 108d5df33; -[EGOCipherRow dataForColumnAtIndex:] */

void FUN_108d5deb0(ulong param_1)

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



/* Entry: 108d5df34; end: 108d5df7b; -[EGOCipherRow dateForColumn:] */

void FUN_108d5df34(long param_1,undefined8 param_2)

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



/* Entry: 108d5df7c; end: 108d5dfa3; -[EGOCipherRow dateForColumnAtIndex:] */

void FUN_108d5df7c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf88340();
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 108d5dfa4; end: 108d5dfab; -[EGOCipherRow data] */

undefined8 FUN_108d5dfa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108d5dfac; end: 108d5dfdb; -[EGOCipherRow setData:] */

void FUN_108d5dfac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108d5dfdc; end: 108d5dfe3; -[EGOCipherRow names] */

undefined8 FUN_108d5dfdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d5dfe4; end: 108d5e013; -[EGOCipherRow setNames:] */

void FUN_108d5dfe4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108d5e014; end: 108d5e043; -[EGOCipherRow .cxx_destruct] */

void FUN_108d5e014(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d5e044; end: 108d5e0b3;  */

int FUN_108d5e044(byte *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_1 == (byte *)0x0) {
    return -(uint)(param_2 != (byte *)0x0);
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar2 = (ulong)bVar1;
    if ((&UNK_10dfa05fd)[uVar2] != (&UNK_10dfa05fd)[*param_2]) goto LAB_108d5e0a0;
    param_2 = param_2 + 1;
    bVar1 = *param_1;
  }
  uVar2 = 0;
LAB_108d5e0a0:
  return (uint)(byte)(&UNK_10dfa05fd)[uVar2] - (uint)(byte)(&UNK_10dfa05fd)[*param_2];
}



/* Entry: 108d5e0b4; end: 108d5e0fb;  */

void FUN_108d5e0b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_108d62be4();
  if ((int)uVar1 == 0) {
    func_0x000108d637a8(param_1,&stack0x00000000);
  }
  return;
}



/* Entry: 108d5e0fc; end: 108d5e253;  */

int FUN_108d5e0fc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FUN_108d70f98();
  FUN_108d71004();
  if (*(char *)(*param_1 + 0x51) == '\0') {
    FUN_108d67c04(param_1[4],param_2,0xffffffff,1,0);
  }
  plVar2 = param_1;
  FUN_108d71098(param_1,0x61,0,1,0);
  FUN_108d6aaec(param_1,plVar2,param_3,0);
  iVar1 = *(int *)((long)param_1 + 0x3c);
  iVar3 = iVar1;
  if (*(int *)(param_1[6] + 0x60) <= iVar1) {
    plVar2 = param_1;
    FUN_108d71134();
    if ((int)plVar2 != 0) {
      return 1;
    }
    iVar3 = *(int *)((long)param_1 + 0x3c);
  }
  *(int *)((long)param_1 + 0x3c) = iVar3 + 1;
  puVar4 = (undefined1 *)(param_1[1] + (long)iVar1 * 0x18);
  *puVar4 = 0x23;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 1;
  *(undefined4 *)(puVar4 + 8) = 1;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar4[1] = 0;
  return iVar1;
}



/* Entry: 108d5e254; end: 108d5e337;  */

undefined8 FUN_108d5e254(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_2;
  _strcmp(param_2,&UNK_10f5173c4);
  plVar2 = (long *)PTR____stdoutp_11034bdd8;
  if (((int)lVar1 == 0) ||
     (lVar1 = param_2, _strcmp(param_2,&UNK_10f5173cb), plVar2 = (long *)PTR____stderrp_11034bdc8,
     (int)lVar1 == 0)) {
    param_2 = *plVar2;
  }
  else {
    lVar1 = param_2;
    _strcmp(param_2,&DAT_10f3293bc);
    if ((int)lVar1 == 0) {
      param_2 = 0;
    }
    else {
      _fopen(param_2,&UNK_10f5173d2);
      if (param_2 == 0) {
        return 1;
      }
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    *(code **)(param_1 + 0xd8) = FUN_108d61b90;
    *(long *)(param_1 + 0xe0) = param_2;
  }
  else {
    (*pcRam0000000113297998)();
    *(code **)(param_1 + 0xd8) = FUN_108d61b90;
    *(long *)(param_1 + 0xe0) = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return 0;
}



/* Entry: 108d5e338; end: 108d5e443;  */

undefined8 FUN_108d5e338(long param_1,long param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  ulong uVar7;
  
  if (3 < param_3) {
    lVar5 = 0;
    pcVar4 = (char *)(param_2 + (ulong)param_3 + -1);
    param_3 = param_3 - 3;
    do {
      if ((ulong)*(byte *)(param_2 + lVar5) == 0) {
        cVar1 = (&UNK_10dfa05fd)[(byte)(&UNK_10f516f50)[lVar5]];
        cVar6 = '\0';
LAB_108d5e3b4:
        if (pcVar4 == (char *)0x0) {
          return 1;
        }
        if (cVar6 != cVar1) {
          return 1;
        }
        goto LAB_108d5e3c0;
      }
      cVar6 = (&UNK_10dfa05fd)[*(byte *)(param_2 + lVar5)];
      cVar1 = (&UNK_10dfa05fd)[(byte)(&UNK_10f516f50)[lVar5]];
      if (cVar6 != cVar1) goto LAB_108d5e3b4;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2);
    if (pcVar4 != (char *)0x0) {
LAB_108d5e3c0:
      if (*pcVar4 == '\'' && (param_3 & 1) == 0) {
        uVar7 = (ulong)(param_3 >> 1);
        uVar2 = uVar7;
        FUN_108d607c8(uVar7);
        _bzero();
        func_0x000108d5eaa4(param_2 + 2,param_3,uVar2);
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
        (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x50) + 0x18))(uVar3,uVar2,uVar7);
        FUN_108d606b0(uVar2,uVar7);
        return uVar3;
      }
    }
  }
  return 1;
}



/* Entry: 108d5e444; end: 108d5e847;  */

undefined8 FUN_108d5e444(long param_1)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte *pbVar22;
  undefined8 uVar23;
  undefined4 uStack_a8;
  int iStack_a4;
  char *apcStack_a0 [5];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar17 = (char *)**(undefined8 **)(param_1 + 0x20);
  pcVar18 = pcVar17;
  func_0x000108d7039c(pcVar17,&UNK_10f516f53);
  if (pcVar18 == (char *)0x0) {
    pcVar18 = (char *)0x0;
  }
  else if (*(char *)(**(long **)(pcVar18 + 8) + 0x13) == '\0') {
    pcVar18 = *(char **)(**(long **)(pcVar18 + 8) + 0xd0);
  }
  else {
    pcVar18 = "";
  }
  pcVar6 = "%s-migrated";
  FUN_108d5e0b4();
  uStack_a8 = 0;
  pcVar1 = (char *)((long)*(int *)(*(long *)(param_1 + 0x28) + 0x1c) + 1);
  pcVar7 = pcVar1;
  FUN_108d607c8();
  _bzero();
  iVar12 = *(int *)(*(long *)(param_1 + 0x28) + 0x1c);
  pcVar8 = pcVar7;
  _memcpy(pcVar7,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40));
  if (pcVar18 != (char *)0x0) {
    puVar9 = &UNK_10f51734b;
    FUN_108d5e0b4();
    iVar12 = *(int *)(*(long *)(param_1 + 0x28) + 0x1c);
    pcVar8 = pcVar18;
    FUN_108d61100(pcVar18,pcVar7,iVar12,"",&uStack_a8);
    if ((int)pcVar8 != 0) {
      pcVar10 = pcVar18;
      FUN_108d61100(pcVar18,pcVar7,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x1c),&UNK_10f517333,
                    &uStack_a8);
      pcVar8 = "%s%s";
      FUN_108d5e0b4();
      uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x1c);
      FUN_108d61100(pcVar18,pcVar7,uVar13,pcVar8,&uStack_a8);
      func_0x000108d5e198();
      iVar12 = (int)uVar13;
      if (((int)pcVar18 != 0) && ((int)pcVar10 != 0)) {
LAB_108d5e5c4:
        uVar20 = 1;
        goto LAB_108d5e664;
      }
      puVar11 = &UNK_10f51737e;
      FUN_108d5e0b4();
      lVar19 = 0;
      apcStack_a0[1] = "";
      if ((int)pcVar18 == 0) {
        apcStack_a0[1] = "PRAGMA cipher_use_hmac = OFF;";
      }
      apcStack_a0[0] = "PRAGMA kdf_iter = 4000;";
      apcStack_a0[2] = puVar9;
      apcStack_a0[3] = "SELECT sqlcipher_export(\'migrate\');";
      apcStack_a0[4] = puVar11;
      do {
        if (**(char **)((long)apcStack_a0 + lVar19) != '\0') {
          uVar13 = 0;
          pcVar18 = pcVar17;
          FUN_108d61210();
          iVar12 = (int)uVar13;
          iVar4 = (int)pcVar18;
          if (iVar4 != 0) break;
        }
        iVar12 = (int)uVar13;
        iVar4 = (int)pcVar18;
        lVar19 = lVar19 + 8;
      } while (lVar19 != 0x28);
      func_0x000108d5e198(puVar9);
      func_0x000108d5e198(puVar11);
      FUN_108d606b0(pcVar7,pcVar1);
      pcVar8 = pcVar7;
      if (iVar4 == 0) {
        if ((pcVar17[0x4f] == '\0') || (1 < *(int *)(pcVar17 + 0xa4))) goto LAB_108d5e5c4;
        uVar23 = *(undefined8 *)(pcVar17 + 0x60);
        uVar21 = *(undefined8 *)(pcVar17 + 200);
        uVar2 = *(uint *)(pcVar17 + 0x2c);
        *(uint *)(pcVar17 + 0x2c) = uVar2 & 0xffd5d7ff | 0x202800;
        pcVar17[200] = '\0';
        pcVar17[0xc9] = '\0';
        pcVar17[0xca] = '\0';
        pcVar17[0xcb] = '\0';
        pcVar17[0xcc] = '\0';
        pcVar17[0xcd] = '\0';
        pcVar17[0xce] = '\0';
        pcVar17[0xcf] = '\0';
        pcVar18 = *(char **)(*(long *)(pcVar17 + 0x20) + 8);
        lVar19 = *(long *)(pcVar17 + 0x20) + (long)*(int *)(pcVar17 + 0x28) * 0x20;
        uVar20 = *(undefined8 *)(lVar19 + -0x18);
        FUN_108d61210(pcVar17,&DAT_10f4652d0,0,0,0);
        FUN_108d5f618(uVar20,2);
        FUN_108d5f618(pcVar18,2);
        lVar15 = *(long *)(**(long **)(*(long *)(*(long *)(pcVar17 + 0x20) +
                                                 (long)*(int *)(pcVar17 + 0x28) * 0x20 + -0x18) + 8)
                          + 0x120);
        if (lVar15 == 0) {
          iVar12 = 0;
          uVar14 = 0;
        }
        else {
          piVar16 = *(int **)(lVar15 + 0x28);
          if (*piVar16 == 1) {
            uVar14 = *(undefined8 *)(piVar16 + 0x10);
            iVar12 = piVar16[7];
          }
          else {
            uVar14 = *(undefined8 *)(piVar16 + 0x12);
            iVar12 = piVar16[10];
          }
        }
        FUN_108d5f0b4(pcVar17,0,uVar14,iVar12);
        lVar15 = *(long *)(**(long **)(pcVar18 + 8) + 0x120);
        *(undefined4 *)(lVar15 + 0x38) = 1;
        uVar13 = 0xfffffffffffffffe;
        pbVar22 = &UNK_10dfa0a8b;
        do {
          bVar3 = pbVar22[-1];
          FUN_108d615f0(uVar20,bVar3,&iStack_a4);
          iVar12 = iStack_a4 + (uint)*pbVar22;
          pcVar8 = pcVar18;
          FUN_108d616a8(pcVar18,bVar3);
          if ((int)pcVar8 != 0) goto LAB_108d5e5c4;
          uVar13 = uVar13 + 2;
          pbVar22 = pbVar22 + 2;
        } while (uVar13 < 8);
        pcVar8 = pcVar18;
        FUN_108d6175c(pcVar18,uVar20);
        *(undefined4 *)(lVar15 + 0x38) = 0;
        uVar20 = 1;
        if ((int)pcVar8 != 0) goto LAB_108d5e664;
        FUN_108d5fff4(pcVar18);
        *(uint *)(pcVar17 + 0x2c) = uVar2;
        *(undefined8 *)(pcVar17 + 0x60) = uVar23;
        *(undefined8 *)(pcVar17 + 200) = uVar21;
        pcVar17[0x4f] = '\x01';
        FUN_108d618d8(*(undefined8 *)(lVar19 + -0x18));
        *(undefined8 *)(lVar19 + -0x18) = 0;
        *(undefined8 *)(lVar19 + -8) = 0;
        FUN_108d61aa4(pcVar17);
        _remove(pcVar6);
        func_0x000108d5e198();
        pcVar8 = pcVar6;
      }
    }
  }
  uVar20 = 0;
LAB_108d5e664:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar20;
  }
  ___stack_chk_fail();
  lVar19 = 0x28;
  if (iVar12 != 0) {
    lVar19 = 0x30;
  }
  lVar19 = *(long *)(pcVar8 + lVar19);
  (**(code **)(*(long *)(lVar19 + 0x50) + 0x40))(*(undefined8 *)(lVar19 + 0x58));
  uVar5 = (undefined4)*(undefined8 *)(lVar19 + 0x58);
  (**(code **)(*(long *)(lVar19 + 0x50) + 0x50))();
  *(undefined4 *)(lVar19 + 0x10) = uVar5;
  uVar5 = (undefined4)*(undefined8 *)(lVar19 + 0x58);
  (**(code **)(*(long *)(lVar19 + 0x50) + 0x58))();
  *(undefined4 *)(lVar19 + 0x14) = uVar5;
  uVar5 = (undefined4)*(undefined8 *)(lVar19 + 0x58);
  (**(code **)(*(long *)(lVar19 + 0x50) + 0x60))();
  *(undefined4 *)(lVar19 + 0x18) = uVar5;
  uVar5 = (undefined4)*(undefined8 *)(lVar19 + 0x58);
  (**(code **)(*(long *)(lVar19 + 0x50) + 0x68))();
  *(undefined4 *)(lVar19 + 0x24) = uVar5;
  *(undefined4 *)(lVar19 + 4) = 1;
  if (iVar12 == 2) {
    uVar20 = *(undefined8 *)(pcVar8 + 0x28);
    FUN_108d60a40(uVar20,lVar19);
    if ((int)uVar20 != 0) {
      return uVar20;
    }
  }
  return 0;
}



/* Entry: 108d5e848; end: 108d5e8f3;  */

void FUN_108d5e848(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = 0x28;
  if (param_3 != 0) {
    lVar2 = 0x30;
  }
  lVar2 = *(long *)(param_1 + lVar2);
  (**(code **)(*(long *)(lVar2 + 0x50) + 0x40))(*(undefined8 *)(lVar2 + 0x58));
  uVar1 = (undefined4)*(undefined8 *)(lVar2 + 0x58);
  (**(code **)(*(long *)(lVar2 + 0x50) + 0x50))();
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = (undefined4)*(undefined8 *)(lVar2 + 0x58);
  (**(code **)(*(long *)(lVar2 + 0x50) + 0x58))();
  *(undefined4 *)(lVar2 + 0x14) = uVar1;
  uVar1 = (undefined4)*(undefined8 *)(lVar2 + 0x58);
  (**(code **)(*(long *)(lVar2 + 0x50) + 0x60))();
  *(undefined4 *)(lVar2 + 0x18) = uVar1;
  uVar1 = (undefined4)*(undefined8 *)(lVar2 + 0x58);
  (**(code **)(*(long *)(lVar2 + 0x50) + 0x68))();
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  *(undefined4 *)(lVar2 + 4) = 1;
  if (param_3 == 2) {
    FUN_108d60a40(*(undefined8 *)(param_1 + 0x28),lVar2);
  }
  return;
}



/* Entry: 108d5e8f4; end: 108d5e93b;  */

undefined4 FUN_108d5e8f4(long param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_108d606b0(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 4));
  *(int *)(param_1 + 4) = (int)param_2;
  FUN_108d607c8();
  *(long *)(param_1 + 0x18) = param_2;
  uVar1 = 7;
  if (param_2 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108d5e93c; end: 108d5e9c3;  */

long FUN_108d5e93c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  *(int *)(param_1 + 0x58) = (int)param_3;
  lVar1 = *(long *)(param_2 + 8);
  *(ushort *)(*(long *)(lVar1 + 8) + 0x28) = *(ushort *)(*(long *)(lVar1 + 8) + 0x28) & 0xfffd;
  FUN_108d70994(lVar1,param_3,param_4,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return lVar1;
}



/* Entry: 108d5e9c4; end: 108d5eb33;  */

void FUN_108d5e9c4(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (param_2 == 0) {
    iVar4 = 0x10;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x24) + 0x10;
  }
  iVar1 = *(int *)(lVar3 + 0x18);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar4 / iVar1;
  }
  if (iVar4 != iVar2 * iVar1) {
    iVar4 = iVar1 + iVar1 * iVar2;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if (param_2 == 0) {
    *(uint *)(lVar5 + 0x2c) = *(uint *)(lVar5 + 0x2c) & 0xfffffffe;
    uVar6 = *(uint *)(lVar3 + 0x2c) & 0xfffffffe;
  }
  else {
    *(uint *)(lVar5 + 0x2c) = *(uint *)(lVar5 + 0x2c) | 1;
    uVar6 = *(uint *)(lVar3 + 0x2c) | 1;
  }
  *(uint *)(lVar3 + 0x2c) = uVar6;
  *(int *)(lVar3 + 0x20) = iVar4;
  *(int *)(lVar5 + 0x20) = iVar4;
  return;
}



/* Entry: 108d5eb34; end: 108d5eff3;  */

undefined8 * FUN_108d5eb34(long param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar10 = *(undefined8 **)(param_1 + 0x18);
  puVar11 = *(undefined8 **)(param_1 + 8);
  if ((*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) ||
     (lVar12 = param_1, FUN_108d60da4(), (int)lVar12 == 0)) {
    lVar12 = *(long *)(param_1 + 0x30);
    if (*(int *)(lVar12 + 4) != 0) {
      lVar14 = *(long *)(param_1 + 0x28);
      if (((((*(int *)(lVar12 + 0x14) == *(int *)(lVar14 + 0x14)) &&
            (*(int *)(lVar12 + 8) == *(int *)(lVar14 + 8))) &&
           (*(int *)(lVar12 + 0xc) == *(int *)(lVar14 + 0xc))) &&
          ((*(int *)(lVar12 + 0x10) == *(int *)(lVar14 + 0x10) &&
           (*(int *)(lVar12 + 0x1c) == *(int *)(lVar14 + 0x1c))))) &&
         ((*(int *)(lVar12 + 0x2c) == *(int *)(lVar14 + 0x2c) &&
          (*(int *)(lVar12 + 0x24) == *(int *)(lVar14 + 0x24))))) {
        uVar3 = *(undefined8 *)(lVar12 + 0x58);
        (**(code **)(*(long *)(lVar12 + 0x50) + 0x78))(uVar3,*(undefined8 *)(lVar14 + 0x58));
        if ((int)uVar3 == 0) goto LAB_108d5ec54;
        if ((*(byte **)(lVar12 + 0x40) != *(byte **)(lVar14 + 0x40)) &&
           (uVar8 = (ulong)*(uint *)(lVar12 + 0x1c), 0 < (int)*(uint *)(lVar12 + 0x1c))) {
          bVar9 = 0;
          pbVar5 = *(byte **)(lVar12 + 0x40);
          pbVar7 = *(byte **)(lVar14 + 0x40);
          do {
            bVar9 = bVar9 | *pbVar7 ^ *pbVar5;
            uVar8 = uVar8 - 1;
            pbVar5 = pbVar5 + 1;
            pbVar7 = pbVar7 + 1;
          } while (uVar8 != 0);
          if (bVar9 != 0) goto LAB_108d5ec54;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        FUN_108d60a40(uVar3,*(undefined8 *)(param_1 + 0x28));
        iVar2 = (int)uVar3;
      }
      else {
LAB_108d5ec54:
        lVar12 = param_1;
        FUN_108d60da4(param_1,*(undefined8 *)(param_1 + 0x30));
        iVar2 = (int)lVar12;
      }
      if (iVar2 != 0) goto LAB_108d5ec64;
    }
    piVar13 = *(int **)(param_1 + 0x28);
    if (*piVar13 != 1) {
      FUN_108d606b0(*(undefined8 *)(piVar13 + 0x10),piVar13[7]);
      piVar13[0x10] = 0;
      piVar13[0x11] = 0;
      piVar13[7] = 0;
      lVar12 = *(long *)(param_1 + 0x30);
      FUN_108d606b0(*(undefined8 *)(lVar12 + 0x40),*(undefined4 *)(lVar12 + 0x1c));
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(undefined4 *)(lVar12 + 0x1c) = 0;
    }
    iVar2 = (int)param_3;
    uVar4 = 0x10;
    if (iVar2 != 1) {
      uVar4 = 0;
    }
    if (param_4 < 6) {
      if ((param_4 - 2U < 2) || (param_4 == 0)) {
        if (iVar2 == 1) {
          puVar10[1] = 0x332074616d726f;
          *puVar10 = 0x66206574694c5153;
        }
        lVar12 = param_1;
        func_0x000108d5ee1c(param_1,0,param_3,0,iVar1 - uVar4,(long)param_2 + (ulong)uVar4,
                            (long)puVar10 + (ulong)uVar4);
        if ((int)lVar12 != 0) {
          plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 8);
          lVar12 = plVar6[1];
          *(undefined4 *)(*plVar6 + 0x2c) = 1;
          *(undefined4 *)(lVar12 + 0x44) = 1;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_2,puVar10,(long)iVar1);
        return param_2;
      }
    }
    else {
      if (param_4 == 6) {
        if (iVar2 == 1) {
          uVar3 = *puVar11;
          puVar10[1] = puVar11[1];
          *puVar10 = uVar3;
        }
        uVar3 = 1;
      }
      else {
        if (param_4 != 7) {
          return param_2;
        }
        if (iVar2 == 1) {
          uVar3 = *puVar11;
          puVar10[1] = puVar11[1];
          *puVar10 = uVar3;
        }
        uVar3 = 0;
      }
      lVar12 = param_1;
      func_0x000108d5ee1c(param_1,uVar3,param_3,1,iVar1 - uVar4,(long)param_2 + (ulong)uVar4,
                          (long)puVar10 + (ulong)uVar4);
      param_2 = puVar10;
      if ((int)lVar12 != 0) {
        plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 8);
        lVar12 = plVar6[1];
        *(undefined4 *)(*plVar6 + 0x2c) = 1;
        *(undefined4 *)(lVar12 + 0x44) = 1;
      }
    }
  }
  else {
LAB_108d5ec64:
    plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    lVar12 = plVar6[1];
    *(undefined4 *)(*plVar6 + 0x2c) = 1;
    *(undefined4 *)(lVar12 + 0x44) = 1;
    param_2 = (undefined8 *)0x0;
  }
  return param_2;
}



/* Entry: 108d5eff4; end: 108d5f0b3;  */

uint * FUN_108d5eff4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  
  if (((param_1 == 0) || (param_3 == 0)) || ((int)param_4 == 0)) {
    return (uint *)0x1;
  }
  lVar3 = param_1;
  func_0x000108d5f054();
  if (param_3 == 0) {
    return (uint *)0x0;
  }
  if ((int)param_4 == 0) {
    return (uint *)0x0;
  }
  lVar3 = *(long *)(param_1 + 0x20) + (long)(int)lVar3 * 0x20;
  if (*(long *)(lVar3 + 8) == 0) {
LAB_108d5f448:
    puVar6 = (uint *)0x0;
  }
  else {
    plVar9 = *(long **)(**(long **)(*(long *)(lVar3 + 8) + 8) + 0x48);
    lVar11 = *plVar9;
    lVar4 = 2;
    func_0x000108d60700();
    if (lVar4 != 0) {
      (*pcRam0000000113297998)();
    }
    if (lRam000000011372e6d8 == 0) {
      FUN_108d62be4();
      if ((int)lVar4 == 0) {
        (*pcRam0000000113297988)();
        lRam000000011372e6d8 = lVar4;
      }
      else {
        lRam000000011372e6d8 = 0;
      }
    }
    if (puRam000000011372e6e0 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x98;
      FUN_108d607c8();
      *puVar5 = FUN_108d61bd0;
      puVar5[1] = 0x108d61c6c;
      puVar5[4] = FUN_108d61cf4;
      puVar5[5] = FUN_108d61d60;
      puVar5[6] = 0x108d61e34;
      puVar5[7] = FUN_108d61eac;
      puVar5[8] = FUN_108d61fb4;
      puVar5[9] = FUN_108d61fe8;
      puVar5[10] = 0x108d61ff4;
      puVar5[0xb] = 0x108d62000;
      puVar5[0xc] = 0x108d6200c;
      puVar5[0xd] = FUN_108d62018;
      puVar5[0xe] = FUN_108d62030;
      puVar5[0xf] = 0x108d62040;
      puVar5[0x10] = FUN_108d62054;
      puVar5[0x11] = 0x108d62090;
      puVar5[2] = FUN_108d61ce8;
      puVar5[3] = 0x108d620c0;
      puVar5[0x12] = FUN_108d62108;
      if (lRam000000011372e6d8 != 0) {
        (*pcRam0000000113297998)();
      }
      if ((puRam000000011372e6e0 != (undefined8 *)0x0) && (puRam000000011372e6e0 != puVar5)) {
        func_0x000108d606b0(puRam000000011372e6e0,0x98);
      }
      puRam000000011372e6e0 = puVar5;
      if (lRam000000011372e6d8 != 0) {
        (*pcRam00000001132979a8)();
      }
    }
    iRam000000011372e6c4 = iRam000000011372e6c4 + 1;
    lVar4 = 2;
    func_0x000108d60700();
    if (lVar4 != 0) {
      (*pcRam00000001132979a8)();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    puVar6 = (uint *)0x40;
    FUN_108d607c8();
    if (puVar6 != (uint *)0x0) {
      *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(lVar3 + 8);
      *puVar6 = 0x10;
      lVar4 = 0x10;
      FUN_108d607c8();
      *(long *)(puVar6 + 2) = lVar4;
      if (lVar4 != 0) {
        uVar7 = (ulong)*puVar6;
        FUN_108d607c8();
        *(ulong *)(puVar6 + 4) = uVar7;
        uVar2 = uRam0000000113298da0;
        if (uVar7 != 0) {
          uVar7 = (ulong)uRam0000000113298da0;
          func_0x000108d606b0(*(undefined8 *)(puVar6 + 6),puVar6[1]);
          puVar6[1] = uVar2;
          FUN_108d607c8();
          *(ulong *)(puVar6 + 6) = uVar7;
          if (uVar7 != 0) {
            puVar8 = puVar6 + 10;
            FUN_108d60b88();
            if ((int)puVar8 != 0) {
              return puVar8;
            }
            puVar8 = puVar6 + 0xc;
            FUN_108d60b88();
            if ((int)puVar8 != 0) {
              return puVar8;
            }
            if ((lVar11 == 0) ||
               ((**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(puVar6 + 2),0x10,0),
               (int)plVar9 != 0)) {
              puVar6[0xf] = 1;
            }
            puVar8 = puVar6;
            FUN_108d5e848(puVar6,&UNK_10f5172fd,0);
            if ((int)puVar8 != 0) {
              return puVar8;
            }
            puVar10 = *(uint **)(puVar6 + 10);
            puVar10[2] = uRam0000000113298d9c;
            puVar10[3] = 2;
            puVar10[1] = 1;
            puVar8 = puVar10;
            func_0x000108d609d8(puVar10,param_3,param_4);
            if ((int)puVar8 != 0) {
              return puVar8;
            }
            puVar10[1] = 1;
            FUN_108d5e9c4(puVar6,(bRam000000011372e6c0 ^ 0xff) & 1);
            puVar8 = *(uint **)(puVar6 + 0xc);
            FUN_108d60a40(puVar8,*(undefined8 *)(puVar6 + 10));
            if ((int)puVar8 != 0) {
              return puVar8;
            }
            lVar4 = **(long **)(*(long *)(lVar3 + 8) + 8);
            if (*(code **)(lVar4 + 0x118) != (code *)0x0) {
              (**(code **)(lVar4 + 0x118))(*(undefined8 *)(lVar4 + 0x120));
            }
            pcVar1 = FUN_108d5eb34;
            if (*(char *)(lVar4 + 0x13) != '\0') {
              pcVar1 = (code *)0x0;
            }
            *(code **)(lVar4 + 0x108) = pcVar1;
            *(undefined8 *)(lVar4 + 0x110) = 0;
            *(undefined8 *)(lVar4 + 0x118) = 0x108d71388;
            *(uint **)(lVar4 + 0x120) = puVar6;
            FUN_108d5e93c(param_1,lVar3,puVar6[1],*(undefined4 *)(*(long *)(puVar6 + 10) + 0x20));
            func_0x000108d71494(*(undefined8 *)(lVar3 + 8),1);
            if (lVar11 != 0) {
              FUN_108d71534(*(undefined8 *)(lVar3 + 8),0);
            }
            if (*(long *)(param_1 + 0x18) == 0) {
              return (uint *)0x0;
            }
            (*pcRam00000001132979a8)();
            goto LAB_108d5f448;
          }
        }
      }
    }
    puVar6 = (uint *)0x7;
  }
  return puVar6;
}



/* Entry: 108d5f0b4; end: 108d5f46f;  */

void FUN_108d5f0b4(long param_1,int param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  if ((param_3 != 0) && ((int)param_4 != 0)) {
    lVar2 = *(long *)(param_1 + 0x20) + (long)param_2 * 0x20;
    if (*(long *)(lVar2 + 8) != 0) {
      plVar11 = *(long **)(**(long **)(*(long *)(lVar2 + 8) + 8) + 0x48);
      lVar13 = *plVar11;
      lVar5 = 2;
      func_0x000108d60700();
      if (lVar5 != 0) {
        (*pcRam0000000113297998)();
      }
      if (lRam000000011372e6d8 == 0) {
        FUN_108d62be4();
        if ((int)lVar5 == 0) {
          (*pcRam0000000113297988)();
          lRam000000011372e6d8 = lVar5;
        }
        else {
          lRam000000011372e6d8 = 0;
        }
      }
      if (puRam000000011372e6e0 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x98;
        FUN_108d607c8();
        *puVar6 = FUN_108d61bd0;
        puVar6[1] = 0x108d61c6c;
        puVar6[4] = FUN_108d61cf4;
        puVar6[5] = FUN_108d61d60;
        puVar6[6] = 0x108d61e34;
        puVar6[7] = FUN_108d61eac;
        puVar6[8] = FUN_108d61fb4;
        puVar6[9] = FUN_108d61fe8;
        puVar6[10] = 0x108d61ff4;
        puVar6[0xb] = 0x108d62000;
        puVar6[0xc] = 0x108d6200c;
        puVar6[0xd] = FUN_108d62018;
        puVar6[0xe] = FUN_108d62030;
        puVar6[0xf] = 0x108d62040;
        puVar6[0x10] = FUN_108d62054;
        puVar6[0x11] = 0x108d62090;
        puVar6[2] = FUN_108d61ce8;
        puVar6[3] = 0x108d620c0;
        puVar6[0x12] = FUN_108d62108;
        if (lRam000000011372e6d8 != 0) {
          (*pcRam0000000113297998)();
        }
        if ((puRam000000011372e6e0 != (undefined8 *)0x0) && (puRam000000011372e6e0 != puVar6)) {
          func_0x000108d606b0(puRam000000011372e6e0,0x98);
        }
        puRam000000011372e6e0 = puVar6;
        if (lRam000000011372e6d8 != 0) {
          (*pcRam00000001132979a8)();
        }
      }
      iRam000000011372e6c4 = iRam000000011372e6c4 + 1;
      lVar5 = 2;
      func_0x000108d60700();
      if (lVar5 != 0) {
        (*pcRam00000001132979a8)();
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        (*pcRam0000000113297998)();
      }
      puVar7 = (uint *)0x40;
      FUN_108d607c8();
      if (puVar7 != (uint *)0x0) {
        *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(lVar2 + 8);
        *puVar7 = 0x10;
        lVar5 = 0x10;
        FUN_108d607c8();
        *(long *)(puVar7 + 2) = lVar5;
        if (lVar5 != 0) {
          uVar8 = (ulong)*puVar7;
          FUN_108d607c8();
          *(ulong *)(puVar7 + 4) = uVar8;
          uVar3 = uRam0000000113298da0;
          if (uVar8 != 0) {
            uVar8 = (ulong)uRam0000000113298da0;
            func_0x000108d606b0(*(undefined8 *)(puVar7 + 6),puVar7[1]);
            puVar7[1] = uVar3;
            FUN_108d607c8();
            *(ulong *)(puVar7 + 6) = uVar8;
            if (uVar8 != 0) {
              iVar4 = (int)puVar7 + 0x28;
              FUN_108d60b88();
              if (iVar4 == 0) {
                iVar4 = (int)puVar7 + 0x30;
                FUN_108d60b88();
                if (iVar4 == 0) {
                  if ((lVar13 == 0) ||
                     ((**(code **)(*plVar11 + 0x10))(plVar11,*(undefined8 *)(puVar7 + 2),0x10,0),
                     (int)plVar11 != 0)) {
                    puVar7[0xf] = 1;
                  }
                  puVar9 = puVar7;
                  FUN_108d5e848(puVar7,&UNK_10f5172fd,0);
                  if ((int)puVar9 == 0) {
                    lVar12 = *(long *)(puVar7 + 10);
                    *(undefined4 *)(lVar12 + 8) = uRam0000000113298d9c;
                    *(undefined4 *)(lVar12 + 0xc) = 2;
                    *(undefined4 *)(lVar12 + 4) = 1;
                    lVar5 = lVar12;
                    func_0x000108d609d8(lVar12,param_3,param_4);
                    if ((int)lVar5 == 0) {
                      *(undefined4 *)(lVar12 + 4) = 1;
                      FUN_108d5e9c4(puVar7,(bRam000000011372e6c0 ^ 0xff) & 1);
                      uVar10 = *(undefined8 *)(puVar7 + 0xc);
                      FUN_108d60a40(uVar10,*(undefined8 *)(puVar7 + 10));
                      if ((int)uVar10 == 0) {
                        lVar5 = **(long **)(*(long *)(lVar2 + 8) + 8);
                        if (*(code **)(lVar5 + 0x118) != (code *)0x0) {
                          (**(code **)(lVar5 + 0x118))(*(undefined8 *)(lVar5 + 0x120));
                        }
                        pcVar1 = FUN_108d5eb34;
                        if (*(char *)(lVar5 + 0x13) != '\0') {
                          pcVar1 = (code *)0x0;
                        }
                        *(code **)(lVar5 + 0x108) = pcVar1;
                        *(undefined8 *)(lVar5 + 0x110) = 0;
                        *(undefined8 *)(lVar5 + 0x118) = 0x108d71388;
                        *(uint **)(lVar5 + 0x120) = puVar7;
                        FUN_108d5e93c(param_1,lVar2,puVar7[1],
                                      *(undefined4 *)(*(long *)(puVar7 + 10) + 0x20));
                        func_0x000108d71494(*(undefined8 *)(lVar2 + 8),1);
                        if (lVar13 != 0) {
                          FUN_108d71534(*(undefined8 *)(lVar2 + 8),0);
                        }
                        if (*(long *)(param_1 + 0x18) != 0) {
                          (*pcRam00000001132979a8)();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108d5f470; end: 108d5f603;  */

undefined8 FUN_108d5f470(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lStack_58;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  if ((int)param_4 == 0) {
    return 1;
  }
  lVar3 = param_1;
  func_0x000108d5f054();
  plVar7 = (long *)(*(long *)(param_1 + 0x20) + (long)(int)lVar3 * 0x20 + 8);
  if (*plVar7 == 0) {
    return 0;
  }
  lVar5 = **(long **)(*plVar7 + 8);
  lVar8 = *(long *)(lVar5 + 0x120);
  if (lVar8 == 0) {
    return 0;
  }
  lVar4 = lVar8;
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_108d5f50c:
    lVar4 = *(long *)(lVar4 + 0x30);
    lVar3 = lVar4;
    func_0x000108d609d8(lVar4,param_3,param_4);
    if ((int)lVar3 == 0) {
      *(undefined4 *)(lVar4 + 4) = 1;
    }
  }
  else {
    (*pcRam0000000113297998)();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)lVar3 * 0x20 + 8);
    if ((lVar3 != 0) && (lVar4 = *(long *)(**(long **)(lVar3 + 8) + 0x120), lVar4 != 0))
    goto LAB_108d5f50c;
  }
  lVar3 = *plVar7;
  FUN_108d5f618(lVar3,1);
  uVar1 = *(uint *)(lVar5 + 0x1c);
  if ((int)lVar3 == 0 && uVar1 != 0) {
    uVar6 = 1;
    do {
      iVar2 = 0;
      if (*(int *)(lVar5 + 0xbc) != 0) {
        iVar2 = iRam0000000113298da4 / *(int *)(lVar5 + 0xbc);
      }
      if (uVar6 != iVar2 + 1U) {
        lVar4 = lVar5;
        FUN_108d5fcfc(lVar5,uVar6,&lStack_58,0);
        lVar3 = lStack_58;
        if (((int)lVar4 != 0) || (lVar4 = lStack_58, FUN_108d5ffdc(), (int)lVar4 != 0))
        goto LAB_108d5f54c;
        if (lVar3 != 0) {
          func_0x000108d787d8(lVar3);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= uVar1);
  }
  else if ((int)lVar3 != 0) {
LAB_108d5f54c:
    FUN_108d6007c(*plVar7,0x204,0);
    goto LAB_108d5f5d0;
  }
  FUN_108d5fff4(*plVar7);
  FUN_108d60a40(*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30));
LAB_108d5f5d0:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return 0;
}



/* Entry: 108d5f604; end: 108d5f617;  */

void FUN_108d5f604(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d5f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000113297998)();
    return;
  }
  return;
}



/* Entry: 108d5f618; end: 108d5fcfb;  */

long * FUN_108d5f618(long *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  long *plVar6;
  byte bVar7;
  undefined8 *puVar8;
  ushort uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  int iStack_6c;
  long lStack_68;
  
  plVar10 = (long *)param_1[1];
  if ((*(char *)((long)param_1 + 0x11) != '\0') &&
     (*(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1,
     *(char *)((long)param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  if ((char)param_1[2] == '\x02') {
    if (param_2 != 0) {
LAB_108d5f678:
      plVar6 = (long *)*plVar10;
      FUN_108d7b9b8(plVar6,*(undefined4 *)(*param_1 + 0x30c));
      goto LAB_108d5f708;
    }
  }
  else if ((param_2 != 0) || ((char)param_1[2] != '\x01')) {
    uVar9 = *(ushort *)(plVar10 + 5);
    if ((param_2 != 0) && ((uVar9 & 1) != 0)) {
      plVar6 = (long *)0x8;
      goto LAB_108d5f708;
    }
    if (param_2 == 0) {
      if ((uVar9 >> 6 & 1) != 0) goto LAB_108d5f6f8;
    }
    else if (((uVar9 >> 6 & 1) == 0) && (*(char *)((long)plVar10 + 0x24) != '\x02')) {
      if (1 < param_2) {
        for (puVar8 = (undefined8 *)plVar10[0xf]; puVar8 != (undefined8 *)0x0;
            puVar8 = (undefined8 *)puVar8[2]) {
          plVar6 = (long *)*puVar8;
          if (plVar6 != param_1) goto LAB_108d5f6fc;
        }
      }
    }
    else {
LAB_108d5f6f8:
      plVar6 = (long *)plVar10[0x10];
LAB_108d5f6fc:
      if (*plVar6 != 0) {
        plVar6 = (long *)0x106;
        goto LAB_108d5f708;
      }
    }
    plVar6 = param_1;
    func_0x000108d7b7fc(param_1,1,1);
    if ((int)plVar6 == 0) {
      uVar9 = *(ushort *)(plVar10 + 5);
      *(ushort *)(plVar10 + 5) = uVar9 & 0xfff7;
      if ((int)plVar10[8] == 0) {
        *(ushort *)(plVar10 + 5) = uVar9 | 8;
      }
      plVar6 = (long *)0x0;
      do {
        if (plVar10[3] == 0) {
          do {
            plVar6 = (long *)*plVar10;
            FUN_108d7bb08();
            if (((int)plVar6 != 0) ||
               (plVar6 = plVar10, func_0x000108d7be68(plVar10,1,&lStack_68,0), lVar14 = lStack_68,
               (int)plVar6 != 0)) goto LAB_108d5fbdc;
            plVar12 = *(long **)(lStack_68 + 0x50);
            uVar2 = (*(uint *)((long)plVar12 + 0x1c) & 0xff00ff00) >> 8 |
                    (*(uint *)((long)plVar12 + 0x1c) & 0xff00ff) << 8;
            uVar13 = uVar2 >> 0x10 | uVar2 << 0x10;
            plVar6 = (long *)*plVar10;
            uVar2 = *(uint *)((long)plVar6 + 0x1c);
            if ((uVar13 == 0) || ((int)plVar12[3] != *(int *)((long)plVar12 + 0x5c))) {
              uVar13 = uVar2;
            }
            if (0 < (int)uVar13) {
              if (*plVar12 == 0x66206574694c5153 && plVar12[1] == 0x332074616d726f) {
                if (2 < *(byte *)((long)plVar12 + 0x12)) {
                  *(ushort *)(plVar10 + 5) = *(ushort *)(plVar10 + 5) | 1;
                }
                if (2 < *(byte *)((long)plVar12 + 0x13)) goto LAB_108d5fa54;
                if ((*(byte *)((long)plVar12 + 0x13) == 2) &&
                   ((*(ushort *)(plVar10 + 5) >> 4 & 1) == 0)) {
                  iStack_6c = 0;
                  FUN_108d7bed4(plVar6,&iStack_6c);
                  if ((int)plVar6 == 0) {
                    if (iStack_6c != 0) goto LAB_108d5f8cc;
                    func_0x000108d787d8(*(undefined8 *)(lVar14 + 0x68));
                    goto LAB_108d5fa40;
                  }
                }
                else {
LAB_108d5f8cc:
                  if (*(short *)((long)plVar12 + 0x15) != 0x2040 ||
                      *(char *)((long)plVar12 + 0x17) != ' ') goto LAB_108d5fa54;
                  uVar3 = (uint)*(byte *)(plVar12 + 2) << 8 |
                          (uint)*(byte *)((long)plVar12 + 0x11) << 0x10;
                  plVar6 = (long *)0x1a;
                  if ((((uVar3 - 1 & uVar3) == 0) && (uVar3 < 0x10001)) && (0x100 < uVar3)) {
                    bVar7 = *(byte *)((long)plVar12 + 0x14);
                    uVar15 = uVar3 - bVar7;
                    if (uVar3 != *(uint *)((long)plVar10 + 0x34)) {
                      func_0x000108d787d8(*(undefined8 *)(lVar14 + 0x68));
                      *(uint *)((long)plVar10 + 0x34) = uVar3;
                      *(uint *)(plVar10 + 7) = uVar15;
                      if (plVar10[0x11] != 0) {
                        plVar10[0x11] = plVar10[0x11] + -4;
                        func_0x000108d78fdc();
                        plVar10[0x11] = 0;
                      }
                      plVar6 = (long *)*plVar10;
                      FUN_108d78ba4(plVar6,(long)plVar10 + 0x34,bVar7);
                      if ((int)plVar6 == 0) goto LAB_108d5fa40;
                      goto LAB_108d5fbdc;
                    }
                    if (((*(byte *)(plVar10[1] + 0x2e) & 1) != 0) || ((int)uVar13 <= (int)uVar2)) {
                      if (0x1df < uVar15) {
                        *(uint *)((long)plVar10 + 0x34) = uVar3;
                        *(uint *)(plVar10 + 7) = uVar15;
                        *(bool *)((long)plVar10 + 0x21) =
                             (*(char *)((long)plVar12 + 0x35) != '\0' ||
                             *(char *)((long)plVar12 + 0x34) != '\0') ||
                             (*(char *)((long)plVar12 + 0x36) != '\0' ||
                             *(char *)((long)plVar12 + 0x37) != '\0');
                        *(bool *)((long)plVar10 + 0x22) =
                             (*(char *)((long)plVar12 + 0x41) != '\0' || (char)plVar12[8] != '\0')
                             || (*(char *)((long)plVar12 + 0x42) != '\0' ||
                                *(char *)((long)plVar12 + 0x43) != '\0');
                        goto LAB_108d5f9a4;
                      }
                      goto LAB_108d5fa54;
                    }
                    plVar6 = (long *)0xb;
                    FUN_108d64c00(0xb,&UNK_10f51799f);
                  }
                }
              }
              else {
LAB_108d5fa54:
                plVar6 = (long *)0x1a;
              }
              func_0x000108d787d8(*(undefined8 *)(lVar14 + 0x68));
              plVar10[3] = 0;
              goto LAB_108d5fbdc;
            }
            uVar15 = *(uint *)(plVar10 + 7);
LAB_108d5f9a4:
            uVar3 = (uVar15 * 0x40 - 0x300) / 0xff - 0x17;
            uVar2 = uVar3 & 0xffff;
            *(short *)((long)plVar10 + 0x2a) = (short)uVar3;
            sVar4 = (short)((uVar15 * 0x20 - 0x180) / 0xff) + -0x17;
            *(short *)((long)plVar10 + 0x2c) = sVar4;
            *(short *)((long)plVar10 + 0x2e) = (short)uVar15 + -0x23;
            *(short *)(plVar10 + 6) = sVar4;
            if (0x7e < uVar2) {
              uVar2 = 0x7f;
            }
            *(char *)((long)plVar10 + 0x25) = (char)uVar2;
            plVar10[3] = lVar14;
            *(uint *)(plVar10 + 8) = uVar13;
LAB_108d5fa40:
          } while (plVar10[3] == 0);
          plVar6 = (long *)0x0;
          if (param_2 != 0) goto LAB_108d5f78c;
LAB_108d5fbb0:
          if ((int)plVar6 == 0) {
            if (((char)param_1[2] == '\0') &&
               (*(int *)((long)plVar10 + 0x3c) = *(int *)((long)plVar10 + 0x3c) + 1,
               *(char *)((long)param_1 + 0x11) != '\0')) {
              *(undefined1 *)((long)param_1 + 0x3c) = 1;
              param_1[8] = plVar10[0xf];
              plVar10[0xf] = (long)(param_1 + 6);
            }
            bVar7 = 1;
            if (param_2 != 0) {
              bVar7 = 2;
            }
            *(byte *)(param_1 + 2) = bVar7;
            if (*(byte *)((long)plVar10 + 0x24) < bVar7) {
              *(byte *)((long)plVar10 + 0x24) = bVar7;
            }
            if (param_2 == 0) goto LAB_108d5f69c;
            lVar14 = plVar10[3];
            plVar10[0x10] = (long)param_1;
            uVar9 = 0x20;
            if (param_2 < 2) {
              uVar9 = 0;
            }
            *(ushort *)(plVar10 + 5) = *(ushort *)(plVar10 + 5) & 0xffdf | uVar9;
            uVar2 = *(uint *)(*(long *)(lVar14 + 0x50) + 0x1c);
            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
            if (*(uint *)(plVar10 + 8) == (uVar2 >> 0x10 | uVar2 << 0x10)) goto LAB_108d5f678;
            plVar6 = *(long **)(lVar14 + 0x68);
            FUN_108d5ffdc();
            if ((int)plVar6 != 0) break;
            uVar2 = (*(uint *)(plVar10 + 8) & 0xff00ff00) >> 8 |
                    (*(uint *)(plVar10 + 8) & 0xff00ff) << 8;
            *(uint *)(*(long *)(lVar14 + 0x50) + 0x1c) = uVar2 >> 0x10 | uVar2 << 0x10;
            goto LAB_108d5f678;
          }
        }
        else {
          if (param_2 == 0) goto LAB_108d5fbb0;
LAB_108d5f78c:
          if ((int)plVar6 != 0) goto LAB_108d5fbb0;
          if ((*(ushort *)(plVar10 + 5) & 1) == 0) {
            plVar12 = (long *)*plVar10;
            plVar6 = (long *)(ulong)*(uint *)((long)plVar12 + 0x2c);
            if (*(uint *)((long)plVar12 + 0x2c) == 0) {
              *(bool *)((long)plVar12 + 0x19) = *(char *)(*param_1 + 0x50) == '\x02';
              if (*(char *)((long)plVar12 + 0x14) != '\x01') {
LAB_108d5fba4:
                plVar6 = plVar10;
                FUN_108d7b874();
                goto LAB_108d5fbb0;
              }
              lVar14 = plVar12[0x27];
              plVar6 = plVar12;
              if (lVar14 == 0) {
                FUN_108d7c17c(plVar12,2);
                if ((param_2 < 2) || ((int)plVar6 != 0)) {
LAB_108d5fb88:
                  if ((int)plVar6 == 0) goto LAB_108d5fb8c;
                }
                else {
                  do {
                    plVar6 = plVar12;
                    FUN_108d7c17c(plVar12,4);
                    if ((int)plVar6 != 5) goto LAB_108d5fb88;
                    iVar5 = (int)plVar12[0x1d];
                    (*(code *)plVar12[0x1c])();
                  } while (iVar5 != 0);
                  plVar6 = (long *)0x5;
                }
              }
              else {
                if (((char)plVar12[1] != '\0') && (*(char *)(lVar14 + 0x3f) == '\0')) {
                  FUN_108d7c17c(plVar12,4);
                  if ((int)plVar6 != 0) goto LAB_108d5fbdc;
                  lVar11 = plVar12[0x27];
                  lVar14 = lVar11;
                  if (*(char *)(lVar11 + 0x3f) == '\0') {
                    (**(code **)(**(long **)(lVar11 + 8) + 0x70))
                              (*(long **)(lVar11 + 8),*(short *)(lVar11 + 0x3c) + 3,1,5);
                    lVar14 = plVar12[0x27];
                  }
                  *(undefined1 *)(lVar11 + 0x3f) = 1;
                }
                if (*(char *)(lVar14 + 0x42) != '\0') goto LAB_108d5f7e4;
                if (*(char *)(lVar14 + 0x3f) == '\0') {
                  plVar6 = *(long **)(lVar14 + 8);
                  (**(code **)(*plVar6 + 0x70))(plVar6,0,1,10);
                  if ((int)plVar6 != 0) goto LAB_108d5fbdc;
                }
                *(undefined1 *)(lVar14 + 0x40) = 1;
                lVar11 = lVar14 + 0x48;
                _memcmp(lVar11,**(undefined8 **)(lVar14 + 0x30),0x30);
                if ((int)lVar11 == 0) {
LAB_108d5fb8c:
                  *(undefined1 *)((long)plVar12 + 0x14) = 2;
                  uVar1 = *(undefined4 *)((long)plVar12 + 0x1c);
                  *(undefined4 *)((long)plVar12 + 0x24) = uVar1;
                  *(undefined4 *)(plVar12 + 5) = uVar1;
                  *(undefined4 *)(plVar12 + 4) = uVar1;
                  plVar12[0xc] = 0;
                  goto LAB_108d5fba4;
                }
                if (*(char *)(lVar14 + 0x3f) == '\0') {
                  (**(code **)(**(long **)(lVar14 + 8) + 0x70))(*(long **)(lVar14 + 8),0,1,9);
                }
                *(undefined1 *)(lVar14 + 0x40) = 0;
                plVar6 = (long *)0x205;
              }
            }
          }
          else {
LAB_108d5f7e4:
            plVar6 = (long *)0x8;
          }
        }
LAB_108d5fbdc:
        if ((*(char *)((long)plVar10 + 0x24) == '\0') && (lVar14 = plVar10[3], lVar14 != 0)) {
          plVar10[3] = 0;
          func_0x000108d787d8(*(undefined8 *)(lVar14 + 0x68));
        }
        if ((((uint)plVar6 & 0xff) != 5) || (*(char *)((long)plVar10 + 0x24) != '\0')) break;
        lVar14 = plVar10[1];
        if ((*(code **)(lVar14 + 0x2a8) == (code *)0x0) || (*(int *)(lVar14 + 0x2b8) < 0)) break;
        iVar5 = (int)*(undefined8 *)(lVar14 + 0x2b0);
        (**(code **)(lVar14 + 0x2a8))();
        if (iVar5 == 0) goto LAB_108d5fc3c;
        *(int *)(lVar14 + 0x2b8) = *(int *)(lVar14 + 0x2b8) + 1;
      } while( true );
    }
    goto LAB_108d5f708;
  }
LAB_108d5f69c:
  plVar6 = (long *)0x0;
LAB_108d5f708:
  if ((*(char *)((long)param_1 + 0x11) != '\0') &&
     (iVar5 = *(int *)((long)param_1 + 0x14) + -1, *(int *)((long)param_1 + 0x14) = iVar5,
     iVar5 == 0)) {
    FUN_108d7f5fc(param_1);
  }
  return plVar6;
LAB_108d5fc3c:
  *(undefined4 *)(lVar14 + 0x2b8) = 0xffffffff;
  goto LAB_108d5f708;
}



/* Entry: 108d5fcfc; end: 108d5ffdb;  */

ulong FUN_108d5fcfc(long param_1,undefined8 param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uStack_54;
  
  uStack_54 = 0;
  uVar3 = (uint)param_2;
  if (uVar3 == 0) {
    FUN_108d64c00(0xb,&UNK_10f51799f);
    return 0xb;
  }
  *(undefined1 *)(param_1 + 0x1b) = 1;
  uVar6 = (ulong)*(uint *)(param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x2c) != 0) goto LAB_108d5fd38;
  lVar2 = *(long *)(*(long *)(param_1 + 0x130) + 0x40);
  (*pcRam00000001132979f8)(lVar2,param_2,*(byte *)(*(long *)(param_1 + 0x130) + 0x29) & 3);
  uVar5 = *(ulong *)(param_1 + 0x130);
  if (lVar2 == 0) {
    if (*(char *)(uVar5 + 0x29) != '\x02') {
      for (lVar2 = *(long *)(uVar5 + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x40)) {
        if ((*(short *)(lVar2 + 0x2e) == 0) && ((*(ushort *)(lVar2 + 0x2c) >> 2 & 1) == 0)) {
          *(long *)(uVar5 + 0x10) = lVar2;
          goto LAB_108d5fe2c;
        }
      }
      *(undefined8 *)(uVar5 + 0x10) = 0;
      for (lVar2 = *(long *)(uVar5 + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x40)) {
        if (*(short *)(lVar2 + 0x2e) == 0) goto LAB_108d5fe2c;
      }
      goto LAB_108d5fe40;
    }
    lVar2 = 0;
  }
LAB_108d5fe60:
  FUN_108d7663c(uVar5,param_2,lVar2);
  *param_3 = uVar5;
  if (uVar5 != 0) {
    if (((param_4 & 1) == 0) && (*(long *)(uVar5 + 0x20) != 0)) {
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
      return 0;
    }
    *(long *)(uVar5 + 0x20) = param_1;
    if ((int)uVar3 < 0) {
LAB_108d5fec4:
      uVar6 = 0xb;
      FUN_108d64c00(0xb,&UNK_10f51799f);
    }
    else {
      iVar1 = 0;
      if (*(int *)(param_1 + 0xbc) != 0) {
        iVar1 = iRam0000000113298da4 / *(int *)(param_1 + 0xbc);
      }
      if (uVar3 == iVar1 + 1U) goto LAB_108d5fec4;
      if ((((*(char *)(param_1 + 0x13) == '\0') && ((param_4 & 1) == 0)) &&
          (uVar3 <= *(uint *)(param_1 + 0x1c))) && (**(long **)(param_1 + 0x48) != 0)) {
        uVar6 = *(ulong *)(param_1 + 0x138);
        if (uVar6 == 0) {
          uVar4 = 0;
        }
        else {
          FUN_108d76494(uVar6,param_2,&uStack_54);
          uVar4 = uStack_54;
          if ((int)uVar6 != 0) goto LAB_108d5fee8;
        }
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
        uVar6 = uVar5;
        FUN_108d76948(uVar5,uVar4);
        if ((int)uVar6 == 0) {
          return uVar6;
        }
      }
      else {
        if (uVar3 <= *(uint *)(param_1 + 0xc0)) {
          if ((param_4 & 1) != 0) {
            if (pcRam000000011372e6f8 != (code *)0x0) {
              (*pcRam000000011372e6f8)();
            }
            if (uVar3 <= *(uint *)(param_1 + 0x20)) {
              FUN_108d7668c(*(undefined8 *)(param_1 + 0x40),param_2);
            }
            func_0x000108d768bc(param_1,param_2);
            if (pcRam000000011372e700 != (code *)0x0) {
              (*pcRam000000011372e700)();
            }
          }
          _bzero(*(undefined8 *)(uVar5 + 8),(long)*(int *)(param_1 + 0xbc));
          return 0;
        }
        uVar6 = 0xd;
      }
    }
LAB_108d5fee8:
    FUN_108d76a38(uVar5);
    goto LAB_108d5fd38;
  }
LAB_108d5fe98:
  uVar6 = 7;
LAB_108d5fd38:
  if ((*(int *)(param_1 + 0x98) == 0) && (*(int *)(*(long *)(param_1 + 0x130) + 0x18) == 0)) {
    FUN_108d76cf4(param_1);
  }
  *param_3 = 0;
  return uVar6;
LAB_108d5fe2c:
  uVar6 = *(ulong *)(uVar5 + 0x38);
  (**(code **)(uVar5 + 0x30))();
  if ((int)uVar6 != 5 && (int)uVar6 != 0) goto LAB_108d5fd38;
LAB_108d5fe40:
  lVar2 = *(long *)(uVar5 + 0x40);
  (*pcRam00000001132979f8)(lVar2,param_2,2);
  if (lVar2 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x130);
    goto LAB_108d5fe60;
  }
  goto LAB_108d5fe98;
}



/* Entry: 108d5ffdc; end: 108d5fff3;  */

long * FUN_108d5ffdc(long *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  uint uVar19;
  int iVar20;
  long *plStack_68;
  
  if (*(uint *)(param_1[4] + 0xbc) < *(uint *)(param_1[4] + 0xb8)) {
    plVar16 = (long *)param_1[4];
    uVar17 = 0;
    if (*(uint *)((long)plVar16 + 0xbc) != 0) {
      uVar17 = *(uint *)(plVar16 + 0x17) / *(uint *)((long)plVar16 + 0xbc);
    }
    *(byte *)(plVar16 + 3) = *(byte *)(plVar16 + 3) | 4;
    uVar4 = *(uint *)(param_1 + 5);
    uVar3 = uVar4 - 1 & -uVar17;
    uVar5 = *(uint *)((long)plVar16 + 0x1c);
    uVar19 = uVar5 - uVar3;
    if (uVar3 + uVar17 <= uVar5) {
      uVar19 = uVar17;
    }
    if (uVar5 < uVar4) {
      uVar19 = uVar4 - uVar3;
    }
    if (0 < (int)uVar19) {
      bVar8 = false;
      iVar20 = 1;
      do {
        iVar1 = uVar3 + iVar20;
        if (iVar1 == (int)param_1[5]) {
LAB_108d795d8:
          iVar7 = 0;
          if (*(int *)((long)plVar16 + 0xbc) != 0) {
            iVar7 = iRam0000000113298da4 / *(int *)((long)plVar16 + 0xbc);
          }
          if (iVar1 == iVar7 + 1) {
            plVar18 = (long *)0x0;
          }
          else {
            plVar18 = plVar16;
            FUN_108d5fcfc(plVar16,iVar1,&plStack_68,0);
            plVar11 = plStack_68;
            if ((int)plVar18 != 0) goto LAB_108d796a4;
            plVar18 = plStack_68;
            FUN_108d796d4();
LAB_108d79620:
            if ((*(ushort *)((long)plVar11 + 0x2c) & 4) != 0) {
              bVar8 = true;
            }
            func_0x000108d787d8(plVar11);
          }
        }
        else {
          lVar9 = plVar16[8];
          FUN_108d7898c(lVar9,iVar1);
          if ((int)lVar9 == 0) goto LAB_108d795d8;
          uVar10 = *(undefined8 *)(plVar16[0x26] + 0x40);
          (*pcRam00000001132979f8)(uVar10,iVar1,0);
          plVar11 = (long *)plVar16[0x26];
          FUN_108d7663c(plVar11,iVar1,uVar10);
          plVar18 = (long *)0x0;
          if (plVar11 != (long *)0x0) goto LAB_108d79620;
        }
      } while ((iVar20 < (int)uVar19) && (iVar20 = iVar20 + 1, (int)plVar18 == 0));
      if (((int)plVar18 != 0) || (!bVar8)) goto LAB_108d796a4;
      do {
        uVar3 = uVar3 + 1;
        uVar10 = *(undefined8 *)(plVar16[0x26] + 0x40);
        (*pcRam00000001132979f8)(uVar10,uVar3,0);
        lVar9 = plVar16[0x26];
        FUN_108d7663c(lVar9,uVar3,uVar10);
        if (lVar9 != 0) {
          *(ushort *)(lVar9 + 0x2c) = *(ushort *)(lVar9 + 0x2c) | 4;
          func_0x000108d787d8();
        }
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    plVar18 = (long *)0x0;
LAB_108d796a4:
    *(byte *)(plVar16 + 3) = *(byte *)(plVar16 + 3) & 0xfb;
    return plVar18;
  }
  plVar16 = (long *)param_1[4];
  if (*(char *)((long)plVar16 + 0x14) == '\x02') {
    if (*(uint *)((long)plVar16 + 0x2c) != 0) {
      return (long *)(ulong)*(uint *)((long)plVar16 + 0x2c);
    }
    if ((plVar16[0x27] == 0) && (*(char *)((long)plVar16 + 9) != '\x02')) {
      plVar11 = (long *)*plVar16;
      uVar14 = *(undefined4 *)((long)plVar16 + 0x1c);
      puVar13 = (undefined8 *)0x200;
      FUN_108d60848();
      if (puVar13 == (undefined8 *)0x0) {
        plVar16[8] = 0;
        return (long *)0x7;
      }
      puVar13[0x3d] = 0;
      puVar13[0x3c] = 0;
      puVar13[0x3f] = 0;
      puVar13[0x3e] = 0;
      puVar13[0x39] = 0;
      puVar13[0x38] = 0;
      puVar13[0x3b] = 0;
      puVar13[0x3a] = 0;
      puVar13[0x35] = 0;
      puVar13[0x34] = 0;
      puVar13[0x37] = 0;
      puVar13[0x36] = 0;
      puVar13[0x31] = 0;
      puVar13[0x30] = 0;
      puVar13[0x33] = 0;
      puVar13[0x32] = 0;
      puVar13[0x2d] = 0;
      puVar13[0x2c] = 0;
      puVar13[0x2f] = 0;
      puVar13[0x2e] = 0;
      puVar13[0x29] = 0;
      puVar13[0x28] = 0;
      puVar13[0x2b] = 0;
      puVar13[0x2a] = 0;
      puVar13[0x25] = 0;
      puVar13[0x24] = 0;
      puVar13[0x27] = 0;
      puVar13[0x26] = 0;
      puVar13[0x21] = 0;
      puVar13[0x20] = 0;
      puVar13[0x23] = 0;
      puVar13[0x22] = 0;
      puVar13[0x1d] = 0;
      puVar13[0x1c] = 0;
      puVar13[0x1f] = 0;
      puVar13[0x1e] = 0;
      puVar13[0x19] = 0;
      puVar13[0x18] = 0;
      puVar13[0x1b] = 0;
      puVar13[0x1a] = 0;
      puVar13[0x15] = 0;
      puVar13[0x14] = 0;
      puVar13[0x17] = 0;
      puVar13[0x16] = 0;
      puVar13[0x11] = 0;
      puVar13[0x10] = 0;
      puVar13[0x13] = 0;
      puVar13[0x12] = 0;
      puVar13[0xd] = 0;
      puVar13[0xc] = 0;
      puVar13[0xf] = 0;
      puVar13[0xe] = 0;
      puVar13[9] = 0;
      puVar13[8] = 0;
      puVar13[0xb] = 0;
      puVar13[10] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      puVar13[7] = 0;
      puVar13[6] = 0;
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      *(undefined4 *)puVar13 = uVar14;
      plVar16[8] = (long)puVar13;
      plVar18 = (long *)plVar16[10];
      if (*plVar18 == 0) {
        if (*(char *)((long)plVar16 + 9) == '\x04') {
          plVar18[3] = 0;
          plVar18[2] = 0;
          plVar18[5] = 0;
          plVar18[4] = 0;
          plVar18[1] = 0;
          *plVar18 = 0;
          *plVar18 = (long)&UNK_110ac3d90;
        }
        else {
          lVar9 = plVar16[2];
          plVar18 = plVar16;
          FUN_108d79c10();
          if ((int)plVar18 == 0) {
            uVar14 = 0x806;
            if ((char)lVar9 != '\0') {
              uVar14 = 0x100e;
            }
            (*(code *)plVar11[5])(plVar11,plVar16[0x1b],plVar16[10],uVar14,0);
            plVar18 = plVar11;
          }
          if ((int)plVar18 != 0) goto LAB_108d79a04;
        }
      }
      *(undefined4 *)(plVar16 + 6) = 0;
      *(undefined1 *)((long)plVar16 + 0x17) = 0;
      plVar16[0xc] = 0;
      plVar16[0xd] = 0;
      plVar18 = plVar16;
      FUN_108d79c78();
      if ((int)plVar18 != 0) {
LAB_108d79a04:
        FUN_108d77c44(plVar16[8]);
        plVar16[8] = 0;
        return plVar18;
      }
    }
    *(undefined1 *)((long)plVar16 + 0x14) = 3;
  }
  uVar6 = *(ushort *)((long)param_1 + 0x2c);
  uVar2 = uVar6 & 0xffdf;
  *(ushort *)((long)param_1 + 0x2c) = uVar2;
  if ((uVar6 >> 1 & 1) == 0) {
    *(ushort *)((long)param_1 + 0x2c) = uVar2 | 2;
    FUN_108d76c34(param_1,2);
  }
  lVar9 = plVar16[8];
  uVar17 = *(uint *)(param_1 + 5);
  FUN_108d7898c(lVar9,uVar17);
  if ((int)lVar9 == 0) {
    if (plVar16[0x27] == 0) {
      if ((*(uint *)(plVar16 + 4) < uVar17) || (*(long *)plVar16[10] == 0)) {
        if (*(char *)((long)plVar16 + 0x14) != '\x04') {
          *(ushort *)((long)param_1 + 0x2c) = *(ushort *)((long)param_1 + 0x2c) | 4;
        }
      }
      else {
        lVar9 = plVar16[0xc];
        if ((code *)plVar16[0x21] == (code *)0x0) {
          lVar12 = param_1[1];
        }
        else {
          lVar12 = plVar16[0x24];
          (*(code *)plVar16[0x21])(lVar12,param_1[1],uVar17,7);
          if (lVar12 == 0) {
            return (long *)0x7;
          }
        }
        if (200 < (int)*(uint *)((long)plVar16 + 0xbc)) {
          uVar15 = (ulong)*(uint *)((long)plVar16 + 0xbc) + 200;
          do {
            uVar15 = uVar15 - 200;
          } while (400 < uVar15);
        }
        *(ushort *)((long)param_1 + 0x2c) = *(ushort *)((long)param_1 + 0x2c) | 4;
        plVar11 = (long *)plVar16[10];
        (**(code **)(*plVar11 + 0x18))(plVar11,&stack0xffffffffffffffb8,4,lVar9);
        if ((int)plVar11 != 0) {
          return plVar11;
        }
        plVar11 = (long *)plVar16[10];
        lVar9 = lVar9 + 4;
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,*(undefined4 *)((long)plVar16 + 0xbc),lVar9);
        if ((int)plVar11 != 0) {
          return plVar11;
        }
        plVar11 = (long *)plVar16[10];
        (**(code **)(*plVar11 + 0x18))
                  (plVar11,&stack0xffffffffffffffbc,4,lVar9 + *(int *)((long)plVar16 + 0xbc));
        if ((int)plVar11 != 0) {
          return plVar11;
        }
        plVar16[0xc] = (long)*(int *)((long)plVar16 + 0xbc) + plVar16[0xc] + 8;
        *(int *)(plVar16 + 6) = (int)plVar16[6] + 1;
        lVar9 = plVar16[8];
        FUN_108d7668c(lVar9,(int)param_1[5]);
        plVar11 = plVar16;
        func_0x000108d768bc(plVar16,(int)param_1[5]);
        uVar17 = (uint)plVar11 | (uint)lVar9;
        if (uVar17 != 0) {
          return (long *)(ulong)uVar17;
        }
        uVar17 = *(uint *)(param_1 + 5);
      }
    }
LAB_108d79780:
    if (0 < (int)plVar16[0x10]) {
      lVar9 = param_1[4];
      FUN_108d79a60(lVar9,uVar17);
      if ((int)lVar9 != 0) {
        plVar11 = param_1;
        FUN_108d79acc(param_1);
        uVar17 = *(uint *)(param_1 + 5);
        goto LAB_108d797b4;
      }
    }
  }
  else if ((int)plVar16[0x10] != 0) {
    lVar9 = param_1[4];
    FUN_108d79a60(lVar9,uVar17);
    if ((int)lVar9 != 0) goto LAB_108d79780;
  }
  plVar11 = (long *)0x0;
LAB_108d797b4:
  if (*(uint *)((long)plVar16 + 0x1c) < uVar17) {
    *(uint *)((long)plVar16 + 0x1c) = uVar17;
  }
  return plVar11;
}



/* Entry: 108d5fff4; end: 108d6007b;  */

long FUN_108d5fff4(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
    }
  }
  lVar2 = param_1;
  FUN_108d66d2c(param_1,0);
  if ((int)lVar2 == 0) {
    lVar2 = param_1;
    FUN_108d66be4(param_1,0);
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_108d7f5fc(param_1);
    }
  }
  return lVar2;
}



/* Entry: 108d6007c; end: 108d601b3;  */

void FUN_108d6007c(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lStack_38;
  
  plVar4 = *(long **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  if ((int)param_2 == 0) {
    param_2 = plVar4[2];
    if ((param_2 == 0) || (func_0x000108d7ccac(param_2,0,0), (int)param_2 == 0)) goto LAB_108d600d0;
    param_3 = 0;
  }
  FUN_108d7ca38(param_1,param_2,param_3);
LAB_108d600d0:
  if (*(char *)(param_1 + 0x10) == '\x02') {
    func_0x000108d76d70(*plVar4);
    plVar2 = plVar4;
    func_0x000108d7be68(plVar4,1,&lStack_38,0);
    if ((int)plVar2 == 0) {
      uVar3 = *(uint *)(*(long *)(lStack_38 + 0x50) + 0x1c);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (uVar3 == 0) {
        uVar3 = *(uint *)(*plVar4 + 0x1c);
      }
      *(uint *)(plVar4 + 8) = uVar3;
      func_0x000108d787d8(*(undefined8 *)(lStack_38 + 0x68));
    }
    *(undefined1 *)((long)plVar4 + 0x24) = 1;
    FUN_108d77c44(plVar4[0xc]);
    plVar4[0xc] = 0;
  }
  FUN_108d7cb70(param_1);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x58) != 0) {
      (*pcRam00000001132979a8)();
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    return;
  }
  return;
}



/* Entry: 108d601b4; end: 108d601c7;  */

void FUN_108d601b4(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d601c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001132979a8)();
    return;
  }
  return;
}



/* Entry: 108d601c8; end: 108d604bb;  */

/* WARNING: Possible PIC construction at 0x000108d603c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d6026c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d602a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d602d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d60308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d6033c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d60370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d603a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d60374) */
/* WARNING: Removing unreachable block (ram,0x000108d6038c) */
/* WARNING: Removing unreachable block (ram,0x000108d603a4) */
/* WARNING: Removing unreachable block (ram,0x000108d60340) */
/* WARNING: Removing unreachable block (ram,0x000108d60358) */
/* WARNING: Removing unreachable block (ram,0x000108d6036c) */
/* WARNING: Removing unreachable block (ram,0x000108d6030c) */
/* WARNING: Removing unreachable block (ram,0x000108d60324) */
/* WARNING: Removing unreachable block (ram,0x000108d60338) */
/* WARNING: Removing unreachable block (ram,0x000108d602d8) */
/* WARNING: Removing unreachable block (ram,0x000108d602f0) */
/* WARNING: Removing unreachable block (ram,0x000108d60304) */
/* WARNING: Removing unreachable block (ram,0x000108d602a4) */
/* WARNING: Removing unreachable block (ram,0x000108d602bc) */
/* WARNING: Removing unreachable block (ram,0x000108d602d0) */
/* WARNING: Removing unreachable block (ram,0x000108d60270) */
/* WARNING: Removing unreachable block (ram,0x000108d60288) */
/* WARNING: Removing unreachable block (ram,0x000108d6029c) */
/* WARNING: Removing unreachable block (ram,0x000108d603cc) */
/* WARNING: Removing unreachable block (ram,0x000108d60424) */
/* WARNING: Removing unreachable block (ram,0x000108d603d0) */
/* WARNING: Removing unreachable block (ram,0x000108d60444) */
/* WARNING: Removing unreachable block (ram,0x000108d60458) */
/* WARNING: Removing unreachable block (ram,0x000108d6046c) */
/* WARNING: Removing unreachable block (ram,0x000108d60474) */
/* WARNING: Removing unreachable block (ram,0x000108d6044c) */
/* WARNING: Removing unreachable block (ram,0x000108d60480) */
/* WARNING: Removing unreachable block (ram,0x000108d67c04) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */
/* WARNING: Removing unreachable block (ram,0x000108d67c24) */
/* WARNING: Removing unreachable block (ram,0x000108d67c64) */
/* WARNING: Removing unreachable block (ram,0x000108d67c3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67c6c) */
/* WARNING: Removing unreachable block (ram,0x000108d67c78) */
/* WARNING: Removing unreachable block (ram,0x000108d67c80) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67c88) */
/* WARNING: Removing unreachable block (ram,0x000108d67c98) */
/* WARNING: Removing unreachable block (ram,0x000108d67cd8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cdc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67d00) */
/* WARNING: Removing unreachable block (ram,0x000108d67d04) */
/* WARNING: Removing unreachable block (ram,0x000108d67d0c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d14) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67e08) */
/* WARNING: Removing unreachable block (ram,0x000108d67e14) */
/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67ebc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ec4) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67ec8) */
/* WARNING: Removing unreachable block (ram,0x000108d603d8) */
/* WARNING: Removing unreachable block (ram,0x000108d60660) */
/* WARNING: Removing unreachable block (ram,0x000108d60664) */
/* WARNING: Removing unreachable block (ram,0x000108d60668) */
/* WARNING: Removing unreachable block (ram,0x000108d60674) */
/* WARNING: Removing unreachable block (ram,0x000108d60680) */
/* WARNING: Removing unreachable block (ram,0x000108d606a8) */
/* WARNING: Removing unreachable block (ram,0x000108d6068c) */
/* WARNING: Removing unreachable block (ram,0x000108d606a4) */
/* WARNING: Removing unreachable block (ram,0x000108d60670) */
/* WARNING: Removing unreachable block (ram,0x000108d7193c) */
/* WARNING: Removing unreachable block (ram,0x000108d71958) */
/* WARNING: Removing unreachable block (ram,0x000108d7196c) */
/* WARNING: Removing unreachable block (ram,0x000108d71964) */
/* WARNING: Removing unreachable block (ram,0x000108d7197c) */
/* WARNING: Removing unreachable block (ram,0x000108d603ac) */

void FUN_108d601c8(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  lVar5 = *(long *)(*param_1 + 0x28);
  FUN_108d67a14(*param_3,1);
  uStack_68 = 0;
  uVar1 = *(uint *)(lVar5 + 0x2c);
  uVar7 = *(undefined8 *)(lVar5 + 0x60);
  uVar6 = *(undefined8 *)(lVar5 + 200);
  *(uint *)(lVar5 + 0x2c) = uVar1 & 0xffd5d7ff | 0x202800;
  *(undefined8 *)(lVar5 + 200) = 0;
  puVar3 = &UNK_10f516f58;
  FUN_108d5e0b4();
  if ((puVar3 == (undefined *)0x0) ||
     (lVar4 = lVar5, FUN_108d604d0(lVar5,&uStack_68,puVar3), (int)lVar4 != 0)) {
    *(uint *)(lVar5 + 0x2c) = uVar1;
    *(undefined8 *)(lVar5 + 0x60) = uVar7;
    *(undefined8 *)(lVar5 + 200) = uVar6;
  }
  if (puVar3 != (undefined *)0x0) {
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (puRam0000000113829af0 != (undefined *)0x0) {
        (*pcRam0000000113297998)();
      }
      puVar2 = puVar3;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar2;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(puVar3);
      puVar3 = puRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (puRam0000000113829af0 == (undefined *)0x0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar3);
    return;
  }
  return;
}



/* Entry: 108d604bc; end: 108d604cf;  */

undefined8 FUN_108d604bc(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x28);
}



/* Entry: 108d604d0; end: 108d60643;  */

/* WARNING: Possible PIC construction at 0x000108d60554: Changing call to branch */

undefined8 FUN_108d604d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar2 = param_1;
  FUN_108d6c278(param_1,param_3,0xffffffff,0,0,&uStack_38,0);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  do {
    uVar2 = uStack_38;
    FUN_108d681c0();
    if ((int)uVar2 != 100) goto SUB_108d715e8;
    uVar2 = uStack_38;
    func_0x000108d692a8(uStack_38,0);
    uVar3 = param_1;
    func_0x000108d60590(param_1,param_2,uVar2);
  } while ((int)uVar3 == 0);
  unaff_x30 = 0x108d60558;
  register0x00000008 = (BADSPACEBASE *)auStack_40;
  unaff_x19 = param_2;
  unaff_x20 = param_1;
  unaff_x21 = uStack_38;
  unaff_x22 = uVar3;
  unaff_x29 = puVar1;
SUB_108d715e8:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000108d674fc();
  if ((int)uStack_38 != 0) {
    uVar2 = param_1;
    FUN_108d6ba4c(param_1);
    func_0x000108d7163c(param_2,param_1,uVar2);
  }
  return uStack_38;
}



/* Entry: 108d60644; end: 108d606af;  */

/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d67d00) */
/* WARNING: Removing unreachable block (ram,0x000108d67d04) */
/* WARNING: Removing unreachable block (ram,0x000108d67d0c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d14) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */

undefined4 FUN_108d60644(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  lVar4 = *param_1;
  if (param_2 == 0) {
    if ((*(ushort *)(lVar4 + 8) & 0x2460) == 0) {
      uVar7 = 0;
      *(undefined2 *)(lVar4 + 8) = 1;
    }
    else {
      func_0x000108d82720(lVar4);
      uVar7 = 0;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) == 0) {
      iVar8 = 1000000000;
    }
    else {
      iVar8 = *(int *)(*(long *)(lVar4 + 0x28) + 0x68);
    }
    iVar3 = 2;
    if ((int)param_3 < 0) {
      lVar5 = param_2;
      _strlen();
      param_3 = (uint)lVar5 & 0x3fffffff;
      if (iVar8 < (int)param_3) {
        param_3 = iVar8 + 1;
      }
      iVar3 = 0x202;
    }
    if (iVar8 < (int)param_3) {
      uVar7 = 0x12;
    }
    else {
      iVar1 = ((iVar3 << 0x16) >> 0x1f & 1U) + param_3;
      iVar2 = iVar1;
      if (iVar1 < 0x21) {
        iVar2 = 0x20;
      }
      if (*(int *)(lVar4 + 0x20) < iVar2) {
        lVar5 = lVar4;
        FUN_108d82884(lVar4,iVar2,0);
        if ((int)lVar5 != 0) {
          return 7;
        }
        uVar6 = *(undefined8 *)(lVar4 + 0x10);
      }
      else {
        uVar6 = *(undefined8 *)(lVar4 + 0x18);
        *(undefined8 *)(lVar4 + 0x10) = uVar6;
        *(ushort *)(lVar4 + 8) = *(ushort *)(lVar4 + 8) & 0xd;
      }
      _memcpy(uVar6,param_2,(long)iVar1);
      *(uint *)(lVar4 + 0xc) = param_3;
      *(short *)(lVar4 + 8) = (short)iVar3;
      *(undefined1 *)(lVar4 + 10) = 1;
      uVar7 = 0x12;
      if ((int)param_3 <= iVar8) {
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}



/* Entry: 108d606b0; end: 108d607c7;  */

void FUN_108d606b0(long param_1,uint param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (0 < (int)param_2) {
    uVar2 = 0;
    do {
      *(undefined1 *)(param_1 + uVar2) = 0;
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
    _munlock(param_1);
  }
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      lVar1 = param_1;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)lVar1;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(param_1);
      param_1 = lRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (lRam0000000113829af0 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}



/* Entry: 108d607c8; end: 108d60833;  */

undefined1 * FUN_108d607c8(uint param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined1 *)(long)(int)param_1;
  FUN_108d60848();
  if (((int)param_1 < 1) || (puVar1 == (undefined1 *)0x0)) {
    if (puVar1 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
  }
  else {
    uVar2 = (ulong)param_1;
    puVar3 = puVar1;
    do {
      *puVar3 = 0;
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
  }
  _mlock(puVar1,(undefined1 *)(long)(int)param_1);
  return puVar1;
}



/* Entry: 108d60834; end: 108d60847;  */

void FUN_108d60834(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d60840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000113297990)();
    return;
  }
  return;
}



/* Entry: 108d60848; end: 108d60a3f;  */

long FUN_108d60848(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 - 0x7fffff00U < 0xffffffff80000101) {
    lVar3 = 0;
  }
  else {
    if (iRam0000000113297910 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d60920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000113297938)(param_1);
      return param_1;
    }
    if (lRam0000000113829af0 != 0) {
      (*pcRam0000000113297998)();
    }
    lVar3 = param_1;
    (*pcRam0000000113297958)();
    if (lRam0000000113829ac8 < param_1) {
      lRam0000000113829ac8 = param_1;
    }
    lRam0000000113829a78 = param_1;
    if (lRam0000000113829b00 != 0) {
      if (lRam0000000113829a50 < lRam0000000113829af8 - (int)lVar3) {
        uRam0000000113829b24 = 0;
      }
      else {
        uRam0000000113829b24 = 1;
        FUN_108d718ac(lVar3);
      }
    }
    (*pcRam0000000113297938)();
    if (lVar3 != 0) {
      lVar2 = lVar3;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 + (int)lVar2;
      if (lRam0000000113829aa0 < lRam0000000113829a50) {
        lRam0000000113829aa0 = lRam0000000113829a50;
      }
      lVar2 = lRam0000000113829a98 + 1;
      bVar1 = lRam0000000113829ae8 <= lRam0000000113829a98;
      lRam0000000113829a98 = lVar2;
      if (bVar1) {
        lRam0000000113829ae8 = lVar2;
      }
    }
    if (lRam0000000113829af0 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return lVar3;
}



/* Entry: 108d60a40; end: 108d60b87;  */

undefined8 FUN_108d60a40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = (undefined8 *)param_1[6];
  puVar2 = (undefined8 *)param_1[7];
  puVar1 = (undefined8 *)param_1[10];
  uVar4 = param_1[0xb];
  FUN_108d606b0(param_1[8],*(undefined4 *)((long)param_1 + 0x1c));
  FUN_108d606b0(param_1[9],*(undefined4 *)(param_1 + 5));
  uVar8 = param_2[9];
  uVar7 = param_2[8];
  uVar10 = param_2[0xb];
  uVar9 = param_2[10];
  uVar12 = param_2[5];
  uVar11 = param_2[4];
  uVar13 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar13;
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  param_1[9] = uVar8;
  param_1[8] = uVar7;
  param_1[0xb] = uVar10;
  param_1[10] = uVar9;
  param_1[5] = uVar12;
  param_1[4] = uVar11;
  param_1[6] = puVar6;
  puVar5 = (undefined8 *)param_2[6];
  uVar8 = puVar5[1];
  uVar7 = *puVar5;
  uVar10 = puVar5[3];
  uVar9 = puVar5[2];
  uVar11 = puVar5[4];
  uVar13 = puVar5[7];
  uVar12 = puVar5[6];
  puVar6[5] = puVar5[5];
  puVar6[4] = uVar11;
  puVar6[7] = uVar13;
  puVar6[6] = uVar12;
  puVar6[1] = uVar8;
  *puVar6 = uVar7;
  puVar6[3] = uVar10;
  puVar6[2] = uVar9;
  param_1[7] = puVar2;
  puVar6 = (undefined8 *)param_2[7];
  uVar8 = puVar6[1];
  uVar7 = *puVar6;
  uVar10 = puVar6[3];
  uVar9 = puVar6[2];
  uVar11 = puVar6[4];
  uVar13 = puVar6[7];
  uVar12 = puVar6[6];
  puVar2[5] = puVar6[5];
  puVar2[4] = uVar11;
  puVar2[7] = uVar13;
  puVar2[6] = uVar12;
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
  puVar2[3] = uVar10;
  puVar2[2] = uVar9;
  param_1[10] = puVar1;
  puVar6 = (undefined8 *)param_2[10];
  uVar7 = *puVar6;
  uVar9 = puVar6[3];
  uVar8 = puVar6[2];
  puVar1[1] = puVar6[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  uVar8 = puVar6[5];
  uVar7 = puVar6[4];
  uVar10 = puVar6[7];
  uVar9 = puVar6[6];
  uVar11 = puVar6[8];
  uVar13 = puVar6[0xb];
  uVar12 = puVar6[10];
  puVar1[9] = puVar6[9];
  puVar1[8] = uVar11;
  puVar1[0xb] = uVar13;
  puVar1[10] = uVar12;
  puVar1[5] = uVar8;
  puVar1[4] = uVar7;
  puVar1[7] = uVar10;
  puVar1[6] = uVar9;
  uVar8 = puVar6[0xd];
  uVar7 = puVar6[0xc];
  uVar10 = puVar6[0xf];
  uVar9 = puVar6[0xe];
  uVar12 = puVar6[0x11];
  uVar11 = puVar6[0x10];
  puVar1[0x12] = puVar6[0x12];
  puVar1[0xf] = uVar10;
  puVar1[0xe] = uVar9;
  puVar1[0x11] = uVar12;
  puVar1[0x10] = uVar11;
  puVar1[0xd] = uVar8;
  puVar1[0xc] = uVar7;
  param_1[0xb] = uVar4;
  (**(code **)(param_1[10] + 0x70))(uVar4,param_2[0xb]);
  if ((param_2[8] == 0) ||
     (uVar3 = (ulong)*(uint *)((long)param_2 + 0x1c), *(uint *)((long)param_2 + 0x1c) == 0)) {
LAB_108d60b40:
    if (param_2[9] != 0) {
      uVar3 = (ulong)*(uint *)(param_2 + 5);
      if (*(uint *)(param_2 + 5) == 0) {
        return 0;
      }
      FUN_108d607c8();
      param_1[9] = uVar3;
      if (uVar3 == 0) goto LAB_108d60b70;
      _memcpy();
    }
    uVar4 = 0;
  }
  else {
    FUN_108d607c8();
    param_1[8] = uVar3;
    if (uVar3 != 0) {
      _memcpy();
      goto LAB_108d60b40;
    }
LAB_108d60b70:
    uVar4 = 7;
  }
  return uVar4;
}



/* Entry: 108d60b88; end: 108d60d43;  */

void FUN_108d60b88(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = 0x60;
  FUN_108d607c8();
  *param_1 = lVar3;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)0x98;
    FUN_108d607c8();
    *(undefined8 **)(lVar3 + 0x50) = puVar4;
    puVar1 = puRam000000011372e6e0;
    if (puVar4 != (undefined8 *)0x0) {
      if (lRam000000011372e6d8 == 0) {
        uVar5 = *puRam000000011372e6e0;
        uVar9 = puRam000000011372e6e0[3];
        uVar8 = puRam000000011372e6e0[2];
        puVar4[1] = puRam000000011372e6e0[1];
        *puVar4 = uVar5;
        puVar4[3] = uVar9;
        puVar4[2] = uVar8;
        uVar8 = puVar1[5];
        uVar5 = puVar1[4];
        uVar10 = puVar1[7];
        uVar9 = puVar1[6];
        uVar11 = puVar1[8];
        uVar13 = puVar1[0xb];
        uVar12 = puVar1[10];
        puVar4[9] = puVar1[9];
        puVar4[8] = uVar11;
        puVar4[0xb] = uVar13;
        puVar4[10] = uVar12;
        puVar4[5] = uVar8;
        puVar4[4] = uVar5;
        puVar4[7] = uVar10;
        puVar4[6] = uVar9;
        uVar8 = puVar1[0xd];
        uVar5 = puVar1[0xc];
        uVar10 = puVar1[0xf];
        uVar9 = puVar1[0xe];
        uVar12 = puVar1[0x11];
        uVar11 = puVar1[0x10];
        puVar4[0x12] = puVar1[0x12];
        puVar4[0xf] = uVar10;
        puVar4[0xe] = uVar9;
        puVar4[0x11] = uVar12;
        puVar4[0x10] = uVar11;
        puVar4[0xd] = uVar8;
        puVar4[0xc] = uVar5;
      }
      else {
        (*pcRam0000000113297998)(lRam000000011372e6d8);
        puVar1 = puRam000000011372e6e0;
        lVar6 = lRam000000011372e6d8;
        puVar4 = *(undefined8 **)(lVar3 + 0x50);
        uVar5 = puRam000000011372e6e0[8];
        uVar9 = puRam000000011372e6e0[0xb];
        uVar8 = puRam000000011372e6e0[10];
        uVar13 = puRam000000011372e6e0[5];
        uVar12 = puRam000000011372e6e0[4];
        uVar11 = puRam000000011372e6e0[7];
        uVar10 = puRam000000011372e6e0[6];
        puVar4[9] = puRam000000011372e6e0[9];
        puVar4[8] = uVar5;
        puVar4[0xb] = uVar9;
        puVar4[10] = uVar8;
        puVar4[5] = uVar13;
        puVar4[4] = uVar12;
        puVar4[7] = uVar11;
        puVar4[6] = uVar10;
        uVar10 = puVar1[0xf];
        uVar9 = puVar1[0xe];
        uVar8 = puVar1[0x11];
        uVar5 = puVar1[0x10];
        uVar12 = puVar1[0xd];
        uVar11 = puVar1[0xc];
        puVar4[0x12] = puVar1[0x12];
        puVar4[0xf] = uVar10;
        puVar4[0xe] = uVar9;
        puVar4[0x11] = uVar8;
        puVar4[0x10] = uVar5;
        puVar4[0xd] = uVar12;
        puVar4[0xc] = uVar11;
        uVar5 = *puVar1;
        uVar9 = puVar1[3];
        uVar8 = puVar1[2];
        puVar4[1] = puVar1[1];
        *puVar4 = uVar5;
        puVar4[3] = uVar9;
        puVar4[2] = uVar8;
        if (lVar6 != 0) {
          (*pcRam00000001132979a8)();
        }
      }
      iVar2 = (int)lVar3 + 0x58;
      (**(code **)(*(long *)(lVar3 + 0x50) + 0x80))();
      if (iVar2 == 0) {
        uVar5 = 0x40;
        FUN_108d607c8();
        *(undefined8 *)(lVar3 + 0x30) = uVar5;
        lVar6 = 0x40;
        FUN_108d607c8();
        *(long *)(lVar3 + 0x38) = lVar6;
        if ((*(long *)(lVar3 + 0x30) != 0) && (lVar6 != 0)) {
          uVar7 = 2;
          if (cRam000000011372e6c0 == '\0') {
            uVar7 = 3;
          }
          *(undefined4 *)(lVar3 + 0x2c) = uVar7;
        }
      }
    }
  }
  return;
}



/* Entry: 108d60d44; end: 108d60da3;  */

void FUN_108d60d44(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uStack_14;
  
  uStack_14 = param_2;
  if (((*(uint *)(param_1 + 0x2c) >> 1 & 1) == 0) && ((*(uint *)(param_1 + 0x2c) >> 2 & 1) != 0)) {
    uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  (**(code **)(*(long *)(param_1 + 0x50) + 0x28))
            (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x38),
             *(undefined4 *)(param_1 + 0x10),param_3,param_4,&uStack_14,4,param_5);
  return;
}



/* Entry: 108d60da4; end: 108d610c7;  */

undefined8 FUN_108d60da4(uint *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  char cVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar9 = *(long *)(param_2 + 0x40);
  if ((lVar9 == 0) || (iVar1 = *(int *)(param_2 + 0x1c), iVar1 == 0)) {
    return 1;
  }
  if (param_1[0xf] != 0) {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 10) + 0x58);
    (**(code **)(*(long *)(*(long *)(param_1 + 10) + 0x50) + 0x20))
              (uVar10,*(undefined8 *)(param_1 + 2),0x10);
    if ((int)uVar10 != 0) {
      return 1;
    }
    param_1[0xf] = 0;
    iVar1 = *(int *)(param_2 + 0x1c);
    lVar9 = *(long *)(param_2 + 0x40);
  }
  iVar2 = *(int *)(param_2 + 0x10);
  iVar8 = iVar2 * 2;
  if (iVar1 == iVar8 + 3) {
    if (lVar9 == 0) {
      uVar11 = *param_1;
      goto LAB_108d60f4c;
    }
    lVar12 = 0;
    do {
      if ((ulong)*(byte *)(lVar9 + lVar12) == 0) {
        cVar5 = (&UNK_10dfa05fd)[(byte)(&UNK_10f516f50)[lVar12]];
        cVar13 = '\0';
LAB_108d60e98:
        if (cVar13 != cVar5) goto LAB_108d60eb0;
        break;
      }
      cVar13 = (&UNK_10dfa05fd)[*(byte *)(lVar9 + lVar12)];
      cVar5 = (&UNK_10dfa05fd)[(byte)(&UNK_10f516f50)[lVar12]];
      if (cVar13 != cVar5) goto LAB_108d60e98;
      lVar12 = lVar12 + 1;
    } while (lVar12 != 2);
    uVar10 = *(undefined8 *)(param_2 + 0x30);
    lVar9 = lVar9 + 2;
  }
  else {
LAB_108d60eb0:
    uVar11 = *param_1;
    if (iVar1 != (uVar11 + iVar2) * 2 + 3 || lVar9 == 0) {
LAB_108d60f4c:
      (**(code **)(*(long *)(param_2 + 0x50) + 0x30))
                (*(undefined8 *)(param_2 + 0x58),lVar9,iVar1,*(undefined8 *)(param_1 + 2),uVar11,
                 *(undefined4 *)(param_2 + 8),iVar2,*(undefined8 *)(param_2 + 0x30));
      goto LAB_108d60f64;
    }
    lVar12 = 0;
    do {
      if ((ulong)*(byte *)(lVar9 + lVar12) == 0) {
        cVar5 = (&UNK_10dfa05fd)[(byte)(&UNK_10f516f50)[lVar12]];
        cVar13 = '\0';
LAB_108d60f14:
        if (cVar13 != cVar5) goto LAB_108d60f4c;
        break;
      }
      cVar13 = (&UNK_10dfa05fd)[*(byte *)(lVar9 + lVar12)];
      cVar5 = (&UNK_10dfa05fd)[(byte)(&UNK_10f516f50)[lVar12]];
      if (cVar13 != cVar5) goto LAB_108d60f14;
      lVar12 = lVar12 + 1;
    } while (lVar12 != 2);
    func_0x000108d5eaa4(lVar9 + 2,iVar8,*(undefined8 *)(param_2 + 0x30));
    lVar9 = lVar9 + 2 + (long)*(int *)(param_2 + 0x10) * 2;
    iVar8 = *param_1 << 1;
    uVar10 = *(undefined8 *)(param_1 + 2);
  }
  func_0x000108d5eaa4(lVar9,iVar8,uVar10);
LAB_108d60f64:
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar15 = (ulong)uVar3;
  uVar4 = *param_1;
  uVar14 = (ulong)uVar4;
  FUN_108d606b0(*(undefined8 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x48) = 0;
  uVar11 = (uVar4 + uVar3) * 2 + 3;
  puVar7 = (undefined1 *)(ulong)uVar11;
  *(uint *)(param_2 + 0x28) = uVar11;
  FUN_108d607c8();
  *(undefined1 **)(param_2 + 0x48) = puVar7;
  if (puVar7 == (undefined1 *)0x0) {
    uVar10 = 7;
  }
  else {
    *puVar7 = 0x78;
    *(undefined1 *)(*(long *)(param_2 + 0x48) + 1) = 0x27;
    lVar9 = *(long *)(param_2 + 0x48);
    if (0 < (int)uVar3) {
      do {
        lVar9 = lVar9 + 2;
        func_0x000108d64bd8(3,lVar9,&DAT_10f5175a5);
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      lVar9 = *(long *)(param_2 + 0x48);
    }
    if (0 < (int)uVar4) {
      lVar9 = lVar9 + (int)(uVar3 << 1);
      do {
        lVar9 = lVar9 + 2;
        func_0x000108d64bd8(3,lVar9,&DAT_10f5175a5);
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      lVar9 = *(long *)(param_2 + 0x48);
    }
    *(undefined1 *)(lVar9 + *(int *)(param_2 + 0x28) + -1) = 0x27;
    if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
      _memcpy(*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 2),(long)(int)*param_1);
      bVar6 = bRam0000000113298d98;
      uVar15 = (ulong)*param_1;
      if (0 < (int)*param_1) {
        lVar9 = 0;
        do {
          *(byte *)(*(long *)(param_1 + 4) + lVar9) =
               *(byte *)(*(long *)(param_1 + 4) + lVar9) ^ bVar6;
          lVar9 = lVar9 + 1;
          uVar15 = (ulong)(int)*param_1;
        } while (lVar9 < (long)uVar15);
      }
      (**(code **)(*(long *)(param_2 + 0x50) + 0x30))
                (*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x30),
                 *(undefined4 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 4),uVar15,
                 *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                 *(undefined8 *)(param_2 + 0x38));
    }
    uVar10 = 0;
    *(undefined4 *)(param_2 + 4) = 0;
  }
  return uVar10;
}



/* Entry: 108d610c8; end: 108d610ff;  */

void FUN_108d610c8(void)

{
  func_0x000108d7039c();
  return;
}



/* Entry: 108d61100; end: 108d6120f;  */

long FUN_108d61100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  FUN_108d6f220(param_1,&lStack_48,6,0);
  if ((((int)param_1 == 0) &&
      (param_1 = lStack_48, FUN_108d5eff4(lStack_48,&UNK_10f516f53,param_2,param_3),
      (int)param_1 == 0)) &&
     (param_1 = lStack_48, FUN_108d61210(lStack_48,param_4,0,0,0), (int)param_1 == 0)) {
    param_1 = lStack_48;
    FUN_108d6c278(lStack_48,&UNK_10f5175ab,0xffffffff,0,0,&lStack_50,0);
    if (((int)param_1 == 0) && (param_1 = lStack_50, FUN_108d681c0(), (int)param_1 == 100)) {
      lVar1 = lStack_50;
      FUN_108d69240(lStack_50,0);
      param_1 = 0;
      *param_5 = (int)lVar1;
    }
    if (lStack_50 != 0) {
      FUN_108d67440(lStack_50);
    }
  }
  if (lStack_48 != 0) {
    FUN_108d6dcfc(lStack_48,0);
  }
  return param_1;
}



/* Entry: 108d61210; end: 108d615ef;  */

/* WARNING: Removing unreachable block (ram,0x000108d6145c) */

uint FUN_108d61210(ulong param_1,byte *param_2,code *param_3,undefined8 param_4,long *param_5)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lStack_70;
  byte *pbStack_68;
  
  lStack_70 = 0;
  uVar10 = param_1;
  FUN_108d6b9cc();
  if ((int)uVar10 == 0) {
    uVar4 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    pbVar12 = (byte *)"";
    if (param_2 != (byte *)0x0) {
      pbVar12 = param_2;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    lVar5 = *(long *)(param_1 + 0x140);
    if (lVar5 != 0) {
      if ((*(ushort *)(lVar5 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar5 + 8) = 1;
      }
      else {
        func_0x000108d82720();
      }
    }
    while (*pbVar12 != 0) {
      uVar10 = param_1;
      FUN_108d6c278(param_1,pbVar12,0xffffffff,1,0,&lStack_70,&pbStack_68);
      uVar4 = (uint)uVar10;
      if (uVar4 != 0) goto LAB_108d614d0;
      pbVar12 = pbStack_68;
      if (lStack_70 != 0) {
        uVar10 = 0;
        bVar3 = false;
        lVar5 = 0;
        uVar1 = *(ushort *)(lStack_70 + 0x88);
        uVar11 = (ulong)uVar1;
        do {
          lVar8 = lStack_70;
          lVar6 = lStack_70;
          FUN_108d681c0();
          uVar4 = (uint)lVar6;
          if (param_3 != (code *)0x0) {
            if (uVar4 == 100) {
              if (!bVar3) goto LAB_108d61354;
LAB_108d61394:
              lVar5 = uVar10 + uVar11 * 8;
              if (uVar1 != 0) {
                uVar9 = 0;
                do {
                  lVar6 = lVar8;
                  func_0x000108d692a8(lVar8,uVar9);
                  *(long *)(lVar5 + uVar9 * 8) = lVar6;
                  if (lVar6 == 0) {
                    lVar6 = lVar8;
                    func_0x000108d69068(lVar8,uVar9);
                    uVar2 = *(ushort *)(lVar6 + 8);
                    func_0x000108d6912c(lVar8);
                    if ((1L << ((ulong)uVar2 & 0x1f) & 0xaaaaaaaaaaaaaaaaU) == 0) {
                      *(undefined1 *)(param_1 + 0x51) = 1;
                      uVar4 = 100;
                      goto LAB_108d6146c;
                    }
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar11 != uVar9);
              }
            }
            else {
              if ((uVar4 != 0x65 || bVar3) || ((*(byte *)(param_1 + 0x2d) & 1) == 0)) break;
LAB_108d61354:
              uVar10 = param_1;
              FUN_108d68fc8(param_1,uVar11 << 4 | 1);
              if (uVar10 == 0) {
LAB_108d6146c:
                if (lVar8 == 0) goto LAB_108d61478;
                goto LAB_108d61470;
              }
              if (uVar1 != 0) {
                uVar9 = 0;
                do {
                  lVar6 = lVar8;
                  FUN_108d6939c(lVar8,uVar9);
                  *(long *)(uVar10 + uVar9 * 8) = lVar6;
                  uVar9 = uVar9 + 1;
                } while (uVar11 != uVar9);
              }
              if (uVar4 == 100) goto LAB_108d61394;
            }
            uVar7 = param_4;
            (*param_3)(param_4,uVar11,lVar5,uVar10);
            if ((int)uVar7 != 0) {
              func_0x000108d674fc(lStack_70);
              lStack_70 = 0;
              *(undefined4 *)(param_1 + 0x44) = 4;
              lVar5 = *(long *)(param_1 + 0x140);
              if (lVar5 != 0) {
                if ((*(ushort *)(lVar5 + 8) & 0x2460) == 0) {
                  *(undefined2 *)(lVar5 + 8) = 1;
                }
                else {
                  func_0x000108d82720();
                }
              }
              func_0x000108d60660(param_1,uVar10);
              uVar4 = 4;
              goto LAB_108d614f8;
            }
            bVar3 = true;
          }
          lVar8 = lStack_70;
        } while (uVar4 == 100);
        uVar4 = (uint)lVar8;
        func_0x000108d674fc();
        lStack_70 = 0;
        pbVar12 = pbStack_68 + -1;
        do {
          pbVar12 = pbVar12 + 1;
        } while (((&UNK_10dfa0749)[*pbVar12] & 1) != 0);
        func_0x000108d60660(param_1,uVar10);
        if (uVar4 != 0) goto LAB_108d614d0;
      }
    }
    uVar4 = 0;
LAB_108d614d0:
    uVar10 = 0;
    lVar8 = lStack_70;
    if (lStack_70 != 0) {
LAB_108d61470:
      func_0x000108d674fc(lVar8);
    }
LAB_108d61478:
    func_0x000108d60660(param_1,uVar10);
    if (param_1 == 0) {
      uVar4 = uVar4 & 0xff;
    }
    else {
LAB_108d614f8:
      if ((uVar4 == 0xc0a) || (*(char *)(param_1 + 0x51) != '\0')) {
        FUN_108d80e10(param_1);
        uVar4 = 7;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x48) & uVar4;
      }
    }
    if ((param_5 == (long *)0x0) || (uVar4 == 0)) {
      if (param_5 != (long *)0x0) {
        *param_5 = 0;
      }
    }
    else {
      uVar10 = param_1;
      FUN_108d6ba4c();
      if (uVar10 == 0) {
        lVar5 = 1;
      }
      else {
        _strlen();
        lVar5 = (uVar10 & 0x3fffffff) + 1;
      }
      lVar8 = lVar5;
      FUN_108d60848();
      *param_5 = lVar8;
      if (lVar8 == 0) {
        uVar4 = 7;
        *(undefined4 *)(param_1 + 0x44) = 7;
        lVar5 = *(long *)(param_1 + 0x140);
        if (lVar5 != 0) {
          if ((*(ushort *)(lVar5 + 8) & 0x2460) == 0) {
            *(undefined2 *)(lVar5 + 8) = 1;
          }
          else {
            func_0x000108d82720();
          }
        }
      }
      else {
        uVar10 = param_1;
        FUN_108d6ba4c(param_1);
        _memcpy(lVar8,uVar10,lVar5);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar4;
}



/* Entry: 108d615f0; end: 108d616a7;  */

void FUN_108d615f0(long param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
    }
  }
  if (param_2 == 0xf) {
    uVar2 = *(int *)(param_1 + 0x1c) + *(int *)(*plVar3 + 0x84);
  }
  else {
    uVar2 = *(uint *)(*(long *)(plVar3[3] + 0x50) + (long)(param_2 << 2) + 0x24);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  }
  *param_3 = uVar2;
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x58) != 0) {
      (*pcRam00000001132979a8)();
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    return;
  }
  return;
}



/* Entry: 108d616a8; end: 108d6175b;  */

undefined8 FUN_108d616a8(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
    }
  }
  lVar4 = *(long *)(lVar5 + 0x18);
  lVar6 = *(long *)(lVar4 + 0x50);
  uVar3 = *(undefined8 *)(lVar4 + 0x68);
  FUN_108d5ffdc();
  if (((int)uVar3 == 0) &&
     (uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8,
     *(uint *)(lVar6 + (param_2 << 2) + 0x24) = uVar1 >> 0x10 | uVar1 << 0x10, param_2 == 7)) {
    *(char *)(lVar5 + 0x22) = (char)param_3;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar2 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_108d7f5fc(param_1);
    }
  }
  return uVar3;
}



/* Entry: 108d6175c; end: 108d618d7;  */

long * FUN_108d6175c(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar3 = &lStack_80;
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  if ((*(char *)((long)param_2 + 0x11) != '\0') &&
     (*(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1,
     *(char *)((long)param_2 + 0x12) == '\0')) {
    FUN_108d7f528(param_2);
  }
  plVar2 = *(long **)(**(long **)(param_1 + 8) + 0x48);
  if (*plVar2 != 0) {
    lStack_80 = (ulong)*(uint *)(param_2[1] + 0x40) * (long)*(int *)(param_2[1] + 0x34);
    (**(code **)(*plVar2 + 0x50))(plVar2,0xb,&lStack_80);
    if ((int)plVar2 != 0xc && (int)plVar2 != 0) goto LAB_108d61880;
  }
  lStack_80 = 0;
  uStack_70 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_60 = *param_2;
  uStack_68 = 1;
  lStack_78 = param_1;
  puStack_58 = param_2;
  FUN_108d65f14(&lStack_80,0x7fffffff);
  FUN_108d66fdc();
  plVar2 = plVar3;
  if ((int)plVar3 == 0) {
    *(ushort *)(*(long *)(param_1 + 8) + 0x28) = *(ushort *)(*(long *)(param_1 + 8) + 0x28) & 0xfffd
    ;
  }
  else if ((*(char *)(**(long **)(lStack_78 + 8) + 0x13) == '\0') &&
          (*(char *)(**(long **)(lStack_78 + 8) + 0x10) == '\0')) {
    FUN_108d78cec();
  }
LAB_108d61880:
  if ((*(char *)((long)param_2 + 0x11) != '\0') &&
     (iVar1 = *(int *)((long)param_2 + 0x14) + -1, *(int *)((long)param_2 + 0x14) = iVar1,
     iVar1 == 0)) {
    FUN_108d7f5fc(param_2);
  }
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_108d7f5fc(param_1);
  }
  return plVar2;
}



/* Entry: 108d618d8; end: 108d61aa3;  */

/* WARNING: Possible PIC construction at 0x000108d61a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d61a74: Changing call to branch */

void FUN_108d618d8(undefined8 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar7;
  undefined8 *unaff_x21;
  undefined8 *puVar8;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar7 = (undefined8 *)param_1[1];
  if ((*(char *)((long)param_1 + 0x11) != '\0') &&
     (*(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1,
     *(char *)((long)param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  puVar5 = (undefined8 *)puVar7[2];
  puVar8 = unaff_x21;
  while (puVar5 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)puVar5[2];
    puVar6 = (undefined8 *)*puVar5;
    puVar5 = puVar8;
    if (puVar6 == param_1) {
      FUN_108d79ddc();
    }
  }
  FUN_108d6007c(param_1,0,0);
  uVar9 = unaff_x22;
  if ((*(char *)((long)param_1 + 0x11) != '\0') &&
     ((iVar4 = *(int *)((long)param_1 + 0x14) + -1, *(int *)((long)param_1 + 0x14) = iVar4,
      iVar4 != 0 || (FUN_108d7f5fc(param_1), *(char *)((long)param_1 + 0x11) != '\0')))) {
    if (iRam0000000113297914 == 0) {
      puVar8 = (undefined8 *)0x0;
LAB_108d619b4:
      uVar9 = 1;
    }
    else {
      puVar8 = (undefined8 *)0x2;
      (*pcRam0000000113297988)();
      if (puVar8 == (undefined8 *)0x0) goto LAB_108d619b4;
      (*pcRam0000000113297998)(puVar8);
      uVar9 = 0;
    }
    iVar4 = *(int *)(puVar7 + 0xd);
    *(int *)(puVar7 + 0xd) = iVar4 + -1;
    if (iVar4 + -1 == 0 || iVar4 < 1) {
      puVar5 = puRam000000011372e698;
      if (puRam000000011372e698 == puVar7) {
        puRam000000011372e698 = (undefined8 *)puVar7[0xe];
      }
      else {
        do {
          puVar6 = puVar5;
          if (puVar6 == (undefined8 *)0x0) goto LAB_108d61a00;
          puVar5 = (undefined8 *)puVar6[0xe];
        } while ((undefined8 *)puVar6[0xe] != puVar7);
        puVar6[0xe] = puVar7[0xe];
      }
LAB_108d61a00:
      if (puVar7[0xb] != 0) {
        (*pcRam0000000113297990)();
      }
    }
    if ((int)uVar9 == 0) {
      (*pcRam00000001132979a8)(puVar8);
    }
    if (1 < iVar4) {
      lVar2 = param_1[4];
      lVar3 = param_1[5];
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x20) = lVar2;
      }
      puVar7 = param_1;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
      }
      goto SUB_108d5e198;
    }
  }
  unaff_x22 = uVar9;
  unaff_x21 = puVar8;
  FUN_108d79ee4(*puVar7);
  if (((code *)puVar7[10] != (code *)0x0) && (puVar7[9] != 0)) {
    (*(code *)puVar7[10])();
  }
  unaff_x19 = param_1;
  unaff_x20 = puVar7;
  unaff_x29 = puVar1;
  if ((undefined8 *)puVar7[9] == (undefined8 *)0x0) {
    if (puVar7[0x11] != 0) {
      puVar7[0x11] = puVar7[0x11] + -4;
      func_0x000108d78fdc();
      puVar7[0x11] = 0;
    }
    unaff_x30 = 0x108d61a78;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
  }
  else {
    unaff_x30 = 0x108d61a58;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    puVar7 = (undefined8 *)puVar7[9];
  }
SUB_108d5e198:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar5 = puVar7;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar5;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar7);
    puVar7 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar7);
  return;
}



/* Entry: 108d61aa4; end: 108d61b8f;  */

void FUN_108d61aa4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  FUN_108d62704();
  iVar4 = *(int *)(param_1 + 0x28);
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0x18;
    do {
      if (*(long *)(*(long *)(param_1 + 0x20) + lVar7) != 0) {
        func_0x000108d8e2fc();
        iVar4 = *(int *)(param_1 + 0x28);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar6 < iVar4);
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffd;
  func_0x000108d960a8(param_1);
  func_0x000108d6277c(param_1);
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 < 3) {
    iVar5 = 2;
  }
  else {
    lVar7 = 0;
    lVar6 = 2;
    iVar5 = 2;
    do {
      lVar1 = *(long *)(param_1 + 0x20) + lVar7;
      if (*(long *)(lVar1 + 0x48) == 0) {
        func_0x000108d60660(param_1,*(undefined8 *)(lVar1 + 0x40));
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      else {
        if (iVar5 < lVar6) {
          uVar8 = *(undefined8 *)(lVar1 + 0x40);
          uVar10 = *(undefined8 *)(lVar1 + 0x58);
          uVar9 = *(undefined8 *)(lVar1 + 0x50);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 0x20);
          puVar2[1] = *(undefined8 *)(lVar1 + 0x48);
          *puVar2 = uVar8;
          puVar2[3] = uVar10;
          puVar2[2] = uVar9;
        }
        iVar5 = iVar5 + 1;
      }
      lVar6 = lVar6 + 1;
      iVar4 = *(int *)(param_1 + 0x28);
      lVar7 = lVar7 + 0x20;
    } while (lVar6 < iVar4);
  }
  _bzero(*(long *)(param_1 + 0x20) + (long)iVar5 * 0x20,
         -(ulong)((uint)(iVar4 - iVar5) >> 0x1f) & 0xffffffe000000000 |
         (ulong)(uint)(iVar4 - iVar5) << 5);
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 < 3) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x2c0);
    if (puVar3 != puVar2) {
      uVar9 = puVar3[1];
      uVar8 = *puVar3;
      uVar11 = puVar3[3];
      uVar10 = puVar3[2];
      uVar12 = puVar3[4];
      uVar14 = puVar3[7];
      uVar13 = puVar3[6];
      *(undefined8 *)(param_1 + 0x2e8) = puVar3[5];
      *(undefined8 *)(param_1 + 0x2e0) = uVar12;
      *(undefined8 *)(param_1 + 0x2f8) = uVar14;
      *(undefined8 *)(param_1 + 0x2f0) = uVar13;
      *(undefined8 *)(param_1 + 0x2c8) = uVar9;
      *puVar2 = uVar8;
      *(undefined8 *)(param_1 + 0x2d8) = uVar11;
      *(undefined8 *)(param_1 + 0x2d0) = uVar10;
      func_0x000108d60660(param_1);
      *(undefined8 **)(param_1 + 0x20) = puVar2;
    }
  }
  return;
}



/* Entry: 108d61b90; end: 108d61bcf;  */

void FUN_108d61b90(long param_1)

{
  if (param_1 != 0) {
    _fprintf(param_1,&UNK_10f5175c0);
  }
  return;
}



/* Entry: 108d61bd0; end: 108d61ce7;  */

undefined8 FUN_108d61bd0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = (undefined *)0x2;
  func_0x000108d60700();
  if (puVar1 != (undefined *)0x0) {
    (*pcRam0000000113297998)();
  }
  if (iRam000000011372e6c8 == 0) {
    puVar1 = &UNK_10f5172fd;
    func_0x00010ae207c8();
  }
  if (puRam000000011372e6f0 == (undefined *)0x0) {
    FUN_108d62be4();
    if ((int)puVar1 == 0) {
      (*pcRam0000000113297988)();
      puRam000000011372e6f0 = puVar1;
    }
    else {
      puRam000000011372e6f0 = (undefined *)0x0;
    }
  }
  iRam000000011372e6c8 = iRam000000011372e6c8 + 1;
  lVar2 = 2;
  func_0x000108d60700();
  if (lVar2 != 0) {
    (*pcRam00000001132979a8)();
  }
  return 0;
}



/* Entry: 108d61ce8; end: 108d61cf3;  */

undefined * FUN_108d61ce8(void)

{
  return &UNK_10f5175db;
}



/* Entry: 108d61cf4; end: 108d61d5f;  */

undefined8 FUN_108d61cf4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (lRam000000011372e6f0 != 0) {
    (*pcRam0000000113297998)();
  }
  func_0x000107c2b3c4(param_2,(long)param_3,&UNK_10e525a20);
  if (lRam000000011372e6f0 != 0) {
    (*pcRam00000001132979a8)();
  }
  return 0;
}



/* Entry: 108d61d60; end: 108d61eab;  */

undefined8
FUN_108d61d60(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
             undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined1 auStack_c4 [4];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  func_0x000107c2b424();
  func_0x000107c2b494(&uStack_c0,param_2,(long)param_3,param_1,0);
  (**(code **)(lStack_b8 + 0x18))((ulong)&uStack_c0 | 8,param_4,(long)param_5);
  (**(code **)(lStack_b8 + 0x18))((ulong)&uStack_c0 | 8,param_6,(long)param_7);
  func_0x000107c2b498(&uStack_c0,param_8,auStack_c4);
  func_0x000107c2b49c(&uStack_c0);
  return 0;
}



/* Entry: 108d61eac; end: 108d61fb3;  */

bool FUN_108d61eac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  int iStack_e4;
  long alStack_e0 [19];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 != 0) {
    alStack_e0[0x11] = 0;
    alStack_e0[0x10] = 0;
    alStack_e0[0xd] = 0;
    alStack_e0[0xc] = 0;
    alStack_e0[0xf] = 0;
    alStack_e0[0xe] = 0;
    alStack_e0[9] = 0;
    alStack_e0[8] = 0;
    alStack_e0[0xb] = 0;
    alStack_e0[10] = 0;
    alStack_e0[5] = 0;
    alStack_e0[4] = 0;
    alStack_e0[7] = 0;
    alStack_e0[6] = 0;
    alStack_e0[1] = 0;
    alStack_e0[0] = 0;
    alStack_e0[3] = 0;
    alStack_e0[2] = 0;
  }
  func_0x00010ae340b8(alStack_e0,*param_1,param_3,0,0,param_2);
  alStack_e0[4] = alStack_e0[4] | 0x800;
  func_0x00010ae340b8(alStack_e0,0);
  func_0x00010ae34908(alStack_e0,param_8,&iStack_e4,param_6,param_7);
  param_8 = param_8 + iStack_e4;
  func_0x00010ae34918(alStack_e0,param_8,&iStack_e4);
  plVar1 = alStack_e0;
  func_0x00010ae33ff8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return false;
  }
  ___stack_chk_fail();
  func_0x00010ae207c8();
  if (param_8 != 0) {
    *plVar1 = param_8;
  }
  return param_8 == 0;
}



/* Entry: 108d61fb4; end: 108d61fe7;  */

bool FUN_108d61fb4(long *param_1,long param_2)

{
  func_0x00010ae207c8();
  if (param_2 != 0) {
    *param_1 = param_2;
  }
  return param_2 == 0;
}



/* Entry: 108d61fe8; end: 108d62017;  */

undefined * FUN_108d61fe8(void)

{
  return &UNK_10f5172fd;
}



/* Entry: 108d62018; end: 108d6202f;  */

undefined4 FUN_108d62018(long param_1)

{
  func_0x000107c2b424();
  return *(undefined4 *)(param_1 + 4);
}



/* Entry: 108d62030; end: 108d62053;  */

undefined8 FUN_108d62030(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return 0;
}



/* Entry: 108d62054; end: 108d62107;  */

undefined8 FUN_108d62054(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 8;
  FUN_108d607c8();
  *param_1 = lVar1;
  if (lVar1 == 0) {
    uVar2 = 7;
  }
  else {
    FUN_108d61bd0();
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 108d62108; end: 108d6210f;  */

undefined8 FUN_108d62108(void)

{
  return 0;
}



/* Entry: 108d62110; end: 108d62213;  */

undefined8 FUN_108d62110(long param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  
  if (param_1 == 0) {
    param_1 = 0;
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    lVar3 = 7;
    do {
      if ((ulong)*(byte *)(param_1 + lVar4) == 0) {
        cVar1 = (&UNK_10dfa05fd)[(byte)(&UNK_10f5173d5)[lVar4]];
        cVar5 = '\0';
LAB_108d62184:
        lVar3 = 7;
        if (cVar5 != cVar1) {
          lVar3 = 0;
        }
        break;
      }
      cVar5 = (&UNK_10dfa05fd)[*(byte *)(param_1 + lVar4)];
      cVar1 = (&UNK_10dfa05fd)[(byte)(&UNK_10f5173d5)[lVar4]];
      if (cVar5 != cVar1) goto LAB_108d62184;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 7);
    param_1 = param_1 + lVar3;
    lVar4 = param_1;
    _strlen();
    uVar2 = (uint)lVar4 & 0x3fffffff;
  }
  lVar4 = 0;
  while( true ) {
    lVar6 = *(long *)((long)&PTR_DAT_110ac3818 + lVar4);
    lVar3 = param_1;
    func_0x000108d5ea34(param_1,lVar6,(ulong)uVar2);
    if (((int)lVar3 == 0) && (((&UNK_10dfa0749)[*(byte *)(lVar6 + (ulong)uVar2)] & 0x46) == 0))
    break;
    lVar4 = lVar4 + 8;
    if (lVar4 == 0x20) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 108d62214; end: 108d62233;  */

undefined * FUN_108d62214(uint param_1)

{
  if (param_1 < 4) {
    return (&PTR_DAT_110ac3818)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 108d62234; end: 108d6231f;  */

undefined8 FUN_108d62234(ulong param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((uint)param_1 < 10) {
    plVar2 = (long *)0x11372e758;
    if ((1L << (param_1 & 0x3f) & 0x379U) != 0) {
      plVar2 = (long *)0x113829af0;
    }
    lVar4 = *plVar2;
    if (lVar4 != 0) {
      (*pcRam0000000113297998)(lVar4);
    }
    lVar1 = (param_1 & 0xffffffff) * 8;
    uVar6 = *(undefined8 *)(lVar1 + 0x113829a50);
    uVar5 = *(undefined8 *)(lVar1 + 0x113829aa0);
    if (param_4 != 0) {
      *(undefined8 *)(lVar1 + 0x113829aa0) = uVar6;
    }
    if (lVar4 != 0) {
      (*pcRam00000001132979a8)(lVar4);
    }
    uVar3 = 0;
    *param_2 = (int)uVar6;
    *param_3 = (int)uVar5;
  }
  else {
    uVar3 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  return uVar3;
}



/* Entry: 108d62320; end: 108d62703;  */

undefined8 FUN_108d62320(long param_1,int param_2,uint *param_3,undefined4 *param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  uint uStack_68;
  uint uStack_64;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  uVar9 = 1;
  if (param_2 < 4) {
    if (param_2 < 2) {
      if (param_2 != 0) {
        if (param_2 == 1) {
          FUN_108d62704(param_1);
          iVar7 = *(int *)(param_1 + 0x28);
          if (iVar7 < 1) {
            uVar3 = 0;
          }
          else {
            lVar6 = 0;
            uVar3 = 0;
            lVar11 = 8;
            do {
              lVar5 = *(long *)(*(long *)(param_1 + 0x20) + lVar11);
              if (lVar5 != 0) {
                lVar8 = **(long **)(lVar5 + 8);
                iVar7 = *(int *)(lVar8 + 0xbc);
                uVar1 = *(ushort *)(lVar8 + 0xb0);
                iVar2 = (int)*(undefined8 *)(*(long *)(lVar8 + 0x130) + 0x40);
                (*pcRam00000001132979f0)();
                lVar5 = lVar8;
                (*pcRam0000000113297950)();
                uVar3 = uVar3 + iVar2 * (iVar7 + (uint)uVar1 + 0x70) +
                        (int)lVar5 + *(int *)(lVar8 + 0xbc);
                iVar7 = *(int *)(param_1 + 0x28);
              }
              lVar6 = lVar6 + 1;
              lVar11 = lVar11 + 0x20;
            } while (lVar6 < iVar7);
          }
          func_0x000108d6277c(param_1);
          uVar9 = 0;
          *param_3 = uVar3;
          *param_4 = 0;
        }
        goto LAB_108d626cc;
      }
      *param_3 = *(uint *)(param_1 + 0x154);
      *param_4 = *(undefined4 *)(param_1 + 0x158);
      if (param_5 != 0) {
        uVar9 = 0;
        *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x154);
        goto LAB_108d626cc;
      }
      goto LAB_108d6254c;
    }
    if (param_2 == 2) {
      uStack_64 = 0;
      FUN_108d62704(param_1);
      *(uint **)(param_1 + 0x328) = &uStack_64;
      if (0 < *(int *)(param_1 + 0x28)) {
        lVar6 = 0;
        do {
          lVar11 = *(long *)(*(long *)(param_1 + 0x20) + lVar6 * 0x20 + 0x18);
          if (lVar11 != 0) {
            iVar7 = 0x20;
            (*pcRam0000000113297958)();
            uStack_64 = uStack_64 +
                        (*(int *)(lVar11 + 0x3c) + *(int *)(lVar11 + 0xc) +
                        *(int *)(lVar11 + 0x24) + *(int *)(lVar11 + 0x54)) * iVar7;
            iVar7 = (int)*(undefined8 *)(lVar11 + 0x18);
            (*pcRam0000000113297950)();
            uStack_64 = uStack_64 + iVar7;
            iVar7 = (int)*(undefined8 *)(lVar11 + 0x48);
            (*pcRam0000000113297950)();
            uStack_64 = uStack_64 + iVar7;
            iVar7 = (int)*(undefined8 *)(lVar11 + 0x30);
            (*pcRam0000000113297950)();
            uStack_64 = uStack_64 + iVar7;
            iVar7 = (int)*(undefined8 *)(lVar11 + 0x60);
            (*pcRam0000000113297950)();
            uStack_64 = uStack_64 + iVar7;
            for (plVar10 = *(long **)(lVar11 + 0x40); plVar10 != (long *)0x0;
                plVar10 = (long *)*plVar10) {
              FUN_108d627fc(param_1,plVar10[2]);
            }
            for (plVar10 = *(long **)(lVar11 + 0x10); plVar10 != (long *)0x0;
                plVar10 = (long *)*plVar10) {
              func_0x000108d62864(param_1,plVar10[2]);
            }
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_1 + 0x28));
      }
      *(undefined8 *)(param_1 + 0x328) = 0;
      func_0x000108d6277c(param_1);
      *param_4 = 0;
      uVar3 = uStack_64;
    }
    else {
      if (param_2 != 3) goto LAB_108d626cc;
      uStack_68 = 0;
      *(uint **)(param_1 + 0x328) = &uStack_68;
      for (lVar6 = *(long *)(param_1 + 8); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x58)) {
        func_0x000108d62a5c(param_1,lVar6);
        func_0x000108d60660(param_1,lVar6);
      }
      *(undefined8 *)(param_1 + 0x328) = 0;
      *param_4 = 0;
      uVar3 = uStack_68;
    }
  }
  else {
    uVar3 = param_2 - 4;
    if (uVar3 < 3) {
      *param_3 = 0;
      *param_4 = *(undefined4 *)(param_1 + 0x15c + (ulong)uVar3 * 4);
      if (param_5 != 0) {
        uVar9 = 0;
        *(undefined4 *)(param_1 + 0x15c + (ulong)uVar3 * 4) = 0;
        goto LAB_108d626cc;
      }
LAB_108d6254c:
      uVar9 = 0;
      goto LAB_108d626cc;
    }
    uVar3 = param_2 - 7;
    if (uVar3 < 3) {
      iVar7 = *(int *)(param_1 + 0x28);
      if (iVar7 < 1) {
        uVar4 = 0;
      }
      else {
        lVar6 = 0;
        uVar4 = 0;
        plVar10 = (long *)(*(long *)(param_1 + 0x20) + 8);
        do {
          if (*plVar10 != 0) {
            lVar11 = **(long **)(*plVar10 + 8) + 0xf0;
            uVar4 = *(int *)(lVar11 + (ulong)uVar3 * 4) + uVar4;
            if (param_5 != 0) {
              *(undefined4 *)(lVar11 + (ulong)uVar3 * 4) = 0;
              iVar7 = *(int *)(param_1 + 0x28);
            }
          }
          lVar6 = lVar6 + 1;
          plVar10 = plVar10 + 4;
        } while (lVar6 < iVar7);
      }
      uVar9 = 0;
      *param_4 = 0;
      *param_3 = uVar4;
      goto LAB_108d626cc;
    }
    if (param_2 != 10) goto LAB_108d626cc;
    *param_4 = 0;
    if (*(long *)(param_1 + 800) < 1) {
      uVar3 = (uint)(0 < *(long *)(param_1 + 0x318));
    }
    else {
      uVar3 = 1;
    }
  }
  uVar9 = 0;
  *param_3 = uVar3;
LAB_108d626cc:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar9;
}



/* Entry: 108d62704; end: 108d627ef;  */

void FUN_108d62704(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 8;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar4);
      if (((lVar1 != 0) && (*(char *)(lVar1 + 0x11) != '\0')) &&
         (*(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1, *(char *)(lVar1 + 0x12) == '\0')) {
        FUN_108d7f528();
        iVar2 = *(int *)(param_1 + 0x28);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < iVar2);
  }
  return;
}



/* Entry: 108d627f0; end: 108d627fb;  */

void FUN_108d627f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000108d627f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000113297950)();
  return;
}



/* Entry: 108d627fc; end: 108d62863;  */

/* WARNING: Possible PIC construction at 0x000108d62824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d62828) */

void FUN_108d627fc(long param_1,ulong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  
  if (param_2 == (ulong *)0x0) {
    return;
  }
  FUN_108d969a4(param_1,param_2[7]);
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x328) != 0) {
      if ((puVar3 < *(undefined8 **)(param_1 + 0x170)) ||
         (*(undefined8 **)(param_1 + 0x178) <= puVar3)) {
        (*pcRam0000000113297950)();
        uVar1 = (uint)puVar3;
      }
      else {
        uVar1 = (uint)*(ushort *)(param_1 + 0x150);
      }
      **(int **)(param_1 + 0x328) = **(int **)(param_1 + 0x328) + uVar1;
      return;
    }
    if ((*(undefined8 **)(param_1 + 0x170) <= puVar3) &&
       (puVar3 < *(undefined8 **)(param_1 + 0x178))) {
      *puVar3 = *(undefined8 *)(param_1 + 0x168);
      *(undefined8 **)(param_1 + 0x168) = puVar3;
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
      return;
    }
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar2 = puVar3;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar2;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar3);
    puVar3 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3);
  return;
}



/* Entry: 108d62864; end: 108d62be3;  */

/* WARNING: Possible PIC construction at 0x000108d62988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d62a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d62968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d62a28) */
/* WARNING: Removing unreachable block (ram,0x000108d6298c) */
/* WARNING: Removing unreachable block (ram,0x000108d629b8) */
/* WARNING: Removing unreachable block (ram,0x000108d629c0) */
/* WARNING: Removing unreachable block (ram,0x000108d629cc) */
/* WARNING: Removing unreachable block (ram,0x000108d629e4) */
/* WARNING: Removing unreachable block (ram,0x000108d629d8) */
/* WARNING: Removing unreachable block (ram,0x000108d629ec) */
/* WARNING: Removing unreachable block (ram,0x000108d629f8) */
/* WARNING: Removing unreachable block (ram,0x000108d62a00) */
/* WARNING: Removing unreachable block (ram,0x000108d62a0c) */
/* WARNING: Removing unreachable block (ram,0x000108d62a10) */
/* WARNING: Removing unreachable block (ram,0x000108d62a2c) */
/* WARNING: Removing unreachable block (ram,0x000108d62a38) */
/* WARNING: Removing unreachable block (ram,0x000108d62a3c) */
/* WARNING: Removing unreachable block (ram,0x000108d62a44) */
/* WARNING: Removing unreachable block (ram,0x000108d62a18) */
/* WARNING: Removing unreachable block (ram,0x000108d6296c) */

void FUN_108d62864(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  short sVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((param_2 == (ulong *)0x0) ||
     (((param_1 == 0 || (*(long *)(param_1 + 0x328) == 0)) &&
      (sVar2 = (short)param_2[8] + -1, *(short *)(param_2 + 8) = sVar2, sVar2 != 0)))) {
    return;
  }
  puVar4 = (undefined8 *)param_2[2];
  while (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)puVar4[5];
    if ((param_1 == 0) || (*(long *)(param_1 + 0x328) == 0)) {
      FUN_108d93af0(puVar4[6] + 0x20,*puVar4,0);
    }
    FUN_108d93da0(param_1,puVar4);
    puVar4 = puVar5;
  }
  puVar4 = (undefined8 *)param_2[4];
  if (puVar4 == (undefined8 *)0x0) {
    FUN_108d961ec(param_1,param_2);
    puVar4 = (undefined8 *)*param_2;
  }
  else {
    if ((param_1 == 0) || (*(long *)(param_1 + 0x328) == 0)) {
      puVar5 = (undefined8 *)puVar4[3];
      if (puVar4[4] == 0) {
        puVar1 = puVar4;
        if (puVar5 != (undefined8 *)0x0) {
          puVar1 = puVar5;
        }
        FUN_108d93af0(param_2[0xd] + 0x50,puVar1[2]);
        puVar5 = (undefined8 *)puVar4[3];
      }
      else {
        *(undefined8 **)(puVar4[4] + 0x18) = puVar5;
      }
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[4] = puVar4[4];
      }
    }
    func_0x000108d96298(param_1,puVar4[6]);
    func_0x000108d96298(param_1,puVar4[7]);
  }
  if (puVar4 != (undefined8 *)0x0) {
    if (param_1 != 0) {
      if (*(long *)(param_1 + 0x328) != 0) {
        if ((puVar4 < *(undefined8 **)(param_1 + 0x170)) ||
           (*(undefined8 **)(param_1 + 0x178) <= puVar4)) {
          (*pcRam0000000113297950)();
          uVar3 = (uint)puVar4;
        }
        else {
          uVar3 = (uint)*(ushort *)(param_1 + 0x150);
        }
        **(int **)(param_1 + 0x328) = **(int **)(param_1 + 0x328) + uVar3;
        return;
      }
      if ((*(undefined8 **)(param_1 + 0x170) <= puVar4) &&
         (puVar4 < *(undefined8 **)(param_1 + 0x178))) {
        *puVar4 = *(undefined8 *)(param_1 + 0x168);
        *(undefined8 **)(param_1 + 0x168) = puVar4;
        *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
        return;
      }
    }
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (puRam0000000113829af0 != (undefined8 *)0x0) {
        (*pcRam0000000113297998)();
      }
      puVar5 = puVar4;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar5;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(puVar4);
      puVar4 = puRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (puRam0000000113829af0 == (undefined8 *)0x0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar4);
    return;
  }
  return;
}



/* Entry: 108d62be4; end: 108d630cf;  */

undefined8 FUN_108d62be4(undefined8 param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  if (iRam0000000113297a7c != 0) {
    return 0;
  }
  if (pcRam0000000113297988 == (code *)0x0) {
    bVar3 = iRam0000000113297914 != 0;
    ppuVar2 = &PTR_DAT_110ac38c0;
    if (bVar3) {
      ppuVar2 = &PTR_FUN_110ac3878;
    }
    puRam0000000113297980 = ppuVar2[1];
    pcRam0000000113297978 = (code *)*ppuVar2;
    ppuVar2 = &PTR_DAT_110ac38d8;
    if (bVar3) {
      ppuVar2 = &PTR_LAB_110ac3890;
    }
    pcRam0000000113297998 = (code *)ppuVar2[1];
    pcRam0000000113297990 = (code *)*ppuVar2;
    pcRam00000001132979a8 = (code *)ppuVar2[3];
    puRam00000001132979a0 = ppuVar2[2];
    puRam00000001132979b8 = ppuVar2[5];
    puRam00000001132979b0 = ppuVar2[4];
    pcRam0000000113297988 = (code *)0x108d71890;
    if (bVar3) {
      pcRam0000000113297988 = FUN_108d71750;
    }
  }
  (*pcRam0000000113297978)();
  if ((int)param_1 != 0) {
    return param_1;
  }
  if (iRam0000000113297914 == 0) {
    lVar4 = 0;
LAB_108d62cd8:
    bVar3 = true;
  }
  else {
    lVar4 = 2;
    (*pcRam0000000113297988)();
    if (lVar4 == 0) goto LAB_108d62cd8;
    (*pcRam0000000113297998)(lVar4);
    bVar3 = false;
  }
  uRam0000000113297a84 = 1;
  if (iRam0000000113297a88 == 0) {
    if (lRam0000000113297938 == 0) {
      FUN_108d6d73c(4);
    }
    uRam0000000113829b20 = 0;
    uRam0000000113829b08 = 0;
    uRam0000000113829b00 = 0;
    puRam0000000113829b18 = (undefined8 *)0x0;
    puRam0000000113829b10 = (undefined8 *)0x0;
    uRam0000000113829af8 = 0;
    uRam0000000113829af0 = 0;
    if (iRam0000000113297914 != 0) {
      uVar10 = 3;
      (*pcRam0000000113297988)();
      uRam0000000113829af0 = uVar10;
    }
    if ((puRam0000000113297a50 == (undefined8 *)0x0) || ((int)uRam0000000113297a58 < 100)) {
LAB_108d62e1c:
      puRam0000000113829b10 = (undefined8 *)0x0;
      puRam0000000113297a50 = (undefined8 *)0x0;
      uRam0000000113297a58 = 0;
    }
    else {
      iVar7 = uRam0000000113297a58._4_4_ - 1;
      if ((int)uRam0000000113297a58._4_4_ < 1) goto LAB_108d62e1c;
      uVar8 = uRam0000000113297a58 & 0x7ffffff8;
      uRam0000000113297a58 = CONCAT44(uRam0000000113297a58._4_4_,(int)uVar8);
      puRam0000000113829b18 = puRam0000000113297a50;
      uRam0000000113829b20 = CONCAT44(uRam0000000113829b20._4_4_,uRam0000000113297a58._4_4_);
      puVar6 = puRam0000000113297a50;
      puVar9 = puRam0000000113297a50;
      if (1 < uRam0000000113297a58._4_4_) {
        do {
          puVar9 = (undefined8 *)((long)puVar6 + uVar8);
          *puVar6 = puVar9;
          iVar7 = iVar7 + -1;
          puVar6 = puVar9;
        } while (iVar7 != 0);
      }
      puRam0000000113829b10 = puVar9 + 1;
      *puVar9 = 0;
    }
    if (lRam0000000113297a60 == 0) {
LAB_108d62e60:
      lRam0000000113297a60 = 0;
      uRam0000000113297a68 = 0;
    }
    else if ((int)uRam0000000113297a68 < 0x200 ||
             (uRam0000000113297a68._4_4_ == 0 || (long)uRam0000000113297a68 < 0))
    goto LAB_108d62e60;
    uVar10 = uRam0000000113297970;
    (*pcRam0000000113297960)();
    if ((int)uVar10 == 0) goto LAB_108d62cf4;
    bVar1 = false;
    uRam0000000113829b20 = 0;
    uRam0000000113829b08 = 0;
    uRam0000000113829b00 = 0;
    puRam0000000113829b18 = (undefined8 *)0x0;
    puRam0000000113829b10 = (undefined8 *)0x0;
    uRam0000000113829af8 = 0;
    uRam0000000113829af0 = 0;
  }
  else {
LAB_108d62cf4:
    iRam0000000113297a88 = 1;
    if (lRam0000000113297a98 == 0) {
      if (iRam0000000113297914 == 0) {
        lRam0000000113297a98 = 0;
      }
      else {
        lVar5 = 1;
        (*pcRam0000000113297988)();
        lRam0000000113297a98 = lVar5;
        if ((iRam0000000113297914 != 0) && (lVar5 == 0)) {
          bVar1 = false;
          uVar10 = 7;
          goto LAB_108d62e94;
        }
      }
    }
    uVar10 = 0;
    iRam0000000113297a90 = iRam0000000113297a90 + 1;
    bVar1 = true;
  }
LAB_108d62e94:
  if (!bVar3) {
    (*pcRam00000001132979a8)(lVar4);
  }
  if (!bVar1) {
    return uVar10;
  }
  if (lRam0000000113297a98 != 0) {
    (*pcRam0000000113297998)();
  }
  if (iRam0000000113297a7c != 0 || iRam0000000113297a80 != 0) {
    uVar10 = 0;
    goto LAB_108d6304c;
  }
  iRam0000000113297a80 = 1;
  uRam000000011372e5d8 = 0;
  uRam000000011372e5d0 = 0;
  uRam000000011372e5e8 = 0;
  uRam000000011372e5e0 = 0;
  uRam000000011372e5f8 = 0;
  uRam000000011372e5f0 = 0;
  uRam000000011372e608 = 0;
  uRam000000011372e600 = 0;
  uRam000000011372e618 = 0;
  uRam000000011372e610 = 0;
  uRam000000011372e628 = 0;
  uRam000000011372e620 = 0;
  uRam000000011372e638 = 0;
  uRam000000011372e630 = 0;
  uRam000000011372e648 = 0;
  uRam000000011372e640 = 0;
  uRam000000011372e658 = 0;
  uRam000000011372e650 = 0;
  uRam000000011372e668 = 0;
  uRam000000011372e660 = 0;
  uRam000000011372e678 = 0;
  uRam000000011372e670 = 0;
  lVar5 = 0x113297d00;
  lVar11 = 0x3b;
  uRam000000011372e680 = 0;
  do {
    FUN_108dc9c0c(0x11372e5d0,lVar5);
    lVar5 = lVar5 + 0x48;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar5 = 0x113298eb8;
  lVar11 = 8;
  do {
    FUN_108dc9c0c(0x11372e5d0,lVar5);
    lVar5 = lVar5 + 0x48;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar5 = 0x113298de0;
  lVar11 = 3;
  do {
    uVar10 = 0x11372e5d0;
    FUN_108dc9c0c(0x11372e5d0,lVar5);
    lVar5 = lVar5 + 0x48;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if (iRam0000000113297a8c == 0) {
    if (pcRam00000001132979d0 == (code *)0x0) {
      FUN_108d6d73c(0x12);
    }
    uVar10 = uRam00000001132979c8;
    (*pcRam00000001132979d0)();
    if ((int)uVar10 == 0) goto LAB_108d62f94;
  }
  else {
LAB_108d62f94:
    iVar7 = (int)uVar10;
    iRam0000000113297a8c = 1;
    FUN_108d62be4();
    if (iVar7 == 0) {
      lVar5 = 10;
      FUN_108d60848();
      if (lVar5 != 0) {
        func_0x000108d5e198();
        lVar5 = 0x113299350;
        lVar11 = 9;
        do {
          FUN_108d630d0(lVar5,lVar11 == 9);
          lVar5 = lVar5 + 0xa8;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        func_0x000108d6d690(lRam0000000113297a60,uRam0000000113297a68 & 0xffffffff,
                            uRam0000000113297a68._4_4_);
        uVar10 = 0;
        iRam0000000113297a7c = 1;
        goto LAB_108d63048;
      }
    }
    uVar10 = 7;
  }
LAB_108d63048:
  iRam0000000113297a80 = 0;
LAB_108d6304c:
  if (lRam0000000113297a98 != 0) {
    (*pcRam00000001132979a8)();
  }
  if (!bVar3) {
    (*pcRam0000000113297998)(lVar4);
  }
  iVar7 = iRam0000000113297a90 + -1;
  bVar1 = iRam0000000113297a90 < 1;
  iRam0000000113297a90 = iVar7;
  if (iVar7 == 0 || bVar1) {
    if (lRam0000000113297a98 != 0) {
      (*pcRam0000000113297990)();
    }
    lRam0000000113297a98 = 0;
  }
  if (!bVar3) {
    (*pcRam00000001132979a8)(lVar4);
  }
  return uVar10;
}



/* Entry: 108d630d0; end: 108d6319b;  */

long FUN_108d630d0(long param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  FUN_108d62be4();
  if ((int)lVar3 != 0) {
    return lVar3;
  }
  if (iRam0000000113297914 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 2;
    (*pcRam0000000113297988)();
    if (lVar4 != 0) {
      (*pcRam0000000113297998)(lVar4);
      bVar1 = false;
      goto LAB_108d6313c;
    }
  }
  bVar1 = true;
LAB_108d6313c:
  FUN_108d6319c(param_1);
  lVar2 = lRam000000011372e5c8;
  if ((param_2 == 0) && (lRam000000011372e5c8 != 0)) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lRam000000011372e5c8 + 0x10);
    *(long *)(lVar2 + 0x10) = param_1;
  }
  else {
    *(long *)(param_1 + 0x10) = lRam000000011372e5c8;
    lRam000000011372e5c8 = param_1;
  }
  if (!bVar1) {
    (*pcRam00000001132979a8)(lVar4);
  }
  return lVar3;
}



/* Entry: 108d6319c; end: 108d631eb;  */

void FUN_108d6319c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    if (lRam000000011372e5c8 == param_1) {
      lRam000000011372e5c8 = *(undefined8 *)(param_1 + 0x10);
      return;
    }
    lVar2 = lRam000000011372e5c8;
    if (lRam000000011372e5c8 != 0) {
      do {
        lVar1 = lVar2;
        lVar2 = *(long *)(lVar1 + 0x10);
      } while (lVar2 != 0 && lVar2 != param_1);
      if (lVar2 == param_1) {
        *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
        return;
      }
    }
  }
  return;
}



/* Entry: 108d631ec; end: 108d63267;  */

undefined8 FUN_108d631ec(undefined8 param_1)

{
  long lVar1;
  
  if (iRam0000000113297914 != 0) {
    lVar1 = 2;
    (*pcRam0000000113297988)();
    if (lVar1 != 0) {
      (*pcRam0000000113297998)();
      FUN_108d6319c(param_1);
      (*pcRam00000001132979a8)(lVar1);
      return 0;
    }
  }
  FUN_108d6319c(param_1);
  return 0;
}



/* Entry: 108d63268; end: 108d63283;  */

void FUN_108d63268(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d63274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001132979a0)();
    return;
  }
  return;
}



/* Entry: 108d63284; end: 108d633cb;  */

undefined8 FUN_108d63284(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_108d62be4();
  if ((int)lVar2 != 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = lRam0000000113829af8;
  if ((lRam0000000113829af0 != 0) &&
     ((*pcRam0000000113297998)(), uVar1 = lRam0000000113829af8, lRam0000000113829af0 != 0)) {
    (*pcRam00000001132979a8)();
  }
  if (param_1 < 0) {
    return uVar1;
  }
  if (param_1 == 0) {
    if (lRam0000000113829af0 == 0) {
      lRam0000000113829af8 = 0;
      pcRam0000000113829b00 = (code *)0x0;
      uRam0000000113829b08 = 0;
      uRam0000000113829b24 = 0;
      return uVar1;
    }
    (*pcRam0000000113297998)();
    uRam0000000113829b24 = 0;
    pcRam0000000113829b00 = (code *)0x0;
    lRam0000000113829af8 = 0;
    if (lRam0000000113829af0 == 0) {
      lRam0000000113829af8 = 0;
      pcRam0000000113829b00 = (code *)0x0;
      uRam0000000113829b08 = 0;
      uRam0000000113829b24 = 0;
      return uVar1;
    }
  }
  else {
    if (lRam0000000113829af0 != 0) {
      (*pcRam0000000113297998)();
    }
    pcRam0000000113829b00 = FUN_108d633cc;
    uRam0000000113829b08 = 0;
    uRam0000000113829b24 = (uint)(param_1 <= lRam0000000113829a50);
    lRam0000000113829af8 = param_1;
    if (lRam0000000113829af0 == 0) goto LAB_108d63388;
  }
  uRam0000000113829b08 = 0;
  (*pcRam00000001132979a8)();
LAB_108d63388:
  lVar2 = lRam0000000113829af0;
  if (lRam0000000113829af0 != 0) {
    (*pcRam0000000113297998)(lRam0000000113829af0);
    (*pcRam00000001132979a8)(lVar2);
  }
  return uVar1;
}



/* Entry: 108d633cc; end: 108d633cf;  */

void FUN_108d633cc(void)

{
  return;
}



/* Entry: 108d633d0; end: 108d63433;  */

long FUN_108d633d0(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = lRam0000000113829af0;
  if (lRam0000000113829af0 == 0) {
    iVar2 = (int)uRam0000000113829a50;
  }
  else {
    (*pcRam0000000113297998)(lRam0000000113829af0);
    iVar2 = (int)uRam0000000113829a50;
    (*pcRam00000001132979a8)(lVar1);
  }
  return (long)iVar2;
}



/* Entry: 108d63434; end: 108d6343b;  */

undefined8 FUN_108d63434(uint param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = (ulong)(param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU));
  uVar2 = uVar3;
  FUN_108d62be4();
  if ((int)uVar2 != 0) {
    return 0xffffffffffffffff;
  }
  uVar4 = uRam0000000113829af8;
  if ((lRam0000000113829af0 != 0) &&
     ((*pcRam0000000113297998)(), uVar4 = uRam0000000113829af8, lRam0000000113829af0 != 0)) {
    (*pcRam00000001132979a8)();
  }
  if (uVar3 == 0) {
    if (lRam0000000113829af0 == 0) {
      uRam0000000113829af8 = 0;
      pcRam0000000113829b00 = (code *)0x0;
      uRam0000000113829b08 = 0;
      uRam0000000113829b24 = 0;
      return uVar4;
    }
    (*pcRam0000000113297998)();
    uRam0000000113829b24 = 0;
    pcRam0000000113829b00 = (code *)0x0;
    uRam0000000113829af8 = 0;
    if (lRam0000000113829af0 == 0) {
      uRam0000000113829af8 = 0;
      pcRam0000000113829b00 = (code *)0x0;
      uRam0000000113829b08 = 0;
      uRam0000000113829b24 = 0;
      return uVar4;
    }
  }
  else {
    if (lRam0000000113829af0 != 0) {
      (*pcRam0000000113297998)();
    }
    pcRam0000000113829b00 = FUN_108d633cc;
    uRam0000000113829b08 = 0;
    uRam0000000113829b24 = (uint)((long)uVar3 <= lRam0000000113829a50);
    uRam0000000113829af8 = uVar3;
    if (lRam0000000113829af0 == 0) goto LAB_108d63388;
  }
  uRam0000000113829b08 = 0;
  (*pcRam00000001132979a8)();
LAB_108d63388:
  lVar1 = lRam0000000113829af0;
  if (lRam0000000113829af0 != 0) {
    (*pcRam0000000113297998)(lRam0000000113829af0);
    (*pcRam00000001132979a8)(lVar1);
  }
  return uVar4;
}



/* Entry: 108d6343c; end: 108d634af;  */

long FUN_108d6343c(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = lRam0000000113829af0;
  if (lRam0000000113829af0 != 0) {
    (*pcRam0000000113297998)(lRam0000000113829af0);
  }
  uVar1 = uRam0000000113829aa0;
  if (param_1 != 0) {
    uRam0000000113829aa0 = uRam0000000113829a50;
  }
  if (lVar2 != 0) {
    (*pcRam00000001132979a8)(lVar2);
  }
  return (long)(int)uVar1;
}



/* Entry: 108d634b0; end: 108d63527;  */

ulong FUN_108d634b0(uint param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = param_1;
  FUN_108d62be4();
  if ((0 < (int)param_1) && (uVar3 == 0)) {
    uVar4 = (ulong)param_1;
    if (uVar4 - 0x7fffff00 < 0xffffffff80000101) {
      uVar5 = 0;
    }
    else {
      if (iRam0000000113297910 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d60920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000113297938)(uVar4);
        return uVar4;
      }
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      uVar5 = uVar4;
      (*pcRam0000000113297958)();
      if ((long)uRam0000000113829ac8 < (long)uVar4) {
        uRam0000000113829ac8 = uVar4;
      }
      uRam0000000113829a78 = uVar4;
      if (lRam0000000113829b00 != 0) {
        if (lRam0000000113829a50 < lRam0000000113829af8 - (int)uVar5) {
          uRam0000000113829b24 = 0;
        }
        else {
          uRam0000000113829b24 = 1;
          FUN_108d718ac(uVar5);
        }
      }
      (*pcRam0000000113297938)();
      if (uVar5 != 0) {
        uVar4 = uVar5;
        (*pcRam0000000113297950)();
        lRam0000000113829a50 = lRam0000000113829a50 + (int)uVar4;
        if (lRam0000000113829aa0 < lRam0000000113829a50) {
          lRam0000000113829aa0 = lRam0000000113829a50;
        }
        lVar2 = lRam0000000113829a98 + 1;
        bVar1 = lRam0000000113829ae8 <= lRam0000000113829a98;
        lRam0000000113829a98 = lVar2;
        if (bVar1) {
          lRam0000000113829ae8 = lVar2;
        }
      }
      if (lRam0000000113829af0 != 0) {
        (*pcRam00000001132979a8)();
      }
    }
    return uVar5;
  }
  return 0;
}



/* Entry: 108d63528; end: 108d63547;  */

long FUN_108d63528(int param_1)

{
  (*pcRam0000000113297950)();
  return (long)param_1;
}


