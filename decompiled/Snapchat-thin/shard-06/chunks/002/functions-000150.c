/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045c576c; end: 1045c586f;  */

bool FUN_1045c576c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_130 [64];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x50);
  lStack_70 = lVar3;
  if (lVar3 == 0) {
    lStack_f0 = 0;
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar1 = 0x113087028;
    puVar2 = &UNK_10dd18940;
    func_0x0001045f8fa8(&lStack_70,auStack_130,0x113087028,&UNK_10dd18940);
  }
  else {
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_f0 = lVar3;
    func_0x0001045f8fa8(&lStack_70,auStack_130,0x113087028,&UNK_10dd18940);
    uVar1 = 0x113087a00;
    puVar2 = &UNK_10dd19c28;
  }
  func_0x000104603c54(&lStack_f0,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 1045c5870; end: 1045c58a3;  */

void FUN_1045c5870(void)

{
  long unaff_x20;
  
  func_0x000104603c54(unaff_x20 + 0x20,0x113087028,&UNK_10dd18940);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  return;
}



/* Entry: 1045c58a4; end: 1045c58d3;  */

undefined1  [16] FUN_1045c58a4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045c58d4; end: 1045c5907;  */

void FUN_1045c58d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045c5908; end: 1045c594f;  */

undefined8 FUN_1045c5908(void)

{
  return 0x1045c5918;
}



/* Entry: 1045c5950; end: 1045c5a03;  */

void FUN_1045c5950(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  code *param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    (*param_3)(0);
    _swift_allocObject();
    (*param_5)();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_68,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c5a04; end: 1045c5a9f;  */

undefined1  [16] FUN_1045c5a04(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar1 = 0x60;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x60,0xf7eb);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x58) = unaff_x20;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar4 + 0x10,lVar1,0,0);
  lVar2 = *(long *)(lVar4 + 0x18);
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar2 = -0x2000000000000000;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(long *)(lVar1 + 0x50) = lVar2;
  _swift_bridgeObjectRetain();
  auVar5._8_8_ = lVar1 + 0x48;
  auVar5._0_8_ = FUN_1045c5aa0;
  return auVar5;
}



/* Entry: 1045c5aa0; end: 1045c5ab7;  */

void FUN_1045c5aa0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *param_1;
  uVar7 = *(undefined8 *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 0x50);
  lVar4 = *(long *)(lVar5 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      FUN_1045f8adc(0);
      _swift_allocObject();
      FUN_1045f8afc();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      FUN_1045f8adc(0);
      _swift_allocObject();
      FUN_1045f8afc();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar5);
  return;
}



/* Entry: 1045c5ab8; end: 1045c5beb;  */

void FUN_1045c5ab8(long *param_1,ulong param_2,code *param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *param_1;
  uVar7 = *(undefined8 *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 0x50);
  lVar4 = *(long *)(lVar5 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      (*param_3)(0);
      _swift_allocObject();
      (*param_5)();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      (*param_3)(0);
      _swift_allocObject();
      (*param_5)();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar5);
  return;
}



/* Entry: 1045c5bec; end: 1045c5c03;  */

void FUN_1045c5bec(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8adc(0);
    _swift_allocObject();
    FUN_1045f8afc();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c5c04; end: 1045c5ca7;  */

void FUN_1045c5c04(code *param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    (*param_1)(0);
    _swift_allocObject();
    (*param_3)();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c5ca8; end: 1045c5ce7;  */

void FUN_1045c5ca8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x20,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 1045c5ce8; end: 1045c5cff;  */

void FUN_1045c5ce8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8adc(0);
    _swift_allocObject();
    FUN_1045f8afc();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x20,auStack_68,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c5d00; end: 1045c5daf;  */

void FUN_1045c5d00(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    (*param_2)(0);
    _swift_allocObject();
    (*param_4)();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x20,auStack_68,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c5db0; end: 1045c5e33;  */

undefined1  [16] FUN_1045c5db0(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0x58;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x58,0x446d);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x50) = unaff_x20;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar2 + 0x20,lVar1,0,0);
  *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x20);
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = (undefined8 *)(lVar1 + 0x48);
  auVar3._0_8_ = FUN_1045c5e34;
  return auVar3;
}



/* Entry: 1045c5e34; end: 1045c5e4b;  */

void FUN_1045c5e34(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar4 = *(undefined8 *)(lVar3 + 0x48);
  lVar5 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8adc(0);
      _swift_allocObject();
      FUN_1045f8afc();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8adc(0);
      _swift_allocObject();
      FUN_1045f8afc();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c5e4c; end: 1045c5f7f;  */

void FUN_1045c5e4c(long *param_1,ulong param_2,code *param_3,undefined8 param_4,code *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar4 = *(undefined8 *)(lVar3 + 0x48);
  lVar5 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      (*param_3)(0);
      _swift_allocObject();
      (*param_5)();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      (*param_3)(0);
      _swift_allocObject();
      (*param_5)();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c5f80; end: 1045c6097;  */

void FUN_1045c5f80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [72];
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _swift_beginAccess(param_4 + 0x28,auStack_c8,0,0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x30);
  puStack_b0 = *(undefined **)(param_4 + 0x28);
  puStack_98 = *(undefined **)(param_4 + 0x40);
  uStack_a0 = *(undefined8 *)(param_4 + 0x38);
  uStack_88 = *(undefined8 *)(param_4 + 0x50);
  uVar8 = *(undefined8 *)(param_4 + 0x48);
  uStack_78 = *(undefined8 *)(param_4 + 0x60);
  uStack_80 = *(undefined8 *)(param_4 + 0x58);
  uStack_70 = *(undefined8 *)(param_4 + 0x68);
  if (puStack_b0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uVar3 = 2;
    uVar5 = 0xc000000000000000;
    uVar6 = 2;
    uVar7 = 2;
    uStack_128 = 0;
    uStack_130 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uStack_90._0_1_ = (undefined1)uVar8;
    uStack_90._1_1_ = (undefined1)((ulong)uVar8 >> 8);
    uStack_90._2_1_ = (undefined1)((ulong)uVar8 >> 0x10);
    uVar1 = uStack_a8;
    puVar2 = puStack_b0;
    puVar4 = puStack_98;
    uVar5 = uStack_a0;
    uVar3 = (undefined1)uStack_90;
    uVar6 = uStack_90._1_1_;
    uVar7 = uStack_90._2_1_;
    uStack_130 = uStack_78;
    uStack_128 = uStack_70;
    uStack_120 = uStack_88;
    uStack_118 = uStack_80;
  }
  uStack_90 = uVar8;
  func_0x0001045f8fa8(&puStack_b0,auStack_110,0x113087020,&UNK_10dd19c30);
  *param_1 = puVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = puVar4;
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x21) = uVar6;
  *(undefined1 *)((long)param_1 + 0x22) = uVar7;
  param_1[8] = uStack_128;
  param_1[7] = uStack_130;
  param_1[6] = uStack_118;
  param_1[5] = uStack_120;
  return;
}



/* Entry: 1045c6098; end: 1045c60db;  */

void FUN_1045c6098(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined2 *)(param_1 + 4) = 0x202;
  *(undefined1 *)((long)param_1 + 0x22) = 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 1045c60dc; end: 1045c61df;  */

void FUN_1045c60dc(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8adc(0);
    _swift_allocObject();
    FUN_1045f8afc();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_a0 = param_1[8];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  _swift_beginAccess(lVar2 + 0x28,auStack_f8,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x40);
  uStack_80 = *(undefined8 *)(lVar2 + 0x38);
  uStack_58 = *(undefined8 *)(lVar2 + 0x60);
  uStack_60 = *(undefined8 *)(lVar2 + 0x58);
  uStack_50 = *(undefined8 *)(lVar2 + 0x68);
  uStack_68 = *(undefined8 *)(lVar2 + 0x50);
  uStack_70 = *(undefined8 *)(lVar2 + 0x48);
  uStack_88 = *(undefined8 *)(lVar2 + 0x30);
  uStack_90 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x50) = uStack_b8;
  *(undefined8 *)(lVar2 + 0x48) = uStack_c0;
  *(undefined8 *)(lVar2 + 0x60) = uStack_a8;
  *(undefined8 *)(lVar2 + 0x58) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x68) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x40) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x38) = uStack_d0;
  *(undefined8 *)(lVar2 + 0x30) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x28) = uStack_e0;
  func_0x000104603c54(&uStack_90,0x113087020,&UNK_10dd19c30);
  return;
}



/* Entry: 1045c61e0; end: 1045c6303;  */

undefined1  [16] FUN_1045c61e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar1 = (undefined8 *)0x158;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x158,0x47f3);
  }
  *param_1 = puVar1;
  puVar1[0x2a] = unaff_x20;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar7 + 0x28,puVar1 + 0x24,0,0);
  uVar8 = *(undefined8 *)(lVar7 + 0x28);
  puVar1[1] = *(undefined8 *)(lVar7 + 0x30);
  *puVar1 = uVar8;
  uVar9 = *(undefined8 *)(lVar7 + 0x40);
  uVar8 = *(undefined8 *)(lVar7 + 0x38);
  uVar11 = *(undefined8 *)(lVar7 + 0x50);
  uVar10 = *(undefined8 *)(lVar7 + 0x48);
  uVar13 = *(undefined8 *)(lVar7 + 0x60);
  uVar12 = *(undefined8 *)(lVar7 + 0x58);
  puVar1[8] = *(undefined8 *)(lVar7 + 0x68);
  puVar1[5] = uVar11;
  puVar1[4] = uVar10;
  puVar1[7] = uVar13;
  puVar1[6] = uVar12;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  if ((undefined *)*puVar1 == (undefined *)0x0) {
    uVar9 = 0xc000000000000000;
    uVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar4 = 2;
    uVar5 = 2;
    uVar6 = 2;
    uVar12 = 0;
    uVar13 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar9 = puVar1[2];
    uVar8 = puVar1[1];
    uVar4 = *(undefined1 *)(puVar1 + 4);
    uVar5 = *(undefined1 *)((long)puVar1 + 0x21);
    uVar6 = *(undefined1 *)((long)puVar1 + 0x22);
    uVar11 = puVar1[6];
    uVar10 = puVar1[5];
    uVar13 = puVar1[8];
    uVar12 = puVar1[7];
    puVar2 = (undefined *)*puVar1;
    puVar3 = (undefined *)puVar1[3];
  }
  puVar1[9] = puVar2;
  puVar1[0xb] = uVar9;
  puVar1[10] = uVar8;
  puVar1[0xc] = puVar3;
  *(undefined1 *)(puVar1 + 0xd) = uVar4;
  *(undefined1 *)((long)puVar1 + 0x69) = uVar5;
  *(undefined1 *)((long)puVar1 + 0x6a) = uVar6;
  puVar1[0xf] = uVar11;
  puVar1[0xe] = uVar10;
  puVar1[0x11] = uVar13;
  puVar1[0x10] = uVar12;
  func_0x0001045f8fa8(puVar1,puVar1 + 0x12,0x113087020,&UNK_10dd19c30);
  auVar14._8_8_ = puVar1 + 9;
  auVar14._0_8_ = FUN_1045c6304;
  return auVar14;
}



