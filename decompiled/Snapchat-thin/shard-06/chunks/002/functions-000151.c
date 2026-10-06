/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045c9378; end: 1045c9487;  */

void FUN_1045c9378(long *param_1,ulong param_2)

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
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
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



/* Entry: 1045c9488; end: 1045c94cb;  */

bool FUN_1045c9488(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_38,0,0);
  return *(long *)(in_x3 + 0x18) != 0;
}



/* Entry: 1045c94cc; end: 1045c954f;  */

void FUN_1045c94cc(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045c9550; end: 1045c95af;  */

undefined1  [16] FUN_1045c9550(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x20,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0x20);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045c95b0; end: 1045c96db;  */

void FUN_1045c95b0(undefined8 param_1,undefined8 param_2)

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
  _swift_beginAccess(lVar3 + 0x20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045c96dc; end: 1045c97eb;  */

void FUN_1045c96dc(long *param_1,ulong param_2)

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
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045c97ec; end: 1045c982f;  */

bool FUN_1045c97ec(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x20,auStack_38,0,0);
  return *(long *)(in_x3 + 0x28) != 0;
}



/* Entry: 1045c9830; end: 1045c98b3;  */

void FUN_1045c9830(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045c98b4; end: 1045c98f3;  */

byte FUN_1045c98b4(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x30,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x30) & 1;
}



/* Entry: 1045c98f4; end: 1045c99f7;  */

void FUN_1045c98f4(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x30,auStack_48,1,0);
  *(byte *)(lVar2 + 0x30) = param_1 & 1;
  return;
}



/* Entry: 1045c99f8; end: 1045c9a9b;  */

void FUN_1045c99f8(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x30,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x30) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045c9a9c; end: 1045c9adf;  */

bool FUN_1045c9a9c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x30,auStack_38,0,0);
  return *(char *)(in_x3 + 0x30) != '\x02';
}



/* Entry: 1045c9ae0; end: 1045c9b5f;  */

void FUN_1045c9ae0(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x30,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x30) = 2;
  return;
}



/* Entry: 1045c9b60; end: 1045c9b9f;  */

byte FUN_1045c9b60(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x31,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x31) & 1;
}



/* Entry: 1045c9ba0; end: 1045c9ca3;  */

void FUN_1045c9ba0(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x31,auStack_48,1,0);
  *(byte *)(lVar2 + 0x31) = param_1 & 1;
  return;
}



/* Entry: 1045c9ca4; end: 1045c9d47;  */

void FUN_1045c9ca4(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x31,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x31) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045c9d48; end: 1045c9d8b;  */

bool FUN_1045c9d48(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x31,auStack_38,0,0);
  return *(char *)(in_x3 + 0x31) != '\x02';
}



/* Entry: 1045c9d8c; end: 1045c9e0b;  */

void FUN_1045c9d8c(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x31,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x31) = 2;
  return;
}



/* Entry: 1045c9e0c; end: 1045c9e4b;  */

byte FUN_1045c9e0c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x32,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x32) & 1;
}



/* Entry: 1045c9e4c; end: 1045c9f4f;  */

void FUN_1045c9e4c(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x32,auStack_48,1,0);
  *(byte *)(lVar2 + 0x32) = param_1 & 1;
  return;
}



/* Entry: 1045c9f50; end: 1045c9ff3;  */

void FUN_1045c9f50(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x32,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x32) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045c9ff4; end: 1045ca037;  */

bool FUN_1045c9ff4(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x32,auStack_38,0,0);
  return *(char *)(in_x3 + 0x32) != '\x02';
}



/* Entry: 1045ca038; end: 1045ca0b7;  */

void FUN_1045ca038(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x32,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x32) = 2;
  return;
}



/* Entry: 1045ca0b8; end: 1045ca0fb;  */

char FUN_1045ca0b8(void)

{
  char cVar1;
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x33,auStack_38,0,0);
  cVar1 = '\0';
  if (*(char *)(in_x3 + 0x33) != '\x03') {
    cVar1 = *(char *)(in_x3 + 0x33);
  }
  return cVar1;
}



/* Entry: 1045ca0fc; end: 1045ca203;  */

void FUN_1045ca0fc(undefined1 param_1)

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
  _swift_beginAccess(lVar3 + 0x33,auStack_48,1,0);
  *(undefined1 *)(lVar3 + 0x33) = param_1;
  return;
}



