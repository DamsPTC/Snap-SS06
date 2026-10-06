/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103141754; end: 103141783;  */

void FUN_103141754(undefined8 *param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x646573756572;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x64656b726170;
  }
  *param_1 = uVar1;
  param_1[1] = 0xe600000000000000;
  return;
}



/* Entry: 103141784; end: 103141817;  */

long FUN_103141784(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  puVar1 = PTR_PTR_1126acc90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Entry: 103141818; end: 10314192b;  */

void FUN_103141818(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  double dVar5;
  
  if (*(char *)(unaff_x20 + 0x28) != '\x01') {
    dVar5 = *(double *)(unaff_x20 + 0x20);
    func_0x000107c40fd4(*(undefined8 *)(unaff_x20 + 0x18));
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar2 = PTR_PTR_1126b2930;
    func_0x000107c61168();
    func_0x000107c40efc();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c446b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_3);
    }
    dVar5 = (param_1 - dVar5) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103141924);
      (*pcVar1)();
    }
    if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103141928);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10314192c);
      (*pcVar1)();
    }
    func_0x0001069af444(uVar4,puVar3,(long)dVar5);
    func_0x000107c61170(puVar3);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined1 *)(unaff_x20 + 0x28) = 1;
  }
  return;
}



/* Entry: 10314192c; end: 103141a5b;  */