/* Entry: 1045c6304; end: 1045c6527;  */

void FUN_1045c6304(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + 0xd8);
  lVar5 = *(long *)(lVar4 + 0x150);
  if ((param_2 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar4 + 0x60);
    uVar8 = *(undefined8 *)(lVar4 + 0x58);
    uVar13 = *(undefined8 *)(lVar4 + 0x70);
    uVar10 = *(undefined8 *)(lVar4 + 0x68);
    uVar17 = *(undefined8 *)(lVar4 + 0x80);
    uVar16 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x88);
    uVar14 = *(undefined8 *)(lVar4 + 0x50);
    uVar12 = *(undefined8 *)(lVar4 + 0x48);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x150);
      FUN_1045f8adc(0);
      _swift_allocObject();
      FUN_1045f8afc();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x28,puVar1,1,0);
    uVar11 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar4 + 0x90) = uVar11;
    uVar15 = *(undefined8 *)(lVar5 + 0x40);
    uVar11 = *(undefined8 *)(lVar5 + 0x38);
    uVar19 = *(undefined8 *)(lVar5 + 0x50);
    uVar18 = *(undefined8 *)(lVar5 + 0x48);
    uVar21 = *(undefined8 *)(lVar5 + 0x60);
    uVar20 = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar4 + 0xb8) = uVar19;
    *(undefined8 *)(lVar4 + 0xb0) = uVar18;
    *(undefined8 *)(lVar4 + 200) = uVar21;
    *(undefined8 *)(lVar4 + 0xc0) = uVar20;
    *(undefined8 *)(lVar4 + 0xa8) = uVar15;
    *(undefined8 *)(lVar4 + 0xa0) = uVar11;
    *(undefined8 *)(lVar5 + 0x40) = uVar9;
    *(undefined8 *)(lVar5 + 0x38) = uVar8;
    *(undefined8 *)(lVar5 + 0x50) = uVar13;
    *(undefined8 *)(lVar5 + 0x48) = uVar10;
    *(undefined8 *)(lVar5 + 0x60) = uVar17;
    *(undefined8 *)(lVar5 + 0x58) = uVar16;
    *(undefined8 *)(lVar5 + 0x68) = uVar3;
    *(undefined8 *)(lVar5 + 0x30) = uVar14;
    *(undefined8 *)(lVar5 + 0x28) = uVar12;
    func_0x000104603c54(lVar4 + 0x90,0x113087020,&UNK_10dd19c30);
  }
  else {
    *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar4 + 0x70);
    *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(lVar4 + 0x78);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0x88);
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(lVar4 + 0x60);
    *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar4 + 0x58);
    FUN_1045f8d80(lVar4 + 0x90,puVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x150);
      FUN_1045f8adc(0);
      _swift_allocObject();
      FUN_1045f8afc();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    uVar12 = *(undefined8 *)(lVar4 + 0xb8);
    uVar8 = *(undefined8 *)(lVar4 + 0xb0);
    uVar15 = *(undefined8 *)(lVar4 + 200);
    uVar16 = *(undefined8 *)(lVar4 + 0xc0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    uVar18 = *(undefined8 *)(lVar4 + 0x98);
    uVar17 = *(undefined8 *)(lVar4 + 0x90);
    uVar13 = *(undefined8 *)(lVar4 + 0xa8);
    uVar9 = *(undefined8 *)(lVar4 + 0xa0);
    _swift_beginAccess(lVar5 + 0x28,lVar4 + 0x138,1,0);
    uVar10 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(lVar5 + 0x30);
    *puVar1 = uVar10;
    uVar14 = *(undefined8 *)(lVar5 + 0x40);
    uVar10 = *(undefined8 *)(lVar5 + 0x38);
    uVar19 = *(undefined8 *)(lVar5 + 0x50);
    uVar11 = *(undefined8 *)(lVar5 + 0x48);
    uVar21 = *(undefined8 *)(lVar5 + 0x60);
    uVar20 = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar4 + 0x100) = uVar19;
    *(undefined8 *)(lVar4 + 0xf8) = uVar11;
    *(undefined8 *)(lVar4 + 0x110) = uVar21;
    *(undefined8 *)(lVar4 + 0x108) = uVar20;
    *(undefined8 *)(lVar4 + 0xf0) = uVar14;
    *(undefined8 *)(lVar4 + 0xe8) = uVar10;
    *(undefined8 *)(lVar5 + 0x40) = uVar13;
    *(undefined8 *)(lVar5 + 0x38) = uVar9;
    *(undefined8 *)(lVar5 + 0x50) = uVar12;
    *(undefined8 *)(lVar5 + 0x48) = uVar8;
    *(undefined8 *)(lVar5 + 0x60) = uVar15;
    *(undefined8 *)(lVar5 + 0x58) = uVar16;
    *(undefined8 *)(lVar5 + 0x68) = uVar3;
    *(undefined8 *)(lVar5 + 0x30) = uVar18;
    *(undefined8 *)(lVar5 + 0x28) = uVar17;
    func_0x000104603c54(puVar1,0x113087020,&UNK_10dd19c30);
    func_0x0001045f8db4(lVar4 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045c6528; end: 1045c671f;  */

bool FUN_1045c6528(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_170 [72];
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _swift_beginAccess(param_3 + 0x28,auStack_98,0,0);
  uStack_78 = *(undefined8 *)(param_3 + 0x30);
  lVar3 = *(long *)(param_3 + 0x28);
  uStack_68 = *(undefined8 *)(param_3 + 0x40);
  uStack_70 = *(undefined8 *)(param_3 + 0x38);
  uStack_58 = *(undefined8 *)(param_3 + 0x50);
  uStack_60 = *(undefined8 *)(param_3 + 0x48);
  uStack_48 = *(undefined8 *)(param_3 + 0x60);
  uStack_50 = *(undefined8 *)(param_3 + 0x58);
  uStack_40 = *(undefined8 *)(param_3 + 0x68);
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    lStack_128 = 0;
    uStack_118 = *(undefined8 *)(param_3 + 0x38);
    uStack_120 = *(undefined8 *)(param_3 + 0x30);
    uStack_108 = *(undefined8 *)(param_3 + 0x48);
    uStack_110 = *(undefined8 *)(param_3 + 0x40);
    uStack_f8 = *(undefined8 *)(param_3 + 0x58);
    uStack_100 = *(undefined8 *)(param_3 + 0x50);
    uStack_e8 = *(undefined8 *)(param_3 + 0x68);
    uStack_f0 = *(undefined8 *)(param_3 + 0x60);
    uVar1 = 0x113087020;
    puVar2 = &UNK_10dd19c30;
    func_0x0001045f8fa8(&lStack_80,auStack_170,0x113087020,&UNK_10dd19c30);
  }
  else {
    uStack_118 = *(undefined8 *)(param_3 + 0x38);
    uStack_120 = *(undefined8 *)(param_3 + 0x30);
    uStack_108 = *(undefined8 *)(param_3 + 0x48);
    uStack_110 = *(undefined8 *)(param_3 + 0x40);
    uStack_f8 = *(undefined8 *)(param_3 + 0x58);
    uStack_100 = *(undefined8 *)(param_3 + 0x50);
    uStack_e8 = *(undefined8 *)(param_3 + 0x68);
    uStack_f0 = *(undefined8 *)(param_3 + 0x60);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    lStack_128 = lVar3;
    func_0x0001045f8fa8(&lStack_80,auStack_170,0x113087020,&UNK_10dd19c30);
    uVar1 = 0x113087a08;
    puVar2 = &UNK_10dd19c38;
  }
  func_0x000104603c54(&lStack_128,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 1045c6720; end: 1045c675f;  */

void FUN_1045c6720(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x70,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x70));
  return;
}



/* Entry: 1045c6760; end: 1045c6877;  */

void FUN_1045c6760(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8adc(0);
    _swift_allocObject();
    FUN_1045f8afc();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x70,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c6878; end: 1045c6997;  */

void FUN_1045c6878(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8adc(0);
      _swift_allocObject();
      FUN_1045f8afc();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x70,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x70);
    *(undefined8 *)(lVar4 + 0x70) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8adc(0);
      _swift_allocObject();
      FUN_1045f8afc();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x70,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x70);
    *(undefined8 *)(lVar4 + 0x70) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c6998; end: 1045c69d7;  */

void FUN_1045c6998(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x78,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x78));
  return;
}



/* Entry: 1045c69d8; end: 1045c6aef;  */

void FUN_1045c69d8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8adc(0);
    _swift_allocObject();
    FUN_1045f8afc();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x78,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x78) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1045c6af0; end: 1045c6c0f;  */

void FUN_1045c6af0(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8adc(0);
      _swift_allocObject();
      FUN_1045f8afc();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x78,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    *(undefined8 *)(lVar4 + 0x78) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_1045f8adc(0);
      _swift_allocObject();
      FUN_1045f8afc();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x78,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    *(undefined8 *)(lVar4 + 0x78) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c6c10; end: 1045c6c53;  */

char FUN_1045c6c10(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x80,auStack_38,0,0);
  cVar1 = '\0';
  if (*(char *)(param_3 + 0x80) != '\x03') {
    cVar1 = *(char *)(param_3 + 0x80);
  }
  return cVar1;
}



/* Entry: 1045c6c54; end: 1045c6d63;  */

