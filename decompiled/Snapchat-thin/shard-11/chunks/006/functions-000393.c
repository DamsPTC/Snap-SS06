/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087261c8; end: 108726297;  */

long FUN_1087261c8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c27cfc();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_108725c1c(param_1 + 0x20,param_2 + 0x20);
  FUN_108725edc(param_1 + 0x40,param_2 + 0x40);
  func_0x000108725a64(param_1 + 0x60,param_2 + 0x60);
  func_0x000107c27cfc(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  func_0x000107c27cfc(param_1 + 0xa0,param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  func_0x000107c27c5c(param_1 + 200,param_2 + 200);
  func_0x000107c295bc(param_1 + 0xe8,param_2 + 0xe8);
  FUN_108726544(param_1 + 0x100,param_2 + 0x100);
  uVar2 = *(undefined8 *)(param_2 + 0x148);
  uVar1 = *(undefined8 *)(param_2 + 0x140);
  uVar4 = *(undefined8 *)(param_2 + 0x158);
  uVar3 = *(undefined8 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x148) = uVar2;
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  *(undefined8 *)(param_1 + 0x158) = uVar4;
  *(undefined8 *)(param_1 + 0x150) = uVar3;
  FUN_1087266f8(param_1 + 0x168,param_2 + 0x168);
  FUN_108726740(param_1 + 0x198,param_2 + 0x198);
  FUN_108726298(param_1 + 0x1c0,param_2 + 0x1c0);
  return param_1;
}



/* Entry: 108726298; end: 1087262bf;  */

undefined8 * FUN_108726298(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 != *(char *)(param_2 + 0xc)) {
    if (cVar1 != '\0') {
      puVar2 = param_1;
      if (*(char *)(param_1 + 0xc) == '\x01') {
        puVar2 = param_1 + 3;
        func_0x000104be12f8(puVar2);
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      return puVar2;
    }
    FUN_1086846c4();
    *(undefined1 *)(param_1 + 0xc) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    param_1[1] = uVar4;
    *param_1 = uVar3;
    func_0x0001087262f4(param_1 + 3,param_2 + 3);
    return param_1;
  }
  return param_1;
}



/* Entry: 1087262c0; end: 10872631f;  */

undefined8 * FUN_1087262c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001087262f4(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 108726320; end: 108726347;  */

void FUN_108726320(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c27a18();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    FUN_108684788();
    func_0x000108687bd4();
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32f7c();
    FUN_10872611c();
    uVar2 = *(undefined1 *)(unaff_x19 + 0x1c);
    *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x20 + 0x1c) = uVar2;
    return;
  }
  return;
}



/* Entry: 108726348; end: 108726377;  */

void FUN_108726348(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32f7c();
  FUN_10872611c();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x1c);
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x1c) = uVar1;
  return;
}



/* Entry: 108726378; end: 10872639f;  */

void FUN_108726378(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == *(char *)(param_2 + 0x18);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000104be1340();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    FUN_108684804();
    func_0x0001006a07dc();
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108726d24();
    if (!bVar2) {
      func_0x000108726cf4();
      FUN_1087263c8();
    }
    return;
  }
  return;
}



/* Entry: 1087263a0; end: 1087263c7;  */

void FUN_1087263a0(void)

{
  undefined1 in_ZR;
  
  func_0x000108726d24();
  if (!(bool)in_ZR) {
    func_0x000108726cf4();
    FUN_1087263c8();
  }
  return;
}



/* Entry: 1087263c8; end: 1087263d7;  */

void FUN_1087263c8(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d6c();
    func_0x000108726d90(0x28);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108726474();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x28;
        func_0x000104be13c8();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108726474();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869e7d0();
    func_0x000108726d54();
    func_0x000105295bac();
    func_0x000108726d30();
    FUN_108684874();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086848c8();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1087263d8; end: 108726473;  */

void FUN_1087263d8(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d6c();
    func_0x000108726d90(0x28);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108726474();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x28;
        func_0x000104be13c8();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108726474();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869e7d0();
    func_0x000108726d54();
    func_0x000105295bac();
    func_0x000108726d30();
    FUN_108684874();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086848c8();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108726474; end: 10872648f;  */

void FUN_108726474(void)

{
  func_0x000108726cb4();
  FUN_108726490();
  return;
}



/* Entry: 108726490; end: 1087264cf;  */

void FUN_108726490(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108726ca0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x28) {
    func_0x000107c32f80();
    FUN_1087264d0();
  }
  func_0x000108726d48();
  return;
}



/* Entry: 1087264d0; end: 1087264f7;  */

void FUN_1087264d0(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c27a04();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    FUN_108684984();
    func_0x000108687bd4();
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32f7c();
    func_0x000107c295bc();
    *(undefined1 *)(unaff_x20 + 0x18) = *(undefined1 *)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 1087264f8; end: 10872651f;  */

void FUN_1087264f8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32f7c();
  func_0x000107c295bc();
  *(undefined1 *)(unaff_x20 + 0x18) = *(undefined1 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 108726520; end: 108726543;  */

void FUN_108726520(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27a04();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 108726544; end: 10872656b;  */

void FUN_108726544(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x000104be1498();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return;
    }
    FUN_1086849ec();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32f7c();
    FUN_10872659c();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x2d) = *(undefined8 *)(unaff_x19 + 0x2d);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
    return;
  }
  return;
}



/* Entry: 10872656c; end: 10872659b;  */

void FUN_10872656c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32f7c();
  FUN_10872659c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x2d) = *(undefined8 *)(unaff_x19 + 0x2d);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return;
}



/* Entry: 10872659c; end: 1087265c3;  */

undefined1 * FUN_10872659c(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = param_1[0x20];
  if (cVar1 != param_2[0x20]) {
    if (cVar1 != '\0') {
      puVar2 = param_1;
      if (param_1[0x20] == '\x01') {
        puVar2 = param_1 + 8;
        func_0x000104be14c8(puVar2);
        param_1[0x20] = 0;
      }
      return puVar2;
    }
    FUN_108684a70();
    func_0x000108687bd4();
    return param_1;
  }
  if (cVar1 != '\0') {
    *param_1 = *param_2;
    func_0x0001087265ec(param_1 + 8,param_2 + 8);
    return param_1;
  }
  return param_1;
}



/* Entry: 1087265c4; end: 108726613;  */

undefined1 * FUN_1087265c4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  func_0x0001087265ec(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 108726614; end: 10872661f;  */

void FUN_108726614(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = param_3 - param_2 >> 4;
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 4) < uVar1) {
    func_0x00010869e968(param_1);
    func_0x00010527f508(param_1,uVar1);
    func_0x000108726d30();
    FUN_108684b2c();
    lVar3 = param_1[1];
  }
  else {
    lVar4 = param_1[1];
    lVar2 = lVar4 - lVar3;
    if ((ulong)(lVar2 >> 4) < uVar1) {
      if (lVar4 != lVar3) {
        func_0x000108726d3c(param_1,param_2,lVar2 + -4);
        _memmove();
        lVar4 = param_1[1];
      }
      param_3 = param_3 - (param_2 + lVar2);
      if (param_3 != 0) {
        _memmove(lVar4,param_2 + lVar2,param_3 + -4);
      }
      lVar3 = lVar4 + param_3;
      goto LAB_1087266e0;
    }
  }
  if (param_3 - param_2 != 0) {
    func_0x000108726d3c();
    _memmove();
  }
  lVar3 = lVar3 + (param_3 - param_2);
LAB_1087266e0:
  param_1[1] = lVar3;
  return;
}



/* Entry: 108726620; end: 1087266f7;  */

void FUN_108726620(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 4) < param_4) {
    func_0x00010869e968(param_1);
    func_0x00010527f508(param_1,param_4);
    func_0x000108726d30();
    FUN_108684b2c();
    lVar2 = param_1[1];
  }
  else {
    lVar3 = param_1[1];
    lVar1 = lVar3 - lVar2;
    if ((ulong)(lVar1 >> 4) < param_4) {
      if (lVar3 != lVar2) {
        func_0x000108726d3c(param_1,param_2,lVar1 + -4);
        _memmove();
        lVar3 = param_1[1];
      }
      param_3 = param_3 - (param_2 + lVar1);
      if (param_3 != 0) {
        _memmove(lVar3,param_2 + lVar1,param_3 + -4);
      }
      lVar2 = lVar3 + param_3;
      goto LAB_1087266e0;
    }
  }
  if (param_3 - param_2 != 0) {
    func_0x000108726d3c();
    _memmove();
  }
  lVar2 = lVar2 + (param_3 - param_2);
LAB_1087266e0:
  param_1[1] = lVar2;
  return;
}



/* Entry: 1087266f8; end: 10872671f;  */

void FUN_1087266f8(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 != *(char *)(param_2 + 0x28)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x28) == '\x01') {
        func_0x000107c279a4();
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      return;
    }
    FUN_108684ba4();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32f7c();
    func_0x000107c27c5c();
    func_0x000108726dac();
    return;
  }
  return;
}



/* Entry: 108726720; end: 10872673f;  */

void FUN_108726720(void)

{
  func_0x000107c32f7c();
  func_0x000107c27c5c();
  func_0x000108726dac();
  return;
}



/* Entry: 108726740; end: 108726767;  */

void FUN_108726740(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c27914();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    FUN_108684bdc();
    func_0x000108687bd4();
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108726ce8();
    func_0x000108726dcc();
    return;
  }
  return;
}



