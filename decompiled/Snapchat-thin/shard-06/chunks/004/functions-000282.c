/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10488f6b0; end: 10488f717;  */

void FUN_10488f6b0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10488f718,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010488f714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10488f718; end: 10488f75f;  */

void FUN_10488f718(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x48),uVar1,*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010488f75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10488f760; end: 10488f867;  */

long FUN_10488f760(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(param_3 + -8);
  lVar1 = param_2;
  lVar3 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(lVar1,lVar3);
  if (-1 < param_2) {
    if (param_2 != 0) {
      pcVar5 = *(code **)(lVar4 + 0x10);
      (*pcVar5)(puVar2,param_1,param_3);
      pcVar6 = *(code **)(lVar4 + 0x20);
      (*pcVar6)(lVar3,puVar2,param_3);
      param_2 = param_2 + -1;
      if (param_2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x48);
        do {
          lVar3 = lVar3 + lVar4;
          (*pcVar5)(puVar2,param_1,param_3);
          (*pcVar6)(lVar3,puVar2,param_3);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
    __sSaMa(0,param_3);
    return lVar1;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10488f868);
  (*pcVar5)();
}



/* Entry: 10488f868; end: 10488f8bb;  */

void FUN_10488f868(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  __sSqMa(0,*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return;
}



/* Entry: 10488f8bc; end: 10488f9bb;  */

void FUN_10488f8bc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x20),
             PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  lVar9 = *(long *)(unaff_x20 + 0x58);
  plVar6 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10488f9bc;
  plVar6[8] = lVar7;
  plVar6[9] = param_2;
  plVar6[6] = unaff_x20 + (uVar8 + 0x60 & (uVar8 ^ 0xffffffffffffffff));
  plVar6[7] = lVar2;
  plVar6[4] = lVar4;
  plVar6[5] = lVar9;
  plVar6[2] = param_1;
  plVar6[3] = lVar5;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[10] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8,uVar1,uVar3);
  plVar6[0xb] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488f618,0,0);
  return;
}



/* Entry: 10488f9bc; end: 10488f9f7;  */

void FUN_10488f9bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010488f9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10488f9f8; end: 10488f9fb;  */

void FUN_10488f9f8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010488f9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10488f9fc; end: 10488fa37;  */

void FUN_10488f9fc(void)

{
  func_0x000100858f20();
  return;
}



/* Entry: 10488fa38; end: 10488fc0f;  */

void FUN_10488fa38(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_a0 + -extraout_x8;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000abe04(param_3,puVar4);
  lVar1 = 0;
  __sScPMa();
  lVar7 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar7 + 0x30))(puVar4,1,lVar1);
  uVar6 = param_5;
  _swift_retain(param_5);
  if ((int)puVar2 == 1) {
    func_0x0001000abe54(puVar4);
    uVar6 = 0x1000;
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar7 + 8))(puVar4,lVar1);
    uVar6 = uVar6 & 0xff | 0x1000;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar7 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar1);
  _swift_release(param_5);
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = lVar1;
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar1);
  }
  if (param_2 == 0) {
    if (lVar7 == 0 && lVar5 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0;
      puVar3 = &uStack_90;
      lStack_80 = lVar5;
      lStack_78 = lVar7;
    }
    _swift_task_create(uVar6,puVar3,param_6,param_4,param_5);
  }
  else {
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    FUN_104890c64(auStack_98,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10),uVar6,lVar5,lVar7,
                  &uStack_70,param_6);
    _swift_release(param_5);
    _swift_release(param_1);
  }
  return;
}



/* Entry: 10488fc10; end: 10488fc7b;  */

void FUN_10488fc10(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (lRam0000000113097070 != -1) {
    _swift_once(0x113097070,&UNK_1000ab9ec);
  }
  __ss9TaskLocalC3getxyF(&uStack_50);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 10488fc7c; end: 10488fca7;  */

void FUN_10488fc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined1 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488fca8,0,0);
  return;
}



/* Entry: 10488fca8; end: 10488fe2b;  */

void FUN_10488fca8(void)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  piVar2 = *(int **)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x98);
  puVar4 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  _swift_allocObject();
  puVar4[3] = 6;
  puVar4[2] = 3;
  puVar4[4] = 0x6b73615470616e53;
  puVar4[5] = 0xe800000000000000;
  func_0x0001000b0164(uVar9,uVar5,uVar3);
  func_0x0001000b030c();
  puVar4[6] = uVar9;
  puVar4[7] = uVar5;
  puVar4[8] = uVar6;
  puVar4[9] = uVar7;
  *(undefined8 **)(unaff_x22 + 0x40) = puVar4;
  _swift_bridgeObjectRetain(uVar7);
  uVar7 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar7;
  func_0x00010011d734();
  uVar6 = 0x3a;
  uVar9 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x3a,0xe100000000000000,uVar7,uVar5);
  _swift_release();
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x80) = puVar4;
  _swift_beginAccess();
  uVar7 = *puVar4;
  _objc_retain(uVar7);
  func_0x000100029b28(uVar6,uVar9);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
  _objc_release(uVar7);
  _swift_bridgeObjectRelease(uVar9);
  iVar1 = *piVar2;
  plVar8 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10488fe2c;
                    /* WARNING: Could not recover jumptable at 0x00010488fe28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar8,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 10488fe2c; end: 10488fe73;  */

void FUN_10488fe2c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488fe74,0,0);
  return;
}



/* Entry: 10488fe74; end: 10488fed3;  */

void FUN_10488fe74(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_beginAccess(puVar1,unaff_x22 + 0x28,0,0);
  uVar3 = *puVar1;
  _objc_retain(uVar3);
  func_0x000100069b5c(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010488fed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10488fed4; end: 10488feff;  */

void FUN_10488fed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_7;
  *(undefined8 *)(unaff_x22 + 0x90) = param_8;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined1 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488ff00,0,0);
  return;
}



/* Entry: 10488ff00; end: 104890083;  */

void FUN_10488ff00(void)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  piVar2 = *(int **)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xb8);
  puVar4 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  _swift_allocObject();
  puVar4[3] = 6;
  puVar4[2] = 3;
  puVar4[4] = 0x6b73615470616e53;
  puVar4[5] = 0xe800000000000000;
  func_0x0001000b0164(uVar9,uVar5,uVar3);
  func_0x0001000b030c();
  puVar4[6] = uVar9;
  puVar4[7] = uVar5;
  puVar4[8] = uVar6;
  puVar4[9] = uVar7;
  *(undefined8 **)(unaff_x22 + 0x58) = puVar4;
  _swift_bridgeObjectRetain(uVar7);
  uVar7 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar7;
  func_0x00010011d734();
  uVar6 = 0x3a;
  uVar9 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x3a,0xe100000000000000,uVar7,uVar5);
  _swift_release();
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x98) = puVar4;
  _swift_beginAccess();
  uVar7 = *puVar4;
  _objc_retain(uVar7);
  func_0x000100029b28(uVar6,uVar9);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar6;
  _objc_release(uVar7);
  _swift_bridgeObjectRelease(uVar9);
  iVar1 = *piVar2;
  plVar8 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_104890084;
                    /* WARNING: Could not recover jumptable at 0x000104890080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar8,*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 104890084; end: 1048900df;  */

