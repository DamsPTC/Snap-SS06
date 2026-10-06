/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00157534; end: 001575b7;  */

void FUN_00157534(void)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 001575b8; end: 001575f7;  */

byte FUN_001575b8(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x30,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x30) & 1;
}



/* Entry: 001575f8; end: 001576fb;  */

void FUN_001575f8(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x30,auStack_48,1,0);
  *(byte *)(lVar2 + 0x30) = param_1 & 1;
  return;
}



/* Entry: 001576fc; end: 0015779f;  */

void FUN_001576fc(long *param_1,ulong param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x30,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x30) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 001577a0; end: 001577e3;  */

bool FUN_001577a0(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x30,auStack_38,0,0);
  return *(char *)(in_x3 + 0x30) != '\x02';
}



/* Entry: 001577e4; end: 00157863;  */

void FUN_001577e4(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x30,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x30) = 2;
  return;
}



/* Entry: 00157864; end: 001578a3;  */

byte FUN_00157864(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x31,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x31) & 1;
}



/* Entry: 001578a4; end: 001579a7;  */

void FUN_001578a4(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x31,auStack_48,1,0);
  *(byte *)(lVar2 + 0x31) = param_1 & 1;
  return;
}



/* Entry: 001579a8; end: 00157a4b;  */

void FUN_001579a8(long *param_1,ulong param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x31,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x31) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00157a4c; end: 00157a8f;  */

bool FUN_00157a4c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x31,auStack_38,0,0);
  return *(char *)(in_x3 + 0x31) != '\x02';
}



/* Entry: 00157a90; end: 00157b0f;  */

void FUN_00157a90(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x31,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x31) = 2;
  return;
}



/* Entry: 00157b10; end: 00157b4f;  */

byte FUN_00157b10(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x32,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x32) & 1;
}



/* Entry: 00157b50; end: 00157c53;  */

void FUN_00157b50(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x32,auStack_48,1,0);
  *(byte *)(lVar2 + 0x32) = param_1 & 1;
  return;
}



/* Entry: 00157c54; end: 00157cf7;  */

void FUN_00157c54(long *param_1,ulong param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x32,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x32) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00157cf8; end: 00157d3b;  */

bool FUN_00157cf8(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x32,auStack_38,0,0);
  return *(char *)(in_x3 + 0x32) != '\x02';
}



/* Entry: 00157d3c; end: 00157dbb;  */

void FUN_00157d3c(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x32,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x32) = 2;
  return;
}



/* Entry: 00157dbc; end: 00157dff;  */

char FUN_00157dbc(void)

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



/* Entry: 00157e00; end: 00157f07;  */

void FUN_00157e00(undefined1 param_1)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x33,auStack_48,1,0);
  *(undefined1 *)(lVar3 + 0x33) = param_1;
  return;
}



/* Entry: 00157f08; end: 00157faf;  */

void FUN_00157f08(long *param_1,ulong param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x33,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x33) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00157fb0; end: 00157ff3;  */

bool FUN_00157fb0(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x33,auStack_38,0,0);
  return *(char *)(in_x3 + 0x33) != '\x03';
}



/* Entry: 00157ff4; end: 00158073;  */

void FUN_00157ff4(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x33,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x33) = 3;
  return;
}



/* Entry: 00158074; end: 001580d3;  */

undefined1  [16] FUN_00158074(void)

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



/* Entry: 001580d4; end: 001581ff;  */

void FUN_001580d4(undefined8 param_1,undefined8 param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = param_1;
  *(undefined8 *)(lVar3 + 0x40) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 00158200; end: 0015830f;  */

void FUN_00158200(long *param_1,ulong param_2)

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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00158310; end: 00158353;  */

bool FUN_00158310(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x38,auStack_38,0,0);
  return *(long *)(in_x3 + 0x40) != 0;
}



/* Entry: 00158354; end: 001583d7;  */

void FUN_00158354(void)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 001583d8; end: 00158417;  */

byte FUN_001583d8(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x48,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x48) & 1;
}



/* Entry: 00158418; end: 0015851b;  */

void FUN_00158418(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x48,auStack_48,1,0);
  *(byte *)(lVar2 + 0x48) = param_1 & 1;
  return;
}



/* Entry: 0015851c; end: 001585bf;  */