/* Entry: 1045ca204; end: 1045ca2ab;  */

void FUN_1045ca204(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x33,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x33) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045ca2ac; end: 1045ca2ef;  */

bool FUN_1045ca2ac(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x33,auStack_38,0,0);
  return *(char *)(in_x3 + 0x33) != '\x03';
}



/* Entry: 1045ca2f0; end: 1045ca36f;  */

void FUN_1045ca2f0(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x33,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x33) = 3;
  return;
}



/* Entry: 1045ca370; end: 1045ca3cf;  */

undefined1  [16] FUN_1045ca370(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x38,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0x40);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0x38);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045ca3d0; end: 1045ca4fb;  */

void FUN_1045ca3d0(undefined8 param_1,undefined8 param_2)

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
  _swift_beginAccess(lVar3 + 0x38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = param_1;
  *(undefined8 *)(lVar3 + 0x40) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045ca4fc; end: 1045ca60b;  */

void FUN_1045ca4fc(long *param_1,ulong param_2)

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
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x38,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x40);
    *(undefined8 *)(lVar5 + 0x38) = uVar6;
    *(undefined8 *)(lVar5 + 0x40) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x38,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x40);
    *(undefined8 *)(lVar5 + 0x38) = uVar6;
    *(undefined8 *)(lVar5 + 0x40) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045ca60c; end: 1045ca64f;  */

bool FUN_1045ca60c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x38,auStack_38,0,0);
  return *(long *)(in_x3 + 0x40) != 0;
}



/* Entry: 1045ca650; end: 1045ca6d3;  */

void FUN_1045ca650(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045ca6d4; end: 1045ca713;  */

byte FUN_1045ca6d4(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x48,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x48) & 1;
}



/* Entry: 1045ca714; end: 1045ca817;  */

void FUN_1045ca714(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x48,auStack_48,1,0);
  *(byte *)(lVar2 + 0x48) = param_1 & 1;
  return;
}



/* Entry: 1045ca818; end: 1045ca8bb;  */

void FUN_1045ca818(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x48,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045ca8bc; end: 1045ca8ff;  */

bool FUN_1045ca8bc(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x48,auStack_38,0,0);
  return *(char *)(in_x3 + 0x48) != '\x02';
}



/* Entry: 1045ca900; end: 1045ca97f;  */

void FUN_1045ca900(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x48,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x48) = 2;
  return;
}



/* Entry: 1045ca980; end: 1045ca9bf;  */

byte FUN_1045ca980(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x49,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x49) & 1;
}



/* Entry: 1045ca9c0; end: 1045caac3;  */

void FUN_1045ca9c0(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x49,auStack_48,1,0);
  *(byte *)(lVar2 + 0x49) = param_1 & 1;
  return;
}



/* Entry: 1045caac4; end: 1045cab67;  */

void FUN_1045caac4(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x49,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x49) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cab68; end: 1045cabab;  */

bool FUN_1045cab68(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x49,auStack_38,0,0);
  return *(char *)(in_x3 + 0x49) != '\x02';
}



/* Entry: 1045cabac; end: 1045cac2b;  */

void FUN_1045cabac(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x49,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x49) = 2;
  return;
}



/* Entry: 1045cac2c; end: 1045cac6b;  */

byte FUN_1045cac2c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4a,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x4a) & 1;
}



/* Entry: 1045cac6c; end: 1045cad6f;  */

void FUN_1045cac6c(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4a,auStack_48,1,0);
  *(byte *)(lVar2 + 0x4a) = param_1 & 1;
  return;
}



/* Entry: 1045cad70; end: 1045cae13;  */

void FUN_1045cad70(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x4a,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x4a) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cae14; end: 1045cae57;  */

bool FUN_1045cae14(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4a,auStack_38,0,0);
  return *(char *)(in_x3 + 0x4a) != '\x02';
}



/* Entry: 1045cae58; end: 1045caed7;  */

void FUN_1045cae58(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4a,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x4a) = 2;
  return;
}



/* Entry: 1045caed8; end: 1045caf17;  */

byte FUN_1045caed8(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4b,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x4b) & 1;
}



/* Entry: 1045caf18; end: 1045cb01b;  */

void FUN_1045caf18(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4b,auStack_48,1,0);
  *(byte *)(lVar2 + 0x4b) = param_1 & 1;
  return;
}