/* Entry: 108726768; end: 1087267d7;  */

void FUN_108726768(void)

{
  func_0x000108726ce8();
  func_0x000108726dcc();
  return;
}



/* Entry: 1087267d8; end: 1087267e7;  */

void FUN_1087267d8(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d6c();
    func_0x000108726d90(0x60);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108726884();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x60;
        func_0x000104be1474();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108726884();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869ead8();
    func_0x000108726d54();
    func_0x0001052933c8();
    func_0x000108726d30();
    func_0x000108684bf8();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108684c60();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1087267e8; end: 108726883;  */

void FUN_1087267e8(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d6c();
    func_0x000108726d90(0x60);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108726884();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x60;
        func_0x000104be1474();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108726884();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869ead8();
    func_0x000108726d54();
    func_0x0001052933c8();
    func_0x000108726d30();
    func_0x000108684bf8();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108684c60();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108726884; end: 10872689f;  */

void FUN_108726884(void)

{
  func_0x000108726cb4();
  FUN_1087268a0();
  return;
}



/* Entry: 1087268a0; end: 1087268df;  */

void FUN_1087268a0(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108726ca0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x60) {
    func_0x000107c32f80();
    FUN_1087268e0();
  }
  func_0x000108726d48();
  return;
}



/* Entry: 1087268e0; end: 10872696b;  */

void FUN_1087268e0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108726ce8();
  func_0x000108726908(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 10872696c; end: 108726993;  */

void FUN_10872696c(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c27914();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    FUN_108684d6c();
    func_0x000108687bd4();
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108726ce8();
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 108726994; end: 1087269b7;  */

void FUN_108726994(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108726ce8();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1087269b8; end: 1087269c3;  */

void FUN_1087269b8(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  
  uVar1 = param_3 - param_2 >> 5;
  if ((ulong)(param_1[2] - *param_1 >> 5) < uVar1) {
    func_0x00010869eb70(param_1);
    func_0x000105293790(param_1,uVar1);
    func_0x000108726d30();
    func_0x000108684d8c();
    func_0x000108726d54();
  }
  else {
    func_0x000108726d6c();
    if (uVar1 <= (ulong)(unaff_x23 >> 5)) {
      FUN_108726a8c(param_2,param_3);
      func_0x00010065adc4();
      while (param_1 != unaff_x19) {
        func_0x0001006d4274();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_108726a8c(param_2,param_2 + unaff_x23);
    func_0x000108726d60();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108684de0();
  unaff_x19[1] = (long)param_1;
  return;
}



/* Entry: 1087269c4; end: 108726a8b;  */

void FUN_1087269c4(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  
  if ((ulong)(param_1[2] - *param_1 >> 5) < param_4) {
    func_0x00010869eb70(param_1);
    func_0x000105293790(param_1,param_4);
    func_0x000108726d30();
    func_0x000108684d8c();
    func_0x000108726d54();
  }
  else {
    func_0x000108726d6c();
    if (param_4 <= (ulong)(unaff_x23 >> 5)) {
      FUN_108726a8c(param_2,param_3);
      func_0x00010065adc4();
      while (param_1 != unaff_x19) {
        func_0x0001006d4274();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_108726a8c(param_2,param_2 + unaff_x23);
    func_0x000108726d60();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108684de0();
  unaff_x19[1] = (long)param_1;
  return;
}



/* Entry: 108726a8c; end: 108726aa7;  */

void FUN_108726a8c(void)

{
  func_0x000108726cb4();
  FUN_108726aa8();
  return;
}



/* Entry: 108726aa8; end: 108726ae7;  */

void FUN_108726aa8(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108726ca0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x20) {
    func_0x000107c32f80();
    FUN_108726ae8();
  }
  func_0x000108726d48();
  return;
}



/* Entry: 108726ae8; end: 108726b07;  */

void FUN_108726ae8(void)

{
  func_0x000108726ce8();
  func_0x000108726dcc();
  return;
}



/* Entry: 108726b08; end: 108726b2f;  */

void FUN_108726b08(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 != *(char *)(param_2 + 0x28)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x28) == '\x01') {
        func_0x000107c27914();
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      return;
    }
    FUN_108684e7c();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108726ce8();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    return;
  }
  return;
}



/* Entry: 108726b30; end: 108726b87;  */

void FUN_108726b30(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000108726ce8();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 108726b88; end: 108726baf;  */

void FUN_108726b88(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  long unaff_x19;
  long unaff_x20;
  
  cVar2 = *(char *)(param_1 + 0x70);
  if (cVar2 != *(char *)(param_2 + 0x70)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x70) == '\x01') {
        func_0x000107c279f0();
        *(undefined1 *)(param_1 + 0x70) = 0;
      }
      return;
    }
    func_0x000100672480();
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  if (cVar2 != '\0') {
    func_0x000108726ce8();
    uVar3 = *(undefined1 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x20 + 0x20) = uVar3;
    func_0x000107c28d24(unaff_x20 + 0x28,unaff_x19 + 0x28);
    func_0x000107c27c5c(unaff_x20 + 0x48,unaff_x19 + 0x48);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x68);
    *(undefined1 *)(unaff_x20 + 0x6c) = *(undefined1 *)(unaff_x19 + 0x6c);
    *(undefined4 *)(unaff_x20 + 0x68) = uVar1;
    return;
  }
  return;
}



/* Entry: 108726bb0; end: 108726c03;  */

void FUN_108726bb0(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108726ce8();
  uVar2 = *(undefined1 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x20) = uVar2;
  func_0x000107c28d24(unaff_x20 + 0x28,unaff_x19 + 0x28);
  func_0x000107c27c5c(unaff_x20 + 0x48,unaff_x19 + 0x48);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x68);
  *(undefined1 *)(unaff_x20 + 0x6c) = *(undefined1 *)(unaff_x19 + 0x6c);
  *(undefined4 *)(unaff_x20 + 0x68) = uVar1;
  return;
}



/* Entry: 108726c04; end: 108726c2b;  */

void FUN_108726c04(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x50);
  if (cVar1 != *(char *)(param_2 + 0x50)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x50) == '\x01') {
        func_0x000104be1234();
        *(undefined1 *)(param_1 + 0x50) = 0;
      }
      return;
    }
    func_0x000104be11e4();
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32f7c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x000108726dcc();
    func_0x000107c32f88();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    uVar2 = *(undefined1 *)(unaff_x19 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
    *(undefined1 *)(unaff_x20 + 0x48) = uVar2;
    return;
  }
  return;
}



/* Entry: 108726c2c; end: 108726c67;  */

void FUN_108726c2c(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c32f7c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x000108726dcc();
  func_0x000107c32f88();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x48) = uVar1;
  return;
}



/* Entry: 108726c68; end: 108726dd7;  */

void FUN_108726c68(void)

{
  return;
}



/* Entry: 108726dd8; end: 108726eef;  */

undefined8 * FUN_108726dd8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  param_1[1] = &PTR_FUN_110a68f48;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_110a68f08;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  func_0x000107c278b8(auStack_58,&UNK_10f4b27e9);
  func_0x000107c28a44(param_1 + 9,param_2,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  FUN_108726ef0(auStack_68,1);
  puStack_78 = param_1 + 6;
  puStack_70 = param_1 + 7;
  FUN_1087274dc(&puStack_78,auStack_68);
  func_0x00010872750c(auStack_68);
  return param_1;
}



/* Entry: 108726ef0; end: 108726f63;  */

void FUN_108726ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xf0;
  __Znwm();
  FUN_1087275a0();
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000107c28a38(&uStack_38);
  func_0x000107c28a38(&uStack_40);
  func_0x000107c28a3c(&uStack_28);
  func_0x000107c28a3c(&uStack_30);
  return;
}



/* Entry: 108726f64; end: 108726fd3;  */

void FUN_108726f64(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  lStack_50 = param_1;
  func_0x000107c288a8(&uStack_48,param_1 + 0x48);
  lStack_40 = lStack_50;
  uStack_38 = uStack_48;
  uStack_48 = 0;
  FUN_1087275c0(auStack_58,&lStack_40,uVar1);
  func_0x000107c288ac(&uStack_38);
  func_0x000107c288ac(&uStack_48);
  func_0x000107c27f9c(auStack_58);
  return;
}



/* Entry: 108726fd4; end: 1087271ef;  */

