/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10193ba6c; end: 10193baaf;  */

undefined1  [16] FUN_10193ba6c(void)

{
  return ZEXT816(0x110415698);
}



/* Entry: 10193bab0; end: 10193bad7;  */

void FUN_10193bab0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10193bad8; end: 10193badf;  */

undefined8 FUN_10193bad8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10193bae0; end: 10193bdc3;  */

long FUN_10193bae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a7e70;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 10193bdc4; end: 10193be0f;  */

void FUN_10193bdc4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10193be10; end: 10193be5f;  */

undefined8 FUN_10193be10(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10193be60; end: 10193bea3;  */

undefined1  [16] FUN_10193be60(void)

{
  return ZEXT816(0x110415760);
}



/* Entry: 10193bea4; end: 10193becb;  */

void FUN_10193bea4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10193becc; end: 10193bed3;  */

undefined8 FUN_10193becc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10193bed4; end: 10193c18b;  */

void FUN_10193bed4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010020d0f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a7e78;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10193c18c; end: 10193c197;  */

void FUN_10193c18c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010020d0f8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a7e78;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10193c198; end: 10193c1fb;  */

undefined8
FUN_10193c198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10193c1fc(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 10193c1fc; end: 10193c463;  */

void FUN_10193c1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a7e78;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 10193c464; end: 10193c4a7;  */

void FUN_10193c464(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10193c4a8; end: 10193c4fb;  */

void FUN_10193c4a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10193c4fc; end: 10193c503;  */

void FUN_10193c4fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10193c504; end: 10193c553;  */

undefined8 FUN_10193c504(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10193c554; end: 10193c597;  */

undefined1  [16] FUN_10193c554(void)

{
  return ZEXT816(0x110415828);
}



/* Entry: 10193c598; end: 10193c5bf;  */

void FUN_10193c598(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10193c5c0; end: 10193c5c7;  */

undefined8 FUN_10193c5c0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10193c5c8; end: 10193c8b7;  */

void FUN_10193c5c8(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(ulong *)(unaff_x20 + 0x10);
  uVar3 = uVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar7 = param_3;
LAB_10193c65c:
    uVar6 = (uint)uVar7;
    uVar9 = uVar2 >> 0x38 & 0xf;
  }
  else {
    uVar2 = uVar3;
    func_0x000107c3da4c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar9 = uVar2;
    func_0x000107c5faec();
    uVar7 = param_3;
    func_0x000107c61170(uVar2);
    uVar3 = param_3;
    func_0x000107c6142c();
    uVar6 = (uint)uVar7;
    uVar2 = param_3;
    if ((param_3 >> 0x3d & 1) != 0) goto LAB_10193c65c;
    uVar9 = uVar9 & 0xffffffffffff;
  }
  if (uVar9 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar10;
    if (uVar10 != 0) {
      uVar2 = uVar10;
      func_0x000107c3da48();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      uVar3 = 0;
      if (uVar2 != 0) {
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c4fdb8();
        uVar10 = uVar2;
        func_0x000107c4d670();
        lVar4 = 0;
        func_0x0001036e34f0();
        iVar1 = *(int *)(lVar4 + 0x18);
        if ((long)uVar10 >= 1) {
          func_0x000107c5ee88(param_1 + iVar1,(double)uVar10 / 1000.0);
        }
        lVar5 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar1,(long)uVar10 < 1,1,lVar5);
        uVar10 = uVar2;
        func_0x000107c3dbe8();
        func_0x000107c61170(uVar2);
        *param_1 = 0;
        *(ulong *)(param_1 + 8) = uVar3;
        goto LAB_10193c87c;
      }
      uVar10 = uVar3;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(uVar10);
      func_0x000107c61654();
      func_0x000107c614ac();
    }
  }
  FUN_10193c8b8();
  uVar10 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar10 == 0) {
LAB_10193c7cc:
    lVar4 = 0;
    func_0x0001036e34f0();
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar5 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar1,1,1,lVar5);
    uVar10 = uVar3;
    if ((uVar6 & 0xff) == 1) {
      uVar10 = 0;
      *param_1 = 2;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_10193c87c;
    }
  }
  else {
    uVar2 = uVar10;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar10 = uVar2;
    func_0x000107c5c370();
    func_0x000107c61170(uVar2);
    if ((uVar10 & 0xfffffffffffffffe) != 2) goto LAB_10193c7cc;
    lVar4 = 0;
    func_0x0001036e34f0();
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar5 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar1,1,1,lVar5);
    uVar10 = 0;
    if ((uVar6 & 0xff) != 1) {
      uVar10 = uVar3;
    }
  }
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x0001036e34f0(0);
LAB_10193c87c:
  *(ulong *)(param_1 + *(int *)(lVar4 + 0x1c)) = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)(lVar4 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar4 = lVar8;
    func_0x000108c2bb5c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c615e8(lVar8);
    }
    else {
      lVar5 = lVar4;
      func_0x000107c3dbe8();
      if ((lVar5 < 1) || (lVar5 = lVar4, func_0x000107c4fb7c(), lVar5 < 1)) {
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(lVar4);
      }
      else {
        func_0x000107c3dbe8(lVar4);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(lVar4);
      }
    }
  }
  return;
}



/* Entry: 10193c8b8; end: 10193c96b;  */

void FUN_10193c8b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000108c2bb5c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      lVar3 = lVar2;
      func_0x000107c3dbe8();
      if ((lVar3 < 1) || (lVar3 = lVar2, func_0x000107c4fb7c(), lVar3 < 1)) {
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar2);
      }
      else {
        func_0x000107c3dbe8(lVar2);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar2);
      }
    }
  }
  return;
}



/* Entry: 10193c96c; end: 10193c9bf;  */

void FUN_10193c96c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10193c9c0; end: 10193c9c3;  */

void FUN_10193c9c0(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(ulong *)(unaff_x20 + 0x10);
  uVar3 = uVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar7 = param_3;
LAB_10193c65c:
    uVar6 = (uint)uVar7;
    uVar9 = uVar2 >> 0x38 & 0xf;
  }
  else {
    uVar2 = uVar3;
    func_0x000107c3da4c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar9 = uVar2;
    func_0x000107c5faec();
    uVar7 = param_3;
    func_0x000107c61170(uVar2);
    uVar3 = param_3;
    func_0x000107c6142c();
    uVar6 = (uint)uVar7;
    uVar2 = param_3;
    if ((param_3 >> 0x3d & 1) != 0) goto LAB_10193c65c;
    uVar9 = uVar9 & 0xffffffffffff;
  }
  if (uVar9 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar10;
    if (uVar10 != 0) {
      uVar2 = uVar10;
      func_0x000107c3da48();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      uVar3 = 0;
      if (uVar2 != 0) {
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c4fdb8();
        uVar10 = uVar2;
        func_0x000107c4d670();
        lVar4 = 0;
        func_0x0001036e34f0();
        iVar1 = *(int *)(lVar4 + 0x18);
        if ((long)uVar10 >= 1) {
          func_0x000107c5ee88(param_1 + iVar1,(double)uVar10 / 1000.0);
        }
        lVar5 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar1,(long)uVar10 < 1,1,lVar5);
        uVar10 = uVar2;
        func_0x000107c3dbe8();
        func_0x000107c61170(uVar2);
        *param_1 = 0;
        *(ulong *)(param_1 + 8) = uVar3;
        goto LAB_10193c87c;
      }
      uVar10 = uVar3;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(uVar10);
      func_0x000107c61654();
      func_0x000107c614ac();
    }
  }
  FUN_10193c8b8();
  uVar10 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar10 == 0) {
LAB_10193c7cc:
    lVar4 = 0;
    func_0x0001036e34f0();
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar5 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar1,1,1,lVar5);
    uVar10 = uVar3;
    if ((uVar6 & 0xff) == 1) {
      uVar10 = 0;
      *param_1 = 2;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_10193c87c;
    }
  }
  else {
    uVar2 = uVar10;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar10 = uVar2;
    func_0x000107c5c370();
    func_0x000107c61170(uVar2);
    if ((uVar10 & 0xfffffffffffffffe) != 2) goto LAB_10193c7cc;
    lVar4 = 0;
    func_0x0001036e34f0();
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar5 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar1,1,1,lVar5);
    uVar10 = 0;
    if ((uVar6 & 0xff) != 1) {
      uVar10 = uVar3;
    }
  }
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x0001036e34f0(0);
LAB_10193c87c:
  *(ulong *)(param_1 + *(int *)(lVar4 + 0x1c)) = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)(lVar4 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar4 = lVar8;
    func_0x000108c2bb5c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c615e8(lVar8);
    }
    else {
      lVar5 = lVar4;
      func_0x000107c3dbe8();
      if ((lVar5 < 1) || (lVar5 = lVar4, func_0x000107c4fb7c(), lVar5 < 1)) {
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(lVar4);
      }
      else {
        func_0x000107c3dbe8(lVar4);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(lVar4);
      }
    }
  }
  return;
}



