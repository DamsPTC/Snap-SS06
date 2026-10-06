/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10815d90c; end: 10815d967;  */

void FUN_10815d90c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      func_0x00010815f2a8();
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10815d968; end: 10815d99f;  */

void FUN_10815d968(void)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010815f26c();
  if (extraout_x8 != 0) {
    func_0x00010815f098();
    do {
      FUN_10815d9a0();
      func_0x00010815f1f4();
    } while (unaff_x21 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(unaff_x19 + -0x10);
  return;
}



/* Entry: 10815d9a0; end: 10815d9eb;  */

void FUN_10815d9a0(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010815f144();
    func_0x00010815d9cc();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10815d9ec; end: 10815da1b;  */

long FUN_10815d9ec(long param_1)

{
  FUN_10815da1c();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  return param_1;
}



/* Entry: 10815da1c; end: 10815da87;  */

void FUN_10815da1c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      func_0x00010815f2a8();
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10815da88; end: 10815da93;  */

void FUN_10815da88(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  
  uVar2 = param_3 - param_2 >> 2;
  uVar3 = uVar2;
  func_0x00010815ef94();
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 2) < uVar3) {
    func_0x000107471510();
    func_0x0001073b5434();
    func_0x0001050929a4();
    lVar4 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar5 - lVar4 >> 2) < uVar2) {
      lVar1 = unaff_x20 + (lVar5 - lVar4);
      if (lVar5 != lVar4) {
        _memmove(lVar4);
        lVar5 = *(long *)(unaff_x19 + 8);
      }
      lVar4 = unaff_x21 - lVar1;
      if (lVar4 != 0) {
        _memmove(lVar5,lVar1,lVar4);
      }
      lVar4 = lVar5 + lVar4;
      goto LAB_10815db54;
    }
  }
  if (unaff_x21 - unaff_x20 != 0) {
    _memmove(lVar4);
  }
  lVar4 = lVar4 + (unaff_x21 - unaff_x20);
LAB_10815db54:
  *(long *)(unaff_x19 + 8) = lVar4;
  return;
}



/* Entry: 10815da94; end: 10815db6b;  */

void FUN_10815da94(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long lVar4;
  
  uVar2 = param_4;
  func_0x00010815ef94();
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 2) < uVar2) {
    func_0x000107471510();
    func_0x0001073b5434();
    func_0x0001050929a4();
    lVar3 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar4 - lVar3 >> 2) < param_4) {
      lVar1 = unaff_x20 + (lVar4 - lVar3);
      if (lVar4 != lVar3) {
        _memmove(lVar3);
        lVar4 = *(long *)(unaff_x19 + 8);
      }
      lVar3 = unaff_x21 - lVar1;
      if (lVar3 != 0) {
        _memmove(lVar4,lVar1,lVar3);
      }
      lVar3 = lVar4 + lVar3;
      goto LAB_10815db54;
    }
  }
  if (unaff_x21 - unaff_x20 != 0) {
    _memmove(lVar3);
  }
  lVar3 = lVar3 + (unaff_x21 - unaff_x20);
LAB_10815db54:
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 10815db6c; end: 10815dbb7;  */

long * FUN_10815db6c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10815dbb8; end: 10815dbe7;  */

long FUN_10815dbb8(long param_1)

{
  FUN_10815dbe8();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  return param_1;
}



/* Entry: 10815dbe8; end: 10815dc1f;  */

void FUN_10815dbe8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_1083a3c7c();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10815dc20; end: 10815dc73;  */

undefined8 FUN_10815dc20(ulong param_1)

{
  int extraout_w9;
  int unaff_w21;
  undefined8 unaff_x22;
  int unaff_w25;
  
  func_0x00010815f2b0();
  func_0x00010815f0e8();
  FUN_10815dc74();
  func_0x00010815ee3c();
  while( true ) {
    if ((unaff_w25 == 0) || (func_0x00010815ef5c(), extraout_w9 == 0)) {
      return 0;
    }
    if ((unaff_w21 == extraout_w9) && (func_0x00010815ee98(), (param_1 & 1) != 0)) break;
    func_0x00010815ee0c();
  }
  return unaff_x22;
}



/* Entry: 10815dc74; end: 10815dca3;  */

void FUN_10815dc74(void)

{
  func_0x00010815dc8c();
  func_0x00010815f1e8();
  return;
}



/* Entry: 10815dca4; end: 10815dcf7;  */

undefined8 FUN_10815dca4(ulong param_1)

{
  int extraout_w9;
  int unaff_w21;
  undefined8 unaff_x22;
  int unaff_w25;
  
  func_0x00010815f2b0();
  func_0x00010815f0e8();
  FUN_10815dcf8();
  func_0x00010815ee3c();
  while( true ) {
    if ((unaff_w25 == 0) || (func_0x00010815ef5c(), extraout_w9 == 0)) {
      return 0;
    }
    if ((unaff_w21 == extraout_w9) && (func_0x00010815ee98(), (param_1 & 1) != 0)) break;
    func_0x00010815ee0c();
  }
  return unaff_x22;
}



/* Entry: 10815dcf8; end: 10815dd27;  */

void FUN_10815dcf8(void)

{
  func_0x00010815dd10();
  func_0x00010815f1e8();
  return;
}



/* Entry: 10815dd28; end: 10815dd7b;  */

undefined8 FUN_10815dd28(ulong param_1)

{
  int extraout_w9;
  int unaff_w21;
  undefined8 unaff_x22;
  int unaff_w25;
  
  func_0x00010815f2b0();
  func_0x00010815f0e8();
  FUN_10815dd7c();
  func_0x00010815ee3c();
  while( true ) {
    if ((unaff_w25 == 0) || (func_0x00010815ef5c(), extraout_w9 == 0)) {
      return 0;
    }
    if ((unaff_w21 == extraout_w9) && (func_0x00010815ee98(), (param_1 & 1) != 0)) break;
    func_0x00010815ee0c();
  }
  return unaff_x22;
}



/* Entry: 10815dd7c; end: 10815ddab;  */

void FUN_10815dd7c(void)

{
  func_0x00010815dd94();
  func_0x00010815f1e8();
  return;
}



/* Entry: 10815ddac; end: 10815ddff;  */

undefined8 FUN_10815ddac(ulong param_1)

{
  int extraout_w9;
  int unaff_w21;
  undefined8 unaff_x22;
  int unaff_w25;
  
  func_0x00010815f2b0();
  func_0x00010815f0e8();
  FUN_10815de00();
  func_0x00010815ee3c();
  while( true ) {
    if ((unaff_w25 == 0) || (func_0x00010815ef5c(), extraout_w9 == 0)) {
      return 0;
    }
    if ((unaff_w21 == extraout_w9) && (func_0x00010815ee98(), (param_1 & 1) != 0)) break;
    func_0x00010815ee0c();
  }
  return unaff_x22;
}



