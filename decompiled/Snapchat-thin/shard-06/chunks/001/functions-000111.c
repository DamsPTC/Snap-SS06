/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104506038; end: 10450609b;  */

void FUN_104506038(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10450489c(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10450609c; end: 1045060cf;  */

void FUN_10450609c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1045060d0; end: 104506167; -[SCLensCarouselUIEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045060d0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113082138));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113082160));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113082178));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130821a0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130821a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130821c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130821c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130821d0));
  return;
}



/* Entry: 104506168; end: 104506177;  */

ulong FUN_104506168(ulong param_1)

{
  if (0xb < param_1) {
    param_1 = 0xc;
  }
  return param_1;
}



/* Entry: 104506178; end: 10450654f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104506178(ulong *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  
  uVar5 = (ulong)*(byte *)(param_2 + _DAT_113082130);
  uVar7 = 8;
  uVar2 = uVar5;
  uVar3 = uVar5;
  uVar4 = uVar5;
  uVar6 = uVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + _DAT_113082130)) {
  case 1:
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar5 = 1;
    break;
  case 2:
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar5 = 2;
    break;
  case 3:
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar5 = 3;
    break;
  case 4:
    uVar5 = *(ulong *)(param_2 + _DAT_113082138);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506508);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_113082140))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506524);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_113082148))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506534);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_113082150))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506544);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_113082158))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10450654c);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_2 + _DAT_113082140);
    uVar3 = *(ulong *)(param_2 + _DAT_113082148);
    uVar4 = *(ulong *)(param_2 + _DAT_113082150);
    uVar6 = *(ulong *)(param_2 + _DAT_113082158);
    _objc_retain(uVar5);
    uVar7 = 0;
    break;
  case 5:
    uVar5 = *(ulong *)(param_2 + _DAT_113082160);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506514);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_113082168))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506528);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_113082170))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506538);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_2 + _DAT_113082168);
    uVar3 = *(ulong *)(param_2 + _DAT_113082170);
    _objc_retain(uVar5);
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 1;
    break;
  case 6:
    uVar5 = *(ulong *)(param_2 + _DAT_113082178);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506518);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_113082180))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10450652c);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_113082188))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10450653c);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_113082190))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506548);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_113082198))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506550);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_2 + _DAT_113082180);
    uVar3 = *(ulong *)(param_2 + _DAT_113082188);
    uVar4 = *(ulong *)(param_2 + _DAT_113082190);
    uVar6 = *(ulong *)(param_2 + _DAT_113082198);
    _objc_retain(uVar5);
    uVar7 = 2;
    break;
  case 7:
    uVar5 = *(ulong *)(param_2 + _DAT_1130821a0);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506510);
      (*pcVar1)();
    }
    _swift_bridgeObjectRetain(uVar5);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 3;
    break;
  case 8:
    uVar5 = *(ulong *)(param_2 + _DAT_1130821a8);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506520);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_1130821b0))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506530);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_2 + _DAT_1130821b8))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506540);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_2 + _DAT_1130821b0);
    uVar3 = *(ulong *)(param_2 + _DAT_1130821b8);
    _swift_bridgeObjectRetain(uVar5);
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 4;
    break;
  case 9:
    uVar5 = *(ulong *)(param_2 + _DAT_1130821c0);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10450650c);
      (*pcVar1)();
    }
    _objc_retain(uVar5);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 5;
    break;
  case 10:
    uVar5 = *(ulong *)(param_2 + _DAT_1130821c8);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10450651c);
      (*pcVar1)();
    }
    _objc_retain(uVar5);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 6;
    break;
  case 0xb:
    uVar5 = *(ulong *)(param_2 + _DAT_1130821d0);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104506504);
      (*pcVar1)();
    }
    _objc_retain(uVar5);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 7;
  }
  _objc_release(param_2);
  *param_1 = uVar5;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar7;
  return;
}



/* Entry: 104506550; end: 104506727;  */

undefined8 FUN_104506550(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044fcf74)();
  return param_1;
}