/* Entry: 10193c9c4; end: 10193ca6b;  */

bool FUN_10193c9c4(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  char *pcVar4;
  
  uVar3 = 0;
  func_0x0001036e34f0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar3 - 8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar4 = &stack0xffffffffffffffd0 + lVar1;
  FUN_10193c5c8(pcVar4);
  if (*pcVar4 == '\0') {
    func_0x0001036e3528();
    if ((uVar3 & 1) == 0) {
      bVar2 = param_1 <= *(long *)(&stack0xffffffffffffffd8 + lVar1);
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = *pcVar4 == '\x01';
  }
  FUN_10193ca6c(pcVar4);
  return bVar2;
}



/* Entry: 10193ca6c; end: 10193caa7;  */

undefined8 FUN_10193ca6c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001036e34f0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10193caa8; end: 10193cb8b;  */

void FUN_10193caa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 10193cb8c; end: 10193cb97;  */

void FUN_10193cb8c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10193cb88);
    (*pcVar1)();
  }
  func_0x000107c5c360();
  func_0x000107c61180();
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar4 = 0;
    func_0x00010193c9a0();
    func_0x000107c613fc();
    *(long *)(lVar4 + 0x10) = lVar2;
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
    *(long *)(lVar4 + 0x20) = lVar5;
    *param_1 = lVar4;
    param_1[1] = (long)&PTR_DAT_110415928;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10193cb8c);
  (*pcVar1)();
}



/* Entry: 10193cb98; end: 10193cbbb;  */

/* WARNING: Possible PIC construction at 0x00010193cba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010193cba8) */

void FUN_10193cb98(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10193cbbc; end: 10193cc0f;  */

void FUN_10193cbbc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10193cc10; end: 10193ccd7;  */

void FUN_10193cc10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_110415980;
  func_0x000107c613fc(&UNK_110415980,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  func_0x0001000285a8(0x112dd7268,&UNK_10d99a5a0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar1);
  pcVar3 = FUN_10193cd0c;
  func_0x0001000bdd8c(FUN_10193cd0c,puVar2);
  uVar4 = 0;
  func_0x00010021b848(0);
  func_0x000107c610f8();
  func_0x0001003da044(pcVar3,uVar4);
  *param_1 = pcVar3;
  return;
}



/* Entry: 10193ccd8; end: 10193cd0b;  */

void FUN_10193ccd8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10193cd0c; end: 10193cd0f;  */

void FUN_10193cd0c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10193cb88);
    (*pcVar1)();
  }
  func_0x000107c5c360();
  func_0x000107c61180();
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar4 = 0;
    func_0x00010193c9a0();
    func_0x000107c613fc();
    *(long *)(lVar4 + 0x10) = lVar2;
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
    *(long *)(lVar4 + 0x20) = lVar5;
    *param_1 = lVar4;
    param_1[1] = (long)&PTR_DAT_110415928;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10193cb8c);
  (*pcVar1)();
}



/* Entry: 10193cd10; end: 10193ce33;  */

void FUN_10193cd10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 10193ce34; end: 10193cf0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193ce34(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c3eba8();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x18) + _DAT_113093a98);
    FUN_10193d778(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar2);
    uVar3 = uVar1;
    FUN_10193d7d8(uVar1,uVar2);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 10193cf10; end: 10193cf17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193cf10(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c3eba8();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x18) + _DAT_113093a98);
    FUN_10193d778(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar3);
    uVar4 = uVar2;
    FUN_10193d7d8(uVar2,uVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 10193cf18; end: 10193cf33;  */

/* WARNING: Possible PIC construction at 0x00010193cf24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010193cf28) */

void FUN_10193cf18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10193cf34; end: 10193cf7f;  */

void FUN_10193cf34(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10193cf80; end: 10193cffb;  */

void FUN_10193cf80(undefined8 param_1)

{
  if (lRam0000000112dd7380 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65aa20);
  return;
}



/* Entry: 10193cffc; end: 10193d0af;  */

void FUN_10193cffc(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110415a40;
  func_0x000107c613fc(&UNK_110415a40,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112dd7350,&UNK_10d99a5e0);
  func_0x000107c613fc();
  pcVar2 = FUN_10193d100;
  func_0x0001000bdd8c(FUN_10193d100,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  puVar1 = PTR_PTR_1126a7e80;
  func_0x000107c610f8();
  func_0x000107c46afc();
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(pcVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 10193d0b0; end: 10193d0ff;  */

void FUN_10193d0b0(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112dd7430 != 0) {
    return;
  }
  puVar1 = &UNK_110415a68;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112dd7430 = param_1;
  return;
}



/* Entry: 10193d100; end: 10193d103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193d100(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c3eba8();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x18) + _DAT_113093a98);
    FUN_10193d778(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar3);
    uVar4 = uVar2;
    FUN_10193d7d8(uVar2,uVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 10193d104; end: 10193d25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193d104(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112dd7440);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_110415af0;
    func_0x000107c613fc(&UNK_110415af0,0x38,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    *(undefined4 *)(puVar2 + 0x28) = param_5;
    *(undefined8 *)(puVar2 + 0x30) = param_1;
    uStack_78 = 0x10193d7a8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110415b08;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_70;
    func_0x000107c6157c(param_2);
    func_0x00010006c00c(param_3,param_4);
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 10193d25c; end: 10193d2f3;  */

void FUN_10193d25c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c6157c(param_5);
    FUN_10193d8c0(param_2,param_3,param_4,param_1,param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_5);
  }
  return;
}



/* Entry: 10193d2f4; end: 10193d40b; -[_TtC35SCGenAICommonServicesImplementation21GenAIDataUploaderImpl uploadDataWithEncryption:mediaType:] */

void FUN_10193d2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30();
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110415aa0;
  func_0x000107c613fc(&UNK_110415aa0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_110415ac8;
  func_0x000107c613fc(&UNK_110415ac8,0x2c,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined4 *)(puVar3 + 0x28) = param_4;
  func_0x0001000285a8(0x112dd7470,&UNK_10da162b0);
  func_0x000107c613fc();
  func_0x00010006c00c(param_3,param_2);
  pcVar4 = FUN_10193d798;
  func_0x0001000b64ac(FUN_10193d798,puVar3);
  pcVar5 = pcVar4;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar4);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar5);
  return;
}



/* Entry: 10193d40c; end: 10193d5ff;  */