/* Entry: 1045cb01c; end: 1045cb0bf;  */

void FUN_1045cb01c(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x4b,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x4b) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cb0c0; end: 1045cb103;  */

bool FUN_1045cb0c0(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4b,auStack_38,0,0);
  return *(char *)(in_x3 + 0x4b) != '\x02';
}



/* Entry: 1045cb104; end: 1045cb183;  */

void FUN_1045cb104(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4b,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x4b) = 2;
  return;
}



/* Entry: 1045cb184; end: 1045cb1cf;  */

byte FUN_1045cb184(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4c,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x4c) == 2 | *(byte *)(in_x3 + 0x4c) & 1;
}



/* Entry: 1045cb1d0; end: 1045cb2df;  */

void FUN_1045cb1d0(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4c,auStack_48,1,0);
  *(byte *)(lVar2 + 0x4c) = param_1 & 1;
  return;
}



/* Entry: 1045cb2e0; end: 1045cb383;  */

void FUN_1045cb2e0(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar1 = *(undefined1 *)(lVar4 + 0x50);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x4c,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x4c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cb384; end: 1045cb3c7;  */

bool FUN_1045cb384(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4c,auStack_38,0,0);
  return *(char *)(in_x3 + 0x4c) != '\x02';
}



/* Entry: 1045cb3c8; end: 1045cb447;  */

void FUN_1045cb3c8(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4c,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x4c) = 2;
  return;
}



/* Entry: 1045cb448; end: 1045cb4a7;  */

undefined1  [16] FUN_1045cb448(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x50,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0x58);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0x50);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045cb4a8; end: 1045cb5d3;  */

void FUN_1045cb4a8(undefined8 param_1,undefined8 param_2)

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
  _swift_beginAccess(lVar3 + 0x50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar3 + 0x50) = param_1;
  *(undefined8 *)(lVar3 + 0x58) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cb5d4; end: 1045cb6e3;  */

void FUN_1045cb5d4(long *param_1,ulong param_2)

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
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x50,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)(lVar5 + 0x50) = uVar6;
    *(undefined8 *)(lVar5 + 0x58) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x50,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)(lVar5 + 0x50) = uVar6;
    *(undefined8 *)(lVar5 + 0x58) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cb6e4; end: 1045cb727;  */

bool FUN_1045cb6e4(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x50,auStack_38,0,0);
  return *(long *)(in_x3 + 0x58) != 0;
}



/* Entry: 1045cb728; end: 1045cb7ab;  */

void FUN_1045cb728(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cb7ac; end: 1045cb80b;  */

undefined1  [16] FUN_1045cb7ac(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x60,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0x68);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0x60);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045cb80c; end: 1045cb937;  */

void FUN_1045cb80c(undefined8 param_1,undefined8 param_2)

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
  _swift_beginAccess(lVar3 + 0x60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x60) = param_1;
  *(undefined8 *)(lVar3 + 0x68) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cb938; end: 1045cba47;  */

void FUN_1045cb938(long *param_1,ulong param_2)

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
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x60,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar5 + 0x60) = uVar6;
    *(undefined8 *)(lVar5 + 0x68) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x60,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar5 + 0x60) = uVar6;
    *(undefined8 *)(lVar5 + 0x68) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cba48; end: 1045cba8b;  */

bool FUN_1045cba48(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x60,auStack_38,0,0);
  return *(long *)(in_x3 + 0x68) != 0;
}



/* Entry: 1045cba8c; end: 1045cbb0f;  */

void FUN_1045cba8c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cbb10; end: 1045cbb6f;  */

undefined1  [16] FUN_1045cbb10(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x70,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0x78);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0x70);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045cbb70; end: 1045cbc9b;  */

void FUN_1045cbb70(undefined8 param_1,undefined8 param_2)

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
  _swift_beginAccess(lVar3 + 0x70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0x70) = param_1;
  *(undefined8 *)(lVar3 + 0x78) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cbc9c; end: 1045cbdab;  */

void FUN_1045cbc9c(long *param_1,ulong param_2)

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
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x70,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x78);
    *(undefined8 *)(lVar5 + 0x70) = uVar6;
    *(undefined8 *)(lVar5 + 0x78) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x70,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x78);
    *(undefined8 *)(lVar5 + 0x70) = uVar6;
    *(undefined8 *)(lVar5 + 0x78) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cbdac; end: 1045cbdef;  */

