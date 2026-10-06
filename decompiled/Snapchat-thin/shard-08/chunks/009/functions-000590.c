/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106725120; end: 10672520b;  */

void FUN_106725120(uint *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar2 = (undefined *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1 + 1;
    if (*param_1 != 0) {
      do {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar3 + (ulong)*puVar3 + 4);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          func_0x00010befa120(puVar1,param_2,puVar2);
        }
        _objc_release(puVar2);
        puVar3 = puVar3 + 1;
      } while (puVar3 != param_1 + 1 + *param_1);
    }
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10672520c; end: 1067253d3;  */

void FUN_10672520c(int *param_1)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  ushort *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 == (int *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126ccd10;
    _objc_alloc(PTR_PTR_1126ccd10);
    piVar2 = param_1;
    func_0x0001067201b8(param_1);
    piVar3 = param_1;
    FUN_1067254b0(param_1);
    FUN_1067253d4(piVar2,piVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (ushort *)((long)param_1 - (long)*param_1);
    uVar1 = *puVar4;
    uVar6 = 0;
    if ((uVar1 < 0xb) || (uVar1 < 0xd)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      if ((ulong)puVar4[6] != 0) {
        uVar6 = *(undefined4 *)((long)param_1 + (ulong)puVar4[6]);
      }
      if ((((0xe < uVar1) && (0x10 < uVar1)) && (0x12 < uVar1)) &&
         ((0x14 < uVar1 && ((ulong)puVar4[10] != 0)))) {
        uVar7 = *(undefined4 *)((long)param_1 + (ulong)puVar4[10]);
      }
    }
    func_0x00010c04ad80(uVar6,uVar7,puVar5);
    _objc_release(piVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067253d4; end: 1067254af;  */

void FUN_1067253d4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ccd20;
  if (param_1 == 0) {
    if (param_2 == 0) {
      puVar2 = (undefined *)0x0;
      goto LAB_106725480;
    }
    puVar1 = PTR_PTR_1126ccd28;
    _objc_alloc_init(PTR_PTR_1126ccd28);
    func_0x00010bfa4140(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ccd18;
    _objc_alloc(PTR_PTR_1126ccd18);
    func_0x00010c042840();
    func_0x00010bfa4120(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
LAB_106725480:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067254b0; end: 1067254fb;  */

long FUN_1067254b0(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((6 < *puVar2) && ((ulong)puVar2[3] != 0)) &&
      (8 < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[3]) == '\x02')) &&
     ((ulong)puVar2[4] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[4]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 1067254fc; end: 10672562b;  */

undefined8 FUN_1067254fc(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1067255dc;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1067255dc;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10672559c;
    param_1 = 0;
  }
  else {
LAB_10672559c:
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
LAB_1067255dc:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10672562c; end: 10672563b;  */

void FUN_10672562c(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 10672563c; end: 1067256a3;  */

void FUN_10672563c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1067256a4(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067256a4; end: 106725c87;  */

ulong FUN_1067256a4(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uStack_98;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    uStack_98 = 0;
  }
  else {
    uVar21 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = param_2;
    FUN_1067283d0(param_2,uVar21);
    _objc_release(uVar21);
    uStack_98 = uStack_98 & 0xffffffff;
  }
  _objc_release(uVar7);
  uVar7 = param_3;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    uStack_80 = 0;
  }
  else {
    uVar7 = param_3;
    func_0x00010bf039a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar21 = uVar7;
    func_0x00010bfe8fa0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    FUN_106728898(&lStack_78,param_2,uVar21);
    _objc_release(uVar21);
    uVar21 = uVar7;
    func_0x00010c2810a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    FUN_1067254fc(param_2,uVar21);
    uVar9 = uVar7;
    func_0x00010c0c54a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    FUN_1067254fc(param_2,uVar9);
    lVar1 = 0x1130c2400;
    if (lStack_70 - lStack_78 != 0) {
      lVar1 = lStack_78;
    }
    uVar11 = param_2;
    func_0x000100c47e34(param_2,lVar1,lStack_70 - lStack_78 >> 2);
    func_0x00010bfb6d40(uVar7);
    *(undefined1 *)(param_2 + 0x46) = 1;
    iVar4 = *(int *)(param_2 + 0x20);
    iVar5 = *(int *)(param_2 + 0x30);
    iVar6 = *(int *)(param_2 + 0x28);
    func_0x0001001ce11c(param_1,0,param_2,10);
    func_0x000100c47f00(param_2,8,uVar11 & 0xffffffff);
    func_0x0001001ce2e4(param_2,6,uVar10 & 0xffffffff);
    func_0x0001001ce2e4(param_2,4,uVar8 & 0xffffffff);
    uStack_80 = param_2;
    func_0x0001001ce548(param_2,(iVar4 - iVar5) + iVar6);
    _objc_release(uVar9);
    _objc_release(uVar21);
    if (lStack_78 != 0) {
      lStack_70 = lStack_78;
      __ZdlPv();
    }
    _objc_release(uVar7);
    _objc_release(uVar7);
    uStack_80 = uStack_80 & 0xffffffff;
  }
  _objc_release();
  uVar7 = param_3;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    uVar21 = 0;
  }
  else {
    uVar8 = param_3;
    func_0x00010c0b3ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = param_2;
    FUN_10672865c(param_2,uVar8);
    _objc_release(uVar8);
    uVar21 = uVar21 & 0xffffffff;
  }
  _objc_release(uVar7);
  uVar7 = param_3;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  FUN_1067254fc(param_2,uVar7);
  uVar9 = param_3;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  FUN_1067254fc(param_2,uVar9);
  uVar11 = param_3;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_2;
  FUN_1067254fc(param_2,uVar11);
  uVar13 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_2;
  FUN_1067254fc(param_2,uVar13);
  uVar15 = param_3;
  func_0x00010c26e0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_2;
  FUN_1067254fc(param_2,uVar15);
  uVar17 = param_3;
  func_0x00010c0900a0(param_3);
  uVar18 = param_3;
  func_0x00010c07f200();
  uVar19 = param_3;
  func_0x00010c29c5c0(param_3);
  uVar20 = param_3;
  func_0x00010c07d340(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar22 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001001ce1c8(param_2,0x18,uVar19,0);
  func_0x0001001ce354(param_2,0x14,uVar17,0);
  FUN_106728a08(param_2,0x12,uVar21);
  if (uStack_80 != 0) {
    func_0x0001001ce088(param_2,4);
    func_0x0001001ce354(param_2,0x10,
                        (((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) +
                         *(int *)(param_2 + 0x28)) - (int)uStack_80) + 4,0);
  }
  FUN_106728a6c(param_2,uStack_98);
  func_0x0001001ce2e4(param_2,0xc,uVar16 & 0xffffffff);
  func_0x0001001ce2e4(param_2,10,uVar14 & 0xffffffff);
  func_0x0001001ce2e4(param_2,8,uVar12 & 0xffffffff);
  func_0x0001001ce2e4(param_2,6,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar8 & 0xffffffff);
  func_0x000100ab13ac(param_2,0x1a,uVar20,0);
  func_0x000100ab13ac(param_2,0x16,uVar18 & 0xffffffff,0);
  func_0x0001001ce548(param_2,((int)uVar22 - (int)uVar3) + (int)uVar2);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106725c88; end: 106725cef;  */

void FUN_106725c88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_106725cf0(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106725cf0; end: 10672606b;  */

ulong FUN_106725cf0(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar16 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bf5b080(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_1;
    FUN_1067283d0(param_1,lVar5);
    _objc_release(lVar5);
    uVar16 = uVar16 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar17 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c0b3ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_1;
    FUN_10672865c(param_1,lVar5);
    _objc_release(lVar5);
    uVar17 = uVar17 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010bf3fe40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_1067254fc(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010bf3ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1067254fc(param_1,lVar5);
  lVar8 = param_2;
  func_0x00010bf3fdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1067254fc(param_1,lVar8);
  lVar10 = param_2;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_1067254fc(param_1,lVar10);
  lVar12 = param_2;
  func_0x00010c26ec00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_1067254fc(param_1,lVar12);
  lVar14 = param_2;
  func_0x00010bf68280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  FUN_1067254fc(param_1,lVar14);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,0x12,uVar15 & 0xffffffff);
  FUN_106728a08(param_1,0x10,uVar17);
  FUN_106728a6c(param_1,uVar16);
  func_0x0001001ce2e4(param_1,0xc,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(param_1,10,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar6 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10672606c; end: 1067260d3;  */

void FUN_10672606c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1067260d4(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067260d4; end: 10672647b;  */

ulong FUN_1067260d4(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar18 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bf5b080(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_1;
    FUN_1067283d0(param_1,lVar5);
    _objc_release(lVar5);
    uVar18 = uVar18 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar17 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c0b3ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_1;
    FUN_10672865c(param_1,lVar5);
    _objc_release(lVar5);
    uVar17 = uVar17 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c275280();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_1067254fc(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010c1121a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1067254fc(param_1,lVar5);
  lVar8 = param_2;
  func_0x00010c29f320(param_2);
  lVar9 = param_2;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_1067254fc(param_1,lVar9);
  lVar11 = param_2;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  FUN_1067254fc(param_1,lVar11);
  lVar13 = param_2;
  func_0x00010c111400();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  FUN_1067254fc(param_1,lVar13);
  lVar15 = param_2;
  func_0x00010c1113e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  FUN_1067254fc(param_1,lVar15);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,8,lVar8,0);
  func_0x0001001ce2e4(param_1,0x14,uVar16 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x12,uVar14 & 0xffffffff);
  FUN_106728a08(param_1,0x10,uVar17);
  FUN_106728a6c(param_1,uVar18);
  func_0x0001001ce2e4(param_1,0xc,uVar12 & 0xffffffff);
  func_0x0001001ce2e4(param_1,10,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar6 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10672647c; end: 1067264e3;  */

void FUN_10672647c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1067264e4(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067264e4; end: 1067273bf;  */

ulong FUN_1067264e4(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined4 *puVar29;
  ulong uStack_388;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  code *pcStack_308;
  undefined ***pppuStack_2f8;
  long lStack_270;
  undefined8 uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_178 = param_2;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110937720;
  pcStack_108 = FUN_106728ac4;
  pppuStack_f8 = &ppuStack_110;
  func_0x00010c0960a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_2);
  uVar20 = param_2;
  func_0x00010bf52a60();
  uStack_170 = param_1;
  if (uVar20 == 0) {
    puStack_168 = (undefined4 *)0x0;
    puVar18 = (undefined4 *)0x0;
  }
  else {
    puStack_168 = (undefined4 *)0x0;
    puVar18 = (undefined4 *)0x0;
    puVar22 = (undefined4 *)0x0;
    lVar28 = *plStack_150;
    do {
      uVar19 = 0;
      do {
        if (*plStack_150 != lVar28) {
          _objc_enumerationMutation(param_2);
        }
        uVar25 = *(undefined8 *)(lStack_158 + uVar19 * 8);
        _objc_retain(uVar25);
        _objc_retain(uVar25);
        uStack_118 = uVar25;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_1067270ec;
        }
        pppuVar6 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,uStack_170,&uStack_118);
        _objc_release(uStack_118);
        if (puVar18 < puVar22) {
          *puVar18 = (int)pppuVar6;
          puVar21 = puStack_168;
        }
        else {
          lVar26 = (long)puVar18 - (long)puStack_168;
          uVar7 = (lVar26 >> 2) + 1;
          if (uVar7 >> 0x3e != 0) {
            FUN_106728c34();
LAB_1067270ec:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1067270f0);
            (*pcVar5)();
          }
          uVar27 = (long)puVar22 - (long)puStack_168 >> 1;
          if (uVar27 <= uVar7) {
            uVar27 = uVar7;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar22 - (long)puStack_168)) {
            uVar27 = 0x3fffffffffffffff;
          }
          if (uVar27 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_1067270ec;
          }
          lVar11 = uVar27 << 2;
          __Znwm();
          puVar29 = puStack_168;
          puVar18 = (undefined4 *)(lVar11 + lVar26);
          puVar22 = (undefined4 *)(lVar11 + uVar27 * 4);
          puVar21 = puVar18 + -(lVar26 >> 2);
          *puVar18 = (int)pppuVar6;
          _memcpy(puVar21,puStack_168,lVar26);
          if (puVar29 != (undefined4 *)0x0) {
            __ZdlPv(puVar29);
          }
        }
        puStack_168 = puVar21;
        puVar18 = puVar18 + 1;
        _objc_release(uVar25);
        uVar19 = uVar19 + 1;
      } while (uVar20 != uVar19);
      uVar20 = param_2;
      func_0x00010bf52a60();
    } while (uVar20 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  uVar20 = uStack_170;
  if (pppuStack_f8 == &ppuStack_110) {
    lVar28 = 0x20;
LAB_10672670c:
    (**(code **)((long)*pppuStack_f8 + lVar28))();
  }
  else if (pppuStack_f8 != (undefined ***)0x0) {
    lVar28 = 0x28;
    goto LAB_10672670c;
  }
  uVar19 = uStack_178;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar19 == 0) {
    uStack_190 = 0;
  }
  else {
    uVar7 = uStack_178;
    func_0x00010c0b3ae0(uStack_178);
    _objc_retainAutoreleasedReturnValue();
    FUN_10672865c(uVar20,uVar7);
    _objc_release(uVar7);
    uStack_190 = uVar20 & 0xffffffff;
  }
  _objc_release(uVar19);
  uVar19 = uStack_178;
  func_0x00010bf5b880();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uStack_170;
  uStack_188 = uVar19;
  if (uVar19 == 0) {
    uVar20 = 0;
  }
  else {
    uVar19 = uStack_178;
    func_0x00010bf5b880();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uStack_180 = uVar19;
    func_0x00010bf5b8a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = uVar19;
    if (uVar19 == 0) {
      uStack_198 = 0;
    }
    else {
      uVar19 = uStack_180;
      func_0x00010bf5b8a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar7 = uVar19;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar20;
      uStack_198 = uVar7;
      FUN_1067254fc(uVar20);
      uVar7 = uVar19;
      func_0x00010bf85d80(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar20;
      FUN_1067254fc(uVar20,uVar7);
      uVar8 = uVar19;
      func_0x00010c078f60(uVar19);
      uVar17 = uVar19;
      func_0x00010c0e1a60(uVar19);
      *(undefined1 *)(uVar20 + 0x46) = 1;
      iVar2 = *(int *)(uVar20 + 0x20);
      iVar3 = *(int *)(uVar20 + 0x30);
      iVar4 = *(int *)(uVar20 + 0x28);
      func_0x0001001ce1c8(uVar20,10,uVar17,0);
      func_0x0001001ce2e4(uVar20,6,uVar24 & 0xffffffff);
      func_0x0001001ce2e4(uVar20,4,uVar27 & 0xffffffff);
      func_0x000100ab13ac(uVar20,8,uVar8,0);
      func_0x0001001ce548(uVar20,(iVar2 - iVar3) + iVar4);
      _objc_release(uVar7);
      _objc_release(uStack_198);
      _objc_release(uVar19);
      _objc_release(uVar19);
      uStack_198 = uVar20 & 0xffffffff;
    }
    _objc_release(uStack_1a0);
    uVar19 = uStack_180;
    func_0x00010c26e020();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uStack_170;
    if (uVar19 == 0) {
      uVar20 = 0;
    }
    else {
      uVar7 = uStack_180;
      uStack_1e8 = uVar19;
      func_0x00010c26e020();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar19 = uVar7;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar20;
      uStack_1c8 = uVar19;
      FUN_1067254fc(uVar20,uVar19);
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(int)uVar27);
      uVar19 = uVar7;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar20;
      uStack_1d0 = uVar19;
      FUN_1067254fc();
      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(int)uVar27);
      uVar19 = uVar7;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar20;
      uStack_1d8 = uVar19;
      FUN_1067254fc();
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uVar27);
      uVar19 = uVar7;
      func_0x00010c0ed6a0();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar20;
      uStack_1e0 = uVar19;
      FUN_1067254fc();
      uStack_1b4 = (undefined4)uVar27;
      uVar19 = uVar7;
      func_0x00010c0880c0();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar20;
      uStack_1f0 = uVar19;
      FUN_1067254fc();
      uStack_1b8 = (undefined4)uVar27;
      uVar19 = uVar7;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      uStack_1f8 = uVar19;
      FUN_1067254fc();
      uStack_1bc = (undefined4)uVar20;
      uVar19 = uVar7;
      func_0x00010bf4cce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (uVar19 == 0) {
        uVar27 = 0;
      }
      else {
        _objc_retainAutorelease(uVar19);
        uVar20 = uVar19;
        func_0x00010bf25f00(uVar19);
        uVar27 = uStack_170;
        uVar24 = uVar19;
        func_0x00010c08fa60(uVar19);
        func_0x0001001d1030(uVar27,uVar20,uVar24);
      }
      _objc_release(uVar19);
      uVar24 = uVar7;
      func_0x00010bf4cd40();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uStack_170;
      uVar8 = uStack_170;
      uStack_200 = uVar24;
      FUN_1067254fc(uStack_170);
      uVar24 = uVar7;
      func_0x00010bf4cd20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar20;
      FUN_1067254fc(uVar20,uVar24);
      *(undefined1 *)(uVar20 + 0x46) = 1;
      iVar2 = *(int *)(uVar20 + 0x20);
      iVar3 = *(int *)(uVar20 + 0x30);
      iVar4 = *(int *)(uVar20 + 0x28);
      func_0x0001001ce2e4(uVar20,0x14,uVar17 & 0xffffffff);
      func_0x0001001ce2e4(uVar20,0x12,uVar8 & 0xffffffff);
      func_0x0001001ce220(uVar20,0x10,uVar27 & 0xffffffff);
      func_0x0001001ce2e4(uVar20,0xe,uStack_1bc);
      func_0x0001001ce2e4(uVar20,0xc,uStack_1b8);
      func_0x0001001ce2e4(uVar20,10,uStack_1b4);
      func_0x0001001ce2e4(uVar20,8,uStack_1b0 & 0xffffffff);
      func_0x0001001ce2e4(uVar20,6,uStack_1a8 & 0xffffffff);
      func_0x0001001ce2e4(uVar20,4,uStack_1a0 & 0xffffffff);
      func_0x0001001ce548(uVar20,(iVar2 - iVar3) + iVar4);
      _objc_release(uVar24);
      _objc_release(uStack_200);
      _objc_release(uVar19);
      _objc_release(uStack_1f8);
      _objc_release(uStack_1f0);
      _objc_release(uStack_1e0);
      _objc_release(uStack_1d8);
      _objc_release(uStack_1d0);
      _objc_release(uStack_1c8);
      _objc_release(uVar7);
      _objc_release(uVar7);
      uVar20 = uVar20 & 0xffffffff;
      uVar19 = uStack_1e8;
    }
    _objc_release(uVar19);
    uVar19 = uStack_180;
    func_0x00010c25b220(uStack_180);
    _objc_retainAutoreleasedReturnValue();
    FUN_106728898(&lStack_f0,uStack_170,uVar19);
    _objc_release(uVar19);
    lVar28 = 0x1130c2400;
    if (lStack_e8 - lStack_f0 != 0) {
      lVar28 = lStack_f0;
    }
    uVar19 = uStack_170;
    func_0x000100c47e34(uStack_170,lVar28,lStack_e8 - lStack_f0 >> 2);
    *(undefined1 *)(uStack_170 + 0x46) = 1;
    iVar2 = *(int *)(uStack_170 + 0x20);
    iVar3 = *(int *)(uStack_170 + 0x30);
    iVar4 = *(int *)(uStack_170 + 0x28);
    func_0x000100c47f00(uStack_170,8,uVar19 & 0xffffffff);
    if (uVar20 != 0) {
      func_0x0001001ce088(uStack_170,4);
      func_0x0001001ce354(uStack_170,6,
                          (((*(int *)(uStack_170 + 0x20) - *(int *)(uStack_170 + 0x30)) +
                           *(int *)(uStack_170 + 0x28)) - (int)uVar20) + 4,0);
    }
    if (uStack_198 != 0) {
      func_0x0001001ce088(uStack_170,4);
      func_0x0001001ce354(uStack_170,4,
                          (((*(int *)(uStack_170 + 0x20) - *(int *)(uStack_170 + 0x30)) +
                           *(int *)(uStack_170 + 0x28)) - (int)uStack_198) + 4,0);
    }
    uVar20 = uStack_170;
    func_0x0001001ce548(uStack_170,(iVar2 - iVar3) + iVar4);
    if (lStack_f0 != 0) {
      lStack_e8 = lStack_f0;
      __ZdlPv();
    }
    _objc_release(uStack_180);
    _objc_release(uStack_180);
    uVar20 = uVar20 & 0xffffffff;
  }
  _objc_release(uStack_188);
  uVar19 = uStack_178;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uStack_170;
  uVar24 = uStack_170;
  uStack_1a8 = uVar19;
  FUN_1067254fc();
  uVar19 = uStack_178;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  uStack_1b0 = uVar19;
  FUN_1067254fc();
  uVar19 = uStack_178;
  func_0x00010bf5b580();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar7;
  uStack_1a0 = uVar19;
  FUN_1067254fc();
  uVar27 = uStack_178;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uStack_178;
  uStack_198 = uVar27;
  FUN_1067254fc();
  uVar16 = uVar19;
  func_0x00010c080120();
  uVar9 = uVar19;
  func_0x00010c0e1aa0();
  func_0x00010bf5b120();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uStack_170;
  uVar10 = uStack_170;
  uStack_188 = uVar19;
  FUN_1067254fc();
  uVar19 = uStack_178;
  func_0x00010bf5b140();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b8 = (undefined4)uVar7;
  uStack_1b4 = (undefined4)uVar10;
  uStack_1bc = (undefined4)uVar17;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,(int)uVar9);
  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(int)uVar16);
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,(int)uVar8);
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(int)uVar24);
  uVar7 = uVar27;
  uStack_180 = uVar19;
  FUN_1067254fc();
  uVar24 = uStack_178;
  func_0x00010c1170a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar27;
  FUN_1067254fc(uVar27,uVar24);
  uVar19 = (long)puVar18 - (long)puStack_168;
  puVar22 = (undefined4 *)&UNK_10ddde035;
  if (uVar19 != 0) {
    puVar22 = puStack_168;
  }
  *(undefined1 *)(uVar27 + 0x46) = 1;
  func_0x0001001cddd0(uVar27,uVar19,4);
  func_0x0001001cddd0(uVar27,uVar19,4);
  if (puStack_168 != puVar18) {
    lVar28 = (long)uVar19 >> 2;
    do {
      uVar27 = uStack_170;
      iVar2 = puVar22[lVar28 + -1];
      func_0x0001001ce088(uStack_170,4);
      func_0x0001001ce0bc(uVar27,(((*(int *)(uVar27 + 0x20) - *(int *)(uVar27 + 0x30)) +
                                  *(int *)(uVar27 + 0x28)) - iVar2) + 4);
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  uVar27 = uStack_170;
  *(undefined1 *)(uStack_170 + 0x46) = 0;
  uVar17 = uStack_170;
  func_0x0001001ce0bc(uStack_170,uVar19 >> 2);
  *(undefined1 *)(uVar27 + 0x46) = 1;
  uVar25 = *(undefined8 *)(uVar27 + 0x28);
  uVar1 = *(undefined8 *)(uVar27 + 0x30);
  uVar23 = *(undefined8 *)(uVar27 + 0x20);
  if (uVar20 != 0) {
    func_0x0001001ce088(uVar27,4);
    func_0x0001001ce354(uVar27,0x1a,
                        (((*(int *)(uVar27 + 0x20) - *(int *)(uVar27 + 0x30)) +
                         *(int *)(uVar27 + 0x28)) - (int)uVar20) + 4,0);
  }
  FUN_106728a08(uVar27,0x18,uStack_190);
  if ((int)uVar17 != 0) {
    func_0x0001001ce088(uVar27,4);
    func_0x0001001ce354(uVar27,0x16,
                        (((*(int *)(uVar27 + 0x20) - *(int *)(uVar27 + 0x30)) +
                         *(int *)(uVar27 + 0x28)) - (int)uVar17) + 4,0);
  }
  func_0x0001001ce2e4(uVar27,0x14,uVar8 & 0xffffffff);
  func_0x0001001ce2e4(uVar27,0x12,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(uVar27,0x10,uStack_1b4);
  func_0x0001001ce2e4(uVar27,10,uStack_1b8);
  func_0x0001001ce2e4(uVar27,8,uStack_1bc);
  func_0x0001001ce2e4(uVar27,6,uStack_1c8 & 0xffffffff);
  func_0x0001001ce2e4(uVar27,4,uStack_1d0 & 0xffffffff);
  func_0x000100ab13ac(uVar27,0xe,uStack_1d8 & 0xffffffff,0);
  func_0x000100ab13ac(uVar27,0xc,uStack_1e0 & 0xffffffff,0);
  uVar16 = (ulong)(uint)(((int)uVar23 - (int)uVar1) + (int)uVar25);
  uVar19 = uVar27;
  func_0x0001001ce548(uVar27);
  _objc_release(uVar24);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  uVar9 = uStack_178;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar19;
  }
  ___stack_chk_fail();
  _objc_release(uVar23);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(uVar8);
  _objc_release(uVar8);
  _objc_release(uStack_1e8);
  _objc_release(uStack_180);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv(puStack_168);
  }
  _objc_release(uStack_178);
  uVar19 = uVar9;
  __Unwind_Resume();
  uStack_220 = uVar27;
  pcStack_208 = FUN_1067273c0;
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_260 = uVar1;
  uStack_258 = uVar7;
  uStack_250 = uVar8;
  uStack_248 = uVar17;
  uStack_240 = uVar24;
  uStack_238 = uVar20;
  uStack_230 = uVar23;
  uStack_228 = uVar9;
  uStack_218 = uVar25;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(uVar16);
  *(undefined4 *)(*(long *)(*(long *)(uVar19 + 0x20) + 8) + 0x18) = 5;
  uVar27 = *(ulong *)(uVar19 + 0x30);
  _objc_retain(uVar16);
  ppuStack_310 = &PTR_FUN_1109377d0;
  pcStack_308 = FUN_106728d0c;
  pppuStack_2f8 = &ppuStack_310;
  uVar20 = uVar16;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar20);
  uVar7 = uVar20;
  func_0x00010bf52a60();
  lVar28 = lRam0000000000000000;
  puVar22 = (undefined4 *)0x0;
  puVar18 = (undefined4 *)0x0;
  if (uVar7 != 0) {
    puVar29 = (undefined4 *)0x0;
    do {
      uVar24 = 0;
      puVar21 = puVar22;
      do {
        if (lRam0000000000000000 != lVar28) {
          _objc_enumerationMutation(uVar20);
        }
        uVar25 = *(undefined8 *)(uVar24 * 8);
        _objc_retain(uVar25);
        _objc_retain(uVar25);
        uStack_318 = uVar25;
        if (pppuStack_2f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_106727940;
        }
        pppuVar6 = pppuStack_2f8;
        (*(code *)(*pppuStack_2f8)[6])(pppuStack_2f8,uVar27,&uStack_318);
        _objc_release(uStack_318);
        if (puVar18 < puVar29) {
          *puVar18 = (int)pppuVar6;
          puVar22 = puVar21;
        }
        else {
          lVar26 = (long)puVar18 - (long)puVar21;
          uVar8 = (lVar26 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
            FUN_106729120();
LAB_106727940:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x106727944);
            (*pcVar5)();
          }
          uVar17 = (long)puVar29 - (long)puVar21 >> 1;
          if (uVar17 <= uVar8) {
            uVar17 = uVar8;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar29 - (long)puVar21)) {
            uVar17 = 0x3fffffffffffffff;
          }
          if (uVar17 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_106727940;
          }
          lVar11 = uVar17 << 2;
          __Znwm();
          puVar18 = (undefined4 *)(lVar11 + lVar26);
          puVar29 = (undefined4 *)(lVar11 + uVar17 * 4);
          puVar22 = puVar18 + -(lVar26 >> 2);
          *puVar18 = (int)pppuVar6;
          _memcpy(puVar22,puVar21,lVar26);
          if (puVar21 != (undefined4 *)0x0) {
            __ZdlPv(puVar21);
          }
        }
        puVar18 = puVar18 + 1;
        _objc_release(uVar25);
        uVar24 = uVar24 + 1;
        puVar21 = puVar22;
      } while (uVar7 != uVar24);
      uVar7 = uVar20;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  _objc_release(uVar20);
  _objc_release(uVar20);
  _objc_release(uVar20);
  if (pppuStack_2f8 == &ppuStack_310) {
    lVar28 = 0x20;
  }
  else {
    if (pppuStack_2f8 == (undefined ***)0x0) goto LAB_106727624;
    lVar28 = 0x28;
  }
  (**(code **)((long)*pppuStack_2f8 + lVar28))();
LAB_106727624:
  uVar20 = uVar16;
  func_0x00010c130180();
  _objc_retainAutoreleasedReturnValue();
  if (uVar20 == 0) {
    uStack_388 = 0;
  }
  else {
    uVar7 = uVar16;
    func_0x00010c130180(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uStack_388 = uVar27;
    FUN_106728f3c(uVar27,uVar7);
    _objc_release(uVar7);
    uStack_388 = uStack_388 & 0xffffffff;
  }
  _objc_release(uVar20);
  uVar7 = uVar16;
  func_0x00010bf4ae20();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar27;
  FUN_1067254fc();
  uVar8 = uVar16;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar27;
  FUN_1067254fc();
  uVar20 = (long)puVar18 - (long)puVar22;
  puVar29 = (undefined4 *)&UNK_10ddde035;
  if (uVar20 != 0) {
    puVar29 = puVar22;
  }
  *(undefined1 *)(uVar27 + 0x46) = 1;
  func_0x0001001cddd0(uVar27,uVar20,4);
  func_0x0001001cddd0(uVar27,uVar20,4);
  if (puVar22 != puVar18) {
    lVar28 = (long)uVar20 >> 2;
    do {
      iVar2 = puVar29[lVar28 + -1];
      func_0x0001001ce088(uVar27,4);
      func_0x0001001ce0bc(uVar27,(((*(int *)(uVar27 + 0x20) - *(int *)(uVar27 + 0x30)) +
                                  *(int *)(uVar27 + 0x28)) - iVar2) + 4);
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  *(undefined1 *)(uVar27 + 0x46) = 0;
  uVar9 = uVar27;
  func_0x0001001ce0bc(uVar27,uVar20 >> 2);
  uVar20 = uVar16;
  func_0x00010bf4ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar27;
  FUN_1067254fc(uVar27);
  uVar12 = uVar16;
  func_0x00010bfa3d00(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar27;
  FUN_1067254fc(uVar27,uVar12);
  uVar14 = uVar16;
  func_0x00010bf68280(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar27;
  FUN_1067254fc(uVar27,uVar14);
  *(undefined1 *)(uVar27 + 0x46) = 1;
  iVar2 = *(int *)(uVar27 + 0x20);
  iVar3 = *(int *)(uVar27 + 0x30);
  iVar4 = *(int *)(uVar27 + 0x28);
  func_0x0001001ce2e4(uVar27,0x10,uVar15 & 0xffffffff);
  func_0x0001001ce2e4(uVar27,0xe,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(uVar27,0xc,uVar10 & 0xffffffff);
  FUN_1067296ac(uVar27,10,uStack_388);
  if ((int)uVar9 != 0) {
    func_0x0001001ce088(uVar27,4);
    func_0x0001001ce354(uVar27,8,(((*(int *)(uVar27 + 0x20) - *(int *)(uVar27 + 0x30)) +
                                  *(int *)(uVar27 + 0x28)) - (int)uVar9) + 4,0);
  }
  func_0x0001001ce2e4(uVar27,6,(int)uVar17);
  func_0x0001001ce2e4(uVar27,4,(int)uVar24);
  uVar24 = (ulong)(uint)((iVar2 - iVar3) + iVar4);
  func_0x0001001ce548(uVar27,uVar24);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar20);
  _objc_release(uVar8);
  _objc_release(uVar7);
  if (puVar22 != (undefined4 *)0x0) {
    __ZdlPv(puVar22);
  }
  uVar20 = uVar16;
  _objc_release();
  *(int *)(*(long *)(*(long *)(uVar19 + 0x28) + 8) + 0x30) = (int)uVar27;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_270) {
    ___stack_chk_fail();
    _objc_release(uVar14);
    _objc_release(uVar12);
    if (puVar22 != (undefined4 *)0x0) {
      __ZdlPv(puVar22);
    }
    _objc_release(uVar16);
    _objc_release(uVar16);
    uVar16 = uVar24;
    __Unwind_Resume();
    _objc_retain(uVar16);
    *(undefined4 *)(*(long *)(*(long *)(uVar20 + 0x20) + 8) + 0x18) = 6;
    uVar25 = *(undefined8 *)(uVar20 + 0x30);
    FUN_106727afc(uVar25,uVar16);
    *(int *)(*(long *)(*(long *)(uVar20 + 0x28) + 8) + 0x30) = (int)uVar25;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return uVar16;
}



/* Entry: 1067273c0; end: 106727a93;  */

void FUN_1067273c0(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined4 *puVar22;
  long lVar23;
  ulong uVar24;
  undefined4 *puVar25;
  ulong uStack_188;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 5;
  uVar24 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_1109377d0;
  pcStack_108 = FUN_106728d0c;
  pppuStack_f8 = &ppuStack_110;
  uVar5 = param_2;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar5);
  uVar6 = uVar5;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  puVar18 = (undefined4 *)0x0;
  puVar22 = (undefined4 *)0x0;
  if (uVar6 != 0) {
    puVar25 = (undefined4 *)0x0;
    do {
      uVar21 = 0;
      puVar19 = puVar18;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(uVar5);
        }
        uVar20 = *(undefined8 *)(uVar21 * 8);
        _objc_retain(uVar20);
        _objc_retain(uVar20);
        uStack_118 = uVar20;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_106727940;
        }
        pppuVar7 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,uVar24,&uStack_118);
        _objc_release(uStack_118);
        if (puVar22 < puVar25) {
          *puVar22 = (int)pppuVar7;
          puVar18 = puVar19;
        }
        else {
          lVar23 = (long)puVar22 - (long)puVar19;
          uVar9 = (lVar23 >> 2) + 1;
          if (uVar9 >> 0x3e != 0) {
            FUN_106729120();
LAB_106727940:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x106727944);
            (*pcVar4)();
          }
          uVar17 = (long)puVar25 - (long)puVar19 >> 1;
          if (uVar17 <= uVar9) {
            uVar17 = uVar9;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar25 - (long)puVar19)) {
            uVar17 = 0x3fffffffffffffff;
          }
          if (uVar17 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_106727940;
          }
          lVar8 = uVar17 << 2;
          __Znwm();
          puVar22 = (undefined4 *)(lVar8 + lVar23);
          puVar25 = (undefined4 *)(lVar8 + uVar17 * 4);
          puVar18 = puVar22 + -(lVar23 >> 2);
          *puVar22 = (int)pppuVar7;
          _memcpy(puVar18,puVar19,lVar23);
          if (puVar19 != (undefined4 *)0x0) {
            __ZdlPv(puVar19);
          }
        }
        puVar22 = puVar22 + 1;
        _objc_release(uVar20);
        uVar21 = uVar21 + 1;
        puVar19 = puVar18;
      } while (uVar6 != uVar21);
      uVar6 = uVar5;
      func_0x00010bf52a60();
    } while (uVar6 != 0);
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar5);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar16 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_106727624;
    lVar16 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar16))();
LAB_106727624:
  uVar5 = param_2;
  func_0x00010c130180();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
    uStack_188 = 0;
  }
  else {
    uVar6 = param_2;
    func_0x00010c130180(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = uVar24;
    FUN_106728f3c(uVar24,uVar6);
    _objc_release(uVar6);
    uStack_188 = uStack_188 & 0xffffffff;
  }
  _objc_release(uVar5);
  uVar6 = param_2;
  func_0x00010bf4ae20();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar24;
  FUN_1067254fc();
  uVar9 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar24;
  FUN_1067254fc();
  uVar5 = (long)puVar22 - (long)puVar18;
  puVar25 = (undefined4 *)&UNK_10ddde035;
  if (uVar5 != 0) {
    puVar25 = puVar18;
  }
  *(undefined1 *)(uVar24 + 0x46) = 1;
  func_0x0001001cddd0(uVar24,uVar5,4);
  func_0x0001001cddd0(uVar24,uVar5,4);
  if (puVar18 != puVar22) {
    lVar16 = (long)uVar5 >> 2;
    do {
      iVar3 = puVar25[lVar16 + -1];
      func_0x0001001ce088(uVar24,4);
      func_0x0001001ce0bc(uVar24,(((*(int *)(uVar24 + 0x20) - *(int *)(uVar24 + 0x30)) +
                                  *(int *)(uVar24 + 0x28)) - iVar3) + 4);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  *(undefined1 *)(uVar24 + 0x46) = 0;
  uVar10 = uVar24;
  func_0x0001001ce0bc(uVar24,uVar5 >> 2);
  uVar5 = param_2;
  func_0x00010bf4ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar24;
  FUN_1067254fc(uVar24);
  uVar12 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar24;
  FUN_1067254fc(uVar24,uVar12);
  uVar14 = param_2;
  func_0x00010bf68280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar24;
  FUN_1067254fc(uVar24,uVar14);
  *(undefined1 *)(uVar24 + 0x46) = 1;
  iVar3 = *(int *)(uVar24 + 0x20);
  iVar1 = *(int *)(uVar24 + 0x30);
  iVar2 = *(int *)(uVar24 + 0x28);
  func_0x0001001ce2e4(uVar24,0x10,uVar15 & 0xffffffff);
  func_0x0001001ce2e4(uVar24,0xe,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(uVar24,0xc,uVar11 & 0xffffffff);
  FUN_1067296ac(uVar24,10,uStack_188);
  if ((int)uVar10 != 0) {
    func_0x0001001ce088(uVar24,4);
    func_0x0001001ce354(uVar24,8,(((*(int *)(uVar24 + 0x20) - *(int *)(uVar24 + 0x30)) +
                                  *(int *)(uVar24 + 0x28)) - (int)uVar10) + 4,0);
  }
  func_0x0001001ce2e4(uVar24,6,(int)uVar17);
  func_0x0001001ce2e4(uVar24,4,(int)uVar21);
  uVar21 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x0001001ce548(uVar24,uVar21);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar6);
  if (puVar18 != (undefined4 *)0x0) {
    __ZdlPv(puVar18);
  }
  uVar5 = param_2;
  _objc_release();
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar24;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(uVar14);
    _objc_release(uVar12);
    if (puVar18 != (undefined4 *)0x0) {
      __ZdlPv(puVar18);
    }
    _objc_release(param_2);
    _objc_release(param_2);
    param_2 = uVar21;
    __Unwind_Resume();
    _objc_retain(param_2);
    *(undefined4 *)(*(long *)(*(long *)(uVar5 + 0x20) + 8) + 0x18) = 6;
    uVar20 = *(undefined8 *)(uVar5 + 0x30);
    FUN_106727afc(uVar20,param_2);
    *(int *)(*(long *)(*(long *)(uVar5 + 0x28) + 8) + 0x30) = (int)uVar20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106727a94; end: 106727afb;  */

void FUN_106727a94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 6;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_106727afc(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106727afc; end: 1067280e7;  */

ulong FUN_106727afc(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined ***pppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong uVar21;
  undefined4 *puStack_168;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_1109379a0;
  pcStack_108 = FUN_10672971c;
  pppuStack_f8 = &ppuStack_110;
  lVar5 = param_2;
  func_0x00010bf8d2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(lVar5);
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  if (lVar6 == 0) {
    puStack_168 = (undefined4 *)0x0;
    puVar15 = (undefined4 *)0x0;
  }
  else {
    puStack_168 = (undefined4 *)0x0;
    puVar15 = (undefined4 *)0x0;
    puVar17 = (undefined4 *)0x0;
    do {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(lVar5);
        }
        uVar18 = *(undefined8 *)(lVar16 * 8);
        _objc_retain(uVar18);
        _objc_retain(uVar18);
        uStack_118 = uVar18;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_106727fc0;
        }
        pppuVar7 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar15 < puVar17) {
          *puVar15 = (int)pppuVar7;
          puVar20 = puStack_168;
        }
        else {
          lVar19 = (long)puVar15 - (long)puStack_168;
          uVar21 = (lVar19 >> 2) + 1;
          if (uVar21 >> 0x3e != 0) {
            FUN_10672990c();
LAB_106727fc0:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x106727fc4);
            (*pcVar4)();
          }
          uVar14 = (long)puVar17 - (long)puStack_168 >> 1;
          if (uVar14 <= uVar21) {
            uVar14 = uVar21;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar17 - (long)puStack_168)) {
            uVar14 = 0x3fffffffffffffff;
          }
          if (uVar14 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_106727fc0;
          }
          lVar8 = uVar14 << 2;
          __Znwm();
          puVar15 = (undefined4 *)(lVar8 + lVar19);
          puVar17 = (undefined4 *)(lVar8 + uVar14 * 4);
          puVar20 = puVar15 + -(lVar19 >> 2);
          *puVar15 = (int)pppuVar7;
          _memcpy(puVar20,puStack_168,lVar19);
          if (puStack_168 != (undefined4 *)0x0) {
            __ZdlPv(puStack_168);
          }
        }
        puStack_168 = puVar20;
        puVar15 = puVar15 + 1;
        _objc_release(uVar18);
        lVar16 = lVar16 + 1;
      } while (lVar6 != lVar16);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar5);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar13 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_106727d2c;
    lVar13 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar13))();
LAB_106727d2c:
  lVar13 = param_2;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    uVar21 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c0b3ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = param_1;
    FUN_10672865c(param_1,lVar5);
    _objc_release(lVar5);
    uVar21 = uVar21 & 0xffffffff;
  }
  _objc_release(lVar13);
  lVar13 = param_2;
  func_0x00010bfe0e40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1067254fc();
  lVar5 = param_2;
  func_0x00010bf68280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_1067254fc(param_1,lVar5);
  lVar6 = param_2;
  func_0x00010c08cda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_1067254fc(param_1,lVar6);
  uVar14 = (long)puVar15 - (long)puStack_168;
  puVar17 = (undefined4 *)&UNK_10ddde035;
  if (uVar14 != 0) {
    puVar17 = puStack_168;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar14,4);
  func_0x0001001cddd0(param_1,uVar14,4);
  if (puStack_168 != puVar15) {
    lVar16 = (long)uVar14 >> 2;
    do {
      iVar3 = puVar17[lVar16 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar12 = param_1;
  func_0x0001001ce0bc(param_1,uVar14 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  FUN_106728a08(param_1,0xc,uVar21);
  if ((int)uVar12 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,10,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar12) + 4,0);
  }
  func_0x0001001ce2e4(param_1,8,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,(int)uVar10);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  uVar21 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x0001001ce548(param_1,uVar21);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar13);
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  lVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(lVar5);
    _objc_release(iVar1);
    if (puStack_168 != (undefined4 *)0x0) {
      __ZdlPv(puStack_168);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar21);
    *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0x20) + 8) + 0x18) = 7;
    uVar18 = *(undefined8 *)(lVar13 + 0x30);
    FUN_106728150(uVar18,uVar21);
    *(int *)(*(long *)(*(long *)(lVar13 + 0x28) + 8) + 0x30) = (int)uVar18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar21);
    return uVar21;
  }
  return param_1;
}