void FUN_10193d40c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,code *param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uVar4 = param_2;
  uStack_78 = param_7;
  pcStack_70 = param_6;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_68 = param_1;
  func_0x000107c40500(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4((long)puVar5 - extraout_x12);
  func_0x000107c61170(param_1);
  func_0x000107c5ed70();
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)((long)puVar5 - extraout_x12,lVar1);
  uVar8 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar8 = param_2;
  }
  if (param_5 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fadc(param_4,param_5);
  }
  puVar2 = PTR_PTR_1126b97d0;
  func_0x000107c610f8(PTR_PTR_1126b97d0);
  func_0x000107c5fadc(param_1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c4677c(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  (*pcStack_70)();
  func_0x000107c61170(puVar3);
  uVar4 = uStack_68;
  func_0x000107c40500(uStack_68);
  func_0x000107c61180();
  func_0x000107c5edb4(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c5ed74();
  (*pcVar7)(puVar5,lVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 10193d600; end: 10193d693;  */

/* WARNING: Possible PIC construction at 0x00010193d650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010193d670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010193d654) */
/* WARNING: Removing unreachable block (ram,0x00010193d674) */

void FUN_10193d600(undefined8 param_1)

{
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c42a28(param_1);
  func_0x000107c61180();
  func_0x000107c5ed2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10193d694; end: 10193d6df;  */

void FUN_10193d694(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10193d6e0; end: 10193d73f; -[_TtC35SCGenAICommonServicesImplementation21GenAIDataUploaderImpl init] */

void FUN_10193d6e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAICommonServicesImplementation.GenAIDataUploaderImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10193d70c);
  (*pcVar1)();
}



/* Entry: 10193d740; end: 10193d777; -[_TtC35SCGenAICommonServicesImplementation21GenAIDataUploaderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193d740(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd7438));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd7440));
  return;
}



/* Entry: 10193d778; end: 10193d797;  */

void FUN_10193d778(void)

{
  func_0x000107c61168(&PTR_PTR_1127ecc88);
  return;
}



/* Entry: 10193d798; end: 10193d7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193d798(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar4 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(lVar4 + _DAT_112dd7440);
    func_0x000107c615f0(uVar8);
    func_0x000107c61170(lVar4);
    puVar5 = &UNK_110415af0;
    func_0x000107c613fc(&UNK_110415af0,0x38,7);
    *(long *)(puVar5 + 0x10) = lVar1;
    *(undefined8 *)(puVar5 + 0x18) = uVar2;
    *(undefined8 *)(puVar5 + 0x20) = uVar7;
    *(undefined4 *)(puVar5 + 0x28) = uVar3;
    *(undefined8 *)(puVar5 + 0x30) = param_1;
    uStack_78 = 0x10193d7a8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110415b08;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_70;
    func_0x000107c6157c(lVar1);
    func_0x00010006c00c(uVar2,uVar7);
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(uVar8);
  }
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 10193d7d8; end: 10193d8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193d7d8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112dd7438) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar2 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010efc1730);
    lVar3 = param_2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    func_0x000107c61170(uVar2);
    *(long *)(unaff_x20 + _DAT_112dd7440) = lVar3;
    func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10193d8c0);
  (*pcVar1)();
}



/* Entry: 10193d8c0; end: 10193df77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193d8c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined1 auStack_f8 [80];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
  uVar11 = param_2;
  func_0x000107c61168();
  func_0x000107c6157c(param_5);
  puVar18 = puVar14;
  func_0x000107c51bc4();
  func_0x000107c61180();
  if (puVar18 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    uVar15 = 0;
    uVar17 = uVar11;
  }
  else {
    puVar16 = puVar18;
    func_0x000107c5faec();
    uVar17 = uVar11;
    func_0x000107c61170(puVar18);
    uVar15 = uVar11;
  }
  func_0x000107c51bc4();
  func_0x000107c61180();
  if (puVar14 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    uVar17 = 0;
  }
  else {
    puVar18 = puVar14;
    func_0x000107c5faec();
    func_0x000107c61170(puVar14);
  }
  func_0x000107c5ee20(param_1,param_2);
  uVar11 = 0x112d35ff8;
  puVar14 = &UNK_10d900cd0;
  puStack_a8 = puVar16;
  uStack_a0 = uVar15;
  func_0x0001000285a8(0x112d35ff8);
  uVar2 = uVar11;
  func_0x000107c60184();
  puStack_a8 = puVar18;
  uStack_a0 = uVar17;
  func_0x000107c60184(uVar11);
  lVar5 = param_1;
  func_0x000107c51bb8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar11);
  if (lVar5 == 0) {
    lVar13 = 0;
    puVar14 = (undefined *)0xf000000000000000;
  }
  else {
    lVar13 = lVar5;
    func_0x000107c5ee30(lVar5);
    func_0x000107c61170(lVar5);
    if ((ulong)puVar14 >> 0x3c < 0xf) {
      func_0x000100de78a0(lVar13,puVar14);
      func_0x0001000b44c0(lVar13,puVar14);
      uVar11 = 0xf000000000000000;
      func_0x0001000b44c0(0,0xf000000000000000);
      puVar10 = PTR_PTR_1126b5980;
      func_0x000107c61168();
      func_0x000107c3ebb8();
      func_0x000107c61180();
      if (puVar10 == (undefined *)0x0) {
        func_0x000107c61574(param_5);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10193df6c);
        (*pcVar1)();
      }
      puVar3 = puVar10;
      func_0x00010011df08();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar11);
      }
      puVar4 = puVar10;
      func_0x000107c5e4cc(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c5e6a4(puVar10);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c5e85c(puVar10);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c5e44c(puVar10);
      func_0x000107c61180();
      func_0x000107c61170();
      puVar3 = PTR_PTR_1126b5988;
      func_0x000107c61168(PTR_PTR_1126b5988);
      func_0x00010006c00c(lVar13,puVar14);
      lVar5 = lVar13;
      func_0x000107c5ee20(lVar13,puVar14);
      func_0x0001000b44c0(lVar13,puVar14);
      func_0x000107c452b4(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      puVar4 = puVar10;
      func_0x000107c5e4f8(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      lVar5 = *(long *)(param_4 + _DAT_112dd7438);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 != 0) {
        puVar3 = puVar10;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        if (puVar3 != (undefined *)0x0) {
          puVar4 = &UNK_110415b40;
          func_0x000107c613fc(&UNK_110415b40,0x40,7);
          *(undefined **)(puVar4 + 0x10) = puVar16;
          *(undefined8 *)(puVar4 + 0x18) = uVar15;
          *(undefined **)(puVar4 + 0x20) = puVar18;
          *(undefined8 *)(puVar4 + 0x28) = uVar17;
          *(code **)(puVar4 + 0x30) = FUN_10193df78;
          *(undefined8 *)(puVar4 + 0x38) = param_5;
          puVar16 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_88 = FUN_10193dfa0;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          uStack_98 = 0x10193dfcc;
          puStack_90 = &UNK_110415b58;
          ppuVar6 = &puStack_a8;
          puStack_80 = puVar4;
          func_0x000107c60bc4(ppuVar6);
          puVar18 = puStack_80;
          func_0x000107c6157c(param_5);
          func_0x000107c61574(puVar18);
          puVar18 = &UNK_110415b90;
          func_0x000107c613fc(&UNK_110415b90,0x20,7);
          *(code **)(puVar18 + 0x10) = FUN_10193df78;
          *(undefined8 *)(puVar18 + 0x18) = param_5;
          pcStack_88 = (code *)0x10193dfb0;
          puStack_a8 = puVar16;
          uStack_a0 = 0x42000000;
          uStack_98 = 0x10193dfc8;
          puStack_90 = &UNK_110415ba8;
          ppuVar7 = &puStack_a8;
          puStack_80 = puVar18;
          func_0x000107c60bc4(ppuVar7);
          puVar18 = puStack_80;
          func_0x000107c6157c(param_5);
          func_0x000107c61574(puVar18);
          func_0x000107c5d788(lVar5);
          func_0x0001000b44c0(lVar13,puVar14);
          func_0x000107c61170(puVar10);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c61574(param_5);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(puVar3);
          return;
        }
        func_0x000107c61574(param_5);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10193df78);
        (*pcVar1)();
      }
      func_0x0001000b44c0(lVar13,puVar14);
      func_0x000107c61574(param_5);
      func_0x000107c61170(puVar10);
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(uVar15);
      return;
    }
  }
  func_0x000100de78a0(lVar13,puVar14);
  func_0x000107c6142c(uVar17);
  func_0x000107c6142c(uVar15);
  puVar18 = puVar14;
  func_0x0001000b44c0(lVar13,puVar14);
  func_0x000107c61174();
  lVar5 = param_4;
  func_0x000107c417f0();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c61170(param_4);
    func_0x000107c6142c(puVar18);
  }
  else {
    func_0x000107c61170(param_4);
  }
  lVar8 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar12 = auStack_f8;
  func_0x000107c61534();
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  uVar11 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar8 + 0x20) = uVar11;
  puVar18 = PTR___sSSN_11034da80;
  *(undefined **)(lVar8 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar8 + 0x28) = puVar12;
  *(undefined8 *)(lVar8 + 0x30) = 0xd000000000000011;
  *(undefined8 *)(lVar8 + 0x38) = 0x800000010efc1710;
  lVar9 = lVar8;
  func_0x000100214a84(lVar8);
  func_0x000107c61588(lVar8);
  func_0x000100f15a0c((undefined8 *)(lVar8 + 0x20));
  puVar16 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  lVar8 = lVar9;
  func_0x000107c5f9dc(lVar9,puVar18,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar9);
  func_0x000107c466bc(puVar16);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar8);
  puVar18 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  func_0x000107c61174(puVar16);
  puVar10 = puVar16;
  func_0x000107c5ed2c();
  func_0x000107c61170(puVar16);
  func_0x000107c42d78();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  puStack_a8 = puVar18;
  func_0x000100087f6c(&puStack_a8);
  func_0x000100c7f554();
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar18);
  func_0x0001000b44c0(lVar13,puVar14);
  func_0x000107c61574(param_5);
  return;
}



/* Entry: 10193df78; end: 10193df9f;  */

void FUN_10193df78(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  func_0x000100c7f554();
  return;
}



/* Entry: 10193dfa0; end: 10193dfcf;  */

void FUN_10193dfa0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  pcStack_70 = *(code **)(unaff_x20 + 0x30);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar3 = 0;
  uVar7 = uVar4;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_68 = param_1;
  func_0x000107c40500(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4((long)puVar8 - extraout_x12);
  func_0x000107c61170(param_1);
  func_0x000107c5ed70();
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)((long)puVar8 - extraout_x12,lVar3);
  uVar12 = 0;
  if (lVar1 != 0) {
    func_0x000107c5fadc(uVar4,lVar1);
    uVar12 = uVar4;
  }
  if (lVar2 == 0) {
    uVar11 = 0;
  }
  else {
    func_0x000107c5fadc(uVar11,lVar2);
  }
  puVar5 = PTR_PTR_1126b97d0;
  func_0x000107c610f8(PTR_PTR_1126b97d0);
  func_0x000107c5fadc(param_1,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c4677c(puVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(param_1);
  puVar6 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  (*pcStack_70)();
  func_0x000107c61170(puVar6);
  uVar4 = uStack_68;
  func_0x000107c40500(uStack_68);
  func_0x000107c61180();
  func_0x000107c5edb4(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c5ed74();
  (*pcVar10)(puVar8,lVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 10193dfd0; end: 10193e0d3;  */

long FUN_10193dfd0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x60);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    func_0x00010193e02c();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
    *(long *)(unaff_x20 + 0x60) = lVar1;
    func_0x000107c615f0();
    func_0x0001019408ac(uVar3);
  }
  func_0x0001019408bc(lVar2);
  return lVar1;
}



/* Entry: 10193e0d4; end: 10193e393;  */

/* WARNING: Removing unreachable block (ram,0x00010193e10c) */

code * FUN_10193e0d4(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c6157c(uVar6);
  func_0x000104886d18(&uStack_48);
  func_0x000107c61574(uVar6);
  func_0x0001000285a8(0x112dd7560,&UNK_10d99a720);
  puVar1 = &uStack_48;
  func_0x000100854cb0(puVar1);
  func_0x000107c61170(uStack_48);
  puVar2 = &UNK_110415df8;
  func_0x00010193e260(&UNK_110415df8,FUN_101940908);
  puVar3 = &UNK_110415da8;
  func_0x00010193e260(&UNK_110415da8,FUN_10194089c);
  puVar4 = puVar2;
  func_0x00010061da28(puVar2,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  puVar2 = &UNK_110415ce0;
  func_0x000107c613fc(&UNK_110415ce0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110415d80;
  func_0x000107c613fc(&UNK_110415d80,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x10194029c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uVar6 = 0x112dd7568;
  func_0x0001000285a8(0x112dd7568,&UNK_10dbaf4d0);
  pcVar5 = FUN_1019402a4;
  func_0x0001000bfde0(FUN_1019402a4,puVar3,uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  return pcVar5;
}



/* Entry: 10193e394; end: 10193e433;  */

undefined * FUN_10193e394(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 != 0) {
    FUN_10193e434(param_2,param_3);
    FUN_101940430(param_1,param_2);
    func_0x000107c61574(param_4);
    func_0x000107c6142c(param_2);
    puVar1 = param_1;
  }
  return puVar1;
}



/* Entry: 10193e434; end: 10193eb3f;  */

undefined * FUN_10193e434(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  
  uVar18 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar18 + 0x10);
  }
  else {
    uVar15 = uVar18;
    if (0x7fffffffffffffff < param_1) {
      uVar15 = param_1;
    }
    func_0x000107c60480();
  }
  func_0x000107c61580();
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10193ea98);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar12;
          func_0x00010103193c(uVar12,param_1);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10193ea94);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (uVar5 != 0) break;
LAB_10193e49c:
        func_0x000107c61170(uVar4);
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar15) goto LAB_10193e5e0;
      }
      uVar6 = uVar5;
      func_0x000107c5c3a4();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) goto LAB_10193e49c;
      uVar5 = uVar6;
      func_0x000107c3e1d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      if (uVar5 == 0) goto LAB_10193e49c;
      uVar6 = uVar5;
      func_0x000107c3f464();
      func_0x000107c61170(uVar5);
      if ((uVar6 & 1) == 0) goto LAB_10193e49c;
      puVar17 = puVar14;
      func_0x000107c61558();
      if (((ulong)puVar17 & 1) == 0) {
        func_0x0001010673e4(0,*(long *)(puVar14 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar14 + 0x10);
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar12) {
        func_0x0001010673e4(1 < *(ulong *)(puVar14 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar14 + 0x10) = uVar12 + 1;
      *(ulong *)(puVar14 + uVar12 * 8 + 0x20) = uVar4;
      uVar12 = uVar1;
    } while (uVar1 != uVar15);
  }
LAB_10193e5e0:
  func_0x000107c61578(unaff_x20,2);
  uVar18 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar18 + 0x10);
  }
  else {
    uVar15 = uVar18;
    if (0x7fffffffffffffff < param_2) {
      uVar15 = param_2;
    }
    func_0x000107c60480();
  }
  func_0x000107c61580(unaff_x20,2);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10193eaa0);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_2 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar12;
          func_0x00010103193c(uVar12,param_2);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10193ea9c);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (uVar5 != 0) break;