void FUN_10314192c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = 0xed000064656c6961;
  uVar4 = 0x665f726574697277;
  if (param_1 != 5) {
    uVar5 = 0xe700000000000000;
    uVar4 = 0x776569765f6f6e;
  }
  uVar3 = 0x6873617263;
  if (param_1 != 3) {
    uVar3 = 0x6c75665f6b736964;
  }
  uVar1 = 0xe500000000000000;
  if (param_1 != 3) {
    uVar1 = 0xe90000000000006c;
  }
  if (param_1 < 5) {
    uVar5 = uVar1;
    uVar4 = uVar3;
  }
  uVar3 = 0x6c65636e6163;
  if (param_1 != 1) {
    uVar3 = 0x756f72676b636162;
  }
  uVar1 = 0xe600000000000000;
  if (param_1 != 1) {
    uVar1 = 0xea0000000000646e;
  }
  uVar2 = 0x73736563637573;
  if (param_1 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (param_1 != 0) {
    uVar3 = uVar1;
  }
  if (param_1 < 3) {
    uVar5 = uVar3;
    uVar4 = uVar2;
  }
  func_0x000107c5fadc(uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x0001069af630(uVar6,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 103141a5c; end: 103141b47;  */

/* WARNING: Possible PIC construction at 0x000103141aa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103141aac) */
/* WARNING: Removing unreachable block (ram,0x000103141ab0) */
/* WARNING: Removing unreachable block (ram,0x000103141acc) */
/* WARNING: Removing unreachable block (ram,0x000103141b3c) */
/* WARNING: Removing unreachable block (ram,0x000103141af0) */
/* WARNING: Removing unreachable block (ram,0x000103141afc) */
/* WARNING: Removing unreachable block (ram,0x000103141b00) */
/* WARNING: Removing unreachable block (ram,0x000103141b40) */
/* WARNING: Removing unreachable block (ram,0x000103141b04) */
/* WARNING: Removing unreachable block (ram,0x000103141b0c) */
/* WARNING: Removing unreachable block (ram,0x000103141b10) */
/* WARNING: Removing unreachable block (ram,0x000103141b44) */
/* WARNING: Removing unreachable block (ram,0x000103141b14) */

void FUN_103141a5c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x000107c61168(PTR_PTR_1126b2930);
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c446b4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103141b48; end: 103141c83;  */

/* WARNING: Possible PIC construction at 0x000103141c68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103141c6c) */

void FUN_103141b48(byte param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = 0xea00000000007265;
  uVar1 = 0x6c646e61685f6f6e;
  if (param_1 != 2) {
    uVar2 = 0xeb00000000746f68;
    uVar1 = 0x7370616e735f6f6e;
  }
  uVar3 = 0x73736563637573;
  if (param_1 != 0) {
    uVar3 = 0x736e656c5f6f6e;
  }
  if (param_1 < 2) {
    uVar2 = 0xe700000000000000;
    uVar1 = uVar3;
  }
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  uVar2 = 0x61665f6f65646976;
  if (param_2 != '\x01') {
    uVar2 = 0x72657474756873;
  }
  uVar3 = 0xee006b6361626c6c;
  if (param_2 != '\x01') {
    uVar3 = 0xe700000000000000;
  }
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001069b0428(uVar4,uVar1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103141c84; end: 103141d6f;  */

void FUN_103141c84(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar3 = 0xe900000000000064;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = 0x6c646e61685f6f6e;
  uVar1 = 0xea00000000007265;
  if (param_1 != 3) {
    uVar4 = 0xd000000000000014;
    uVar1 = 0x800000010f127770;
  }
  if (param_1 == 2) {
    uVar1 = 0xe900000000000065;
    uVar4 = 0x6e6f675f736e656c;
  }
  uVar2 = 0x65746e6573657270;
  if (param_1 != 0) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x656c69665f6f6e;
  }
  if (param_1 < 2) {
    uVar1 = uVar3;
    uVar4 = uVar2;
  }
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x0001069b06d0(uVar5,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 103141d70; end: 103141d9b;  */

void FUN_103141d70(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103141d9c; end: 103141dbb;  */

void FUN_103141d9c(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109502d0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 103141dbc; end: 103141e2f;  */

void FUN_103141dbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c614cc(param_1,auStack_38,auStack_50);
  uVar2 = uStack_40;
  func_0x000107c60640(uStack_48,uStack_40);
  uVar1 = uStack_48;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x0001069af2d0(uVar3,uVar1,1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 103141e30; end: 103141e7b;  */

void FUN_103141e30(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  func_0x000107c40fd4(*(undefined8 *)(lVar1 + 0x18));
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined1 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 103141e7c; end: 103141e8b;  */

void FUN_103141e7c(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110950410,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 103141e8c; end: 103141eab;  */

void FUN_103141e8c(void)

{
  FUN_10314192c();
  return;
}



/* Entry: 103141eac; end: 103141fbf;  */

void FUN_103141eac(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109504b0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 103141fc0; end: 1031420cb;  */

void FUN_103141fc0(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x10);
  uVar2 = 0x6b6361626c6c6f72;
  if (param_1 != 3) {
    uVar2 = 0x635f726579616c70;
  }
  uVar1 = 0xe800000000000000;
  if (param_1 != 3) {
    uVar1 = 0xed00006465736f6c;
  }
  uVar3 = 0xea0000000000646e;
  uVar4 = 0x756f72676b636162;
  if (param_1 != 2) {
    uVar3 = uVar1;
    uVar4 = uVar2;
  }
  uVar2 = 0xed00006465686374;
  uVar1 = 0x6977735f736e656c;
  if (param_1 != 0) {
    uVar2 = 0xeb00000000746978;
    uVar1 = 0x655f6172656d6163;
  }
  if (param_1 < 2) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001069af90c(uVar5,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1031420cc; end: 1031420db;  */

void FUN_1031420cc(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109505f0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1031420dc; end: 10314221b;  */

void FUN_1031420dc(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x10);
  if (param_1 == '\0') {
    uVar1 = 0x61746e6f635f6f6e;
    uVar3 = 0xec00000072656e69;
  }
  else {
    uVar1 = 0xd000000000000013;
    uVar3 = 0x800000010f127730;
    if (param_1 != '\x01') {
      uVar1 = 0x6d5f726579616c70;
      uVar3 = 0xee00676e69737369;
    }
  }
  func_0x000107c5fadc(uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001069afaf8(uVar2,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10314221c; end: 10314223b;  */

void FUN_10314221c(void)

{
  FUN_103141a5c();
  return;
}



/* Entry: 10314223c; end: 1031422db;  */

void FUN_10314223c(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x10);
  if (param_1 == '\0') {
    uVar2 = 0xe400000000000000;
    uVar1 = 0x656c6469;
  }
  else {
    uVar2 = 0xe900000000000067;
    uVar1 = 0x6e6964726f636572;
    if (param_1 != '\x01') {
      uVar2 = 0xe800000000000000;
      uVar1 = 0x776f6c66646e6573;
    }
  }
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x0001069aff54(uVar3,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1031422dc; end: 1031422f3;  */

void FUN_1031422dc(undefined8 param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (*(code *)&UNK_1069b00c8)(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031422f4; end: 10314233b;  */

void FUN_1031422f4(undefined8 param_1)

{
  code *in_x4;
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (*in_x4)(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10314233c; end: 10314234b;  */

void FUN_10314233c(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110950820,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10314234c; end: 10314236b;  */

void FUN_10314234c(void)

{
  FUN_103141b48();
  return;
}



/* Entry: 10314236c; end: 10314237b;  */

void FUN_10314236c(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109508c0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10314237c; end: 103142407;  */

void FUN_10314237c(void)

{
  FUN_103141c84();
  return;
}



/* Entry: 103142408; end: 103142427;  */

void FUN_103142408(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110950af0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 103142428; end: 10314248b;  */

ulong FUN_103142428(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Entry: 10314248c; end: 1031424f7;  */

ulong FUN_10314248c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1031424f8; end: 10314255b;  */

ulong FUN_1031424f8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 10314255c; end: 1031425c7;  */

ulong FUN_10314255c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 1031425c8; end: 1031425cb;  */

void FUN_1031425c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f44490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90548;
  func_0x000107c61520(&UNK_10db90548,&UNK_110612b70);
  puRam0000000112f44490 = puVar1;
  return;
}



/* Entry: 1031425cc; end: 10314260b;  */

void FUN_1031425cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f44490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90548;
  func_0x000107c61520(&UNK_10db90548,&UNK_110612b70);
  puRam0000000112f44490 = puVar1;
  return;
}



/* Entry: 10314260c; end: 10314260f;  */

void FUN_10314260c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f44498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db905e8;
  func_0x000107c61520(&UNK_10db905e8,&UNK_110612c00);
  puRam0000000112f44498 = puVar1;
  return;
}



/* Entry: 103142610; end: 10314264f;  */

void FUN_103142610(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f44498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db905e8;
  func_0x000107c61520(&UNK_10db905e8,&UNK_110612c00);
  puRam0000000112f44498 = puVar1;
  return;
}



/* Entry: 103142650; end: 103142653;  */

void FUN_103142650(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90688;
  func_0x000107c61520(&UNK_10db90688,&UNK_110612c90);
  puRam0000000112f444a0 = puVar1;
  return;
}



/* Entry: 103142654; end: 103142693;  */

void FUN_103142654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90688;
  func_0x000107c61520(&UNK_10db90688,&UNK_110612c90);
  puRam0000000112f444a0 = puVar1;
  return;
}



/* Entry: 103142694; end: 103142697;  */

void FUN_103142694(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90728;
  func_0x000107c61520(&UNK_10db90728,&UNK_110612d20);
  puRam0000000112f444a8 = puVar1;
  return;
}



/* Entry: 103142698; end: 1031426d7;  */

void FUN_103142698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90728;
  func_0x000107c61520(&UNK_10db90728,&UNK_110612d20);
  puRam0000000112f444a8 = puVar1;
  return;
}



/* Entry: 1031426d8; end: 1031426db;  */

void FUN_1031426d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db907c8;
  func_0x000107c61520(&UNK_10db907c8,&UNK_110612db0);
  puRam0000000112f444b0 = puVar1;
  return;
}



/* Entry: 1031426dc; end: 10314271b;  */

void FUN_1031426dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db907c8;
  func_0x000107c61520(&UNK_10db907c8,&UNK_110612db0);
  puRam0000000112f444b0 = puVar1;
  return;
}



/* Entry: 10314271c; end: 10314271f;  */

void FUN_10314271c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90868;
  func_0x000107c61520(&UNK_10db90868,&UNK_110612e40);
  puRam0000000112f444b8 = puVar1;
  return;
}



/* Entry: 103142720; end: 10314275f;  */

void FUN_103142720(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90868;
  func_0x000107c61520(&UNK_10db90868,&UNK_110612e40);
  puRam0000000112f444b8 = puVar1;
  return;
}



/* Entry: 103142760; end: 103142763;  */

void FUN_103142760(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90908;
  func_0x000107c61520(&UNK_10db90908,&UNK_110612ed0);
  puRam0000000112f444c0 = puVar1;
  return;
}



/* Entry: 103142764; end: 1031427a3;  */

void FUN_103142764(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90908;
  func_0x000107c61520(&UNK_10db90908,&UNK_110612ed0);
  puRam0000000112f444c0 = puVar1;
  return;
}



/* Entry: 1031427a4; end: 1031427a7;  */

void FUN_1031427a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db909a8;
  func_0x000107c61520(&UNK_10db909a8,&UNK_110612f60);
  puRam0000000112f444c8 = puVar1;
  return;
}



/* Entry: 1031427a8; end: 1031427e7;  */

void FUN_1031427a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db909a8;
  func_0x000107c61520(&UNK_10db909a8,&UNK_110612f60);
  puRam0000000112f444c8 = puVar1;
  return;
}



/* Entry: 1031427e8; end: 1031427eb;  */

void FUN_1031427e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90a48;
  func_0x000107c61520(&UNK_10db90a48,&UNK_110612ff0);
  puRam0000000112f444d0 = puVar1;
  return;
}



/* Entry: 1031427ec; end: 10314282b;  */

void FUN_1031427ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f444d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db90a48;
  func_0x000107c61520(&UNK_10db90a48,&UNK_110612ff0);
  puRam0000000112f444d0 = puVar1;
  return;
}



/* Entry: 10314282c; end: 103142f1f;  */

int FUN_10314282c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1031428a8;
        goto LAB_10314288c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10314288c:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_1031428a8:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103142f20; end: 103142f3f;  */

void FUN_103142f20(void)

{
  func_0x000107c61168(&PTR_PTR_112f44518);
  return;
}



/* Entry: 103142f40; end: 103142fe3;  */

undefined1 FUN_103142f40(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103142fe4; end: 10314303b;  */

long FUN_103142fe4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_10314303c();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 10314303c; end: 103143197;  */

undefined * FUN_10314303c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b0870;
  func_0x000107c610f8(PTR_PTR_1126b0870);
  func_0x000107c453e4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c52e0c(0);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c52df8(puVar2,param_2,puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4014000000000000);
  func_0x000107c61170(puVar2);
  func_0x000107c5af88(puVar3,param_2,0xd6);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 103143198; end: 1031431d7;  */

void FUN_103143198(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1031431d8; end: 1031431e7;  */

void FUN_1031431d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1031431e8; end: 1031432a3;  */

void FUN_1031431e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  uVar3 = param_2;
  FUN_103142fe4();
  lVar1 = param_5;
  func_0x000107c5c42c();
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c4071c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),param_6,0);
    func_0x000107c609a4(uVar2,uVar3,param_3,param_4,param_1,param_2);
  }
  return;
}



/* Entry: 1031432a4; end: 10314354b;  */

undefined8 FUN_1031432a4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    lVar2 = lStack_58;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_58);
    if (lVar2 != 0) {
      lVar8 = *(long *)(unaff_x20 + 0x10);
      lVar3 = lVar8;
      func_0x000107c44dd8();
      func_0x000107c61180();
      lVar4 = lVar3;
      FUN_103142fe4();
      func_0x000107c4977c(lVar8);
      func_0x000107c61170();
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 9;
      *(undefined8 *)(lVar4 + 0x10) = 4;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c4acb0();
      func_0x000107c61180();
      lVar8 = lVar3;
      func_0x000107c4acb0(lVar3);
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar8);
      *(undefined8 *)(lVar4 + 0x20) = uVar6;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c5ce8c();
      func_0x000107c61180();
      lVar8 = lVar3;
      func_0x000107c5ce8c(lVar3);
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar8);
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar8 = lVar2;
      func_0x000107c3f2e8();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103143548);
        (*pcVar1)();
      }
      uVar5 = uVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar8);
      *(undefined8 *)(lVar4 + 0x30) = uVar5;
      uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      lVar8 = lVar2;
      func_0x000107c3f2e4();
      func_0x000107c61180();
      if (lVar8 != 0) {
        puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        uVar5 = uVar6;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(lVar8);
        *(undefined8 *)(lVar4 + 0x38) = uVar5;
        uVar6 = 0;
        func_0x000100847984(0);
        lVar8 = lVar4;
        func_0x000107c5fc48(lVar4,uVar6);
        func_0x000107c61574(lVar4);
        func_0x000107c3d048(puVar7);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
        func_0x000107c61174(uVar6);
        return uVar6;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10314354c);
      (*pcVar1)();
    }
  }
  return 0;
}



/* Entry: 10314354c; end: 10314357f;  */

void FUN_10314354c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103143580; end: 10314365b;  */

void FUN_103143580(void)

{
  FUN_1031432a4();
  return;
}



/* Entry: 10314365c; end: 10314367b;  */

void FUN_10314365c(void)

{
  func_0x000107c61168(&PTR_PTR_112f44940);
  return;
}



/* Entry: 10314367c; end: 103143753;  */

undefined * FUN_10314367c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x18);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b0870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    puVar1 = puVar2;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(puVar2,param_2,puVar1);
    func_0x000107c61170(puVar1);
    func_0x000107c5a050(puVar2,param_2,0);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 103143754; end: 1031437ef;  */

long FUN_103143754(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x10,0);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61604(unaff_x20 + 0x10,param_1);
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 1031437f0; end: 103143a3f;  */

undefined8 FUN_1031437f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar1 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  uVar6 = 0;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    FUN_10314367c();
    puVar3 = puVar2;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c3d89c(puVar1);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar4 = puVar2;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 9;
      *(undefined8 *)(puVar4 + 0x10) = 4;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar3 = puVar1;
      func_0x000107c4acb0(puVar1);
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      *(undefined8 *)(puVar4 + 0x20) = uVar6;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar3 = puVar1;
      func_0x000107c5ce8c(puVar1);
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      *(undefined8 *)(puVar4 + 0x28) = uVar6;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar3 = puVar1;
      func_0x000107c5cbe4(puVar1);
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      *(undefined8 *)(puVar4 + 0x30) = uVar6;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      puVar3 = puVar1;
      func_0x000107c3ec1c(puVar1);
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      *(undefined8 *)(puVar4 + 0x38) = uVar6;
      uVar6 = 0;
      func_0x000100847984(0);
      puVar3 = puVar4;
      func_0x000107c5fc48(puVar4,uVar6);
      func_0x000107c61574(puVar4);
      func_0x000107c3d048(puVar2);
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar1);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61174(uVar6);
  }
  return uVar6;
}



/* Entry: 103143a40; end: 103143afb;  */

void FUN_103143a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  uVar3 = param_2;
  FUN_10314367c();
  lVar1 = param_5;
  func_0x000107c5c42c();
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c4071c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),param_6,0);
    func_0x000107c609a4(uVar2,uVar3,param_3,param_4,param_1,param_2);
  }
  return;
}



/* Entry: 103143afc; end: 103143b27;  */