void FUN_108726fd4(undefined8 param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  uint extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar12;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  long lVar13;
  long lVar14;
  
  puVar7 = (undefined8 *)0x48;
  __Znwm();
  *puVar7 = FUN_108727900;
  puVar7[1] = FUN_108727acc;
  puVar7[7] = param_1;
  plVar8 = puVar7 + 2;
  func_0x000107c27f94();
  func_0x000108727f54();
  func_0x000108727dd0();
  while( true ) {
    func_0x000108727f88();
    if (extraout_x8 != 0) {
      do {
        func_0x000108727e0c();
      } while (extraout_w10 != 0);
    }
    puVar9 = puVar7 + 4;
    func_0x000107c314f0();
    if (((ulong)puVar9 & 1) == 0) {
      *(undefined1 *)(puVar7 + 8) = 0;
      if (*plVar8 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108727f08();
      if (((ulong)puVar9 & 1) != 0) {
        return;
      }
    }
    pbVar1 = (byte *)(puVar7[5] + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    if ((*(long *)(puVar7[5] + 0xe8) == 0) && ((*(byte *)(puVar7[5] + 0xb8) & 1) != 0)) break;
    func_0x000108727e98();
    func_0x000107c314e4(extraout_x8_00 + 0x10);
    *pbVar1 = 0;
    func_0x000108727ecc();
    plVar10 = (long *)puVar7[7];
    FUN_1087271f0(puVar7 + 6);
    func_0x000108727fbc(puVar7[6]);
    do {
      func_0x000108727e0c();
    } while (extraout_w10_00 != 0);
    func_0x000108727e88();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 8) = 1;
      lVar13 = puVar7[4];
      lVar14 = *plVar8;
      if (lVar14 == 0) {
        func_0x000107c3a5c0();
        lVar14 = *plVar10;
      }
      plVar10 = (long *)(lVar13 + 0x10);
      do {
        lVar13 = *plVar10;
        if (lVar13 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          bVar6 = cVar4 == '\0';
          uVar5 = 1;
          if (bVar6) {
            func_0x000108727f9c();
            uVar12 = extraout_x8_01;
            if (bVar6) {
              func_0x000108727e34();
              iVar2 = extraout_w8_00;
              if ((bool)uVar5) {
                iVar2 = extraout_w9;
              }
              puVar11 = (undefined1 *)(ulong)(iVar2 * 0x18 + 0x10);
              _malloc();
              *puVar11 = (char)iVar2;
              func_0x000108727f28(0);
              uVar12 = extraout_x8_02;
            }
            uVar12 = uVar12 & 0xffffffff;
            plVar8[uVar12 * 3 + 2] = 0;
            plVar8[uVar12 * 3 + 3] = (long)puVar7;
            plVar8[uVar12 * 3 + 4] = lVar14;
            func_0x000108727ed4();
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    func_0x000108727f00();
    func_0x000108727e24();
    func_0x000108727e4c();
  }
  func_0x000107c314e4(puVar7[5] + 0x58);
  *pbVar1 = 0;
  func_0x000108727ecc();
  func_0x000108727e5c();
  func_0x000108727e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar7);
  return;
}



/* Entry: 1087271f0; end: 108727277;  */

void FUN_1087271f0(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c27f94(auStack_48);
  func_0x000107c287c4(param_1,auStack_48);
  (**(code **)(**(long **)(param_2 + 0x20) + 0xd8))(*(long **)(param_2 + 0x20),9);
  func_0x000107c287c8(auStack_48);
  func_0x000107c27fb8(auStack_48);
  return;
}



/* Entry: 108727278; end: 1087272a7;  */

void FUN_108727278(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int extraout_w10;
  
  func_0x00010bcd3614(*(undefined8 *)(param_2 + 0x38));
  iVar1 = (int)param_2 + 0x88;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2 + 0x48);
  }
  lVar2 = *(long *)(param_2 + 0x90);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1087272a8; end: 108727357;  */

void FUN_1087272a8(long param_1,int param_2,uint param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  
  if (param_2 == 0) {
    if ((param_5 >> 0x20 & 1) != 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    else {
      if (8 < param_3) {
        return;
      }
      if ((1 << (ulong)(param_3 & 0x1f) & 0x157U) == 0) {
        return;
      }
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 0x20);
    (**(code **)(*plVar1 + 0xc0))();
    if (param_2 != (int)plVar1) {
      return;
    }
    if ((param_5 >> 0x20 & 1) == 0) {
      return;
    }
  }
  FUN_1087273b0(param_1 + 0x38);
  return;
}



/* Entry: 108727358; end: 10872735f;  */

void FUN_108727358(long param_1,int param_2,uint param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  
  if (param_2 == 0) {
    if ((param_5 >> 0x20 & 1) != 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    else {
      if (8 < param_3) {
        return;
      }
      if ((1 << (ulong)(param_3 & 0x1f) & 0x157U) == 0) {
        return;
      }
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar1 + 0xc0))();
    if (param_2 != (int)plVar1) {
      return;
    }
    if ((param_5 >> 0x20 & 1) == 0) {
      return;
    }
  }
  FUN_1087273b0(param_1 + 0x30);
  return;
}



/* Entry: 108727360; end: 1087273af;  */

void FUN_108727360(long param_1,undefined8 param_2,int *param_3)

{
  if (((char)param_3[1] == '\x01' && *param_3 == 2) && (*(char *)(param_1 + 0x40) == '\x01')) {
    FUN_1087273b0(param_1 + 0x38);
  }
  return;
}



/* Entry: 1087273b0; end: 1087274ab;  */

/* WARNING: Possible PIC construction at 0x000108727454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108727458) */

void FUN_1087273b0(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *unaff_x19;
  long *plVar15;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_30 [8];
  byte *pbStack_28;
  
  puVar7 = auStack_30;
  puVar16 = &stack0xfffffffffffffff0;
  iVar8 = (int)*param_1 + 0x10;
  func_0x000107c314e8();
  if (iVar8 == 0) {
    return;
  }
  pbVar1 = (byte *)(*param_1 + 0xa8);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  lVar11 = *param_1;
  if (*(char *)(lVar11 + 0xb8) == '\x01') {
    pbVar9 = (byte *)(lVar11 + 0x10);
    unaff_x30 = 0x108727458;
    pbStack_28 = pbVar1;
  }
  else {
    uVar12 = *(long *)(lVar11 + 0xe0) + 1;
    uVar14 = *(ulong *)(lVar11 + 0xa0);
    uVar6 = 0;
    if (uVar14 != 0) {
      uVar6 = uVar12 / uVar14;
    }
    *(ulong *)(lVar11 + 0xe0) = uVar12 - uVar6 * uVar14;
    *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
    *pbVar1 = 0;
    pbVar9 = (byte *)(*param_1 + 0x58);
    puVar7 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    puVar16 = unaff_x29;
  }
  *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar7 + -0x20) = unaff_x20;
  *(long **)(puVar7 + -0x18) = param_1;
  *(undefined1 **)(puVar7 + -0x10) = puVar16;
  *(undefined8 *)(puVar7 + -8) = unaff_x30;
  do {
    bVar2 = *pbVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar9,0x10);
    if (bVar5) {
      *pbVar9 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  if (*(long *)(pbVar9 + 0x40) != 0) {
    uVar12 = *(ulong *)(pbVar9 + 0x38);
    puVar13 = (undefined8 *)
              ((*(undefined8 **)(pbVar9 + 0x20))[uVar12 / 0xaa] + (uVar12 % 0xaa) * 0x18);
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    puVar3 = (undefined8 *)puVar13[1];
    plVar15 = (long *)puVar13[2];
    *(ulong *)(pbVar9 + 0x38) = uVar12 + 1;
    *(long *)(pbVar9 + 0x40) = *(long *)(pbVar9 + 0x40) + -1;
    if (0x153 < uVar12 + 1) {
      uVar10 = **(undefined8 **)(pbVar9 + 0x20);
      *(code **)(puVar7 + -0x38) = UNRECOVERED_JUMPTABLE;
      func_0x000107c60e14(uVar10);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar7 + -0x38);
      *(long *)(pbVar9 + 0x20) = *(long *)(pbVar9 + 0x20) + 8;
      *(long *)(pbVar9 + 0x38) = *(long *)(pbVar9 + 0x38) + -0xaa;
    }
    *pbVar9 = 0;
    if (plVar15 == (long *)0x0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100671800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(puVar3);
        return;
      }
      (*(code *)*puVar3)(puVar3);
    }
    else {
      (**(code **)(*plVar15 + 0x10))(plVar15,UNRECOVERED_JUMPTABLE,puVar3);
    }
    return;
  }
  *(int *)(pbVar9 + 0x10) = *(int *)(pbVar9 + 0x10) + 1;
  *pbVar9 = 0;
  return;
}



/* Entry: 1087274ac; end: 1087274b7;  */

void FUN_1087274ac(long param_1,undefined8 param_2,int *param_3)

{
  if (((char)param_3[1] == '\x01' && *param_3 == 2) && (*(char *)(param_1 + 0x38) == '\x01')) {
    FUN_1087273b0(param_1 + 0x30);
  }
  return;
}



/* Entry: 1087274b8; end: 1087274cb;  */

void FUN_1087274b8(void)

{
  FUN_108727534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087274cc; end: 1087274db;  */

undefined8 * FUN_1087274cc(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110a68f08;
  *param_1 = &PTR_FUN_110a68f48;
  FUN_10865a95c(param_1 + 8);
  func_0x000107c28a38(param_1 + 6);
  func_0x000107c28a3c(param_1 + 5);
  func_0x000107c29344(param_1 + 3);
  FUN_108687d5c(param_1);
  return param_1 + -1;
}



/* Entry: 1087274dc; end: 108727533;  */

void FUN_1087274dc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 unaff_x19;
  
  func_0x000107c28a2c(*param_1);
  plVar1 = (long *)param_1[1];
  func_0x000100555278(plVar1,param_2 + 8);
  if (*plVar1 != 0) {
    func_0x000107c28a34(unaff_x19);
  }
  func_0x0001005552b0();
  return;
}



/* Entry: 108727534; end: 10872759f;  */

undefined8 * FUN_108727534(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a68f08;
  param_1[1] = &PTR_FUN_110a68f48;
  FUN_10865a95c(param_1 + 9);
  func_0x000107c28a38(param_1 + 7);
  func_0x000107c28a3c(param_1 + 6);
  func_0x000107c29344(param_1 + 4);
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 1087275a0; end: 1087275bf;  */

undefined8 *
FUN_1087275a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110d9aa10;
  param_1[1] = param_4;
  param_1[3] = 0;
  *(int *)(param_1 + 4) = (int)param_3;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x14] = param_3;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  func_0x000107c610a0();
  param_1[0x18] = param_3;
  param_1[0x19] = 0x1087275bc;
  param_1[0x1a] = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



/* Entry: 1087275c0; end: 108727677;  */

void FUN_1087275c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  *puVar2 = FUN_108727c2c;
  puVar2[1] = FUN_108727d3c;
  uVar1 = param_2[1];
  puVar2[4] = *param_2;
  puVar2[5] = uVar1;
  param_2[1] = 0;
  func_0x000107c27f94(puVar2 + 2);
  func_0x000107c287c4(param_1,puVar2 + 2);
  puVar2[6] = param_3;
  *(undefined1 *)(puVar2 + 8) = 0;
  (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,0,puVar2);
  return;
}