/* Entry: 10815de00; end: 10815de2f;  */

void FUN_10815de00(void)

{
  func_0x00010815de18();
  func_0x00010815f1e8();
  return;
}



/* Entry: 10815de30; end: 10815de83;  */

undefined8 FUN_10815de30(ulong param_1)

{
  int extraout_w9;
  int unaff_w21;
  undefined8 unaff_x22;
  int unaff_w25;
  
  func_0x00010815f2b0();
  func_0x00010815f0e8();
  FUN_10815de84();
  func_0x00010815ee3c();
  while( true ) {
    if ((unaff_w25 == 0) || (func_0x00010815ef5c(), extraout_w9 == 0)) {
      return 0;
    }
    if ((unaff_w21 == extraout_w9) && (func_0x00010815ee98(), (param_1 & 1) != 0)) break;
    func_0x00010815ee0c();
  }
  return unaff_x22;
}



/* Entry: 10815de84; end: 10815deb3;  */

void FUN_10815de84(void)

{
  func_0x00010815de9c();
  func_0x00010815f1e8();
  return;
}



/* Entry: 10815deb4; end: 10815def3;  */

long FUN_10815deb4(void)

{
  long unaff_x19;
  
  func_0x00010815f034();
  FUN_10815e0e0();
  func_0x00010815f254();
  FUN_10815def4();
  func_0x00010815f034();
  func_0x00010815d9cc();
  return unaff_x19 + 8;
}



/* Entry: 10815def4; end: 10815df27;  */

undefined8 FUN_10815def4(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint extraout_w8;
  int extraout_w8_00;
  uint extraout_w9;
  int unaff_w21;
  undefined8 unaff_x23;
  int unaff_w26;
  
  func_0x00010815ee54();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x00010815f108();
    uVar1 = extraout_w9;
    if ((bool)in_ZR || in_NG != in_OV) {
      uVar1 = extraout_w8;
    }
    param_2 = (ulong)uVar1;
    FUN_10815df28();
  }
  func_0x00010815f200();
  func_0x00010815f2b0();
  func_0x00010815f054();
  FUN_10815dc74();
  func_0x00010815ee24();
  while( true ) {
    if (unaff_w26 == 0) {
      return 0;
    }
    func_0x00010815ef1c();
    if (extraout_w8_00 == 0) break;
    if ((unaff_w21 == extraout_w8_00) && (func_0x00010815ee78(), (int)param_2 != 0)) {
      func_0x00010815eed8();
      FUN_10815e010();
      return unaff_x23;
    }
    func_0x00010815eddc();
  }
  func_0x00010815eed8();
  FUN_10815e010();
  func_0x00010815ef80();
  return unaff_x23;
}



/* Entry: 10815df28; end: 10815df9b;  */

void FUN_10815df28(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_48 [8];
  
  func_0x00010815ed44();
  __Znam();
  func_0x00010815f0c8();
  if ((int)unaff_x20 != 0) {
    func_0x00010815f230();
    do {
      func_0x00010815f224();
    } while (!(bool)in_ZR);
  }
  func_0x00010815f118();
  while (unaff_x21 != 0) {
    if (*(int *)(unaff_x20 + -8) != 0) {
      func_0x00010815f218();
      FUN_10815df9c();
    }
    func_0x00010815f20c();
  }
  func_0x00010815d944(auStack_48);
  return;
}



/* Entry: 10815df9c; end: 10815e00f;  */

undefined8 FUN_10815df9c(undefined8 param_1,undefined8 param_2)

{
  int extraout_w8;
  int unaff_w21;
  undefined8 unaff_x23;
  int unaff_w26;
  
  func_0x00010815f2b0();
  func_0x00010815f054();
  FUN_10815dc74();
  func_0x00010815ee24();
  while( true ) {
    if (unaff_w26 == 0) {
      return 0;
    }
    func_0x00010815ef1c();
    if (extraout_w8 == 0) break;
    if ((unaff_w21 == extraout_w8) && (func_0x00010815ee78(), (int)param_2 != 0)) {
      func_0x00010815eed8();
      FUN_10815e010();
      return unaff_x23;
    }
    func_0x00010815eddc();
  }
  func_0x00010815eed8();
  FUN_10815e010();
  func_0x00010815ef80();
  return unaff_x23;
}



/* Entry: 10815e010; end: 10815e047;  */

void FUN_10815e010(void)

{
  func_0x00010815f128();
  FUN_10815d9a0();
  func_0x00010815efd4();
  func_0x00010815f284();
  FUN_10815e048();
  func_0x00010815f278();
  return;
}



/* Entry: 10815e048; end: 10815e0bb;  */

void FUN_10815e048(void)

{
  uint extraout_w8;
  
  func_0x00010815edf4();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010815f0f8();
    FUN_10815e0bc();
    func_0x00010815eea8();
    func_0x00010815e084();
  }
  else {
    func_0x00010815ed98();
  }
  func_0x00010815ef30();
  return;
}



/* Entry: 10815e0bc; end: 10815e0df;  */

void FUN_10815e0bc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010815ef10(param_1,0x10,param_2,param_2);
  return;
}



/* Entry: 10815e0e0; end: 10815e10b;  */

void FUN_10815e0e0(void)

{
  func_0x00010815efa4();
  func_0x00010815f1dc();
  FUN_10815e048();
  return;
}



/* Entry: 10815e10c; end: 10815e12f;  */

void FUN_10815e10c(undefined8 param_1,long param_2,int param_3)

{
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010815ef10(param_1,0x10,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x00010815ef94();
  func_0x00010815e084();
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 4);
  return;
}



/* Entry: 10815e130; end: 10815e163;  */

void FUN_10815e130(void)

{
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x00010815ef94();
  func_0x00010815e084();
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 4);
  return;
}



/* Entry: 10815e164; end: 10815e19f;  */

void FUN_10815e164(void)

{
  func_0x00010815f29c();
  return;
}



/* Entry: 10815e1a0; end: 10815e1f7;  */

undefined8 FUN_10815e1a0(void)

{
  return 1;
}



/* Entry: 10815e1f8; end: 10815e243;  */

long * FUN_10815e1f8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10815e244; end: 10815e283;  */

long FUN_10815e244(void)

{
  long unaff_x19;
  
  func_0x00010815f034();
  FUN_10815e43c();
  func_0x00010815f254();
  FUN_10815e284();
  func_0x00010815f034();
  func_0x00010815d69c();
  return unaff_x19 + 8;
}



/* Entry: 10815e284; end: 10815e2b7;  */