void FUN_103143afc(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103143b28; end: 103143ba3;  */

void FUN_103143b28(void)

{
  FUN_1031437f0();
  return;
}



/* Entry: 103143ba4; end: 103143bab;  */

undefined8 FUN_103143ba4(void)

{
  return 0;
}



/* Entry: 103143bac; end: 103143bcb;  */

void FUN_103143bac(void)

{
  func_0x000107c61168(&PTR_PTR_112f449f0);
  return;
}



/* Entry: 103143bcc; end: 103143d7f;  */

void FUN_103143bcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c602fc(0x8ed);
  func_0x000107c5fb78(0xd000000000000082,0x800000010f127860);
  func_0x000107c5fb78(0x45736e656c626577,0xec000000726f7272);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010f1278f0);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f127930);
  puVar2 = puVar3;
  func_0x000107c6057c(puVar1,puVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fb78(0xd000000000000016,0x800000010f127950);
  func_0x000107c6057c(puVar1,puVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x10000000000007fb,0x800000010f127970);
  uRam0000000113806e90 = 0;
  uRam0000000113806e98 = 0xe000000000000000;
  return;
}



/* Entry: 103143d80; end: 103143e33;  */

void FUN_103143d80(void)

{
  long unaff_x20;
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  if (pcVar2 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c6157c(uVar1);
    (*pcVar2)(&uStack_50,0x45544e495f525245,0xec0000004c414e52);
    FUN_103145bf0(pcVar2,uVar1);
    FUN_103145c00(&uStack_50,0x112d387f8,&UNK_10d902650);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  FUN_103145bf0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6145c();
  return;
}



/* Entry: 103143e34; end: 103143e53;  */

void FUN_103143e34(void)

{
  func_0x000107c61168(&PTR_PTR_112f44aa0);
  return;
}



/* Entry: 103143e54; end: 103144283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103143e54(ulong param_1,long param_2,ulong param_3,code *param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  char *pcVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long alStack_c0 [3];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar2 = param_3;
  pcVar6 = param_4;
  FUN_103144fc0();
  if (param_2 == 0) {
    pcVar8 = "snapWebLensBridge";
    uVar5 = 0xd000000000000015;
  }
  else {
    if (((param_1 == 0x6b6473) && (param_2 == -0x1d00000000000000)) ||
       (uVar1 = param_1, func_0x000107c605b8(), (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      if ((uVar2 == 0x6261706143746567) && (pcVar6 == (code *)0xef73656974696c69)) {
        func_0x000107c6142c(0xef73656974696c69);
      }
      else {
        func_0x000107c605b8(uVar2,pcVar6,0x6261706143746567,0xef73656974696c69,0);
        func_0x000107c6142c(pcVar6);
        if ((uVar2 & 1) == 0) {
          pcVar8 = "ERR_UNKNOWN_CAPABILITY";
          uVar5 = 0xd000000000000012;
          goto LAB_10314420c;
        }
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_112f44b00);
      if (lVar9 == 0) {
        plVar4 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001003d21d8();
      }
      else {
        lVar10 = ((long *)(unaff_x20 + _DAT_112f44b00))[1];
        func_0x000107c614f0(lVar9);
        plVar4 = (long *)(unaff_x20 + _DAT_112f44b10);
        lStack_98 = plVar4[1];
        lStack_a0 = *plVar4;
        lStack_88 = plVar4[3];
        lStack_90 = plVar4[2];
        lStack_78 = plVar4[5];
        lStack_80 = plVar4[4];
        lStack_70 = plVar4[6];
        plVar4 = &lStack_a0;
        (**(code **)(lVar10 + 0x10))(plVar4,lVar9,lVar10);
      }
      lVar9 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      func_0x000107c61534();
      *(undefined8 *)(lVar9 + 0x18) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 2;
      *(undefined8 *)(lVar9 + 0x20) = 0x696c696261706163;
      *(undefined8 *)(lVar9 + 0x28) = 0xec00000073656974;
      uVar5 = 0x112ee5e30;
      func_0x0001000285a8(0x112ee5e30,&UNK_10db11220);
      *(long **)(lVar9 + 0x30) = plVar4;
      *(undefined8 *)(lVar9 + 0x48) = uVar5;
      *(undefined8 *)(lVar9 + 0x50) = 0x68737570;
      *(undefined8 *)(lVar9 + 0x58) = 0xe400000000000000;
      lVar10 = *(long *)(unaff_x20 + _DAT_112f44b08);
      *(undefined **)(lVar9 + 0x78) = PTR___sSbN_11034dd40;
      *(bool *)(lVar9 + 0x60) = lVar10 != 0;
      lVar10 = lVar9;
      func_0x000100214a84();
      func_0x000107c61588(lVar9);
      uVar5 = 0x112d4b5f0;
      func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
      func_0x000107c61408((undefined8 *)(lVar9 + 0x20),2,uVar5);
      uVar5 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      alStack_c0[0] = lVar10;
      uStack_a8 = uVar5;
      (*param_4)(alStack_c0,0,0);
      plVar4 = alStack_c0;
      goto LAB_103144228;
    }
    lVar9 = *(long *)(unaff_x20 + _DAT_112f44b00);
    if (lVar9 != 0) {
      lVar7 = ((long *)(unaff_x20 + _DAT_112f44b00))[1];
      lVar3 = 0;
      FUN_103143e34();
      func_0x000107c613fc();
      *(code **)(lVar3 + 0x10) = param_4;
      *(undefined8 *)(lVar3 + 0x18) = param_5;
      lVar10 = lVar9;
      func_0x000107c614f0();
      plVar4 = (long *)(unaff_x20 + _DAT_112f44b10);
      lStack_98 = plVar4[1];
      lStack_a0 = *plVar4;
      lStack_88 = plVar4[3];
      lStack_90 = plVar4[2];
      lStack_78 = plVar4[5];
      lStack_80 = plVar4[4];
      lStack_70 = plVar4[6];
      pcVar11 = *(code **)(lVar7 + 0x28);
      func_0x000107c615f0(lVar9);
      func_0x000107c6157c(param_5);
      func_0x000107c6157c(lVar3);
      (*pcVar11)(param_1,param_2,uVar2,pcVar6,param_3,&lStack_a0,0x103145ba0,lVar3,lVar10,lVar7);
      func_0x000107c615e8(lVar9);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(pcVar6);
      func_0x000107c61578(lVar3,2);
      return;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(pcVar6);
    pcVar8 = "om untrusted frame: ";
    uVar5 = 0xd000000000000016;
  }
LAB_10314420c:
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  (*param_4)(&lStack_a0,uVar5,(ulong)pcVar8 | 0x8000000000000000);
  plVar4 = &lStack_a0;
LAB_103144228:
  FUN_103145c00(plVar4,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 103144284; end: 103144467;  */

void FUN_103144284(undefined8 param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte abStack_68 [32];
  char cStack_48;
  
  FUN_103145ba8(param_1,abStack_68,0x112ee4d20,&UNK_10db0ff90);
  if (cStack_48 == '\x01') {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uVar1 = 0x800000010f1282a0;
    uVar3 = 0xd000000000000012;
    if (abStack_68[0] != 2) {
      uVar1 = 0xec0000004c414e52;
      uVar3 = 0x45544e495f525245;
    }
    pcVar2 = "snapWebLensBridge";
    uVar5 = 0xd000000000000015;
    if (abStack_68[0] != 0) {
      pcVar2 = "om untrusted frame: ";
      uVar5 = 0xd000000000000016;
    }
    if (abStack_68[0] < 2) {
      uVar1 = (ulong)pcVar2 | 0x8000000000000000;
      uVar3 = uVar5;
    }
    pcVar4 = *(code **)(param_2 + 0x10);
    if (pcVar4 == (code *)0x0) {
      FUN_103145c00(&uStack_90,0x112d387f8,&UNK_10d902650);
      func_0x000107c6142c(uVar1);
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      func_0x000107c6157c(uVar5);
      (*pcVar4)(&uStack_90,uVar3,uVar1);
      FUN_103145bf0(pcVar4,uVar5);
      func_0x000107c6142c(uVar1);
      FUN_103145c00(&uStack_90,0x112d387f8,&UNK_10d902650);
    }
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    func_0x000100102924(abStack_68,&uStack_90);
    func_0x0001000bb420(&uStack_90,auStack_b0);
    pcVar4 = *(code **)(param_2 + 0x10);
    if (pcVar4 != (code *)0x0) {
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      func_0x000107c6157c(uVar3);
      (*pcVar4)(auStack_b0,0,0);
      FUN_103145bf0(pcVar4,uVar3);
    }
    FUN_103145c00(auStack_b0,0x112d387f8,&UNK_10d902650);
    func_0x000100183ab8(&uStack_90);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  FUN_103145bf0(uVar3,uVar5);
  return;
}



/* Entry: 103144468; end: 1031444c7; -[_TtC23WebLensesImplementation15WebLensJSBridge init] */

void FUN_103144468(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebLensesImplementation.WebLensJSBridge",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103144494);
  (*pcVar1)();
}



/* Entry: 1031444c8; end: 10314455b; -[_TtC23WebLensesImplementation15WebLensJSBridge .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031444e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031444ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031444c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f44b00));
  return;
}



/* Entry: 10314455c; end: 10314457b;  */

void FUN_10314455c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ba398);
  return;
}