void FUN_0015851c(long *param_1,ulong param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x48,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 001585c0; end: 00158603;  */

bool FUN_001585c0(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x48,auStack_38,0,0);
  return *(char *)(in_x3 + 0x48) != '\x02';
}



/* Entry: 00158604; end: 00158683;  */

void FUN_00158604(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x48,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x48) = 2;
  return;
}



/* Entry: 00158684; end: 001586c3;  */

byte FUN_00158684(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x49,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x49) & 1;
}



/* Entry: 001586c4; end: 001587c7;  */

void FUN_001586c4(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x49,auStack_48,1,0);
  *(byte *)(lVar2 + 0x49) = param_1 & 1;
  return;
}



/* Entry: 001587c8; end: 0015886b;  */

void FUN_001587c8(long *param_1,ulong param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x49,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x49) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015886c; end: 001588af;  */

bool FUN_0015886c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x49,auStack_38,0,0);
  return *(char *)(in_x3 + 0x49) != '\x02';
}



/* Entry: 001588b0; end: 0015892f;  */

void FUN_001588b0(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x49,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x49) = 2;
  return;
}



/* Entry: 00158930; end: 0015896f;  */

byte FUN_00158930(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4a,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x4a) & 1;
}



/* Entry: 00158970; end: 00158a73;  */

void FUN_00158970(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4a,auStack_48,1,0);
  *(byte *)(lVar2 + 0x4a) = param_1 & 1;
  return;
}



/* Entry: 00158a74; end: 00158b17;  */

void FUN_00158a74(long *param_1,ulong param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x4a,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x4a) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00158b18; end: 00158b5b;  */

bool FUN_00158b18(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4a,auStack_38,0,0);
  return *(char *)(in_x3 + 0x4a) != '\x02';
}



/* Entry: 00158b5c; end: 00158bdb;  */

void FUN_00158b5c(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4a,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x4a) = 2;
  return;
}



/* Entry: 00158bdc; end: 00158c1b;  */

byte FUN_00158bdc(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4b,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x4b) & 1;
}



/* Entry: 00158c1c; end: 00158d1f;  */

void FUN_00158c1c(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4b,auStack_48,1,0);
  *(byte *)(lVar2 + 0x4b) = param_1 & 1;
  return;
}



/* Entry: 00158d20; end: 00158dc3;  */

void FUN_00158d20(long *param_1,ulong param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x4b,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x4b) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00158dc4; end: 00158e07;  */

bool FUN_00158dc4(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4b,auStack_38,0,0);
  return *(char *)(in_x3 + 0x4b) != '\x02';
}



/* Entry: 00158e08; end: 00158e87;  */

void FUN_00158e08(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4b,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x4b) = 2;
  return;
}



/* Entry: 00158e88; end: 00158ed3;  */

byte FUN_00158e88(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4c,auStack_38,0,0);
  return *(byte *)(in_x3 + 0x4c) == 2 | *(byte *)(in_x3 + 0x4c) & 1;
}



/* Entry: 00158ed4; end: 00158fe3;  */

void FUN_00158ed4(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4c,auStack_48,1,0);
  *(byte *)(lVar2 + 0x4c) = param_1 & 1;
  return;
}



/* Entry: 00158fe4; end: 00159087;  */

void FUN_00158fe4(long *param_1,ulong param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar5,uVar3);
    *(long *)(lVar6 + 0x18) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x4c,lVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x4c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00159088; end: 001590cb;  */

bool FUN_00159088(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x4c,auStack_38,0,0);
  return *(char *)(in_x3 + 0x4c) != '\x02';
}



/* Entry: 001590cc; end: 0015914b;  */

void FUN_001590cc(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x4c,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x4c) = 2;
  return;
}



/* Entry: 0015914c; end: 001591ab;  */

undefined1  [16] FUN_0015914c(void)

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



/* Entry: 001591ac; end: 001592d7;  */

void FUN_001591ac(undefined8 param_1,undefined8 param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar3 + 0x50) = param_1;
  *(undefined8 *)(lVar3 + 0x58) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 001592d8; end: 001593e7;  */

void FUN_001592d8(long *param_1,ulong param_2)

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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 001593e8; end: 0015942b;  */