LAB_10193e628:
        func_0x000107c61170(uVar4);
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar15) goto LAB_10193e760;
      }
      uVar6 = uVar5;
      func_0x000107c5c3a4();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) goto LAB_10193e628;
      uVar5 = uVar6;
      func_0x000107c3e1d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      if (uVar5 == 0) goto LAB_10193e628;
      uVar6 = uVar5;
      func_0x000107c3f464();
      func_0x000107c61170(uVar5);
      if ((uVar6 & 1) == 0) goto LAB_10193e628;
      puVar9 = puVar17;
      func_0x000107c61558();
      if (((ulong)puVar9 & 1) == 0) {
        func_0x0001010673e4(0,*(long *)(puVar17 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar17 + 0x10);
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar12) {
        func_0x0001010673e4(1 < *(ulong *)(puVar17 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar17 + 0x10) = uVar12 + 1;
      *(ulong *)(puVar17 + uVar12 * 8 + 0x20) = uVar4;
      uVar12 = uVar1;
    } while (uVar1 != uVar15);
  }
LAB_10193e760:
  func_0x000107c61578(unaff_x20,2);
  puVar9 = &SUB_100f63690;
  FUN_10193fbc4(puVar17,&SUB_100f630bc,&UNK_100f632d0);
  puVar17 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
  if ((ulong)puVar14 >> 0x3e == 0) {
    puVar13 = *(undefined **)(puVar17 + 0x10);
  }
  else {
    puVar13 = puVar17;
    if ((undefined *)0x7fffffffffffffff < puVar14) {
      puVar13 = puVar14;
    }
    func_0x000107c60480();
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar10 = (undefined *)0x0;
  while (puVar13 != puVar10) {
    if (((ulong)puVar14 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puVar17 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10193ea90);
        (*pcVar3)();
      }
      puVar7 = *(undefined **)(puVar14 + (long)puVar10 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar7 = puVar10;
      func_0x00010103193c(puVar10,puVar14);
    }
    puVar2 = puVar10 + 1;
    if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10193ea8c);
      (*pcVar3)();
    }
    uVar8 = 0;
    func_0x000103e2a910(0);
    func_0x000103e2a930(puVar7,uVar8);
    puVar10 = puVar10 + 1;
    if (puVar7 != (undefined *)0x0) {
      puVar10 = puVar11;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puVar11 < 0)) || (((ulong)puVar11 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar11 >> 0x3e == 0) {
          puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar11) {
            puVar9 = puVar11;
          }
          func_0x000107c60480(puVar9);
        }
        puVar10 = (undefined *)0x0;
        FUN_10193fcd8(0,puVar9 + 1,1,puVar11,FUN_10193fb30,FUN_10193fe94);
        puVar9 = puVar11;
        puVar11 = puVar10;
      }
      uVar15 = (ulong)puVar11 & 0xffffffffffffff8;
      uVar18 = *(ulong *)(uVar15 + 0x10);
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar18) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_10193fcd8(puVar10,uVar18 + 1,1,puVar11,FUN_10193fb30,FUN_10193fe94);
        uVar15 = (ulong)puVar10 & 0xffffffffffffff8;
        puVar9 = puVar11;
        puVar11 = puVar10;
      }
      *(ulong *)(uVar15 + 0x10) = uVar18 + 1;
      *(undefined **)(uVar15 + uVar18 * 8 + 0x20) = puVar7;
      puVar10 = puVar2;
    }
  }
  func_0x000107c6142c(puVar14);
  puVar14 = *(undefined **)(unaff_x20 + 0x20);
  if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10193eae0);
    (*pcVar3)();
  }
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar10 = *(undefined **)((undefined *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    puVar17 = puVar10;
    if (puVar14 <= puVar10) {
      puVar17 = puVar14;
    }
    puVar13 = (undefined *)0x0;
    if (puVar14 != (undefined *)0x0) {
      puVar13 = puVar17;
    }
    if ((long)puVar10 < (long)puVar13) {
LAB_10193eb28:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10193eb2c);
      (*pcVar3)();
    }
  }
  else {
    puVar17 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if (((ulong)puVar11 & 0x8000000000000000) != 0) {
      puVar17 = puVar11;
    }
    puVar13 = puVar17;
    func_0x000107c60480();
    puVar10 = puVar17;
    func_0x000107c60480();
    if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10193eb40);
      (*pcVar3)();
    }
    puVar10 = puVar13;
    if ((long)puVar14 <= (long)puVar13) {
      puVar10 = puVar14;
    }
    puVar7 = puVar14;
    if (-1 < (long)puVar13) {
      puVar7 = puVar10;
    }
    puVar13 = (undefined *)0x0;
    if (puVar14 != (undefined *)0x0) {
      puVar13 = puVar7;
    }
    func_0x000107c60480();
    if ((long)puVar17 < (long)puVar13) goto LAB_10193eb28;
  }
  if ((((ulong)puVar11 & 0xc000000000000001) == 0) || (puVar13 == (undefined *)0x0)) {
    func_0x000107c61434(puVar11);
  }
  else {
    uVar8 = 0;
    func_0x000103e2a910(0);
    func_0x000107c61434(puVar11);
    puVar14 = (undefined *)0x0;
    do {
      puVar17 = puVar14 + 1;
      func_0x000107c60318(puVar14,puVar11,uVar8);
      puVar14 = puVar17;
    } while (puVar13 != puVar17);
  }
  func_0x000107c6142c(puVar11);
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar14 = (undefined *)0x0;
    puVar17 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    puVar9 = (undefined *)((long)puVar13 << 1 | 1);
    puVar13 = puVar17 + 0x20;