/* Entry: 10314457c; end: 103144c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314457c(undefined8 *param_1,undefined8 param_2,code *****param_3,undefined8 param_4,
                  code *****param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  code *****pppppcVar3;
  code *****pppppcVar4;
  code *****pppppcVar5;
  undefined *puVar6;
  code *****pppppcVar7;
  undefined *puVar8;
  code *****pppppcVar9;
  long lVar10;
  undefined *puVar11;
  code *****pppppcVar12;
  code *****pppppcVar13;
  code *****pppppcVar14;
  undefined8 *puVar15;
  long extraout_x8;
  long unaff_x20;
  code *****pppppcVar16;
  code *****pppppcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uStack_298;
  undefined1 auStack_290 [240];
  undefined1 auStack_1a0 [24];
  undefined8 uStack_188;
  undefined8 auStack_180 [2];
  long alStack_170 [16];
  code ***apppcStack_f0 [2];
  long lStack_e0;
  undefined1 auStack_d8 [24];
  code ****ppppcStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = 0;
  lStack_e0 = lVar1;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pppppcVar17 = (code *****)((long)apppcStack_f0 + lVar1);
  pppppcVar3 = (code *****)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar8 = PTR___sypN_11034f1a8;
  pppppcVar16 = (code *****)param_1[4];
  pppppcVar4 = pppppcVar16;
  puVar15 = (undefined8 *)PTR___sSSSHsWP_11034da90;
  func_0x000107c5f9dc(pppppcVar16,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8);
  pppppcVar5 = pppppcVar3;
  func_0x000107c4a6cc();
  func_0x000107c61170(pppppcVar4);
  pppppcVar7 = pppppcVar3;
  if ((int)pppppcVar5 != 0) {
    pppppcVar4 = pppppcVar16;
    pppppcVar7 = (code *****)PTR___sSSN_11034da80;
    func_0x000107c5f9dc(pppppcVar16,PTR___sSSN_11034da80,puVar8 + 8,PTR___sSSSHsWP_11034da90);
    ppppcStack_c0 = (code ****)0x0;
    param_5 = &ppppcStack_c0;
    puVar15 = (undefined8 *)0x0;
    func_0x000107c41300();
    func_0x000107c61180();
    func_0x000107c61170(pppppcVar4);
    pppppcVar5 = (code *****)ppppcStack_c0;
    func_0x000107c61174();
    if (pppppcVar3 == (code *****)0x0) {
      pppppcVar7 = pppppcVar5;
      func_0x000107c5ed30();
      func_0x000107c61170(pppppcVar5);
      func_0x000107c61654();
      func_0x000107c614ac(pppppcVar7);
      pppppcVar5 = pppppcVar3;
    }
    else {
      pppppcVar4 = pppppcVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(pppppcVar3);
      func_0x000107c5fb04(pppppcVar17);
      pppppcVar5 = pppppcVar4;
      pppppcVar12 = pppppcVar7;
      func_0x000107c5faf0(pppppcVar4,pppppcVar7,pppppcVar17);
      if (pppppcVar12 != (code *****)0x0) {
        apppcStack_f0[1] = *(code ****)(unaff_x20 + _DAT_112f44b20);
        puVar8 = &UNK_110613128;
        func_0x000107c613fc(&UNK_110613128,0x18,7);
        func_0x000107c61614(puVar8 + 0x10);
        uStack_78 = param_1[1];
        uStack_80 = *param_1;
        uStack_88 = param_1[3];
        uStack_90 = param_1[2];
        puVar6 = &UNK_110613150;
        func_0x000107c613fc(&UNK_110613150,0x68,7);
        uVar18 = *param_1;
        uVar20 = param_1[3];
        uVar19 = param_1[2];
        *(undefined8 *)(puVar6 + 0x30) = param_1[1];
        *(undefined8 *)(puVar6 + 0x28) = uVar18;
        *(undefined **)(puVar6 + 0x10) = puVar8;
        *(undefined8 *)(puVar6 + 0x18) = param_2;
        *(code ******)(puVar6 + 0x20) = param_3;
        *(undefined8 *)(puVar6 + 0x40) = uVar20;
        *(undefined8 *)(puVar6 + 0x38) = uVar19;
        *(undefined8 *)(puVar6 + 0x48) = param_1[4];
        *(code ******)(puVar6 + 0x50) = pppppcVar5;
        *(code ******)(puVar6 + 0x58) = pppppcVar12;
        *(long *)(puVar6 + 0x60) = lStack_e0;
        pcStack_a0 = FUN_103144f98;
        ppppcStack_c0 = (code ****)PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_1000f6b44;
        puStack_a8 = &UNK_110613168;
        pppppcVar9 = &ppppcStack_c0;
        puStack_98 = puVar6;
        func_0x000107c60bc4();
        puVar8 = puStack_98;
        func_0x000101237340(param_2,param_3);
        func_0x000100402194(&uStack_80,auStack_d8);
        func_0x000100402194(&uStack_90,auStack_d8);
        func_0x000107c61434(pppppcVar16);
        func_0x000107c61574(puVar8);
        pppppcVar14 = pppppcVar9;
        func_0x000107c4e524(apppcStack_f0[1]);
        func_0x000107c60bd0(pppppcVar9);
        pppppcVar3 = pppppcVar4;
        pppppcVar13 = pppppcVar7;
        func_0x00010006c090();
        pppppcVar17 = pppppcVar12;
        goto LAB_103144920;
      }
      func_0x00010006c090(pppppcVar4,pppppcVar7);
      pppppcVar5 = pppppcVar3;
    }
  }
  ppppcStack_c0 = (code ****)0x0;
  uStack_b8 = 0xe000000000000000;
  func_0x000107c602fc(0x25);
  func_0x000107c6142c(uStack_b8);
  ppppcStack_c0 = (code ****)0xd000000000000020;
  uStack_b8 = 0x800000010f128170;
  func_0x000107c5fb78(*param_1,param_1[1]);
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  func_0x000107c5fb78(param_1[2],param_1[3]);
  func_0x000107c6142c(uStack_b8);
  pppppcVar16 = *(code ******)(unaff_x20 + _DAT_112f44b20);
  puVar8 = &UNK_1106130d8;
  func_0x000107c613fc(&UNK_1106130d8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = param_2;
  *(code ******)(puVar8 + 0x18) = param_3;
  pcStack_a0 = FUN_103144e2c;
  ppppcStack_c0 = (code ****)PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1106130f0;
  pppppcVar9 = &ppppcStack_c0;
  puStack_98 = puVar8;
  func_0x000107c60bc4();
  puVar8 = puStack_98;
  pppppcVar13 = param_3;
  func_0x000101237340(param_2);
  func_0x000107c61574(puVar8);
  pppppcVar14 = pppppcVar9;
  func_0x000107c4e524(pppppcVar16);
  pppppcVar3 = pppppcVar9;
  func_0x000107c60bd0();
LAB_103144920:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *(code ******)((long)alStack_170 + lVar1 + 0x20) = pppppcVar5;
  *(code ******)((long)alStack_170 + lVar1 + 0x28) = pppppcVar17;
  *(code ******)((long)alStack_170 + lVar1 + 0x30) = pppppcVar4;
  *(code ******)((long)alStack_170 + lVar1 + 0x38) = pppppcVar7;
  *(long *)((long)alStack_170 + lVar1 + 0x40) = unaff_x20;
  *(undefined **)((long)alStack_170 + lVar1 + 0x48) = puVar8;
  *(undefined8 *)((long)alStack_170 + lVar1 + 0x50) = param_2;
  *(code ******)((long)alStack_170 + lVar1 + 0x58) = pppppcVar9;
  *(code ******)((long)alStack_170 + lVar1 + 0x60) = pppppcVar16;
  *(code ******)((long)alStack_170 + lVar1 + 0x68) = param_3;
  *(undefined1 **)((long)alStack_170 + lVar1 + 0x70) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_170 + lVar1 + 0x78) = 0x10314495c;
  func_0x000107c61428(pppppcVar3 + 2,auStack_1a0 + lVar1,0,0);
  pppppcVar3 = pppppcVar3 + 2;
  func_0x000107c61618();
  if (pppppcVar3 != (code *****)0x0) {
    puVar8 = (undefined *)((long)pppppcVar3 + _DAT_112f44b18);
    func_0x000107c61618();
    if (puVar8 != (undefined *)0x0) {
      *(char **)((long)&uStack_298 + lVar1) = "able push event ";
      lVar2 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      func_0x000107c61534();
      *(undefined8 *)(lVar2 + 0x18) = 8;
      *(undefined8 *)(lVar2 + 0x10) = 4;
      uVar19 = puVar15[1];
      uVar18 = *puVar15;
      uVar21 = puVar15[3];
      uVar20 = puVar15[2];
      *(undefined8 *)((long)alStack_170 + lVar1 + 8) = uVar19;
      *(undefined8 *)((long)alStack_170 + lVar1) = uVar18;
      *(undefined8 *)(lVar2 + 0x68) = uVar19;
      *(undefined8 *)(lVar2 + 0x60) = uVar18;
      *(undefined8 *)(lVar2 + 0x20) = 0x656d616e;
      puVar6 = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar2 + 0x28) = 0xe400000000000000;
      *(undefined8 *)(lVar2 + 0x30) = 0x4c62655770616e73;
      *(undefined8 *)(lVar2 + 0x38) = 0xef68737550736e65;
      *(undefined **)(lVar2 + 0x48) = puVar6;
      *(undefined8 *)(lVar2 + 0x50) = 0x696c696261706163;
      *(undefined8 *)(lVar2 + 0x58) = 0xea00000000007974;
      *(undefined **)(lVar2 + 0x78) = puVar6;
      *(undefined8 *)(lVar2 + 0x80) = 0x746e657665;
      *(undefined8 *)(lVar2 + 0x88) = 0xe500000000000000;
      *(undefined8 *)((long)auStack_180 + lVar1 + 8) = uVar21;
      *(undefined8 *)((long)auStack_180 + lVar1) = uVar20;
      *(undefined8 *)(lVar2 + 0x98) = uVar21;
      *(undefined8 *)(lVar2 + 0x90) = uVar20;
      *(undefined **)(lVar2 + 0xa8) = puVar6;
      *(undefined8 *)(lVar2 + 0xb0) = 0x6e6f736a;
      *(undefined **)(lVar2 + 0xd8) = puVar6;
      *(undefined8 *)(lVar2 + 0xb8) = 0xe400000000000000;
      *(code ******)(lVar2 + 0xc0) = param_5;
      *(undefined8 *)(lVar2 + 200) = param_6;
      func_0x000100402194((long)alStack_170 + lVar1,auStack_290 + lVar1);
      func_0x000100402194((long)auStack_180 + lVar1,auStack_290 + lVar1);
      func_0x000107c61434(param_6);
      lVar10 = lVar2;
      func_0x000100214a84(lVar2);
      func_0x000107c61588(lVar2);
      uVar18 = 0x112d4b5f0;
      func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
      func_0x000107c61408((undefined8 *)(lVar2 + 0x20),4,uVar18);
      puVar11 = PTR__OBJC_CLASS___WKContentWorld_1126d6e98;
      func_0x000107c61168(PTR__OBJC_CLASS___WKContentWorld_1126d6e98);
      func_0x000107c4e2f8();
      func_0x000107c61180();
      *(undefined8 *)((long)&uStack_188 + lVar1) = puVar15[4];
      puVar6 = &UNK_1106131a0;
      func_0x000107c613fc(&UNK_1106131a0,0x50,7);
      *(code ******)(puVar6 + 0x10) = pppppcVar13;
      *(code ******)(puVar6 + 0x18) = pppppcVar14;
      uVar18 = *puVar15;
      uVar20 = puVar15[3];
      uVar19 = puVar15[2];
      *(undefined8 *)(puVar6 + 0x28) = puVar15[1];
      *(undefined8 *)(puVar6 + 0x20) = uVar18;
      *(undefined8 *)(puVar6 + 0x38) = uVar20;
      *(undefined8 *)(puVar6 + 0x30) = uVar19;
      *(undefined8 *)(puVar6 + 0x40) = puVar15[4];
      *(undefined8 *)(puVar6 + 0x48) = param_7;
      func_0x000100402194((long)alStack_170 + lVar1,auStack_290 + lVar1);
      func_0x000100402194((long)auStack_180 + lVar1,auStack_290 + lVar1);
      func_0x000101237340(pppppcVar13,pppppcVar14);
      FUN_103145ba8((long)&uStack_188 + lVar1,auStack_290 + lVar1,0x112d472a8,&UNK_10d90e490);
      func_0x000107c60174(0xd00000000000006d,
                          *(ulong *)((long)&uStack_298 + lVar1) | 0x8000000000000000,lVar10,0,
                          puVar11,0x103144fb0,puVar6);
      func_0x000107c61170(pppppcVar3);
      func_0x000107c61170(puVar8);
      func_0x000107c6142c(lVar10);
      func_0x000107c61170(puVar11);
      func_0x000107c61574(puVar6);
      return;
    }
    func_0x000107c61170(pppppcVar3);
  }
  if (pppppcVar13 != (code *****)0x0) {
    (*(code *)pppppcVar13)(0);
  }
  return;
}



/* Entry: 103144c30; end: 103144d93;  */