bool FUN_001593e8(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x50,auStack_38,0,0);
  return *(long *)(in_x3 + 0x58) != 0;
}



/* Entry: 0015942c; end: 001594af;  */

void FUN_0015942c(void)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 001594b0; end: 0015950f;  */

undefined1  [16] FUN_001594b0(void)

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



/* Entry: 00159510; end: 0015963b;  */

void FUN_00159510(undefined8 param_1,undefined8 param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x60) = param_1;
  *(undefined8 *)(lVar3 + 0x68) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015963c; end: 0015974b;  */

void FUN_0015963c(long *param_1,ulong param_2)

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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015974c; end: 0015978f;  */

bool FUN_0015974c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x60,auStack_38,0,0);
  return *(long *)(in_x3 + 0x68) != 0;
}



/* Entry: 00159790; end: 00159813;  */

void FUN_00159790(void)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 00159814; end: 00159873;  */

undefined1  [16] FUN_00159814(void)

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



/* Entry: 00159874; end: 0015999f;  */

void FUN_00159874(undefined8 param_1,undefined8 param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0x70) = param_1;
  *(undefined8 *)(lVar3 + 0x78) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 001599a0; end: 00159aaf;  */

void FUN_001599a0(long *param_1,ulong param_2)

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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00159ab0; end: 00159af3;  */

bool FUN_00159ab0(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x70,auStack_38,0,0);
  return *(long *)(in_x3 + 0x78) != 0;
}



/* Entry: 00159af4; end: 00159b77;  */

void FUN_00159af4(void)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 00159b78; end: 00159bd7;  */

undefined1  [16] FUN_00159b78(void)

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



/* Entry: 00159bd8; end: 00159d03;  */

void FUN_00159bd8(undefined8 param_1,undefined8 param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar3 + 0x80) = param_1;
  *(undefined8 *)(lVar3 + 0x88) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 00159d04; end: 00159e13;  */

void FUN_00159d04(long *param_1,ulong param_2)

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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00159e14; end: 00159e57;  */

bool FUN_00159e14(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x80,auStack_38,0,0);
  return *(long *)(in_x3 + 0x88) != 0;
}



/* Entry: 00159e58; end: 00159edb;  */

void FUN_00159e58(void)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 00159edc; end: 00159f3b;  */

undefined1  [16] FUN_00159edc(void)

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



/* Entry: 00159f3c; end: 0015a067;  */

void FUN_00159f3c(undefined8 param_1,undefined8 param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = param_1;
  *(undefined8 *)(lVar3 + 0x98) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015a068; end: 0015a177;  */

void FUN_0015a068(long *param_1,ulong param_2)

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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015a178; end: 0015a1bb;  */

bool FUN_0015a178(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x90,auStack_38,0,0);
  return *(long *)(in_x3 + 0x98) != 0;
}



/* Entry: 0015a1bc; end: 0015a23f;  */

void FUN_0015a1bc(void)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 *)(lVar3 + 0x98) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015a240; end: 0015a29f;  */

undefined1  [16] FUN_0015a240(void)

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



/* Entry: 0015a2a0; end: 0015a3cb;  */

void FUN_0015a2a0(undefined8 param_1,undefined8 param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0xa0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xa8);
  *(undefined8 *)(lVar3 + 0xa0) = param_1;
  *(undefined8 *)(lVar3 + 0xa8) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015a3cc; end: 0015a4db;  */

void FUN_0015a3cc(long *param_1,ulong param_2)

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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015a4dc; end: 0015a51f;  */

bool FUN_0015a4dc(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0xa0,auStack_38,0,0);
  return *(long *)(in_x3 + 0xa8) != 0;
}



/* Entry: 0015a520; end: 0015a5a3;  */

void FUN_0015a520(void)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0xa0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xa8);
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015a5a4; end: 0015a603;  */

undefined1  [16] FUN_0015a5a4(void)

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



/* Entry: 0015a604; end: 0015a72f;  */

void FUN_0015a604(undefined8 param_1,undefined8 param_2)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0xb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0xb0) = param_1;
  *(undefined8 *)(lVar3 + 0xb8) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015a730; end: 0015a83f;  */

void FUN_0015a730(long *param_1,ulong param_2)

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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015a840; end: 0015a883;  */