void FUN_104890084(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1048900e0;
  }
  else {
    pcVar1 = FUN_104890144;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1048900e0; end: 104890143;  */

void FUN_1048900e0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_beginAccess(puVar1,unaff_x22 + 0x40,0,0);
  uVar3 = *puVar1;
  _objc_retain(uVar3);
  func_0x000100069b5c(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000104890140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104890144; end: 1048901a7;  */

void FUN_104890144(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_beginAccess(puVar1,unaff_x22 + 0x28,0,0);
  uVar3 = *puVar1;
  _objc_retain(uVar3);
  func_0x000100069b5c(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001048901a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1048901a8; end: 10489023b;  */

void FUN_1048901a8(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  int *piVar6;
  long lVar7;
  
  lVar5 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar5 + 0x58);
  uVar4 = *(undefined8 *)(lVar5 + 0x50);
  piVar6 = *(int **)(lVar5 + 0x40);
  lVar7 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x60));
  _swift_release(uVar2);
  func_0x0001000abe54(uVar4);
  iVar1 = *piVar6;
  plVar3 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(lVar5 + 0x68) = plVar3;
  *plVar3 = lVar7;
  plVar3[1] = (long)FUN_10489023c;
                    /* WARNING: Could not recover jumptable at 0x000104890238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(lVar5 + 0x28));
  return;
}



/* Entry: 10489023c; end: 104890283;  */

void FUN_10489023c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000104890280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 104890284; end: 104890317;  */

void FUN_104890284(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  int *piVar6;
  long lVar7;
  
  lVar5 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar5 + 0x58);
  uVar4 = *(undefined8 *)(lVar5 + 0x50);
  piVar6 = *(int **)(lVar5 + 0x40);
  lVar7 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x60));
  _swift_release(uVar2);
  func_0x0001000abe54(uVar4);
  iVar1 = *piVar6;
  plVar3 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(lVar5 + 0x68) = plVar3;
  *plVar3 = lVar7;
  plVar3[1] = (long)FUN_104890318;
                    /* WARNING: Could not recover jumptable at 0x000104890314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(lVar5 + 0x28));
  return;
}



/* Entry: 104890318; end: 10489035f;  */

void FUN_104890318(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010489035c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 104890360; end: 104890373;  */

void FUN_104890360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104890374,0,0);
  return;
}



/* Entry: 104890374; end: 1048903eb;  */

/* WARNING: Removing unreachable block (ram,0x000104890398) */

void FUN_104890374(void)

{
  long *plVar1;
  long unaff_x22;
  
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1048903ec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 1048903ec; end: 10489053b;  */

void FUN_1048903ec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104890428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10489053c; end: 1048905bb;  */

void FUN_10489053c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZTu_11034fe18
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x104891304;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZ_11034fe10
  )(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 1048905bc; end: 10489064b;  */

void FUN_1048905bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x104891308;
                    /* WARNING: Could not recover jumptable at 0x000104890648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10489064c(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10489064c; end: 1048906db;  */

void FUN_10489064c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10489130c;
                    /* WARNING: Could not recover jumptable at 0x0001048906d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_104890df4(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 1048906dc; end: 104890a63;  */

undefined4 FUN_1048906dc(void)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  __sScPMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puStack_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_70 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12_00;
  lStack_68 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar5 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = lVar11 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar7 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar12 - extraout_x12_05;
  __sScTss5NeverORszABRs_rlE15currentPriorityScPvgZ(lVar6);
  pcVar10 = *(code **)(lVar8 + 0x10);
  lVar3 = lVar12;
  (*pcVar10)(lVar12,lVar6,lVar2);
  __sScP10backgroundScPvgZ(uVar7);
  func_0x0001000f160c();
  uVar4 = uVar7;
  __sSQ2eeoiySbx_xtFZTj(uVar7,lVar12,lVar2,lVar3);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(uVar7,lVar2);
  (*pcVar9)(lVar12,lVar2);
  if ((uVar4 & 1) == 0) {
    (*pcVar10)(lVar11,lVar6,lVar2);
    __sScP3lowScPvgZ(uVar7);
    uVar4 = uVar7;
    __sSQ2eeoiySbx_xtFZTj(uVar7,lVar11,lVar2,lVar3);
    (*pcVar9)(uVar7,lVar2);
    (*pcVar9)(lVar11,lVar2);
    if ((uVar4 & 1) == 0) {
      (*pcVar10)(lVar5,lVar6,lVar2);
      __sScP7utilityScPvgZ(uVar7);
      uVar4 = uVar7;
      __sSQ2eeoiySbx_xtFZTj(uVar7,lVar5,lVar2,lVar3);
      (*pcVar9)(uVar7,lVar2);
      (*pcVar9)(lVar5,lVar2);
      lVar5 = lStack_68;
      if ((uVar4 & 1) == 0) {
        (*pcVar10)(lStack_68,lVar6,lVar2);
        __sScP8rawValueScPs5UInt8V_tcfC(uVar7,0x15);
        uVar4 = uVar7;
        __sSQ2eeoiySbx_xtFZTj(uVar7,lVar5,lVar2,lVar3);
        (*pcVar9)(uVar7,lVar2);
        (*pcVar9)(lVar5,lVar2);
        lVar5 = lStack_70;
        if ((uVar4 & 1) != 0) {
          (*pcVar9)(lVar6,lVar2);
          return 1;
        }
        (*pcVar10)(lStack_70,lVar6,lVar2);
        __sScP4highScPvgZ(uVar7);
        uVar4 = uVar7;
        __sSQ2eeoiySbx_xtFZTj(uVar7,lVar5,lVar2,lVar3);
        (*pcVar9)(uVar7,lVar2);
        (*pcVar9)(lVar5,lVar2);
        puVar1 = puStack_78;
        if ((uVar4 & 1) != 0) {
          (*pcVar9)(lVar6,lVar2);
          return 2;
        }
        (*pcVar10)(puStack_78,lVar6,lVar2);
        __sScP13userInitiatedScPvgZ(uVar7);
        uVar4 = uVar7;
        __sSQ2eeoiySbx_xtFZTj(uVar7,puVar1,lVar2,lVar3);
        (*pcVar9)(uVar7,lVar2);
        (*pcVar9)(puVar1,lVar2);
        (*pcVar9)(lVar6,lVar2);
        if ((uVar4 & 1) != 0) {
          return 3;
        }
        return 1;
      }
    }
  }
  (*pcVar9)(lVar6,lVar2);
  return 0;
}



