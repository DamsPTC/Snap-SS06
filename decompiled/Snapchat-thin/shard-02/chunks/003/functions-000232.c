/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bf80c4; end: 101bf811f;  */

undefined8 * FUN_101bf80c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bf8120; end: 101bf815b;  */

undefined8 * FUN_101bf8120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bf815c; end: 101bf820b;  */

int FUN_101bf815c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bf820c; end: 101bf83e7;  */

void FUN_101bf820c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e08bc0,&UNK_10d9ddc50);
  puVar1 = &UNK_1104551e0;
  func_0x000107c613fc(&UNK_1104551e0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x101bf82ec,puVar1);
  return;
}



/* Entry: 101bf83e8; end: 101bf83f7;  */

undefined1  [16] FUN_101bf83e8(void)

{
  return ZEXT816(0x110455208);
}



/* Entry: 101bf83f8; end: 101bf844b;  */

void FUN_101bf83f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bf844c; end: 101bf8507;  */

void FUN_101bf844c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x0001000285a8(0x112e08bd0,&UNK_10d9ddca8);
  func_0x0001000838ec(param_2);
  FUN_101bf92ec(uVar6,uVar3,uVar1,uVar4,uVar2,uVar5,param_2,uVar7);
  func_0x000107c61574(param_2);
  func_0x000100082720("ListeningActivityPermissionsSheetPresenterEntryPointProvider",0x3c,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 101bf8508; end: 101bf856b;  */

/* WARNING: Possible PIC construction at 0x000101bf851c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bf8520) */

void FUN_101bf8508(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 101bf856c; end: 101bf85cf;  */

undefined8 * FUN_101bf856c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 101bf85d0; end: 101bf8613;  */

undefined8 * FUN_101bf85d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 101bf8614; end: 101bf86ab;  */

int FUN_101bf8614(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bf86ac; end: 101bf8703;  */

long FUN_101bf86ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101bf8704; end: 101bf87d3;  */

long FUN_101bf8704(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar3;
  (*(code *)**(undefined8 **)(lVar3 + -8))();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 101bf87d4; end: 101bf882b;  */

undefined8 * FUN_101bf87d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000834e4();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar1 = param_1[6];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[8];
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bf882c; end: 101bf88ef;  */

int FUN_101bf882c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bf88f0; end: 101bf894f;  */

uint FUN_101bf88f0(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar1 = param_2[1];
  uVar6 = param_2[2];
  func_0x00010142cfc4(uVar3,*param_2);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010142cfc4(uVar4,uVar1);
    uVar2 = (uint)uVar4 & (uint)(uVar5 == uVar6);
  }
  return uVar2;
}



/* Entry: 101bf8950; end: 101bf89f7;  */

void FUN_101bf8950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf89f8,uVar4,uVar5);
  return;
}



/* Entry: 101bf89f8; end: 101bf8a77;  */

void FUN_101bf89f8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bf8a78;
                    /* WARNING: Could not recover jumptable at 0x000101bf8a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar5,*(undefined8 *)(unaff_x22 + 0x38),uVar2,lVar3);
  return;
}



/* Entry: 101bf8a78; end: 101bf8acf;  */

void FUN_101bf8a78(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bf8ad0;
  }
  else {
    pcVar1 = FUN_101bf8c18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  return;
}



/* Entry: 101bf8ad0; end: 101bf8c17;  */

void FUN_101bf8ad0(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  FUN_101bf8e48(uVar9,uVar8);
  puVar1 = (undefined *)0x0;
  func_0x000103a82768();
  puVar4 = (undefined *)0x1;
  puVar5 = puVar1;
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar8,1,puVar1);
  if ((int)uVar8 != 1) {
    plVar7 = *(long **)(unaff_x22 + 0x30);
    plVar2 = plVar7;
    func_0x000107c614c4(plVar7,puVar1);
    if ((int)plVar2 == 0) {
      lVar6 = 0x112e08440;
      func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
      lVar6 = *(long *)((long)plVar7 + (long)*(int *)(lVar6 + 0x30));
      puVar4 = (undefined *)0x112d373d8;
      puVar5 = &UNK_10d9014c0;
      func_0x000101bf8e98(plVar7,0x112d373d8,&UNK_10d9014c0);
      goto LAB_101bf8b6c;
    }
    puVar4 = puVar1;
    if ((int)plVar2 == 1) {
      lVar6 = *plVar7;
      if (*(long *)(lVar6 + 0x10) != 0) goto LAB_101bf8b6c;
      func_0x000107c6142c(lVar6);
      puVar4 = puVar1;
    }
  }
  lVar6 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61434(lVar6);
LAB_101bf8b6c:
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar3 = lVar6;
  FUN_101bf8c94(lVar6);
  func_0x000107c6142c(lVar6);
  func_0x000101bf8e98(uVar9,0x112e085c8,&UNK_10d9dcfb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101bf8bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3,puVar4,puVar5);
  return;
}



/* Entry: 101bf8c18; end: 101bf8c93;  */

void FUN_101bf8c18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c614ac(uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bf8c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar1,uVar3);
  return;
}



/* Entry: 101bf8c94; end: 101bf8d0f;  */

void FUN_101bf8c94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101bf8d10();
  if (2 < *(ulong *)(lVar1 + 0x10)) {
    FUN_101994330(lVar1,lVar1 + 0x20,0,5);
    func_0x000107c6142c(lVar1);
  }
  func_0x000107c61434(param_1);
  return;
}



/* Entry: 101bf8d10; end: 101bf8e47;  */

undefined * FUN_101bf8d10(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar11 = 0;
  pcVar3 = *(code **)(unaff_x20 + 0x38);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar11;
    if (uVar11 <= uVar10) {
      uVar1 = uVar10;
    }
    plVar9 = (long *)(param_1 + 0x28 + uVar11 * 0x10);
    do {
      if (uVar10 == uVar11) {
        return puVar7;
      }
      uVar11 = uVar11 + 1;
      if (uVar1 + 1 == uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bf8e48);
        (*pcVar3)();
      }
      lVar4 = plVar9[-1];
      lVar2 = *plVar9;
      func_0x000107c61434(lVar2);
      lVar8 = lVar2;
      (*pcVar3)();
      func_0x000107c6142c(lVar2);
      plVar9 = plVar9 + 2;
    } while (lVar8 == 0);
    puVar5 = puVar7;
    func_0x000107c61558();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar1 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      func_0x0001000d182c(puVar7,uVar1 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(long *)(puVar7 + uVar1 * 0x10 + 0x20) = lVar4;
    *(long *)(puVar7 + uVar1 * 0x10 + 0x28) = lVar8;
  } while( true );
}



/* Entry: 101bf8e48; end: 101bf8ed7;  */

undefined8 FUN_101bf8e48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101bf8ed8; end: 101bf8ef7;  */

bool FUN_101bf8ed8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101bf8ef8; end: 101bf901f;  */

ulong FUN_101bf8ef8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bf9020);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101bf9020(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bf901c);
      (*pcVar1)();
    }
    FUN_101bf90a0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101bf9020; end: 101bf909f;  */

undefined * FUN_101bf9020(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_101bffdf8();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101bf90a0; end: 101bf9197;  */

long FUN_101bf90a0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101bf9194);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bf9198);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101bf9198(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101bf9198(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101bf9190);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101bf9198; end: 101bf922b;  */

void FUN_101bf9198(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e08bd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8c48;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e08bd8 = puVar1;
  return;
}



/* Entry: 101bf922c; end: 101bf9233;  */

undefined8 * FUN_101bf922c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 101bf9234; end: 101bf92eb;  */

void FUN_101bf9234(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_101c00880(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1
            );
  puVar2 = puVar3;
  func_0x000107c5fff0();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  puRam0000000112e08ca8 = puVar2;
  return;
}



/* Entry: 101bf92ec; end: 101bf94ab;  */

void FUN_101bf92ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e08bf0,&UNK_10d9ddd90);
  puVar1 = &UNK_110455418;
  func_0x000107c613fc(&UNK_110455418,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_101bf94ac,puVar1);
  return;
}



/* Entry: 101bf94ac; end: 101bf94bf;  */

/* WARNING: Possible PIC construction at 0x000101bf9458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bf9468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bf9478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bf9488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bf947c) */
/* WARNING: Removing unreachable block (ram,0x000101bf946c) */
/* WARNING: Removing unreachable block (ram,0x000101bf945c) */
/* WARNING: Removing unreachable block (ram,0x000101bf948c) */

void FUN_101bf94ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  param_1[3] = &UNK_110455720;
  param_1[4] = &PTR_DAT_110455688;
  puVar9 = &UNK_110455a70;
  func_0x000107c613fc(&UNK_110455a70,0x50,7);
  *param_1 = puVar9;
  *(undefined8 *)(puVar9 + 0x20) = uVar2;
  *(undefined8 *)(puVar9 + 0x28) = uVar6;
  *(undefined8 *)(puVar9 + 0x30) = uVar3;
  *(undefined8 *)(puVar9 + 0x38) = uVar7;
  *(undefined8 *)(puVar9 + 0x40) = uVar5;
  *(undefined8 *)(puVar9 + 0x48) = uVar4;
  *(undefined8 *)(puVar9 + 0x10) = uVar8;
  *(undefined8 *)(puVar9 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101bf94c0; end: 101bf953b;  */

void FUN_101bf94c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x490) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x488) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x498) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x4a0) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x4a8) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x4b0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x4b8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf953c,uVar1,uVar2);
  return;
}



