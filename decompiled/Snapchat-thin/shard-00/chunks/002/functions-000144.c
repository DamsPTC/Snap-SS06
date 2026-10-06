/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100361e4c; end: 100361e73;  */

int FUN_100361e4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010006818c();
  return (int)lVar1 - *(int *)(param_1 + 8);
}



/* Entry: 100361e74; end: 100361e7f;  */

uint FUN_100361e74(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  undefined4 unaff_w20;
  
  *(undefined4 *)(unaff_x19 + 1) = unaff_w20;
  uVar1 = *unaff_x19;
  if ((uVar1 & 1) == 0) {
    return (uint)(uVar1 != 0);
  }
  return *(uint *)(uVar1 - 1);
}



/* Entry: 100361e80; end: 100361ed7;  */

long FUN_100361e80(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c61170(puVar1);
  return (long)param_1;
}



/* Entry: 100361ed8; end: 100361f53; -[SCSnapTokenMainAppLogger logAccessTokenWithAgeInSeconds:asMeasuredOn:] */

/* WARNING: Possible PIC construction at 0x000100361f3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100361f40) */

void FUN_100361ed8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_4);
  lVar1 = param_1;
  func_0x000107c3de5c(param_1);
  func_0x000107c61180();
  FUN_100361f80(*(undefined8 *)(param_1 + 0x10),lVar1,param_4,1);
  FUN_1003621d4(*(undefined8 *)(param_1 + 0x10),lVar1,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100361f54; end: 100361f7f; -[SCSnapTokenMainAppLogger appStartString] */

undefined ** FUN_100361f54(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x18) - 1;
  if (uVar1 < 3) {
    return (undefined **)(&PTR_PTR_110c99e48)[uVar1];
  }
  return &PTR____CFConstantStringClassReference_110f3de78;
}



/* Entry: 100361f80; end: 1003621d3;  */

undefined * FUN_100361f80(undefined8 *param_1,undefined *param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 auStack_180 [2];
  char cStack_169;
  undefined1 uStack_161;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
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
  puVar4 = param_2;
  puVar5 = param_3;
  lVar10 = param_4;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != (undefined8 *)0x0) {
    plVar3 = (long *)param_1[1];
    puVar4 = &UNK_110c99e60;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar3 = (long *)param_1[1];
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar4 = &UNK_10f6ed215;
      }
      else {
        puVar4 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      unaff_x24 = auStack_78;
      FUN_10002b838(auStack_78,puVar4);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        func_0x000107c61178(param_3);
        puVar5 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_60,puVar5);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      lVar10 = param_4 * 10;
      puVar4 = &UNK_110c99e60;
      unaff_x23 = &uStack_98;
      puVar5 = &uStack_98;
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110c99e60,puVar5,lVar10);
      puStack_80 = unaff_x23;
      FUN_10007e5dc(&puStack_80);
      lVar12 = 0;
      param_1 = auStack_78;
      do {
        if ((&cStack_49)[lVar12] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
  }
  func_0x000107c61170(param_3);
  puVar6 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  puVar7 = puVar6;
  func_0x000107c60bd8();
  pcStack_a8 = FUN_1003621d4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_1;
  puStack_c8 = puVar6;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar5);
  if (puVar7 != (undefined *)0x0) {
    plVar3 = *(long **)(puVar7 + 8);
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110c99eb0);
    if ((int)plVar3 != 0) {
      plVar3 = *(long **)(puVar7 + 8);
      func_0x000107c61174(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar6 = &UNK_10f6ed215;
      }
      else {
        puVar6 = puVar4;
        func_0x000107c61178(puVar4);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(puVar4);
      FUN_10002b838(auStack_118,puVar6);
      func_0x000107c61174(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        func_0x000107c61178(puVar5);
        puVar8 = puVar5;
        func_0x000107c3ac4c(puVar5);
      }
      func_0x000107c61170(puVar5);
      FUN_10002b838(auStack_100,puVar8);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      FUN_10007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
      puVar8 = &uStack_138;
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110c99eb0,puVar8,lVar10);
      puStack_120 = &uStack_138;
      FUN_10007e5dc(&puStack_120);
      lVar10 = 0;
      do {
        if ((&cStack_e9)[lVar10] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_100 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
  }
  func_0x000107c61170(puVar5);
  puVar6 = puVar4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar6;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar5);
  if (cStack_101 < '\0') {
    func_0x000107c60e14(auStack_118[0]);
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c60bd8();
  pcStack_148 = FUN_100362424;
  cVar1 = *(char *)((puVar8[5] & 0xfffffffffffffffc) + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)((puVar8[5] & 0xfffffffffffffffc) + 8) == 0) {
      return (undefined *)0x0;
    }
  }
  else if (cVar1 == '\0') {
    return (undefined *)0x0;
  }
  puStack_160 = puVar5;
  puStack_158 = puVar4;
  ppuStack_150 = &puStack_b0;
  FUN_100361e80();
  if (((puVar8[7] == 0) || ((long)puVar6 < (long)puVar8[7])) &&
     ((puVar8[9] == 0 || ((long)puVar8[9] <= (long)puVar6)))) {
    puVar4 = PTR_PTR_1126bd360;
    func_0x000107c51fcc(PTR_PTR_1126bd360);
    func_0x000107c61180();
    FUN_1003629ac(auStack_180);
    func_0x000107c61170(puVar4);
    puVar11 = puVar8 + 2;
    puVar9 = puVar11;
    if ((*puVar11 & 1) != 0) {
      puVar9 = (ulong *)(*puVar11 + 7);
    }
    FUN_100362abc(puVar9,puVar9 + *(int *)(puVar8 + 3),auStack_180,&uStack_161);
    if ((puVar8[2] & 1) != 0) {
      puVar11 = (ulong *)(puVar8[2] + 7);
    }
    iVar2 = *(int *)(puVar8 + 3);
    if (cStack_169 < '\0') {
      func_0x000107c60e14(auStack_180[0]);
      return (undefined *)(ulong)(puVar11 + iVar2 != puVar9);
    }
    return (undefined *)(ulong)(puVar11 + iVar2 != puVar9);
  }
  return (undefined *)0x0;
}