void FUN_1045c6c54(undefined1 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8adc(0);
    _swift_allocObject();
    FUN_1045f8afc();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x80,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x80) = param_1;
  return;
}



/* Entry: 1045c6d64; end: 1045c6e13;  */

void FUN_1045c6d64(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *param_1;
  uVar1 = *(undefined1 *)(lVar3 + 0x50);
  lVar4 = *(long *)(lVar3 + 0x48);
  uVar2 = *(ulong *)(lVar4 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar4 + 0x10);
  lVar4 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar3 + 0x48);
    FUN_1045f8adc(0);
    _swift_allocObject();
    FUN_1045f8afc();
    _swift_release(lVar5);
    *(long *)(lVar6 + 0x10) = lVar4;
  }
  lVar5 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar5 = 0x30;
  }
  _swift_beginAccess(lVar4 + 0x80,lVar3 + lVar5,1,0);
  *(undefined1 *)(lVar4 + 0x80) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045c6e14; end: 1045c6e57;  */

bool FUN_1045c6e14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x80,auStack_38,0,0);
  return *(char *)(param_3 + 0x80) != '\x03';
}



/* Entry: 1045c6e58; end: 1045c6ee3;  */

void FUN_1045c6e58(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1045f8adc(0);
    _swift_allocObject();
    FUN_1045f8afc();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x80,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x80) = 3;
  return;
}



/* Entry: 1045c6ee4; end: 1045c6f8b;  */

undefined8 FUN_1045c6ee4(void)

{
  return 0x1045c6ef4;
}



/* Entry: 1045c6f8c; end: 1045c703b;  */

undefined8 FUN_1045c6f8c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    _swift_once(param_1,param_3);
  }
  _swift_retain(*param_2);
  return 0;
}



/* Entry: 1045c703c; end: 1045c7167;  */

void FUN_1045c703c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1045f8de0(0);
    _swift_allocObject();
    FUN_1045ded64(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045c7168; end: 1045c7277;  */

void FUN_1045c7168(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *param_1;
  uVar6 = *(undefined8 *)(lVar4 + 0x48);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8de0(0);
      _swift_allocObject();
      FUN_1045ded64(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8de0(0);
      _swift_allocObject();
      FUN_1045ded64(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045c7278; end: 1045c72fb;  */

void FUN_1045c7278(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8de0(0);
    _swift_allocObject();
    FUN_1045ded64();
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045c72fc; end: 1045c7343;  */

undefined4 FUN_1045c72fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x20,auStack_38,0,0);
  uVar1 = 0;
  if (*(char *)(param_3 + 0x24) != '\x01') {
    uVar1 = *(undefined4 *)(param_3 + 0x20);
  }
  return uVar1;
}



/* Entry: 1045c7344; end: 1045c7453;  */

void FUN_1045c7344(undefined4 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1045f8de0(0);
    _swift_allocObject();
    FUN_1045ded64(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x20,auStack_48,1,0);
  *(undefined4 *)(lVar3 + 0x20) = param_1;
  *(undefined1 *)(lVar3 + 0x24) = 0;
  return;
}



/* Entry: 1045c7454; end: 1045c74ff;  */

void FUN_1045c7454(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  uVar1 = *(undefined4 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar2 = *(ulong *)(lVar5 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_1045f8de0(0);
    _swift_allocObject();
    FUN_1045ded64(lVar5,uVar3);
    *(long *)(lVar6 + 0x10) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x20,lVar4 + lVar6,1,0);
  *(undefined4 *)(lVar5 + 0x20) = uVar1;
  *(undefined1 *)(lVar5 + 0x24) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045c7500; end: 1045c7543;  */

bool FUN_1045c7500(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x20,auStack_38,0,0);
  return *(char *)(param_3 + 0x24) != '\x01';
}



/* Entry: 1045c7544; end: 1045c75c7;  */

void FUN_1045c7544(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8de0(0);
    _swift_allocObject();
    FUN_1045ded64();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x20,auStack_48,1,0);
  *(undefined4 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 0x24) = 1;
  return;
}



/* Entry: 1045c75c8; end: 1045c771b;  */

void FUN_1045c75c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  
  _swift_beginAccess(param_4 + 0x28,auStack_f8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x70);
  uStack_a0 = *(undefined8 *)(param_4 + 0x68);
  uStack_88 = *(undefined8 *)(param_4 + 0x80);
  uStack_90 = *(undefined8 *)(param_4 + 0x78);
  uStack_80 = *(undefined8 *)(param_4 + 0x88);
  uStack_78 = (undefined1)*(undefined8 *)(param_4 + 0x90);
  uStack_6f = (undefined7)*(undefined8 *)(param_4 + 0x99);
  uStack_68 = (undefined1)((ulong)*(undefined8 *)(param_4 + 0x99) >> 0x38);
  uStack_77 = (undefined7)*(undefined8 *)(param_4 + 0x91);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)(param_4 + 0x91) >> 0x38);
  uStack_d8 = *(undefined8 *)(param_4 + 0x30);
  puStack_e0 = *(undefined **)(param_4 + 0x28);
  puStack_c8 = *(undefined **)(param_4 + 0x40);
  uStack_d0 = *(undefined8 *)(param_4 + 0x38);
  uStack_b8 = *(undefined8 *)(param_4 + 0x50);
  uStack_c0 = *(undefined8 *)(param_4 + 0x48);
  uStack_a8 = *(undefined8 *)(param_4 + 0x60);
  uStack_b0 = *(undefined8 *)(param_4 + 0x58);
  iVar1 = (int)&puStack_e0;
  FUN_1045f8e00();
  if (iVar1 == 1) {
    uStack_188 = 0;
    uStack_190 = 0;
    uVar8 = 1;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uVar2 = 0;
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = 0xc000000000000000;
    uVar4 = 2;
    uVar9 = 2;
    uVar3 = 0;
  }
  else {
    uStack_198 = uStack_a0;
    uStack_1a0 = uStack_a8;
    uStack_188 = uStack_b0;
    uStack_190 = uStack_b8;
    uStack_1b8 = CONCAT71(uStack_77,uStack_78);
    uStack_1c0 = uStack_80;
    uStack_1a8 = uStack_88;
    uStack_1b0 = uStack_90;
    uVar8 = CONCAT71(uStack_6f,uStack_70);
    uVar2 = uStack_d8;
    puVar5 = puStack_c8;
    puVar6 = puStack_e0;
    uVar7 = uStack_d0;
    uVar4 = (undefined1)uStack_c0;
    uVar9 = (undefined1)uStack_98;
    uVar3 = uStack_68;
  }
  func_0x0001045f8fa8(&puStack_e0,auStack_178,0x113087018,&UNK_10dd18930);
  *param_1 = puVar6;
  param_1[1] = uVar2;
  param_1[2] = uVar7;
  param_1[3] = puVar5;
  *(undefined1 *)(param_1 + 4) = uVar4;
  param_1[8] = uStack_198;
  param_1[7] = uStack_1a0;
  param_1[6] = uStack_188;
  param_1[5] = uStack_190;
  *(undefined1 *)(param_1 + 9) = uVar9;
  param_1[0xb] = uStack_1a8;
  param_1[10] = uStack_1b0;
  param_1[0xd] = uStack_1b8;
  param_1[0xc] = uStack_1c0;
  param_1[0xe] = uVar8;
  *(undefined1 *)(param_1 + 0xf) = uVar3;
  return;
}



/* Entry: 1045c771c; end: 1045c776b;  */

void FUN_1045c771c(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined1 *)(param_1 + 4) = 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}



/* Entry: 1045c776c; end: 1045c78a7;  */

void FUN_1045c776c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8de0(0);
    _swift_allocObject();
    FUN_1045ded64();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_e0 = param_1[0xc];
  uStack_d8 = (undefined1)param_1[0xd];
  uStack_cf = *(undefined8 *)((long)param_1 + 0x71);
  uStack_d7 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  func_0x00010458a56c(&uStack_140);
  _swift_beginAccess(lVar2 + 0x28,auStack_158,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x70);
  uStack_80 = *(undefined8 *)(lVar2 + 0x68);
  uStack_68 = *(undefined8 *)(lVar2 + 0x80);
  uStack_70 = *(undefined8 *)(lVar2 + 0x78);
  uStack_4f = *(undefined8 *)(lVar2 + 0x99);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)(lVar2 + 0x91) >> 0x38);
  uStack_60 = *(undefined8 *)(lVar2 + 0x88);
  uStack_58 = (undefined1)*(undefined8 *)(lVar2 + 0x90);
  uStack_57 = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0x90) >> 8);
  uStack_a8 = *(undefined8 *)(lVar2 + 0x40);
  uStack_b0 = *(undefined8 *)(lVar2 + 0x38);
  uStack_b8 = *(undefined8 *)(lVar2 + 0x30);
  uStack_c0 = *(undefined8 *)(lVar2 + 0x28);
  uStack_88 = *(undefined8 *)(lVar2 + 0x60);
  uStack_90 = *(undefined8 *)(lVar2 + 0x58);
  uStack_98 = *(undefined8 *)(lVar2 + 0x50);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x80) = uStack_e8;
  *(undefined8 *)(lVar2 + 0x78) = uStack_f0;
  *(undefined8 *)(lVar2 + 0x60) = uStack_108;
  *(undefined8 *)(lVar2 + 0x58) = uStack_110;
  *(undefined8 *)(lVar2 + 0x30) = uStack_138;
  *(undefined8 *)(lVar2 + 0x28) = uStack_140;
  *(undefined8 *)(lVar2 + 0x40) = uStack_128;
  *(undefined8 *)(lVar2 + 0x38) = uStack_130;
  *(undefined8 *)(lVar2 + 0x50) = uStack_118;
  *(undefined8 *)(lVar2 + 0x48) = uStack_120;
  *(undefined8 *)(lVar2 + 0x70) = uStack_f8;
  *(undefined8 *)(lVar2 + 0x68) = uStack_100;
  *(undefined8 *)(lVar2 + 0x99) = uStack_cf;
  *(ulong *)(lVar2 + 0x91) = CONCAT17(uStack_d0,uStack_d7);
  *(ulong *)(lVar2 + 0x90) = CONCAT71(uStack_d7,uStack_d8);
  *(undefined8 *)(lVar2 + 0x88) = uStack_e0;
  func_0x000104603c54(&uStack_c0,0x113087018,&UNK_10dd18930);
  return;
}