/* Entry: 1067280e8; end: 10672814f;  */

void FUN_1067280e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 7;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_106728150(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106728150; end: 1067283cf;  */

ulong FUN_106728150(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar13 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c0b3ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_1;
    FUN_10672865c(param_1,lVar5);
    _objc_release(lVar5);
    uVar13 = uVar13 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_1067254fc(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010c1121a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1067254fc(param_1,lVar5);
  lVar8 = param_2;
  func_0x00010c111400();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1067254fc(param_1,lVar8);
  lVar10 = param_2;
  func_0x00010c1113e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_1067254fc(param_1,lVar10);
  lVar12 = param_2;
  func_0x00010c29c5c0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0xc,lVar12,0);
  FUN_106728a08(param_1,0xe,uVar13);
  func_0x0001001ce2e4(param_1,10,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar6 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1067283d0; end: 10672865b;  */

ulong FUN_1067283d0(ulong param_1,ulong param_2)

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
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1067254fc(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1067254fc(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1067254fc(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010bf1ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_1067254fc(param_1,uVar10);
  uVar12 = param_2;
  func_0x00010c0e1aa0();
  uVar13 = param_2;
  func_0x00010c06d940();
  uVar14 = param_2;
  func_0x00010c2427a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  FUN_1067254fc(param_1,uVar14);
  uVar16 = param_2;
  func_0x00010c242800(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,0x10,uVar15 & 0xffffffff);
  func_0x0001001ce2e4(param_1,10,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_1,0x12,uVar16,0);
  func_0x000100ab13ac(param_1,0xe,uVar13 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0xc,uVar12 & 0xffffffff,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10672865c; end: 106728897;  */

ulong FUN_10672865c(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bfec9e0(param_2);
  uVar5 = param_2;
  func_0x00010c11fc00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_1067254fc(param_1,uVar5);
  uVar7 = param_2;
  func_0x00010c11fc20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_1067254fc(param_1,uVar7);
  uVar9 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_1067254fc(param_1,uVar9);
  uVar11 = param_2;
  func_0x00010c084c40(param_2);
  uVar12 = param_2;
  func_0x00010bf4ae20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_1067254fc(param_1,uVar12);
  uVar14 = param_2;
  func_0x00010c156040(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,0x10,uVar14,0);
  func_0x0001001ce1c8(param_1,0xc,uVar11,0);
  func_0x0001001ce170(param_1,4,uVar4,0);
  func_0x0001001ce2e4(param_1,0xe,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(param_1,10,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,uVar8 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar6 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106728898; end: 106728a07;  */

void FUN_106728898(long *param_1,int *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  int iStack_124;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  iVar4 = (int)param_2;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar5 = &uStack_120;
  uVar3 = param_3;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar7 = *plStack_110;
    do {
      uVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        param_2 = *(int **)(lStack_118 + uVar8 * 8);
        iVar2 = iVar4;
        FUN_1067254fc();
        iStack_124 = iVar2;
        if (iStack_124 != 0) {
          param_2 = &iStack_124;
          func_0x000100c47d40(param_1);
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
      puVar5 = &uStack_120;
      uVar3 = param_3;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
  }
  _objc_release(param_3);
  uVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  _objc_release(param_3);
  __Unwind_Resume();
  if (puVar5 != (undefined8 *)0x0) {
    func_0x0001001ce088();
    iVar4 = (((*(int *)(uVar3 + 0x20) - *(int *)(uVar3 + 0x30)) + *(int *)(uVar3 + 0x28)) -
            (int)puVar5) + 4;
    if ((iVar4 == 0) && (*(char *)(uVar3 + 0x50) != '\x01')) {
      return;
    }
    uVar8 = uVar3;
    func_0x0001001ce0bc(uVar3,iVar4);
    puVar6 = *(ulong **)(uVar3 + 0x38);
    if ((ulong)(*(long *)(uVar3 + 0x30) - (long)puVar6) < 8) {
      func_0x0001001cde7c(uVar3,8);
      puVar6 = *(ulong **)(uVar3 + 0x38);
    }
    *puVar6 = uVar8 & 0xffffffff | (long)param_2 << 0x20;
    *(long *)(uVar3 + 0x38) = *(long *)(uVar3 + 0x38) + 8;
    *(int *)(uVar3 + 0x40) = *(int *)(uVar3 + 0x40) + 1;
    uVar1 = (uint)*(ushort *)(uVar3 + 0x44);
    if ((uint)*(ushort *)(uVar3 + 0x44) <= (uint)param_2) {
      uVar1 = (uint)param_2;
    }
    *(short *)(uVar3 + 0x44) = (short)uVar1;
    return;
  }
  return;
}



/* Entry: 106728a08; end: 106728a6b;  */

void FUN_106728a08(ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          (int)param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 106728a6c; end: 106728ac3;  */

void FUN_106728a6c(ulong param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  ushort uVar4;
  
  if (param_2 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          (int)param_2) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar2 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar3 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar3) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar3 = *(ulong **)(param_1 + 0x38);
  }
  *puVar3 = uVar2 & 0xffffffff | 0xe00000000;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar4 = *(ushort *)(param_1 + 0x44);
  if (uVar4 < 0xf) {
    uVar4 = 0xe;
  }
  *(ushort *)(param_1 + 0x44) = uVar4;
  return;
}



/* Entry: 106728ac4; end: 106728c33;  */

ulong FUN_106728ac4(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1067254fc(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c26e0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1067254fc(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010bfe5b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1067254fc(param_1,uVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,8,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106728c34; end: 106728c47;  */

void FUN_106728c34(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 106728c48; end: 106728c4f;  */

void FUN_106728c48(void)

{
  return;
}



/* Entry: 106728c50; end: 106728c83;  */

void FUN_106728c50(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110937720;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 106728c84; end: 106728cc3;  */

void FUN_106728c84(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110937720;
  param_2[1] = uVar1;
  return;
}



/* Entry: 106728cc4; end: 106728cff;  */

long FUN_106728cc4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110937790);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 106728d00; end: 106728d0b;  */

undefined ** FUN_106728d00(void)

{
  return &PTR_DAT_110937790;
}



/* Entry: 106728d0c; end: 106728f3b;  */

void FUN_106728d0c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  func_0x00010c0cfdc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3812000000;
  pcStack_80 = FUN_10672562c;
  uStack_78 = 0x106725638;
  pcStack_70 = "";
  uStack_68 = 0;
  func_0x00010c0be920();
  uVar5 = *(undefined1 *)(puStack_58 + 3);
  uVar1 = *(undefined4 *)(puStack_90 + 6);
  __Block_object_dispose(&uStack_98,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x28);
  func_0x000100c3b11c(param_1,6,uVar1);
  func_0x000100ab13ac(param_1,4,uVar5,0);
  func_0x0001001ce548(param_1,(iVar2 - iVar3) + iVar4);
  return;
}



/* Entry: 106728f3c; end: 10672911f;  */

ulong FUN_106728f3c(undefined8 param_1,ulong param_2,ulong param_3)

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
  undefined8 uVar10;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0ed100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_106729468(param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c2480c0(param_3);
  uVar6 = param_3;
  func_0x00010bf4dac0(param_3);
  func_0x00010c0852a0(param_3);
  uVar7 = param_3;
  uVar10 = param_1;
  func_0x00010c2902c0();
  uVar8 = param_3;
  func_0x00010c2902e0(param_3);
  uVar9 = param_3;
  func_0x00010c097520(param_3);
  func_0x00010c097500(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce170(param_2,4,uVar4,0);
  func_0x0001001ce290(uVar10,0,param_2,0x14);
  func_0x0001001ce354(param_2,0x12,uVar9,0);
  func_0x0001001ce290(param_1,0,param_2,0xc);
  func_0x0001001ce354(param_2,10,uVar6,0);
  func_0x000100c3b11c(param_2,8,uVar5 >> 0x20);
  func_0x000100ab13ac(param_2,0x10,uVar8,0);
  func_0x000100ab13ac(param_2,0xe,uVar7 & 0xffffffff,0);
  func_0x000100ab13ac(param_2,6,(uint)uVar5 & 0xff,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106729120; end: 106729133;  */

void FUN_106729120(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x18) = 1;
  uVar2 = *(undefined8 *)(puVar1 + 0x30);
  FUN_1067256a4(uVar2,param_2);
  *(int *)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x30) = (int)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106729134; end: 10672919b;  */

void FUN_106729134(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1067256a4(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10672919c; end: 106729203;  */

void FUN_10672919c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_106725cf0(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106729204; end: 10672926b;  */

void FUN_106729204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1067260d4(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10672926c; end: 1067292d3;  */

void FUN_10672926c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1067264e4(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067292d4; end: 10672933b;  */

void FUN_1067292d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 5;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_106727afc(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10672933c; end: 1067293a3;  */

void FUN_10672933c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 6;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_106728150(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067293a4; end: 1067293ab;  */

void FUN_1067293a4(void)

{
  return;
}



/* Entry: 1067293ac; end: 1067293df;  */

void FUN_1067293ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109377d0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1067293e0; end: 10672941f;  */

void FUN_1067293e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109377d0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 106729420; end: 10672945b;  */

long FUN_106729420(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110937840);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10672945c; end: 106729467;  */

undefined ** FUN_10672945c(void)

{
  return &PTR_DAT_110937840;
}



/* Entry: 106729468; end: 10672958b;  */

undefined8 FUN_106729468(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puStack_c8 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_c0 = &uStack_78;
  uStack_78 = 0;
  uStack_68 = 0x3812000000;
  pcStack_60 = FUN_10672562c;
  uStack_58 = 0x106725638;
  pcStack_50 = "";
  uStack_48 = 0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10672958c;
  puStack_98 = &UNK_110937870;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106729650;
  puStack_d0 = &UNK_1109378a0;
  uStack_b8 = param_1;
  puStack_90 = puStack_c8;
  puStack_88 = puStack_c0;
  uStack_80 = param_1;
  puStack_70 = puStack_c0;
  puStack_38 = puStack_c8;
  func_0x00010c0bdc60(param_2,param_2,&puStack_b0,&puStack_e8);
  uVar1 = *(undefined4 *)(puStack_38 + 3);
  uVar2 = *(undefined4 *)(puStack_70 + 6);
  __Block_object_dispose(&uStack_78,8);
  __Block_object_dispose(&uStack_40,8);
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 10672958c; end: 10672964f;  */

void FUN_10672958c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c151e60(param_2);
  *(undefined1 *)(lVar4 + 0x46) = 1;
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  func_0x0001001ce354(lVar4,4,uVar3,0);
  func_0x0001001ce548(lVar4,((int)uVar5 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106729650; end: 1067296ab;  */

void FUN_106729650(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  lVar1 = *(long *)(param_1 + 0x30);
  *(undefined1 *)(lVar1 + 0x46) = 1;
  func_0x0001001ce548(lVar1,(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x30)) +
                            *(int *)(lVar1 + 0x28));
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)lVar1;
  return;
}



/* Entry: 1067296ac; end: 10672971b;  */

void FUN_1067296ac(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10672971c; end: 10672990b;  */

long FUN_10672971c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010bf4bc60(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3812000000;
  pcStack_90 = FUN_10672562c;
  uStack_88 = 0x106725638;
  pcStack_80 = "";
  uStack_78 = 0;
  func_0x00010c0be2e0();
  uVar1 = *(uint *)(puStack_68 + 3);
  uVar2 = *(undefined4 *)(puStack_a0 + 6);
  __Block_object_dispose(&uStack_a8,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bf8d1c0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,4,uVar6,0);
  func_0x000100c3b11c(param_1,8,uVar2);
  func_0x000100ab13ac(param_1,6,uVar1 & 0xff,0);
  func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10672990c; end: 10672991f;  */

void FUN_10672990c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar6 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(puVar6 + 0x20) + 8) + 0x18) = 1;
  lVar8 = *(long *)(puVar6 + 0x30);
  uVar7 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3812000000;
  pcStack_b0 = FUN_10672562c;
  uStack_a8 = 0x106725638;
  pcStack_a0 = "";
  uStack_98 = 0;
  func_0x00010c0be300();
  uVar1 = *(uint *)(puStack_88 + 3);
  uVar2 = *(undefined4 *)(puStack_c0 + 6);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uVar7);
  *(undefined1 *)(lVar8 + 0x46) = 1;
  iVar3 = *(int *)(lVar8 + 0x20);
  iVar4 = *(int *)(lVar8 + 0x30);
  iVar5 = *(int *)(lVar8 + 0x28);
  func_0x000100c3b11c(lVar8,6,uVar2);
  func_0x000100ab13ac(lVar8,4,uVar1 & 0xff,0);
  func_0x0001001ce548(lVar8,(iVar3 - iVar4) + iVar5);
  *(int *)(*(long *)(*(long *)(puVar6 + 0x28) + 8) + 0x30) = (int)lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106729920; end: 106729b0b;  */

void FUN_106729920(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar7 = *(long *)(param_1 + 0x30);
  uVar6 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3812000000;
  pcStack_a0 = FUN_10672562c;
  uStack_98 = 0x106725638;
  pcStack_90 = "";
  uStack_88 = 0;
  func_0x00010c0be300();
  uVar1 = *(uint *)(puStack_78 + 3);
  uVar2 = *(undefined4 *)(puStack_b0 + 6);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uVar6);
  *(undefined1 *)(lVar7 + 0x46) = 1;
  iVar3 = *(int *)(lVar7 + 0x20);
  iVar4 = *(int *)(lVar7 + 0x30);
  iVar5 = *(int *)(lVar7 + 0x28);
  func_0x000100c3b11c(lVar7,6,uVar2);
  func_0x000100ab13ac(lVar7,4,uVar1 & 0xff,0);
  func_0x0001001ce548(lVar7,(iVar3 - iVar4) + iVar5);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106729b0c; end: 106729c2b;  */

void FUN_106729b0c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar7 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  FUN_1067254fc(uVar7,uVar4);
  uVar6 = param_2;
  func_0x00010bfe5400(param_2);
  *(undefined1 *)(uVar7 + 0x46) = 1;
  iVar1 = *(int *)(uVar7 + 0x20);
  iVar2 = *(int *)(uVar7 + 0x30);
  iVar3 = *(int *)(uVar7 + 0x28);
  func_0x0001001ce354(uVar7,6,uVar6,0);
  func_0x0001001ce2e4(uVar7,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(uVar7,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106729c2c; end: 106729cef;  */

void FUN_106729c2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c106260(param_2);
  *(undefined1 *)(lVar4 + 0x46) = 1;
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  func_0x0001001ce354(lVar4,4,uVar3,0);
  func_0x0001001ce548(lVar4,((int)uVar5 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106729cf0; end: 106729dab;  */

void FUN_106729cf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar4 = *(ulong *)(param_1 + 0x30);
  func_0x00010bfe8f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  FUN_1067254fc(uVar4,param_2);
  *(undefined1 *)(uVar4 + 0x46) = 1;
  uVar1 = *(undefined8 *)(uVar4 + 0x28);
  uVar2 = *(undefined8 *)(uVar4 + 0x30);
  uVar5 = *(undefined8 *)(uVar4 + 0x20);
  func_0x0001001ce2e4(uVar4,4,uVar3 & 0xffffffff);
  func_0x0001001ce548(uVar4,((int)uVar5 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar4;
  return;
}



/* Entry: 106729dac; end: 106729db3;  */

void FUN_106729dac(void)

{
  return;
}



/* Entry: 106729db4; end: 106729de7;  */

void FUN_106729db4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109379a0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 106729de8; end: 106729e27;  */

void FUN_106729de8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109379a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 106729e28; end: 106729e63;  */

long FUN_106729e28(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110937a10);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 106729e64; end: 106729e6f;  */

undefined ** FUN_106729e64(void)

{
  return &PTR_DAT_110937a10;
}



/* Entry: 106729e70; end: 106729f27;  */

undefined8 FUN_106729e70(void)

{
  int iVar1;
  
  if ((bRam000000011381adf0 & 1) == 0) {
    iVar1 = 0x1381adf0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381ad88 = 0xe;
      puRam000000011381ad90 = &UNK_10f38efdd;
      uRam000000011381ad98 = 0x100;
      pcRam000000011381ada0 = FUN_106729f28;
      pcRam000000011381ada8 = FUN_106729f60;
      ppuRam000000011381ad80 = &PTR_SUB_110862958;
      uRam000000011381adc0 = 0;
      uRam000000011381adb8 = 0;
      uRam000000011381add0 = 0;
      uRam000000011381adc8 = 0;
      uRam000000011381ade0 = 0;
      uRam000000011381add8 = 0;
      uRam000000011381ade8 = 0;
      ___cxa_atexit(&SUB_1050077c0,0x11381ad80,0x100000000);
      ___cxa_guard_release(0x11381adf0);
    }
  }
  return 0x11381ad80;
}



/* Entry: 106729f28; end: 106729f5f;  */

undefined8 FUN_106729f28(uint *param_1,undefined1 *param_2)

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



/* Entry: 106729f60; end: 106729fb3;  */

undefined8 FUN_106729f60(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf4e080(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106729fb4; end: 10672a06f;  */

undefined8 FUN_106729fb4(void)

{
  int iVar1;
  
  if ((bRam000000011381ae68 & 1) == 0) {
    iVar1 = 0x1381ae68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381ae00 = 0xe;
      puRam000000011381ae08 = &UNK_10f38efe5;
      uRam000000011381ae10 = 0x1010000;
      pcRam000000011381ae18 = FUN_10672a070;
      pcRam000000011381ae20 = FUN_10672a0a8;
      ppuRam000000011381adf8 = &PTR_SUB_110862958;
      uRam000000011381ae38 = 0;
      uRam000000011381ae30 = 0;
      uRam000000011381ae48 = 0;
      uRam000000011381ae40 = 0;
      uRam000000011381ae58 = 0;
      uRam000000011381ae50 = 0;
      uRam000000011381ae60 = 0;
      ___cxa_atexit(&SUB_1050077c0,0x11381adf8,0x100000000);
      ___cxa_guard_release(0x11381ae68);
    }
  }
  return 0x11381adf8;
}



/* Entry: 10672a070; end: 10672a0a7;  */

undefined8 FUN_10672a070(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x14 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 10672a0a8; end: 10672a0fb;  */

undefined8 FUN_10672a0a8(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c246a00(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10672a0fc; end: 10672a15f;  */

undefined ** FUN_10672a0fc(void)

{
  int iVar1;
  
  if ((bRam000000011381ae70 & 1) == 0) {
    iVar1 = 0x1381ae70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&SUB_105004938,&PTR_PTR_11315aac0,0x100000000);
      ___cxa_guard_release(0x11381ae70);
    }
  }
  return &PTR_PTR_11315aac0;
}



/* Entry: 10672a160; end: 10672a1e7;  */

void FUN_10672a160(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 0x17) || (puVar1[0xb] == 0)) {
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



/* Entry: 10672a1e8; end: 10672a273;  */

void FUN_10672a1e8(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfa3d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfa3d80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10672a274; end: 10672a30b;  */

long FUN_10672a274(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((10 < *puVar2) && ((ulong)puVar2[5] != 0)) &&
      (0xc < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[5]) == '\x01')) &&
     ((ulong)puVar2[6] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[6]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 10672a30c; end: 10672a317; +[SCLensExplorerCacheFeedData table] */

undefined * FUN_10672a30c(void)

{
  return &UNK_10f38effe;
}



/* Entry: 10672a318; end: 10672a9ff; +[SCLensExplorerCacheFeedData immutableObjectParse:bufferSize:] */

void FUN_10672a318(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  int *piVar5;
  int *piVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined *puVar18;
  uint *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uStack_70;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126ccdf0;
  _objc_alloc();
  lVar11 = (long)*piVar1;
  uVar9 = *(ushort *)((long)piVar1 - lVar11);
  if (uVar9 < 5) {
    puVar16 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
    uStack_70 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar1 - lVar11))[2];
    if (uVar13 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar19 = (uint *)((long)piVar1 + uVar13);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar19 + (ulong)*puVar19 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - lVar11);
    }
    if (uVar9 < 7) {
      uStack_70 = 0;
    }
    else {
      uVar13 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar11));
      if (uVar13 == 0) {
        uStack_70 = 0;
      }
      else {
        uStack_70 = *(undefined8 *)((long)piVar1 + uVar13);
      }
      if ((8 < uVar9) && (uVar13 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar11)), uVar13 != 0)) {
        puVar19 = (uint *)((long)piVar1 + uVar13);
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar19 + (ulong)*puVar19 + 4);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10672a430;
      }
    }
    puVar16 = (undefined *)0x0;
  }
LAB_10672a430:
  piVar5 = piVar1;
  FUN_10672a274();
  piVar6 = piVar1;
  func_0x00010672a2c0();
  puVar21 = PTR_PTR_1126cce10;
  if (piVar5 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    if (piVar6 != (int *)0x0) {
      puVar7 = PTR_PTR_1126cce18;
      _objc_alloc(PTR_PTR_1126cce18);
      if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
         (uVar13 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar13 == 0)) {
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar19 = (uint *)((long)piVar6 + uVar13);
        puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar19 + (ulong)*puVar19 + 4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c04ee40(puVar7,param_2,puVar22);
      _objc_release(puVar22);
      func_0x00010c25e3c0(puVar21,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10672a6bc;
    }
  }
  else {
    puVar7 = PTR_PTR_1126cce08;
    _objc_alloc(PTR_PTR_1126cce08);
    lVar11 = (long)*piVar5;
    uVar9 = *(ushort *)((long)piVar5 - lVar11);
    if (uVar9 < 5) {
      puVar22 = (undefined *)0x0;
LAB_10672a680:
      puVar20 = (undefined *)0x0;
    }
    else {
      uVar13 = (ulong)((ushort *)((long)piVar5 - lVar11))[2];
      if (uVar13 == 0) {
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar19 = (uint *)((long)piVar5 + uVar13);
        puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar19 + (ulong)*puVar19 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = (long)*piVar5;
        uVar9 = *(ushort *)((long)piVar5 - lVar11);
      }
      if ((uVar9 < 7) || (uVar13 = (ulong)*(ushort *)((long)piVar5 + (6 - lVar11)), uVar13 == 0))
      goto LAB_10672a680;
      puVar2 = (uint *)((long)piVar5 + uVar13);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          uVar13 = (ulong)*puVar19;
          puVar20 = PTR_PTR_1126cce20;
          _objc_alloc(PTR_PTR_1126cce20);
          lVar11 = uVar13 - (long)*(int *)((long)puVar19 + uVar13);
          if ((*(ushort *)((long)puVar19 + lVar11) < 5) ||
             (uVar10 = (ulong)*(ushort *)((long)puVar19 + lVar11 + 4), uVar10 == 0)) {
            puVar18 = (undefined *)0x0;
          }
          else {
            lVar11 = uVar13 + uVar10;
            puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar19 +
                                (ulong)*(uint *)((long)puVar19 + lVar11) + lVar11 + 4);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c04ee00(puVar20,param_2,puVar18);
          _objc_release(puVar18);
          func_0x00010befa120(puVar8,param_2,puVar20);
          _objc_release(puVar20);
          puVar19 = puVar19 + 1;
        } while (puVar19 != puVar2 + 1 + *puVar2);
      }
      puVar20 = puVar8;
      func_0x00010bf51e00(puVar8);
      _objc_release(puVar8);
    }
    func_0x00010bffd0e0(puVar7,param_2,puVar22,puVar20);
    _objc_release(puVar20);
    _objc_release(puVar22);
    func_0x00010bf33300(puVar21,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
LAB_10672a6bc:
    _objc_release(puVar7);
    puVar7 = puVar21;
  }
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
     (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar13 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar19 = (uint *)((long)piVar1 + uVar13);
    lVar11 = (long)puVar19 + (ulong)*puVar19;
  }
  FUN_10672520c(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)*piVar1;
  puVar14 = (ushort *)((long)piVar1 - lVar12);
  uVar9 = *puVar14;
  if (uVar9 < 0x11) {
    uVar17 = 0;
    bVar3 = false;
  }
  else {
    if ((ulong)puVar14[8] == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)piVar1 + (ulong)puVar14[8]) != '\0';
    }
    if (uVar9 < 0x13) {
      uVar17 = 0;
    }
    else {
      if ((ulong)puVar14[9] == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined4 *)((long)piVar1 + (ulong)puVar14[9]);
      }
      if ((0x14 < uVar9) && (0x16 < uVar9)) {
        if ((ulong)puVar14[0xb] == 0) {
          puVar21 = (undefined *)0x0;
        }
        else {
          puVar19 = (uint *)((long)piVar1 + (ulong)puVar14[0xb]);
          puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar19 + (ulong)*puVar19 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = (long)*piVar1;
          uVar9 = *(ushort *)((long)piVar1 - lVar12);
        }
        lVar12 = -lVar12;
        if (uVar9 < 0x19) {
          puVar20 = (undefined *)0x0;
          puVar22 = (undefined *)0x0;
        }
        else {
          uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 0x18);
          if (uVar13 == 0) {
            puVar22 = (undefined *)0x0;
          }
          else {
            puVar19 = (uint *)((long)piVar1 + uVar13);
            puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar19 + (ulong)*puVar19 + 4);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = -(long)*piVar1;
            uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
          }
          if ((uVar9 < 0x1b) ||
             (uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 0x1a), uVar13 == 0)) {
            puVar20 = (undefined *)0x0;
          }
          else {
            puVar19 = (uint *)((long)piVar1 + uVar13);
            puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar19 + (ulong)*puVar19 + 4);
            _objc_retainAutoreleasedReturnValue();
          }
        }
        goto LAB_10672a790;
      }
    }
  }
  puVar20 = (undefined *)0x0;
  puVar22 = (undefined *)0x0;
  puVar21 = (undefined *)0x0;
LAB_10672a790:
  func_0x00010c01b580(puVar4,param_2,puVar15,uStack_70,puVar16,puVar7,lVar11,bVar3,uVar17);
  _objc_release(puVar20);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(lVar11);
  _objc_release(puVar7);
  _objc_release(puVar16);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10672aa00; end: 10672aa13; +[SCLensExplorerCacheFeedData objectClassFunctionPointer] */

undefined1  [16] FUN_10672aa00(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_10672aa60;
  auVar1._0_8_ = FUN_10672aa14;
  return auVar1;
}



/* Entry: 10672aa14; end: 10672aa5f;  */

void FUN_10672aa14(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf265092;
  _strcmp("context",param_1);
  if (iVar1 != 0) {
    _strcmp(&DAT_10f38efef,param_1);
  }
  return;
}



/* Entry: 10672aa60; end: 10672ab7b;  */

bool FUN_10672aa60(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 1) {
    func_0x0001001b9e08(param_2,&UNK_10f38f076);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x17) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb], uVar5 == 0)) {
      _sqlite3_bind_null(param_2,2);
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar5);
      puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
      _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
    }
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x0001001b9e08(param_2,&UNK_10f38f01d);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar5);
    }
    _sqlite3_bind_int64(param_2,2,uVar4);
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 10672ab7c; end: 10672ad7f;  */

long * FUN_10672ab7c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,undefined1 param_8,undefined4 param_9,undefined4 param_10,
                    long param_11,long param_12,long param_13,long param_14)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126f2c78;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_2;
      _objc_retain(param_3);
      lVar2 = plVar1[4];
      plVar1[4] = param_3;
      _objc_release(lVar2);
      plVar1[5] = param_4;
      _objc_retain(param_5);
      lVar2 = plVar1[6];
      plVar1[6] = param_5;
      _objc_release(lVar2);
      _objc_retain(param_6);
      lVar2 = plVar1[7];
      plVar1[7] = param_6;
      _objc_release(lVar2);
      _objc_retain(param_7);
      lVar2 = plVar1[8];
      plVar1[8] = param_7;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_8;
      *(undefined4 *)(plVar1 + 3) = param_9;
      plVar1[9] = param_11;
      _objc_retain(param_12);
      lVar2 = plVar1[10];
      plVar1[10] = param_12;
      _objc_release(lVar2);
      _objc_retain(param_13);
      lVar2 = plVar1[0xb];
      plVar1[0xb] = param_13;
      _objc_release(lVar2);
      _objc_retain(param_14);
      lVar2 = plVar1[0xc];
      plVar1[0xc] = param_14;
      _objc_release(lVar2);
    }
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 10672ad80; end: 10672b2eb;  */

void FUN_10672ad80(undefined *param_1)

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
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar13,&UNK_10f38f0dd);
        if (puVar13 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bfe5ec0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar13,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar13;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar13;
            _sqlite3_column_int64(puVar13,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126ccdf0);
            _sqlite3_column_blob(puVar13,1);
            _sqlite3_column_bytes(puVar13,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar13);
            if (puVar3 == (undefined *)0x0) goto LAB_10672b1cc;
            puVar13 = PTR_PTR_1126ccc70;
            _objc_alloc(PTR_PTR_1126ccc70);
            puVar2 = puVar3;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf4e080(puVar3);
            puVar5 = puVar3;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bf332e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c130180();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010c070480(puVar3);
            puVar9 = puVar3;
            func_0x00010bfa3660();
            func_0x00010c246a00();
            puVar10 = puVar3;
            func_0x00010bfa3d80();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar3;
            func_0x00010c260ea0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar3;
            func_0x00010bfe5be0();
            _objc_retainAutoreleasedReturnValue();
            FUN_10672ab7c(puVar13,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,(int)puVar9);
            goto LAB_10672af2c;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar13 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126ccdf0);
      puVar3 = puVar13;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar13);
      if (puVar3 != (undefined *)0x0) {
        puVar13 = PTR_PTR_1126ccc70;
        _objc_alloc(PTR_PTR_1126ccc70);
        puVar2 = puVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf4e080(puVar3);
        puVar5 = puVar3;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf332e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c130180();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c070480(puVar3);
        puVar9 = puVar3;
        func_0x00010bfa3660();
        func_0x00010c246a00();
        puVar10 = puVar3;
        func_0x00010bfa3d80();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar3;
        func_0x00010c260ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x00010bfe5be0();
        _objc_retainAutoreleasedReturnValue();
        FUN_10672ab7c(puVar13,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,(int)puVar9);
LAB_10672af2c:
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar2);
        param_1 = puVar3;
        goto LAB_10672b1d4;
      }
LAB_10672b1cc:
      param_1 = (undefined *)0x0;
    }
  }
  puVar13 = (undefined *)0x0;
LAB_10672b1d4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10672b2ec; end: 10672b35f;  */

void FUN_10672b2ec(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10672ad80();
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



/* Entry: 10672b360; end: 10672b7ef;  */

void FUN_10672b360(undefined *param_1,undefined1 *param_2)

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
  undefined *puVar12;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ccc70;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_10672ad80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar12 = PTR_PTR_1126ccc70;
    _objc_retain(param_1);
    _objc_opt_self(puVar12);
    puVar12 = PTR_PTR_1126ccc70;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf4e080(param_1);
      puVar4 = param_1;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010bf332e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c130180();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c070480();
      puVar8 = param_1;
      func_0x00010bfa3660();
      func_0x00010c246a00();
      puVar9 = param_1;
      func_0x00010bfa3d80();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1;
      func_0x00010c260ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_1;
      func_0x00010bfe5be0();
      _objc_retainAutoreleasedReturnValue();
      FUN_10672ab7c(puVar12,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,
                    (ulong)puVar7 & 0xffffffff,(int)puVar8);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar12 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar12 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010bf4e080();
    *(undefined **)(puVar1 + 0x28) = puVar12;
    puVar12 = param_1;
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010bf332e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010c130180(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010c070480();
    puVar1[0x14] = (char)puVar12;
    puVar12 = param_1;
    func_0x00010bfa3660();
    *(int *)(puVar1 + 0x18) = (int)puVar12;
    puVar12 = param_1;
    func_0x00010c246a00();
    *(undefined **)(puVar1 + 0x48) = puVar12;
    puVar12 = param_1;
    func_0x00010bfa3d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010c260ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010bfe5be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    _objc_retain(puVar1);
    puVar12 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10672b7f0; end: 10672b87b;  */

void FUN_10672b7f0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ccdf0;
    _objc_alloc(PTR_PTR_1126ccdf0);
    func_0x00010c01b580();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10672b87c; end: 10672b8e7; -[SCLensExplorerCacheFeedDataChangeRequest .cxx_destruct] */

void FUN_10672b87c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10672b8e8; end: 10672b8f3; -[SCLensExplorerCacheFeedDataChangeRequest table] */

undefined * FUN_10672b8e8(void)

{
  return &UNK_10f38effe;
}



/* Entry: 10672b8f4; end: 10672ba07; -[SCLensExplorerCacheFeedDataChangeRequest createTableWithSQLite:] */

void FUN_10672b8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddde036,0x94,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddde0ca,0x74,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10ddde13e,0x8d,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddde1cb,0x81,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10ddde24c,0xa2,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 10672ba08; end: 10672c1b3; -[SCLensExplorerCacheFeedDataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10672ba08(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_10672b7f0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_10672c1b4(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010bf636c0();
    func_0x0001050da3a4();
    _objc_release(puVar12);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f38f1fc);
    if (lVar7 == 0) goto LAB_10672c0dc;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
    puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_10672c0dc;
    uVar13 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      lVar7 = param_3;
      func_0x0001001b9e08(param_3,&UNK_10f38f01d);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)((long)piVar1 + uVar11);
      }
      _sqlite3_bind_int64(lVar7,2,uVar10);
      _sqlite3_step();
      if ((int)lVar7 != 0x65) goto LAB_10672c0dc;
    }
    if (((uint)puVar8 >> 8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f38f076);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x17) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb], uVar11 == 0)) {
        _sqlite3_bind_null(param_3,2);
      }
      else {
        puVar14 = (uint *)((long)piVar1 + uVar11);
        puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
        _sqlite3_bind_text(param_3,2,puVar2 + 1,*puVar2,0);
      }
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_10672c0dc;
    }
    *(undefined8 *)(param_1 + 8) = uVar13;
    func_0x00010c1eeb60(puVar6);
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126ccdf0);
    func_0x00010c21c9a0(puVar12);