/* Entry: 104506728; end: 1045068fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104506728(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 4;
  *(long *)(lVar4 + _DAT_113082138) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1045068fc; end: 104506abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045068fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 5;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_113082160) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 104506ac0; end: 104506c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104506ac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 6;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_113082178) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 104506c94; end: 104506e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104506c94(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 7;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_1130821a0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 104506e48; end: 10450700b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104506e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 8;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(long *)(lVar4 + _DAT_1130821a8) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10450700c; end: 104507527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450700c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104507528();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113082130) = 9;
  *(undefined8 *)(lVar4 + _DAT_113082138) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082140);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082170);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113082178) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082180);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082188);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082190);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113082198);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_1130821a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130821b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_1130821c0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_1130821c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130821d0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 104507528; end: 104507547;  */

void FUN_104507528(void)

{
  _objc_opt_self(&PTR_PTR_1129c7888);
  return;
}



/* Entry: 104507548; end: 1045076af;  */

int FUN_104507548(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1045075c4;
        goto LAB_1045075a8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1045075a8:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_1045075c4:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1045076b0; end: 1045076ef;  */

void FUN_1045076b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1086c;
  _swift_getWitnessTable(&UNK_10dd1086c,&UNK_110780bb0);
  puRam0000000113082200 = puVar1;
  return;
}



/* Entry: 1045076f0; end: 10450776b;  */

void FUN_1045076f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001045076f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10450776c; end: 1045077b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450776c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082208) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045077b8; end: 104507813; -[_TtC32OpaqueLensCarouselScopedServices26OpaqueLensCarouselServices init] */

void FUN_1045077b8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("OpaqueLensCarouselScopedServices.OpaqueLensCarouselServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1045077e4);
  (*pcVar1)();
}



/* Entry: 104507814; end: 104507827; -[_TtC32OpaqueLensCarouselScopedServices26OpaqueLensCarouselServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104507814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113082208));
  return;
}



/* Entry: 104507828; end: 104507883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104507828(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082208) = param_1;
  uVar1 = 0;
  func_0x000100b5e6f8();
  uStack_28 = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104507884; end: 104507887;  */

void FUN_104507884(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104507888; end: 10450791b;  */

void FUN_104507888(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10450791c; end: 10450793b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450791c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082208) = param_1;
  uVar1 = 0;
  func_0x000100b5e6f8();
  uStack_28 = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10450793c; end: 10450794b; -[_TtC28SCLensCarouselScopedServices28SCLensCarouselScopedServices lensCTAHandlingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450793c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130822d8));
  return;
}



/* Entry: 10450794c; end: 10450795b; -[_TtC28SCLensCarouselScopedServices28SCLensCarouselScopedServices lensCarouselSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450794c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130822e0));
  return;
}



/* Entry: 10450795c; end: 10450796b; -[_TtC28SCLensCarouselScopedServices28SCLensCarouselScopedServices lensFeaturesVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450795c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130822e8));
  return;
}



/* Entry: 10450796c; end: 10450797b; -[_TtC28SCLensCarouselScopedServices28SCLensCarouselScopedServices cameraUIScopeViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450796c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130822f0));
  return;
}



/* Entry: 10450797c; end: 10450798b; -[_TtC28SCLensCarouselScopedServices28SCLensCarouselScopedServices imagineLensServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450797c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130822f8));
  return;
}



/* Entry: 10450798c; end: 104507a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10450798c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130822d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130822e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130822e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130822f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130822f8) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104507a28; end: 104507a5b;  */

void FUN_104507a28(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104507a5c; end: 104507ac3; -[_TtC28SCLensCarouselScopedServices28SCLensCarouselScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104507a5c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130822d8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130822e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130822e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130822f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130822f8));
  return;
}



/* Entry: 104507ac4; end: 104507ae3;  */

void FUN_104507ac4(void)

{
  _objc_opt_self(&PTR_PTR_1129c7da8);
  return;
}



/* Entry: 104507ae4; end: 104507b3b;  */

void FUN_104507ae4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110780dc0;
  if (lRam0000000113082328 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000113082328 = param_1;
  }
  return;
}



/* Entry: 104507b3c; end: 104507b4f;  */

bool FUN_104507b3c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104507b50; end: 104507c27;  */