/* Entry: 1045c78a8; end: 1045c7a07;  */

undefined1  [16] FUN_1045c78a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  
  puVar1 = (undefined8 *)0x2b8;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x2b8,0x65f4);
  }
  *param_1 = puVar1;
  puVar1[0x56] = unaff_x20;
  lVar9 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar9 + 0x28,puVar1 + 0x50,0,0);
  uVar10 = *(undefined8 *)(lVar9 + 0x30);
  uVar7 = *(undefined8 *)(lVar9 + 0x28);
  uVar12 = *(undefined8 *)(lVar9 + 0x40);
  uVar11 = *(undefined8 *)(lVar9 + 0x38);
  uVar13 = *(undefined8 *)(lVar9 + 0x48);
  uVar15 = *(undefined8 *)(lVar9 + 0x60);
  uVar14 = *(undefined8 *)(lVar9 + 0x58);
  puVar1[5] = *(undefined8 *)(lVar9 + 0x50);
  puVar1[4] = uVar13;
  puVar1[7] = uVar15;
  puVar1[6] = uVar14;
  puVar1[1] = uVar10;
  *puVar1 = uVar7;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  uVar10 = *(undefined8 *)(lVar9 + 0x70);
  uVar7 = *(undefined8 *)(lVar9 + 0x68);
  uVar12 = *(undefined8 *)(lVar9 + 0x80);
  uVar11 = *(undefined8 *)(lVar9 + 0x78);
  uVar14 = *(undefined8 *)(lVar9 + 0x90);
  uVar13 = *(undefined8 *)(lVar9 + 0x88);
  uVar15 = *(undefined8 *)(lVar9 + 0x91);
  *(undefined8 *)((long)puVar1 + 0x71) = *(undefined8 *)(lVar9 + 0x99);
  *(undefined8 *)((long)puVar1 + 0x69) = uVar15;
  puVar1[0xb] = uVar12;
  puVar1[10] = uVar11;
  puVar1[0xd] = uVar14;
  puVar1[0xc] = uVar13;
  puVar1[9] = uVar10;
  puVar1[8] = uVar7;
  puVar2 = puVar1;
  FUN_1045f8e00();
  if ((int)puVar2 == 1) {
    uVar3 = 0;
    uVar11 = 0xc000000000000000;
    uVar10 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar6 = 2;
    uVar7 = 1;
    uVar8 = 2;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar5 = (undefined *)*puVar1;
    uVar11 = puVar1[2];
    uVar10 = puVar1[1];
    puVar4 = (undefined *)puVar1[3];
    uVar6 = *(undefined1 *)(puVar1 + 4);
    uVar13 = puVar1[6];
    uVar12 = puVar1[5];
    uVar15 = puVar1[8];
    uVar14 = puVar1[7];
    uVar8 = *(undefined1 *)(puVar1 + 9);
    uVar17 = puVar1[0xb];
    uVar16 = puVar1[10];
    uVar19 = puVar1[0xd];
    uVar18 = puVar1[0xc];
    uVar7 = puVar1[0xe];
    uVar3 = *(undefined1 *)(puVar1 + 0xf);
  }
  puVar1[0x10] = puVar5;
  puVar1[0x12] = uVar11;
  puVar1[0x11] = uVar10;
  puVar1[0x13] = puVar4;
  *(undefined1 *)(puVar1 + 0x14) = uVar6;
  puVar1[0x16] = uVar13;
  puVar1[0x15] = uVar12;
  puVar1[0x18] = uVar15;
  puVar1[0x17] = uVar14;
  *(undefined1 *)(puVar1 + 0x19) = uVar8;
  puVar1[0x1b] = uVar17;
  puVar1[0x1a] = uVar16;
  puVar1[0x1d] = uVar19;
  puVar1[0x1c] = uVar18;
  puVar1[0x1e] = uVar7;
  *(undefined1 *)(puVar1 + 0x1f) = uVar3;
  func_0x0001045f8fa8(puVar1,puVar1 + 0x20,0x113087018,&UNK_10dd18930);
  auVar20._8_8_ = puVar1 + 0x10;
  auVar20._0_8_ = FUN_1045c7a08;
  return auVar20;
}



/* Entry: 1045c7a08; end: 1045c7cc3;  */