bool FUN_0015a840(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0xb0,auStack_38,0,0);
  return *(long *)(in_x3 + 0xb8) != 0;
}



/* Entry: 0015a884; end: 0015aa1b;  */

void FUN_0015a884(void)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0xb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  *(undefined8 *)(lVar3 + 0xb8) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015aa1c; end: 0015aac3;  */

void FUN_0015aa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar6,uVar5);
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
  FUN_00116294(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 0015aac4; end: 0015ae4b;  */

undefined1  [16] FUN_0015aac4(undefined8 *param_1)

{
  undefined8 uVar1;
  qword qVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  char *pcVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  
  pcVar7 = section_00000068.segname + 8;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x80,&UNK_000084b6);
  }
  *param_1 = pcVar7;
  *(long *)(pcVar7 + 0x78) = unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar13 + 0xc0,pcVar7 + 0x60,0,0);
  puVar3 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puVar4 = *(undefined **)(lVar13 + 0xd0);
  uVar5 = *(undefined8 *)(lVar13 + 0xd8);
  bVar6 = puVar4 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(lVar13 + 0xc0);
  }
  qVar2 = 0xc000000000000000;
  if (bVar6) {
    qVar2 = *(qword *)(lVar13 + 200);
  }
  *(undefined8 *)pcVar7 = uVar1;
  *(qword *)(pcVar7 + 8) = qVar2;
  if (bVar6) {
    puVar3 = puVar4;
  }
  *(undefined **)(pcVar7 + 0x10) = puVar3;
  uVar9 = 4;
  if (bVar6) {
    uVar9 = (undefined1)uVar5;
  }
  uVar8 = 3;
  uVar10 = uVar8;
  if (bVar6) {
    uVar10 = (undefined1)((ulong)uVar5 >> 8);
  }
  pcVar7[0x18] = uVar9;
  pcVar7[0x19] = uVar10;
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
  pcVar7[0x1a] = uVar8;
  pcVar7[0x1b] = uVar11;
  pcVar7[0x1c] = uVar12;
  uVar8 = 5;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x38);
  }
  pcVar7[0x1d] = uVar10;
  pcVar7[0x1e] = uVar9;
  pcVar7[0x1f] = uVar8;
  func_0x001869f8();
  auVar14._8_8_ = pcVar7;
  auVar14._0_8_ = 0x15abd8;
  return auVar14;
}



/* Entry: 0015ae4c; end: 0015ae8b;  */

void FUN_0015ae4c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0xe0,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(in_x3 + 0xe0));
  return;
}



/* Entry: 0015ae8c; end: 0015af9b;  */

void FUN_0015ae8c(undefined8 param_1)

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
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0xe0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xe0);
  *(undefined8 *)(lVar3 + 0xe0) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015af9c; end: 0015b0ab;  */

void FUN_0015af9c(long *param_1,ulong param_2)

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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar4,uVar2);
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
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0xe0,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0xe0);
    *(undefined8 *)(lVar4 + 0xe0) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 0015b0ac; end: 0015b0d7;  */

undefined1  [16] FUN_0015b0ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00023304();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 0015b0d8; end: 0015b113;  */

undefined8 FUN_0015b0d8(void)

{
  return 0x15b0e8;
}



/* Entry: 0015b114; end: 0015b13f;  */

void FUN_0015b114(void)

{
  func_0x000115a8(0xaf09b8,&UNK_007db000);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 0015b140; end: 0015b14f;  */

long FUN_0015b140(ulong param_1)

{
  return (param_1 & 0xff) + 1;
}



/* Entry: 0015b150; end: 0015b1bf;  */

void FUN_0015b150(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF((ulong)bVar1 + 1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0015b1c0; end: 0015b1c3;  */

void FUN_0015b1c0(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF((ulong)bVar1 + 1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0015b1c4; end: 0015b203;  */

void FUN_0015b1c4(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF((ulong)bVar1 + 1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0015b204; end: 0015b26b;  */

void FUN_0015b204(undefined1 *param_1,ulong *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(0x2010003 >> (ulong)(((uint)*param_2 & 3) << 3));
  if (3 < *param_2) {
    uVar1 = 3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 0015b26c; end: 0015b2ab;  */

void FUN_0015b26c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf09b8;
  func_0x000115a8(0xaf09b8,&UNK_007db000);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}