LAB_10672c0b4:
    _objc_release(puVar12);
    _objc_retain(puVar6);
    puVar12 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f38f12d);
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            lVar7 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f38f167);
            if (lVar7 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar7 != 0x65) goto LAB_10672bb68;
            }
            func_0x0001001b9e08(param_3,&UNK_10f38f1ae);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_10672bb68;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126ccdf0);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar12);
            _objc_release(puVar6);
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10672c0e8;
          }
        }
      }
LAB_10672bb68:
      puVar12 = (undefined *)0x0;
      goto LAB_10672c0e8;
    }
    FUN_10672b7f0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_10672c1b4(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    uVar13 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f38f247);
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar7,2,uVar13);
      piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
      puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
      _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar7 == 0x65) {
        puVar12 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126ccdf0);
        puVar8 = puVar12;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        puVar12 = puVar8;
        func_0x00010bf4e080();
        puVar5 = puVar6;
        func_0x00010bf4e080();
        if (puVar12 == puVar5) {
LAB_10672beec:
          puVar12 = puVar8;
          func_0x00010bfa3d80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010bfa3d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar12);
          _objc_retain(puVar5);
          if (puVar12 != (undefined *)0x0 || puVar5 != (undefined *)0x0) {
            if ((puVar12 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
              _objc_release(puVar5);
              _objc_release(puVar12);
              _objc_release(puVar5);
              _objc_release(puVar12);
            }
            else {
              puVar9 = puVar12;
              func_0x00010c0720c0();
              _objc_release(puVar5);
              _objc_release(puVar12);
              _objc_release(puVar5);
              _objc_release(puVar12);
              if (((ulong)puVar9 & 1) != 0) goto LAB_10672c070;
            }
            func_0x0001001b9e08(param_3,&UNK_10f38f2f5);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x17) ||
               (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb], uVar11 == 0)) {
              _sqlite3_bind_null(param_3,1);
            }
            else {
              puVar14 = (uint *)((long)piVar1 + uVar11);
              puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
              _sqlite3_bind_text(param_3,1,puVar2 + 1,*puVar2,0);
            }
            _sqlite3_bind_int64(param_3,2,uVar13);
            _sqlite3_step();
            if ((int)param_3 != 0x65) goto LAB_10672c0cc;
          }