/* Entry: 101bf953c; end: 101bfa397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bf953c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  func_0x000100083b20(unaff_x22 + 0x480);
  lVar14 = *(long *)(unaff_x22 + 0x480);
  lVar4 = lVar14;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(lVar14);
  lVar14 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar14 != 0) {
    lVar4 = lVar14;
    func_0x000107c409cc();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x4c0) = lVar4;
    func_0x000107c615e8(lVar14);
    if (lVar4 != 0) {
      func_0x000100083b20(unaff_x22 + 0x478);
      lVar17 = *(long *)(unaff_x22 + 0x478);
      lVar14 = lVar17;
      func_0x000107c509b4();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x4c8) = lVar14;
      func_0x000107c615e8(lVar17);
      if (lVar14 != 0) {
        func_0x0001000285a8(0x112dbfd78,&UNK_10d97ba80);
        func_0x000100083b20(unaff_x22 + 0x470);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x470);
        puVar5 = &UNK_110455440;
        func_0x000107c613fc(&UNK_110455440,0x18,7);
        *(undefined8 *)(puVar5 + 0x10) = uVar15;
        pcVar2 = FUN_101bfee20;
        func_0x0001000823a8(FUN_101bfee20,puVar5);
        pcVar6 = pcVar2;
        func_0x0001000ad7c4();
        func_0x000107c61574(pcVar2);
        func_0x000107c40978();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0x4d0) = lVar4;
        func_0x000107c61170(pcVar6);
        puVar7 = PTR__OBJC_CLASS___UIViewController_1126af898;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(unaff_x22 + 0x4d8) = puVar7;
        puVar5 = PTR_PTR_1126a8c50;
        func_0x000107c610f8();
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        uVar15 = 0x30;
        func_0x000107c5fadc(0x30,0xe100000000000000);
        func_0x000107c4567c();
        *(undefined **)(unaff_x22 + 0x4e0) = puVar5;
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar8);
        *(undefined **)(unaff_x22 + 0x468) = puVar5;
        func_0x0001000285a8(0x112e08c00,&UNK_10d9ddda8);
        func_0x000107c613fc();
        func_0x000107c61174(puVar5);
        lVar4 = unaff_x22 + 0x468;
        func_0x00010042e6a0();
        *(long *)(unaff_x22 + 0x4e8) = lVar4;
        puVar5 = PTR_PTR_1126a8c58;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(unaff_x22 + 0x4f0) = puVar5;
        puVar8 = puVar5;
        func_0x0001004575f0();
        puVar9 = puVar8;
        func_0x000107c5cb24();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        func_0x000107c590d8(puVar5);
        func_0x000107c61170(puVar9);
        func_0x000100083b20(unaff_x22 + 0x118);
        func_0x000100083b20(unaff_x22 + 0x458);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x458);
        puVar5 = &UNK_110455468;
        func_0x000107c613fc(&UNK_110455468,0x18,7);
        *(undefined8 *)(puVar5 + 0x10) = uVar15;
        func_0x000107c61174(uVar15);
        func_0x000100083b20(unaff_x22 + 0x448);
        func_0x000107c61170(uVar15);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x448);
        puVar8 = &UNK_110455490;
        func_0x000107c613fc(&UNK_110455490,0x18,7);
        *(undefined8 *)(puVar8 + 0x10) = uVar15;
        *(undefined **)(unaff_x22 + 0x140) = &UNK_10d9dddb8;
        *(undefined **)(unaff_x22 + 0x148) = puVar5;
        *(code **)(unaff_x22 + 0x150) = FUN_101bfeebc;
        *(undefined **)(unaff_x22 + 0x158) = puVar8;
        puVar10 = PTR_PTR_1126a8c60;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(unaff_x22 + 0x4f8) = puVar10;
        puVar5 = PTR_PTR_1126aead8;
        func_0x000107c610f8();
        func_0x000107c4807c();
        *(undefined **)(unaff_x22 + 0x500) = puVar5;
        func_0x000100083b20(unaff_x22 + 0x450);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x450);
        uVar15 = uVar16;
        func_0x000107c4c1e0(uVar16);
        func_0x000107c61180();
        func_0x000107c615e8(uVar16);
        func_0x000107c52604(puVar10);
        func_0x000107c615e8(uVar15);
        func_0x000107c53e94(puVar10);
        puVar5 = PTR_PTR_1126afe50;
        func_0x000107c610f8(PTR_PTR_1126afe50);
        func_0x000107c4842c();
        func_0x000107c569fc(puVar10);
        func_0x000107c61170(puVar5);
        puVar11 = PTR_PTR_1126b0a08;
        func_0x000107c610f8();
        func_0x000107c48e88();
        *(undefined **)(unaff_x22 + 0x508) = puVar11;
        func_0x000107c52684();
        func_0x000107c52aa4(puVar11);
        func_0x000107c5a070(puVar11);
        puVar12 = puVar11;
        func_0x000107c539d4(0x4038000000000000);
        FUN_101bff72c();
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(unaff_x22 + 0x510) = puVar12;
        func_0x000107c5a074(puVar11);
        puVar5 = &UNK_1104554b8;
        func_0x000107c613fc(&UNK_1104554b8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,puVar12);
        func_0x000100083b20(unaff_x22 + 0x420);
        func_0x000100083b20(unaff_x22 + 0x240);
        func_0x000100083b20((undefined8 *)(unaff_x22 + 0x268));
        func_0x000100cc98ac(unaff_x22 + 0x420,unaff_x22 + 0x290);
        func_0x000100cc98ac(unaff_x22 + 0x240,unaff_x22 + 0x2b8);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x270);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x268);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x280);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x278);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x288);
        puVar8 = &UNK_1104554e0;
        func_0x000107c613fc(&UNK_1104554e0,0x90,7);
        *(undefined **)(puVar8 + 0x10) = puVar5;
        func_0x000100cc98ac(unaff_x22 + 0x290,puVar8 + 0x18);
        func_0x000100cc98ac(unaff_x22 + 0x2b8,puVar8 + 0x40);
        *(undefined8 *)(puVar8 + 0x88) = uVar15;
        *(undefined8 *)(puVar8 + 0x80) = uVar20;
        *(undefined8 *)(puVar8 + 0x78) = uVar19;
        *(undefined8 *)(puVar8 + 0x70) = uVar18;
        *(undefined8 *)(puVar8 + 0x68) = uVar16;
        puVar1 = (undefined8 *)(puVar12 + _DAT_112e08c08);
        uVar15 = *puVar1;
        uVar16 = puVar1[1];
        *puVar1 = FUN_101bff74c;
        puVar1[1] = puVar8;
        func_0x000107c6157c(puVar5);
        func_0x00010058d43c(uVar15,uVar16);
        func_0x000107c61574(puVar5);
        puVar5 = &UNK_110455508;
        func_0x000107c613fc(&UNK_110455508,0x11,7);
        *(undefined **)(unaff_x22 + 0x518) = puVar5;
        puVar5[0x10] = 0;
        puVar8 = &UNK_110455530;
        func_0x000107c613fc(&UNK_110455530,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,puVar11);
        func_0x000107c61174();
        func_0x000100083b20(unaff_x22 + 0x2e0);
        func_0x000100083b20(unaff_x22 + 0x308);
        func_0x000100083b20((undefined8 *)(unaff_x22 + 0x330));
        func_0x000100cc98ac(unaff_x22 + 0x2e0,unaff_x22 + 0x1f0);
        func_0x000100cc98ac(unaff_x22 + 0x308,unaff_x22 + 0x380);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x338);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x330);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x348);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x340);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x350);
        puVar9 = &UNK_110455558;
        func_0x000107c613fc(&UNK_110455558,0xa0,7);
        *(undefined **)(puVar9 + 0x10) = puVar5;
        *(undefined **)(puVar9 + 0x18) = puVar12;
        func_0x000100cc98ac(unaff_x22 + 0x1f0,puVar9 + 0x20);
        func_0x000100cc98ac(unaff_x22 + 0x380,puVar9 + 0x48);
        *(undefined8 *)(puVar9 + 0x78) = uVar18;
        *(undefined8 *)(puVar9 + 0x70) = uVar16;
        *(undefined8 *)(puVar9 + 0x88) = uVar20;
        *(undefined8 *)(puVar9 + 0x80) = uVar19;
        *(undefined8 *)(puVar9 + 0x90) = uVar15;
        *(undefined **)(puVar9 + 0x98) = puVar8;
        *(undefined8 *)(unaff_x22 + 0x1e0) = 0x101bff760;
        *(undefined **)(unaff_x22 + 0x1e8) = puVar9;
        *(undefined **)(unaff_x22 + 0x1c0) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x1c8) = 0x42000000;
        *(undefined8 *)(unaff_x22 + 0x1d0) = 0x101bfd220;
        *(undefined **)(unaff_x22 + 0x1d8) = &UNK_110455570;
        lVar17 = unaff_x22 + 0x1c0;
        func_0x000107c60bc4(lVar17);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1e8);
        func_0x000107c6157c(puVar5);
        func_0x000107c61174();
        func_0x000107c61574(uVar15);
        func_0x000107c56c54(puVar10);
        func_0x000107c60bd0(lVar17);
        puVar5 = &UNK_110455530;
        func_0x000107c613fc(&UNK_110455530,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,puVar11);
        func_0x000107c61170(puVar11);
        func_0x000100083b20(unaff_x22 + 0x3d0);
        func_0x000100083b20(unaff_x22 + 0x3f8);
        func_0x000100083b20((undefined8 *)(unaff_x22 + 0x218));
        func_0x000100cc98ac(unaff_x22 + 0x3d0,unaff_x22 + 0x3a8);
        func_0x000100cc98ac(unaff_x22 + 0x3f8,unaff_x22 + 0x358);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x220);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x218);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x230);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x228);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x238);
        puVar8 = &UNK_1104555a8;
        func_0x000107c613fc(&UNK_1104555a8,0x98,7);
        *(undefined **)(puVar8 + 0x10) = puVar12;
        *(undefined **)(puVar8 + 0x18) = puVar5;
        func_0x000100cc98ac(unaff_x22 + 0x3a8,puVar8 + 0x20);
        func_0x000100cc98ac(unaff_x22 + 0x358,puVar8 + 0x48);
        *(undefined8 *)(puVar8 + 0x78) = uVar18;
        *(undefined8 *)(puVar8 + 0x70) = uVar16;
        *(undefined8 *)(puVar8 + 0x88) = uVar20;
        *(undefined8 *)(puVar8 + 0x80) = uVar19;
        *(undefined8 *)(puVar8 + 0x90) = uVar15;
        *(undefined8 *)(unaff_x22 + 0x1b0) = 0x101bff794;
        *(undefined **)(unaff_x22 + 0x1b8) = puVar8;
        puVar9 = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined **)(unaff_x22 + 400) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x198) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x1a0) = &UNK_1000f6b44;
        *(undefined **)(unaff_x22 + 0x1a8) = &UNK_1104555c0;
        lVar17 = unaff_x22 + 400;
        func_0x000107c60bc4();
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1b8);
        func_0x000107c61174();
        func_0x000107c61574(uVar15);
        func_0x000107c56d08(puVar10);
        func_0x000107c60bd0(lVar17);
        puVar5 = &UNK_1104555f8;
        func_0x000107c613fc(&UNK_1104555f8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,puVar7);
        func_0x000100083b20(unaff_x22 + 0x460);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x460);
        FUN_101bff7a8(unaff_x22 + 0x118,unaff_x22 + 0xd0);
        puVar8 = &UNK_110455620;
        func_0x000107c613fc(&UNK_110455620,0x80,7);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
        *(undefined8 *)(puVar8 + 0x50) = *(undefined8 *)(unaff_x22 + 0xe8);
        *(undefined8 *)(puVar8 + 0x48) = uVar16;
        uVar16 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x100);
        *(undefined8 *)(puVar8 + 0x60) = *(undefined8 *)(unaff_x22 + 0xf8);
        *(undefined8 *)(puVar8 + 0x58) = uVar16;
        *(undefined8 *)(puVar8 + 0x70) = uVar21;
        *(undefined8 *)(puVar8 + 0x68) = uVar20;
        *(undefined **)(puVar8 + 0x10) = puVar5;
        *(undefined **)(puVar8 + 0x18) = puVar12;
        *(long *)(puVar8 + 0x20) = lVar14;
        *(undefined8 *)(puVar8 + 0x28) = uVar15;
        *(long *)(puVar8 + 0x30) = lVar4;
        *(undefined8 *)(puVar8 + 0x78) = *(undefined8 *)(unaff_x22 + 0x110);
        *(undefined8 *)(puVar8 + 0x40) = uVar19;
        *(undefined8 *)(puVar8 + 0x38) = uVar18;
        *(code **)(unaff_x22 + 0x180) = FUN_101bff7e4;
        *(undefined **)(unaff_x22 + 0x188) = puVar8;
        *(undefined **)(unaff_x22 + 0x160) = puVar9;
        *(undefined8 *)(unaff_x22 + 0x168) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x170) = &UNK_1000f6b44;
        *(undefined **)(unaff_x22 + 0x178) = &UNK_110455638;
        lVar17 = unaff_x22 + 0x160;
        func_0x000107c60bc4(lVar17);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x188);
        func_0x000107c61174();
        func_0x000107c6157c(lVar4);
        func_0x000107c615f0(lVar14);
        func_0x000107c61574(uVar15);
        func_0x000107c56d30(puVar10);
        func_0x000107c60bd0(lVar17);
        puVar5 = PTR_PTR_1126a8c68;
        func_0x000107c610f8();
        func_0x000107c49520();
        *(undefined **)(unaff_x22 + 0x520) = puVar5;
        func_0x000107c61174();
        func_0x000107c5a050();
        puVar8 = puVar7;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101bfa384);
          (*pcVar2)();
        }
        func_0x000107c3d89c();
        func_0x000107c61170(puVar8);
        puVar8 = puVar7;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101bfa388);
          (*pcVar2)();
        }
        puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c3fa94();
        func_0x000107c61180();
        func_0x000107c52b50(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        lVar14 = 0x112d360b8;
        FUN_101bffe1c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                      &UNK_10d9011a0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar14 + 0x18) = 9;
        *(undefined8 *)(lVar14 + 0x10) = 4;
        puVar8 = puVar5;
        func_0x000107c4acb0();
        func_0x000107c61180();
        puVar9 = puVar7;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101bfa38c);
          (*pcVar2)();
        }
        puVar10 = puVar9;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        puVar9 = puVar8;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar8);
        *(undefined **)(lVar14 + 0x20) = puVar9;
        puVar8 = puVar5;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        puVar9 = puVar7;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (puVar9 != (undefined *)0x0) {
          puVar10 = puVar9;
          func_0x000107c5ce8c();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          puVar9 = puVar8;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar8);
          *(undefined **)(lVar14 + 0x28) = puVar9;
          puVar8 = puVar5;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          puVar9 = puVar7;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101bfa394);
            (*pcVar2)();
          }
          puVar10 = puVar9;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          puVar9 = puVar8;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar8);
          *(undefined **)(lVar14 + 0x30) = puVar9;
          puVar8 = puVar5;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar7 != (undefined *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
            puVar9 = puVar7;
            func_0x000107c3ec1c(puVar7);
            func_0x000107c61180();
            func_0x000107c61170(puVar7);
            puVar7 = puVar8;
            func_0x000107c40280();
            func_0x000107c61180();
            func_0x000107c61170(puVar9);
            func_0x000107c61170(puVar8);
            *(undefined **)(lVar14 + 0x38) = puVar7;
            uVar15 = 0;
            FUN_101c00880(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
            lVar17 = lVar14;
            func_0x000107c5fc48(lVar14,uVar15);
            func_0x000107c61574(lVar14);
            func_0x000107c3d048(puVar5);
            func_0x000107c61170(lVar17);
            puVar5 = PTR_PTR_1126aead8;
            func_0x000107c610f8();
            func_0x000107c4807c();
            *(undefined **)(unaff_x22 + 0x528) = puVar5;
            func_0x000107c54d20(0x3fe999999999999a,puVar11);
            func_0x000107c4ef3c(0x3fe999999999999a,puVar11);
            FUN_101bff7a8(unaff_x22 + 0x118,unaff_x22 + 0x88);
            puVar5 = &UNK_110455670;
            func_0x000107c613fc(&UNK_110455670,0x60,7);
            uVar18 = *(undefined8 *)(unaff_x22 + 0xa0);
            uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
            uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
            uVar20 = *(undefined8 *)(unaff_x22 + 0xc0);
            uVar19 = *(undefined8 *)(unaff_x22 + 0xb8);
            *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)(unaff_x22 + 0xb0);
            *(undefined8 *)(puVar5 + 0x30) = uVar15;
            *(undefined8 *)(puVar5 + 0x48) = uVar20;
            *(undefined8 *)(puVar5 + 0x40) = uVar19;
            uVar15 = *(undefined8 *)(unaff_x22 + 200);
            uVar19 = *(undefined8 *)(unaff_x22 + 0x88);
            *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(unaff_x22 + 0x90);
            *(undefined8 *)(puVar5 + 0x10) = uVar19;
            *(undefined8 *)(puVar5 + 0x28) = uVar18;
            *(undefined8 *)(puVar5 + 0x20) = uVar16;
            *(undefined8 *)(puVar5 + 0x50) = uVar15;
            *(long *)(puVar5 + 0x58) = lVar4;
            func_0x000107c6157c();
            uVar15 = 7;
            func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9dddc8,puVar5,&UNK_110455330);
            func_0x000107c61574(puVar5);
            lVar4 = _DAT_112e08c10;
            *(long *)(unaff_x22 + 0x530) = _DAT_112e08c10;
            lVar14 = *(long *)(puVar12 + lVar4);
            *(undefined8 *)(puVar12 + lVar4) = uVar15;
            func_0x000107c61574();
            *(undefined **)(unaff_x22 + 0x80) = puVar12;
            *(undefined **)(unaff_x22 + 0x60) = puVar12;
            *(undefined **)(unaff_x22 + 0x68) = puVar11;
            func_0x000107c5fce8();
            *(long *)(unaff_x22 + 0x538) = lVar14;
            iVar3 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if (iVar3 != 0) {
              plVar13 = (long *)(ulong)*(uint *)(
                                                PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                                + 4);
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x540) = plVar13;
              *plVar13 = unaff_x22;
              plVar13[1] = (long)FUN_101bfa398;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
              )();
              return;
            }
            if (lVar14 == 0) {
              lVar14 = 0;
              uVar15 = 0;
            }
            else {
              uVar15 = *(undefined8 *)(unaff_x22 + 0x4a8);
              func_0x000107c614f0();
              func_0x000107c5fca8();
            }
            *(undefined8 *)(unaff_x22 + 0x550) = uVar15;
            *(long *)(unaff_x22 + 0x548) = lVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfa418,lVar14);
            return;
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101bfa398);
          (*pcVar2)();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bfa390);
        (*pcVar2)();
      }
      func_0x000107c615e8(lVar4);
    }
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x4a0);
  func_0x000107c61574(uVar15);
  func_0x000101bfede0();
  func_0x000107c613f8(&UNK_1104557d0,uVar15,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bfa318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfa398; end: 101bfa417;  */