/* Entry: 1003621d4; end: 100362423;  */

undefined * FUN_1003621d4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined1 uStack_c1;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
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
  puVar5 = param_3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110c99eb0);
    if ((int)plVar3 != 0) {
      plVar3 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar4 = &UNK_10f6ed215;
      }
      else {
        puVar4 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_78,puVar4);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        func_0x000107c61178(param_3);
        puVar5 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_60,puVar5);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar5 = &uStack_98;
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110c99eb0,puVar5,param_4);
      puStack_80 = &uStack_98;
      FUN_10007e5dc(&puStack_80);
      lVar8 = 0;
      do {
        if ((&cStack_49)[lVar8] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
  }
  func_0x000107c61170(param_3);
  puVar4 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  pcStack_a8 = FUN_100362424;
  cVar1 = *(char *)((puVar5[5] & 0xfffffffffffffffc) + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)((puVar5[5] & 0xfffffffffffffffc) + 8) == 0) {
      return (undefined *)0x0;
    }
  }
  else if (cVar1 == '\0') {
    return (undefined *)0x0;
  }
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_100361e80();
  if (((puVar5[7] == 0) || ((long)puVar4 < (long)puVar5[7])) &&
     ((puVar5[9] == 0 || ((long)puVar5[9] <= (long)puVar4)))) {
    puVar4 = PTR_PTR_1126bd360;
    func_0x000107c51fcc(PTR_PTR_1126bd360);
    func_0x000107c61180();
    FUN_1003629ac(auStack_e0);
    func_0x000107c61170(puVar4);
    puVar7 = puVar5 + 2;
    puVar6 = puVar7;
    if ((*puVar7 & 1) != 0) {
      puVar6 = (ulong *)(*puVar7 + 7);
    }
    FUN_100362abc(puVar6,puVar6 + *(int *)(puVar5 + 3),auStack_e0,&uStack_c1);
    if ((puVar5[2] & 1) != 0) {
      puVar7 = (ulong *)(puVar5[2] + 7);
    }
    iVar2 = *(int *)(puVar5 + 3);
    if (cStack_c9 < '\0') {
      func_0x000107c60e14(auStack_e0[0]);
      return (undefined *)(ulong)(puVar7 + iVar2 != puVar6);
    }
    return (undefined *)(ulong)(puVar7 + iVar2 != puVar6);
  }
  return (undefined *)0x0;
}



/* Entry: 100362424; end: 10036254b; -[SCSnapTokenDefaultValidator isValidAccessToken:accessType:] */

bool FUN_100362424(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 auStack_40 [2];
  char cStack_29;
  undefined1 uStack_21;
  
  uVar5 = *(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc;
  cVar1 = *(char *)(uVar5 + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)(uVar5 + 8) == 0) {
      return false;
    }
  }
  else if (cVar1 == '\0') {
    return false;
  }
  FUN_100361e80();
  if (((*(long *)(param_3 + 0x38) == 0) || (param_1 < *(long *)(param_3 + 0x38))) &&
     ((*(long *)(param_3 + 0x48) == 0 || (*(long *)(param_3 + 0x48) <= param_1)))) {
    puVar3 = PTR_PTR_1126bd360;
    func_0x000107c51fcc(PTR_PTR_1126bd360);
    func_0x000107c61180();
    FUN_1003629ac(auStack_40);
    func_0x000107c61170(puVar3);
    puVar6 = (ulong *)(param_3 + 0x10);
    puVar4 = puVar6;
    if ((*puVar6 & 1) != 0) {
      puVar4 = (ulong *)(*puVar6 + 7);
    }
    FUN_100362abc(puVar4,puVar4 + *(int *)(param_3 + 0x18),auStack_40,&uStack_21);
    if ((*(ulong *)(param_3 + 0x10) & 1) != 0) {
      puVar6 = (ulong *)(*(ulong *)(param_3 + 0x10) + 7);
    }
    iVar2 = *(int *)(param_3 + 0x18);
    if (cStack_29 < '\0') {
      func_0x000107c60e14(auStack_40[0]);
      return puVar6 + iVar2 != puVar4;
    }
    return puVar6 + iVar2 != puVar4;
  }
  return false;
}