void FUN_103144c30(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [4];
  char cStack_48;
  
  FUN_103145ba8(param_1,auStack_68,0x112d627c8,&UNK_10d9285a0);
  if (cStack_48 == '\x01') {
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x15);
    func_0x000107c5fb78(0x2068737570,0xe500000000000000);
    func_0x000107c5fb78(*param_4,param_4[1]);
    func_0x000107c5fb78(0x2f,0xe100000000000000);
    func_0x000107c5fb78(param_4[2],param_4[3]);
    func_0x000107c5fb78(0x3a64656c69616620,0xe900000000000020);
    uStack_80 = auStack_68[0];
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_80,&uStack_78,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_70);
    if (param_2 != (code *)0x0) {
      (*param_2)(0);
    }
    func_0x000107c614ac(auStack_68[0]);
  }
  else {
    if (param_2 != (code *)0x0) {
      (*param_2)(1);
    }
    FUN_103145c00(auStack_68,0x112d627c8,&UNK_10d9285a0);
  }
  return;
}



/* Entry: 103144d94; end: 103144d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103144d94(undefined8 *param_1,undefined8 param_2,code *****param_3,undefined8 param_4,
                  code *****param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  code *****pppppcVar3;
  code *****pppppcVar4;
  code *****pppppcVar5;
  undefined *puVar6;
  code *****pppppcVar7;
  undefined *puVar8;
  code *****pppppcVar9;
  long lVar10;
  undefined *puVar11;
  code *****pppppcVar12;
  code *****pppppcVar13;
  code *****pppppcVar14;
  undefined8 *puVar15;
  long extraout_x8;
  code *****pppppcVar16;
  long unaff_x20;
  code *****pppppcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uStack_298;
  undefined1 auStack_290 [240];
  undefined1 auStack_1a0 [24];
  undefined8 uStack_188;
  undefined8 auStack_180 [2];
  long alStack_170 [16];
  code ***apppcStack_f0 [2];
  long lStack_e0;
  undefined1 auStack_d8 [24];
  code ****ppppcStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = 0;
  lStack_e0 = lVar1;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pppppcVar17 = (code *****)((long)apppcStack_f0 + lVar1);
  pppppcVar3 = (code *****)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar8 = PTR___sypN_11034f1a8;
  pppppcVar16 = (code *****)param_1[4];
  pppppcVar4 = pppppcVar16;
  puVar15 = (undefined8 *)PTR___sSSSHsWP_11034da90;
  func_0x000107c5f9dc(pppppcVar16,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8);
  pppppcVar5 = pppppcVar3;
  func_0x000107c4a6cc();
  func_0x000107c61170(pppppcVar4);
  pppppcVar7 = pppppcVar3;
  if ((int)pppppcVar5 != 0) {
    pppppcVar4 = pppppcVar16;
    pppppcVar7 = (code *****)PTR___sSSN_11034da80;
    func_0x000107c5f9dc(pppppcVar16,PTR___sSSN_11034da80,puVar8 + 8,PTR___sSSSHsWP_11034da90);
    ppppcStack_c0 = (code ****)0x0;
    param_5 = &ppppcStack_c0;
    puVar15 = (undefined8 *)0x0;
    func_0x000107c41300();
    func_0x000107c61180();
    func_0x000107c61170(pppppcVar4);
    pppppcVar5 = (code *****)ppppcStack_c0;
    func_0x000107c61174();
    if (pppppcVar3 == (code *****)0x0) {
      pppppcVar7 = pppppcVar5;
      func_0x000107c5ed30();
      func_0x000107c61170(pppppcVar5);
      func_0x000107c61654();
      func_0x000107c614ac(pppppcVar7);
      pppppcVar5 = pppppcVar3;
    }
    else {
      pppppcVar4 = pppppcVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(pppppcVar3);
      func_0x000107c5fb04(pppppcVar17);
      pppppcVar5 = pppppcVar4;
      pppppcVar12 = pppppcVar7;
      func_0x000107c5faf0(pppppcVar4,pppppcVar7,pppppcVar17);
      if (pppppcVar12 != (code *****)0x0) {
        apppcStack_f0[1] = *(code ****)(unaff_x20 + _DAT_112f44b20);
        puVar8 = &UNK_110613128;
        func_0x000107c613fc(&UNK_110613128,0x18,7);
        func_0x000107c61614(puVar8 + 0x10);
        uStack_78 = param_1[1];
        uStack_80 = *param_1;
        uStack_88 = param_1[3];
        uStack_90 = param_1[2];
        puVar6 = &UNK_110613150;
        func_0x000107c613fc(&UNK_110613150,0x68,7);
        uVar18 = *param_1;
        uVar20 = param_1[3];
        uVar19 = param_1[2];
        *(undefined8 *)(puVar6 + 0x30) = param_1[1];
        *(undefined8 *)(puVar6 + 0x28) = uVar18;
        *(undefined **)(puVar6 + 0x10) = puVar8;
        *(undefined8 *)(puVar6 + 0x18) = param_2;
        *(code ******)(puVar6 + 0x20) = param_3;
        *(undefined8 *)(puVar6 + 0x40) = uVar20;
        *(undefined8 *)(puVar6 + 0x38) = uVar19;
        *(undefined8 *)(puVar6 + 0x48) = param_1[4];
        *(code ******)(puVar6 + 0x50) = pppppcVar5;
        *(code ******)(puVar6 + 0x58) = pppppcVar12;
        *(long *)(puVar6 + 0x60) = lStack_e0;
        pcStack_a0 = FUN_103144f98;
        ppppcStack_c0 = (code ****)PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_1000f6b44;
        puStack_a8 = &UNK_110613168;
        pppppcVar9 = &ppppcStack_c0;
        puStack_98 = puVar6;
        func_0x000107c60bc4();
        puVar8 = puStack_98;
        func_0x000101237340(param_2,param_3);
        func_0x000100402194(&uStack_80,auStack_d8);
        func_0x000100402194(&uStack_90,auStack_d8);
        func_0x000107c61434(pppppcVar16);
        func_0x000107c61574(puVar8);
        pppppcVar14 = pppppcVar9;
        func_0x000107c4e524(apppcStack_f0[1]);
        func_0x000107c60bd0(pppppcVar9);
        pppppcVar3 = pppppcVar4;
        pppppcVar13 = pppppcVar7;
        func_0x00010006c090();
        pppppcVar17 = pppppcVar12;
        goto LAB_103144920;
      }
      func_0x00010006c090(pppppcVar4,pppppcVar7);
      pppppcVar5 = pppppcVar3;
    }
  }
  ppppcStack_c0 = (code ****)0x0;
  uStack_b8 = 0xe000000000000000;
  func_0x000107c602fc(0x25);
  func_0x000107c6142c(uStack_b8);
  ppppcStack_c0 = (code ****)0xd000000000000020;
  uStack_b8 = 0x800000010f128170;
  func_0x000107c5fb78(*param_1,param_1[1]);
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  func_0x000107c5fb78(param_1[2],param_1[3]);
  func_0x000107c6142c(uStack_b8);
  pppppcVar16 = *(code ******)(unaff_x20 + _DAT_112f44b20);
  puVar8 = &UNK_1106130d8;
  func_0x000107c613fc(&UNK_1106130d8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = param_2;
  *(code ******)(puVar8 + 0x18) = param_3;
  pcStack_a0 = FUN_103144e2c;
  ppppcStack_c0 = (code ****)PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1106130f0;
  pppppcVar9 = &ppppcStack_c0;
  puStack_98 = puVar8;
  func_0x000107c60bc4();
  puVar8 = puStack_98;
  pppppcVar13 = param_3;
  func_0x000101237340(param_2);
  func_0x000107c61574(puVar8);
  pppppcVar14 = pppppcVar9;
  func_0x000107c4e524(pppppcVar16);
  pppppcVar3 = pppppcVar9;
  func_0x000107c60bd0();
LAB_103144920:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *(code ******)((long)alStack_170 + lVar1 + 0x20) = pppppcVar5;
  *(code ******)((long)alStack_170 + lVar1 + 0x28) = pppppcVar17;
  *(code ******)((long)alStack_170 + lVar1 + 0x30) = pppppcVar4;
  *(code ******)((long)alStack_170 + lVar1 + 0x38) = pppppcVar7;
  *(long *)((long)alStack_170 + lVar1 + 0x40) = unaff_x20;
  *(undefined **)((long)alStack_170 + lVar1 + 0x48) = puVar8;
  *(undefined8 *)((long)alStack_170 + lVar1 + 0x50) = param_2;
  *(code ******)((long)alStack_170 + lVar1 + 0x58) = pppppcVar9;
  *(code ******)((long)alStack_170 + lVar1 + 0x60) = pppppcVar16;
  *(code ******)((long)alStack_170 + lVar1 + 0x68) = param_3;
  *(undefined1 **)((long)alStack_170 + lVar1 + 0x70) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_170 + lVar1 + 0x78) = 0x10314495c;
  func_0x000107c61428(pppppcVar3 + 2,auStack_1a0 + lVar1,0,0);
  pppppcVar3 = pppppcVar3 + 2;
  func_0x000107c61618();
  if (pppppcVar3 != (code *****)0x0) {
    puVar8 = (undefined *)((long)pppppcVar3 + _DAT_112f44b18);
    func_0x000107c61618();
    if (puVar8 != (undefined *)0x0) {
      *(char **)((long)&uStack_298 + lVar1) = "able push event ";
      lVar2 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      func_0x000107c61534();
      *(undefined8 *)(lVar2 + 0x18) = 8;
      *(undefined8 *)(lVar2 + 0x10) = 4;
      uVar19 = puVar15[1];
      uVar18 = *puVar15;
      uVar21 = puVar15[3];
      uVar20 = puVar15[2];
      *(undefined8 *)((long)alStack_170 + lVar1 + 8) = uVar19;
      *(undefined8 *)((long)alStack_170 + lVar1) = uVar18;
      *(undefined8 *)(lVar2 + 0x68) = uVar19;
      *(undefined8 *)(lVar2 + 0x60) = uVar18;
      *(undefined8 *)(lVar2 + 0x20) = 0x656d616e;
      puVar6 = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar2 + 0x28) = 0xe400000000000000;
      *(undefined8 *)(lVar2 + 0x30) = 0x4c62655770616e73;
      *(undefined8 *)(lVar2 + 0x38) = 0xef68737550736e65;
      *(undefined **)(lVar2 + 0x48) = puVar6;
      *(undefined8 *)(lVar2 + 0x50) = 0x696c696261706163;
      *(undefined8 *)(lVar2 + 0x58) = 0xea00000000007974;
      *(undefined **)(lVar2 + 0x78) = puVar6;
      *(undefined8 *)(lVar2 + 0x80) = 0x746e657665;
      *(undefined8 *)(lVar2 + 0x88) = 0xe500000000000000;
      *(undefined8 *)((long)auStack_180 + lVar1 + 8) = uVar21;
      *(undefined8 *)((long)auStack_180 + lVar1) = uVar20;
      *(undefined8 *)(lVar2 + 0x98) = uVar21;
      *(undefined8 *)(lVar2 + 0x90) = uVar20;
      *(undefined **)(lVar2 + 0xa8) = puVar6;
      *(undefined8 *)(lVar2 + 0xb0) = 0x6e6f736a;
      *(undefined **)(lVar2 + 0xd8) = puVar6;
      *(undefined8 *)(lVar2 + 0xb8) = 0xe400000000000000;
      *(code ******)(lVar2 + 0xc0) = param_5;
      *(undefined8 *)(lVar2 + 200) = param_6;
      func_0x000100402194((long)alStack_170 + lVar1,auStack_290 + lVar1);
      func_0x000100402194((long)auStack_180 + lVar1,auStack_290 + lVar1);
      func_0x000107c61434(param_6);
      lVar10 = lVar2;
      func_0x000100214a84(lVar2);
      func_0x000107c61588(lVar2);
      uVar18 = 0x112d4b5f0;
      func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
      func_0x000107c61408((undefined8 *)(lVar2 + 0x20),4,uVar18);
      puVar11 = PTR__OBJC_CLASS___WKContentWorld_1126d6e98;
      func_0x000107c61168(PTR__OBJC_CLASS___WKContentWorld_1126d6e98);
      func_0x000107c4e2f8();
      func_0x000107c61180();
      *(undefined8 *)((long)&uStack_188 + lVar1) = puVar15[4];
      puVar6 = &UNK_1106131a0;
      func_0x000107c613fc(&UNK_1106131a0,0x50,7);
      *(code ******)(puVar6 + 0x10) = pppppcVar13;
      *(code ******)(puVar6 + 0x18) = pppppcVar14;
      uVar18 = *puVar15;
      uVar20 = puVar15[3];
      uVar19 = puVar15[2];
      *(undefined8 *)(puVar6 + 0x28) = puVar15[1];
      *(undefined8 *)(puVar6 + 0x20) = uVar18;
      *(undefined8 *)(puVar6 + 0x38) = uVar20;
      *(undefined8 *)(puVar6 + 0x30) = uVar19;
      *(undefined8 *)(puVar6 + 0x40) = puVar15[4];
      *(undefined8 *)(puVar6 + 0x48) = param_7;
      func_0x000100402194((long)alStack_170 + lVar1,auStack_290 + lVar1);
      func_0x000100402194((long)auStack_180 + lVar1,auStack_290 + lVar1);
      func_0x000101237340(pppppcVar13,pppppcVar14);
      FUN_103145ba8((long)&uStack_188 + lVar1,auStack_290 + lVar1,0x112d472a8,&UNK_10d90e490);
      func_0x000107c60174(0xd00000000000006d,
                          *(ulong *)((long)&uStack_298 + lVar1) | 0x8000000000000000,lVar10,0,
                          puVar11,0x103144fb0,puVar6);
      func_0x000107c61170(pppppcVar3);
      func_0x000107c61170(puVar8);
      func_0x000107c6142c(lVar10);
      func_0x000107c61170(puVar11);
      func_0x000107c61574(puVar6);
      return;
    }
    func_0x000107c61170(pppppcVar3);
  }
  if (pppppcVar13 != (code *****)0x0) {
    (*(code *)pppppcVar13)(0);
  }
  return;
}



/* Entry: 103144d98; end: 103144e2b; -[_TtC23WebLensesImplementation15WebLensJSBridge userContentController:didReceiveScriptMessage:replyHandler:] */