/* WARNING: Possible PIC construction at 0x000101bfa3f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bfa3f4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0560) */

void FUN_101bfa398(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x540));
  uVar1 = *(undefined8 *)(lVar2 + 0x538);
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101bfa418; end: 101bfa497;  */

void FUN_101bfa418(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x4a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x498);
  pcVar1 = FUN_101bff92c;
  func_0x000107c615b4(FUN_101bff92c,unaff_x22 + 0x50);
  *(code **)(unaff_x22 + 0x558) = pcVar1;
  func_0x000107c5fce8();
  *(code **)(unaff_x22 + 0x560) = pcVar1;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x568) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x570) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfa498,uVar3,uVar2);
  return;
}



/* Entry: 101bfa498; end: 101bfa507;  */

void FUN_101bfa498(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x578) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x4a8);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(undefined8 *)(unaff_x22 + 0x588) = uVar1;
  *(long *)(unaff_x22 + 0x580) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfa508,param_1);
  return;
}



/* Entry: 101bfa508; end: 101bfa653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bfa508(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x510);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x101bfa558;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  *(long *)(lVar2 + _DAT_112e08c18) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bfa654; end: 101bfa803;  */

void FUN_101bfa654(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = *(long *)(unaff_x22 + 0x530);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x520);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x518);
  lVar8 = *(long *)(unaff_x22 + 0x510);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x4a0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x528));
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar1);
  lVar6 = *(long *)(lVar8 + lVar6);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x508);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x500);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x4f8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x4f0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x4e8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4e0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x4d8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x4d0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x4c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x4c0);
  if (lVar6 == 0) {
    FUN_101bff934(unaff_x22 + 0x118);
    func_0x000107c615e8(uVar4);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar10);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x000107c6157c(lVar6);
    func_0x000107c5fd50();
    func_0x000107c615e8(uVar4);
    func_0x000107c61574(lVar6);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar10);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar1);
    FUN_101bff934(unaff_x22 + 0x118);
  }
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x510) + *(long *)(unaff_x22 + 0x530));
  *(undefined8 *)(*(long *)(unaff_x22 + 0x510) + *(long *)(unaff_x22 + 0x530)) = 0;
  func_0x000107c61170();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bfa800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfa804; end: 101bfa86f;  */

void FUN_101bfa804(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfa870,uVar1,uVar2);
  return;
}



/* Entry: 101bfa870; end: 101bfaa47;  */

void FUN_101bfa870(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x90);
  func_0x000107c4ec94();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000107c61170(uVar1);
  if (uVar2 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar1 = uVar2;
    func_0x000107c448a0();
    if ((uVar1 & 1) == 0) {
      if (lRam0000000112e08ca0 != -1) {
        func_0x000107c61568(0x112e08ca0,FUN_101bf9234);
      }
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101bfaa48;
      lVar6 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar6,1);
      uVar7 = 0x112d61d38;
      func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_101b778cc;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110455a38;
      *(long *)(unaff_x22 + 0x70) = lVar6;
      func_0x000107c42904(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
    puVar3 = *(undefined **)(unaff_x22 + 0xb0);
    func_0x000107c4ec80();
    func_0x000107c61180();
    if ((puVar3 == (undefined *)0x0) ||
       (puVar4 = puVar3, func_0x000107c5aa6c(), puVar4 != (undefined *)0x2)) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
    }
    else {
      puVar5 = puVar3;
      func_0x000107c5e2b0();
      func_0x000107c61180();
      uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
      if (puVar5 != (undefined *)0x0) {
        puVar4 = puVar5;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar3);
        func_0x000107c615e8(uVar7);
        goto LAB_101bfaa10;
      }
    }
    func_0x000107c615e8(uVar7);
    func_0x000107c61170(puVar3);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
LAB_101bfaa10:
                    /* WARNING: Could not recover jumptable at 0x000101bfaa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar4);
  return;
}



/* Entry: 101bfaa48; end: 101bfaa9b;  */

void FUN_101bfaa48(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_101bfaa9c;
  }
  else {
    pcVar1 = FUN_101bfab68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xa0),*(undefined8 *)(lVar2 + 0xa8));
  return;
}



/* Entry: 101bfaa9c; end: 101bfab67;  */