/* Entry: 10036254c; end: 10036266b;  */

void FUN_10036254c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ecedd0,&UNK_10daf50a0);
  puVar1 = &UNK_110571698;
  func_0x000107c613fc(&UNK_110571698,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_11;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_10;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_2;
  *(undefined8 *)(puVar1 + 0x50) = param_6;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(&UNK_102954e20,puVar1);
  return;
}



/* Entry: 10036266c; end: 10036266f;  */

void FUN_10036266c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100362670; end: 10036268f;  */

void FUN_100362670(void)

{
  func_0x000107c61168(&PTR_PTR_1128ab2f0);
  return;
}



/* Entry: 100362690; end: 10036298b; -[SCBlizzardEventLoggerAdapter startLoggingWithLoggerProvider:config:notificationCenter:eventConfigurer:eventSerializer:grapheneRegistry:pageViewStateManager:mapDeserializer:] */

/* WARNING: Possible PIC construction at 0x000100362720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100362734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100362748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010036275c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010036277c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100362790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003627d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100362800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010036284c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100362860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010036288c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003628c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100362904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003628cc) */
/* WARNING: Removing unreachable block (ram,0x000100362890) */
/* WARNING: Removing unreachable block (ram,0x000100362864) */
/* WARNING: Removing unreachable block (ram,0x000100362850) */
/* WARNING: Removing unreachable block (ram,0x000100362804) */
/* WARNING: Removing unreachable block (ram,0x0001003627dc) */
/* WARNING: Removing unreachable block (ram,0x000100362794) */
/* WARNING: Removing unreachable block (ram,0x000100362780) */
/* WARNING: Removing unreachable block (ram,0x000100362760) */
/* WARNING: Removing unreachable block (ram,0x00010036274c) */
/* WARNING: Removing unreachable block (ram,0x000100362738) */
/* WARNING: Removing unreachable block (ram,0x000100362724) */
/* WARNING: Removing unreachable block (ram,0x000100362908) */
/* WARNING: Removing unreachable block (ram,0x000100362940) */
/* WARNING: Removing unreachable block (ram,0x000100362958) */

void FUN_100362690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c560dc(param_1,param_2,param_3);
  func_0x000107c56af0(param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10036298c; end: 1003629ab; +[SCSnapTokenAccessTypeUtil serverNameForAccessType:] */

undefined * FUN_10036298c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xc) {
    return (&PTR_PTR_110cd08f8)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 1003629ac; end: 100362a1b;  */

void FUN_1003629ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c61178(param_2);
  func_0x000107c3ac4c();
  uVar2 = param_2;
  func_0x000107c4adb0(param_2);
  FUN_100362a1c(param_1,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100362a1c; end: 100362abb;  */

ulong * FUN_100362a1c(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  if ((undefined8 *)0x7ffffffffffffff6 < param_3) {
    func_0x000104bd47d4();
    puVar6 = param_1;
    if (param_1 != param_2) {
      uVar4 = param_3[1];
      puVar1 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar1 = param_3;
      }
      do {
        puVar6 = (ulong *)*param_1;
        bVar3 = *(byte *)((long)puVar6 + 0x17);
        uVar2 = puVar6[1];
        if (-1 < (char)bVar3) {
          uVar2 = (ulong)bVar3;
        }
        if (uVar2 == uVar4) {
          puVar5 = (ulong *)*puVar6;
          if (-1 < (char)bVar3) {
            puVar5 = puVar6;
          }
          func_0x000107c610b0(puVar5,puVar1,uVar4);
          if ((int)puVar5 == 0) {
            return param_1;
          }
        }
        param_1 = param_1 + 1;
        puVar6 = param_2;
      } while (param_1 != param_2);
    }
    return puVar6;
  }
  if (param_3 < (undefined8 *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar5 = param_1;
    if (param_3 == (undefined8 *)0x0) goto LAB_100362a9c;
  }
  else {
    puVar6 = (ulong *)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      puVar6 = (ulong *)(((ulong)param_3 | 7) + 1);
    }
    puVar5 = puVar6;
    func_0x000107c60e20();
    param_1[1] = (ulong)param_3;
    param_1[2] = (ulong)puVar6 | 0x8000000000000000;
    *param_1 = (ulong)puVar5;
  }
  func_0x000107c610b8(puVar5,param_2,param_3);
LAB_100362a9c:
  *(undefined1 *)((long)puVar5 + (long)param_3) = 0;
  return param_1;
}



/* Entry: 100362abc; end: 100362b53;  */

undefined8 * FUN_100362abc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = param_1;
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      plVar6 = (long *)*param_1;
      bVar3 = *(byte *)((long)plVar6 + 0x17);
      uVar2 = plVar6[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        plVar5 = (long *)*plVar6;
        if (-1 < (char)bVar3) {
          plVar5 = plVar6;
        }
        func_0x000107c610b0(plVar5,puVar1,uVar4);
        if ((int)plVar5 == 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 1;
      puVar7 = param_2;
    } while (param_1 != param_2);
  }
  return puVar7;
}