/* WARNING: Possible PIC construction at 0x000103144e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103144e10) */

void FUN_103144d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000103145420(param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103144e2c; end: 103144e57;  */

void FUN_103144e2c(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0);
  }
  return;
}



/* Entry: 103144e58; end: 103144e73;  */

void FUN_103144e58(long param_1,long param_2)

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



/* Entry: 103144e74; end: 103144f97;  */

void FUN_103144e74(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long extraout_x8;
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  FUN_103145ba8(param_1,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  uVar1 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar1 = param_2;
  }
  (**(code **)(param_4 + 0x10))(param_4,puVar2,uVar1);
  func_0x000107c615e8(puVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 103144f98; end: 103144fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103144f98(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_1a0 [240];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c61428(lVar2 + 0x10,auStack_b0,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_112f44b18;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      func_0x000107c61534();
      *(undefined8 *)(lVar4 + 0x18) = 8;
      *(undefined8 *)(lVar4 + 0x10) = 4;
      uStack_78 = *(undefined8 *)(unaff_x20 + 0x30);
      uStack_80 = *(undefined8 *)(unaff_x20 + 0x28);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined8 *)(lVar4 + 0x68) = uStack_78;
      *(undefined8 *)(lVar4 + 0x60) = uStack_80;
      *(undefined8 *)(lVar4 + 0x20) = 0x656d616e;
      puVar7 = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar4 + 0x28) = 0xe400000000000000;
      *(undefined8 *)(lVar4 + 0x30) = 0x4c62655770616e73;
      *(undefined8 *)(lVar4 + 0x38) = 0xef68737550736e65;
      *(undefined **)(lVar4 + 0x48) = puVar7;
      *(undefined8 *)(lVar4 + 0x50) = 0x696c696261706163;
      *(undefined8 *)(lVar4 + 0x58) = 0xea00000000007974;
      *(undefined **)(lVar4 + 0x78) = puVar7;
      *(undefined8 *)(lVar4 + 0x80) = 0x746e657665;
      *(undefined8 *)(lVar4 + 0x88) = 0xe500000000000000;
      *(undefined8 *)(lVar4 + 0x98) = uStack_88;
      *(undefined8 *)(lVar4 + 0x90) = uStack_90;
      *(undefined **)(lVar4 + 0xa8) = puVar7;
      *(undefined8 *)(lVar4 + 0xb0) = 0x6e6f736a;
      *(undefined **)(lVar4 + 0xd8) = puVar7;
      *(undefined8 *)(lVar4 + 0xb8) = 0xe400000000000000;
      *(undefined8 *)(lVar4 + 0xc0) = uVar10;
      *(undefined8 *)(lVar4 + 200) = uVar11;
      func_0x000100402194(&uStack_80,auStack_1a0);
      func_0x000100402194(&uStack_90,auStack_1a0);
      func_0x000107c61434(uVar11);
      lVar5 = lVar4;
      func_0x000100214a84(lVar4);
      func_0x000107c61588(lVar4);
      uVar10 = 0x112d4b5f0;
      func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
      func_0x000107c61408((undefined8 *)(lVar4 + 0x20),4,uVar10);
      puVar6 = PTR__OBJC_CLASS___WKContentWorld_1126d6e98;
      func_0x000107c61168(PTR__OBJC_CLASS___WKContentWorld_1126d6e98);
      func_0x000107c4e2f8();
      func_0x000107c61180();
      uStack_98 = *(undefined8 *)(unaff_x20 + 0x48);
      puVar7 = &UNK_1106131a0;
      func_0x000107c613fc(&UNK_1106131a0,0x50,7);
      *(code **)(puVar7 + 0x10) = pcVar1;
      *(undefined8 *)(puVar7 + 0x18) = uVar8;
      uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined8 *)(puVar7 + 0x28) = *(undefined8 *)(unaff_x20 + 0x30);
      *(undefined8 *)(puVar7 + 0x20) = uVar10;
      *(undefined8 *)(puVar7 + 0x38) = uVar12;
      *(undefined8 *)(puVar7 + 0x30) = uVar11;
      *(undefined8 *)(puVar7 + 0x40) = *(undefined8 *)(unaff_x20 + 0x48);
      *(undefined8 *)(puVar7 + 0x48) = uVar9;
      func_0x000100402194(&uStack_80,auStack_1a0);
      func_0x000100402194(&uStack_90,auStack_1a0);
      func_0x000101237340(pcVar1,uVar8);
      FUN_103145ba8(&uStack_98,auStack_1a0,0x112d472a8,&UNK_10d90e490);
      func_0x000107c60174(0xd00000000000006d,0x800000010f1281a0,lVar5,0,puVar6,0x103144fb0,puVar7);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(lVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61574(puVar7);
      return;
    }
    func_0x000107c61170(lVar2);
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0);
  }
  return;
}