void FUN_101bfaa9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  puVar1 = *(undefined **)(unaff_x22 + 0xb0);
  func_0x000107c4ec80();
  func_0x000107c61180();
  if ((puVar1 == (undefined *)0x0) ||
     (puVar2 = puVar1, func_0x000107c5aa6c(), puVar2 != (undefined *)0x2)) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  }
  else {
    puVar2 = puVar1;
    func_0x000107c5e2b0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(uVar4);
      goto LAB_101bfab48;
    }
  }
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(puVar1);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_101bfab48:
                    /* WARNING: Could not recover jumptable at 0x000101bfab5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3);
  return;
}



/* Entry: 101bfab68; end: 101bfabc3;  */

void FUN_101bfab68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c61654();
  func_0x000107c614ac(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bfabc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 101bfabc4; end: 101bfadff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101bfabc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar2 = *(long *)(param_3 + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    goto LAB_101bfacc4;
  }
  func_0x000107c5fadc(param_1,param_2);
  lVar3 = lVar2;
  func_0x000107c4c39c();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(param_1);
  if (lVar3 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    goto LAB_101bfacc4;
  }
  uVar4 = ((ulong *)(lVar3 + _DAT_112fcd620))[1];
  if (uVar4 == 0) {
LAB_101bfac6c:
    uVar5 = *(ulong *)(lVar3 + _DAT_112fcd618);
    uVar4 = ((ulong *)(lVar3 + _DAT_112fcd618))[1];
    uVar1 = uVar5 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) goto LAB_101bfac94;
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    uVar5 = *(ulong *)(lVar3 + _DAT_112fcd620);
    uVar1 = uVar5 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_101bfac6c;
LAB_101bfac94:
    func_0x000107c61434(uVar4);
  }
  func_0x000107c61170(lVar3);
LAB_101bfacc4:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 101bfae00; end: 101bfae7b;  */

void FUN_101bfae00(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bfae7c;
  plVar2[8] = param_3;
  plVar2[9] = param_4;
  plVar2[7] = param_2;
  lVar3 = 0;
  func_0x000103a82768();
  plVar2[10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0xb] = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xc] = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xd] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xe] = uVar5;
  lVar3 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xf] = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x10] = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x11] = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x12] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x13] = uVar5;
  lVar6 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar6;
  func_0x000107c5fce8();
  plVar2[0x14] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x15] = lVar6;
  plVar2[0x16] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfb01c,lVar6,lVar3);
  return;
}



/* Entry: 101bfae7c; end: 101bfaedf;  */

void FUN_101bfae7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfaee0,uVar2,uVar1);
  return;
}



/* Entry: 101bfaee0; end: 101bfaf0f;  */

void FUN_101bfaee0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101bfaf0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfaf10; end: 101bfb01b;  */

void FUN_101bfaf10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  lVar1 = 0;
  func_0x000103a82768();
  *(long *)(unaff_x22 + 0x50) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfb01c,uVar4,uVar5);
  return;
}



/* Entry: 101bfb01c; end: 101bfb09b;  */