undefined8 FUN_10815e284(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint extraout_w8;
  int extraout_w8_00;
  uint extraout_w9;
  int unaff_w21;
  undefined8 unaff_x23;
  int unaff_w26;
  
  func_0x00010815ee54();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x00010815f108();
    uVar1 = extraout_w9;
    if ((bool)in_ZR || in_NG != in_OV) {
      uVar1 = extraout_w8;
    }
    param_2 = (ulong)uVar1;
    FUN_10815e2b8();
  }
  func_0x00010815f200();
  func_0x00010815f2b0();
  func_0x00010815f054();
  FUN_10815dcf8();
  func_0x00010815ee24();
  while( true ) {
    if (unaff_w26 == 0) {
      return 0;
    }
    func_0x00010815ef1c();
    if (extraout_w8_00 == 0) break;
    if ((unaff_w21 == extraout_w8_00) && (func_0x00010815ee78(), (int)param_2 != 0)) {
      func_0x00010815eed8();
      FUN_10815e3a0();
      return unaff_x23;
    }
    func_0x00010815eddc();
  }
  func_0x00010815eed8();
  FUN_10815e3a0();
  func_0x00010815ef80();
  return unaff_x23;
}



/* Entry: 10815e2b8; end: 10815e32b;  */

void FUN_10815e2b8(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_48 [8];
  
  func_0x00010815ed44();
  __Znam();
  func_0x00010815f0c8();
  if ((int)unaff_x20 != 0) {
    func_0x00010815f230();
    do {
      func_0x00010815f224();
    } while (!(bool)in_ZR);
  }
  func_0x00010815f118();
  while (unaff_x21 != 0) {
    if (*(int *)(unaff_x20 + -8) != 0) {
      func_0x00010815f218();
      FUN_10815e32c();
    }
    func_0x00010815f20c();
  }
  func_0x00010815d614(auStack_48);
  return;
}



/* Entry: 10815e32c; end: 10815e39f;  */

undefined8 FUN_10815e32c(undefined8 param_1,undefined8 param_2)

{
  int extraout_w8;
  int unaff_w21;
  undefined8 unaff_x23;
  int unaff_w26;
  
  func_0x00010815f2b0();
  func_0x00010815f054();
  FUN_10815dcf8();
  func_0x00010815ee24();
  while( true ) {
    if (unaff_w26 == 0) {
      return 0;
    }
    func_0x00010815ef1c();
    if (extraout_w8 == 0) break;
    if ((unaff_w21 == extraout_w8) && (func_0x00010815ee78(), (int)param_2 != 0)) {
      func_0x00010815eed8();
      FUN_10815e3a0();
      return unaff_x23;
    }
    func_0x00010815eddc();
  }
  func_0x00010815eed8();
  FUN_10815e3a0();
  func_0x00010815ef80();
  return unaff_x23;
}



/* Entry: 10815e3a0; end: 10815e3d7;  */

void FUN_10815e3a0(void)

{
  func_0x00010815f128();
  FUN_10815d670();
  func_0x00010815efd4();
  func_0x00010815f284();
  FUN_10815e3d8();
  func_0x00010815f278();
  return;
}



/* Entry: 10815e3d8; end: 10815e417;  */

void FUN_10815e3d8(void)

{
  uint extraout_w8;
  int extraout_w8_00;
  
  func_0x00010815edf4();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010815f0f8();
    FUN_10815e418();
    func_0x00010815f158();
    if (extraout_w8_00 != 0) {
      func_0x00010815f290();
    }
  }
  else {
    func_0x00010815ed98();
  }
  func_0x00010815ef30();
  return;
}



/* Entry: 10815e418; end: 10815e43b;  */

void FUN_10815e418(undefined8 param_1,undefined8 param_2)

{
  func_0x00010815ef10(param_1,8,param_2,param_2);
  return;
}



/* Entry: 10815e43c; end: 10815e467;  */

void FUN_10815e43c(void)

{
  func_0x00010815efa4();
  func_0x00010815f1dc();
  FUN_10815e3d8();
  return;
}



/* Entry: 10815e468; end: 10815e48b;  */

void FUN_10815e468(undefined8 param_1,long param_2,int param_3)

{
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010815ef10(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x00010815ef94();
  if (*(int *)(param_2 + 8) != 0) {
    func_0x00010815f068();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 3);
  return;
}



/* Entry: 10815e48c; end: 10815e4c7;  */

void FUN_10815e48c(long param_1)

{
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x00010815ef94();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00010815f068();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 3);
  return;
}



/* Entry: 10815e4c8; end: 10815e507;  */

long FUN_10815e4c8(void)

{
  long unaff_x19;
  
  func_0x00010815f034();
  FUN_10815e6f4();
  func_0x00010815f254();
  FUN_10815e508();
  func_0x00010815f034();
  func_0x00010815d8bc();
  return unaff_x19 + 8;
}



/* Entry: 10815e508; end: 10815e53b;  */

undefined8 FUN_10815e508(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint extraout_w8;
  int extraout_w8_00;
  uint extraout_w9;
  int unaff_w21;
  undefined8 unaff_x23;
  int unaff_w26;
  
  func_0x00010815ee54();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x00010815f108();
    uVar1 = extraout_w9;
    if ((bool)in_ZR || in_NG != in_OV) {
      uVar1 = extraout_w8;
    }
    param_2 = (ulong)uVar1;
    FUN_10815e53c();
  }
  func_0x00010815f200();
  func_0x00010815f2b0();
  func_0x00010815f054();
  FUN_10815dd7c();
  func_0x00010815ee24();
  while( true ) {
    if (unaff_w26 == 0) {
      return 0;
    }
    func_0x00010815ef1c();
    if (extraout_w8_00 == 0) break;
    if ((unaff_w21 == extraout_w8_00) && (func_0x00010815ee78(), (int)param_2 != 0)) {
      func_0x00010815eed8();
      FUN_10815e624();
      return unaff_x23;
    }
    func_0x00010815eddc();
  }
  func_0x00010815eed8();
  FUN_10815e624();
  func_0x00010815ef80();
  return unaff_x23;
}



/* Entry: 10815e53c; end: 10815e5af;  */

void FUN_10815e53c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_48 [8];
  
  func_0x00010815ed44();
  __Znam();
  func_0x00010815f0c8();
  if ((int)unaff_x20 != 0) {
    func_0x00010815f230();
    do {
      func_0x00010815f224();
    } while (!(bool)in_ZR);
  }
  func_0x00010815f118();
  while (unaff_x21 != 0) {
    if (*(int *)(unaff_x20 + -8) != 0) {
      func_0x00010815f218();
      FUN_10815e5b0();
    }
    func_0x00010815f20c();
  }
  func_0x00010815d834(auStack_48);
  return;
}



/* Entry: 10815e5b0; end: 10815e623;  */

undefined8 FUN_10815e5b0(undefined8 param_1,undefined8 param_2)