/* Entry: 103144fc0; end: 103145b97;  */

ulong FUN_103144fc0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar18 = (long)&uStack_d0 - extraout_x8;
  lVar5 = 0;
  func_0x000107c5ec24();
  lVar19 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  uVar16 = uVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    return 0;
  }
  func_0x000107c5ec14(uVar18,param_1);
  uVar17 = uVar18;
  (**(code **)(lVar19 + 0x30))(uVar18,1,lVar5);
  if ((int)uVar17 == 1) {
    FUN_103145c00(uVar18,0x112d4b5b0,&UNK_10d912140);
    return 0;
  }
  uVar17 = uVar16;
  (**(code **)(lVar19 + 0x20))(uVar16,uVar18,lVar5);
  func_0x000107c5ec0c();
  if (uVar18 != 0) {
    uVar10 = uVar18;
    if (uVar17 == 0x707061 && uVar18 == 0xe300000000000000) {
      func_0x000107c6142c();
    }
    else {
      func_0x000107c605b8();
      func_0x000107c6142c();
      if ((uVar17 & 1) == 0) goto LAB_103145190;
    }
    func_0x000107c5ebec();
    if (uVar10 != 0) {
      uVar17 = uVar18 & 0xffffffffffff;
      if ((uVar10 & 0x2000000000000000) != 0) {
        uVar17 = uVar10 >> 0x38 & 0xf;
      }
      if (uVar17 != 0) {
        uVar17 = uVar10;
        uStack_a0 = uVar18;
        func_0x000107c5ec04();
        if (((uVar17 != 0) || (func_0x000107c5ec1c(), uVar17 != 0)) ||
           (func_0x000107c5ec00(), uVar17 != 0)) {
          func_0x000107c6142c(uVar10);
          (**(code **)(lVar19 + 8))(uVar16,lVar5);
          func_0x000107c6142c(uVar17);
          return 0;
        }
        func_0x000107c5ebfc();
        if (((uint)uVar17 & 0xff) == 1) {
          func_0x000107c5ebf4();
          uStack_70 = 0x2f;
          uStack_68 = 0xe100000000000000;
          puStack_80 = &uStack_70;
          lVar6 = 0x7fffffffffffffff;
          func_0x0001014784b8(0x7fffffffffffffff,0,FUN_103145c40,&puStack_90,uVar18,uVar17);
          uStack_c0 = 0;
          uVar18 = 0;
          uVar17 = *(ulong *)(lVar6 + 0x10);
          lVar13 = lVar6 + 0x18;
          puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
          do {
            puVar9 = (undefined8 *)(lVar13 + uVar18 * 0x20);
            do {
              puVar12 = puVar9;
              if (uVar17 == uVar18) {
                func_0x000107c6142c(lVar6);
                if (*(long *)(puVar15 + 0x10) != 1) {
                  (**(code **)(lVar19 + 8))(uVar16,lVar5);
                  func_0x000107c6142c(uVar10);
                  func_0x000107c61574(puVar15);
                  return 0;
                }
                puVar7 = *(undefined **)(puVar15 + 0x20);
                uVar11 = *(undefined8 *)(puVar15 + 0x28);
                uVar2 = *(undefined8 *)(puVar15 + 0x30);
                uVar8 = *(undefined8 *)(puVar15 + 0x38);
                func_0x000107c61438(uVar8,2);
                func_0x000107c61574(puVar15);
                func_0x000107c5fb2c(puVar7,uVar11,uVar2,uVar8);
                func_0x000107c61430(uVar8,2);
                uStack_70 = 0x2e2e;
                uStack_68 = 0xe200000000000000;
                puStack_90 = puVar7;
                uStack_88 = uVar11;
                func_0x000100e8b654();
                puVar9 = &uStack_70;
                func_0x000107c6022c(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar8,uVar8);
                (**(code **)(lVar19 + 8))(uVar16,lVar5);
                if (((ulong)puVar9 & 1) != 0) {
                  func_0x000107c6142c(uVar10);
                  func_0x000107c6142c(uVar11);
                  return 0;
                }
                return uStack_a0;
              }
              if (*(ulong *)(lVar6 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103145420);
                (*pcVar4)();
              }
              uVar18 = uVar18 + 1;
              uVar1 = puVar12[1];
              uVar3 = puVar12[2];
              puVar9 = puVar12 + 4;
            } while ((uVar3 ^ uVar1) < 0x4000);
            uStack_b8 = puVar12[3];
            uStack_b0 = puVar12[4];
            lStack_a8 = lVar13;
            func_0x000107c61434();
            puVar7 = puVar15;
            func_0x000107c61558();
            puStack_90 = puVar15;
            if (((ulong)puVar7 & 1) == 0) {
              func_0x000101936124(0,*(long *)(puVar15 + 0x10) + 1,1);
            }
            uVar14 = *(ulong *)(puStack_90 + 0x10);
            lVar13 = uVar14 + 1;
            if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar14) {
              uStack_d0 = uVar14;
              lStack_c8 = lVar13;
              func_0x000101936124(1 < *(ulong *)(puStack_90 + 0x18),lVar13,1);
              lVar13 = lStack_c8;
              uVar14 = uStack_d0;
            }
            *(long *)(puStack_90 + 0x10) = lVar13;
            *(ulong *)(puStack_90 + uVar14 * 0x20 + 0x20) = uVar1;
            *(ulong *)(puStack_90 + uVar14 * 0x20 + 0x28) = uVar3;
            *(undefined8 *)(puStack_90 + uVar14 * 0x20 + 0x30) = uStack_b8;
            *(undefined8 *)(puStack_90 + uVar14 * 0x20 + 0x38) = uStack_b0;
            lVar13 = lStack_a8;
            puVar15 = puStack_90;
          } while( true );
        }
      }
      (**(code **)(lVar19 + 8))(uVar16,lVar5);
      func_0x000107c6142c(uVar10);
      return 0;
    }
  }
LAB_103145190:
  (**(code **)(lVar19 + 8))(uVar16,lVar5);
  return 0;
}



/* Entry: 103145b98; end: 103145ba7;  */

void FUN_103145b98(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_103145ba8(param_1,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar5 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_58);
    (**(code **)(lVar5 + 8))(puVar4,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  uVar2 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar2 = param_2;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,puVar3,uVar2);
  func_0x000107c615e8(puVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103145ba8; end: 103145bef;  */

undefined8 FUN_103145ba8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103145bf0; end: 103145bff;  */

void FUN_103145bf0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103145c00; end: 103145c3f;  */

undefined8 FUN_103145c00(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103145c40; end: 103145c93;  */

uint FUN_103145c40(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 103145c94; end: 103145c9b;  */

void FUN_103145c94(long param_1,long param_2)

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



/* Entry: 103145c9c; end: 103145dbf;  */

undefined * FUN_103145c9c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar2 = *(undefined **)(unaff_x20 + 0x68);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(lVar5 + 0x68))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar1);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar4 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f128300);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar4);
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined **)(unaff_x20 + 0x68) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103145dc0; end: 103145e83;  */

char * FUN_103145dc0(void)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pcVar1 = *(char **)(unaff_x20 + 0x70);
  pcVar2 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar2 = "mainPerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
    *(char **)(unaff_x20 + 0x70) = pcVar2;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar3);
    pcVar1 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar1);
  return pcVar2;
}