void FUN_101bfb01c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x000101c0085c(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bfb09c;
                    /* WARNING: Could not recover jumptable at 0x000101bfb098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar5,*(undefined8 *)(unaff_x22 + 0x98),uVar2,lVar3);
  return;
}



/* Entry: 101bfb09c; end: 101bfb0fb;  */

void FUN_101bfb09c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xb8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_101bfb0fc;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_101bfb84c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101bfb0fc; end: 101bfb3db;  */

void FUN_101bfb0fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  long unaff_x22;
  long lVar17;
  undefined *puVar18;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar12 = *(long *)(unaff_x22 + 0x58);
  func_0x000101c005ac(*(undefined8 *)(unaff_x22 + 0x98),uVar13,0x112e085c8,&UNK_10d9dcfb0);
  pcVar16 = *(code **)(lVar12 + 0x30);
  *(code **)(unaff_x22 + 0xc0) = pcVar16;
  (*pcVar16)(uVar13,1,uVar10);
  lVar12 = *(long *)(unaff_x22 + 0x90);
  if ((int)uVar13 == 1) {
    func_0x000101c005f4(lVar12,0x112e085c8,&UNK_10d9dcfb0);
  }
  else {
    lVar6 = lVar12;
    func_0x000107c614c4(lVar12,*(undefined8 *)(unaff_x22 + 0x50));
    if ((int)lVar6 == 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
      func_0x000101c005f4(*(undefined8 *)(unaff_x22 + 0x98),0x112e085c8,&UNK_10d9dcfb0);
      func_0x000107c61574(uVar13);
      lVar6 = 0x112e08440;
      func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
      func_0x000107c6142c(*(undefined8 *)(lVar12 + *(int *)(lVar6 + 0x30)));
      func_0x000101c005f4(lVar12,0x112d373d8,&UNK_10d9014c0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
      func_0x000107c615c0(uVar13);
      func_0x000107c615c0(uVar2);
      func_0x000107c615c0(uVar10);
      func_0x000107c615c0(uVar3);
      func_0x000107c615c0(uVar15);
      func_0x000107c615c0(uVar4);
      func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bfb3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    func_0x000101c00570(lVar12);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000101c005ac(*(undefined8 *)(unaff_x22 + 0x98),uVar13,0x112e085c8,&UNK_10d9dcfb0);
  (*pcVar16)(uVar13,1,uVar10);
  puVar14 = *(undefined8 **)(unaff_x22 + 0x88);
  if ((int)uVar13 == 1) {
    func_0x000101c005f4(puVar14,0x112e085c8,&UNK_10d9dcfb0);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar7 = puVar14;
    func_0x000107c614c4(puVar14,*(undefined8 *)(unaff_x22 + 0x50));
    if ((int)puVar7 == 1) {
      puVar18 = (undefined *)*puVar14;
    }
    else {
      func_0x000101c00570(puVar14);
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar11 = *(long *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x58);
  lVar17 = *(long *)(unaff_x22 + 0x38);
  lVar12 = 0x112e08440;
  func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
  *(long *)(unaff_x22 + 200) = lVar12;
  iVar5 = *(int *)(lVar12 + 0x30);
  lVar12 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar11,1,1,lVar12);
  *(undefined **)(lVar11 + iVar5) = puVar18;
  func_0x000107c6159c(lVar11,uVar13,0);
  uVar10 = *(undefined8 *)(lVar17 + 0x18);
  lVar12 = *(long *)(lVar17 + 0x20);
  func_0x000101c0085c(lVar17,uVar10);
  func_0x000101c0052c(lVar11,uVar15);
  (**(code **)(lVar6 + 0x38))(uVar15,0,1,uVar13);
  piVar9 = *(int **)(lVar12 + 0x10);
  iVar5 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101bfb3dc;
                    /* WARNING: Could not recover jumptable at 0x000101bfb314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar5 + (long)piVar9))(*(undefined8 *)(unaff_x22 + 0x80),uVar10,lVar12);
  return;
}



/* Entry: 101bfb3dc; end: 101bfb44f;  */

void FUN_101bfb3dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xd0));
  if (unaff_x20 == 0) {
    func_0x000101c005f4(*(undefined8 *)(lVar4 + 0x80),0x112e085c8,&UNK_10d9dcfb0);
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_101bfb450;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_101bfbb44;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101bfb450; end: 101bfb4ff;  */

void FUN_101bfb450(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 *puVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  puVar6 = *(uint3 **)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(puVar6 + 6);
  lVar3 = *(long *)(puVar6 + 8);
  func_0x000101c0085c(puVar6,uVar2);
  func_0x000103a83eb4();
  uVar9 = *(undefined8 *)(puVar6 + 2);
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  uVar4 = *puVar6;
  uVar5 = puVar6[4];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bfb500;
                    /* WARNING: Could not recover jumptable at 0x000101bfb4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))((ulong)uVar4,uVar9,(char)uVar5,uVar2,lVar3);
  return;
}



/* Entry: 101bfb500; end: 101bfb56f;  */

void FUN_101bfb500(undefined1 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xe0));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0xe8) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_101bfb570;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_101bfbc24;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101bfb570; end: 101bfb84b;  */

void FUN_101bfb570(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  cVar4 = *(char *)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  if (cVar4 == '\x01') {
    lVar6 = *(long *)(unaff_x22 + 0x98);
    func_0x000101c00570(*(undefined8 *)(unaff_x22 + 0x70));
    uVar8 = 0x112e085c8;
    puVar5 = &UNK_10d9dcfb0;
  }
  else {
    func_0x000101c005ac(*(undefined8 *)(unaff_x22 + 0x48),unaff_x22 + 0x10,0x112e08c98,
                        &UNK_10d9de000);
    lVar6 = *(long *)(unaff_x22 + 0x28);
    if (lVar6 != 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar7 = *(long *)(unaff_x22 + 0x30);
      func_0x000101c0085c(unaff_x22 + 0x10,lVar6);
      func_0x000101c0052c(uVar9,uVar8);
      func_0x000107c614c4(uVar8,uVar11);
      if ((int)uVar8 == 0) {
        lVar10 = *(long *)(unaff_x22 + 0x68);
        func_0x000107c6142c(*(undefined8 *)(lVar10 + *(int *)(*(long *)(unaff_x22 + 200) + 0x30)));
        func_0x000101c005f4(lVar10,0x112d373d8,&UNK_10d9014c0);
        uVar8 = 2;
      }
      else if ((int)uVar8 == 1) {
        func_0x000101c00570(*(undefined8 *)(unaff_x22 + 0x68));
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      pcVar12 = *(code **)(unaff_x22 + 0xc0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
      func_0x000101c005ac(*(undefined8 *)(unaff_x22 + 0x98),uVar9,0x112e085c8,&UNK_10d9dcfb0);
      (*pcVar12)(uVar9,1,uVar11);
      if ((int)uVar9 == 1) {
        func_0x000101c005f4(*(undefined8 *)(unaff_x22 + 0x78),0x112e085c8,&UNK_10d9dcfb0);
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
        func_0x000101c0052c(*(undefined8 *)(unaff_x22 + 0x78),uVar9);
        func_0x000107c614c4(uVar9,uVar11);
        if ((int)uVar9 == 0) {
          lVar10 = *(long *)(unaff_x22 + 0x60);
          func_0x000107c6142c(*(undefined8 *)(lVar10 + *(int *)(*(long *)(unaff_x22 + 200) + 0x30)))
          ;
          func_0x000101c005f4(lVar10,0x112d373d8,&UNK_10d9014c0);
          uVar9 = 2;
        }
        else if ((int)uVar9 == 1) {
          func_0x000101c00570(*(undefined8 *)(unaff_x22 + 0x60));
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        func_0x000101c00570(*(undefined8 *)(unaff_x22 + 0x78));
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
      (**(code **)(lVar7 + 0x18))(0,uVar8,uVar9,0,lVar6,lVar7);
      func_0x000101c00570(uVar13);
      func_0x000101c005f4(uVar11,0x112e085c8,&UNK_10d9dcfb0);
      func_0x000101c0083c(unaff_x22 + 0x10);
      goto LAB_101bfb7e0;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000101c00570(*(undefined8 *)(unaff_x22 + 0x70));
    func_0x000101c005f4(uVar8,0x112e085c8,&UNK_10d9dcfb0);
    uVar8 = 0x112e08c98;
    puVar5 = &UNK_10d9de000;
    lVar6 = unaff_x22 + 0x10;
  }
  func_0x000101c005f4(lVar6,uVar8,puVar5);
LAB_101bfb7e0:
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000101bfb848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfb84c; end: 101bfbb43;  */

void FUN_101bfb84c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  long unaff_x22;
  long lVar17;
  undefined *puVar18;
  
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x98),1,1,*(undefined8 *)(unaff_x22 + 0x50));
  uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar12 = *(long *)(unaff_x22 + 0x58);
  func_0x000101c005ac(*(undefined8 *)(unaff_x22 + 0x98),uVar13,0x112e085c8,&UNK_10d9dcfb0);
  pcVar16 = *(code **)(lVar12 + 0x30);
  *(code **)(unaff_x22 + 0xc0) = pcVar16;
  (*pcVar16)(uVar13,1,uVar10);
  lVar12 = *(long *)(unaff_x22 + 0x90);
  if ((int)uVar13 == 1) {
    func_0x000101c005f4(lVar12,0x112e085c8,&UNK_10d9dcfb0);
  }
  else {
    lVar6 = lVar12;
    func_0x000107c614c4(lVar12,*(undefined8 *)(unaff_x22 + 0x50));
    if ((int)lVar6 == 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
      func_0x000101c005f4(*(undefined8 *)(unaff_x22 + 0x98),0x112e085c8,&UNK_10d9dcfb0);
      func_0x000107c61574(uVar13);
      lVar6 = 0x112e08440;
      func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
      func_0x000107c6142c(*(undefined8 *)(lVar12 + *(int *)(lVar6 + 0x30)));
      func_0x000101c005f4(lVar12,0x112d373d8,&UNK_10d9014c0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
      func_0x000107c615c0(uVar13);
      func_0x000107c615c0(uVar2);
      func_0x000107c615c0(uVar10);
      func_0x000107c615c0(uVar3);
      func_0x000107c615c0(uVar15);
      func_0x000107c615c0(uVar4);
      func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bfbb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    func_0x000101c00570(lVar12);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000101c005ac(*(undefined8 *)(unaff_x22 + 0x98),uVar13,0x112e085c8,&UNK_10d9dcfb0);
  (*pcVar16)(uVar13,1,uVar10);
  puVar14 = *(undefined8 **)(unaff_x22 + 0x88);
  if ((int)uVar13 == 1) {
    func_0x000101c005f4(puVar14,0x112e085c8,&UNK_10d9dcfb0);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar7 = puVar14;
    func_0x000107c614c4(puVar14,*(undefined8 *)(unaff_x22 + 0x50));
    if ((int)puVar7 == 1) {
      puVar18 = (undefined *)*puVar14;
    }
    else {
      func_0x000101c00570(puVar14);
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar11 = *(long *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x58);
  lVar17 = *(long *)(unaff_x22 + 0x38);
  lVar12 = 0x112e08440;
  func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
  *(long *)(unaff_x22 + 200) = lVar12;
  iVar5 = *(int *)(lVar12 + 0x30);
  lVar12 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar11,1,1,lVar12);
  *(undefined **)(lVar11 + iVar5) = puVar18;
  func_0x000107c6159c(lVar11,uVar13,0);
  uVar10 = *(undefined8 *)(lVar17 + 0x18);
  lVar12 = *(long *)(lVar17 + 0x20);
  func_0x000101c0085c(lVar17,uVar10);
  func_0x000101c0052c(lVar11,uVar15);
  (**(code **)(lVar6 + 0x38))(uVar15,0,1,uVar13);
  piVar9 = *(int **)(lVar12 + 0x10);
  iVar5 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101bfb3dc;
                    /* WARNING: Could not recover jumptable at 0x000101bfba7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar5 + (long)piVar9))(*(undefined8 *)(unaff_x22 + 0x80),uVar10,lVar12);
  return;
}



/* Entry: 101bfbb44; end: 101bfbc23;  */

void FUN_101bfbb44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000101c005f4(uVar6,0x112e085c8,&UNK_10d9dcfb0);
  func_0x000101c00570(uVar7);
  func_0x000101c005f4(uVar1,0x112e085c8,&UNK_10d9dcfb0);
  func_0x000107c614ac(uVar5);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101bfbc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfbc24; end: 101bfbcdb;  */

void FUN_101bfbc24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000101c00570(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000101c005f4(uVar7,0x112e085c8,&UNK_10d9dcfb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bfbcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfbcdc; end: 101bfbe3b;  */

void FUN_101bfbcdc(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_90,1,0);
    *(undefined1 *)(param_2 + 0x10) = 1;
    FUN_101c00330(param_4,auStack_b8);
    FUN_101c00330(param_5,auStack_e0);
    func_0x000101c00374(param_6,&uStack_108);
    puVar1 = &UNK_1104559d0;
    func_0x000107c613fc(&UNK_1104559d0,0xa0,7);
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(undefined4 *)(puVar1 + 0x18) = param_1;
    func_0x000100cc98ac(auStack_b8,puVar1 + 0x20);
    func_0x000100cc98ac(auStack_e0,puVar1 + 0x48);
    *(undefined8 *)(puVar1 + 0x78) = uStack_100;
    *(undefined8 *)(puVar1 + 0x70) = uStack_108;
    *(undefined8 *)(puVar1 + 0x88) = uStack_f0;
    *(undefined8 *)(puVar1 + 0x80) = uStack_f8;
    *(undefined8 *)(puVar1 + 0x90) = uStack_e8;
    *(undefined8 *)(puVar1 + 0x98) = param_7;
    func_0x000107c61174(param_3);
    func_0x000107c6157c(param_7);
    uVar2 = 7;
    func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9de018,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 101bfbe3c; end: 101bfbeb3;  */

void FUN_101bfbe3c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined4 *)(unaff_x22 + 0xf8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfbeb4,uVar1,uVar2);
  return;
}



/* Entry: 101bfbeb4; end: 101bfc017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bfbeb4(void)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = _DAT_112e08c30;
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined4 *)(unaff_x22 + 0xf8);
  lVar1 = *(long *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(lVar1 + _DAT_112e08c30);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar8;
  FUN_101c00330(*(undefined8 *)(unaff_x22 + 0xa8),unaff_x22 + 0x10);
  FUN_101c00330(uVar5,unaff_x22 + 0x38);
  func_0x000101c00374(uVar7,unaff_x22 + 0x60);
  puVar4 = &UNK_1104559f8;
  func_0x000107c613fc(&UNK_1104559f8,0xa0,7);
  *(long *)(puVar4 + 0x10) = lVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar8;
  *(undefined4 *)(puVar4 + 0x20) = uVar2;
  func_0x000100cc98ac(unaff_x22 + 0x10,puVar4 + 0x28);
  func_0x000100cc98ac(unaff_x22 + 0x38,puVar4 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(puVar4 + 0x80) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(puVar4 + 0x78) = uVar5;
  *(undefined8 *)(puVar4 + 0x90) = uVar9;
  *(undefined8 *)(puVar4 + 0x88) = uVar7;
  *(undefined8 *)(puVar4 + 0x98) = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61580(uVar8,2);
  func_0x000107c61174(lVar1);
  uVar5 = 7;
  func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9de028,puVar4,PTR___sytN_11034f1b0 + 8);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar5;
  func_0x000107c61574(puVar4);
  uVar7 = *(undefined8 *)(lVar1 + lVar3);
  *(undefined8 *)(lVar1 + lVar3) = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(uVar7);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bfc018;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 101bfc018; end: 101bfc0cf;  */

void FUN_101bfc018(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101bfc05c,*(undefined8 *)(lVar1 + 0xd0),*(undefined8 *)(lVar1 + 0xd8));
  return;
}



/* Entry: 101bfc0d0; end: 101bfc1d7;  */

void FUN_101bfc0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined4 *)(unaff_x22 + 0x120) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  lVar3 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  lVar3 = 0;
  func_0x000103a82768();
  *(long *)(unaff_x22 + 0x98) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 200) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfc1d8,uVar4,uVar5);
  return;
}



/* Entry: 101bfc1d8; end: 101bfc477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bfc1d8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  
  lVar13 = _DAT_112e08c28;
  *(long *)(unaff_x22 + 0xd8) = _DAT_112e08c28;
  if (*(char *)(*(long *)(unaff_x22 + 0x50) + lVar13) == '\x01' && *(long *)(unaff_x22 + 0x58) != 0)
  {
    plVar10 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe0) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101bfc478;
    plVar10 = (long *)PTR___sytN_11034f1b0;
LAB_101bfc280:
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar10);
    return;
  }
  uVar5 = *(uint *)(unaff_x22 + 0x120);
  *(undefined1 *)(*(long *)(unaff_x22 + 0x50) + lVar13) = 1;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((uVar5 & 0xfffffffe) == 2) {
    puVar11 = *(undefined **)(*(long *)(unaff_x22 + 0x50) + _DAT_112e08c20);
    if (puVar11 == (undefined *)0x0) {
      lVar13 = *(long *)(*(long *)(unaff_x22 + 0x50) + _DAT_112e08c10);
      *(long *)(unaff_x22 + 0xe8) = lVar13;
      if (lVar13 != 0) {
        plVar10 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
        func_0x000107c6157c(lVar13);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xf0) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_101bfc710;
        goto LAB_101bfc280;
      }
      puVar11 = puRam0000000113803b80;
      if (lRam0000000112e08be0 != -1) {
        func_0x000107c61568(0x112e08be0,0x101bf88d4);
        puVar11 = puRam0000000113803b80;
      }
    }
    func_0x000107c61434(puVar11);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar13 = *(long *)(unaff_x22 + 0xa0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  FUN_101bfd0c8(uVar14,puVar11,*(undefined4 *)(unaff_x22 + 0x120));
  func_0x000107c6142c(puVar11);
  pcVar6 = *(code **)(lVar13 + 0x30);
  *(code **)(unaff_x22 + 0xf8) = pcVar6;
  (*pcVar6)(uVar14,1,uVar12);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  if ((int)uVar14 == 1) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
    func_0x000101c005f4(uVar12,0x112e085c8,&UNK_10d9dcfb0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar14);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bfc36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar9 = *(long *)(unaff_x22 + 0x60);
  FUN_101c00738(uVar12,*(undefined8 *)(unaff_x22 + 0xb8));
  uVar12 = *(undefined8 *)(lVar9 + 0x18);
  lVar13 = *(long *)(lVar9 + 0x20);
  func_0x000101c0085c(lVar9,uVar12);
  piVar7 = *(int **)(lVar13 + 8);
  iVar1 = *piVar7;
  plVar10 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101bfc8c8;
                    /* WARNING: Could not recover jumptable at 0x000101bfc3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(plVar10,*(undefined8 *)(unaff_x22 + 0x88),uVar12,lVar13);
  return;
}



/* Entry: 101bfc478; end: 101bfc4bb;  */

void FUN_101bfc478(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101bfc4bc,*(undefined8 *)(lVar1 + 200),*(undefined8 *)(lVar1 + 0xd0));
  return;
}



/* Entry: 101bfc4bc; end: 101bfc70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bfc4bc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  
  uVar5 = *(uint *)(unaff_x22 + 0x120);
  *(undefined1 *)(*(long *)(unaff_x22 + 0x50) + *(long *)(unaff_x22 + 0xd8)) = 1;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((uVar5 & 0xfffffffe) == 2) {
    puVar11 = *(undefined **)(*(long *)(unaff_x22 + 0x50) + _DAT_112e08c20);
    if (puVar11 == (undefined *)0x0) {
      lVar13 = *(long *)(*(long *)(unaff_x22 + 0x50) + _DAT_112e08c10);
      *(long *)(unaff_x22 + 0xe8) = lVar13;
      if (lVar13 != 0) {
        plVar10 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
        func_0x000107c6157c(lVar13);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xf0) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_101bfc710;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
                  (plVar10,unaff_x22 + 0x38,lVar13,&UNK_110455330);
        return;
      }
      puVar11 = puRam0000000113803b80;
      if (lRam0000000112e08be0 != -1) {
        func_0x000107c61568(0x112e08be0,0x101bf88d4);
        puVar11 = puRam0000000113803b80;
      }
    }
    func_0x000107c61434(puVar11);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar13 = *(long *)(unaff_x22 + 0xa0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  FUN_101bfd0c8(uVar14,puVar11,*(undefined4 *)(unaff_x22 + 0x120));
  func_0x000107c6142c(puVar11);
  pcVar6 = *(code **)(lVar13 + 0x30);
  *(code **)(unaff_x22 + 0xf8) = pcVar6;
  (*pcVar6)(uVar14,1,uVar12);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  if ((int)uVar14 != 1) {
    lVar9 = *(long *)(unaff_x22 + 0x60);
    FUN_101c00738(uVar12,*(undefined8 *)(unaff_x22 + 0xb8));
    uVar12 = *(undefined8 *)(lVar9 + 0x18);
    lVar13 = *(long *)(lVar9 + 0x20);
    func_0x000101c0085c(lVar9,uVar12);
    piVar7 = *(int **)(lVar13 + 8);
    iVar1 = *piVar7;
    plVar10 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x100) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101bfc8c8;
                    /* WARNING: Could not recover jumptable at 0x000101bfc664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))(plVar10,*(undefined8 *)(unaff_x22 + 0x88),uVar12,lVar13)
    ;
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000101c005f4(uVar12,0x112e085c8,&UNK_10d9dcfb0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bfc5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfc710; end: 101bfc75b;  */

void FUN_101bfc710(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xe8);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101bfc75c,*(undefined8 *)(lVar2 + 200),*(undefined8 *)(lVar2 + 0xd0));
  return;
}



/* Entry: 101bfc75c; end: 101bfc8c7;  */

void FUN_101bfc75c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x40));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  FUN_101bfd0c8(uVar12,uVar11,*(undefined4 *)(unaff_x22 + 0x120));
  func_0x000107c6142c(uVar11);
  pcVar7 = *(code **)(lVar3 + 0x30);
  *(code **)(unaff_x22 + 0xf8) = pcVar7;
  (*pcVar7)(uVar12,1,uVar2);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  if ((int)uVar12 == 1) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
    func_0x000101c005f4(uVar11,0x112e085c8,&UNK_10d9dcfb0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c615c0(uVar11);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101bfc848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar10 = *(long *)(unaff_x22 + 0x60);
  FUN_101c00738(uVar11,*(undefined8 *)(unaff_x22 + 0xb8));
  uVar11 = *(undefined8 *)(lVar10 + 0x18);
  lVar3 = *(long *)(lVar10 + 0x20);
  func_0x000101c0085c(lVar10,uVar11);
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bfc8c8;
                    /* WARNING: Could not recover jumptable at 0x000101bfc8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(plVar6,*(undefined8 *)(unaff_x22 + 0x88),uVar11,lVar3);
  return;
}



/* Entry: 101bfc8c8; end: 101bfc927;  */

void FUN_101bfc8c8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x100));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_101bfc928;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_101bfce78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101bfc928; end: 101bfc9eb;  */