/* Entry: 108727678; end: 10872779b;  */

void FUN_108727678(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_108727bb8;
  puVar2[1] = FUN_108727c08;
  func_0x000107c27f94(puVar2 + 2);
  func_0x000108727f54();
  FUN_10872779c(puVar2 + 5);
  func_0x000108727fbc(puVar2[5]);
  do {
    func_0x000108727e0c();
  } while (extraout_w10 != 0);
  func_0x000108727e88();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 6) = 0;
    lVar5 = puVar2[4];
    func_0x000108727dd0();
    if (*param_1 == 0) {
      func_0x000107c3a5c0();
    }
    plVar3 = (long *)(lVar5 + 0x10);
    do {
      if (*plVar3 == 0) {
        func_0x000108727e78();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000108727f7c();
        plVar3 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000108727e64();
        if ((bool)in_ZR) {
          func_0x000108727e34();
          func_0x000108727dc0();
          func_0x000108727dec();
        }
        func_0x000108727d94();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108727f00();
  func_0x000108727e24();
  func_0x000108727e44();
  func_0x000108727e5c();
  func_0x000108727e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 10872779c; end: 1087278ff;  */

void FUN_10872779c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_2;
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_108727b04;
  puVar2[1] = FUN_108727b94;
  func_0x000107c27f94(puVar2 + 2);
  func_0x000107c287c4(param_1,puVar2 + 2);
  FUN_108726fd4(puVar2 + 5);
  func_0x000108727fbc(puVar2[5]);
  do {
    func_0x000108727e0c();
  } while (extraout_w10 != 0);
  func_0x000108727e88();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 6) = 0;
    lVar4 = puVar2[4];
    func_0x000108727dd0();
    if (*plVar5 == 0) {
      func_0x000107c3a5c0();
    }
    plVar5 = (long *)(lVar4 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x000108727e78();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108727f7c();
        plVar5 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000108727e64();
        if ((bool)in_ZR) {
          func_0x000108727e34();
          func_0x000108727dc0();
          func_0x000108727dec();
        }
        func_0x000108727d94();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108727f00();
  func_0x000108727e24();
  func_0x000108727e44();
  func_0x000108727e5c();
  func_0x000108727e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 108727900; end: 108727acb;  */

void FUN_108727900(void)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  ulong extraout_x8;
  long extraout_x8_00;
  long *plVar8;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar9;
  undefined1 extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  long unaff_x19;
  long *plVar11;
  long lVar12;
  
  func_0x000108727fb0();
  if ((extraout_x8 & 1) != 0) goto LAB_1087279dc;
  while( true ) {
    plVar11 = (long *)(unaff_x19 + 0x28);
    pbVar1 = (byte *)(*plVar11 + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    if ((*(long *)(*plVar11 + 0xe8) == 0) && ((*(byte *)(*plVar11 + 0xb8) & 1) != 0)) break;
    func_0x000108727e98();
    func_0x000107c314e4(extraout_x8_00 + 0x10);
    func_0x000108727f70();
    plVar11 = *(long **)(unaff_x19 + 0x38);
    FUN_1087271f0(unaff_x19 + 0x30);
    func_0x000108727fbc(*(undefined8 *)(unaff_x19 + 0x30));
    do {
      func_0x000108727e0c();
    } while (extraout_w10 != 0);
    func_0x000108727e88();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
      func_0x000108727ef0();
      lVar12 = *plVar11;
      if (lVar12 == 0) {
        func_0x000107c3a5c0();
        lVar12 = *plVar11;
      }
      plVar8 = (long *)(unaff_x19 + 0x38);
      do {
        if (*plVar8 == 0) {
          func_0x000108727e78();
          plVar8 = extraout_x8_02;
          uVar7 = extraout_w10_01;
          uVar10 = extraout_w11_00;
        }
        else {
          func_0x000108727f7c();
          plVar8 = extraout_x8_01;
          uVar7 = extraout_w10_00;
          uVar10 = extraout_w11;
        }
        if ((uVar10 & 1) != 0) {
          func_0x000108727f9c();
          uVar9 = extraout_x8_04;
          if ((bool)in_ZR) {
            func_0x000108727e34();
            uVar2 = extraout_w8;
            if ((bool)in_CY) {
              uVar2 = extraout_w9;
            }
            func_0x000108727dc0();
            *(undefined1 *)plVar11 = uVar2;
            func_0x000108727f28(0);
            uVar9 = extraout_x8_05;
          }
          lVar6 = (uVar9 & 0xffffffff) * 0x18;
          *(undefined8 *)(lVar6 + 0x11340e288) = 0;
          *(long *)(lVar6 + 0x11340e290) = unaff_x19;
          *(long *)(lVar6 + 0x11340e298) = lVar12;
          func_0x000108727ed4();
          return;
        }
      } while ((uVar7 >> 1 & 1) == 0);
    }
LAB_1087279dc:
    func_0x000108727f00();
    func_0x000108727e24();
    func_0x000108727e4c();
    func_0x000108727f88();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000108727e0c();
      } while (extraout_w10_02 != 0);
    }
    plVar11 = (long *)(unaff_x19 + 0x20);
    func_0x000107c314f0();
    if (((ulong)plVar11 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 0;
      func_0x000108727ef0();
      if (*plVar11 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108727f08();
      if (((ulong)plVar11 & 1) != 0) {
        return;
      }
    }
  }
  func_0x000107c314e4(*plVar11 + 0x58);
  func_0x000108727f70();
  func_0x000108727e5c();
  func_0x000108727e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108727acc; end: 108727b03;  */

void FUN_108727acc(void)

{
  int extraout_w8;
  
  func_0x000108727fb0();
  if (extraout_w8 == 1) {
    func_0x000108727e24();
    func_0x000108727e4c();
  }
  else {
    func_0x000108727ecc();
  }
  func_0x000108727e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108727b04; end: 108727b93;  */

void FUN_108727b04(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x000108727e24();
  func_0x000108727e44();
  func_0x000108727e5c();
  func_0x000108727e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108727b94; end: 108727bb7;  */

void FUN_108727b94(void)

{
  func_0x000108727f48();
  func_0x000108727e44();
  func_0x000108727e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108727bb8; end: 108727c07;  */

void FUN_108727bb8(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x000108727e24();
  func_0x000108727e44();
  func_0x000108727e5c();
  func_0x000108727e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108727c08; end: 108727c2b;  */

void FUN_108727c08(void)

{
  func_0x000108727f48();
  func_0x000108727e44();
  func_0x000108727e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108727c2c; end: 108727d3b;  */

void FUN_108727c2c(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  long lVar4;
  
  func_0x000108727fb0();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_108727678(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x38);
    do {
      func_0x000108727e0c();
    } while (extraout_w10 != 0);
    if (((uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
      lVar4 = *(long *)(unaff_x19 + 0x30);
      func_0x000108727dd0();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      plVar2 = (long *)(lVar4 + 0x10);
      do {
        if (*plVar2 == 0) {
          func_0x000108727e78();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108727f7c();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108727e64();
          if ((bool)in_ZR) {
            func_0x000108727e34();
            func_0x000108727dc0();
            func_0x000108727dec();
          }
          func_0x000108727d94();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(unaff_x19 + 0x30);
  func_0x000108727e4c();
  func_0x000108727f40();
  func_0x000108727e5c();
  func_0x000108727e1c();
  func_0x000107c288ac(unaff_x19 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108727d3c; end: 108727d73;  */

void FUN_108727d3c(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x000108727fb0();
  if (extraout_w8 == 1) {
    func_0x000108727e4c();
    func_0x000108727f40();
  }
  func_0x000108727e1c();
  func_0x000107c288ac(unaff_x19 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108727d74; end: 108727fc7;  */

void FUN_108727d74(void)

{
  return;
}



/* Entry: 108727fc8; end: 108728043;  */

bool FUN_108727fc8(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [440];
  char cStack_38;
  
  if (*(char *)(param_1 + 0x298) == '\x01') {
    func_0x000107c29f64(auStack_208,*(undefined8 *)(param_1 + 0x50),param_2,0);
    bVar1 = false;
    if (cStack_38 == '\x01') {
      puVar2 = auStack_1f0;
      func_0x000107c29e74(puVar2);
      bVar1 = (int)puVar2 == 2;
    }
    func_0x000107c288c8(auStack_208);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108728044; end: 108728077;  */

void FUN_108728044(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_168 [144];
  undefined1 auStack_d8 [128];
  long lStack_58;
  uint uStack_50;
  byte bStack_48;
  
  if (*(char *)(param_4 + 2) == '\x01') {
    iVar1 = (int)*param_4;
    lVar2 = param_4[1];
  }
  else {
    iVar1 = 2;
    if (param_3 != 0) {
      iVar1 = 1;
    }
    lVar2 = 0;
    if (param_3 != 0) {
      lVar2 = param_3 * 1000;
    }
  }
  FUN_1087292a0(auStack_d8,param_1,param_2,0);
  if ((bStack_48 & 1) == 0) {
    FUN_108729414(auStack_168);
    FUN_108729464(auStack_d8,auStack_168);
    FUN_108706cb0(auStack_168);
    lStack_58 = lVar2 / 1000;
    uStack_50 = (uint)(iVar1 != 2);
    FUN_1088663a4(*param_1,auStack_d8);
  }
  FUN_108706c90(auStack_d8);
  return;
}



/* Entry: 108728078; end: 1087281eb;  */

void FUN_108728078(long param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long *plVar6;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined1 auStack_c40 [24];
  undefined4 auStack_c28 [2];
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined1 auStack_bd0 [888];
  undefined1 uStack_858;
  undefined1 auStack_850 [888];
  char cStack_4d8;
  undefined1 auStack_4d0 [200];
  undefined1 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 auStack_3b8 [6];
  undefined1 auStack_3a0 [888];
  undefined8 uStack_28;
  
  func_0x000108728f84();
  uStack_28 = extraout_x8;
  FUN_108728ffc(auStack_850,*(undefined8 *)(param_1 + 0x40));
  uVar1 = cStack_4d8 == '\x01';
  if ((bool)uVar1) {
    auStack_bd0[0] = 0;
    uStack_858 = 0;
    func_0x000107c27af4(auStack_bd0,auStack_850);
    uStack_858 = 1;
    plVar6 = *(long **)(unaff_x19 + 0x60);
    func_0x000107c27af4(auStack_3a0,auStack_bd0);
    FUN_10871bb70(auStack_3b8,auStack_3a0,1);
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3c0 = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3d8 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3f0 = 0;
    auStack_4d0[0] = 0;
    uStack_408 = 0;
    param_2 = auStack_3b8;
    puVar5 = &uStack_3d0;
    param_4 = &uStack_3e8;
    (**(code **)(*plVar6 + 0x10))(plVar6,param_2,puVar5,param_4,&uStack_400,auStack_4d0);
    param_3 = SUB84(puVar5,0);
    func_0x000107c27b38(auStack_4d0);
    func_0x000107c28c5c(&uStack_400);
    func_0x000107c27b3c(&uStack_3e8);
    func_0x000107c28c60(&uStack_3d0);
    func_0x000107c27b40(auStack_3b8);
    func_0x000107c27b1c(auStack_3a0);
    FUN_108705f40(auStack_bd0);
  }
  puVar3 = auStack_850;
  FUN_108705f40();
  func_0x000108728f70(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b38(auStack_4d0);
  func_0x000107c28c5c(&uStack_400);
  func_0x000107c27b3c(&uStack_3e8);
  func_0x000107c28c60(&uStack_3d0);
  func_0x000107c27b40(auStack_3b8);
  func_0x000107c27b1c(auStack_3a0);
  FUN_108705f40(auStack_bd0);
  puVar4 = auStack_850;
  FUN_108705f40();
  func_0x000108728e34();
  puVar5 = &uStack_c70;
  func_0x000108728f84();
  iVar2 = (int)*(undefined8 *)(puVar4 + 0x40);
  uStack_c08 = extraout_x8_00;
  FUN_108728f98();
  if ((((ulong)param_4 & 1) != 0) || (iVar2 != 0)) {
    plVar6 = *(long **)(puVar3 + 0x60);
    func_0x000107c27994(&uStack_c70,param_2);
    uStack_c10 = uStack_c60;
    uStack_c18 = uStack_c68;
    uStack_c20 = uStack_c70;
    param_2 = auStack_c28;
    uStack_c68 = 0;
    uStack_c60 = 0;
    uStack_c70 = 0;
    uStack_c50 = 0;
    uStack_c48 = 0;
    uStack_c58 = 0;
    auStack_c28[0] = param_3;
    func_0x00010871c0b8(auStack_c40,auStack_c28,1);
    (**(code **)(*plVar6 + 0x20))(plVar6,0x100000002,auStack_c40);
    func_0x000107c27b3c(auStack_c40);
    func_0x000107c27914(&uStack_c20);
    func_0x000107c27914(&uStack_c58);
    func_0x000107c27914(&uStack_c70);
  }
  func_0x000108728f70(uStack_c08);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b3c(auStack_c40);
  func_0x000107c27914(param_2 + 2);
  func_0x000107c27914(&uStack_c58);
  func_0x000107c27914();
  func_0x000108728e34();
                    /* WARNING: Could not recover jumptable at 0x000108728310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((long)puVar5 + 0x20) + 0x10))();
  return;
}



/* Entry: 1087281ec; end: 108728303;  */

void FUN_1087281ec(long param_1,undefined4 *param_2,undefined4 param_3,ulong param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long *plVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_a0;
  func_0x000108728f84();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  uStack_38 = extraout_x8;
  FUN_108728f98();
  if (((param_4 & 1) != 0) || (iVar1 != 0)) {
    plVar3 = *(long **)(unaff_x19 + 0x60);
    func_0x000107c27994(&uStack_a0,param_2);
    uStack_40 = uStack_90;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    param_2 = auStack_58;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    auStack_58[0] = param_3;
    func_0x00010871c0b8(auStack_70,auStack_58,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,0x100000002,auStack_70);
    func_0x000107c27b3c(auStack_70);
    func_0x000107c27914(&uStack_50);
    func_0x000107c27914(&uStack_88);
    func_0x000107c27914(&uStack_a0);
  }
  func_0x000108728f70(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b3c(auStack_70);
  func_0x000107c27914(param_2 + 2);
  func_0x000107c27914(&uStack_88);
  func_0x000107c27914();
  func_0x000108728e34();
                    /* WARNING: Could not recover jumptable at 0x000108728310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((long)puVar2 + 0x20) + 0x10))();
  return;
}



/* Entry: 108728304; end: 1087283f3;  */

void FUN_108728304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108728310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1087283f4; end: 10872842b;  */

void FUN_1087283f4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x88))();
  return;
}



/* Entry: 10872842c; end: 10872843b;  */

void FUN_10872842c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108728438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x90))();
  return;
}



/* Entry: 10872843c; end: 1087284f3;  */

void FUN_10872843c(long param_1,undefined4 *param_2,undefined4 param_3,long param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long *plVar7;
  long unaff_x19;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined1 auStack_c40 [24];
  undefined4 auStack_c28 [2];
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined1 *puStack_be8;
  undefined1 *puStack_be0;
  code *pcStack_bd8;
  undefined1 auStack_bd0 [888];
  undefined1 uStack_858;
  undefined1 auStack_850 [888];
  char cStack_4d8;
  undefined1 auStack_4d0 [200];
  undefined1 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 auStack_3b8 [6];
  undefined1 auStack_3a0 [856];
  ulong uStack_48;
  long lStack_40;
  byte bStack_38;
  
  FUN_108728df0();
  if ((int)param_1 == 0) {
    func_0x000108728e8c();
    UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8_01 + 0x98);
    func_0x000108728e70();
                    /* WARNING: Could not recover jumptable at 0x000108728e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  bStack_38 = *(byte *)(param_4 + 0x1a8);
  uStack_48 = (ulong)bStack_38;
  lStack_40 = *(long *)(param_4 + 0xe0) * 1000;
  func_0x000108728f64();
  puVar6 = (undefined8 *)0x0;
  func_0x000108728e68();
  func_0x000108728e5c();
  func_0x000108728f84();
  FUN_108728ffc(auStack_850,*(undefined8 *)(param_1 + 0x40));
  uVar1 = cStack_4d8 == '\x01';
  if ((bool)uVar1) {
    auStack_bd0[0] = 0;
    uStack_858 = 0;
    func_0x000107c27af4(auStack_bd0,auStack_850);
    uStack_858 = 1;
    plVar7 = *(long **)(unaff_x19 + 0x60);
    func_0x000107c27af4(auStack_3a0,auStack_bd0);
    FUN_10871bb70(auStack_3b8,auStack_3a0,1);
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3c0 = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3d8 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3f0 = 0;
    auStack_4d0[0] = 0;
    uStack_408 = 0;
    param_2 = auStack_3b8;
    puVar5 = &uStack_3d0;
    puVar6 = &uStack_3e8;
    (**(code **)(*plVar7 + 0x10))(plVar7,param_2,puVar5,puVar6,&uStack_400,auStack_4d0);
    param_3 = SUB84(puVar5,0);
    func_0x000107c27b38(auStack_4d0);
    func_0x000107c28c5c(&uStack_400);
    func_0x000107c27b3c(&uStack_3e8);
    func_0x000107c28c60(&uStack_3d0);
    func_0x000107c27b40(auStack_3b8);
    func_0x000107c27b1c(auStack_3a0);
    FUN_108705f40(auStack_bd0);
  }
  puVar3 = auStack_850;
  FUN_108705f40();
  func_0x000108728f70(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b38(auStack_4d0);
  func_0x000107c28c5c(&uStack_400);
  func_0x000107c27b3c(&uStack_3e8);
  func_0x000107c28c60(&uStack_3d0);
  func_0x000107c27b40(auStack_3b8);
  func_0x000107c27b1c(auStack_3a0);
  FUN_108705f40(auStack_bd0);
  puVar4 = auStack_850;
  FUN_108705f40();
  func_0x000108728e34();
  puVar5 = &uStack_c70;
  pcStack_bd8 = FUN_1087281ec;
  puStack_be8 = puVar3;
  puStack_be0 = &stack0xfffffffffffffff0;
  func_0x000108728f84();
  iVar2 = (int)*(undefined8 *)(puVar4 + 0x40);
  uStack_c08 = extraout_x8_00;
  FUN_108728f98();
  if ((((ulong)puVar6 & 1) != 0) || (iVar2 != 0)) {
    plVar7 = *(long **)(puVar3 + 0x60);
    func_0x000107c27994(&uStack_c70,param_2);
    uStack_c10 = uStack_c60;
    uStack_c18 = uStack_c68;
    uStack_c20 = uStack_c70;
    param_2 = auStack_c28;
    uStack_c68 = 0;
    uStack_c60 = 0;
    uStack_c70 = 0;
    uStack_c50 = 0;
    uStack_c48 = 0;
    uStack_c58 = 0;
    auStack_c28[0] = param_3;
    func_0x00010871c0b8(auStack_c40,auStack_c28,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,0x100000002,auStack_c40);
    func_0x000107c27b3c(auStack_c40);
    func_0x000107c27914(&uStack_c20);
    func_0x000107c27914(&uStack_c58);
    func_0x000107c27914(&uStack_c70);
  }
  func_0x000108728f70(uStack_c08);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b3c(auStack_c40);
  func_0x000107c27914(param_2 + 2);
  func_0x000107c27914(&uStack_c58);
  func_0x000107c27914();
  func_0x000108728e34();
                    /* WARNING: Could not recover jumptable at 0x000108728310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((long)puVar5 + 0x20) + 0x10))();
  return;
}



/* Entry: 1087284f4; end: 10872852b;  */

void FUN_1087284f4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0xa8))();
  return;
}



/* Entry: 10872852c; end: 10872853b;  */

void FUN_10872852c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108728538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0xb0))();
  return;
}



/* Entry: 10872853c; end: 1087287ab;  */

void FUN_10872853c(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 auStack_430 [200];
  undefined1 uStack_368;
  char cStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  long lStack_50;
  
  if (*param_2 != param_2[1]) {
    FUN_1088627a0(&lStack_58,*(undefined8 *)(param_1 + 0x50));
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0x3f800000;
    func_0x000100869d24(&uStack_80,(lStack_50 - lStack_58) / 0x1d0);
    for (lVar3 = lStack_58; lVar3 != lStack_50; lVar3 = lVar3 + 0x1d0) {
      lVar1 = lVar3 + 0x18;
      FUN_10872a318(lVar1,*(undefined1 *)(param_1 + 0x298));
      if ((int)lVar1 != 0) {
        FUN_1086995ac(&uStack_80,lVar3);
      }
    }
    lStack_98 = 0;
    lStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27ab0(&lStack_98,(param_2[1] - *param_2) / 0x18);
    lStack_b0 = 0;
    lStack_a8 = 0;
    uStack_a0 = 0;
    func_0x000104bf1c14(&lStack_b0,uStack_68);
    lVar1 = param_2[1];
    for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
      puVar2 = &uStack_80;
      FUN_108699578(puVar2,lVar3);
      if ((int)puVar2 == 0) {
        func_0x000107c28840(&lStack_98,lVar3);
      }
      else {
        FUN_108728ffc(auStack_430,*(undefined8 *)(param_1 + 0x40),lVar3);
        if (cStack_b8 == '\x01') {
          func_0x000107c27b14(&lStack_b0,auStack_430);
        }
        FUN_108705f40(auStack_430);
      }
    }
    if (lStack_b0 != lStack_a8) {
      uStack_448 = 0;
      uStack_440 = 0;
      uStack_438 = 0;
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_450 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      auStack_430[0] = 0;
      uStack_368 = 0;
      (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                (*(long **)(param_1 + 0x60),&lStack_b0,&uStack_448,&uStack_460,&uStack_478,
                 auStack_430);
      func_0x000107c27b38(auStack_430);
      func_0x000107c28c5c(&uStack_478);
      func_0x000107c27b3c(&uStack_460);
      func_0x000107c28c60(&uStack_448);
    }
    if (lStack_98 != lStack_90) {
      (**(code **)(**(long **)(param_1 + 0x20) + 200))(*(long **)(param_1 + 0x20),&lStack_98);
    }
    func_0x000107c27b40(&lStack_b0);
    func_0x000107c27a04(&lStack_98);
    func_0x000100864b68(&uStack_80);
    func_0x0001086aaf34(&lStack_58);
  }
  return;
}



/* Entry: 1087287ac; end: 1087287e7;  */

void FUN_1087287ac(long param_1)

{
  long extraout_x8;
  
  FUN_108728f98(*(undefined8 *)(param_1 + 0x40));
  func_0x000108728e80();
                    /* WARNING: Could not recover jumptable at 0x000108728e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0xd0))();
  return;
}



/* Entry: 1087287e8; end: 1087287ef;  */

/* WARNING: Removing unreachable block (ram,0x000108728810) */
/* WARNING: Removing unreachable block (ram,0x000108728818) */

void FUN_1087287e8(long param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long unaff_x19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1;
  FUN_108727fc8(param_1,param_2);
  if ((int)lVar3 == 0) {
    func_0x000108728e80();
                    /* WARNING: Could not recover jumptable at 0x000108728e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8_00 + 0xd8))();
    return;
  }
  puVar2 = &uStack_a0;
  func_0x000108728f84();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  uStack_38 = extraout_x8;
  FUN_108728f98();
  if (iVar1 != 0) {
    plVar4 = *(long **)(unaff_x19 + 0x60);
    func_0x000107c27994(&uStack_a0,param_2);
    uStack_40 = uStack_90;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    param_2 = auStack_58;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    auStack_58[0] = 2;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    func_0x00010871c0b8(auStack_70,auStack_58,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,0x100000002,auStack_70);
    func_0x000107c27b3c(auStack_70);
    func_0x000107c27914(&uStack_50);
    func_0x000107c27914(&uStack_88);
    func_0x000107c27914(&uStack_a0);
  }
  func_0x000108728f70(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27b3c(auStack_70);
    func_0x000107c27914(param_2 + 2);
    func_0x000107c27914(&uStack_88);
    func_0x000107c27914();
    func_0x000108728e34();
                    /* WARNING: Could not recover jumptable at 0x000108728310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((long)puVar2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1087287f0; end: 108728867;  */

void FUN_1087287f0(long param_1,undefined4 *param_2,ulong param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long unaff_x19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_3 >> 0x20 & 1) == 0) {
    lVar3 = param_1;
    FUN_108727fc8(param_1,param_2);
    if ((int)lVar3 == 0) goto LAB_108728850;
  }
  else {
    in_ZR = (int)param_3 == 2;
    if ((!(bool)in_ZR) || ((*(byte *)(param_1 + 0x298) & 1) == 0)) {
LAB_108728850:
      func_0x000108728e80();
                    /* WARNING: Could not recover jumptable at 0x000108728e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0xd8))();
      return;
    }
  }
  puVar2 = &uStack_a0;
  func_0x000108728f84();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  uStack_38 = extraout_x8;
  FUN_108728f98();
  if (((param_3 & 0x100000000) != 0) || (iVar1 != 0)) {
    plVar4 = *(long **)(unaff_x19 + 0x60);
    func_0x000107c27994(&uStack_a0,param_2);
    uStack_40 = uStack_90;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    param_2 = auStack_58;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    auStack_58[0] = 2;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    func_0x00010871c0b8(auStack_70,auStack_58,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,0x100000002,auStack_70);
    func_0x000107c27b3c(auStack_70);
    func_0x000107c27914(&uStack_50);
    func_0x000107c27914(&uStack_88);
    func_0x000107c27914(&uStack_a0);
  }
  func_0x000108728f70(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b3c(auStack_70);
  func_0x000107c27914(param_2 + 2);
  func_0x000107c27914(&uStack_88);
  func_0x000107c27914();
  func_0x000108728e34();
                    /* WARNING: Could not recover jumptable at 0x000108728310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((long)puVar2 + 0x20) + 0x10))();
  return;
}



/* Entry: 108728868; end: 10872887f;  */

/* WARNING: Removing unreachable block (ram,0x000108728810) */
/* WARNING: Removing unreachable block (ram,0x000108728818) */

void FUN_108728868(long param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long unaff_x19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_1 = param_1 + -8;
  lVar3 = param_1;
  FUN_108727fc8(param_1,param_2);
  if ((int)lVar3 == 0) {
    func_0x000108728e80();
                    /* WARNING: Could not recover jumptable at 0x000108728e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8_00 + 0xd8))();
    return;
  }
  puVar2 = &uStack_a0;
  func_0x000108728f84();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  uStack_38 = extraout_x8;
  FUN_108728f98();
  if (iVar1 != 0) {
    plVar4 = *(long **)(unaff_x19 + 0x60);
    func_0x000107c27994(&uStack_a0,param_2);
    uStack_40 = uStack_90;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    param_2 = auStack_58;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    auStack_58[0] = 2;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    func_0x00010871c0b8(auStack_70,auStack_58,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,0x100000002,auStack_70);
    func_0x000107c27b3c(auStack_70);
    func_0x000107c27914(&uStack_50);
    func_0x000107c27914(&uStack_88);
    func_0x000107c27914(&uStack_a0);
  }
  func_0x000108728f70(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27b3c(auStack_70);
    func_0x000107c27914(param_2 + 2);
    func_0x000107c27914(&uStack_88);
    func_0x000107c27914();
    func_0x000108728e34();
                    /* WARNING: Could not recover jumptable at 0x000108728310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((long)puVar2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108728880; end: 10872894b;  */

void FUN_108728880(long param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  FUN_1086ba200(&lStack_48,param_2[1] - *param_2 >> 5);
  piVar1 = (int *)param_2[1];
  for (piVar3 = (int *)(*param_2 + 0x18); piVar2 = piVar3 + -6, piVar2 != piVar1;
      piVar3 = piVar3 + 8) {
    if ((*piVar3 == 2) && ((*(byte *)(param_1 + 0x298) & 1) != 0)) {
      FUN_1087281ec(param_1,piVar2,1,1);
    }
    else {
      FUN_1086ba264(&lStack_48,piVar2,piVar3);
    }
  }
  if (lStack_48 != lStack_40) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0xe8))(*(long **)(param_1 + 0x20),&lStack_48);
  }
  func_0x0001086cccc8(&lStack_48);
  return;
}



/* Entry: 10872894c; end: 10872896b;  */

void FUN_10872894c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108728958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0xf0))();
  return;
}



/* Entry: 10872896c; end: 1087289fb;  */

void FUN_10872896c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined1 auStack_c40 [24];
  undefined4 auStack_c28 [2];
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined1 *puStack_be8;
  undefined1 *puStack_be0;
  code *pcStack_bd8;
  undefined1 auStack_bd0 [888];
  undefined1 uStack_858;
  undefined1 auStack_850 [888];
  char cStack_4d8;
  undefined1 auStack_4d0 [200];
  undefined1 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 auStack_3b8 [6];
  undefined1 auStack_3a0 [848];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar9 = (undefined8 *)0x0;
  puVar5 = param_4;
  FUN_108728df0();
  if ((int)param_1 == 0) {
    func_0x000108728e8c();
    UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8_01 + 0x100);
    func_0x000108728e70();
                    /* WARNING: Could not recover jumptable at 0x000108728e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  lVar8 = param_4[4];
  if (lVar8 == 0) {
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    func_0x000108728f64();
    uVar7 = (undefined4)lVar8;
    func_0x000108728e68();
  }
  else {
    param_1 = *(ulong *)(unaff_x20 + 0x40);
    FUN_1087290d4();
    uVar7 = (undefined4)lVar8;
    puVar9 = puVar5;
  }
  func_0x000108728e8c();
  puVar6 = unaff_x19;
  (**(code **)(extraout_x8_02 + 0x128))();
  if ((param_1 & 1) != 0) {
    return;
  }
  func_0x000108728e5c();
  func_0x000108728f84();
  FUN_108728ffc(auStack_850,*(undefined8 *)(param_1 + 0x40));
  uVar1 = cStack_4d8 == '\x01';
  if ((bool)uVar1) {
    auStack_bd0[0] = 0;
    uStack_858 = 0;
    func_0x000107c27af4(auStack_bd0,auStack_850);
    uStack_858 = 1;
    plVar10 = *(long **)(unaff_x19 + 0x18);
    func_0x000107c27af4(auStack_3a0,auStack_bd0);
    FUN_10871bb70(auStack_3b8,auStack_3a0,1);
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3c0 = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3d8 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3f0 = 0;
    auStack_4d0[0] = 0;
    uStack_408 = 0;
    puVar6 = auStack_3b8;
    puVar5 = &uStack_3d0;
    puVar9 = &uStack_3e8;
    (**(code **)(*plVar10 + 0x10))(plVar10,puVar6,puVar5,puVar9,&uStack_400,auStack_4d0);
    uVar7 = SUB84(puVar5,0);
    func_0x000107c27b38(auStack_4d0);
    func_0x000107c28c5c(&uStack_400);
    func_0x000107c27b3c(&uStack_3e8);
    func_0x000107c28c60(&uStack_3d0);
    func_0x000107c27b40(auStack_3b8);
    func_0x000107c27b1c(auStack_3a0);
    FUN_108705f40(auStack_bd0);
  }
  puVar3 = auStack_850;
  FUN_108705f40();
  func_0x000108728f70(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b38(auStack_4d0);
  func_0x000107c28c5c(&uStack_400);
  func_0x000107c27b3c(&uStack_3e8);
  func_0x000107c28c60(&uStack_3d0);
  func_0x000107c27b40(auStack_3b8);
  func_0x000107c27b1c(auStack_3a0);
  FUN_108705f40(auStack_bd0);
  puVar4 = auStack_850;
  FUN_108705f40();
  func_0x000108728e34();
  puVar5 = &uStack_c70;
  pcStack_bd8 = FUN_1087281ec;
  puStack_be8 = puVar3;
  puStack_be0 = &stack0xfffffffffffffff0;
  func_0x000108728f84();
  iVar2 = (int)*(undefined8 *)(puVar4 + 0x40);
  uStack_c08 = extraout_x8_00;
  FUN_108728f98();
  if ((((ulong)puVar9 & 1) != 0) || (iVar2 != 0)) {
    plVar10 = *(long **)(puVar3 + 0x60);
    func_0x000107c27994(&uStack_c70,puVar6);
    uStack_c10 = uStack_c60;
    uStack_c18 = uStack_c68;
    uStack_c20 = uStack_c70;
    puVar6 = auStack_c28;
    uStack_c68 = 0;
    uStack_c60 = 0;
    uStack_c70 = 0;
    uStack_c50 = 0;
    uStack_c48 = 0;
    uStack_c58 = 0;
    auStack_c28[0] = uVar7;
    func_0x00010871c0b8(auStack_c40,auStack_c28,1);
    (**(code **)(*plVar10 + 0x20))(plVar10,0x100000002,auStack_c40);
    func_0x000107c27b3c(auStack_c40);
    func_0x000107c27914(&uStack_c20);
    func_0x000107c27914(&uStack_c58);
    func_0x000107c27914(&uStack_c70);
  }
  func_0x000108728f70(uStack_c08);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b3c(auStack_c40);
  func_0x000107c27914(puVar6 + 2);
  func_0x000107c27914(&uStack_c58);
  func_0x000107c27914();
  func_0x000108728e34();
                    /* WARNING: Could not recover jumptable at 0x000108728310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((long)puVar5 + 0x20) + 0x10))();
  return;
}



/* Entry: 1087289fc; end: 108728a3b;  */

void FUN_1087289fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108728a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x108))();
  return;
}



/* Entry: 108728a3c; end: 108728aab;  */

void FUN_108728a3c(uint param_1)

{
  long extraout_x8;
  
  func_0x000108728e3c();
  if ((param_1 & 1) != 0) {
    return;
  }
  func_0x000108728e80();
                    /* WARNING: Could not recover jumptable at 0x000108728e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x130))();
  return;
}



/* Entry: 108728aac; end: 108728aff;  */

void FUN_108728aac(long param_1,undefined4 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar7;
  long unaff_x19;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined1 auStack_c40 [24];
  undefined4 auStack_c28 [2];
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined1 auStack_bd0 [888];
  undefined1 uStack_858;
  undefined1 auStack_850 [888];
  char cStack_4d8;
  undefined1 auStack_4d0 [200];
  undefined1 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 auStack_3b8 [6];
  undefined1 auStack_3a0 [888];
  undefined8 uStack_28;
  
  if ((param_3 >> 0x20 & 1) == 0) {
    func_0x000108728e5c();
    FUN_108727fc8();
    if ((int)param_1 != 0) {
FUN_108728078:
      uVar6 = (undefined4)param_3;
      func_0x000108728e5c();
      func_0x000108728f84();
      uStack_28 = extraout_x8;
      FUN_108728ffc(auStack_850,*(undefined8 *)(param_1 + 0x40));
      uVar1 = cStack_4d8 == '\x01';
      if ((bool)uVar1) {
        auStack_bd0[0] = 0;
        uStack_858 = 0;
        func_0x000107c27af4(auStack_bd0,auStack_850);
        uStack_858 = 1;
        plVar7 = *(long **)(unaff_x19 + 0x60);
        func_0x000107c27af4(auStack_3a0,auStack_bd0);
        FUN_10871bb70(auStack_3b8,auStack_3a0,1);
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3c0 = 0;
        uStack_3e0 = 0;
        uStack_3e8 = 0;
        uStack_3d8 = 0;
        uStack_3f8 = 0;
        uStack_400 = 0;
        uStack_3f0 = 0;
        auStack_4d0[0] = 0;
        uStack_408 = 0;
        param_2 = auStack_3b8;
        puVar5 = &uStack_3d0;
        param_4 = &uStack_3e8;
        (**(code **)(*plVar7 + 0x10))(plVar7,param_2,puVar5,param_4,&uStack_400,auStack_4d0);
        uVar6 = SUB84(puVar5,0);
        func_0x000107c27b38(auStack_4d0);
        func_0x000107c28c5c(&uStack_400);
        func_0x000107c27b3c(&uStack_3e8);
        func_0x000107c28c60(&uStack_3d0);
        func_0x000107c27b40(auStack_3b8);
        func_0x000107c27b1c(auStack_3a0);
        FUN_108705f40(auStack_bd0);
      }
      puVar3 = auStack_850;
      FUN_108705f40();
      func_0x000108728f70(uStack_28);
      if ((bool)uVar1) {
        return;
      }
      ___stack_chk_fail();
      func_0x000107c27b38(auStack_4d0);
      func_0x000107c28c5c(&uStack_400);
      func_0x000107c27b3c(&uStack_3e8);
      func_0x000107c28c60(&uStack_3d0);
      func_0x000107c27b40(auStack_3b8);
      func_0x000107c27b1c(auStack_3a0);
      FUN_108705f40(auStack_bd0);
      puVar4 = auStack_850;
      FUN_108705f40();
      func_0x000108728e34();
      puVar5 = &uStack_c70;
      func_0x000108728f84();
      iVar2 = (int)*(undefined8 *)(puVar4 + 0x40);
      uStack_c08 = extraout_x8_00;
      FUN_108728f98();
      if ((((ulong)param_4 & 1) != 0) || (iVar2 != 0)) {
        plVar7 = *(long **)(puVar3 + 0x60);
        func_0x000107c27994(&uStack_c70,param_2);
        uStack_c10 = uStack_c60;
        uStack_c18 = uStack_c68;
        uStack_c20 = uStack_c70;
        param_2 = auStack_c28;
        uStack_c68 = 0;
        uStack_c60 = 0;
        uStack_c70 = 0;
        uStack_c50 = 0;
        uStack_c48 = 0;
        uStack_c58 = 0;
        auStack_c28[0] = uVar6;
        func_0x00010871c0b8(auStack_c40,auStack_c28,1);
        (**(code **)(*plVar7 + 0x20))(plVar7,0x100000002,auStack_c40);
        func_0x000107c27b3c(auStack_c40);
        func_0x000107c27914(&uStack_c20);
        func_0x000107c27914(&uStack_c58);
        func_0x000107c27914(&uStack_c70);
      }
      func_0x000108728f70(uStack_c08);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x000107c27b3c(auStack_c40);
        func_0x000107c27914(param_2 + 2);
        func_0x000107c27914(&uStack_c58);
        func_0x000107c27914();
        func_0x000108728e34();
                    /* WARNING: Could not recover jumptable at 0x000108728310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)((long)puVar5 + 0x20) + 0x10))();
        return;
      }
      return;
    }
  }
  else if (((int)param_3 == 2) && ((*(byte *)(param_1 + 0x298) & 1) != 0)) goto FUN_108728078;
  return;
}



/* Entry: 108728b00; end: 108728b2f;  */

void FUN_108728b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108728b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x148))();
  return;
}



/* Entry: 108728b30; end: 108728b8f;  */

void FUN_108728b30(long param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long *plVar7;
  long unaff_x19;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined1 auStack_c40 [24];
  undefined4 auStack_c28 [2];
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined1 *puStack_be8;
  undefined1 *puStack_be0;
  code *pcStack_bd8;
  undefined1 auStack_bd0 [888];
  undefined1 uStack_858;
  undefined1 auStack_850 [888];
  char cStack_4d8;
  undefined1 auStack_4d0 [200];
  undefined1 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 auStack_3b8 [6];
  undefined1 auStack_3a0 [856];
  undefined1 uStack_48;
  undefined1 uStack_38;
  
  FUN_108728df0();
  if ((int)param_1 == 0) {
    func_0x000108728e8c();
                    /* WARNING: Could not recover jumptable at 0x000108728b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8_01 + 0x160))();
    return;
  }
  uStack_48 = 0;
  uStack_38 = 0;
  func_0x000108728f64();
  puVar6 = (undefined8 *)0x0;
  func_0x000108728e68();
  func_0x000108728e5c();
  func_0x000108728f84();
  FUN_108728ffc(auStack_850,*(undefined8 *)(param_1 + 0x40));
  uVar1 = cStack_4d8 == '\x01';
  if ((bool)uVar1) {
    auStack_bd0[0] = 0;
    uStack_858 = 0;
    func_0x000107c27af4(auStack_bd0,auStack_850);
    uStack_858 = 1;
    plVar7 = *(long **)(unaff_x19 + 0x60);
    func_0x000107c27af4(auStack_3a0,auStack_bd0);
    FUN_10871bb70(auStack_3b8,auStack_3a0,1);
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3c0 = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3d8 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3f0 = 0;
    auStack_4d0[0] = 0;
    uStack_408 = 0;
    param_2 = auStack_3b8;
    puVar5 = &uStack_3d0;
    puVar6 = &uStack_3e8;
    (**(code **)(*plVar7 + 0x10))(plVar7,param_2,puVar5,puVar6,&uStack_400,auStack_4d0);
    param_3 = SUB84(puVar5,0);
    func_0x000107c27b38(auStack_4d0);
    func_0x000107c28c5c(&uStack_400);
    func_0x000107c27b3c(&uStack_3e8);
    func_0x000107c28c60(&uStack_3d0);
    func_0x000107c27b40(auStack_3b8);
    func_0x000107c27b1c(auStack_3a0);
    FUN_108705f40(auStack_bd0);
  }
  puVar3 = auStack_850;
  FUN_108705f40();
  func_0x000108728f70(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b38(auStack_4d0);
  func_0x000107c28c5c(&uStack_400);
  func_0x000107c27b3c(&uStack_3e8);
  func_0x000107c28c60(&uStack_3d0);
  func_0x000107c27b40(auStack_3b8);
  func_0x000107c27b1c(auStack_3a0);
  FUN_108705f40(auStack_bd0);
  puVar4 = auStack_850;
  FUN_108705f40();
  func_0x000108728e34();
  puVar5 = &uStack_c70;
  pcStack_bd8 = FUN_1087281ec;
  puStack_be8 = puVar3;
  puStack_be0 = &stack0xfffffffffffffff0;
  func_0x000108728f84();
  iVar2 = (int)*(undefined8 *)(puVar4 + 0x40);
  uStack_c08 = extraout_x8_00;
  FUN_108728f98();
  if ((((ulong)puVar6 & 1) != 0) || (iVar2 != 0)) {
    plVar7 = *(long **)(puVar3 + 0x60);
    func_0x000107c27994(&uStack_c70,param_2);
    uStack_c10 = uStack_c60;
    uStack_c18 = uStack_c68;
    uStack_c20 = uStack_c70;
    param_2 = auStack_c28;
    uStack_c68 = 0;
    uStack_c60 = 0;
    uStack_c70 = 0;
    uStack_c50 = 0;
    uStack_c48 = 0;
    uStack_c58 = 0;
    auStack_c28[0] = param_3;
    func_0x00010871c0b8(auStack_c40,auStack_c28,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,0x100000002,auStack_c40);
    func_0x000107c27b3c(auStack_c40);
    func_0x000107c27914(&uStack_c20);
    func_0x000107c27914(&uStack_c58);
    func_0x000107c27914(&uStack_c70);
  }
  func_0x000108728f70(uStack_c08);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b3c(auStack_c40);
  func_0x000107c27914(param_2 + 2);
  func_0x000107c27914(&uStack_c58);
  func_0x000107c27914();
  func_0x000108728e34();
                    /* WARNING: Could not recover jumptable at 0x000108728310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((long)puVar5 + 0x20) + 0x10))();
  return;
}



/* Entry: 108728b90; end: 108728bbf;  */

void FUN_108728b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108728b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x168))();
  return;
}



/* Entry: 108728bc0; end: 108728c1b;  */

undefined8 FUN_108728bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  
  uVar1 = param_1;
  FUN_108727fc8();
  if ((int)uVar1 != 0) {
    FUN_108728078(param_1,param_2);
    return 0;
  }
  func_0x000108728e80();
                    /* WARNING: Could not recover jumptable at 0x000108728e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x180))();
  return uVar1;
}



/* Entry: 108728c1c; end: 108728d77;  */

void FUN_108728c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108728c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x188))();
  return;
}



/* Entry: 108728d78; end: 108728d8b;  */

void FUN_108728d78(void)

{
  FUN_108728d9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108728d8c; end: 108728d9b;  */

long FUN_108728d8c(long param_1)

{
  func_0x000107c2964c(param_1 + 0x68);
  func_0x000107c296ac(param_1 + 0x58);
  func_0x000107c28808(param_1 + 0x48);
  func_0x000107c29710(param_1 + 0x38);
  func_0x000107c29574(param_1 + 0x28);
  func_0x000107c28ab4(param_1 + 0x18);
  FUN_108687d5c(param_1);
  return param_1 + -8;
}



/* Entry: 108728d9c; end: 108728def;  */

long FUN_108728d9c(long param_1)

{
  func_0x000107c2964c(param_1 + 0x70);
  func_0x000107c296ac(param_1 + 0x60);
  func_0x000107c28808(param_1 + 0x50);
  func_0x000107c29710(param_1 + 0x40);
  func_0x000107c29574(param_1 + 0x30);
  func_0x000107c28ab4(param_1 + 0x20);
  FUN_108687d5c(param_1 + 8);
  return param_1;
}