/* Entry: 103145e84; end: 10314626f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103145e84(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar6 = param_1;
  FUN_103145c9c();
  uVar4 = *(undefined1 *)(param_1 + 0x10);
  uVar5 = *(undefined1 *)(param_1 + 0x11);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar18 = *(undefined8 *)(param_1 + 0x40);
  lVar7 = 0;
  FUN_10314b548();
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f44e68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f44e70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f44e78);
  lVar9 = 0;
  FUN_10314d038();
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112f44ed0) = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f44ed8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f44ee0);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f44ee8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar10 + _DAT_112f44f00) = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f44f08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f44f10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f44f18);
  lVar11 = 0;
  FUN_10314a0e8();
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar12 = lVar11;
  func_0x000107c610f8();
  lVar17 = _DAT_112f44df0;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  uVar13 = uVar18;
  func_0x000107c61174();
  func_0x000107c615f4(uVar2,2);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar14 = lVar6;
  func_0x00010006a360();
  *(long *)(lVar12 + lVar17) = lVar14;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112f44e18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112f44e20);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined **)(lVar12 + _DAT_112f44e28) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(long *)(lVar12 + _DAT_112f44df8) = lVar6;
  *(undefined1 *)(lVar12 + _DAT_112f44e00) = uVar4;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112f44e10);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  FUN_1031484c8(&uStack_90,lVar12 + _DAT_112f44e08,0x112f44260,&UNK_10db90460);
  plVar15 = &lStack_a0;
  lStack_a0 = lVar12;
  lStack_98 = lVar11;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  *(long **)(lVar10 + _DAT_112f44ef0) = plVar15;
  *(undefined1 *)(lVar10 + _DAT_112f44ef8) = uVar5;
  *(undefined8 *)(lVar10 + _DAT_112f44f20) = uVar18;
  plVar15 = &lStack_b0;
  lStack_b0 = lVar10;
  lStack_a8 = lVar9;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  *(long **)(lVar8 + _DAT_112f44e60) = plVar15;
  plVar15 = &lStack_c0;
  lStack_c0 = lVar8;
  lStack_b8 = lVar7;
  func_0x000107c61154(plVar15,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61170(lVar6);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000103148510(&uStack_90,0x112f44260,&UNK_10db90460);
  lVar17 = *(long *)((long)plVar15 + _DAT_112f44e60);
  puVar16 = &UNK_110613330;
  func_0x000107c613fc(&UNK_110613330,0x18,7);
  func_0x000107c61614(puVar16 + 0x10,plVar15);
  puVar1 = (undefined8 *)(lVar17 + _DAT_112f44f10);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_103148550;
  puVar1[1] = puVar16;
  func_0x000107c61174();
  func_0x000107c6157c(puVar16);
  func_0x000100d370bc(uVar2,uVar3);
  func_0x000107c61574(puVar16);
  func_0x000107c61170(lVar17);
  puVar16 = &UNK_110613358;
  func_0x000107c613fc(&UNK_110613358,0x18,7);
  func_0x000107c61644(puVar16 + 0x10,param_1);
  puVar1 = (undefined8 *)((long)plVar15 + _DAT_112f44e78);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0x103148558;
  puVar1[1] = puVar16;
  func_0x000107c6157c(puVar16);
  func_0x000100d370bc(uVar2,uVar3);
  func_0x000107c61574(puVar16);
  return plVar15;
}



/* Entry: 103146270; end: 10314638b;  */

void FUN_103146270(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    lVar2 = *(long *)(param_2 + 0xb0);
    if (lVar2 != 0) {
      lVar4 = *(long *)(param_2 + 0x28);
      if (lVar4 != 0) {
        func_0x000107c61438(lVar2,2);
        func_0x000107c6071c();
        uVar1 = 0;
        func_0x00010434b3d0(0);
        func_0x000107c610f8();
        func_0x00010434b1f8(param_1,uVar3,lVar2,1,uVar1);
        func_0x000107c4f644(lVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(lVar2);
        lVar2 = *(long *)(param_2 + 0xb0);
      }
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined8 *)(param_2 + 0xb0) = 0;
      func_0x000107c6142c(lVar2);
    }
    func_0x000107c61428(param_2 + 200,auStack_80,0,0);
    pcVar5 = *(code **)(param_2 + 200);
    if (pcVar5 != (code *)0x0) {
      uVar3 = *(undefined8 *)(param_2 + 0xd0);
      func_0x000107c6157c(uVar3);
      (*pcVar5)();
      func_0x000100d370bc(pcVar5,uVar3);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10314638c; end: 1031463ff;  */

void FUN_10314638c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = &uStack_60;
  func_0x00010313e600();
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  FUN_10313a14c(&uStack_60,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110612588;
  return;
}



/* Entry: 103146400; end: 10314666f;  */

/* WARNING: Possible PIC construction at 0x00010314643c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031464f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103146548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314659c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031465f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314663c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031465f4) */
/* WARNING: Removing unreachable block (ram,0x0001031465a0) */
/* WARNING: Removing unreachable block (ram,0x00010314654c) */
/* WARNING: Removing unreachable block (ram,0x0001031464f8) */
/* WARNING: Removing unreachable block (ram,0x000103146440) */
/* WARNING: Removing unreachable block (ram,0x00010314666c) */
/* WARNING: Removing unreachable block (ram,0x000103146454) */
/* WARNING: Removing unreachable block (ram,0x000103146640) */

void FUN_103146400(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103145e28();
  func_0x000107c3d614(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103146670; end: 103146947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103146670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar9 = *unaff_x20;
  uVar6 = unaff_x20[0x18];
  unaff_x20[0x17] = param_2;
  unaff_x20[0x18] = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar6);
  lVar7 = unaff_x20[0x16];
  unaff_x20[0x15] = param_2;
  unaff_x20[0x16] = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c();
  lVar8 = unaff_x20[5];
  if (lVar8 != 0) {
    func_0x000107c61434(param_3);
    func_0x000107c6071c();
    func_0x00010434b3d0(0);
    func_0x000107c610f8();
    uVar6 = param_2;
    func_0x00010434b1f8(param_1,param_2,param_3,0);
    func_0x000107c4f644(lVar8);
    func_0x000107c61170(uVar6);
    lVar7 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    *(undefined **)(lVar7 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar7 + 0x20) = param_2;
    *(undefined8 *)(lVar7 + 0x28) = param_3;
    FUN_1031485b0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61434(param_3);
    func_0x000107c600f0();
    func_0x000107c4f640(lVar8);
    func_0x000107c61170();
  }
  func_0x000103145e28();
  puVar3 = &UNK_110613358;
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_110613358,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar1 = (undefined8 *)(*(long *)(lVar7 + _DAT_112f44e60) + _DAT_112f44f08);
  uVar6 = *puVar1;
  uVar10 = puVar1[1];
  *puVar1 = 0x103148560;
  puVar1[1] = puVar2;
  func_0x000107c61580(puVar2,2);
  func_0x000100d370bc(uVar6,uVar10);
  func_0x000107c61170(lVar7);
  func_0x000107c61578(puVar2,2);
  FUN_103145c9c();
  func_0x000107c613fc(&UNK_110613358,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar6 = unaff_x20[4];
  uVar11 = unaff_x20[4];
  uVar10 = unaff_x20[3];
  func_0x000107c6157c();
  func_0x000103145dc0();
  puVar4 = &UNK_110613380;
  func_0x000107c613fc(&UNK_110613380,0x48,7);
  *(undefined8 *)(puVar4 + 0x18) = uVar11;
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = param_5;
  *(undefined8 *)(puVar4 + 0x30) = uVar6;
  *(undefined **)(puVar4 + 0x38) = puVar3;
  *(undefined8 *)(puVar4 + 0x40) = uVar9;
  uStack_80 = 0x103148568;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110613398;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar3 = puStack_78;
  func_0x000107c61434(param_5);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 103146948; end: 10314699b;  */

void FUN_103146948(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10314699c();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10314699c; end: 103146bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314699c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x20;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _DAT_112f44080;
  puVar6 = auStack_70 + -extraout_x8;
  lVar5 = *(long *)(unaff_x20 + 0x80);
  if (lVar5 != 0) {
    func_0x000107c61428(lVar5 + _DAT_112f44080,auStack_68,0,0);
    FUN_1031484c8(lVar5 + lVar2,puVar6,0x112f44078,&UNK_10db90470);
    lVar2 = 0;
    FUN_10313e71c();
    puVar3 = puVar6;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar6,1,lVar2);
    if ((int)puVar3 != 1) {
      func_0x000107c615f0(lVar5);
      func_0x000103148510(puVar6,0x112f44078,&UNK_10db90470);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
      *(undefined8 *)(unaff_x20 + 0x90) = 0;
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
      uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
      puVar4 = &UNK_110613420;
      func_0x000107c613fc(&UNK_110613420,0x28,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar8;
      *(undefined8 *)(puVar4 + 0x18) = uVar7;
      *(undefined8 *)(puVar4 + 0x20) = uVar1;
      func_0x000107c61174(uVar8);
      func_0x000100d371b0(uVar7,uVar1);
      FUN_10313bb68(3,0x1031485a4,puVar4);
      func_0x000107c61574(puVar4);
      func_0x000100d370bc(uVar7,uVar1);
      func_0x000107c615e8(lVar5);
      lVar2 = *(long *)(unaff_x20 + 0xb0);
      goto joined_r0x000103146b3c;
    }
    func_0x000103148510(puVar6,0x112f44078,&UNK_10db90470);
  }
  lVar2 = *(long *)(unaff_x20 + 0xb0);
joined_r0x000103146b3c:
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0xc0);
    if ((lVar2 != 0) && ((*(byte *)(unaff_x20 + 0xa0) & 1) == 0)) {
      uVar7 = *(undefined8 *)(unaff_x20 + 0xb8);
      *(undefined8 *)(unaff_x20 + 0xa8) = uVar7;
      *(long *)(unaff_x20 + 0xb0) = lVar2;
      lVar5 = *(long *)(unaff_x20 + 0x28);
      if (lVar5 == 0) {
        func_0x000107c61434(lVar2);
      }
      else {
        func_0x000107c61438(lVar2,3);
        func_0x000107c6071c();
        func_0x00010434b3d0(0);
        func_0x000107c610f8();
        func_0x00010434b1f8(param_1,uVar7,lVar2,0);
        func_0x000107c4f644(lVar5);
        func_0x000107c61170(uVar7);
        func_0x000107c6142c(lVar2);
      }
    }
  }
  else {
    FUN_103146da8();
  }
  return;
}