LAB_10193e9e4:
    uVar8 = 0;
    func_0x000107c605fc(0);
    puVar11 = puVar17;
    func_0x000107c615f4(puVar17,3);
    func_0x000107c61480();
    if (puVar11 == (undefined *)0x0) {
      func_0x000107c615e8(puVar17);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar16 = *(long *)(puVar11 + 0x10);
    func_0x000107c61574();
    if (SBORROW8((ulong)puVar9 >> 1,(long)puVar14)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10193eb30);
      (*pcVar3)();
    }
    if (lVar16 == ((ulong)puVar9 >> 1) - (long)puVar14) {
      puVar14 = puVar17;
      func_0x000107c61480(puVar17,uVar8);
      func_0x000107c615ec(puVar17,2);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar14 != (undefined *)0x0) {
        return puVar14;
      }
      goto LAB_10193ea5c;
    }
    func_0x000107c615ec(puVar17,2);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if (((ulong)puVar11 & 0x8000000000000000) != 0) {
      puVar14 = puVar11;
    }
    puVar17 = (undefined *)0x0;
    func_0x000107c60484(0,puVar13);
    func_0x000107c6142c(puVar11);
    if (((ulong)puVar9 & 1) != 0) goto LAB_10193e9e4;
  }
  puVar11 = puVar17;
  func_0x000101940194(puVar17,puVar13,puVar14,puVar9);
LAB_10193ea5c:
  func_0x000107c615e8(puVar17);
  return puVar11;
}



/* Entry: 10193eb40; end: 10193eb77;  */

void FUN_10193eb40(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_3)(uVar1,param_2[1],param_2[2]);
  *param_1 = uVar1;
  return;
}



/* Entry: 10193eb78; end: 10193ebe7;  */