/* Entry: 100362b54; end: 100362c77;  */

void FUN_100362b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ec91e0,&UNK_10daeca50);
  puVar1 = &UNK_110565b10;
  func_0x000107c613fc(&UNK_110565b10,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_11;
  *(undefined8 *)(puVar1 + 0x40) = param_10;
  *(undefined8 *)(puVar1 + 0x48) = param_2;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  *(undefined8 *)(puVar1 + 0x60) = param_6;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(&UNK_1028d6d30,puVar1);
  return;
}



/* Entry: 100362c78; end: 100362c7b;  */

void FUN_100362c78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100362c7c; end: 100362f07; -[SCSnapTokenStorage _setInMemoryAccessTokenValue:forAccessTypeKey:] */

void FUN_100362c7c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x24;
  float fVar10;
  
  FUN_1000ba800(&UNK_10f6ee24b);
  func_0x000107c611ec(param_1 + 0x30);
  uVar9 = *(ulong *)(param_1 + 0x10);
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x24 = uVar4 & param_4;
    }
    else {
      unaff_x24 = param_4;
      if (uVar9 <= param_4) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = param_4 / uVar9;
        }
        unaff_x24 = param_4 - uVar7 * uVar9;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 8) + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_100362d48;
          uVar7 = plVar5[1];
          if (uVar7 != param_4) break;
          if (plVar5[2] == param_4) {
            lVar6 = (long)(plVar5 + 3);
            if (param_3 != lVar6) {
              FUN_1003618a0(lVar6);
              func_0x000107c2bc1c(lVar6,param_3);
            }
            goto SUB_1000e2a84;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar9 <= uVar7) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar7 / uVar9;
          }
          uVar7 = uVar7 - uVar1 * uVar9;
        }
      } while (uVar7 == unaff_x24);
    }
  }
LAB_100362d48:
  plVar3 = (long *)0x70;
  func_0x000107c60e20();
  plVar5 = (long *)(param_1 + 0x18);
  *plVar3 = 0;
  plVar3[1] = param_4;
  plVar3[2] = param_4;
  FUN_100361c08(plVar3 + 3,0,param_3);
  fVar10 = (float)(*(long *)(param_1 + 0x20) + 1);
  if ((uVar9 == 0) || (*(float *)(param_1 + 0x28) * (float)uVar9 < fVar10)) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)(fVar10 / *(float *)(param_1 + 0x28));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_100362f28(param_1 + 8,uVar4);
    uVar9 = *(ulong *)(param_1 + 0x10);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & param_4;
    }
    else {
      unaff_x24 = param_4;
      if (uVar9 <= param_4) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = param_4 / uVar9;
        }
        unaff_x24 = param_4 - uVar4 * uVar9;
      }
    }
  }
  lVar6 = *(long *)(param_1 + 8);
  plVar8 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar3 = *plVar5;
    *plVar5 = (long)plVar3;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar5;
    if (*plVar3 != 0) {
      uVar4 = *(ulong *)(*plVar3 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar4 = uVar4 & uVar9 - 1;
      }
      else if (uVar9 <= uVar4) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar4 / uVar9;
        }
        uVar4 = uVar4 - uVar7 * uVar9;
      }
      *(long **)(lVar6 + uVar4 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar8;
    *plVar8 = (long)plVar3;
  }
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
SUB_1000e2a84:
  func_0x000107c611f0(param_1 + 0x30);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100362f08; end: 100362f27;  */

void FUN_100362f08(void)

{
  func_0x000107c61168(&PTR_PTR_1128bbc38);
  return;
}