/* Entry: 104890a64; end: 104890a8f;  */

long FUN_104890a64(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104890a90; end: 104890b17;  */

undefined8 * FUN_104890a90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  func_0x0001000ab9d4(uVar6,uVar2,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar6;
  param_1[1] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar4;
  func_0x00010007d980(uVar1,uVar3,uVar5);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  param_1[3] = param_2[3];
  uVar6 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Entry: 104890b18; end: 104890b73;  */

undefined8 * FUN_104890b18(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010007d980(uVar3,uVar4,uVar2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar3 = param_2[4];
  uVar4 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 104890b74; end: 104890b83;  */

undefined1  [16] FUN_104890b74(void)

{
  return ZEXT816(0x1107aca58);
}



/* Entry: 104890b84; end: 104890c27;  */

void FUN_104890b84(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar5 = *(long *)(unaff_x20 + 0x48);
  plVar7 = (long *)0xa0;
  uVar6 = *(undefined1 *)(unaff_x20 + 0x28);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_104890c28;
  plVar7[0xe] = lVar2;
  plVar7[0xf] = lVar5;
  plVar7[0xc] = lVar1;
  plVar7[0xd] = lVar4;
  *(undefined1 *)(plVar7 + 0x13) = uVar6;
  plVar7[10] = lVar3;
  plVar7[0xb] = lVar8;
  plVar7[9] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488fca8,0,0);
  return;
}



/* Entry: 104890c28; end: 104890c63;  */

void FUN_104890c28(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104890c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104890c64; end: 104890d1b;  */

void FUN_104890c64(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2 != 0) {
    uVar1 = *param_7;
    uVar2 = param_7[1];
    _swift_retain(uVar2);
    if (param_6 == 0 && param_5 == 0) {
      puStack_90 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puStack_90 = &uStack_80;
      lStack_70 = param_5;
      lStack_68 = param_6;
    }
    uStack_98 = 7;
    lStack_88 = param_2;
    _swift_task_create(param_4,&uStack_98,param_8,uVar1,uVar2);
    *param_1 = param_4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104890d1c);
  (*pcVar3)();
}



/* Entry: 104890d1c; end: 104890df3;  */

void FUN_104890d1c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2 != 0) {
    _swift_allocObject(param_10,0x28,7);
    *(undefined8 *)(param_10 + 0x10) = param_8;
    uVar2 = param_7[1];
    uVar3 = *param_7;
    *(undefined8 *)(param_10 + 0x20) = param_7[1];
    *(undefined8 *)(param_10 + 0x18) = uVar3;
    _swift_retain(uVar2);
    if (param_6 == 0 && param_5 == 0) {
      puStack_90 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puStack_90 = &uStack_80;
      lStack_70 = param_5;
      lStack_68 = param_6;
    }
    uStack_98 = 7;
    lStack_88 = param_2;
    _swift_task_create(param_4,&uStack_98,param_8,param_11,param_10);
    *param_1 = param_4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104890df4);
  (*pcVar1)();
}



/* Entry: 104890df4; end: 104890e7f;  */

void FUN_104890df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104890e80,0,0);
  return;
}



/* Entry: 104890e80; end: 104890f5f;  */

void FUN_104890e80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  __ss5ClockP3now7InstantQzvgTj(uVar1,uVar8,uVar5);
  _swift_getAssociatedConformanceWitness
            (uVar5,uVar8,uVar2,PTR___ss5ClockTL_110350028,
             PTR___ss5ClockP7InstantAB_s0B8ProtocolTn_110350018);
  __ss15InstantProtocolP8advanced2byx8DurationQz_tFTj(uVar3,uVar9,uVar2,uVar5);
  pcVar7 = *(code **)(lVar4 + 8);
  *(code **)(unaff_x22 + 0x58) = pcVar7;
  (*pcVar7)(uVar1,uVar2);
  plVar6 = (long *)(ulong)*(uint *)(
                                   PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTjTu_110350010
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_104890f60;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTj_110350008)
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x18),
             *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 104890f60; end: 104891003;  */

void FUN_104890f60(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  pcVar1 = *(code **)(lVar5 + 0x58);
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  uVar3 = *(undefined8 *)(lVar5 + 0x38);
  lVar4 = *unaff_x22;
  *(long *)(lVar5 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x60));
  (*pcVar1)(uVar2,uVar3);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104891004,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x50));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000104891000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 104891004; end: 104891077;  */