void FUN_101bfc928(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar6 = *(long *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(lVar6 + 0x18);
  lVar5 = *(long *)(lVar6 + 0x20);
  func_0x000101c0085c(lVar6,uVar3);
  FUN_101c0052c(uVar9,uVar10);
  (**(code **)(lVar4 + 0x38))(uVar10,0,1,uVar2);
  piVar8 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bfc9ec;
                    /* WARNING: Could not recover jumptable at 0x000101bfc9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(*(undefined8 *)(unaff_x22 + 0x80),uVar3,lVar5);
  return;
}



/* Entry: 101bfc9ec; end: 101bfca5f;  */

void FUN_101bfc9ec(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x110) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x108));
  if (unaff_x20 == 0) {
    func_0x000101c005f4(*(undefined8 *)(lVar4 + 0x80),0x112e085c8,&UNK_10d9dcfb0);
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_101bfca60;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_101bfcf54;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101bfca60; end: 101bfcb0f;  */

void FUN_101bfca60(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 *puVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  puVar6 = *(uint3 **)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(puVar6 + 6);
  lVar3 = *(long *)(puVar6 + 8);
  func_0x000101c0085c(puVar6,uVar2);
  func_0x000103a83eb4();
  uVar9 = *(undefined8 *)(puVar6 + 2);
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  uVar4 = *puVar6;
  uVar5 = puVar6[4];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bfcb10;
                    /* WARNING: Could not recover jumptable at 0x000101bfcb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))((ulong)uVar4,uVar9,(char)uVar5,uVar2,lVar3);
  return;
}



/* Entry: 101bfcb10; end: 101bfcb7f;  */

void FUN_101bfcb10(undefined1 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x118));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x124) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_101bfcb80;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_101bfd020;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101bfcb80; end: 101bfce77;  */

void FUN_101bfcb80(void)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  cVar2 = *(char *)(unaff_x22 + 0x124);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  if (cVar2 == '\x01') {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000101c005f4(*(undefined8 *)(unaff_x22 + 0x88),0x112e085c8,&UNK_10d9dcfb0);
    func_0x000101c00570(uVar6);
  }
  else {
    func_0x000101c005ac(*(undefined8 *)(unaff_x22 + 0x70),unaff_x22 + 0x10,0x112e08c98,
                        &UNK_10d9de000);
    lVar4 = *(long *)(unaff_x22 + 0x28);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
    if (lVar4 == 0) {
      func_0x000101c005f4(*(undefined8 *)(unaff_x22 + 0x88),0x112e085c8,&UNK_10d9dcfb0);
      func_0x000101c00570(uVar6);
      func_0x000101c005f4(unaff_x22 + 0x10,0x112e08c98,&UNK_10d9de000);
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
      lVar7 = *(long *)(unaff_x22 + 0x30);
      func_0x000101c0085c(unaff_x22 + 0x10,lVar4);
      func_0x000101c0052c(uVar6,uVar8);
      func_0x000107c614c4(uVar8,uVar10);
      if ((int)uVar8 == 0) {
        lVar9 = *(long *)(unaff_x22 + 0xb0);
        lVar3 = 0x112e08440;
        func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
        func_0x000107c6142c(*(undefined8 *)(lVar9 + *(int *)(lVar3 + 0x30)));
        func_0x000101c005f4(lVar9,0x112d373d8,&UNK_10d9014c0);
        uVar6 = 2;
      }
      else if ((int)uVar8 == 1) {
        func_0x000101c00570(*(undefined8 *)(unaff_x22 + 0xb0));
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
      pcVar11 = *(code **)(unaff_x22 + 0xf8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000101c005ac(*(undefined8 *)(unaff_x22 + 0x88),uVar8,0x112e085c8,&UNK_10d9dcfb0);
      (*pcVar11)(uVar8,1,uVar10);
      if ((int)uVar8 == 1) {
        func_0x000101c005f4(*(undefined8 *)(unaff_x22 + 0x78),0x112e085c8,&UNK_10d9dcfb0);
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
        func_0x000101c0052c(*(undefined8 *)(unaff_x22 + 0x78),uVar8);
        func_0x000107c614c4(uVar8,uVar10);
        if ((int)uVar8 == 0) {
          lVar9 = *(long *)(unaff_x22 + 0xa8);
          lVar3 = 0x112e08440;
          func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
          func_0x000107c6142c(*(undefined8 *)(lVar9 + *(int *)(lVar3 + 0x30)));
          func_0x000101c005f4(lVar9,0x112d373d8,&UNK_10d9014c0);
          uVar8 = 2;
        }
        else if ((int)uVar8 == 1) {
          func_0x000101c00570(*(undefined8 *)(unaff_x22 + 0xa8));
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
        func_0x000101c00570(*(undefined8 *)(unaff_x22 + 0x78));
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
      (**(code **)(lVar7 + 0x18))(0,uVar6,uVar8,0,lVar4,lVar7);
      func_0x000101c005f4(uVar12,0x112e085c8,&UNK_10d9dcfb0);
      func_0x000101c00570(uVar10);
      func_0x000101c0083c(unaff_x22 + 0x10);
    }
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000101bfce74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfce78; end: 101bfcf53;  */

void FUN_101bfce78(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x88),1,1,*(undefined8 *)(unaff_x22 + 0x98));
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar6 = *(long *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(lVar6 + 0x18);
  lVar5 = *(long *)(lVar6 + 0x20);
  func_0x000101c0085c(lVar6,uVar3);
  FUN_101c0052c(uVar9,uVar10);
  (**(code **)(lVar4 + 0x38))(uVar10,0,1,uVar2);
  piVar8 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bfc9ec;
                    /* WARNING: Could not recover jumptable at 0x000101bfcf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(*(undefined8 *)(unaff_x22 + 0x80),uVar3,lVar5);
  return;
}



/* Entry: 101bfcf54; end: 101bfd01f;  */

void FUN_101bfcf54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000101c005f4(uVar2,0x112e085c8,&UNK_10d9dcfb0);
  func_0x000101c005f4(uVar3,0x112e085c8,&UNK_10d9dcfb0);
  func_0x000101c00570(uVar1);
  func_0x000107c614ac(uVar6);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bfd01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfd020; end: 101bfd0c7;  */

void FUN_101bfd020(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000101c005f4(uVar5,0x112e085c8,&UNK_10d9dcfb0);
  func_0x000101c00570(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bfd0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfd0c8; end: 101bfd37f;  */

void FUN_101bfd0c8(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_3 < 2) {
    if ((param_3 != 0) && (param_3 == 1)) {
      lVar2 = 0;
      func_0x000103a82768();
      func_0x000107c6159c(param_1,lVar2,2);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
      uVar3 = 0;
      goto LAB_101bfd1bc;
    }
  }
  else {
    if (param_3 == 2) {
      *param_1 = param_2;
      lVar2 = 0;
      func_0x000103a82768();
      uVar3 = 1;
LAB_101bfd1ec:
      func_0x000107c6159c(param_1,lVar2,uVar3);
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,0,1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
    if (param_3 == 3) {
      lVar2 = 0x112e08440;
      func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
      iVar1 = *(int *)(lVar2 + 0x30);
      lVar2 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,1,1,lVar2);
      *(undefined8 *)((long)param_1 + (long)iVar1) = param_2;
      lVar2 = 0;
      func_0x000103a82768();
      uVar3 = 0;
      goto LAB_101bfd1ec;
    }
  }
  lVar2 = 0;
  func_0x000103a82768();
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  uVar3 = 1;
LAB_101bfd1bc:
                    /* WARNING: Could not recover jumptable at 0x000101bfd1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar2);
  return;
}



/* Entry: 101bfd380; end: 101bfd3f3;  */

void FUN_101bfd380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfd3f4,uVar1,uVar2);
  return;
}



/* Entry: 101bfd3f4; end: 101bfd5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bfd3f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  if ((*(byte *)(lVar5 + _DAT_112e08c28) & 1) == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x88);
    *(undefined1 *)(lVar5 + _DAT_112e08c28) = 1;
    lVar5 = _DAT_112e08c10;
    lVar6 = *(long *)(lVar8 + _DAT_112e08c10);
    if (lVar6 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c6157c(lVar6);
      func_0x000107c5fd50();
      func_0x000107c61574(lVar6);
      uVar2 = *(undefined8 *)(lVar8 + lVar5);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar6 = *(long *)(unaff_x22 + 0x90);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar7 = *(long *)(unaff_x22 + 0x88);
    *(undefined8 *)(lVar8 + lVar5) = 0;
    func_0x000107c61574(uVar2);
    FUN_101c00330(uVar1,unaff_x22 + 0x10);
    FUN_101c00330(uVar4,unaff_x22 + 0x38);
    func_0x000101c00374(uVar9,unaff_x22 + 0x60);
    puVar3 = &UNK_1104559a8;
    func_0x000107c613fc(&UNK_1104559a8,0x88,7);
    func_0x000100cc98ac(unaff_x22 + 0x10,puVar3 + 0x10);
    func_0x000100cc98ac(unaff_x22 + 0x38,puVar3 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(puVar3 + 0x68) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(puVar3 + 0x60) = uVar2;
    *(undefined8 *)(puVar3 + 0x78) = uVar9;
    *(undefined8 *)(puVar3 + 0x70) = uVar4;
    *(undefined8 *)(puVar3 + 0x80) = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = 7;
    func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9ddff0,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar3);
    uVar4 = *(undefined8 *)(lVar7 + _DAT_112e08c30);
    *(undefined8 *)(lVar7 + _DAT_112e08c30) = uVar2;
    func_0x000107c61574(uVar4);
    func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x90);
    func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x38,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
  }
  if (lVar6 != 0) {
    func_0x000107c42018();
    func_0x000107c61170(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000101bfd5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfd5d0; end: 101bfd64b;  */

void FUN_101bfd5d0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar5 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar5;
  plVar6 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bfd64c;
  plVar6[8] = param_3;
  plVar6[9] = param_4;
  plVar6[7] = param_2;
  lVar1 = 0;
  func_0x000103a82768();
  plVar6[10] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar6[0xb] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xc] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xd] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xe] = uVar3;
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xf] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x10] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x11] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x12] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x13] = uVar3;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar4;
  func_0x000107c5fce8();
  plVar6[0x14] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar6[0x15] = lVar4;
  plVar6[0x16] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfb01c,lVar4,lVar1);
  return;
}