void FUN_10193eb78(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_38 = param_1;
  func_0x000107c61174();
  func_0x0001007d6d78(&uStack_38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_38 = param_1;
  func_0x000107c6157c(uVar2);
  func_0x0001007d6d78(&uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 10193ebe8; end: 10193ecaf;  */

void FUN_10193ebe8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(unaff_x20 + 0x50);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x58);
    lVar1 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar6 = *(code **)(lVar5 + 8);
    func_0x000107c615f0(lVar4);
    (*pcVar6)(lVar1,lVar5);
    func_0x000107c615e8(lVar4);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  *(long *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  func_0x000107c615e8(uVar2);
  *(undefined1 *)(unaff_x20 + 0x48) = 0;
  uStack_48 = 0;
  func_0x0001000285a8(0x112dd7588,&UNK_10d99a750);
  func_0x000107c613fc();
  puVar3 = &uStack_48;
  func_0x00010042e6a0();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 **)(unaff_x20 + 0x40) = puVar3;
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 10193ecb0; end: 10193ed4b;  */

/* WARNING: Removing unreachable block (ram,0x00010193ecdc) */

void FUN_10193ecb0(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000104886d18(&lStack_38);
  if (lStack_38 == 0) {
    FUN_10193ed4c(1,1);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    lVar1 = lStack_38;
    func_0x000107c61174();
    func_0x000107c6157c(uVar2);
    func_0x0001007d6d78(&lStack_38);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10193ed4c; end: 10193ee6f;  */

void FUN_10193ed4c(byte param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x48) = 1;
  plVar1 = (long *)&UNK_110415cb8;
  func_0x000107c613fc(&UNK_110415cb8,0x11,7);
  *(undefined1 *)(plVar1 + 2) = 0;
  plVar2 = plVar1;
  FUN_10193e0d4();
  puVar3 = &UNK_110415ce0;
  func_0x000107c613fc(&UNK_110415ce0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_110415e48;
  func_0x000107c613fc(&UNK_110415e48,0x22,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(long **)(puVar4 + 0x18) = plVar1;
  puVar4[0x20] = param_2 & 1;
  puVar4[0x21] = param_1 & 1;
  pcVar7 = *(code **)(*plVar2 + 0x60);
  func_0x000107c6157c(plVar1);
  uVar5 = 0x101940954;
  puVar3 = puVar4;
  (*pcVar7)();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  func_0x000107c61574(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
  return;
}



/* Entry: 10193ee70; end: 10193f16f;  */

void FUN_10193ee70(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x48) = 1;
  plVar1 = (long *)&UNK_110415cb8;
  func_0x000107c613fc(&UNK_110415cb8,0x11,7);
  *(undefined1 *)(plVar1 + 2) = 0;
  plVar2 = plVar1;
  FUN_10193e0d4();
  puVar3 = &UNK_110415ce0;
  func_0x000107c613fc(&UNK_110415ce0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_110415d08;
  func_0x000107c613fc(&UNK_110415d08,0x22,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(long **)(puVar4 + 0x18) = plVar1;
  *(undefined2 *)(puVar4 + 0x20) = 1;
  pcVar7 = *(code **)(*plVar2 + 0x60);
  func_0x000107c6157c(plVar1);
  pcVar5 = FUN_10193fb20;
  puVar3 = puVar4;
  (*pcVar7)();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  *(code **)(unaff_x20 + 0x50) = pcVar5;
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  func_0x000107c61574(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
  return;
}



/* Entry: 10193f170; end: 10193f6b7;  */

void FUN_10193f170(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c43d50();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = lVar2;
  func_0x000107c49e78();
  func_0x000107c615e8(lVar2);
  if ((int)lVar1 == 0) {
    return;
  }
  uVar6 = *(ulong *)(unaff_x20 + 0x28);
  uVar4 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x000107c5faec();
  uVar8 = param_2;
  func_0x000107c61170(uVar4);
  uVar4 = uVar6;
  func_0x000107c5db24();
  func_0x000107c61180();
  uVar11 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar11 == 0) {
    uVar11 = 0;
    uVar4 = 0;
    uVar13 = uVar8;
  }
  else {
    uVar4 = uVar11;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    if (uVar4 == 0) {
      uVar11 = 0;
      uVar4 = 0;
      uVar13 = uVar8;
    }
    else {
      uVar11 = uVar4;
      func_0x000107c5faec();
      uVar13 = uVar8;
      func_0x000107c61170(uVar4);
      uVar4 = uVar8;
    }
  }
  uVar8 = uVar6;
  func_0x000107c4213c();
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  if (uVar9 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    uVar12 = uVar13;
  }
  else {
    uVar8 = uVar9;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    if (uVar8 == 0) {
      uVar9 = 0;
      uVar8 = 0;
      uVar12 = uVar13;
    }
    else {
      uVar9 = uVar8;
      func_0x000107c5faec();
      uVar12 = uVar13;
      func_0x000107c61170(uVar8);
      uVar8 = uVar13;
    }
  }
  uVar13 = uVar3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar13 = param_2 >> 0x38 & 0xf;
  }
  if (uVar13 == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar8);
    goto LAB_10193f3d8;
  }
  if (uVar8 == 0) {
LAB_10193f330:
    func_0x000107c61434(uVar4);
    uVar8 = uVar4;
    uVar9 = uVar11;
    if (uVar4 == 0) {
      func_0x000107c6142c(param_2);
      uVar4 = 0;
LAB_10193f3d8:
      func_0x000107c6142c(uVar4);
      return;
    }
  }
  else {
    uVar13 = uVar9 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar13 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar13 == 0) {
      func_0x000107c6142c(uVar8);
      goto LAB_10193f330;
    }
  }
  uVar13 = uVar6;
  func_0x000107c3e980();
  func_0x000107c61180();
  uVar10 = uVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  uVar13 = uVar12;
  if (uVar10 == 0) {
LAB_10193f404:
    uVar12 = 0;
  }
  else {
    uVar7 = uVar10;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar7 == 0) {
      uVar10 = 0;
      uVar13 = uVar12;
      goto LAB_10193f404;
    }
    uVar10 = uVar7;
    func_0x000107c5faec(uVar7);
    uVar13 = uVar12;
    func_0x000107c61170(uVar7);
  }
  func_0x000107c3ea24();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  if (uVar7 != 0) {
    uVar6 = uVar7;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    if (uVar6 != 0) {
      uVar7 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      goto LAB_10193f47c;
    }
    uVar7 = 0;
  }
  uVar13 = 0;
LAB_10193f47c:
  uVar5 = 0;
  func_0x000103e2a910(0);
  func_0x000107c610f8();
  func_0x000103e2a7c8(uVar5,uVar3,param_2,uVar11,uVar4,uVar9,uVar8,uVar10,uVar12,uVar7,uVar13);
  return;
}



/* Entry: 10193f6b8; end: 10193f78f;  */

void FUN_10193f6b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uStack_50 = 0x101940910;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f6151c;
  puStack_58 = &UNK_110415e10;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4f8a4(param_2);
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10193f790; end: 10193f7ef;  */

void FUN_10193f790(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  if (param_2 == 0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
    }
    puStack_28 = puVar1;
    func_0x000107c61434();
    func_0x000100087f6c(&puStack_28);
    func_0x000107c6142c(puVar1);
  }
  else {
    puStack_28 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100087f6c(&puStack_28);
  }
  return;
}



/* Entry: 10193f7f0; end: 10193f8c7;  */

void FUN_10193f7f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uStack_50 = 0x1019408a4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f6151c;
  puStack_58 = &UNK_110415dc0;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4fa04(param_2);
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10193f8c8; end: 10193f913;  */

void FUN_10193f8c8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  puStack_28 = puVar1;
  func_0x000107c61434();
  func_0x000100087f6c(&puStack_28);
  func_0x000107c6142c(puVar1);
  return;
}



/* Entry: 10193f914; end: 10193f9a7;  */

void FUN_10193f914(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x0001019408ac(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10193f9a8; end: 10193f9bf;  */

void FUN_10193f9a8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x40));
  return;
}



/* Entry: 10193f9c0; end: 10193fb1f;  */

void FUN_10193f9c0(void)

{
  FUN_10193e0d4();
  return;
}



/* Entry: 10193fb20; end: 10193fb2f;  */