void FUN_104891004(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010489103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104891078; end: 10489110b;  */

void FUN_104891078(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x104891310;
  (*(code *)&UNK_100859e14)(plVar5,param_1,uVar1,uVar3,uVar4,uVar6,uVar2);
  return;
}



/* Entry: 10489110c; end: 104891173;  */

void FUN_10489110c(void)

{
  long unaff_x20;
  
  func_0x00010007d980(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined1 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104891174; end: 104891217;  */

void FUN_104891174(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar5 = *(long *)(unaff_x20 + 0x48);
  plVar7 = (long *)0xc0;
  uVar6 = *(undefined1 *)(unaff_x20 + 0x28);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_104891218;
  plVar7[0x11] = lVar2;
  plVar7[0x12] = lVar5;
  plVar7[0xf] = lVar1;
  plVar7[0x10] = lVar4;
  *(undefined1 *)(plVar7 + 0x17) = uVar6;
  plVar7[0xd] = lVar3;
  plVar7[0xe] = lVar8;
  plVar7[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488ff00,0,0);
  return;
}



/* Entry: 104891218; end: 104891253;  */

void FUN_104891218(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104891250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104891254; end: 1048912d3;  */

void FUN_104891254(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10489131c;
  (*(code *)&UNK_1001d11c4)(plVar3,param_1,uVar2,uVar4,uVar1);
  return;
}



/* Entry: 1048912d4; end: 1048912ff;  */

void FUN_1048912d4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104891300; end: 10489134b;  */

void FUN_104891300(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104890538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10489134c; end: 10489141f;  */

void FUN_10489134c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104891420; end: 10489143f;  */

void FUN_104891420(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104891440; end: 10489147f;  */

void FUN_104891440(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3d050;
  _swift_getWitnessTable(&UNK_10dd3d050,&UNK_1107acc78);
  puRam0000000113097088 = puVar1;
  return;
}



/* Entry: 104891480; end: 1048915e3;  */

int FUN_104891480(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048914fc;
        goto LAB_1048914e0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048914e0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1048914fc:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048915e4; end: 10489174b;  */

undefined8 FUN_1048915e4(byte param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (param_1 < 2) {
    if (param_1 == 0) {
      __sScP3lowScPvgZ(puVar4);
    }
    else {
      __sScP8rawValueScPs5UInt8V_tcfC(puVar4,0x15);
    }
  }
  else if (param_1 == 2) {
    __sScP4highScPvgZ(puVar4);
  }
  else {
    if (param_1 != 3) {
      lVar1 = 0;
      __sScPMa();
      uVar3 = 1;
      goto LAB_1048916b8;
    }
    __sScP13userInitiatedScPvgZ(puVar4);
  }
  lVar1 = 0;
  __sScPMa();
  uVar3 = 0;
LAB_1048916b8:
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,uVar3,1);
  puVar2 = &UNK_1107ace58;
  _swift_allocObject(&UNK_1107ace58,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _swift_retain(param_3);
  uVar3 = 0;
  FUN_10489174c(0,0,puVar4,&UNK_10dd3d158,puVar2);
  func_0x0001000afec4(puVar4,0x112d453c8,&UNK_10d90ac60);
  return uVar3;
}



/* Entry: 10489174c; end: 104891997;  */

void FUN_10489174c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_b0 + -extraout_x8;
  func_0x0001000abe04(param_3,puVar5);
  lVar1 = 0;
  __sScPMa();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
  uVar7 = param_5;
  _swift_retain(param_5);
  if ((int)puVar2 == 1) {
    func_0x0001000afec4(puVar5,0x112d453c8,&UNK_10d90ac60);
    uVar7 = 0x1000;
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    uVar7 = uVar7 & 0xff | 0x1000;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar1);
  _swift_release(param_5);
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = lVar1;
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar1);
  }
  if (param_2 == 0) {
    puVar3 = &UNK_1107ace80;
    _swift_allocObject(&UNK_1107ace80,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    if (lVar8 == 0 && lVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uStack_70 = 0;
      uStack_68 = 0;
      puVar4 = &uStack_70;
      lStack_60 = lVar6;
      lStack_58 = lVar8;
    }
    _swift_task_create(uVar7,puVar4,PTR___sytN_11034f1b0 + 8,&UNK_10dd3d160,puVar3);
  }
  else {
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    puVar3 = &UNK_1107acea8;
    _swift_allocObject(&UNK_1107acea8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar8 == 0 && lVar6 == 0) {
      puStack_a0 = (undefined8 *)0x0;
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &uStack_90;
      lStack_80 = lVar6;
      lStack_78 = lVar8;
    }
    uStack_a8 = 7;
    lStack_98 = param_1 + 0x20;
    _swift_task_create(uVar7,&uStack_a8,PTR___sytN_11034f1b0 + 8,&UNK_10dd3d168,puVar3);
    _swift_release(param_5);
    _swift_release(param_1);
  }
  return;
}



/* Entry: 104891998; end: 104891a2f;  */

void FUN_104891998(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined1 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar3 = 0x112d45220;
  func_0x0001000b0c3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  __sScA15unownedExecutorScevgTj(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104891a30,uVar2,uVar3);
  return;
}



/* Entry: 104891a30; end: 104891b53;  */

void FUN_104891a30(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  pcVar2 = *(code **)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
  puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_opt_self(PTR__OBJC_CLASS___NSTimer_1126af1b0);
  puVar6 = &UNK_1107ad2e0;
  _swift_allocObject(&UNK_1107ad2e0,0x21,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar8;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  puVar6[0x20] = uVar3;
  *(code **)(unaff_x22 + 0x30) = FUN_104893364;
  *(undefined **)(unaff_x22 + 0x38) = puVar6;
  puVar7 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100fef460;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1107ad2f8;
  __Block_copy();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000ab9d4(uVar8,uVar1,uVar3);
  _swift_release(uVar9);
  func_0x00010c150360(0x3fe0000000000000,puVar5);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(puVar7);
  uVar4 = (uint)puVar7;
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  (*pcVar2)(uVar4 & 1);
  func_0x00010c069d00(puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x000104891b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104891b54; end: 104891c1f;  */

void FUN_104891b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __ss11_StringGutsV4growyySiF(0x45);
  func_0x00010007c170(param_2,param_3,param_4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_3);
  __sSS6appendyySSF(0xd000000000000043,0x800000010f213110);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
  func_0x00010bd860a8(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 104891c20; end: 104891c3f;  */

void FUN_104891c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined1 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104891c40,0,0);
  return;
}



/* Entry: 104891c40; end: 104891d5b;  */

void FUN_104891c40(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  pcVar1 = *(code **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x60);
  puVar6 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_opt_self(PTR__OBJC_CLASS___NSTimer_1126af1b0);
  puVar7 = &UNK_1107ad1c8;
  _swift_allocObject(&UNK_1107ad1c8,0x21,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  puVar7[0x20] = uVar4;
  *(code **)(unaff_x22 + 0x30) = FUN_1048931a8;
  *(undefined **)(unaff_x22 + 0x38) = puVar7;
  puVar8 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100fef460;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1107ad1e0;
  __Block_copy();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000ab9d4(uVar2,uVar3,uVar4);
  _swift_release(uVar9);
  func_0x00010c150360(0x3ff0000000000000,puVar6);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(puVar8);
  uVar5 = (uint)puVar8;
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  (*pcVar1)(uVar5 & 1);
  func_0x00010c069d00(puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x000104891d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104891d5c; end: 104891d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_104891d5c(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  lVar12 = param_2;
  puVar10 = param_3;
  _objc_retain();
  func_0x00010007c020();
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_113096e78);
  }
  lVar13 = param_4;
  if (param_4 == 0) {
    param_3 = param_1;
    lVar13 = lVar12;
    func_0x00010007c170(param_1,lVar12,puVar10);
  }
  puVar6 = &UNK_1107ad038;
  _swift_allocObject(&UNK_1107ad038,0x38,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  uVar1 = SUB81(puVar10,0);
  puVar6[0x20] = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  puVar7 = &UNK_1107ad060;
  _swift_allocObject(&UNK_1107ad060,0x48,7);
  *(undefined **)(puVar7 + 0x10) = param_1;
  *(long *)(puVar7 + 0x18) = lVar12;
  puVar7[0x20] = uVar1;
  *(undefined **)(puVar7 + 0x28) = param_3;
  *(long *)(puVar7 + 0x30) = lVar13;
  *(undefined **)(puVar7 + 0x38) = &UNK_10dd3d1a8;
  *(undefined **)(puVar7 + 0x40) = puVar6;
  puVar8 = &UNK_1107ad088;
  _swift_allocObject(&UNK_1107ad088,0x38,7);
  *(undefined **)(puVar8 + 0x10) = param_1;
  *(long *)(puVar8 + 0x18) = lVar12;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_10dd3d1b0;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  func_0x0001000ab9d4(param_1,lVar12,puVar10);
  func_0x0001000ab9d4(param_1,lVar12,puVar10);
  func_0x0001000ab9d4(param_1,lVar12,puVar10);
  lVar2 = lRam0000000113097070;
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(lVar13);
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  if (lVar2 != -1) {
    _swift_once(0x113097070,&UNK_1000ab9ec);
  }
  uVar3 = uRam0000000113097078;
  puStack_88 = (undefined *)((ulong)puVar10 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd000000000000037;
  uStack_78 = 0x800000010f213010;
  puStack_98 = param_1;
  lStack_90 = lVar12;
  func_0x0001000ab9d4(param_1,lVar12,puVar10);
  uVar9 = 0x1130970b8;
  func_0x0001000285a8(0x1130970b8,&UNK_10dd3d148);
  _swift_task_localValuePush(uVar3,&puStack_98,uVar9);
  FUN_1048915e4(uVar14,&UNK_10dd3d1b8,puVar8);
  _swift_task_localValuePop();
  _swift_bridgeObjectRelease(lVar13);
  _swift_release(puVar6);
  _swift_release(puVar8);
  _swift_release(puVar7);
  func_0x00010007d980(param_1,lVar12,puVar10);
  puVar10 = PTR_PTR_1126afd78;
  _objc_allocWithZone();
  uStack_78 = 0x1048933f0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1107ad0a0;
  ppuVar11 = &puStack_98;
  uStack_70 = uVar14;
  __Block_copy(ppuVar11);
  uVar4 = uStack_70;
  _swift_retain(uVar14);
  _swift_release(uVar4);
  func_0x00010bffae00();
  __Block_release(ppuVar11);
  if (puVar10 != (undefined *)0x0) {
    _swift_release(uVar14);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104892830);
  (*pcVar5)();
}



/* Entry: 104891d80; end: 104891e9b;  */

void FUN_104891d80(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  pcVar1 = *(code **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x60);
  puVar6 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_opt_self(PTR__OBJC_CLASS___NSTimer_1126af1b0);
  puVar7 = &UNK_1107ad0d8;
  _swift_allocObject(&UNK_1107ad0d8,0x21,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  puVar7[0x20] = uVar4;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x1048933a8;
  *(undefined **)(unaff_x22 + 0x38) = puVar7;
  puVar8 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100fef460;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1107ad0f0;
  __Block_copy();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000ab9d4(uVar2,uVar3,uVar4);
  _swift_release(uVar9);
  func_0x00010c150360(0x3ff0000000000000,puVar6);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(puVar8);
  uVar5 = (uint)puVar8;
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  (*pcVar1)(uVar5 & 1);
  func_0x00010c069d00(puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x000104891e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104891e9c; end: 104891f67;  */

void FUN_104891e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __ss11_StringGutsV4growyySiF(0x43);
  func_0x00010007c170(param_2,param_3,param_4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_3);
  __sSS6appendyySSF(0xd000000000000041,0x800000010f213070);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
  func_0x00010bd860a8(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 104891f68; end: 104891f9f; +[SCSnapTaskWrapper detachedNonBlockingSync:priority:asyncSpanNameSuffix:operation:] */

void FUN_104891f68(void)

{
  func_0x0001003e3550();
  return;
}



/* Entry: 104891fa0; end: 104891fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_104891fa0(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_113096e78);
  }
  puVar13 = param_3;
  _objc_retain();
  puVar5 = param_1;
  func_0x00010007c020();
  lVar12 = param_4;
  if (param_4 == 0) {
    lVar11 = param_2;
    puVar6 = puVar13;
    _objc_retain();
    func_0x00010007c020();
    param_3 = param_1;
    lVar12 = lVar11;
    func_0x00010007c170();
    func_0x00010007d980(param_1,lVar11,puVar6);
  }
  puVar6 = &UNK_1107acdb8;
  _swift_allocObject(&UNK_1107acdb8,0x40,7);
  puVar6[0x10] = (char)uVar14;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(long *)(puVar6 + 0x20) = param_2;
  uVar1 = SUB81(puVar13,0);
  puVar6[0x28] = uVar1;
  *(undefined8 *)(puVar6 + 0x30) = param_5;
  *(undefined8 *)(puVar6 + 0x38) = param_6;
  puVar7 = &UNK_1107acde0;
  _swift_allocObject(&UNK_1107acde0,0x48,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(long *)(puVar7 + 0x18) = param_2;
  puVar7[0x20] = uVar1;
  *(undefined **)(puVar7 + 0x28) = param_3;
  *(long *)(puVar7 + 0x30) = lVar12;
  *(undefined **)(puVar7 + 0x38) = &UNK_10dd3d120;
  *(undefined **)(puVar7 + 0x40) = puVar6;
  puVar8 = &UNK_1107ace08;
  _swift_allocObject(&UNK_1107ace08,0x38,7);
  *(undefined **)(puVar8 + 0x10) = puVar5;
  *(long *)(puVar8 + 0x18) = param_2;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_10dd3d130;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  func_0x0001000ab9d4(puVar5,param_2,puVar13);
  func_0x0001000ab9d4(puVar5,param_2,puVar13);
  func_0x0001000ab9d4(puVar5,param_2,puVar13);
  lVar11 = lRam0000000113097070;
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(lVar12);
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  if (lVar11 != -1) {
    _swift_once(0x113097070,&UNK_1000ab9ec);
  }
  uVar2 = uRam0000000113097078;
  puStack_88 = (undefined *)((ulong)puVar13 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd000000000000037;
  uStack_78 = 0x800000010f213010;
  puStack_98 = puVar5;
  lStack_90 = param_2;
  func_0x0001000ab9d4(puVar5,param_2,puVar13);
  uVar9 = 0x1130970b8;
  func_0x0001000285a8(0x1130970b8,&UNK_10dd3d148);
  _swift_task_localValuePush(uVar2,&puStack_98,uVar9);
  FUN_1048915e4(uVar14,&UNK_10dd3d140,puVar8);
  _swift_task_localValuePop();
  _swift_bridgeObjectRelease(lVar12);
  _swift_release(puVar6);
  _swift_release(puVar8);
  _swift_release(puVar7);
  func_0x00010007d980(puVar5,param_2,puVar13);
  puVar5 = PTR_PTR_1126afd78;
  _objc_allocWithZone();
  uStack_78 = 0x1048933ec;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1107ace20;
  ppuVar10 = &puStack_98;
  uStack_70 = uVar14;
  __Block_copy(ppuVar10);
  uVar3 = uStack_70;
  _swift_retain(uVar14);
  _swift_release(uVar3);
  func_0x00010bffae00();
  __Block_release(ppuVar10);
  if (puVar5 != (undefined *)0x0) {
    _swift_release(uVar14);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104892b58);
  (*pcVar4)();
}



/* Entry: 104891fa4; end: 104892097;  */

void FUN_104891fa4(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined1 *)(unaff_x22 + 0x101) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined1 *)(unaff_x22 + 0x100) = param_2;
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 200) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  lVar1 = 0x1130970c0;
  func_0x0001000285a8(0x1130970c0,&UNK_10dd3d170);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104892098,0,0);
  return;
}



/* Entry: 104892098; end: 104892403;  */

void FUN_104892098(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  bVar8 = *(byte *)(unaff_x22 + 0x100);
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_104892404;
  lVar10 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar10,0);
  if (bVar8 < 2) {
    puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8;
    if (bVar8 != 0) {
      puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0;
    }
  }
  else {
    puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0;
    if ((bVar8 != 2) &&
       (puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8
       , bVar8 != 3)) {
      uVar15 = 1;
      goto LAB_104892148;
    }
  }
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x68))
            (*(undefined8 *)(unaff_x22 + 0xe0),*puVar16,*(undefined8 *)(unaff_x22 + 0xe8));
  uVar15 = 0;
LAB_104892148:
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  (**(code **)(lVar3 + 0x38))(uVar4,uVar15,1,uVar19);
  func_0x0001000b0be8(uVar4,uVar11);
  pcVar18 = *(code **)(lVar3 + 0x30);
  (*pcVar18)(uVar11,1,uVar19);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  if ((int)uVar11 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x68))
              (*(undefined8 *)(unaff_x22 + 0xf8),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,uVar19);
    (*pcVar18)(uVar15,1,uVar19);
    if ((int)uVar15 != 1) {
      func_0x0001000afec4(*(undefined8 *)(unaff_x22 + 0xd8),0x1130970c0,&UNK_10dd3d170);
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0xf8),uVar15,uVar19);
  }
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar1 = *(long *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar7 = *(long *)(unaff_x22 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined1 *)(unaff_x22 + 0x101);
  func_0x0001000295c4(0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar12 = uVar19;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
  (**(code **)(lVar3 + 8))(uVar19,uVar20);
  puVar13 = &UNK_1107aced0;
  _swift_allocObject(&UNK_1107aced0,0x48,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar15;
  *(undefined8 *)(puVar13 + 0x18) = uVar11;
  puVar13[0x20] = uVar9;
  *(undefined8 *)(puVar13 + 0x30) = uVar22;
  *(undefined8 *)(puVar13 + 0x28) = uVar21;
  puVar13[0x38] = param_1 & 1;
  *(long *)(puVar13 + 0x40) = lVar10;
  *(code **)(unaff_x22 + 0x70) = FUN_104892ec0;
  *(undefined **)(unaff_x22 + 0x78) = puVar13;
  puVar14 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1000b0c7c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1107acee8;
  __Block_copy();
  func_0x0001000ab9d4(uVar15,uVar11,uVar9);
  _swift_retain(uVar17);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(uVar5);
  *(undefined8 *)(unaff_x22 + 0x80) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar15 = 0x112d4af88;
  func_0x0001000b0c3c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar19 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar11 = 0x112d4af98;
  func_0x0001000b06b4(0x112d4af98,0x112d4af90,&UNK_10d914100,PTR___sSayxGSTsMc_11034dd08);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (uVar4,(undefined8 *)(unaff_x22 + 0x80),uVar19,uVar11,uVar2,uVar15);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,uVar5,uVar4,puVar14);
  __Block_release(puVar14);
  _objc_release(uVar12);
  (**(code **)(lVar7 + 8))(uVar4,uVar2);
  (**(code **)(lVar1 + 8))(uVar5,uVar6);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 104892404; end: 104892443;  */

void FUN_104892404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1048933ac,0,0);
  return;
}



/* Entry: 104892444; end: 10489247b; +[SCSnapTaskWrapper detachedBlockingSync:priority:asyncSpanNameSuffix:operation:] */

void FUN_104892444(void)

{
  func_0x0001003e3550();
  return;
}



/* Entry: 10489247c; end: 1048924b7; -[SCSnapTaskWrapper init] */

void FUN_10489247c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001000ab060();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048924b8; end: 104892527;  */

void FUN_1048924b8(void)

{
  func_0x0001000ab060();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104892528; end: 104892b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_104892528(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  lVar12 = param_2;
  puVar10 = param_3;
  _objc_retain();
  func_0x00010007c020();
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_113096e78);
  }
  lVar13 = param_4;
  if (param_4 == 0) {
    param_3 = param_1;
    lVar13 = lVar12;
    func_0x00010007c170(param_1,lVar12,puVar10);
  }
  puVar6 = &UNK_1107ad038;
  _swift_allocObject(&UNK_1107ad038,0x38,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  uVar1 = SUB81(puVar10,0);
  puVar6[0x20] = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  puVar7 = &UNK_1107ad060;
  _swift_allocObject(&UNK_1107ad060,0x48,7);
  *(undefined **)(puVar7 + 0x10) = param_1;
  *(long *)(puVar7 + 0x18) = lVar12;
  puVar7[0x20] = uVar1;
  *(undefined **)(puVar7 + 0x28) = param_3;
  *(long *)(puVar7 + 0x30) = lVar13;
  *(undefined **)(puVar7 + 0x38) = &UNK_10dd3d1a8;
  *(undefined **)(puVar7 + 0x40) = puVar6;
  puVar8 = &UNK_1107ad088;
  _swift_allocObject(&UNK_1107ad088,0x38,7);
  *(undefined **)(puVar8 + 0x10) = param_1;
  *(long *)(puVar8 + 0x18) = lVar12;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_10dd3d1b0;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  func_0x0001000ab9d4(param_1,lVar12,puVar10);
  func_0x0001000ab9d4(param_1,lVar12,puVar10);
  func_0x0001000ab9d4(param_1,lVar12,puVar10);
  lVar2 = lRam0000000113097070;
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(lVar13);
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  if (lVar2 != -1) {
    _swift_once(0x113097070,&UNK_1000ab9ec);
  }
  uVar3 = uRam0000000113097078;
  puStack_88 = (undefined *)((ulong)puVar10 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd000000000000037;
  uStack_78 = 0x800000010f213010;
  puStack_98 = param_1;
  lStack_90 = lVar12;
  func_0x0001000ab9d4(param_1,lVar12,puVar10);
  uVar9 = 0x1130970b8;
  func_0x0001000285a8(0x1130970b8,&UNK_10dd3d148);
  _swift_task_localValuePush(uVar3,&puStack_98,uVar9);
  FUN_1048915e4(uVar14,&UNK_10dd3d1b8,puVar8);
  _swift_task_localValuePop();
  _swift_bridgeObjectRelease(lVar13);
  _swift_release(puVar6);
  _swift_release(puVar8);
  _swift_release(puVar7);
  func_0x00010007d980(param_1,lVar12,puVar10);
  puVar10 = PTR_PTR_1126afd78;
  _objc_allocWithZone();
  uStack_78 = 0x1048933f0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1107ad0a0;
  ppuVar11 = &puStack_98;
  uStack_70 = uVar14;
  __Block_copy(ppuVar11);
  uVar4 = uStack_70;
  _swift_retain(uVar14);
  _swift_release(uVar4);
  func_0x00010bffae00();
  __Block_release(ppuVar11);
  if (puVar10 != (undefined *)0x0) {
    _swift_release(uVar14);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104892830);
  (*pcVar5)();
}



/* Entry: 104892b58; end: 104892b6b;  */

void FUN_104892b58(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104892b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 104892b6c; end: 104892bfb;  */

void FUN_104892b6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  plVar9 = (long *)0x110;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x10);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x1048933c0;
  plVar9[0x13] = lVar1;
  plVar9[0x14] = lVar3;
  *(undefined1 *)((long)plVar9 + 0x101) = uVar4;
  plVar9[0x11] = lVar6;
  plVar9[0x12] = lVar2;
  *(undefined1 *)(plVar9 + 0x20) = uVar5;
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  plVar9[0x15] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar9[0x16] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x17] = uVar7;
  lVar6 = 0;
  __s8Dispatch0A3QoSVMa();
  plVar9[0x18] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar9[0x19] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x1a] = uVar7;
  lVar6 = 0x1130970c0;
  func_0x0001000285a8(0x1130970c0,&UNK_10dd3d170);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x1b] = uVar8;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x1c] = uVar7;
  lVar6 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  plVar9[0x1d] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar9[0x1e] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x1f] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104892098,0,0);
  return;
}