/* Entry: 101bfd64c; end: 101bfd6af;  */

void FUN_101bfd64c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101c00934,uVar2,uVar1);
  return;
}



/* Entry: 101bfd6b0; end: 101bfd6eb;  */

void FUN_101bfd6b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bfd6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bfd6ec; end: 101bfd7fb;  */

void FUN_101bfd6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_101bff7a8(param_6,&uStack_88);
  puVar1 = &UNK_110455868;
  func_0x000107c613fc(&UNK_110455868,0x80,7);
  *(undefined8 *)(puVar1 + 0x50) = uStack_70;
  *(undefined8 *)(puVar1 + 0x48) = uStack_78;
  *(undefined8 *)(puVar1 + 0x60) = uStack_60;
  *(undefined8 *)(puVar1 + 0x58) = uStack_68;
  *(undefined8 *)(puVar1 + 0x70) = uStack_50;
  *(undefined8 *)(puVar1 + 0x68) = uStack_58;
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x78) = uStack_48;
  *(undefined8 *)(puVar1 + 0x40) = uStack_80;
  *(undefined8 *)(puVar1 + 0x38) = uStack_88;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_5);
  uVar2 = 7;
  func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9ddfa8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 101bfd7fc; end: 101bfd86f;  */

void FUN_101bfd7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfd870,uVar1,uVar2);
  return;
}



/* Entry: 101bfd870; end: 101bfda6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bfd870(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x58,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xd0) = lVar7;
  if (lVar7 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  }
  else {
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0x90) + _DAT_112e08c20);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)(unaff_x22 + 0x90) + _DAT_112e08c10);
      *(long *)(unaff_x22 + 0xd8) = lVar7;
      if (lVar7 != 0) {
        plVar6 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
        func_0x000107c6157c(lVar7);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xe0) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_101bfda6c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
                  (plVar6,unaff_x22 + 0x70,lVar7,&UNK_110455330);
        return;
      }
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
      if (lRam0000000112e08be0 != -1) {
        func_0x000107c61568(0x112e08be0,0x101bf88d4);
      }
      lVar7 = lRam0000000113803b80;
      func_0x000107c61434(lRam0000000113803b80);
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000107c61434(lVar7);
      func_0x000107c61574(uVar4);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
    FUN_101bfdbb0(uVar2);
    FUN_101bff7a8(uVar9,unaff_x22 + 0x10);
    puVar3 = &UNK_110455890;
    func_0x000107c613fc(&UNK_110455890,0x68,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar8;
    *(undefined8 *)(puVar3 + 0x18) = uVar4;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(puVar3 + 0x48) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(puVar3 + 0x40) = uVar9;
    *(undefined8 *)(puVar3 + 0x58) = uVar11;
    *(undefined8 *)(puVar3 + 0x50) = uVar10;
    *(undefined8 *)(puVar3 + 0x60) = *(undefined8 *)(unaff_x22 + 0x50);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(puVar3 + 0x20) = uVar11;
    *(undefined8 *)(puVar3 + 0x38) = uVar10;
    *(undefined8 *)(puVar3 + 0x30) = uVar9;
    func_0x000107c61174(uVar8);
    func_0x000107c6157c(uVar4);
    FUN_101bfe0a4(uVar5,uVar1,uVar2,lVar7,FUN_101c00244,puVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x000101bfd9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfda6c; end: 101bfdab7;  */

void FUN_101bfda6c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe0));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101bfdab8,*(undefined8 *)(lVar2 + 0xc0),*(undefined8 *)(lVar2 + 200));
  return;
}



/* Entry: 101bfdab8; end: 101bfdbaf;  */

void FUN_101bfdab8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x78));
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  FUN_101bfdbb0(uVar4);
  FUN_101bff7a8(uVar8,unaff_x22 + 0x10);
  puVar5 = &UNK_110455890;
  func_0x000107c613fc(&UNK_110455890,0x68,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(puVar5 + 0x48) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(puVar5 + 0x40) = uVar8;
  *(undefined8 *)(puVar5 + 0x58) = uVar10;
  *(undefined8 *)(puVar5 + 0x50) = uVar9;
  *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)(unaff_x22 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(uVar2);
  FUN_101bfe0a4(uVar6,uVar3,uVar4,uVar1,FUN_101c00244,puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bfdbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfdbb0; end: 101bfdf8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101bfdbb0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puStack_68;
  
  lVar7 = *(long *)(param_1 + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar7 != 0) {
    lVar19 = lVar7;
    func_0x000107c3db3c();
    func_0x000107c61180();
    lVar8 = lVar19;
    func_0x000107c5fe10();
    func_0x000107c61170(lVar19);
    puVar18 = (ulong *)(lVar8 + 0x38);
    uVar22 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar21 = 0xffffffffffffffff;
    if (-uVar22 < 0x40) {
      uVar21 = ~(-1L << (-uVar22 & 0x3f));
    }
    uVar21 = uVar21 & *puVar18;
    func_0x000107c61434(lVar8);
    lVar19 = 0;
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar20 = lVar19;
    while( true ) {
      while (uVar21 != 0) {
        uVar11 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar21 - 1 & uVar21;
        puVar1 = (undefined8 *)
                 (*(long *)(lVar8 + 0x30) + LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) * 0x10 +
                 lVar19 * 0x400);
        uVar12 = *puVar1;
        uVar3 = puVar1[1];
        func_0x000107c61434(uVar3);
        func_0x000107c5fadc(uVar12,uVar3);
        lVar9 = lVar7;
        func_0x000107c4c39c();
        func_0x000107c61180();
        func_0x000107c61170(uVar12);
        lVar20 = lVar19;
        if (lVar9 == 0) {
          func_0x000107c6142c(uVar3);
        }
        else {
          uVar11 = *(ulong *)(lVar9 + _DAT_112fcd618);
          uVar16 = ((ulong *)(lVar9 + _DAT_112fcd618))[1];
          uVar15 = ((ulong *)(lVar9 + _DAT_112fcd620))[1];
          if (uVar15 != 0) {
            uVar17 = *(ulong *)(lVar9 + _DAT_112fcd620);
            uVar2 = uVar17 & 0xffffffffffff;
            if ((uVar15 & 0x2000000000000000) != 0) {
              uVar2 = uVar15 >> 0x38 & 0xf;
            }
            if (uVar2 != 0) {
              uVar16 = uVar15;
              uVar11 = uVar17;
            }
          }
          func_0x000107c61434(uVar16);
          uVar12 = *(undefined8 *)(lVar9 + _DAT_112fcd610);
          uVar4 = ((undefined8 *)(lVar9 + _DAT_112fcd610))[1];
          puVar10 = PTR_PTR_1126a8c48;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c5fadc(uVar12,uVar4);
          func_0x000107c5fadc(uVar11,uVar16);
          func_0x000107c491fc();
          func_0x000107c61170(uVar12);
          func_0x000107c61170(uVar11);
          if (((undefined8 *)(lVar9 + _DAT_112fcd628))[1] == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(lVar9 + _DAT_112fcd628);
            func_0x000107c5fadc(uVar12);
          }
          func_0x000107c52ae0(puVar10);
          func_0x000107c61170(uVar12);
          if (((undefined8 *)(lVar9 + _DAT_112fcd630))[1] == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(lVar9 + _DAT_112fcd630);
            func_0x000107c5fadc(uVar12);
          }
          func_0x000107c58e54(puVar10);
          func_0x000107c61170(lVar9);
          func_0x000107c61170(lVar9);
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(uVar12);
          func_0x000107c6142c(uVar16);
          puVar14 = puStack_68;
          func_0x000107c61550();
          if ((((int)puVar14 == 0) || ((long)puStack_68 < 0)) ||
             (((ulong)puStack_68 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_68 >> 0x3e == 0) {
              puVar14 = *(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar14 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_68) {
                puVar14 = puStack_68;
              }
              func_0x000107c60480(puVar14);
            }
            puVar13 = (undefined *)0x0;
            FUN_101bf8ef8(0,puVar14 + 1,1,puStack_68);
            puStack_68 = puVar13;
          }
          uVar16 = (ulong)puStack_68 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar16 + 0x10);
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar11) {
            puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
            FUN_101bf8ef8(puVar14,uVar11 + 1,1,puStack_68);
            uVar16 = (ulong)puVar14 & 0xffffffffffffff8;
            puStack_68 = puVar14;
          }
          *(ulong *)(uVar16 + 0x10) = uVar11 + 1;
          *(undefined **)(uVar16 + uVar11 * 8 + 0x20) = puVar10;
        }
      }
      bVar6 = SCARRY8(lVar19,1);
      lVar19 = lVar19 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101bfdf8c);
        (*pcVar5)();
      }
      if ((long)(0x3f - uVar22 >> 6) <= lVar19) break;
      uVar21 = puVar18[lVar19];
    }
    func_0x000107c615e8(lVar7);
    func_0x00010109bac0(lVar8,puVar18,~uVar22,lVar20,0);
    func_0x000107c6142c(lVar8);
  }
  return puStack_68;
}