void FUN_1045c7a08(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  lVar7 = *param_1;
  puVar1 = (undefined8 *)(lVar7 + 0x100);
  puVar2 = (undefined8 *)(lVar7 + 0x180);
  puVar3 = (undefined8 *)(lVar7 + 0x200);
  lVar8 = *(long *)(lVar7 + 0x2b0);
  if ((param_2 & 1) == 0) {
    uVar14 = *(undefined8 *)(lVar7 + 200);
    uVar5 = *(undefined8 *)(lVar7 + 0xc0);
    uVar21 = *(undefined8 *)(lVar7 + 0xd8);
    uVar18 = *(undefined8 *)(lVar7 + 0xd0);
    uVar13 = *(undefined8 *)(lVar7 + 0xe0);
    uStack_58 = (undefined1)*(undefined8 *)(lVar7 + 0xe8);
    uVar15 = *(undefined8 *)(lVar7 + 0xf1);
    uVar10 = *(undefined8 *)(lVar7 + 0xe9);
    uStack_57 = (undefined7)uVar10;
    uVar16 = *(undefined8 *)(lVar7 + 0x88);
    uVar11 = *(undefined8 *)(lVar7 + 0x80);
    uVar22 = *(undefined8 *)(lVar7 + 0x98);
    uVar19 = *(undefined8 *)(lVar7 + 0x90);
    uVar17 = *(undefined8 *)(lVar7 + 0xa8);
    uVar12 = *(undefined8 *)(lVar7 + 0xa0);
    uVar23 = *(undefined8 *)(lVar7 + 0xb8);
    uVar20 = *(undefined8 *)(lVar7 + 0xb0);
    uVar4 = *(ulong *)(lVar8 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((uVar4 & 1) == 0) {
      lVar9 = *(long *)(lVar7 + 0x2b0);
      uVar6 = 0;
      FUN_1045f8de0(0);
      _swift_allocObject();
      FUN_1045ded64(lVar8,uVar6);
      *(long *)(lVar9 + 0x10) = lVar8;
    }
    *(undefined8 *)(lVar7 + 0x1c8) = uVar14;
    *(undefined8 *)(lVar7 + 0x1c0) = uVar5;
    *(undefined8 *)(lVar7 + 0x1d8) = uVar21;
    *(undefined8 *)(lVar7 + 0x1d0) = uVar18;
    *(ulong *)(lVar7 + 0x1e8) = CONCAT71(uStack_57,uStack_58);
    *(undefined8 *)(lVar7 + 0x1e0) = uVar13;
    *(undefined8 *)(lVar7 + 0x1f1) = uVar15;
    *(undefined8 *)(lVar7 + 0x1e9) = uVar10;
    *(undefined8 *)(lVar7 + 0x188) = uVar16;
    *puVar2 = uVar11;
    *(undefined8 *)(lVar7 + 0x198) = uVar22;
    *(undefined8 *)(lVar7 + 400) = uVar19;
    *(undefined8 *)(lVar7 + 0x1a8) = uVar17;
    *(undefined8 *)(lVar7 + 0x1a0) = uVar12;
    *(undefined8 *)(lVar7 + 0x1b8) = uVar23;
    *(undefined8 *)(lVar7 + 0x1b0) = uVar20;
    func_0x00010458a56c(puVar2);
    _swift_beginAccess(lVar8 + 0x28,puVar3,1,0);
    uVar13 = *(undefined8 *)(lVar8 + 0x30);
    uVar5 = *(undefined8 *)(lVar8 + 0x28);
    uVar11 = *(undefined8 *)(lVar8 + 0x40);
    uVar10 = *(undefined8 *)(lVar8 + 0x38);
    uVar12 = *(undefined8 *)(lVar8 + 0x48);
    uVar15 = *(undefined8 *)(lVar8 + 0x60);
    uVar14 = *(undefined8 *)(lVar8 + 0x58);
    *(undefined8 *)(lVar7 + 0x128) = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(lVar7 + 0x120) = uVar12;
    *(undefined8 *)(lVar7 + 0x138) = uVar15;
    *(undefined8 *)(lVar7 + 0x130) = uVar14;
    *(undefined8 *)(lVar7 + 0x108) = uVar13;
    *puVar1 = uVar5;
    *(undefined8 *)(lVar7 + 0x118) = uVar11;
    *(undefined8 *)(lVar7 + 0x110) = uVar10;
    uVar13 = *(undefined8 *)(lVar8 + 0x70);
    uVar5 = *(undefined8 *)(lVar8 + 0x68);
    uVar11 = *(undefined8 *)(lVar8 + 0x80);
    uVar10 = *(undefined8 *)(lVar8 + 0x78);
    uVar14 = *(undefined8 *)(lVar8 + 0x90);
    uVar12 = *(undefined8 *)(lVar8 + 0x88);
    uVar15 = *(undefined8 *)(lVar8 + 0x91);
    *(undefined8 *)(lVar7 + 0x171) = *(undefined8 *)(lVar8 + 0x99);
    *(undefined8 *)(lVar7 + 0x169) = uVar15;
    *(undefined8 *)(lVar7 + 0x158) = uVar11;
    *(undefined8 *)(lVar7 + 0x150) = uVar10;
    *(undefined8 *)(lVar7 + 0x168) = uVar14;
    *(undefined8 *)(lVar7 + 0x160) = uVar12;
    *(undefined8 *)(lVar7 + 0x148) = uVar13;
    *(undefined8 *)(lVar7 + 0x140) = uVar5;
    uVar14 = *(undefined8 *)(lVar7 + 0x1d8);
    uVar12 = *(undefined8 *)(lVar7 + 0x1d0);
    uVar13 = *(undefined8 *)(lVar7 + 0x1e8);
    uVar5 = *(undefined8 *)(lVar7 + 0x1e0);
    uVar11 = *(undefined8 *)(lVar7 + 0x1f1);
    uVar10 = *(undefined8 *)(lVar7 + 0x1e9);
    uVar15 = *(undefined8 *)(lVar7 + 0x1c0);
    *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar7 + 0x1c8);
    *(undefined8 *)(lVar8 + 0x68) = uVar15;
    *(undefined8 *)(lVar8 + 0x99) = uVar11;
    *(undefined8 *)(lVar8 + 0x91) = uVar10;
    *(undefined8 *)(lVar8 + 0x90) = uVar13;
    *(undefined8 *)(lVar8 + 0x88) = uVar5;
    *(undefined8 *)(lVar8 + 0x80) = uVar14;
    *(undefined8 *)(lVar8 + 0x78) = uVar12;
    uVar13 = *(undefined8 *)(lVar7 + 0x188);
    uVar5 = *puVar2;
    uVar11 = *(undefined8 *)(lVar7 + 0x198);
    uVar10 = *(undefined8 *)(lVar7 + 400);
    uVar14 = *(undefined8 *)(lVar7 + 0x1a8);
    uVar12 = *(undefined8 *)(lVar7 + 0x1a0);
    uVar15 = *(undefined8 *)(lVar7 + 0x1b0);
    *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(lVar7 + 0x1b8);
    *(undefined8 *)(lVar8 + 0x58) = uVar15;
    *(undefined8 *)(lVar8 + 0x50) = uVar14;
    *(undefined8 *)(lVar8 + 0x48) = uVar12;
    *(undefined8 *)(lVar8 + 0x40) = uVar11;
    *(undefined8 *)(lVar8 + 0x38) = uVar10;
    *(undefined8 *)(lVar8 + 0x30) = uVar13;
    *(undefined8 *)(lVar8 + 0x28) = uVar5;
    func_0x000104603c54(puVar1,0x113087018,&UNK_10dd18930);
  }
  else {
    *(undefined8 *)(lVar7 + 0x148) = *(undefined8 *)(lVar7 + 200);
    *(undefined8 *)(lVar7 + 0x140) = *(undefined8 *)(lVar7 + 0xc0);
    *(undefined8 *)(lVar7 + 0x158) = *(undefined8 *)(lVar7 + 0xd8);
    *(undefined8 *)(lVar7 + 0x150) = *(undefined8 *)(lVar7 + 0xd0);
    *(undefined8 *)(lVar7 + 0x168) = *(undefined8 *)(lVar7 + 0xe8);
    *(undefined8 *)(lVar7 + 0x160) = *(undefined8 *)(lVar7 + 0xe0);
    *(undefined8 *)(lVar7 + 0x171) = *(undefined8 *)(lVar7 + 0xf1);
    *(undefined8 *)(lVar7 + 0x169) = *(undefined8 *)(lVar7 + 0xe9);
    *(undefined8 *)(lVar7 + 0x108) = *(undefined8 *)(lVar7 + 0x88);
    *puVar1 = *(undefined8 *)(lVar7 + 0x80);
    *(undefined8 *)(lVar7 + 0x118) = *(undefined8 *)(lVar7 + 0x98);
    *(undefined8 *)(lVar7 + 0x110) = *(undefined8 *)(lVar7 + 0x90);
    *(undefined8 *)(lVar7 + 0x128) = *(undefined8 *)(lVar7 + 0xa8);
    *(undefined8 *)(lVar7 + 0x120) = *(undefined8 *)(lVar7 + 0xa0);
    *(undefined8 *)(lVar7 + 0x138) = *(undefined8 *)(lVar7 + 0xb8);
    *(undefined8 *)(lVar7 + 0x130) = *(undefined8 *)(lVar7 + 0xb0);
    FUN_1045f8e18(puVar1,puVar2);
    uVar4 = *(ulong *)(lVar8 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((uVar4 & 1) == 0) {
      lVar9 = *(long *)(lVar7 + 0x2b0);
      uVar5 = 0;
      FUN_1045f8de0(0);
      _swift_allocObject();
      FUN_1045ded64(lVar8,uVar5);
      *(long *)(lVar9 + 0x10) = lVar8;
    }
    *(undefined8 *)(lVar7 + 0x248) = *(undefined8 *)(lVar7 + 0x148);
    *(undefined8 *)(lVar7 + 0x240) = *(undefined8 *)(lVar7 + 0x140);
    *(undefined8 *)(lVar7 + 600) = *(undefined8 *)(lVar7 + 0x158);
    *(undefined8 *)(lVar7 + 0x250) = *(undefined8 *)(lVar7 + 0x150);
    *(undefined8 *)(lVar7 + 0x268) = *(undefined8 *)(lVar7 + 0x168);
    *(undefined8 *)(lVar7 + 0x260) = *(undefined8 *)(lVar7 + 0x160);
    *(undefined8 *)(lVar7 + 0x271) = *(undefined8 *)(lVar7 + 0x171);
    *(undefined8 *)(lVar7 + 0x269) = *(undefined8 *)(lVar7 + 0x169);
    *(undefined8 *)(lVar7 + 0x208) = *(undefined8 *)(lVar7 + 0x108);
    *puVar3 = *puVar1;
    *(undefined8 *)(lVar7 + 0x218) = *(undefined8 *)(lVar7 + 0x118);
    *(undefined8 *)(lVar7 + 0x210) = *(undefined8 *)(lVar7 + 0x110);
    *(undefined8 *)(lVar7 + 0x228) = *(undefined8 *)(lVar7 + 0x128);
    *(undefined8 *)(lVar7 + 0x220) = *(undefined8 *)(lVar7 + 0x120);
    *(undefined8 *)(lVar7 + 0x238) = *(undefined8 *)(lVar7 + 0x138);
    *(undefined8 *)(lVar7 + 0x230) = *(undefined8 *)(lVar7 + 0x130);
    func_0x00010458a56c(puVar3);
    _swift_beginAccess(lVar8 + 0x28,lVar7 + 0x298,1,0);
    uVar13 = *(undefined8 *)(lVar8 + 0x30);
    uVar5 = *(undefined8 *)(lVar8 + 0x28);
    uVar11 = *(undefined8 *)(lVar8 + 0x40);
    uVar10 = *(undefined8 *)(lVar8 + 0x38);
    uVar12 = *(undefined8 *)(lVar8 + 0x48);
    uVar15 = *(undefined8 *)(lVar8 + 0x60);
    uVar14 = *(undefined8 *)(lVar8 + 0x58);
    *(undefined8 *)(lVar7 + 0x1a8) = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(lVar7 + 0x1a0) = uVar12;
    *(undefined8 *)(lVar7 + 0x1b8) = uVar15;
    *(undefined8 *)(lVar7 + 0x1b0) = uVar14;
    *(undefined8 *)(lVar7 + 0x188) = uVar13;
    *puVar2 = uVar5;
    *(undefined8 *)(lVar7 + 0x198) = uVar11;
    *(undefined8 *)(lVar7 + 400) = uVar10;
    uVar13 = *(undefined8 *)(lVar8 + 0x70);
    uVar5 = *(undefined8 *)(lVar8 + 0x68);
    uVar11 = *(undefined8 *)(lVar8 + 0x80);
    uVar10 = *(undefined8 *)(lVar8 + 0x78);
    uVar14 = *(undefined8 *)(lVar8 + 0x90);
    uVar12 = *(undefined8 *)(lVar8 + 0x88);
    uVar15 = *(undefined8 *)(lVar8 + 0x91);
    *(undefined8 *)(lVar7 + 0x1f1) = *(undefined8 *)(lVar8 + 0x99);
    *(undefined8 *)(lVar7 + 0x1e9) = uVar15;
    *(undefined8 *)(lVar7 + 0x1d8) = uVar11;
    *(undefined8 *)(lVar7 + 0x1d0) = uVar10;
    *(undefined8 *)(lVar7 + 0x1e8) = uVar14;
    *(undefined8 *)(lVar7 + 0x1e0) = uVar12;
    *(undefined8 *)(lVar7 + 0x1c8) = uVar13;
    *(undefined8 *)(lVar7 + 0x1c0) = uVar5;
    uVar14 = *(undefined8 *)(lVar7 + 600);
    uVar12 = *(undefined8 *)(lVar7 + 0x250);
    uVar13 = *(undefined8 *)(lVar7 + 0x268);
    uVar5 = *(undefined8 *)(lVar7 + 0x260);
    uVar11 = *(undefined8 *)(lVar7 + 0x271);
    uVar10 = *(undefined8 *)(lVar7 + 0x269);
    uVar15 = *(undefined8 *)(lVar7 + 0x240);
    *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar7 + 0x248);
    *(undefined8 *)(lVar8 + 0x68) = uVar15;
    *(undefined8 *)(lVar8 + 0x99) = uVar11;
    *(undefined8 *)(lVar8 + 0x91) = uVar10;
    *(undefined8 *)(lVar8 + 0x90) = uVar13;
    *(undefined8 *)(lVar8 + 0x88) = uVar5;
    *(undefined8 *)(lVar8 + 0x80) = uVar14;
    *(undefined8 *)(lVar8 + 0x78) = uVar12;
    uVar13 = *(undefined8 *)(lVar7 + 0x208);
    uVar5 = *puVar3;
    uVar11 = *(undefined8 *)(lVar7 + 0x218);
    uVar10 = *(undefined8 *)(lVar7 + 0x210);
    uVar14 = *(undefined8 *)(lVar7 + 0x228);
    uVar12 = *(undefined8 *)(lVar7 + 0x220);
    uVar15 = *(undefined8 *)(lVar7 + 0x230);
    *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(lVar7 + 0x238);
    *(undefined8 *)(lVar8 + 0x58) = uVar15;
    *(undefined8 *)(lVar8 + 0x50) = uVar14;
    *(undefined8 *)(lVar8 + 0x48) = uVar12;
    *(undefined8 *)(lVar8 + 0x40) = uVar11;
    *(undefined8 *)(lVar8 + 0x38) = uVar10;
    *(undefined8 *)(lVar8 + 0x30) = uVar13;
    *(undefined8 *)(lVar8 + 0x28) = uVar5;
    func_0x000104603c54(puVar2,0x113087018,&UNK_10dd18930);
    func_0x0001045f8e4c(lVar7 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar7);
  return;
}



/* Entry: 1045c7cc4; end: 1045c80f3;  */

uint FUN_1045c7cc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_560 [128];
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_46f;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined8 uStack_3ef;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2ef;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1ef;
  undefined1 auStack_1d8 [24];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined8 uStack_4f;
  
  _swift_beginAccess(param_3 + 0x28,auStack_1d8,0,0);
  uStack_f8 = *(undefined8 *)(param_3 + 0x70);
  uStack_100 = *(undefined8 *)(param_3 + 0x68);
  uStack_e8 = *(undefined8 *)(param_3 + 0x80);
  uStack_f0 = *(undefined8 *)(param_3 + 0x78);
  uStack_e0 = *(undefined8 *)(param_3 + 0x88);
  uStack_d8 = (undefined1)*(undefined8 *)(param_3 + 0x90);
  uStack_cf = *(undefined8 *)(param_3 + 0x99);
  uStack_d7 = (undefined7)*(undefined8 *)(param_3 + 0x91);
  uStack_d0 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0x91) >> 0x38);
  uStack_138 = *(undefined8 *)(param_3 + 0x30);
  uStack_140 = *(undefined8 *)(param_3 + 0x28);
  uStack_128 = *(undefined8 *)(param_3 + 0x40);
  uStack_130 = *(undefined8 *)(param_3 + 0x38);
  uStack_118 = *(undefined8 *)(param_3 + 0x50);
  uStack_120 = *(undefined8 *)(param_3 + 0x48);
  uStack_108 = *(undefined8 *)(param_3 + 0x60);
  uStack_110 = *(undefined8 *)(param_3 + 0x58);
  FUN_10458a550(&uStack_c0);
  uStack_298 = uStack_f8;
  uStack_2a0 = uStack_100;
  uStack_288 = uStack_e8;
  uStack_290 = uStack_f0;
  uStack_278 = uStack_d8;
  uStack_280 = uStack_e0;
  uStack_26f = (undefined7)uStack_cf;
  uStack_268 = (undefined1)((ulong)uStack_cf >> 0x38);
  uStack_277 = uStack_d7;
  uStack_270 = uStack_d0;
  uStack_2d8 = uStack_138;
  uStack_2e0 = uStack_140;
  uStack_2c8 = uStack_128;
  uStack_2d0 = uStack_130;
  uStack_2b8 = uStack_118;
  uStack_2c0 = uStack_120;
  uStack_2a8 = uStack_108;
  uStack_2b0 = uStack_110;
  uStack_248 = uStack_a8;
  uStack_250 = uStack_b0;
  uStack_238 = uStack_98;
  uStack_240 = uStack_a0;
  uStack_258 = uStack_b8;
  uStack_260 = uStack_c0;
  uStack_1ef = uStack_4f;
  uStack_208 = uStack_68;
  uStack_210 = uStack_70;
  uStack_200 = uStack_60;
  uStack_228 = uStack_88;
  uStack_230 = uStack_90;
  uStack_218 = uStack_78;
  uStack_220 = uStack_80;
  iVar1 = (int)&uStack_2e0;
  FUN_1045f8e00();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_260;
    FUN_1045f8e00();
    if (iVar1 == 1) {
      uStack_398 = uStack_298;
      uStack_3a0 = uStack_2a0;
      uStack_388 = uStack_288;
      uStack_390 = uStack_290;
      uStack_378 = uStack_278;
      uStack_380 = uStack_280;
      uStack_36f = uStack_26f;
      uStack_368 = uStack_268;
      uStack_377 = uStack_277;
      uStack_370 = uStack_270;
      uStack_3d8 = uStack_2d8;
      uStack_3e0 = uStack_2e0;
      uStack_3c8 = uStack_2c8;
      uStack_3d0 = uStack_2d0;
      uStack_3b8 = uStack_2b8;
      uStack_3c0 = uStack_2c0;
      uStack_3a8 = uStack_2a8;
      uStack_3b0 = uStack_2b0;
      func_0x0001045f8fa8(&uStack_140,&uStack_1c0,0x113087018,&UNK_10dd18930);
      func_0x000104603c54(&uStack_3e0,0x113087018,&UNK_10dd18930);
      uVar3 = 0;
      goto LAB_1045c7fc8;
    }
  }
  else {
    uStack_418 = uStack_298;
    uStack_420 = uStack_2a0;
    uStack_408 = uStack_288;
    uStack_410 = uStack_290;
    uStack_3f8 = uStack_278;
    uStack_400 = uStack_280;
    uStack_3ef = CONCAT17(uStack_268,uStack_26f);
    uStack_3f7 = uStack_277;
    uStack_3f0 = uStack_270;
    uStack_458 = uStack_2d8;
    uStack_460 = uStack_2e0;
    uStack_448 = uStack_2c8;
    uStack_450 = uStack_2d0;
    uStack_438 = uStack_2b8;
    uStack_440 = uStack_2c0;
    uStack_428 = uStack_2a8;
    uStack_430 = uStack_2b0;
    iVar1 = (int)&uStack_260;
    FUN_1045f8e00();
    if (iVar1 != 1) {
      uStack_498 = uStack_218;
      uStack_4a0 = uStack_220;
      uStack_488 = uStack_208;
      uStack_490 = uStack_210;
      uStack_480 = uStack_200;
      uStack_46f = uStack_1ef;
      uStack_4d8 = uStack_258;
      uStack_4e0 = uStack_260;
      uStack_4c8 = uStack_248;
      uStack_4d0 = uStack_250;
      uStack_4b8 = uStack_238;
      uStack_4c0 = uStack_240;
      uStack_4a8 = uStack_228;
      uStack_4b0 = uStack_230;
      uStack_36f = (undefined7)uStack_1ef;
      uStack_368 = (undefined1)((ulong)uStack_1ef >> 0x38);
      uStack_388 = uStack_208;
      uStack_390 = uStack_210;
      uStack_380 = uStack_200;
      uStack_3a8 = uStack_228;
      uStack_3b0 = uStack_230;
      uStack_398 = uStack_218;
      uStack_3a0 = uStack_220;
      uStack_3c8 = uStack_248;
      uStack_3d0 = uStack_250;
      uStack_3b8 = uStack_238;
      uStack_3c0 = uStack_240;
      uStack_3d8 = uStack_258;
      uStack_3e0 = uStack_260;
      uStack_178 = uStack_418;
      uStack_180 = uStack_420;
      uStack_168 = uStack_408;
      uStack_170 = uStack_410;
      uStack_158 = uStack_3f8;
      uStack_160 = uStack_400;
      uStack_14f = uStack_3ef;
      uStack_157 = uStack_3f7;
      uStack_150 = uStack_3f0;
      uStack_1b8 = uStack_458;
      uStack_1c0 = uStack_460;
      uStack_1a8 = uStack_448;
      uStack_1b0 = uStack_450;
      uStack_198 = uStack_438;
      uStack_1a0 = uStack_440;
      uStack_188 = uStack_428;
      uStack_190 = uStack_430;
      func_0x0001045f8fa8(&uStack_140,auStack_560,0x113087018,&UNK_10dd18930);
      func_0x0001045f8fa8(&uStack_140,auStack_560,0x113087018,&UNK_10dd18930);
      puVar2 = &uStack_1c0;
      func_0x0001045f65a4(puVar2,&uStack_3e0);
      func_0x000104603c54(&uStack_140,0x113087018,&UNK_10dd18930);
      func_0x000104603c54(&uStack_4e0,0x113087018,&UNK_10dd18930);
      func_0x000104603c54(&uStack_2e0,0x113087018,&UNK_10dd18930);
      uVar3 = (uint)puVar2 ^ 1;
      goto LAB_1045c7fc8;
    }
  }
  uStack_318 = uStack_218;
  uStack_320 = uStack_220;
  uStack_308 = uStack_208;
  uStack_310 = uStack_210;
  uStack_300 = uStack_200;
  uStack_2ef = uStack_1ef;
  uStack_358 = uStack_258;
  uStack_360 = uStack_260;
  uStack_348 = uStack_248;
  uStack_350 = uStack_250;
  uStack_338 = uStack_238;
  uStack_340 = uStack_240;
  uStack_328 = uStack_228;
  uStack_330 = uStack_230;
  uStack_398 = uStack_298;
  uStack_3a0 = uStack_2a0;
  uStack_388 = uStack_288;
  uStack_390 = uStack_290;
  uStack_378 = uStack_278;
  uStack_377 = uStack_277;
  uStack_380 = uStack_280;
  uStack_368 = uStack_268;
  uStack_370 = uStack_270;
  uStack_36f = uStack_26f;
  uStack_3d8 = uStack_2d8;
  uStack_3e0 = uStack_2e0;
  uStack_3c8 = uStack_2c8;
  uStack_3d0 = uStack_2d0;
  uStack_3b8 = uStack_2b8;
  uStack_3c0 = uStack_2c0;
  uStack_3a8 = uStack_2a8;
  uStack_3b0 = uStack_2b0;
  func_0x0001045f8fa8(&uStack_140,&uStack_1c0,0x113087018,&UNK_10dd18930);
  func_0x000104603c54(&uStack_3e0,0x113087a20,&UNK_10dd19c48);
  uVar3 = 1;