LAB_10672c070:
          _objc_release(puVar8);
          _objc_release(puVar6);
          puVar12 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126ccdf0);
          func_0x00010c21c9a0(puVar12);
          goto LAB_10672c0b4;
        }
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f38f29c);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)((long)piVar1 + uVar11);
        }
        _sqlite3_bind_int64(lVar7,1,uVar10);
        _sqlite3_bind_int64(lVar7,2,uVar13);
        _sqlite3_step();
        if ((int)lVar7 == 0x65) goto LAB_10672beec;
LAB_10672c0cc:
        _objc_release(puVar8);
      }
    }
    _objc_release(puVar6);
LAB_10672c0dc:
    puVar12 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_10672c0e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10672c1b4; end: 10672c63f;  */

ulong FUN_10672c1b4(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
  ulong uVar18;
  ulong uVar19;
  ulong uStack_158;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010bf332e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3812000000;
  pcStack_a8 = FUN_10672c770;
  uStack_a0 = 0x10672c77c;
  pcStack_98 = "";
  uStack_90 = 0;
  func_0x00010c0bcf40();
  uVar1 = *(uint *)(puStack_80 + 3);
  uVar2 = *(undefined4 *)(puStack_b8 + 6);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c130180();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uStack_158 = 0;
  }
  else {
    uVar7 = param_2;
    func_0x00010c130180(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = param_1;
    FUN_106728f3c(param_1,uVar7);
    _objc_release(uVar7);
    uStack_158 = uStack_158 & 0xffffffff;
  }
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10672c640(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010bf4e080(param_2);
  uVar9 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_10672c640(param_1,uVar9);
  uVar11 = param_2;
  func_0x00010c070480();
  uVar12 = param_2;
  func_0x00010bfa3660(param_2);
  uVar13 = param_2;
  func_0x00010c246a00(param_2);
  uVar14 = param_2;
  func_0x00010bfa3d80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  FUN_10672c640(param_1,uVar14);
  uVar16 = param_2;
  func_0x00010c260ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  FUN_10672c640(param_1,uVar16);
  uVar18 = param_2;
  func_0x00010bfe5be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  FUN_10672c640(param_1,uVar18);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0x14,uVar13,0);
  func_0x0001001ce1c8(param_1,6,uVar8,0);
  func_0x0001001ce2e4(param_1,0x1a,uVar19 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x18,uVar17 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x16,uVar15 & 0xffffffff);
  func_0x0001001ce354(param_1,0x12,uVar12,0);
  FUN_1067296ac(param_1,0xe,uStack_158);
  func_0x000100c3b11c(param_1,0xc,uVar2);
  func_0x0001001ce2e4(param_1,8,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar7 & 0xffffffff);
  func_0x000100ab13ac(param_1,0x10,uVar11 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,10,uVar1 & 0xff,0);
  func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10672c640; end: 10672c76f;  */

undefined8 FUN_10672c640(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10672c720;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_10672c720;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10672c6e0;
    param_1 = 0;
  }
  else {
LAB_10672c6e0:
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
LAB_10672c720:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10672c770; end: 10672c77f;  */

void FUN_10672c770(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 10672c780; end: 10672cc8b;  */

void FUN_10672c780(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  undefined ***pppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar19 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110937ab0;
  pcStack_108 = FUN_10672cd48;
  pppuStack_f8 = &ppuStack_110;
  lVar12 = param_2;
  func_0x00010c25e3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(lVar12);
  lVar6 = lVar12;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  puVar21 = (undefined4 *)0x0;
  puVar14 = (undefined4 *)0x0;
  if (lVar6 != 0) {
    puVar13 = (undefined4 *)0x0;
    do {
      lVar16 = 0;
      puVar22 = puVar21;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar12);
        }
        uVar18 = *(undefined8 *)(lVar16 * 8);
        _objc_retain(uVar18);
        _objc_retain(uVar18);
        uStack_118 = uVar18;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_10672cb98;
        }
        pppuVar7 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,uVar19,&uStack_118);
        _objc_release(uStack_118);
        if (puVar14 < puVar13) {
          *puVar14 = (int)pppuVar7;
          puVar21 = puVar22;
        }
        else {
          lVar20 = (long)puVar14 - (long)puVar22;
          uVar10 = (lVar20 >> 2) + 1;
          if (uVar10 >> 0x3e != 0) {
            FUN_10672cde8();
LAB_10672cb98:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10672cb9c);
            (*pcVar5)();
          }
          uVar15 = (long)puVar13 - (long)puVar22 >> 1;
          if (uVar15 <= uVar10) {
            uVar15 = uVar10;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar13 - (long)puVar22)) {
            uVar15 = 0x3fffffffffffffff;
          }
          if (uVar15 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_10672cb98;
          }
          lVar8 = uVar15 << 2;
          __Znwm();
          puVar14 = (undefined4 *)(lVar8 + lVar20);
          puVar13 = (undefined4 *)(lVar8 + uVar15 * 4);
          puVar21 = puVar14 + -(lVar20 >> 2);
          *puVar14 = (int)pppuVar7;
          _memcpy(puVar21,puVar22,lVar20);
          if (puVar22 != (undefined4 *)0x0) {
            __ZdlPv(puVar22);
          }
        }
        puVar14 = puVar14 + 1;
        _objc_release(uVar18);
        lVar16 = lVar16 + 1;
        puVar22 = puVar21;
      } while (lVar6 != lVar16);
      lVar6 = lVar12;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar12);
  _objc_release(lVar12);
  _objc_release(lVar12);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar11 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_10672c9e0;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar11))();