/* Entry: 104892bfc; end: 104892c8f;  */

void FUN_104892bfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  plVar8 = (long *)0xa0;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1048933b4;
  plVar8[0xe] = lVar3;
  plVar8[0xf] = lVar6;
  plVar8[0xc] = lVar2;
  plVar8[0xd] = lVar5;
  *(undefined1 *)(plVar8 + 0x13) = uVar7;
  plVar8[10] = lVar1;
  plVar8[0xb] = lVar4;
  plVar8[9] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000affc0,0,0);
  return;
}



/* Entry: 104892c90; end: 104892d1f;  */

void FUN_104892c90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar8 = (long *)0x80;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x21);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1048933b8;
  plVar8[8] = lVar1;
  plVar8[9] = lVar3;
  *(undefined1 *)((long)plVar8 + 0x71) = uVar4;
  *(undefined1 *)(plVar8 + 0xe) = uVar5;
  plVar8[6] = lVar6;
  plVar8[7] = lVar2;
  plVar8[5] = param_1;
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[10] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000aca9c,0,0);
  return;
}



/* Entry: 104892d20; end: 104892da3;  */

void FUN_104892d20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1048933bc;
  (*(code *)&UNK_1000ac8f4)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 104892da4; end: 104892e13;  */

void FUN_104892da4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1048933b0;
  (*(code *)&UNK_1000ac80c)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 104892e14; end: 104892e83;  */