LAB_1045c7fc8:
  return uVar3 & 1;
}



/* Entry: 1045c80f4; end: 1045c8107;  */

undefined8 FUN_1045c80f4(void)

{
  return 0x1045c8104;
}



/* Entry: 1045c8108; end: 1045c8137;  */

undefined8 FUN_1045c8108(void)

{
  FUN_1045f8de0(0);
  _swift_initStaticObject();
  return 0;
}



/* Entry: 1045c8138; end: 1045c8177;  */

undefined1  [16] FUN_1045c8138(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c8178; end: 1045c81ab;  */

void FUN_1045c8178(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1045c81ac; end: 1045c8203;  */

undefined1  [16] FUN_1045c81ac(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x1046049fc;
  return auVar4;
}



/* Entry: 1045c8204; end: 1045c8213;  */

bool FUN_1045c8204(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) != 0;
}



/* Entry: 1045c8214; end: 1045c822f;  */

void FUN_1045c8214(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 1045c8230; end: 1045c8237;  */

void FUN_1045c8230(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*unaff_x20);
  return;
}



/* Entry: 1045c8238; end: 1045c825f;  */

void FUN_1045c8238(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045c8260; end: 1045c8273;  */

undefined8 FUN_1045c8260(void)

{
  return 0x1045c8270;
}



/* Entry: 1045c8274; end: 1045c8347;  */

void FUN_1045c8274(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [72];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x30);
  puStack_a0 = *(undefined **)(unaff_x20 + 0x28);
  puStack_88 = *(undefined **)(unaff_x20 + 0x40);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_60 = *(undefined1 *)(unaff_x20 + 0x68);
  uVar1 = uStack_98;
  puVar3 = puStack_88;
  puVar4 = puStack_a0;
  uVar5 = uStack_90;
  uVar2 = uStack_60;
  uStack_110 = uStack_70;
  uStack_108 = uStack_68;
  uStack_100 = uStack_80;
  uStack_f8 = uStack_78;
  if (puStack_a0 == (undefined *)0x0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uVar1 = 0;
    puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar5 = 0xc000000000000000;
    uVar2 = 2;
  }
  func_0x0001045f8fa8(&puStack_a0,auStack_e8,0x113087010,&UNK_10dd19c50);
  *param_1 = puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = puVar3;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_108;
  param_1[6] = uStack_110;
  *(undefined1 *)(param_1 + 8) = uVar2;
  return;
}



/* Entry: 1045c8348; end: 1045c837f;  */

void FUN_1045c8348(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 2;
  return;
}



/* Entry: 1045c8380; end: 1045c83d3;  */

void FUN_1045c8380(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000104603c54(unaff_x20 + 0x28,0x113087010,&UNK_10dd19c50);
  uVar3 = param_1[1];
  uVar2 = *param_1;
  uVar1 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x40) = param_1[3];
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  uVar1 = param_1[4];
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x50) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar4;
  *(undefined1 *)(unaff_x20 + 0x68) = *(undefined1 *)(param_1 + 8);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1045c83d4; end: 1045c84c7;  */