LAB_10672c9e0:
  lVar11 = param_2;
  func_0x00010bf334a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar19;
  FUN_10672c640(uVar19,lVar11);
  uVar10 = (long)puVar14 - (long)puVar21;
  puVar13 = (undefined4 *)&UNK_10ddde527;
  if (uVar10 != 0) {
    puVar13 = puVar21;
  }
  *(undefined1 *)(uVar19 + 0x46) = 1;
  func_0x0001001cddd0(uVar19,uVar10,4);
  func_0x0001001cddd0(uVar19,uVar10,4);
  if (puVar21 != puVar14) {
    lVar12 = (long)uVar10 >> 2;
    do {
      iVar4 = puVar13[lVar12 + -1];
      func_0x0001001ce088(uVar19,4);
      func_0x0001001ce0bc(uVar19,(((*(int *)(uVar19 + 0x20) - *(int *)(uVar19 + 0x30)) +
                                  *(int *)(uVar19 + 0x28)) - iVar4) + 4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(undefined1 *)(uVar19 + 0x46) = 0;
  uVar9 = uVar19;
  func_0x0001001ce0bc(uVar19,uVar10 >> 2);
  *(undefined1 *)(uVar19 + 0x46) = 1;
  iVar4 = *(int *)(uVar19 + 0x20);
  iVar2 = *(int *)(uVar19 + 0x30);
  iVar3 = *(int *)(uVar19 + 0x28);
  if ((int)uVar9 != 0) {
    func_0x0001001ce088(uVar19,4);
    func_0x0001001ce354(uVar19,6,(((*(int *)(uVar19 + 0x20) - *(int *)(uVar19 + 0x30)) +
                                  *(int *)(uVar19 + 0x28)) - (int)uVar9) + 4,0);
  }
  func_0x0001001ce2e4(uVar19,4,uVar15 & 0xffffffff);
  uVar10 = (ulong)(uint)((iVar4 - iVar2) + iVar3);
  func_0x0001001ce548(uVar19,uVar10);
  _objc_release(lVar11);
  if (puVar21 != (undefined4 *)0x0) {
    __ZdlPv(puVar21);
  }
  lVar11 = param_2;
  _objc_release();
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar19;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puVar21 != (undefined4 *)0x0) {
      __ZdlPv(puVar21);
    }
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume();
    *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0x20) + 8) + 0x18) = 2;
    uVar15 = *(ulong *)(lVar11 + 0x30);
    func_0x00010c25ea40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar15;
    FUN_10672c640(uVar15,uVar10);
    *(undefined1 *)(uVar15 + 0x46) = 1;
    uVar18 = *(undefined8 *)(uVar15 + 0x28);
    uVar1 = *(undefined8 *)(uVar15 + 0x30);
    uVar17 = *(undefined8 *)(uVar15 + 0x20);
    func_0x0001001ce2e4(uVar15,4,uVar19 & 0xffffffff);
    func_0x0001001ce548(uVar15,((int)uVar17 - (int)uVar1) + (int)uVar18);
    _objc_release(uVar10);
    *(int *)(*(long *)(*(long *)(lVar11 + 0x28) + 8) + 0x30) = (int)uVar15;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10672cc8c; end: 10672cd47;  */