{
  int extraout_w8;
  int unaff_w21;
  undefined8 unaff_x23;
  int unaff_w26;
  
  func_0x00010815f2b0();
  func_0x00010815f054();
  FUN_10815dd7c();
  func_0x00010815ee24();
  while( true ) {
    if (unaff_w26 == 0) {
      return 0;
    }
    func_0x00010815ef1c();
    if (extraout_w8 == 0) break;
    if ((unaff_w21 == extraout_w8) && (func_0x00010815ee78(), (int)param_2 != 0)) {
      func_0x00010815eed8();
      FUN_10815e624();
      return unaff_x23;
    }
    func_0x00010815eddc();
  }
  func_0x00010815eed8();
  FUN_10815e624();
  func_0x00010815ef80();
  return unaff_x23;
}



/* Entry: 10815e624; end: 10815e65b;  */

void FUN_10815e624(void)

{
  func_0x00010815f128();
  FUN_10815d890();
  func_0x00010815efd4();
  func_0x00010815f284();
  FUN_10815e65c();
  func_0x00010815f278();
  return;
}



/* Entry: 10815e65c; end: 10815e6cf;  */

void FUN_10815e65c(void)

{
  uint extraout_w8;
  
  func_0x00010815edf4();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010815f0f8();
    FUN_10815e6d0();
    func_0x00010815eea8();
    func_0x00010815e698();
  }
  else {
    func_0x00010815ed98();
  }
  func_0x00010815ef30();
  return;
}



/* Entry: 10815e6d0; end: 10815e6f3;  */

void FUN_10815e6d0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010815ef10(param_1,0x10,param_2,param_2);
  return;
}



/* Entry: 10815e6f4; end: 10815e71f;  */

void FUN_10815e6f4(void)

{
  func_0x00010815efa4();
  func_0x00010815f1dc();
  FUN_10815e65c();
  return;
}



/* Entry: 10815e720; end: 10815e743;  */

void FUN_10815e720(undefined8 param_1,long param_2,int param_3)

{
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010815ef10(param_1,0x10,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x00010815ef94();
  func_0x00010815e698();
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 4);
  return;
}



/* Entry: 10815e744; end: 10815e777;  */

void FUN_10815e744(void)

{
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x00010815ef94();
  func_0x00010815e698();
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 4);
  return;
}



/* Entry: 10815e778; end: 10815e7b7;  */

long FUN_10815e778(void)

{
  long unaff_x19;
  
  func_0x00010815f034();
  FUN_10815e9a4();
  func_0x00010815f254();
  FUN_10815e7b8();
  func_0x00010815f034();
  func_0x00010815d7ac();
  return unaff_x19 + 8;
}



/* Entry: 10815e7b8; end: 10815e7eb;  */

undefined8 FUN_10815e7b8(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint extraout_w8;
  int extraout_w8_00;
  uint extraout_w9;
  int unaff_w21;
  undefined8 unaff_x23;
  int unaff_w26;
  
  func_0x00010815ee54();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x00010815f108();
    uVar1 = extraout_w9;
    if ((bool)in_ZR || in_NG != in_OV) {
      uVar1 = extraout_w8;
    }
    param_2 = (ulong)uVar1;
    FUN_10815e7ec();
  }
  func_0x00010815f200();
  func_0x00010815f2b0();
  func_0x00010815f054();
  FUN_10815de00();
  func_0x00010815ee24();
  while( true ) {
    if (unaff_w26 == 0) {
      return 0;
    }
    func_0x00010815ef1c();
    if (extraout_w8_00 == 0) break;
    if ((unaff_w21 == extraout_w8_00) && (func_0x00010815ee78(), (int)param_2 != 0)) {
      func_0x00010815eed8();
      FUN_10815e8d4();
      return unaff_x23;
    }
    func_0x00010815eddc();
  }
  func_0x00010815eed8();
  FUN_10815e8d4();
  func_0x00010815ef80();
  return unaff_x23;
}



/* Entry: 10815e7ec; end: 10815e85f;  */

void FUN_10815e7ec(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_48 [8];
  
  func_0x00010815ed44();
  __Znam();
  func_0x00010815f0c8();
  if ((int)unaff_x20 != 0) {
    func_0x00010815f230();
    do {
      func_0x00010815f224();
    } while (!(bool)in_ZR);
  }
  func_0x00010815f118();
  while (unaff_x21 != 0) {
    if (*(int *)(unaff_x20 + -8) != 0) {
      func_0x00010815f218();
      FUN_10815e860();
    }
    func_0x00010815f20c();
  }
  func_0x00010815d724(auStack_48);
  return;
}



/* Entry: 10815e860; end: 10815e8d3;  */

undefined8 FUN_10815e860(undefined8 param_1,undefined8 param_2)

{
  int extraout_w8;
  int unaff_w21;
  undefined8 unaff_x23;
  int unaff_w26;
  
  func_0x00010815f2b0();
  func_0x00010815f054();
  FUN_10815de00();
  func_0x00010815ee24();
  while( true ) {
    if (unaff_w26 == 0) {
      return 0;
    }
    func_0x00010815ef1c();
    if (extraout_w8 == 0) break;
    if ((unaff_w21 == extraout_w8) && (func_0x00010815ee78(), (int)param_2 != 0)) {
      func_0x00010815eed8();
      FUN_10815e8d4();
      return unaff_x23;
    }
    func_0x00010815eddc();
  }
  func_0x00010815eed8();
  FUN_10815e8d4();
  func_0x00010815ef80();
  return unaff_x23;
}



/* Entry: 10815e8d4; end: 10815e90b;  */

void FUN_10815e8d4(void)

{
  func_0x00010815f128();
  FUN_10815d780();
  func_0x00010815efd4();
  func_0x00010815f284();
  FUN_10815e90c();
  func_0x00010815f278();
  return;
}



/* Entry: 10815e90c; end: 10815e97f;  */

void FUN_10815e90c(void)

{
  uint extraout_w8;
  
  func_0x00010815edf4();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010815f0f8();
    FUN_10815e980();
    func_0x00010815eea8();
    func_0x00010815e948();
  }
  else {
    func_0x00010815ed98();
  }
  func_0x00010815ef30();
  return;
}



/* Entry: 10815e980; end: 10815e9a3;  */

void FUN_10815e980(undefined8 param_1,undefined8 param_2)

{
  func_0x00010815ef10(param_1,0x10,param_2,param_2);
  return;
}



/* Entry: 10815e9a4; end: 10815e9cf;  */

void FUN_10815e9a4(void)

{
  func_0x00010815efa4();
  func_0x00010815f1dc();
  FUN_10815e90c();
  return;
}



/* Entry: 10815e9d0; end: 10815e9f3;  */

void FUN_10815e9d0(undefined8 param_1,long param_2,int param_3)

{
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010815ef10(param_1,0x10,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x00010815ef94();
  func_0x00010815e948();
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 4);
  return;
}



/* Entry: 10815e9f4; end: 10815ea27;  */

void FUN_10815e9f4(void)

{
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x00010815ef94();
  func_0x00010815e948();
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 4);
  return;
}



/* Entry: 10815ea28; end: 10815ea67;  */

long FUN_10815ea28(void)