/* Entry: 100362f28; end: 10036312b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100362f28(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_78 [32];
  long *plStack_58;
  ulong uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_100362f70:
    if (param_2 == 0) {
      lVar8 = *param_1;
      *param_1 = 0;
      if (lVar8 != 0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        plVar4 = param_1;
        func_0x000104bd35f4();
        lVar8 = _DAT_11307e060;
        pcStack_38 = FUN_10036312c;
        plStack_58 = param_1;
        uStack_48 = param_2;
        puStack_40 = &stack0xfffffffffffffff0;
        func_0x000107c61428((long)plVar4 + _DAT_11307e060,auStack_78,1,0);
        *(undefined8 *)((long)plVar4 + lVar8) = param_3;
        return;
      }
      lVar8 = param_2 << 3;
      func_0x000107c60e20();
      lVar2 = *param_1;
      *param_1 = lVar8;
      if (lVar2 != 0) {
        func_0x000107c60e14();
        lVar8 = *param_1;
      }
      param_1[1] = param_2;
      func_0x000107c60ee4(lVar8,param_2 << 3);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        uVar9 = plVar4[1];
        uVar3 = param_2 - 1;
        if ((param_2 & uVar3) == 0) {
          uVar9 = uVar9 & uVar3;
        }
        else if (param_2 <= uVar9) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar7 * param_2;
        }
        *(long **)(lVar8 + uVar9 * 8) = param_1 + 2;
        plVar5 = (long *)*plVar4;
        while (plVar5 != (long *)0x0) {
          uVar7 = plVar5[1];
          if ((param_2 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          plVar6 = plVar5;
          if (uVar7 != uVar9) {
            if (*(long *)(lVar8 + uVar7 * 8) == 0) {
              *(long **)(lVar8 + uVar7 * 8) = plVar4;
              uVar9 = uVar7;
            }
            else {
              *plVar4 = *plVar5;
              *plVar5 = **(undefined8 **)(lVar8 + uVar7 * 8);
              **(long **)(lVar8 + uVar7 * 8) = (long)plVar5;
              plVar6 = plVar4;
            }
          }
          plVar4 = plVar6;
          plVar5 = (long *)*plVar6;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (param_2 <= uVar3) {
      param_2 = uVar3;
    }
    if (param_2 < uVar9) goto LAB_100362f70;
  }
  return;
}



/* Entry: 10036312c; end: 10036317b; -[SCSnapTokenMetricsInfo setGetMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10036312c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307e060;
  func_0x000107c61428(param_1 + _DAT_11307e060,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10036317c; end: 10036319f;  */

void FUN_10036317c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106af060;
  FUN_1000285a8(0x112fb2988,&UNK_10dc26568);
  func_0x000107c613fc(&UNK_1106af060,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009337c8,puVar1);
  return;
}



/* Entry: 1003631a0; end: 10036321f;  */

void FUN_1003631a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 100363220; end: 10036323f;  */

void FUN_100363220(void)

{
  func_0x000107c61168(&PTR_PTR_112902f28);
  return;
}



/* Entry: 100363240; end: 10036326f; -[SCBlizzardEventLoggerAdapter setLoggerProvider:] */

void FUN_100363240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100363270; end: 10036329f; -[SCBlizzardEventLoggerAdapter setNotificationCenter:] */

void FUN_100363270(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003632a0; end: 1003632cf; -[SCBlizzardEventLoggerAdapter setEventConfigurer:] */

void FUN_1003632a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003632d0; end: 1003632ff; -[SCBlizzardEventLoggerAdapter setConfig:] */

void FUN_1003632d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100363300; end: 10036332f; -[SCBlizzardEventLoggerAdapter setEventSerializer:] */

void FUN_100363300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100363330; end: 10036335f; -[SCBlizzardEventLoggerAdapter setGraphene:] */

void FUN_100363330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100363360; end: 10036338f; -[SCBlizzardEventLoggerAdapter setPageViewStateManager:] */

void FUN_100363360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100363390; end: 100363457; -[SCBlizzardEventLoggerAdapter setMapDeserializer:] */

void FUN_100363390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100363458; end: 100363477;  */

void FUN_100363458(void)

{
  func_0x000107c61168(&PTR_PTR_1128f9e38);
  return;
}



/* Entry: 100363478; end: 10036348f; -[SCBlizzardEventLoggerAdapter experimentProvider] */

void FUN_100363478(long param_1)

{
  func_0x000107c61148(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100363490; end: 10036350b; -[SCBlizzardABEventManager initWithExperimentProvider:] */

undefined1 * FUN_100363490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4c40;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c3bd28(puVar1);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10036350c; end: 1003635d3;  */

void FUN_10036350c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ea3f68,&UNK_10dab6e00);
  puVar1 = &UNK_11051d7b8;
  func_0x000107c613fc(&UNK_11051d7b8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_10252ea58,puVar1);
  return;
}



/* Entry: 1003635d4; end: 10036361f;  */

void FUN_1003635d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100363620; end: 1003637a3; -[SCBlizzardABEventManager _loadCache] */

/* WARNING: Possible PIC construction at 0x000100363660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100363698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003636bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003636e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100363718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100363788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100363768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100363780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010036371c) */
/* WARNING: Removing unreachable block (ram,0x000100363728) */
/* WARNING: Removing unreachable block (ram,0x000100363738) */
/* WARNING: Removing unreachable block (ram,0x00010036372c) */
/* WARNING: Removing unreachable block (ram,0x000100363784) */
/* WARNING: Removing unreachable block (ram,0x0001003636e8) */
/* WARNING: Removing unreachable block (ram,0x0001003636c0) */
/* WARNING: Removing unreachable block (ram,0x00010036378c) */
/* WARNING: Removing unreachable block (ram,0x0001003636c4) */
/* WARNING: Removing unreachable block (ram,0x00010036369c) */
/* WARNING: Removing unreachable block (ram,0x000100363664) */
/* WARNING: Removing unreachable block (ram,0x00010036376c) */
/* WARNING: Removing unreachable block (ram,0x000100363770) */
/* WARNING: Removing unreachable block (ram,0x00010036377c) */

void FUN_100363620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x000107c61180();
  func_0x000107c5470c(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1003637a4; end: 1003637c3;  */

void FUN_1003637a4(void)

{
  func_0x000107c61168(&PTR_PTR_1129ca960);
  return;
}



/* Entry: 1003637c4; end: 1003637f3; -[SCBlizzardABEventManager setEventsData:] */

void FUN_1003637c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003637f4; end: 100363897;  */

void FUN_1003637f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ecaa78,&UNK_10daedb10);
  puVar1 = &UNK_1105672c8;
  func_0x000107c613fc(&UNK_1105672c8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1028ed134,puVar1);
  return;
}