void FUN_10672cc8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar4 = *(ulong *)(param_1 + 0x30);
  func_0x00010c25ea40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  FUN_10672c640(uVar4,param_2);
  *(undefined1 *)(uVar4 + 0x46) = 1;
  uVar1 = *(undefined8 *)(uVar4 + 0x28);
  uVar2 = *(undefined8 *)(uVar4 + 0x30);
  uVar5 = *(undefined8 *)(uVar4 + 0x20);
  func_0x0001001ce2e4(uVar4,4,uVar3 & 0xffffffff);
  func_0x0001001ce548(uVar4,((int)uVar5 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar4;
  return;
}



/* Entry: 10672cd48; end: 10672cde7;  */

ulong FUN_10672cd48(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010c25e3e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_10672c640(param_1,param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001001ce2e4(param_1,4,uVar3 & 0xffffffff);
  func_0x0001001ce548(param_1,((int)uVar4 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10672cde8; end: 10672cdfb;  */

void FUN_10672cde8(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 10672cdfc; end: 10672ce03;  */

void FUN_10672cdfc(void)

{
  return;
}



/* Entry: 10672ce04; end: 10672ce37;  */

void FUN_10672ce04(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110937ab0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10672ce38; end: 10672ce77;  */

void FUN_10672ce38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110937ab0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10672ce78; end: 10672ceb3;  */

long FUN_10672ce78(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110937b20);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10672ceb4; end: 10672cebf;  */

undefined ** FUN_10672ceb4(void)

{
  return &PTR_DAT_110937b20;
}



/* Entry: 10672cec0; end: 10672cec7; -[SCLECollectionViewOrthogonalScrollLayout initWithSectionProvider:interSectionSpacing:] */

void FUN_10672cec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c043590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSectionProvider_interSec_1125ee760,param_3,0);
  return;
}



/* Entry: 10672cec8; end: 10672d06b; -[SCLECollectionViewOrthogonalScrollLayout initWithSectionProvider:interSectionSpacing:nestedCollectionViewClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10672cec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f2c80;
  puVar1 = &uStack_60;
  uStack_60 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10672d06c;
    puStack_70 = &UNK_110937b50;
    uStack_68 = uVar2;
    _objc_retain();
    ppuVar3 = &puStack_88;
    _objc_retainBlock();
    ppuVar4 = ppuVar3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274eff4);
    *(undefined ***)((long)puVar1 + (long)_DAT_11274eff4) = ppuVar4;
    _objc_release(uVar6);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274eff8) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274effc) = param_5;
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f000);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f000) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f004);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f004) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f008);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f008) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f00c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f00c) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f010);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f010) = puVar5;
    _objc_release(uVar6);
    _objc_release(ppuVar3);
    _objc_release(uStack_68);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10672d06c; end: 10672d0e3;  */

void FUN_10672d06c(long param_1)

{
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_alloc(PTR_PTR_1126cd3f0);
    func_0x00010c0428a0(0,0,*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                        *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10672d0e4; end: 10672d13b; -[SCLECollectionViewOrthogonalScrollLayout invalidateLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672d0e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2c80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_invalidateLayout_1125f8208);
  func_0x00010be93cc0(param_1);
  func_0x00010c06a160(*(undefined8 *)(param_1 + _DAT_11274f014));
  return;
}