{
  long unaff_x19;
  
  func_0x00010815f034();
  FUN_10815ec20();
  func_0x00010815f254();
  FUN_10815ea68();
  func_0x00010815f034();
  func_0x00010815d58c();
  return unaff_x19 + 8;
}



/* Entry: 10815ea68; end: 10815ea9b;  */

undefined8 FUN_10815ea68(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint extraout_w8;
  int extraout_w8_00;
  uint extraout_w9;
  int unaff_w21;
  undefined8 unaff_x23;
  int unaff_w26;
  
  func_0x00010815ee54();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x00010815f108();
    uVar1 = extraout_w9;
    if ((bool)in_ZR || in_NG != in_OV) {
      uVar1 = extraout_w8;
    }
    param_2 = (ulong)uVar1;
    FUN_10815ea9c();
  }
  func_0x00010815f200();
  func_0x00010815f2b0();
  func_0x00010815f054();
  FUN_10815de84();
  func_0x00010815ee24();
  while( true ) {
    if (unaff_w26 == 0) {
      return 0;
    }
    func_0x00010815ef1c();
    if (extraout_w8_00 == 0) break;
    if ((unaff_w21 == extraout_w8_00) && (func_0x00010815ee78(), (int)param_2 != 0)) {
      func_0x00010815eed8();
      FUN_10815eb84();
      return unaff_x23;
    }
    func_0x00010815eddc();
  }
  func_0x00010815eed8();
  FUN_10815eb84();
  func_0x00010815ef80();
  return unaff_x23;
}



/* Entry: 10815ea9c; end: 10815eb0f;  */

void FUN_10815ea9c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_48 [8];
  
  func_0x00010815ed44();
  __Znam();
  func_0x00010815f0c8();
  if ((int)unaff_x20 != 0) {
    func_0x00010815f230();
    do {
      func_0x00010815f224();
    } while (!(bool)in_ZR);
  }
  func_0x00010815f118();
  while (unaff_x21 != 0) {
    if (*(int *)(unaff_x20 + -8) != 0) {
      func_0x00010815f218();
      FUN_10815eb10();
    }
    func_0x00010815f20c();
  }
  FUN_10815d504(auStack_48);
  return;
}



/* Entry: 10815eb10; end: 10815eb83;  */

undefined8 FUN_10815eb10(undefined8 param_1,undefined8 param_2)

{
  int extraout_w8;
  int unaff_w21;
  undefined8 unaff_x23;
  int unaff_w26;
  
  func_0x00010815f2b0();
  func_0x00010815f054();
  FUN_10815de84();
  func_0x00010815ee24();
  while( true ) {
    if (unaff_w26 == 0) {
      return 0;
    }
    func_0x00010815ef1c();
    if (extraout_w8 == 0) break;
    if ((unaff_w21 == extraout_w8) && (func_0x00010815ee78(), (int)param_2 != 0)) {
      func_0x00010815eed8();
      FUN_10815eb84();
      return unaff_x23;
    }
    func_0x00010815eddc();
  }
  func_0x00010815eed8();
  FUN_10815eb84();
  func_0x00010815ef80();
  return unaff_x23;
}



/* Entry: 10815eb84; end: 10815ebbb;  */

void FUN_10815eb84(void)

{
  func_0x00010815f128();
  FUN_10815d560();
  func_0x00010815efd4();
  func_0x00010815f284();
  FUN_10815ebbc();
  func_0x00010815f278();
  return;
}



/* Entry: 10815ebbc; end: 10815ebfb;  */

void FUN_10815ebbc(void)

{
  uint extraout_w8;
  int extraout_w8_00;
  
  func_0x00010815edf4();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010815f0f8();
    FUN_10815ebfc();
    func_0x00010815f158();
    if (extraout_w8_00 != 0) {
      func_0x00010815f290();
    }
  }
  else {
    func_0x00010815ed98();
  }
  func_0x00010815ef30();
  return;
}



/* Entry: 10815ebfc; end: 10815ec1f;  */

void FUN_10815ebfc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010815ef10(param_1,8,param_2,param_2);
  return;
}



/* Entry: 10815ec20; end: 10815ec4b;  */

void FUN_10815ec20(void)

{
  func_0x00010815efa4();
  func_0x00010815f1dc();
  FUN_10815ebbc();
  return;
}



/* Entry: 10815ec4c; end: 10815ec6f;  */

void FUN_10815ec4c(undefined8 param_1,long param_2,int param_3)

{
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010815ef10(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x00010815ef94();
  if (*(int *)(param_2 + 8) != 0) {
    func_0x00010815f068();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 3);
  return;
}



/* Entry: 10815ec70; end: 10815ecab;  */

void FUN_10815ec70(long param_1)

{
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x00010815ef94();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00010815f068();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 3);
  return;
}



/* Entry: 10815ecac; end: 10815eccf;  */

void FUN_10815ecac(undefined8 param_1,long param_2,int param_3)

{
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010815ef10(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x00010815ef94();
  if (*(int *)(param_2 + 8) != 0) {
    func_0x00010815f068();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 3);
  return;
}



/* Entry: 10815ecd0; end: 10815ed0b;  */

void FUN_10815ecd0(long param_1)

{
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x00010815ef94();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00010815f068();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  func_0x00010815ed78(unaff_x21 >> 3);
  return;
}



/* Entry: 10815ed0c; end: 10815ed2f;  */

void FUN_10815ed0c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010815ef10(param_1,8,param_2,param_2);
  return;
}



/* Entry: 10815ed30; end: 10815f2c3;  */

void FUN_10815ed30(void)

{
  return;
}



/* Entry: 10815f2c4; end: 10815f413;  */

undefined8 * FUN_10815f2c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  
  FUN_10815f414(&uStack_68,0x113254e20);
  func_0x0001081602b4();
  uVar1 = uStack_68;
  *param_1 = &PTR_FUN_110a28888;
  uStack_68 = 0;
  param_1[6] = uVar1;
  FUN_108160198(&uStack_68);
  *param_1 = &PTR_FUN_110a287b0;
  param_1[8] = 0;
  param_1[9] = 0x42c8000042c80000;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  func_0x0001081602a8();
  FUN_108162b98();
  func_0x0001081602a8();
  FUN_108162b98();
  func_0x0001081602a8();
  FUN_108161330();
  func_0x0001081602a8();
  FUN_108161330();
  func_0x0001081602a8();
  FUN_108161330();
  func_0x0001081602a8();
  FUN_1081629c0();
  return param_1;
}



/* Entry: 10815f414; end: 10815f45b;  */

void FUN_10815f414(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm();
  FUN_108160124();
  *param_1 = uVar1;
  return;
}



/* Entry: 10815f45c; end: 10815f48b;  */