void FUN_10193fb20(ulong *param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  ulong uVar12;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x20);
  bVar3 = *(byte *)(unaff_x20 + 0x21);
  uVar12 = *param_1;
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    return;
  }
  func_0x000107c61428(lVar1 + 0x10,auStack_70,0,0);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_88,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    if (uVar12 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar12 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar12) {
        uVar6 = uVar12;
      }
      func_0x000107c60480();
    }
    if (uVar6 == 0) {
      uVar7 = 0;
      FUN_10193f170();
    }
    else if ((uVar12 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10193f170);
        (*pcVar4)();
      }
      uVar7 = *(undefined8 *)(uVar12 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar7 = 0;
      func_0x00010101b920(0,uVar12);
    }
    pcVar8 = "preselectFirstSuggestedFriendIfNeeded(currentSession:crossSession:)";
    func_0x0001000c10c0("preselectFirstSuggestedFriendIfNeeded(currentSession:crossSession:)");
    func_0x000107c61180();
    puVar9 = &UNK_110415ce0;
    func_0x000107c613fc(&UNK_110415ce0,0x18,7);
    func_0x000107c61644(puVar9 + 0x10,lVar5);
    puVar10 = &UNK_110415d30;
    func_0x000107c613fc(&UNK_110415d30,0x22,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined8 *)(puVar10 + 0x18) = uVar7;
    puVar10[0x20] = bVar2 & 1;
    puVar10[0x21] = bVar3 & 1;
    pcStack_98 = FUN_101940270;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_110415d48;
    ppuVar11 = &puStack_b8;
    puStack_90 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_90;
    func_0x000107c61174(uVar7);
    func_0x000107c61574(puVar9);
    func_0x000107c4e524(pcVar8);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61574(lVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(pcVar8);
    return;
  }
  func_0x000107c61574(lVar5);
  return;
}



/* Entry: 10193fb30; end: 10193fb8b;  */

void FUN_10193fb30(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000103e2a910();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dd7570;
  plVar5 = (long *)&UNK_10d99a730;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10193fb8c; end: 10193fbc3;  */

void FUN_10193fb8c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_10193ff8c(uVar2 + uVar4,1,&SUB_100f630bc,&UNK_100f632d0);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    (*(code *)&SUB_100f63690)
              (uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
               (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10193fcc0);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10193fcc4);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10193fcbc);
  (*pcVar1)();
}



/* Entry: 10193fbc4; end: 10193fcc3;  */

void FUN_10193fbc4(ulong param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_10193ff8c(uVar2 + uVar4,1,param_2,param_3);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    (*param_4)(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
               (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10193fcc0);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10193fcc4);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10193fcbc);
  (*pcVar1)();
}



/* Entry: 10193fcc4; end: 10193fcd7;  */

ulong FUN_10193fcc4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10193fe14);
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
  FUN_10193fe14(uVar2,uVar4,FUN_10193fb30);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10193fe10);
      (*pcVar1)();
    }
    FUN_10193fe94(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10193fcd8; end: 10193fe13;  */

ulong FUN_10193fcd8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10193fe14);
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
  FUN_10193fe14(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10193fe10);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10193fe14; end: 10193fe93;  */

undefined * FUN_10193fe14(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 10193fe94; end: 10193ff8b;  */

long FUN_10193fe94(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10193ff88);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10193ff8c);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000103e2a910(0);
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
      func_0x000103e2a910(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10193ff84);
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



/* Entry: 10193ff8c; end: 101940053;  */

void FUN_10193ff8c(long param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_10193fcd8();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 101940054; end: 10194006f;  */

void FUN_101940054(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101940070();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101940070; end: 10194026f;  */

undefined * FUN_101940070(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101940194);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_10193fb30();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000103e2a910(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101940270; end: 1019402a3;  */

/* WARNING: Removing unreachable block (ram,0x00010193f58c) */
/* WARNING: Removing unreachable block (ram,0x00010193f5f8) */

void FUN_101940270(void)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  code *pcVar9;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  bVar1 = *(byte *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x21);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar3 + 0x50);
  *(undefined1 *)(lVar3 + 0x48) = 0;
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + 0x58);
    lVar4 = lVar7;
    func_0x000107c614f0(lVar7);
    pcVar9 = *(code **)(lVar8 + 8);
    func_0x000107c615f0(lVar7);
    (*pcVar9)(lVar4,lVar8);
    func_0x000107c615e8(lVar7);
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
  }
  *(long *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  func_0x000107c615e8(uVar5);
  if (lVar6 != 0) {
    if ((bVar1 & 1) == 0) {
      func_0x000107c61174(lVar6);
    }
    else {
      lVar7 = lVar6;
      func_0x000107c61174(lVar6);
      func_0x000104886d18(&lStack_80);
      if (lStack_80 == 0) {
        lStack_80 = lVar6;
        func_0x000107c61174(lVar7);
        func_0x0001007d6d78(&lStack_80);
        func_0x000107c61170(lVar7);
      }
      else {
        func_0x000107c61170();
      }
    }
    if ((bVar2 & 1) == 0) {
      func_0x000107c61574(lVar3);
      lVar7 = lVar6;
    }
    else {
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      func_0x000107c6157c(uVar5);
      func_0x000104886d18(&lStack_80);
      func_0x000107c61574(uVar5);
      lVar7 = lStack_80;
      if (lStack_80 == 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x40);
        lStack_80 = lVar6;
        func_0x000107c61174(lVar6);
        func_0x000107c6157c(uVar5);
        func_0x0001007d6d78(&lStack_80);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar6);
        func_0x000107c61574(lVar3);
        func_0x000107c61574(uVar5);
        return;
      }
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(lVar7);
    return;
  }
  func_0x000107c61574(lVar3);
  return;
}



/* Entry: 1019402a4; end: 1019402d7;  */

void FUN_1019402a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1],param_2[2]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1019402d8; end: 10194042f;  */

ulong FUN_1019402d8(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101940430);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101940424);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000103e2a910(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101940428);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10194042c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          func_0x00010101b920(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101940430; end: 10194085b;  */

ulong * FUN_101940430(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puStack_80;
  undefined8 uStack_78;
  ulong *puStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar16 = (ulong *)((ulong)param_2 & 0xffffffffffffff8);
  puVar6 = param_2;
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar5 = param_1;
    puVar15 = (ulong *)puVar16[2];
  }
  else {
    puVar5 = puVar16;
    if ((ulong *)0x7fffffffffffffff < param_2) {
      puVar5 = param_2;
    }
    func_0x000107c60480();
    puVar15 = puVar5;
  }
  puVar14 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar15 != (ulong *)0x0) {
    puVar9 = (ulong *)0x0;
    puVar8 = (ulong *)PTR__swift_isaMask_11034f488;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if ((ulong *)puVar16[2] <= puVar9) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101940830);
            (*pcVar4)();
          }
          puVar5 = (ulong *)param_2[(long)((long)puVar9 + 4)];
          func_0x000107c61174();
          puVar12 = puVar6;
        }
        else {
          puVar5 = puVar9;
          puVar12 = param_2;
          func_0x00010101b920(puVar9,param_2);
        }
        puVar1 = (ulong *)((long)puVar9 + 1);
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10194082c);
          (*pcVar4)();
        }
        puVar6 = puVar5;
        (**(code **)((*puVar8 & *puVar5) + 0x78))();
        ppuVar7 = &puStack_80;
        func_0x000100403b00(ppuVar7,puVar6,puVar12);
        func_0x000107c6142c(uStack_78);
        if (((ulong)ppuVar7 & 1) != 0) break;
        func_0x000107c61170();
        puVar9 = (ulong *)((long)puVar9 + 1);
        if (puVar1 == puVar15) goto LAB_1019405ac;
      }
      puVar8 = puVar14;
      func_0x000107c61558();
      puStack_70 = puVar14;
      if (((ulong)puVar8 & 1) == 0) {
        puVar6 = (ulong *)(puVar14[2] + 1);
        puVar8 = (ulong *)0x0;
        FUN_101940054(0,puVar6,1);
      }
      uVar2 = puStack_70[2];
      puVar14 = (ulong *)(uVar2 + 1);
      if (puStack_70[3] >> 1 <= uVar2) {
        puVar8 = (ulong *)(ulong)(1 < puStack_70[3]);
        puVar6 = puVar14;
        FUN_101940054(puVar8,puVar14,1);
      }
      puStack_70[2] = (ulong)puVar14;
      puStack_70[uVar2 + 4] = (ulong)puVar5;
      puVar5 = puVar8;
      puVar14 = puStack_70;
      puVar9 = puVar1;
      puVar8 = (ulong *)PTR__swift_isaMask_11034f488;
    } while (puVar1 != puVar15);
  }