/* Entry: 101bfdf8c; end: 101bfe0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bfdf8c(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e08c20);
  *(undefined8 *)(param_2 + _DAT_112e08c20) = param_1;
  func_0x000107c6142c(uVar1);
  func_0x000107c61434(param_1);
  FUN_101bf8c94();
  puVar2 = PTR___sSiN_11034deb0;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puStack_58 = param_3;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  puVar3 = PTR_PTR_1126a8c50;
  func_0x000107c610f8();
  lVar4 = param_2;
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000107c5fadc(puVar2,puVar5);
  func_0x000107c6142c(puVar5);
  func_0x000107c4567c();
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar2);
  puStack_58 = puVar3;
  func_0x0001007d6d78(&puStack_58);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101bfe0a4; end: 101bfe677;  */

void FUN_101bfe0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126a8c70;
  func_0x000107c610f8(PTR_PTR_1126a8c70);
  func_0x000107c453e4();
  uVar3 = 0;
  FUN_101c00880(0,0x112e08bd8,&PTR_PTR_1126a8c48);
  func_0x000107c5fc48(param_3,uVar3);
  func_0x000107c54c60(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c5fc48(param_4,PTR___sSSN_11034da80);
  func_0x000107c553ec(puVar2);
  func_0x000107c61170(param_4);
  puVar4 = PTR_PTR_1126a8c78;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126b1440;
  func_0x000107c610f8(PTR_PTR_1126b1440);
  func_0x000107c453e4();
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5a344(puVar5);
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5a42c(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c557a8(puVar5);
  func_0x000107c55760(puVar5);
  func_0x000107c53cb8(puVar4);
  uVar3 = 0;
  FUN_101bffca8(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c54c58(puVar4);
  func_0x000107c61170(uVar3);
  puVar6 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5676c();
  puVar7 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  puVar8 = &UNK_1104558b8;
  func_0x000107c613fc(&UNK_1104558b8,0x28,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(undefined8 *)(puVar8 + 0x18) = param_5;
  *(undefined8 *)(puVar8 + 0x20) = param_6;
  uStack_70 = 0x101c00250;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101bff540;
  puStack_78 = &UNK_1104558d0;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_68;
  func_0x000107c61174();
  func_0x000107c6157c(param_6);
  func_0x000107c61574(puVar8);
  func_0x000107c56d20(puVar4);
  func_0x000107c60bd0(ppuVar9);
  puVar8 = PTR_PTR_1126a8c80;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61180();
  func_0x000107c5a050();
  puVar10 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101bfe664);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(puVar10);
  puVar10 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101bfe668);
    (*pcVar1)();
  }
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5c5e8();
  func_0x000107c61180();
  func_0x000107c52b50(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar11);
  lVar12 = 0x112d360b8;
  FUN_101bffe1c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar12 + 0x18) = 9;
  *(undefined8 *)(lVar12 + 0x10) = 4;
  puVar10 = puVar8;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar11 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101bfe66c);
    (*pcVar1)();
  }
  puVar13 = puVar11;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  puVar11 = puVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar13);
  *(undefined **)(lVar12 + 0x20) = puVar11;
  puVar10 = puVar8;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar11 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar11 != (undefined *)0x0) {
    puVar13 = puVar11;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar11 = puVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar13);
    *(undefined **)(lVar12 + 0x28) = puVar11;
    puVar10 = puVar8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar11 = puVar6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bfe674);
      (*pcVar1)();
    }
    puVar13 = puVar11;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar11 = puVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar13);
    *(undefined **)(lVar12 + 0x30) = puVar11;
    puVar10 = puVar8;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar11 = puVar6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar11 != (undefined *)0x0) {
      puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar14 = puVar11;
      func_0x000107c3ec1c(puVar11);
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      puVar11 = puVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar14);
      *(undefined **)(lVar12 + 0x38) = puVar11;
      uVar3 = 0;
      FUN_101c00880(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar15 = lVar12;
      func_0x000107c5fc48(lVar12,uVar3);
      func_0x000107c61574(lVar12);
      func_0x000107c3d048(puVar13);
      func_0x000107c61170(lVar15);
      func_0x000107c3e2c0(puVar7);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101bfe678);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bfe670);
  (*pcVar1)();
}



/* Entry: 101bfe678; end: 101bfe6fb;  */

void FUN_101bfe678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfe6fc,uVar1,uVar2);
  return;
}



/* Entry: 101bfe6fc; end: 101bfe79f;  */

void FUN_101bfe6fc(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = *(int **)(*(long *)(unaff_x22 + 0x38) + 0x28);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101bfe754;
                    /* WARNING: Could not recover jumptable at 0x000101bfe750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 101bfe7a0; end: 101bfe83b;  */

void FUN_101bfe7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  uVar1 = uVar4;
  FUN_101bf8c94();
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfe83c,uVar2,uVar3);
  return;
}



/* Entry: 101bfe83c; end: 101bfea37;  */

void FUN_101bfe83c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c6142c(uVar6);
    func_0x000107c61574(uVar11);
    if (lRam0000000112e08be0 != -1) {
      func_0x000107c61568(0x112e08be0,0x101bf88d4);
    }
    lVar1 = lRam0000000113803b90;
    uVar6 = uRam0000000113803b88;
    puVar9 = *(undefined8 **)(unaff_x22 + 0x30);
    *puVar9 = uRam0000000113803b80;
    puVar9[1] = uVar6;
    puVar9[2] = lVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    func_0x000107c61434();
    func_0x000107c61434(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101bfe8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lRam0000000112e08be0 != -1) {
    func_0x000107c61568(0x112e08be0,0x101bf88d4);
  }
  lVar1 = lRam0000000113803b90;
  uVar6 = uRam0000000113803b88;
  uVar3 = *(ulong *)(unaff_x22 + 0x88);
  func_0x00010142cfc4(uVar3,uRam0000000113803b80);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x22 + 0x90);
    lVar10 = *(long *)(unaff_x22 + 0x98);
    func_0x00010142cfc4(uVar3,uVar6);
    if (((uVar3 & 1) != 0) && (lVar10 == lVar1)) goto FUN_101bf8950;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x98);
  puVar4 = PTR___sSiN_11034deb0;
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  puVar5 = PTR_PTR_1126a8c50;
  func_0x000107c610f8();
  func_0x000107c5fc48(uVar6,PTR___sSSN_11034da80);
  func_0x000107c5fadc(puVar4,puVar8);
  func_0x000107c6142c(puVar8);
  func_0x000107c4567c();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  *(undefined **)(unaff_x22 + 0x18) = puVar5;
  func_0x0001007d6d78(unaff_x22 + 0x18);
  func_0x000107c61170(puVar5);
FUN_101bf8950:
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bfea38;
  lVar1 = *(long *)(unaff_x22 + 0x90);
  lVar10 = *(long *)(unaff_x22 + 0x88);
  lVar12 = *(long *)(unaff_x22 + 0x38);
  plVar7[4] = *(long *)(unaff_x22 + 0x98);
  plVar7[5] = lVar12;
  plVar7[2] = lVar10;
  plVar7[3] = lVar1;
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[6] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[7] = uVar3;
  lVar10 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar10;
  func_0x000107c5fce8();
  plVar7[8] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar7[9] = lVar10;
  plVar7[10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf89f8,lVar10,lVar1);
  return;
}



/* Entry: 101bfea38; end: 101bfea87;  */

void FUN_101bfea38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb8) = param_1;
  *(undefined8 *)(lVar1 + 0xc0) = param_2;
  *(undefined8 *)(lVar1 + 200) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101bfea88,*(undefined8 *)(lVar1 + 0xa0),*(undefined8 *)(lVar1 + 0xa8));
  return;
}



/* Entry: 101bfea88; end: 101bfec03;  */

void FUN_101bfea88(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x50);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  if ((uVar3 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar10 = *(undefined8 **)(unaff_x22 + 0x30);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c6142c(uVar8);
    *puVar10 = uVar11;
    goto LAB_101bfebe4;
  }
  uVar3 = *(ulong *)(unaff_x22 + 0xb8);
  func_0x00010142cfc4(uVar3,*(undefined8 *)(unaff_x22 + 0x88));
  if ((uVar3 & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c6142c(uVar6);
LAB_101bfeb30:
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 200);
    puVar4 = PTR___sSiN_11034deb0;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    puVar5 = PTR_PTR_1126a8c50;
    func_0x000107c610f8();
    func_0x000107c5fc48(uVar6,PTR___sSSN_11034da80);
    func_0x000107c5fadc(puVar4,puVar7);
    func_0x000107c6142c(puVar7);
    func_0x000107c4567c();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    *(undefined **)(unaff_x22 + 0x28) = puVar5;
    func_0x0001007d6d78(unaff_x22 + 0x28);
    func_0x000107c61170(puVar5);
  }
  else {
    uVar3 = *(ulong *)(unaff_x22 + 0xc0);
    lVar1 = *(long *)(unaff_x22 + 200);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar2 = *(long *)(unaff_x22 + 0x98);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x00010142cfc4(uVar3,uVar6);
    func_0x000107c6142c(uVar8);
    func_0x000107c6142c(uVar6);
    if (((uVar3 & 1) == 0) || (lVar1 != lVar2)) goto LAB_101bfeb30;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  puVar10 = *(undefined8 **)(unaff_x22 + 0x30);
  *puVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
LAB_101bfebe4:
  puVar10[1] = uVar6;
  puVar10[2] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x000101bfec00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bfec04; end: 101bfec77;  */

void FUN_101bfec04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfec78,uVar1,uVar2);
  return;
}