/* Entry: 100363898; end: 1003638f3;  */

void FUN_100363898(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003638f4; end: 100363917;  */

void FUN_1003638f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106ad188;
  FUN_1000285a8(0x112fae9d0,&UNK_10dc23488);
  func_0x000107c613fc(&UNK_1106ad188,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10090de0c,puVar1);
  return;
}



/* Entry: 100363918; end: 100363997;  */

void FUN_100363918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 100363998; end: 1003639b7;  */

void FUN_100363998(void)

{
  func_0x000107c61168(&PTR_PTR_112900120);
  return;
}



/* Entry: 1003639b8; end: 100363a03;  */

void FUN_1003639b8(undefined8 param_1)

{
  FUN_1000285a8(0x112f27020,&UNK_10db625c0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102eb2498,param_1);
  return;
}



/* Entry: 100363a04; end: 100363a23;  */

void FUN_100363a04(void)

{
  func_0x000107c61168(&PTR_PTR_1128ab3e0);
  return;
}



/* Entry: 100363a24; end: 100363adf;  */

void FUN_100363a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f26798,&UNK_10db619e0);
  puVar1 = &UNK_1105e3a68;
  func_0x000107c613fc(&UNK_1105e3a68,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_102eadc80,puVar1);
  return;
}



/* Entry: 100363ae0; end: 100363b43;  */

void FUN_100363ae0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100363b44; end: 100363b4b; -[SCBlizzardABEventManager eventsData] */

undefined8 FUN_100363b44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100363b4c; end: 100363b97;  */

void FUN_100363b4c(undefined8 param_1)

{
  FUN_1000285a8(0x112f45ed0,&UNK_10db929e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10316398c,param_1);
  return;
}



/* Entry: 100363b98; end: 100363bb7;  */

void FUN_100363b98(void)

{
  func_0x000107c61168(&PTR_PTR_1128bbd10);
  return;
}



/* Entry: 100363bb8; end: 100363dc3;  */

void FUN_100363bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f20630,&UNK_10db591d0);
  puVar1 = &UNK_1105dca80;
  func_0x000107c613fc(&UNK_1105dca80,0xd0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  FUN_1000823a8(FUN_10050d8f8,puVar1);
  return;
}



/* Entry: 100363dc4; end: 100363de3;  */

void FUN_100363dc4(void)

{
  func_0x000107c61168(&PTR_PTR_112f206e8);
  return;
}



/* Entry: 100363de4; end: 100363dff;  */

void FUN_100363de4(undefined8 param_1)

{
  FUN_1000285a8(0x112f1f8d8,&UNK_10db58568);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f8bc8,param_1);
  return;
}



/* Entry: 100363e00; end: 100363e4f;  */

void FUN_100363e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100363e50; end: 100363e6f;  */

void FUN_100363e50(void)

{
  func_0x000107c61168(&PTR_PTR_1128fbe08);
  return;
}



/* Entry: 100363e70; end: 100363f2b;  */

void FUN_100363e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f2d1e0,&UNK_10db71690);
  puVar1 = &UNK_1105f59c8;
  func_0x000107c613fc(&UNK_1105f59c8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_102fac20c,puVar1);
  return;
}