bool FUN_1045cbdac(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x70,auStack_38,0,0);
  return *(long *)(in_x3 + 0x78) != 0;
}



/* Entry: 1045cbdf0; end: 1045cbe73;  */

void FUN_1045cbdf0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cbe74; end: 1045cbed3;  */

undefined1  [16] FUN_1045cbe74(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x80,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0x88);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0x80);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045cbed4; end: 1045cbfff;  */

void FUN_1045cbed4(undefined8 param_1,undefined8 param_2)

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
  _swift_beginAccess(lVar3 + 0x80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar3 + 0x80) = param_1;
  *(undefined8 *)(lVar3 + 0x88) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cc000; end: 1045cc10f;  */

void FUN_1045cc000(long *param_1,ulong param_2)

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
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x80,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x88);
    *(undefined8 *)(lVar5 + 0x80) = uVar6;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x80,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x88);
    *(undefined8 *)(lVar5 + 0x80) = uVar6;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cc110; end: 1045cc153;  */

bool FUN_1045cc110(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x80,auStack_38,0,0);
  return *(long *)(in_x3 + 0x88) != 0;
}



/* Entry: 1045cc154; end: 1045cc1d7;  */

void FUN_1045cc154(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cc1d8; end: 1045cc237;  */

undefined1  [16] FUN_1045cc1d8(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x90,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0x98);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0x90);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045cc238; end: 1045cc363;  */

void FUN_1045cc238(undefined8 param_1,undefined8 param_2)

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
  _swift_beginAccess(lVar3 + 0x90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = param_1;
  *(undefined8 *)(lVar3 + 0x98) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cc364; end: 1045cc473;  */

void FUN_1045cc364(long *param_1,ulong param_2)

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
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x90,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x98);
    *(undefined8 *)(lVar5 + 0x90) = uVar6;
    *(undefined8 *)(lVar5 + 0x98) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x90,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x98);
    *(undefined8 *)(lVar5 + 0x90) = uVar6;
    *(undefined8 *)(lVar5 + 0x98) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cc474; end: 1045cc4b7;  */

bool FUN_1045cc474(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x90,auStack_38,0,0);
  return *(long *)(in_x3 + 0x98) != 0;
}



/* Entry: 1045cc4b8; end: 1045cc53b;  */

void FUN_1045cc4b8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 *)(lVar3 + 0x98) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cc53c; end: 1045cc59b;  */

undefined1  [16] FUN_1045cc53c(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0xa0,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0xa8);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0xa0);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045cc59c; end: 1045cc6c7;  */

void FUN_1045cc59c(undefined8 param_1,undefined8 param_2)

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
  _swift_beginAccess(lVar3 + 0xa0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xa8);
  *(undefined8 *)(lVar3 + 0xa0) = param_1;
  *(undefined8 *)(lVar3 + 0xa8) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cc6c8; end: 1045cc7d7;  */

void FUN_1045cc6c8(long *param_1,ulong param_2)

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
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0xa0,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0xa8);
    *(undefined8 *)(lVar5 + 0xa0) = uVar6;
    *(undefined8 *)(lVar5 + 0xa8) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0xa0,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0xa8);
    *(undefined8 *)(lVar5 + 0xa0) = uVar6;
    *(undefined8 *)(lVar5 + 0xa8) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045cc7d8; end: 1045cc81b;  */

bool FUN_1045cc7d8(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0xa0,auStack_38,0,0);
  return *(long *)(in_x3 + 0xa8) != 0;
}



/* Entry: 1045cc81c; end: 1045cc89f;  */

void FUN_1045cc81c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0xa0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xa8);
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cc8a0; end: 1045cc8ff;  */

undefined1  [16] FUN_1045cc8a0(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0xb0,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0xb0);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045cc900; end: 1045cca2b;  */

void FUN_1045cc900(undefined8 param_1,undefined8 param_2)

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
  _swift_beginAccess(lVar3 + 0xb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0xb0) = param_1;
  *(undefined8 *)(lVar3 + 0xb8) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cca2c; end: 1045ccb3b;  */