void FUN_104892e14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104892e84;
  (*(code *)&UNK_1000ac80c)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 104892e84; end: 104892ebf;  */

void FUN_104892e84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104892ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104892ec0; end: 104892eef;  */

void FUN_104892ec0(void)

{
  long unaff_x20;
  
  func_0x0001000b0cb4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),0x1048933fc);
  return;
}



/* Entry: 104892ef0; end: 104892f6f;  */

void FUN_104892ef0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x70;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1048933c4;
  plVar6[10] = lVar2;
  plVar6[0xb] = lVar4;
  *(undefined1 *)(plVar6 + 0xc) = uVar5;
  plVar6[8] = lVar1;
  plVar6[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104891d80,0,0);
  return;
}



/* Entry: 104892f70; end: 104893003;  */

void FUN_104892f70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  plVar8 = (long *)0xa0;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1048933c8;
  plVar8[0xe] = lVar3;
  plVar8[0xf] = lVar6;
  plVar8[0xc] = lVar2;
  plVar8[0xd] = lVar5;
  *(undefined1 *)(plVar8 + 0x13) = uVar7;
  plVar8[10] = lVar1;
  plVar8[0xb] = lVar4;
  plVar8[9] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000affc0,0,0);
  return;
}



/* Entry: 104893004; end: 104893093;  */