/* Entry: 100363f2c; end: 100363f8f;  */

void FUN_100363f2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100363f90; end: 100364057;  */

void FUN_100363f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f2d2d0,&UNK_10db71800);
  puVar1 = &UNK_1105f5a70;
  func_0x000107c613fc(&UNK_1105f5a70,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(&UNK_102fac990,puVar1);
  return;
}



/* Entry: 100364058; end: 1003640c3;  */

void FUN_100364058(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003640c4; end: 1003640df;  */

void FUN_1003640c4(undefined8 param_1)

{
  FUN_1000285a8(0x112f267a0,&UNK_10db619e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102eade00,param_1);
  return;
}



/* Entry: 1003640e0; end: 10036412f;  */

void FUN_1003640e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100364130; end: 1003643c7;  */

void FUN_100364130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f12d50,&UNK_10db47180);
  puVar1 = &UNK_1105cae20;
  func_0x000107c613fc(&UNK_1105cae20,0x110,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  FUN_1000823a8(FUN_1006ebff0,puVar1);
  return;
}



/* Entry: 1003643c8; end: 1003643e7;  */

void FUN_1003643c8(void)

{
  func_0x000107c61168(&PTR_PTR_112f12de0);
  return;
}



/* Entry: 1003643e8; end: 100364403;  */

void FUN_1003643e8(undefined8 param_1)

{
  FUN_1000285a8(0x112f12d70,&UNK_10db471a0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006eab8c,param_1);
  return;
}



/* Entry: 100364404; end: 100364453;  */

void FUN_100364404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100364454; end: 10036446f;  */

void FUN_100364454(undefined8 param_1)

{
  FUN_1000285a8(0x112f20678,&UNK_10db59230);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10050c554,param_1);
  return;
}



/* Entry: 100364470; end: 1003644bf;  */

void FUN_100364470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1003644c0; end: 100364777;  */

void FUN_1003644c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f165a0,&UNK_10db4c870);
  puVar1 = &UNK_1105cf7c0;
  func_0x000107c613fc(&UNK_1105cf7c0,0x120,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  FUN_1000823a8(FUN_10070f724,puVar1);
  return;
}



/* Entry: 100364778; end: 100364797;  */

void FUN_100364778(void)

{
  func_0x000107c61168(&PTR_PTR_112f16618);
  return;
}



/* Entry: 100364798; end: 10036496f;  */

void FUN_100364798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f15e80,&UNK_10db4bd60);
  puVar1 = &UNK_1105cf050;
  func_0x000107c613fc(&UNK_1105cf050,0xb8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  FUN_1000823a8(FUN_1007e8a2c,puVar1);
  return;
}



/* Entry: 100364970; end: 10036498f;  */

void FUN_100364970(void)

{
  func_0x000107c61168(&PTR_PTR_112f15f00);
  return;
}



/* Entry: 100364990; end: 1003649ab;  */

void FUN_100364990(undefined8 param_1)

{
  FUN_1000285a8(0x112f15e90,&UNK_10db4bd78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007e7cd0,param_1);
  return;
}



/* Entry: 1003649ac; end: 1003649fb;  */

void FUN_1003649ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1003649fc; end: 100364aff;  */

void FUN_1003649fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e4f068,&UNK_10da4bbc0);
  puVar1 = &UNK_1104bac60;
  func_0x000107c613fc(&UNK_1104bac60,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_9;
  *(undefined8 *)(puVar1 + 0x20) = param_8;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_102004794,puVar1);
  return;
}



/* Entry: 100364b00; end: 100364b03;  */

void FUN_100364b00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100364b04; end: 100364b23;  */

void FUN_100364b04(void)

{
  func_0x000107c61168(&PTR_PTR_11299d8e8);
  return;
}



/* Entry: 100364b24; end: 100364bc7;  */

void FUN_100364b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e51050,&UNK_10da50240);
  puVar1 = &UNK_1104becb8;
  func_0x000107c613fc(&UNK_1104becb8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_10051db9c,puVar1);
  return;
}



/* Entry: 100364bc8; end: 100364be7;  */

void FUN_100364bc8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b56a8);
  return;
}



/* Entry: 100364be8; end: 100364d7b;  */

void FUN_100364be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fba4e8,&UNK_10dc2b750);
  puVar1 = &UNK_1106b3280;
  func_0x000107c613fc(&UNK_1106b3280,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_18;
  *(undefined8 *)(puVar1 + 0x28) = param_10;
  *(undefined8 *)(puVar1 + 0x30) = param_12;
  *(undefined8 *)(puVar1 + 0x38) = param_15;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  *(undefined8 *)(puVar1 + 0x60) = param_13;
  *(undefined8 *)(puVar1 + 0x68) = param_3;
  *(undefined8 *)(puVar1 + 0x70) = param_7;
  *(undefined8 *)(puVar1 + 0x78) = param_11;
  *(undefined8 *)(puVar1 + 0x80) = param_14;
  *(undefined8 *)(puVar1 + 0x88) = param_6;
  *(undefined8 *)(puVar1 + 0x90) = param_16;
  *(undefined8 *)(puVar1 + 0x98) = param_17;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  FUN_1000823a8(FUN_10072baf4,puVar1);
  return;
}