undefined8 * FUN_10815f45c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a28888;
  FUN_108160198(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10815f48c; end: 10815f48f;  */

undefined8 * FUN_10815f48c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a28888;
  FUN_108160198(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10815f490; end: 10815f4a3;  */

void FUN_10815f490(void)

{
  FUN_10815f45c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10815f4a4; end: 10815f523;  */

void FUN_10815f4a4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_10815f524(auStack_48);
  func_0x00010815f4dc(uVar1,auStack_48);
  return;
}



/* Entry: 10815f524; end: 10815f69b;  */

void FUN_10815f524(undefined8 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [40];
  undefined1 auStack_f0 [40];
  undefined4 uStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  FUN_10814bdfc(auStack_140,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
  FUN_10815f69c(auStack_168,*(float *)(param_2 + 0x50) + *(float *)(param_2 + 0x5c));
  FUN_1081600e0(auStack_118,auStack_140,auStack_168);
  fVar1 = *(float *)(param_2 + 0x54);
  if (fVar1 == 0.0) {
    uStack_188 = uRam0000000113254e28;
    uStack_190 = uRam0000000113254e20;
    uStack_178 = uRam0000000113254e38;
    uStack_180 = uRam0000000113254e30;
    uStack_170 = uRam0000000113254e40;
  }
  else {
    fVar3 = *(float *)(param_2 + 0x58);
    fVar2 = 85.0;
    if (fVar1 <= 85.0) {
      fVar2 = fVar1;
    }
    if (fVar2 <= -85.0) {
      fVar2 = -85.0;
    }
    FUN_10816010c(auStack_a0,fVar3 * 0.017453292);
    fStack_c4 = fVar2 * -0.017453292;
    _tanf();
    uStack_c8 = 0x3f800000;
    uStack_b8 = 0x3f800000;
    uStack_c0 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0xc03f800000;
    func_0x000108160298();
    FUN_10816010c(auStack_f0,-(fVar3 * 0.017453292));
    FUN_1081600e0(&uStack_190,auStack_78,auStack_f0);
  }
  FUN_1081600e0(auStack_a0,auStack_118,&uStack_190);
  func_0x00010815f6c0(&uStack_c8,*(float *)(param_2 + 0x48) / 100.0,
                      *(float *)(param_2 + 0x4c) / 100.0);
  func_0x000108160298();
  FUN_10814bdfc(auStack_f0,-*(float *)(param_2 + 0x38),-*(float *)(param_2 + 0x3c));
  FUN_1081600e0(param_1,auStack_78,auStack_f0);
  return;
}



/* Entry: 10815f69c; end: 10815f6eb;  */

void FUN_10815f69c(float param_1,undefined8 param_2,float param_3,undefined4 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 uVar1;
  
  func_0x0001081602d4();
  uVar1 = 0x3c8efa35;
  param_1 = param_1 * 0.017453292;
  ___sincosf_stret();
  func_0x000108365e1c();
  if ((bool)in_CY && !(bool)in_ZR) {
    param_3 = param_1;
  }
  func_0x000108365ecc();
  *param_4 = uVar1;
  param_4[1] = -param_3;
  param_4[2] = 0;
  param_4[3] = param_3;
  param_4[4] = uVar1;
  *(undefined8 *)(param_4 + 7) = 0x3f80000000000000;
  *(undefined8 *)(param_4 + 5) = 0;
  param_4[9] = 0xc0;
  return;
}



/* Entry: 10815f6ec; end: 10815f6f7;  */

void FUN_10815f6ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_10815f524(auStack_48);
  func_0x00010815f4dc(uVar1,auStack_48);
  return;
}



/* Entry: 10815f6f8; end: 10815f8f3;  */

void FUN_10815f6f8(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [40];
  long *plStack_70;
  undefined1 uStack_61;
  
  uVar1 = param_2;
  uStack_61 = param_5;
  func_0x000108160248(param_2,&UNK_10f47d1bc);
  uVar2 = uVar1;
  FUN_108154e30();
  if ((int)uVar2 != 0) {
    func_0x000108160248();
    uVar1 = uVar2;
  }
  func_0x000108160248();
  uVar3 = uVar2;
  func_0x000108160248();
  uVar4 = uVar3;
  func_0x000108160248();
  uVar5 = uVar4;
  func_0x000108160248();
  uVar6 = uVar5;
  func_0x000108160248();
  FUN_10815f8f4(&plStack_70,param_2,uVar2,uVar3,uVar4,uVar1,uVar5,uVar6,&uStack_61);
  FUN_10815a508(param_2,&plStack_70);
  if ((plStack_70[2] == plStack_70[3]) && ((*(byte *)((long)plStack_70 + 0x29) & 1) == 0)) {
    if ((param_2 & 1) == 0) {
      FUN_10815f524(auStack_98);
      uVar1 = 0;
      func_0x0001081420b8();
      if ((uVar1 & 1) != 0) {
        func_0x0001081602fc();
        *param_1 = extraout_x8_01;
        goto LAB_10815f858;
      }
    }
    (**(code **)(*plStack_70 + 0x18))(0);
  }
  else {
    do {
      func_0x000108160250();
    } while (extraout_w11 != 0);
    FUN_108155570(extraout_x8,auStack_98);
    FUN_108155920(auStack_98);
  }
  func_0x0001081602fc();
  uStack_a8 = 0;
  if (plStack_70[6] != 0) {
    do {
      func_0x000108160250();
      uStack_a8 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  FUN_10818d708(param_1,auStack_a0,&uStack_a8);
  func_0x000108160290();
  FUN_108155404(auStack_a0);
LAB_10815f858:
  FUN_10815c3c0(&plStack_70);
  return;
}



/* Entry: 10815f8f4; end: 10815f9e3;  */

void FUN_10815f8f4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 *param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = 0x60;
  __Znwm();
  FUN_108154e4c(param_3);
  FUN_108154e4c(param_4);
  FUN_108154e4c(param_5);
  FUN_108154e4c(param_6);
  FUN_108154e4c(param_7);
  FUN_108154e4c(param_8);
  FUN_10815f2c4(lVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*param_9);
  *param_1 = lVar3;
  plVar1 = (long *)(lVar3 + 0x10);
  lVar2 = *plVar1;
  uVar4 = *(long *)(lVar3 + 0x20) - lVar2;
  uVar5 = *(long *)(lVar3 + 0x18) - lVar2;
  if (uVar5 < uVar4) {
    if (*(long *)(lVar3 + 0x18) == lVar2) {
      uVar5 = 0;
    }
    else {
      uVar5 = (long)uVar5 >> 3;
      FUN_108155734();
      uVar4 = *(long *)(lVar3 + 0x20) - *plVar1;
    }
    if (uVar5 < (ulong)((long)uVar4 >> 3)) {
      FUN_1081556a8(plVar1,&stack0xffffffffffffffb8);
    }
    func_0x0001081558b4(&stack0xffffffffffffffb8);
  }
  return;
}



/* Entry: 10815f9e4; end: 10815fbf7;  */

undefined8 * FUN_10815f9e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108160274();
  FUN_108155228(&uStack_a8,&uStack_a0);
  func_0x0001081602b4();
  uVar1 = uStack_a8;
  *param_1 = &PTR_DAT_110a288c0;
  uStack_a8 = 0;
  param_1[6] = uVar1;
  FUN_1081554f0(&uStack_a8);
  param_1[8] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_110a287e8;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  uStack_a0 = 0x42c8000042c80000;
  uStack_98 = 0x42c80000;
  puVar2 = param_1 + 0x10;
  func_0x0001072f8f08(puVar2,&uStack_a0,3);
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  func_0x000108160240();
  FUN_108154e4c();
  func_0x000108160230();
  FUN_108163d6c();
  func_0x000108160240();
  FUN_108154e4c();
  func_0x0001081602dc();
  func_0x000108160240();
  FUN_108154e4c();
  func_0x0001081602dc();
  func_0x000108160240();
  FUN_108154e4c();
  func_0x000108160230();
  FUN_108161330();
  func_0x000108160240();
  FUN_108154e4c();
  func_0x000108160230();
  FUN_108161330();
  func_0x000108160240();
  FUN_108154e4c();
  func_0x000108160230();
  FUN_108161330();
  func_0x000108160240();
  FUN_108154e4c();
  func_0x000108160230();
  FUN_108163d6c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056d1ce4(param_1 + 0xd);
  func_0x0001056d1ce4(param_1 + 10);
  func_0x0001056d1ce4(param_1 + 7);
  FUN_10815fbf8(param_1);
  __Unwind_Resume();
  *puVar2 = &PTR_DAT_110a288c0;
  FUN_1081554f0(puVar2 + 6);
  *puVar2 = &PTR_FUN_110a28970;
  FUN_1081596e8(puVar2 + 2);
  return puVar2;
}



/* Entry: 10815fbf8; end: 10815fc77;  */

undefined8 * FUN_10815fbf8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a288c0;
  FUN_1081554f0(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10815fc78; end: 10815fc7b;  */

undefined8 * FUN_10815fc78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a287e8;
  func_0x0001056d1ce4(param_1 + 0x10);
  func_0x0001056d1ce4(param_1 + 0xd);
  func_0x0001056d1ce4(param_1 + 10);
  func_0x0001056d1ce4(param_1 + 7);
  *param_1 = &PTR_DAT_110a288c0;
  FUN_1081554f0(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10815fc7c; end: 10815fc8f;  */

void FUN_10815fc7c(void)

{
  func_0x00010815fc28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10815fc90; end: 10815fd53;  */

void FUN_10815fc90(long *param_1)

{
  long lVar1;
  undefined1 auStack_60 [64];
  
  lVar1 = param_1[6];
  (**(code **)(*param_1 + 0x28))(auStack_60);
  func_0x00010815fcd0(lVar1,auStack_60);
  return;
}



/* Entry: 10815fd54; end: 10815ff37;  */

void FUN_10815fd54(undefined8 param_1,float param_2,float param_3,float param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_2f0;
  undefined8 uStack_2ec;
  undefined8 uStack_2e4;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  undefined4 uStack_2b4;
  float afStack_2b0 [6];
  undefined8 uStack_298;
  undefined8 uStack_290;
  float fStack_288;
  undefined8 uStack_284;
  undefined8 uStack_27c;
  undefined4 uStack_274;
  undefined1 auStack_270 [64];
  undefined1 auStack_230 [64];
  undefined1 auStack_1f0 [64];
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  
  func_0x0001081637ec(param_5 + 0x38);
  fVar1 = param_2;
  fVar4 = param_3;
  fVar7 = param_4;
  func_0x0001081637ec(param_5 + 0x50);
  fVar2 = fVar1;
  fVar5 = fVar4;
  fVar8 = fVar7;
  func_0x0001081637ec(param_5 + 0x80);
  fVar3 = fVar2;
  fVar6 = fVar5;
  fVar9 = fVar8;
  func_0x00010815fd1c(param_5);
  uStack_1a4 = 0;
  uStack_1ac = 0;
  uStack_1b0 = 0x3f800000;
  uStack_19c = 0x3f800000;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0x3f800000;
  uStack_174 = 0x3f800000;
  fStack_180 = fVar1;
  fStack_17c = fVar4;
  fStack_178 = fVar7;
  FUN_10835edc4(0x3f800000,0,0,fVar3 * 0.017453292,auStack_1f0);
  FUN_10835e5d0(auStack_170,&uStack_1b0,auStack_1f0);
  FUN_10835edc4(0,0x3f800000,0,fVar6 * 0.017453292,auStack_230);
  FUN_10835e5d0(auStack_130,auStack_170,auStack_230);
  FUN_10835edc4(0,0,0x3f800000,fVar9 * 0.017453292,auStack_270);
  FUN_10835e5d0(auStack_f0,auStack_130,auStack_270);
  afStack_2b0[0] = fVar2 / 100.0;
  afStack_2b0[5] = fVar5 / 100.0;
  afStack_2b0[3] = 0.0;
  afStack_2b0[4] = 0.0;
  afStack_2b0[1] = 0.0;
  afStack_2b0[2] = 0.0;
  uStack_298 = 0;
  uStack_290 = 0;
  fStack_288 = fVar8 / 100.0;
  uStack_27c = 0;
  uStack_284 = 0;
  uStack_274 = 0x3f800000;
  FUN_10835e5d0(auStack_b0,auStack_f0,afStack_2b0);
  fStack_2c0 = -param_2;
  uStack_2f0 = 0x3f800000;
  fStack_2bc = -param_3;
  fStack_2b8 = -param_4;
  uStack_2e4 = 0;
  uStack_2ec = 0;
  uStack_2dc = 0x3f800000;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0x3f800000;
  uStack_2b4 = 0x3f800000;
  FUN_10835e5d0(param_1,auStack_b0,&uStack_2f0);
  return;
}



/* Entry: 10815ff38; end: 108160083;  */

void FUN_10815ff38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [64];
  long *plStack_38;
  
  FUN_108160084(&plStack_38,param_3,param_2);
  if ((plStack_38[2] == plStack_38[3]) && ((*(byte *)((long)plStack_38 + 0x29) & 1) == 0)) {
    (**(code **)(*plStack_38 + 0x28))(auStack_78);
    func_0x000108160274();
    puVar1 = auStack_78;
    func_0x00010835e54c(puVar1,auStack_c0);
    if ((int)puVar1 != 0) {
      func_0x0001081602fc();
      *param_1 = extraout_x8_01;
      goto LAB_10815ffe8;
    }
    (**(code **)(*plStack_38 + 0x18))(0);
  }
  else {
    do {
      func_0x000108160250();
    } while (extraout_w11 != 0);
    FUN_108155570(extraout_x8,auStack_78);
    FUN_108155920(auStack_78);
  }
  func_0x0001081602fc();
  uStack_d0 = 0;
  if (plStack_38[6] != 0) {
    do {
      func_0x000108160250();
      uStack_d0 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  FUN_10818d708(param_1,auStack_c8,&uStack_d0);
  FUN_108155404(&uStack_d0);
  func_0x000108160290();
LAB_10815ffe8:
  FUN_1081601e4(&plStack_38);
  return;
}



/* Entry: 108160084; end: 1081600d7;  */

void FUN_108160084(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar3 = 0xa8;
  __Znwm();
  FUN_10815f9e4();
  *param_1 = lVar3;
  plVar1 = (long *)(lVar3 + 0x10);
  plStack_48 = (long *)(lVar3 + 0x20);
  lVar2 = *plVar1;
  uVar5 = *plStack_48 - lVar2;
  uVar6 = *(long *)(lVar3 + 0x18) - lVar2;
  if (uVar6 < uVar5) {
    if (*(long *)(lVar3 + 0x18) == lVar2) {
      plStack_48 = (long *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = (long)uVar6 >> 3;
      FUN_108155734();
      uVar5 = *(long *)(lVar3 + 0x20) - *plVar1;
    }
    lStack_40 = (long)plStack_48 + uVar6;
    lStack_38 = lStack_40;
    if (uVar4 < (ulong)((long)uVar5 >> 3)) {
      FUN_1081556a8(plVar1,&plStack_48);
    }
    func_0x0001081558b4(&plStack_48);
  }
  return;
}



/* Entry: 1081600d8; end: 1081600df;  */

void FUN_1081600d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1081600dc);
  (*pcVar1)();
}



/* Entry: 1081600e0; end: 10816010b;  */

float * FUN_1081600e0(float param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pfVar2 = param_2;
  func_0x0001081602d4();
  pfVar3 = param_2;
  func_0x0001081421e0();
  pfVar4 = param_3;
  func_0x0001081421e0();
  if (((uint)param_2[9] & 0x8f) == 0) {
    uVar11 = *(undefined8 *)(param_3 + 2);
    uVar10 = *(undefined8 *)param_3;
    uVar15 = *(undefined8 *)(param_3 + 6);
    uVar14 = *(undefined8 *)(param_3 + 4);
    uVar5 = *(undefined8 *)(param_3 + 8);
  }
  else {
    if (((uint)param_3[9] & 0x8f) != 0) {
      uVar1 = (uint)pfVar4 | (uint)pfVar3;
      if ((uVar1 & 0xc) != 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          fVar9 = *param_2;
          fVar12 = param_2[1];
          fVar6 = (float)*(undefined8 *)param_3;
          fVar8 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
          fVar7 = (float)*(undefined8 *)(param_3 + 3);
          fVar20 = (float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20);
          fVar18 = param_2[3];
          fVar19 = param_2[2] + fVar12 * param_3[5] + param_3[2] * fVar9;
          fVar13 = param_2[4];
          fVar16 = fVar7 * fVar13 + fVar6 * fVar18;
          fVar17 = fVar20 * fVar13 + fVar8 * fVar18;
          uVar5 = CONCAT44(fVar20 * fVar12 + fVar8 * fVar9,fVar7 * fVar12 + fVar6 * fVar9);
          fVar20 = param_2[5] + param_3[5] * fVar13 + param_3[2] * fVar18;
          fVar7 = 0.0;
          fVar6 = 1.0;
          fVar9 = 2.69049e-43;
          fVar8 = 0.0;
        }
        else {
          func_0x000108365e88(param_2);
          fVar9 = param_1;
          FUN_10836455c(param_2,param_3 + 1);
          fVar19 = fVar9;
          FUN_10836455c(param_2,param_3 + 2);
          fVar16 = fVar19;
          func_0x000108365e88(param_2 + 3);
          fVar17 = fVar16;
          FUN_10836455c(param_2 + 3,param_3 + 1);
          fVar20 = fVar17;
          FUN_10836455c(param_2 + 3,param_3 + 2);
          fVar8 = fVar20;
          func_0x000108365e88(param_2 + 6);
          fVar7 = fVar8;
          FUN_10836455c(param_2 + 6,param_3 + 1);
          fVar6 = fVar7;
          FUN_10836455c(param_2 + 6,param_3 + 2);
          uVar5 = CONCAT44(fVar9,param_1);
          fVar9 = 1.79366e-43;
        }
        *(undefined8 *)pfVar2 = uVar5;
        pfVar2[2] = fVar19;
        *(ulong *)(pfVar2 + 3) = CONCAT44(fVar17,fVar16);
        pfVar2[5] = fVar20;
        pfVar2[6] = fVar8;
        pfVar2[7] = fVar7;
        pfVar2[8] = fVar6;
        pfVar2[9] = fVar9;
        return pfVar2;
      }
      func_0x000108142138(*param_2 * *param_3,param_2[4] * param_3[4],
                          param_2[2] + param_3[2] * *param_2,param_2[5] + param_3[5] * param_2[4],
                          pfVar2);
      return pfVar2;
    }
    uVar11 = *(undefined8 *)(param_2 + 2);
    uVar10 = *(undefined8 *)param_2;
    uVar15 = *(undefined8 *)(param_2 + 6);
    uVar14 = *(undefined8 *)(param_2 + 4);
    uVar5 = *(undefined8 *)(param_2 + 8);
  }
  *(undefined8 *)(pfVar2 + 8) = uVar5;
  *(undefined8 *)(pfVar2 + 2) = uVar11;
  *(undefined8 *)pfVar2 = uVar10;
  *(undefined8 *)(pfVar2 + 6) = uVar15;
  *(undefined8 *)(pfVar2 + 4) = uVar14;
  return pfVar2;
}



/* Entry: 10816010c; end: 108160123;  */

void FUN_10816010c(float param_1,undefined8 param_2,float param_3,undefined4 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  float fVar1;
  undefined4 uVar2;
  
  func_0x0001081602d4();
  uVar2 = 0x3c8efa35;
  fVar1 = param_1 * 57.295776 * 0.017453292;
  ___sincosf_stret();
  func_0x000108365e1c();
  if ((bool)in_CY && !(bool)in_ZR) {
    param_3 = fVar1;
  }
  func_0x000108365ecc();
  *param_4 = uVar2;
  param_4[1] = -param_3;
  param_4[2] = 0;
  param_4[3] = param_3;
  param_4[4] = uVar2;
  *(undefined8 *)(param_4 + 7) = 0x3f80000000000000;
  *(undefined8 *)(param_4 + 5) = 0;
  param_4[9] = 0xc0;
  return;
}



/* Entry: 108160124; end: 108160163;  */

void FUN_108160124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_10818d6e4();
  *param_1 = &PTR_FUN_110a288f8;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)((long)param_1 + 0x4c) = param_2[4];
  *(undefined8 *)((long)param_1 + 0x44) = uVar4;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x34) = uVar2;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar1;
  return;
}