void FUN_104893004(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar8 = (long *)0x80;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x21);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1048933cc;
  plVar8[8] = lVar1;
  plVar8[9] = lVar3;
  *(undefined1 *)((long)plVar8 + 0x71) = uVar4;
  *(undefined1 *)(plVar8 + 0xe) = uVar5;
  plVar8[6] = lVar6;
  plVar8[7] = lVar2;
  plVar8[5] = param_1;
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[10] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000aca9c,0,0);
  return;
}



/* Entry: 104893094; end: 104893113;  */

void FUN_104893094(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x70;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1048933d0;
  plVar6[10] = lVar2;
  plVar6[0xb] = lVar4;
  *(undefined1 *)(plVar6 + 0xc) = uVar5;
  plVar6[8] = lVar1;
  plVar6[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104891c40,0,0);
  return;
}



/* Entry: 104893114; end: 1048931a7;  */

void FUN_104893114(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  plVar8 = (long *)0xa0;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1048933d4;
  plVar8[0xe] = lVar3;
  plVar8[0xf] = lVar6;
  plVar8[0xc] = lVar2;
  plVar8[0xd] = lVar5;
  *(undefined1 *)(plVar8 + 0x13) = uVar7;
  plVar8[10] = lVar1;
  plVar8[0xb] = lVar4;
  plVar8[9] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000affc0,0,0);
  return;
}



/* Entry: 1048931a8; end: 1048931c3;  */

void FUN_1048931a8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104891e9c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1048931c4; end: 104893237;  */