/* Entry: 100364d7c; end: 100364db3;  */

void FUN_100364d7c(undefined8 param_1)

{
  if (lRam000000011358f2b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7b2004);
  return;
}



/* Entry: 100364db4; end: 100364e6b;  */

void FUN_100364db4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_a0 = &UNK_10dc5b2d0;
  puStack_98 = &UNK_10dc5b2e8;
  puStack_90 = &UNK_10dc5b2d0;
  puStack_88 = &UNK_10dc5b300;
  puStack_80 = &UNK_10dc5b318;
  puStack_78 = &UNK_10dc5b2e8;
  puStack_68 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_70 = &UNK_10dc5b2e8;
  puStack_58 = &UNK_10dc5b2d0;
  lVar1 = 0x13f;
  puStack_60 = puStack_68;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10dc5b300;
    puStack_40 = &UNK_10dc5b300;
    puStack_38 = &UNK_10dc5b2d0;
    func_0x000107c61630(param_1,0x100,0xe,&puStack_a0,param_1 + 0x50);
  }
  return;
}



/* Entry: 100364e6c; end: 10036504f;  */

void FUN_100364e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f26b00,&UNK_10db61f90);
  puVar1 = &UNK_1105e3cc0;
  func_0x000107c613fc(&UNK_1105e3cc0,0xc0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  FUN_1000823a8(&UNK_102eaf2e8,puVar1);
  return;
}



/* Entry: 100365050; end: 10036513b;  */

void FUN_100365050(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10036513c; end: 100365157;  */

void FUN_10036513c(undefined8 param_1)

{
  FUN_1000285a8(0x112f26b08,&UNK_10db61f98);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102eaf6d8,param_1);
  return;
}



/* Entry: 100365158; end: 1003651a7;  */

void FUN_100365158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1003651a8; end: 1003651c7;  */

void FUN_1003651a8(void)

{
  func_0x000107c61168(&PTR_PTR_112901fa8);
  return;
}



/* Entry: 1003651c8; end: 1003654df;  */

void FUN_1003651c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f26c88,&UNK_10db621b0);
  puVar1 = &UNK_1105e3d88;
  func_0x000107c613fc(&UNK_1105e3d88,0x148,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  FUN_1000823a8(&UNK_102eb02d4,puVar1);
  return;
}



/* Entry: 1003654e0; end: 100365653;  */

void FUN_1003654e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100365654; end: 10036569f;  */

void FUN_100365654(undefined8 param_1)

{
  FUN_1000285a8(0x112ff0bc0,&UNK_10dc5b290);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10072b8ac,param_1);
  return;
}



/* Entry: 1003656a0; end: 1003656bf;  */

void FUN_1003656a0(void)

{
  func_0x000107c61168(&PTR_PTR_1129353e8);
  return;
}



/* Entry: 1003656c0; end: 100365743; -[SCBlizzardExperimentProvider deviceIdStudyEUTDedupeFixEnabled] */

void FUN_1003656c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa8;
    func_0x000107c61148(lVar1);
    func_0x000107c3ebd4();
    func_0x000107c61170(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d94c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar2;
    func_0x000107c61170(uVar3);
    lVar1 = *(long *)(param_1 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 100365744; end: 1003657db;  */

void FUN_100365744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ebe5e8,&UNK_10dad9f20);
  puVar1 = &UNK_11054a148;
  func_0x000107c613fc(&UNK_11054a148,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10279a884,puVar1);
  return;
}



/* Entry: 1003657dc; end: 1003657e7;  */

void FUN_1003657dc(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010279b56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1003657e8; end: 100365a13;  */

void FUN_1003657e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f12a68,&UNK_10db46d40);
  puVar1 = &UNK_1105cac90;
  func_0x000107c613fc(&UNK_1105cac90,0xe0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  FUN_1000823a8(FUN_1006ea794,puVar1);
  return;
}



/* Entry: 100365a14; end: 100365a33;  */

void FUN_100365a14(void)

{
  func_0x000107c61168(&PTR_PTR_112f12b08);
  return;
}



/* Entry: 100365a34; end: 100365a7f;  */

void FUN_100365a34(undefined8 param_1)

{
  FUN_1000285a8(0x11306f1d8,&UNK_10dceba90);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1043344b4,param_1);
  return;
}



/* Entry: 100365a80; end: 100365a9f;  */

void FUN_100365a80(void)

{
  func_0x000107c61168(&PTR_PTR_11299da00);
  return;
}