undefined1  [16] FUN_1045c83d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar1 = (undefined8 *)0x170;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x170,0x2801);
  }
  *param_1 = puVar1;
  puVar1[0x2d] = unaff_x20;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1[1] = *(undefined8 *)(unaff_x20 + 0x30);
  *puVar1 = uVar5;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(unaff_x20 + 0x68);
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  if ((undefined *)*puVar1 == (undefined *)0x0) {
    uVar6 = 0xc000000000000000;
    uVar5 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar3 = 2;
    uVar9 = 0;
    uVar10 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar6 = puVar1[2];
    uVar5 = puVar1[1];
    uVar8 = puVar1[5];
    uVar7 = puVar1[4];
    uVar10 = puVar1[7];
    uVar9 = puVar1[6];
    uVar3 = *(undefined1 *)(puVar1 + 8);
    puVar2 = (undefined *)*puVar1;
    puVar4 = (undefined *)puVar1[3];
  }
  puVar1[9] = puVar2;
  puVar1[0xb] = uVar6;
  puVar1[10] = uVar5;
  puVar1[0xc] = puVar4;
  puVar1[0xe] = uVar8;
  puVar1[0xd] = uVar7;
  puVar1[0x10] = uVar10;
  puVar1[0xf] = uVar9;
  *(undefined1 *)(puVar1 + 0x11) = uVar3;
  func_0x0001045f8fa8(puVar1,puVar1 + 0x12,0x113087010,&UNK_10dd19c50);
  auVar11._8_8_ = puVar1 + 9;
  auVar11._0_8_ = FUN_1045c84c8;
  return auVar11;
}



/* Entry: 1045c84c8; end: 1045c85fb;  */

void FUN_1045c84c8(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar2 = *param_1;
  if ((param_2 & 1) == 0) {
    lVar3 = *(long *)(lVar2 + 0x168);
    uVar5 = *(undefined8 *)(lVar2 + 0x60);
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    uVar8 = *(undefined8 *)(lVar2 + 0x70);
    uVar6 = *(undefined8 *)(lVar2 + 0x68);
    uVar11 = *(undefined8 *)(lVar2 + 0x80);
    uVar10 = *(undefined8 *)(lVar2 + 0x78);
    uVar1 = *(undefined1 *)(lVar2 + 0x88);
    uVar9 = *(undefined8 *)(lVar2 + 0x50);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    func_0x000104603c54(lVar3 + 0x28,0x113087010,&UNK_10dd19c50);
    *(undefined8 *)(lVar3 + 0x40) = uVar5;
    *(undefined8 *)(lVar3 + 0x38) = uVar4;
    *(undefined8 *)(lVar3 + 0x50) = uVar8;
    *(undefined8 *)(lVar3 + 0x48) = uVar6;
    *(undefined8 *)(lVar3 + 0x60) = uVar11;
    *(undefined8 *)(lVar3 + 0x58) = uVar10;
    *(undefined1 *)(lVar3 + 0x68) = uVar1;
    *(undefined8 *)(lVar3 + 0x30) = uVar9;
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x168);
    uVar6 = *(undefined8 *)(lVar2 + 0x50);
    uVar4 = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0xe0) = uVar6;
    *(undefined8 *)(lVar2 + 0xd8) = uVar4;
    uVar1 = *(undefined1 *)(lVar2 + 0x88);
    *(undefined1 *)(lVar2 + 0x118) = uVar1;
    uVar10 = *(undefined8 *)(lVar2 + 0x80);
    uVar8 = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(lVar2 + 0x110) = uVar10;
    *(undefined8 *)(lVar2 + 0x108) = uVar8;
    uVar14 = *(undefined8 *)(lVar2 + 0x70);
    uVar12 = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(lVar2 + 0x100) = uVar14;
    *(undefined8 *)(lVar2 + 0xf8) = uVar12;
    uVar17 = *(undefined8 *)(lVar2 + 0x60);
    uVar16 = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0xf0) = uVar17;
    *(undefined8 *)(lVar2 + 0xe8) = uVar16;
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar2 + 0x90) = uVar5;
    uVar7 = *(undefined8 *)(lVar3 + 0x40);
    uVar5 = *(undefined8 *)(lVar3 + 0x38);
    uVar11 = *(undefined8 *)(lVar3 + 0x50);
    uVar9 = *(undefined8 *)(lVar3 + 0x48);
    uVar15 = *(undefined8 *)(lVar3 + 0x60);
    uVar13 = *(undefined8 *)(lVar3 + 0x58);
    *(undefined1 *)(lVar2 + 0xd0) = *(undefined1 *)(lVar3 + 0x68);
    *(undefined8 *)(lVar2 + 0xb8) = uVar11;
    *(undefined8 *)(lVar2 + 0xb0) = uVar9;
    *(undefined8 *)(lVar2 + 200) = uVar15;
    *(undefined8 *)(lVar2 + 0xc0) = uVar13;
    *(undefined8 *)(lVar2 + 0xa8) = uVar7;
    *(undefined8 *)(lVar2 + 0xa0) = uVar5;
    func_0x0001045f8e78(lVar2 + 0xd8,lVar2 + 0x120);
    func_0x000104603c54(lVar2 + 0x90,0x113087010,&UNK_10dd19c50);
    *(undefined8 *)(lVar3 + 0x40) = uVar17;
    *(undefined8 *)(lVar3 + 0x38) = uVar16;
    *(undefined8 *)(lVar3 + 0x50) = uVar14;
    *(undefined8 *)(lVar3 + 0x48) = uVar12;
    *(undefined8 *)(lVar3 + 0x60) = uVar10;
    *(undefined8 *)(lVar3 + 0x58) = uVar8;
    *(undefined1 *)(lVar3 + 0x68) = uVar1;
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    func_0x0001045f8eac(lVar2 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 1045c85fc; end: 1045c8717;  */

bool FUN_1045c85fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_158 [72];
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined8 uStack_d7;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_40 = *(undefined1 *)(unaff_x20 + 0x68);
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    lStack_110 = 0;
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_e0 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
    uStack_d7 = *(undefined8 *)(unaff_x20 + 0x61);
    uStack_df = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
    uStack_d8 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
    uVar1 = 0x113087010;
    puVar2 = &UNK_10dd19c50;
    func_0x0001045f8fa8(&lStack_80,auStack_158,0x113087010,&UNK_10dd19c50);
  }
  else {
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_e0 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
    uStack_d7 = *(undefined8 *)(unaff_x20 + 0x61);
    uStack_df = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
    uStack_d8 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    lStack_110 = lVar3;
    func_0x0001045f8fa8(&lStack_80,auStack_158,0x113087010,&UNK_10dd19c50);
    uVar1 = 0x113087ad8;
    puVar2 = &UNK_10dd19c58;
  }
  func_0x000104603c54(&lStack_110,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 1045c8718; end: 1045c8757;  */

void FUN_1045c8718(void)

{
  long unaff_x20;
  
  func_0x000104603c54(unaff_x20 + 0x28,0x113087010,&UNK_10dd19c50);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 1045c8758; end: 1045c8787;  */

undefined1  [16] FUN_1045c8758(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045c8788; end: 1045c87bb;  */

void FUN_1045c8788(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045c87bc; end: 1045c8807;  */

undefined1  [16] FUN_1045c87bc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045c87cc;
  return auVar1;
}



/* Entry: 1045c8808; end: 1045c8847;  */

undefined1  [16] FUN_1045c8808(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c8848; end: 1045c887b;  */

void FUN_1045c8848(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1045c887c; end: 1045c88d3;  */

undefined1  [16] FUN_1045c887c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x104604a00;
  return auVar4;
}



/* Entry: 1045c88d4; end: 1045c88e3;  */

bool FUN_1045c88d4(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x18) != 0;
}



/* Entry: 1045c88e4; end: 1045c88ff;  */

void FUN_1045c88e4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1045c8900; end: 1045c893f;  */

undefined1  [16] FUN_1045c8900(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c8940; end: 1045c8973;  */

void FUN_1045c8940(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1045c8974; end: 1045c89cb;  */

undefined1  [16] FUN_1045c8974(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_1045c89cc;
  return auVar4;
}



/* Entry: 1045c89cc; end: 1045c8a2b;  */

void FUN_1045c89cc(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x20) = uVar1;
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  return;
}



/* Entry: 1045c8a2c; end: 1045c8a3b;  */

bool FUN_1045c8a2c(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x28) != 0;
}



/* Entry: 1045c8a3c; end: 1045c8a57;  */

void FUN_1045c8a3c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 1045c8a58; end: 1045c8a97;  */

undefined1  [16] FUN_1045c8a58(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c8a98; end: 1045c8acb;  */

void FUN_1045c8a98(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 1045c8acc; end: 1045c8b23;  */

undefined1  [16] FUN_1045c8acc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_1045c8b24;
  return auVar4;
}



/* Entry: 1045c8b24; end: 1045c8b83;  */

void FUN_1045c8b24(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x30) = uVar1;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x30) = uVar1;
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  return;
}



/* Entry: 1045c8b84; end: 1045c8b93;  */

bool FUN_1045c8b84(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x38) != 0;
}



/* Entry: 1045c8b94; end: 1045c8baf;  */

void FUN_1045c8b94(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 1045c8bb0; end: 1045c8c8f;  */

void FUN_1045c8bb0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [72];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x48);
  puStack_a0 = *(undefined **)(unaff_x20 + 0x40);
  puStack_88 = *(undefined **)(unaff_x20 + 0x58);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x80);
  if (puStack_a0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uVar2 = 3;
    uVar3 = 2;
    uVar6 = 0xc000000000000000;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uStack_80._0_1_ = (undefined1)uVar7;
    uStack_80._1_1_ = (undefined1)((ulong)uVar7 >> 8);
    uVar1 = uStack_98;
    puVar4 = puStack_88;
    puVar5 = puStack_a0;
    uVar6 = uStack_90;
    uVar3 = (undefined1)uStack_80;
    uVar2 = uStack_80._1_1_;
    uStack_110 = uStack_68;
    uStack_108 = uStack_60;
    uStack_100 = uStack_78;
    uStack_f8 = uStack_70;
  }
  uStack_80 = uVar7;
  func_0x0001045f8fa8(&puStack_a0,auStack_e8,0x113087008,&UNK_10dd18920);
  *param_1 = puVar5;
  param_1[1] = uVar1;
  param_1[2] = uVar6;
  param_1[3] = puVar4;
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x21) = uVar2;
  param_1[8] = uStack_108;
  param_1[7] = uStack_110;
  param_1[6] = uStack_f8;
  param_1[5] = uStack_100;
  return;
}