void FUN_1048931c4(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  plVar8 = (long *)0x70;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1048933dc;
  plVar8[10] = lVar5;
  plVar8[0xb] = lVar2;
  *(undefined1 *)(plVar8 + 0xd) = uVar3;
  plVar8[8] = lVar6;
  plVar8[9] = lVar1;
  lVar5 = 0;
  __sScMMa();
  puVar4 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  __sScM6sharedScMvgZ();
  plVar8[0xc] = lVar6;
  uVar7 = 0x112d45220;
  func_0x0001000b0c3c(0x112d45220,puVar4,PTR___sScMScAsMc_11034fc78);
  __sScA15unownedExecutorScevgTj(lVar5,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104891a30,lVar5,uVar7);
  return;
}



/* Entry: 104893238; end: 1048932a7;  */

void FUN_104893238(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1048933e0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1048932a8; end: 10489333b;  */

void FUN_1048932a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  plVar8 = (long *)0xa0;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1048933e4;
  plVar8[0xe] = lVar3;
  plVar8[0xf] = lVar6;
  plVar8[0xc] = lVar2;
  plVar8[0xd] = lVar5;
  *(undefined1 *)(plVar8 + 0x13) = uVar7;
  plVar8[10] = lVar1;
  plVar8[0xb] = lVar4;
  plVar8[9] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000affc0,0,0);
  return;
}



/* Entry: 10489333c; end: 104893363;  */

void FUN_10489333c(void)

{
  long unaff_x20;
  
  func_0x00010007d980(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined1 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104893364; end: 10489340f;  */

void FUN_104893364(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x20);
  __ss11_StringGutsV4growyySiF(0x45);
  func_0x00010007c170(uVar2,uVar3,uVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0xd000000000000043,0x800000010f213110);
  uVar2 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
  func_0x00010bd860a8(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 104893410; end: 10489349f;  */

void FUN_104893410(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = &UNK_1107ad330;
  _swift_allocObject(&UNK_1107ad330,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  uVar2 = 0xff;
  __ss6ResultOMa(0xff);
  lVar3 = 0;
  __sScGMa(0,uVar2);
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  func_0x0001000abe04(param_1,puVar7);
  lVar4 = 0;
  __sScPMa();
  lVar11 = *(long *)(lVar4 + -8);
  puVar5 = puVar7;
  (**(code **)(lVar11 + 0x30))(puVar7,1,lVar4);
  if ((int)puVar5 == 1) {
    func_0x0001000abe54(puVar7);
    uVar9 = 0x3100;
    lVar4 = *(long *)(puVar1 + 0x10);
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar11 + 8))(puVar7,lVar4);
    uVar9 = (ulong)puVar5 & 0xff | 0x3100;
    lVar4 = *(long *)(puVar1 + 0x10);
  }
  if (lVar4 == 0) {
    lVar11 = 0;
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(puVar1 + 0x18);
    lVar11 = lVar4;
    _swift_getObjectType();
    _swift_unknownObjectRetain(lVar4);
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar4);
  }
  uVar8 = *unaff_x20;
  puVar6 = &UNK_1107ad358;
  _swift_allocObject(&UNK_1107ad358,0x28,7);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined **)(puVar6 + 0x18) = &UNK_10dd3d308;
  *(undefined **)(puVar6 + 0x20) = puVar1;
  puStack_90 = (undefined8 *)0x0;
  if (lVar10 != 0 || lVar11 != 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_90 = &uStack_80;
    lStack_70 = lVar11;
    lStack_68 = lVar10;
  }
  uStack_98 = 1;
  uStack_88 = uVar8;
  _swift_task_create(uVar9,&uStack_98,uVar2,&UNK_10dd3d320,puVar6);
  _swift_release();
  return;
}



/* Entry: 1048934a0; end: 1048934a3;  */

void FUN_1048934a0(void)

{
  return;
}



/* Entry: 1048934a4; end: 104893557;  */

void FUN_1048934a4(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  lVar7 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar7;
  lVar6 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar6;
  uVar1 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  lVar6 = 0;
  func_0x000104894860(0,*(undefined8 *)(param_2 + 0x10),lVar7,*(undefined8 *)(param_2 + 0x20));
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104893558;
  plVar2[4] = 0;
  plVar2[5] = uVar1;
  plVar2[2] = param_1;
  plVar2[3] = 0;
  lVar8 = *(long *)(lVar6 + 0x18);
  plVar2[6] = lVar8;
  lVar7 = *(long *)(lVar8 + -8);
  plVar2[7] = lVar7;
  uVar1 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[8] = uVar1;
  lVar5 = *(long *)(lVar6 + 0x10);
  plVar2[9] = lVar5;
  lVar7 = 0xff;
  __ss6ResultOMa(0xff,lVar5,lVar8,*(undefined8 *)(lVar6 + 0x20));
  plVar2[10] = lVar7;
  lVar6 = 0;
  __sSqMa(0,lVar7);
  plVar2[0xb] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar2[0xc] = lVar6;
  uVar1 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xd] = uVar1;
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  plVar2[0xe] = (long)plVar3;
  uVar4 = 0;
  __sScGMa(0,lVar7);
  *plVar3 = (long)plVar2;
  plVar3[1] = (long)FUN_1048942f8;
                    /* WARNING: Could not recover jumptable at 0x0001048942f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10489445c(uVar1,0,0,uVar4);
  return;
}



/* Entry: 104893558; end: 1048935bf;  */

void FUN_104893558(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1048935c0,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001048935bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1048935c0; end: 104893607;  */

void FUN_1048935c0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar1,*(undefined8 *)(unaff_x22 + 0x18));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000104893604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104893608; end: 1048936f7;  */

void FUN_104893608(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x98) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000008;
  *(long *)(unaff_x22 + 0x88) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(long *)(unaff_x22 + 0x58) = in_x4;
  lVar3 = *(long *)(in_stack_00000010 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  lVar3 = 0;
  __ss6ResultOMa(0,in_stack_00000008,in_stack_00000010,in_stack_00000018);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar1;
  if (in_x4 == 0) {
    in_x4 = 0;
    in_x5 = 0;
  }
  else {
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
  }
  *(long *)(unaff_x22 + 0xd0) = in_x4;
  *(undefined8 *)(unaff_x22 + 0xd8) = in_x5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1048936f8,in_x4);
  return;
}



/* Entry: 1048936f8; end: 1048937b7;  */

void FUN_1048936f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = 0;
  __ss6ResultOMa(0,uVar5,uVar1,uVar2);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x68);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1048937b8;
                    /* WARNING: Could not recover jumptable at 0x0001048937b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_104893c34(*(undefined8 *)(unaff_x22 + 200),uVar3,*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),&UNK_10dd3d2e0,
                unaff_x22 + 0x10,uVar3,*(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Entry: 1048937b8; end: 1048937fb;  */

void FUN_1048937b8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1048937fc,*(undefined8 *)(lVar1 + 0xd0),*(undefined8 *)(lVar1 + 0xd8));
  return;
}