void FUN_1045cca2c(long *param_1,ulong param_2)

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
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0xb0,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0xb8);
    *(undefined8 *)(lVar5 + 0xb0) = uVar6;
    *(undefined8 *)(lVar5 + 0xb8) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0xb0,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0xb8);
    *(undefined8 *)(lVar5 + 0xb0) = uVar6;
    *(undefined8 *)(lVar5 + 0xb8) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1045ccb3c; end: 1045ccb7f;  */

bool FUN_1045ccb3c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0xb0,auStack_38,0,0);
  return *(long *)(in_x3 + 0xb8) != 0;
}



/* Entry: 1045ccb80; end: 1045ccd17;  */

void FUN_1045ccb80(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0xb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  *(undefined8 *)(lVar3 + 0xb8) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045ccd18; end: 1045ccdbf;  */

void FUN_1045ccd18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_1045f8f38(0);
    _swift_allocObject();
    FUN_1045e19c8(lVar6,uVar5);
    *(long *)(unaff_x20 + 0x18) = lVar6;
  }
  _swift_beginAccess(lVar6 + 0xc0,auStack_58,1,0);
  uVar5 = *(undefined8 *)(lVar6 + 0xc0);
  uVar2 = *(undefined8 *)(lVar6 + 200);
  uVar1 = *(undefined8 *)(lVar6 + 0xd0);
  uVar3 = *(undefined8 *)(lVar6 + 0xd8);
  *(undefined8 *)(lVar6 + 0xc0) = param_1;
  *(undefined8 *)(lVar6 + 200) = param_2;
  *(undefined8 *)(lVar6 + 0xd0) = param_3;
  *(undefined8 *)(lVar6 + 0xd8) = param_4;
  func_0x00010458a4f4(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 1045ccdc0; end: 1045cd147;  */

undefined1  [16] FUN_1045ccdc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x80;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x80,0x84b6);
  }
  *param_1 = puVar7;
  puVar7[0xf] = unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar13 + 0xc0,puVar7 + 0xc,0,0);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = *(undefined **)(lVar13 + 0xd0);
  uVar5 = *(undefined8 *)(lVar13 + 0xd8);
  bVar6 = puVar4 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(lVar13 + 0xc0);
  }
  uVar2 = 0xc000000000000000;
  if (bVar6) {
    uVar2 = *(undefined8 *)(lVar13 + 200);
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  if (bVar6) {
    puVar3 = puVar4;
  }
  puVar7[2] = puVar3;
  uVar9 = 4;
  if (bVar6) {
    uVar9 = (undefined1)uVar5;
  }
  uVar8 = 3;
  uVar10 = uVar8;
  if (bVar6) {
    uVar10 = (undefined1)((ulong)uVar5 >> 8);
  }
  *(undefined1 *)(puVar7 + 3) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x19) = uVar10;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x10);
  }
  uVar9 = 3;
  uVar10 = uVar9;
  uVar12 = uVar9;
  uVar11 = uVar9;
  if (puVar4 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar5 >> 0x18);
    uVar12 = (undefined1)((ulong)uVar5 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar5 >> 0x28);
    uVar9 = (undefined1)((ulong)uVar5 >> 0x30);
  }
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar11;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar12;
  uVar8 = 5;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar8;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = 0x1045cced4;
  return auVar14;
}



/* Entry: 1045cd148; end: 1045cd187;  */

void FUN_1045cd148(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0xe0,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(in_x3 + 0xe0));
  return;
}



/* Entry: 1045cd188; end: 1045cd297;  */

void FUN_1045cd188(undefined8 param_1)

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
  _swift_beginAccess(lVar3 + 0xe0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xe0);
  *(undefined8 *)(lVar3 + 0xe0) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045cd298; end: 1045cd3a7;  */

void FUN_1045cd298(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)(lVar3 + 0x50);
      uVar2 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0xe0,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0xe0);
    *(undefined8 *)(lVar4 + 0xe0) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)(lVar3 + 0x50);
      uVar2 = 0;
      FUN_1045f8f38(0);
      _swift_allocObject();
      FUN_1045e19c8(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0xe0,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0xe0);
    *(undefined8 *)(lVar4 + 0xe0) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1045cd3a8; end: 1045cd3d3;  */

undefined1  [16] FUN_1045cd3a8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1045cd3d4; end: 1045cd40f;  */

undefined8 FUN_1045cd3d4(void)

{
  return 0x1045cd3e4;
}