LAB_1019405ac:
  if (param_1 == (ulong *)0x0) {
    func_0x000107c6142c(puStack_68);
  }
  else {
    FUN_10193fb30();
    puVar6 = (ulong *)(((ulong)(uint)puVar5[6] + 7 & 0x1fffffff8) + 8);
    func_0x000107c613fc();
    puVar5[3] = 3;
    puVar5[2] = 1;
    puVar5[4] = (ulong)param_1;
    if (((long)puVar14 < 0) || (((ulong)puVar14 >> 0x3e & 1) != 0)) {
      puVar16 = puVar14;
      func_0x000107c60480();
    }
    else {
      puVar16 = (ulong *)puVar14[2];
    }
    func_0x000107c61174();
    func_0x000107c61174();
    puVar15 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar16 != (ulong *)0x0) {
      puVar8 = (ulong *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar14 & 0xc000000000000001) == 0) {
            if ((ulong *)puVar14[2] <= puVar8) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101940838);
              (*pcVar4)();
            }
            puVar9 = (ulong *)puVar14[(long)((long)puVar8 + 4)];
            func_0x000107c61174();
            puVar12 = puVar6;
          }
          else {
            puVar9 = puVar8;
            puVar12 = puVar14;
            func_0x00010101b920();
          }
          puVar3 = PTR__swift_isaMask_11034f488;
          puVar1 = (ulong *)((long)puVar8 + 1);
          if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101940834);
            (*pcVar4)();
          }
          puVar10 = puVar9;
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar9) + 0x78))();
          puVar11 = puVar10;
          puVar13 = puVar12;
          (**(code **)((*(ulong *)puVar3 & *param_1) + 0x78))();
          if (puVar10 != puVar11 || puVar12 != puVar13) break;
          puVar6 = puVar13;
          func_0x000107c61170(puVar9);
          func_0x000107c6142c(puVar12);
          func_0x000107c6142c(puVar13);
LAB_101940644:
          puVar8 = (ulong *)((long)puVar8 + 1);
          if (puVar1 == puVar16) goto LAB_1019407c0;
        }
        puVar6 = puVar12;
        func_0x000107c605b8(puVar10,puVar12,puVar11,puVar13,0);
        func_0x000107c6142c(puVar12);
        func_0x000107c6142c(puVar13);
        if (((ulong)puVar10 & 1) != 0) {
          func_0x000107c61170(puVar9);
          goto LAB_101940644;
        }
        puVar8 = puVar15;
        func_0x000107c61558();
        puStack_80 = puVar15;
        if (((ulong)puVar8 & 1) == 0) {
          puVar6 = (ulong *)(puVar15[2] + 1);
          FUN_101940054(0,puVar6,1);
        }
        uVar2 = puStack_80[2];
        puVar15 = (ulong *)(uVar2 + 1);
        if (puStack_80[3] >> 1 <= uVar2) {
          puVar6 = puVar15;
          FUN_101940054(1 < puStack_80[3],puVar15,1);
        }
        puStack_80[2] = (ulong)puVar15;
        puStack_80[uVar2 + 4] = (ulong)puVar9;
        puVar15 = puStack_80;
        puVar8 = puVar1;
      } while (puVar1 != puVar16);
    }
LAB_1019407c0:
    func_0x000107c61574(puVar14);
    puStack_80 = puVar5;
    FUN_10193fbc4(puVar15,FUN_10193fb30,FUN_10193fe94,FUN_1019402d8);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puStack_68);
    puVar14 = puStack_80;
  }
  return puVar14;
}



/* Entry: 10194085c; end: 10194089b;  */

void FUN_10194085c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10194089c; end: 1019408cb;  */

void FUN_10194089c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_70;
  uStack_50 = 0x1019408a4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f6151c;
  puStack_58 = &UNK_110415dc0;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c4fa04(uVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1019408cc; end: 101940907;  */

void FUN_1019408cc(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101940908; end: 101940917;  */

void FUN_101940908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_70;
  uStack_50 = 0x101940910;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f6151c;
  puStack_58 = &UNK_110415e10;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c4f8a4(uVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 101940918; end: 101940943;  */

void FUN_101940918(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101940944; end: 101940957;  */

void FUN_101940944(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101940958; end: 1019409bf;  */

void FUN_101940958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 1019409c0; end: 101940af3;  */

/* WARNING: Possible PIC construction at 0x000101940a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101940a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101940ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101940ad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101940ac4) */
/* WARNING: Removing unreachable block (ram,0x000101940a58) */
/* WARNING: Removing unreachable block (ram,0x000101940a44) */
/* WARNING: Removing unreachable block (ram,0x000101940ad4) */

void FUN_1019409c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110415ec8;
  func_0x000107c613fc(&UNK_110415ec8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x0001000285a8(0x112dd76a0,&UNK_10d99a7e0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 101940af4; end: 101940b03;  */

/* WARNING: Possible PIC construction at 0x000101940a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101940a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101940ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101940ad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101940ac4) */
/* WARNING: Removing unreachable block (ram,0x000101940a58) */
/* WARNING: Removing unreachable block (ram,0x000101940a44) */
/* WARNING: Removing unreachable block (ram,0x000101940ad4) */

void FUN_101940af4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = &UNK_110415ec8;
  func_0x000107c613fc(&UNK_110415ec8,0x28,7,*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
  func_0x0001000285a8(0x112dd76a0,&UNK_10d99a7e0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101940b04; end: 101940bd7;  */

/* WARNING: Possible PIC construction at 0x000101940bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101940bc0) */

void FUN_101940b04(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001000285a8(0x112d6e3a8,&UNK_10d930310);
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  lVar2 = 0;
  func_0x0001019435e8();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0xd000000000000034;
  *(undefined8 *)(lVar3 + 0x18) = 0x800000010efc1840;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = param_3;
  *(undefined8 *)(lVar3 + 0x30) = param_4;
  *(undefined8 *)(lVar3 + 0x38) = 1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110416110;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 101940bd8; end: 101940cf7;  */

/* WARNING: Possible PIC construction at 0x000101940cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101940cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101940cc4) */
/* WARNING: Removing unreachable block (ram,0x000101940cd4) */

void FUN_101940bd8(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_68;
  
  func_0x000108c2be94();
  lVar1 = 0;
  func_0x00010193f988();
  lVar2 = lVar1;
  func_0x000107c613fc();
  uStack_68 = 0;
  lVar3 = 0x112dd7588;
  func_0x0001000285a8(0x112dd7588,&UNK_10d99a750);
  func_0x000107c613fc();
  puVar4 = &uStack_68;
  func_0x00010042e6a0();
  *(undefined8 **)(lVar2 + 0x38) = puVar4;
  uStack_68 = 0;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  puVar4 = &uStack_68;
  func_0x00010042e6a0();
  *(undefined8 **)(lVar2 + 0x40) = puVar4;
  *(undefined1 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 1;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(long *)(lVar2 + 0x20) = (long)param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110415c50;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}