void FUN_104507b50(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104507c28; end: 104507c47;  */

void FUN_104507c28(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104507c48; end: 104507c87;  */

void FUN_104507c48(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10a80;
  _swift_getWitnessTable(&UNK_10dd10a80,&UNK_110780de8);
  puRam0000000113082330 = puVar1;
  return;
}



/* Entry: 104507c88; end: 104507c97;  */

undefined1  [16] FUN_104507c88(void)

{
  return ZEXT816(0x110780de8);
}



/* Entry: 104507c98; end: 104507ca7; +[_TtC15SCCameraUIScope20CameraTimerConstants kSCCameraTimeBeforeUnlimitedMovementAllowed] */

undefined8 FUN_104507c98(void)

{
  return 0x3e99999a;
}



/* Entry: 104507ca8; end: 104507cb7; +[_TtC15SCCameraUIScope20CameraTimerConstants kSCCameraTimerPreviewTransitionAnimationDuration] */

undefined8 FUN_104507ca8(void)

{
  return 0x3e99999a;
}



/* Entry: 104507cb8; end: 104507cd7;  */

void FUN_104507cb8(void)

{
  _objc_opt_self(&PTR_PTR_1129c7e88);
  return;
}



/* Entry: 104507cd8; end: 104507d13; -[_TtC15SCCameraUIScope20CameraTimerConstants init] */

void FUN_104507cd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_104507cb8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104507d14; end: 104507d43;  */

void FUN_104507d14(void)

{
  FUN_104507cb8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104507d44; end: 104507d5b;  */

bool FUN_104507d44(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104507d5c; end: 104507d9b;  */

void FUN_104507d5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10b80;
  _swift_getWitnessTable(&UNK_10dd10b80,&UNK_110780e60);
  puRam0000000113082360 = puVar1;
  return;
}



/* Entry: 104507d9c; end: 104507e47;  */

void FUN_104507d9c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104507e48; end: 104507e97;  */

void FUN_104507e48(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 104507e98; end: 104507ed7;  */

void FUN_104507e98(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10c40;
  _swift_getWitnessTable(&UNK_10dd10c40,&UNK_110780ed8);
  puRam0000000113082368 = puVar1;
  return;
}



/* Entry: 104507ed8; end: 104507f83;  */

void FUN_104507ed8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104507f84; end: 104507fcf;  */

void FUN_104507f84(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 104507fd0; end: 1045080a7;  */

void FUN_104507fd0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045080a8; end: 1045080cb;  */

void FUN_1045080a8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1045080cc; end: 10450810b;  */

void FUN_1045080cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10d00;
  _swift_getWitnessTable(&UNK_10dd10d00,&UNK_110780f50);
  puRam0000000113082370 = puVar1;
  return;
}



/* Entry: 10450810c; end: 104508133;  */

undefined1  [16] FUN_10450810c(void)

{
  return ZEXT816(0x110780f50);
}



/* Entry: 104508134; end: 104508173;  */

void FUN_104508134(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10dc0;
  _swift_getWitnessTable(&UNK_10dd10dc0,&UNK_110780fc8);
  puRam0000000113082378 = puVar1;
  return;
}



/* Entry: 104508174; end: 10450821f;  */

void FUN_104508174(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104508220; end: 10450826b;  */

void FUN_104508220(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10450826c; end: 104508343;  */

void FUN_10450826c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104508344; end: 104508363;  */

void FUN_104508344(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104508364; end: 1045083a3;  */

void FUN_104508364(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10e90;
  _swift_getWitnessTable(&UNK_10dd10e90,&UNK_110781040);
  puRam0000000113082380 = puVar1;
  return;
}



/* Entry: 1045083a4; end: 1045083c7;  */

undefined1  [16] FUN_1045083a4(void)

{
  return ZEXT816(0x110781040);
}



/* Entry: 1045083c8; end: 10450849f;  */

void FUN_1045083c8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045084a0; end: 1045084bf;  */

void FUN_1045084a0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1045084c0; end: 1045084ff;  */

void FUN_1045084c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd10f50;
  _swift_getWitnessTable(&UNK_10dd10f50,&UNK_1107810b8);
  puRam0000000113082388 = puVar1;
  return;
}



/* Entry: 104508500; end: 104508513;  */

bool FUN_104508500(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104508514; end: 1045085eb;  */

void FUN_104508514(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045085ec; end: 1045085f7;  */

void FUN_1045085ec(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1045085f8; end: 10450864f;  */

uint FUN_1045085f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x000104508f58(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 104508650; end: 1045086d3; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104508650(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113082390;
  _swift_beginAccess(param_1 + _DAT_113082390,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1045086d4; end: 10450871f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045086d4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113082390;
  _swift_beginAccess(unaff_x20 + _DAT_113082390,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 104508720; end: 10450875f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104508720(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113082390;
  _swift_beginAccess(unaff_x20 + _DAT_113082390,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1045090e0;
  return auVar2;
}



/* Entry: 104508760; end: 1045087e3; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance cameraRingScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104508760(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113082398;
  _swift_beginAccess(param_1 + _DAT_113082398,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1045087e4; end: 10450882f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045087e4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113082398;
  _swift_beginAccess(unaff_x20 + _DAT_113082398,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 104508830; end: 1045088af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104508830(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113082398;
  _swift_beginAccess(unaff_x20 + _DAT_113082398,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1045090fc;
  return auVar2;
}



/* Entry: 1045088b0; end: 1045088fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045088b0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823a0;
  _swift_beginAccess(unaff_x20 + _DAT_1130823a0,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1045088fc; end: 10450893b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1045088fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130823a0;
  _swift_beginAccess(unaff_x20 + _DAT_1130823a0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1045090e4;
  return auVar2;
}



/* Entry: 10450893c; end: 1045089bf; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance cameraRingDiameter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10450893c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130823a8;
  _swift_beginAccess(param_1 + _DAT_1130823a8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1045089c0; end: 104508a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045089c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823a8;
  _swift_beginAccess(unaff_x20 + _DAT_1130823a8,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 104508a0c; end: 104508a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104508a0c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130823a8;
  _swift_beginAccess(unaff_x20 + _DAT_1130823a8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1045090e8;
  return auVar2;
}



/* Entry: 104508a8c; end: 104508ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104508a8c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823b0;
  _swift_beginAccess(unaff_x20 + _DAT_1130823b0,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 104508ad8; end: 104508b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104508ad8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130823b0;
  _swift_beginAccess(unaff_x20 + _DAT_1130823b0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1045090ec;
  return auVar2;
}



/* Entry: 104508b18; end: 104508b9b; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance cameraSpinnerDiameter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104508b18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130823b8;
  _swift_beginAccess(param_1 + _DAT_1130823b8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 104508b9c; end: 104508be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104508b9c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823b8;
  _swift_beginAccess(unaff_x20 + _DAT_1130823b8,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 104508be8; end: 104508c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104508be8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130823b8;
  _swift_beginAccess(unaff_x20 + _DAT_1130823b8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1045090f0;
  return auVar2;
}



/* Entry: 104508c68; end: 104508cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104508c68(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823c0;
  _swift_beginAccess(unaff_x20 + _DAT_1130823c0,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 104508cb4; end: 104508cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104508cb4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130823c0;
  _swift_beginAccess(unaff_x20 + _DAT_1130823c0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1045090f4;
  return auVar2;
}



/* Entry: 104508cf4; end: 104508d77; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance cameraRingOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104508cf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130823c8;
  _swift_beginAccess(param_1 + _DAT_1130823c8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 104508d78; end: 104508dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104508d78(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130823c8,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 104508dc4; end: 104508e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104508dc4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130823c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130823c8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1045090f8;
  return auVar2;
}



/* Entry: 104508e04; end: 104508e87; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance spinnerScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104508e04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130823d0;
  _swift_beginAccess(param_1 + _DAT_1130823d0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 104508e88; end: 104508ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104508e88(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823d0;
  _swift_beginAccess(unaff_x20 + _DAT_1130823d0,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 104508ed4; end: 104508f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104508ed4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130823d0;
  _swift_beginAccess(unaff_x20 + _DAT_1130823d0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_104508f14;
  return auVar2;
}



/* Entry: 104508f14; end: 104508f17;  */

void FUN_104508f14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104508f18; end: 104508f47;  */

void FUN_104508f18(void)

{
  func_0x0001007f60d4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104508f48; end: 104508ff7;  */

undefined1  [16] FUN_104508f48(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104508ff8; end: 104509037;  */

void FUN_104508ff8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130823d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd11010;
  _swift_getWitnessTable(&UNK_10dd11010,&UNK_110781130);
  puRam00000001130823d8 = puVar1;
  return;
}



/* Entry: 104509038; end: 104509047;  */

undefined1  [16] FUN_104509038(void)

{
  return ZEXT816(0x110781130);
}



/* Entry: 104509048; end: 104509073;  */

long FUN_104509048(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104509074; end: 1045090ff;  */

int FUN_104509074(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104509100; end: 10450910f; -[_TtC15SCCameraUIScope15SCCameraUIScope scopedCameraFeatureProviderPlugins] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104509100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082408));
  return;
}