/* Entry: 1045c8c90; end: 1045c8ccb;  */

void FUN_1045c8c90(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined2 *)(param_1 + 4) = 0x302;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 1045c8ccc; end: 1045c8d17;  */

void FUN_1045c8ccc(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000104603c54(unaff_x20 + 0x40,0x113087008,&UNK_10dd18920);
  uVar1 = param_1[4];
  uVar3 = param_1[7];
  uVar2 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x68) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_1[8];
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x48) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  return;
}



/* Entry: 1045c8d18; end: 1045c8e13;  */

undefined1  [16] FUN_1045c8d18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar1 = (undefined8 *)0x170;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x170,0x8601);
  }
  *param_1 = puVar1;
  puVar1[0x2d] = unaff_x20;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar1[1] = *(undefined8 *)(unaff_x20 + 0x48);
  *puVar1 = uVar6;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar1[8] = *(undefined8 *)(unaff_x20 + 0x80);
  puVar1[5] = uVar9;
  puVar1[4] = uVar8;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[3] = uVar11;
  puVar1[2] = uVar10;
  if ((undefined *)*puVar1 == (undefined *)0x0) {
    uVar7 = 0xc000000000000000;
    uVar6 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar2 = 3;
    uVar4 = 2;
    uVar10 = 0;
    uVar11 = 0;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar7 = puVar1[2];
    uVar6 = puVar1[1];
    uVar4 = *(undefined1 *)(puVar1 + 4);
    uVar2 = *(undefined1 *)((long)puVar1 + 0x21);
    uVar9 = puVar1[6];
    uVar8 = puVar1[5];
    uVar11 = puVar1[8];
    uVar10 = puVar1[7];
    puVar3 = (undefined *)*puVar1;
    puVar5 = (undefined *)puVar1[3];
  }
  puVar1[9] = puVar3;
  puVar1[0xb] = uVar7;
  puVar1[10] = uVar6;
  puVar1[0xc] = puVar5;
  *(undefined1 *)(puVar1 + 0xd) = uVar4;
  *(undefined1 *)((long)puVar1 + 0x69) = uVar2;
  puVar1[0xf] = uVar9;
  puVar1[0xe] = uVar8;
  puVar1[0x11] = uVar11;
  puVar1[0x10] = uVar10;
  func_0x0001045f8fa8(puVar1,puVar1 + 0x12,0x113087008,&UNK_10dd18920);
  auVar12._8_8_ = puVar1 + 9;
  auVar12._0_8_ = FUN_1045c8e14;
  return auVar12;
}



/* Entry: 1045c8e14; end: 1045c8f33;  */

void FUN_1045c8e14(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar2 = *param_1;
  if ((param_2 & 1) == 0) {
    lVar3 = *(long *)(lVar2 + 0x168);
    uVar5 = *(undefined8 *)(lVar2 + 0x60);
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    uVar8 = *(undefined8 *)(lVar2 + 0x70);
    uVar6 = *(undefined8 *)(lVar2 + 0x68);
    uVar11 = *(undefined8 *)(lVar2 + 0x80);
    uVar10 = *(undefined8 *)(lVar2 + 0x78);
    uVar1 = *(undefined8 *)(lVar2 + 0x88);
    uVar9 = *(undefined8 *)(lVar2 + 0x50);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    func_0x000104603c54(lVar3 + 0x40,0x113087008,&UNK_10dd18920);
    *(undefined8 *)(lVar3 + 0x68) = uVar8;
    *(undefined8 *)(lVar3 + 0x60) = uVar6;
    *(undefined8 *)(lVar3 + 0x78) = uVar11;
    *(undefined8 *)(lVar3 + 0x70) = uVar10;
    *(undefined8 *)(lVar3 + 0x80) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar9;
    *(undefined8 *)(lVar3 + 0x40) = uVar7;
    *(undefined8 *)(lVar3 + 0x58) = uVar5;
    *(undefined8 *)(lVar3 + 0x50) = uVar4;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x168);
    uVar6 = *(undefined8 *)(lVar2 + 0x50);
    uVar4 = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0xe0) = uVar6;
    *(undefined8 *)(lVar2 + 0xd8) = uVar4;
    uVar1 = *(undefined8 *)(lVar2 + 0x88);
    *(undefined8 *)(lVar2 + 0x118) = uVar1;
    uVar10 = *(undefined8 *)(lVar2 + 0x80);
    uVar8 = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(lVar2 + 0x110) = uVar10;
    *(undefined8 *)(lVar2 + 0x108) = uVar8;
    uVar14 = *(undefined8 *)(lVar2 + 0x70);
    uVar12 = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(lVar2 + 0x100) = uVar14;
    *(undefined8 *)(lVar2 + 0xf8) = uVar12;
    uVar17 = *(undefined8 *)(lVar2 + 0x60);
    uVar16 = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0xf0) = uVar17;
    *(undefined8 *)(lVar2 + 0xe8) = uVar16;
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)(lVar2 + 0x90) = uVar5;
    uVar7 = *(undefined8 *)(lVar3 + 0x58);
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
    uVar11 = *(undefined8 *)(lVar3 + 0x68);
    uVar9 = *(undefined8 *)(lVar3 + 0x60);
    uVar15 = *(undefined8 *)(lVar3 + 0x78);
    uVar13 = *(undefined8 *)(lVar3 + 0x70);
    *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar3 + 0x80);
    *(undefined8 *)(lVar2 + 0xb8) = uVar11;
    *(undefined8 *)(lVar2 + 0xb0) = uVar9;
    *(undefined8 *)(lVar2 + 200) = uVar15;
    *(undefined8 *)(lVar2 + 0xc0) = uVar13;
    *(undefined8 *)(lVar2 + 0xa8) = uVar7;
    *(undefined8 *)(lVar2 + 0xa0) = uVar5;
    func_0x0001045f8ed8(lVar2 + 0xd8,lVar2 + 0x120);
    func_0x000104603c54(lVar2 + 0x90,0x113087008,&UNK_10dd18920);
    *(undefined8 *)(lVar3 + 0x68) = uVar14;
    *(undefined8 *)(lVar3 + 0x60) = uVar12;
    *(undefined8 *)(lVar3 + 0x78) = uVar10;
    *(undefined8 *)(lVar3 + 0x70) = uVar8;
    *(undefined8 *)(lVar3 + 0x80) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar6;
    *(undefined8 *)(lVar3 + 0x40) = uVar4;
    *(undefined8 *)(lVar3 + 0x58) = uVar17;
    *(undefined8 *)(lVar3 + 0x50) = uVar16;
    func_0x0001045f8f0c(lVar2 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 1045c8f34; end: 1045c904f;  */

bool FUN_1045c8f34(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_158 [72];
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x80);
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    lStack_110 = 0;
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar1 = 0x113087008;
    puVar2 = &UNK_10dd18920;
    func_0x0001045f8fa8(&lStack_80,auStack_158,0x113087008,&UNK_10dd18920);
  }
  else {
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    lStack_110 = lVar3;
    func_0x0001045f8fa8(&lStack_80,auStack_158,0x113087008,&UNK_10dd18920);
    uVar1 = 0x113087ae0;
    puVar2 = &UNK_10dd19c68;
  }
  func_0x000104603c54(&lStack_110,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 1045c9050; end: 1045c9087;  */

void FUN_1045c9050(void)

{
  long unaff_x20;
  
  func_0x000104603c54(unaff_x20 + 0x40,0x113087008,&UNK_10dd18920);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  return;
}



/* Entry: 1045c9088; end: 1045c9147;  */

byte FUN_1045c9088(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x88) & 1;
}



/* Entry: 1045c9148; end: 1045c9177;  */

undefined1  [16] FUN_1045c9148(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045c9178; end: 1045c91ab;  */

void FUN_1045c9178(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045c91ac; end: 1045c91eb;  */

undefined8 FUN_1045c91ac(void)

{
  return 0x1045c91bc;
}



/* Entry: 1045c91ec; end: 1045c924b;  */

undefined1  [16] FUN_1045c91ec(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0x10);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c924c; end: 1045c9377;  */

void FUN_1045c924c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}


