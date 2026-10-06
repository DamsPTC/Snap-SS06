/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c798c8; end: 102c79907;  */

void FUN_102c798c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f06fc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3a7d0;
  func_0x000107c61520(&UNK_10db3a7d0,&UNK_1105ba5a8);
  puRam0000000112f06fc0 = puVar1;
  return;
}



/* Entry: 102c79908; end: 102c7996b;  */

ulong FUN_102c79908(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102c7996c; end: 102c79a73;  */

undefined * FUN_102c7996c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  lVar3 = param_2;
  func_0x000107c30b48();
  func_0x000107c30b4c();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    lVar2 = unaff_x20;
    func_0x000107c5faec();
    func_0x000107c61170(unaff_x20);
  }
  func_0x000107c30b50();
  func_0x000107c30b54();
  func_0x000107c5fadc(param_1,param_2);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5fadc(lVar2,lVar3);
    func_0x000107c6142c(lVar3);
  }
  puVar1 = PTR_PTR_1126b8fc0;
  func_0x000107c610f8(PTR_PTR_1126b8fc0);
  func_0x000107c30b44();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar2);
  return puVar1;
}



/* Entry: 102c79a74; end: 102c7a757;  */

undefined * FUN_102c79a74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar9 = param_3;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c30b10();
  }
  else {
    func_0x000107c4223c();
  }
  func_0x000107c30b08();
  func_0x000107c61434(param_3);
  lVar2 = unaff_x20;
  func_0x000107c30adc();
  func_0x000107c61180();
  lVar7 = lVar9;
  if (lVar2 == 0) {
    func_0x000107c5faec();
    lVar7 = lVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar9);
  }
  lVar9 = unaff_x20;
  func_0x000107c30ae0();
  func_0x000107c61180();
  if (lVar9 == 0) {
    uStack_c8 = 0;
    lVar9 = 0;
    lVar5 = lVar7;
  }
  else {
    uStack_c8 = lVar9;
    func_0x000107c5faec();
    lVar5 = lVar7;
    func_0x000107c61170(lVar9);
    lVar9 = lVar7;
  }
  lVar7 = unaff_x20;
  func_0x000107c30ae4();
  func_0x000107c61180();
  if (lVar7 == 0) {
    uStack_d0 = 0;
    lVar7 = 0;
    lVar3 = lVar5;
  }
  else {
    uStack_d0 = lVar7;
    func_0x000107c5faec();
    lVar3 = lVar5;
    func_0x000107c61170(lVar7);
    lVar7 = lVar5;
  }
  lVar5 = unaff_x20;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar5 == 0) {
    uStack_d8 = 0;
    lVar5 = 0;
    lVar8 = lVar3;
  }
  else {
    uStack_d8 = lVar5;
    func_0x000107c5faec();
    lVar8 = lVar3;
    func_0x000107c61170(lVar5);
    lVar5 = lVar3;
  }
  func_0x000107c30aec();
  func_0x000107c30af0();
  func_0x000107c30af4();
  lVar3 = unaff_x20;
  func_0x000107c30af8();
  func_0x000107c61180();
  func_0x000107c30afc();
  func_0x000107c30b00();
  func_0x000107c30b04();
  func_0x000107c30b0c();
  func_0x000107c30b14();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = unaff_x20;
    func_0x000107c5faec();
    func_0x000107c61170(unaff_x20);
  }
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  if (lVar9 == 0) {
    uStack_c8 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_c8,lVar9);
    func_0x000107c6142c(lVar9);
  }
  if (lVar7 == 0) {
    uStack_d0 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_d0,lVar7);
    func_0x000107c6142c(lVar7);
  }
  if (lVar5 == 0) {
    uStack_d8 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_d8,lVar5);
    func_0x000107c6142c(lVar5);
  }
  if (lVar8 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c5fadc(lVar6,lVar8);
    func_0x000107c6142c(lVar8);
  }
  puVar4 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  func_0x000107c30ad4(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uStack_c8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(uStack_d8);
  func_0x000107c61170(lVar6);
  return puVar4;
}



/* Entry: 102c7a758; end: 102c7a75b;  */

void FUN_102c7a758(void)

{
  return;
}



/* Entry: 102c7a75c; end: 102c7ab57;  */

/* WARNING: Possible PIC construction at 0x000102c7a7d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7a7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7a944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7a964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7a974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ab00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7a978) */
/* WARNING: Removing unreachable block (ram,0x000102c7a968) */
/* WARNING: Removing unreachable block (ram,0x000102c7a948) */
/* WARNING: Removing unreachable block (ram,0x000102c7a7f4) */
/* WARNING: Removing unreachable block (ram,0x000102c7a7f8) */
/* WARNING: Removing unreachable block (ram,0x000102c7ab30) */
/* WARNING: Removing unreachable block (ram,0x000102c7a808) */
/* WARNING: Removing unreachable block (ram,0x000102c7a7dc) */
/* WARNING: Removing unreachable block (ram,0x000102c7a7e0) */
/* WARNING: Removing unreachable block (ram,0x000102c7ab04) */
/* WARNING: Removing unreachable block (ram,0x000102c7ab0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7a75c(long param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c3b9ac();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c3d368(*(undefined8 *)(unaff_x20 + _DAT_112f07070));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c7ab58; end: 102c7ac7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7ab58(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_38;
  
  uVar3 = *(ulong *)(param_1 + _DAT_113068f48);
  uVar2 = uVar3;
  func_0x000107c3ec40();
  func_0x000107c61180();
  if ((((uVar2 != 0) &&
       (iVar1 = *(int *)(uVar2 + _DAT_113091028), func_0x000107c61170(), iVar1 == 3)) &&
      (uVar2 = uVar3, func_0x000107c4a304(), (uVar2 & 1) == 0)) &&
     (((uVar2 = uVar3, func_0x000107c425d8(), (uVar2 & 1) == 0 &&
       (*(int *)(*(long *)(param_1 + _DAT_113068f40) + _DAT_11308f128) == 4)) &&
      (*(int *)(*(long *)(*(long *)(*(long *)(uVar3 + _DAT_11308f298) + _DAT_11308f538) +
                         _DAT_11308f450) + _DAT_11308f7a0) != 0)))) {
    func_0x0001000d224c(&uStack_38);
    func_0x000107c4f468(uStack_38);
    func_0x000107c615e8(uStack_38);
  }
  return;
}



/* Entry: 102c7ac80; end: 102c7afbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7ac80(double param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  long lStack_80;
  undefined8 uStack_78;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f070f0));
  lStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x20);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f104b10);
  puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_113068f40) + _DAT_11308f130);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  func_0x000107c61434(uVar3);
  func_0x000107c5fb78(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&lStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar2 = uStack_78;
  lVar10 = lStack_80;
  FUN_102c7b578(param_1 * 1000.0,param_2,lStack_80,uStack_78);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar8 = PTR_PTR_1126b8fb0;
  func_0x000107c610f8(PTR_PTR_1126b8fb0);
  lVar9 = lVar10;
  func_0x000107c5fadc(lVar10,uVar2);
  uVar11 = 0;
  func_0x000107c30c68(puVar8,lVar9,puVar4,puVar5,puVar6,puVar7,0,0,0,0,0,0,0x24,0,0);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar9);
  func_0x000107c61434(uVar2);
  puVar4 = PTR_PTR_1126b8fa8;
  func_0x000107c610f8(PTR_PTR_1126b8fa8);
  func_0x000107c5fadc(lVar10,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c30b18(puVar4,lVar10,3,0xffffffffffffffff,0xffffffffffffffff,0,0,0,
                      uVar11 & 0xffffffffffffff00,2,0,0);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(lVar10);
  func_0x0001000d224c(&lStack_80);
  lVar10 = lStack_80;
  if (lStack_80 != 0) {
    lVar9 = lStack_80;
    func_0x000107c3d328(lStack_80);
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    func_0x00010468506c(0);
    func_0x000107c610f8();
    lVar10 = param_2;
    func_0x000107c61174(param_2);
    puVar5 = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61174(puVar8);
    func_0x000104684b9c(lVar10,puVar5,puVar8);
    func_0x000107c4d664(lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar10);
  }
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102c7afbc; end: 102c7b0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c7afbc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_113068f40) + _DAT_11308f130);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  lVar6 = *(long *)(*(long *)(param_1 + _DAT_113068f40) + _DAT_113815208);
  if (lVar6 == 0) {
    func_0x000107c61434(uVar5);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_113068f48);
    func_0x000107c61434(uVar5);
    FUN_102c7fa90();
    if (((uint)lVar6 & 0xff) != 1) goto LAB_102c7b04c;
  }
  uVar7 = 0;
LAB_102c7b04c:
  puVar2 = &UNK_1105ba6f0;
  func_0x000107c613fc(&UNK_1105ba6f0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105ba7e0;
  func_0x000107c613fc(&UNK_1105ba7e0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  uVar4 = 0;
  func_0x0001041b8338(0);
  func_0x000107c610f8();
  uVar5 = 0;
  func_0x0001041b812c(0,0,0x102c7c834,puVar3,uVar4);
  func_0x0001041c57dc(0);
  uVar4 = uVar5;
  func_0x0001041c4cf4(uVar5);
  func_0x000107c61170(uVar5);
  return uVar4;
}



/* Entry: 102c7b0f8; end: 102c7b1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7b0f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_1 != 0) && (*(long *)(param_1 + _DAT_113067d28) != 0)) {
      puVar1 = (undefined8 *)(param_2 + _DAT_112f070f8);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = param_3;
      puVar1[1] = param_4;
      func_0x000107c61174(param_1);
      func_0x000107c61174(param_3);
      func_0x000107c61174(param_4);
      func_0x000102c7c7d0(uVar2,uVar3);
      FUN_102c7b1dc(param_1,param_5 & 1);
      func_0x000107c61170(param_2);
      param_2 = param_1;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c7b1dc; end: 102c7b3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7b1dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  (**(code **)(unaff_x20 + _DAT_112f070d8))();
  FUN_102c7bd8c(param_2,param_1);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f070a8);
  func_0x0001041bb580(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000012;
  func_0x0001041bb40c(0xd000000000000012,0x800000010f104af0);
  func_0x000107c3ed24(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (param_1 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112f070e0) != 0) {
      func_0x000107c5615c();
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112f070f8);
    if (lVar2 != 0) {
      lVar7 = ((long *)(unaff_x20 + _DAT_112f070f8))[1];
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x0001000d224c(auStack_88);
      uVar5 = uStack_70;
      func_0x0001000a8868(auStack_88);
      lVar3 = lVar2;
      func_0x000107c3b9ac();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      auStack_a0[0] = 0;
      pcVar8 = *(code **)(lStack_68 + 0x10);
      uVar1 = 0x112f07128;
      lStack_98 = lVar4;
      func_0x0001000285a8(0x112f07128,&UNK_10db3a870);
      (*pcVar8)(auStack_a0,uVar1,&PTR_DAT_1105c4558,uStack_70,lStack_68);
      func_0x000107c6142c(uVar5);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar2);
      func_0x0001000834e4(auStack_88);
    }
  }
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f070a0));
  func_0x000107c615e8(param_2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c7b3e8; end: 102c7b42b;  */

void FUN_102c7b3e8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  func_0x000107c61618(param_2 + 0x10);
  func_0x000107c61170();
  return;
}



/* Entry: 102c7b42c; end: 102c7b577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7b42c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_980 [776];
  undefined1 auStack_678 [408];
  undefined8 uStack_4e0;
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [776];
  
  func_0x000107c61428(param_2 + 0x10,auStack_370,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + _DAT_112f070d0);
    lVar1 = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    if (lVar3 != 0) {
      lVar3 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar3 != 0) {
        func_0x000107c61174(param_1);
        func_0x0001042c3e04(auStack_678);
        uStack_4e0 = 1;
        func_0x000107c610b4(auStack_358,auStack_678,0x301);
        func_0x0001042ca7c4(0);
        func_0x000107c610f8();
        func_0x00010178e208(auStack_358,auStack_980);
        puVar2 = auStack_358;
        func_0x0001042c6780(puVar2);
        func_0x00010178e244(auStack_678);
        func_0x000107c5fadc(param_3,param_4);
        func_0x000107c41aa0(lVar3);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(param_3);
      }
    }
  }
  return;
}



/* Entry: 102c7b578; end: 102c7bd8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c7b578(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lStack_a0;
  long alStack_80 [2];
  
  lVar17 = *(long *)(param_2 + _DAT_113068f40);
  uVar7 = *(undefined8 *)(lVar17 + _DAT_11308f130);
  uVar1 = ((undefined8 *)(lVar17 + _DAT_11308f130))[1];
  uVar15 = *(undefined8 *)(param_2 + _DAT_113068f48);
  lVar5 = lVar17;
  func_0x0001084c6f7c(lVar17,uVar15);
  uVar13 = *(undefined8 *)(lVar17 + _DAT_11308f140);
  lVar2 = ((undefined8 *)(lVar17 + _DAT_11308f140))[1];
  uVar16 = *(undefined8 *)(lVar17 + _DAT_11308f138);
  lVar3 = ((undefined8 *)(lVar17 + _DAT_11308f138))[1];
  func_0x0001000d224c(alStack_80);
  lVar14 = alStack_80[0];
  if (alStack_80[0] == 0) {
    lVar12 = 0;
  }
  else {
    uVar6 = uVar7;
    func_0x000107c5fadc(uVar7,uVar1);
    lVar12 = lVar14;
    func_0x000107c5ce1c();
    func_0x000107c615e8(lVar14);
    func_0x000107c61170(uVar6);
    if (lVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102c7b670);
      (*pcVar4)();
    }
  }
  func_0x0001000d224c(alStack_80);
  lVar14 = alStack_80[0];
  if (alStack_80[0] == 0) {
    lStack_a0 = 1;
  }
  else {
    uVar6 = uVar7;
    func_0x000107c5fadc(uVar7,uVar1);
    lStack_a0 = lVar14;
    func_0x000107c5df18();
    func_0x000107c615e8(lVar14);
    func_0x000107c61170(uVar6);
    if (lStack_a0 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102c7b6c8);
      (*pcVar4)();
    }
  }
  func_0x0001000d224c(alStack_80);
  if (alStack_80[0] == 0) {
    lVar14 = 1;
  }
  else {
    uVar6 = uVar7;
    func_0x000107c5fadc(uVar7,uVar1);
    lVar14 = alStack_80[0];
    func_0x000107c42f50();
    func_0x000107c615e8(alStack_80[0]);
    func_0x000107c61170(uVar6);
    if (lVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102c7b71c);
      (*pcVar4)();
    }
  }
  lVar9 = *(long *)(lVar17 + _DAT_113815208);
  if ((lVar9 == 0) || (FUN_102c7fa90(), ((uint)lVar9 & 0xff) == 1)) {
    uVar15 = 0;
  }
  uVar10 = *(undefined8 *)(lVar17 + _DAT_113815200);
  uVar11 = *(undefined8 *)(lVar17 + _DAT_11308f128);
  uVar6 = uVar11;
  func_0x000104840e10();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(uVar7,uVar1);
  if (lVar2 == 0) {
    uVar13 = 0;
  }
  else {
    func_0x000107c5fadc(uVar13,lVar2);
  }
  if (lVar3 == 0) {
    uVar16 = 0;
  }
  else {
    func_0x000107c5fadc(uVar16);
  }
  puVar8 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  func_0x000107c5fadc(uVar6,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c30ad4(param_1,puVar8,param_3,uVar7,uVar13,uVar16,0,lVar12,lStack_a0,lVar14,0,uVar15,
                      uVar10,lVar5,lVar5,uVar11,uVar6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  return puVar8;
}



/* Entry: 102c7bd8c; end: 102c7bf4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c7bd8c(double param_1,byte param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (param_3 == 0) {
    param_3 = *(long *)(unaff_x20 + _DAT_112f07098);
    func_0x000107c5d17c();
    func_0x000107c61180();
    uVar4 = 0;
    FUN_102d0b348(0);
    lVar5 = param_3;
    func_0x000107c61480(param_3,uVar4);
    lVar1 = _DAT_112f0d820;
    if (lVar5 != 0) {
      func_0x000107c61428(lVar5 + _DAT_112f0d820,auStack_58,1,0);
      *(undefined1 *)(lVar5 + lVar1) = 0;
    }
  }
  else {
    func_0x000103b7f21c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000103b7e428();
    lVar1 = _DAT_112ff08b8;
    func_0x000107c61428(param_3 + _DAT_112ff08b8,auStack_58,1,0);
    *(byte *)(param_3 + lVar1) = param_2 & 1;
    if ((((param_2 & 1) != 0) && (*(long *)(unaff_x20 + _DAT_112f070f8) != 0)) &&
       (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(((long *)(unaff_x20 + _DAT_112f070f8))[1]
                                                         + _DAT_113068f48) + _DAT_11308f298) +
                                     _DAT_11308f540) + _DAT_11308f3b8) + _DAT_11308f5d0) != 0)) {
      func_0x000107c4223c();
      lVar1 = _DAT_112ff08c0;
      bVar2 = false;
      bVar3 = true;
      if (0.0 < param_1) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_1)) {
          bVar2 = param_1 == 1.0;
          bVar3 = 1.0 <= param_1;
        }
      }
      if (!bVar3 || bVar2) {
        func_0x000107c61428(param_3 + _DAT_112ff08c0,auStack_88,1,0);
        *(double *)(param_3 + lVar1) = param_1;
      }
    }
    lVar1 = _DAT_112ff08b0;
    func_0x000107c61428(param_3 + _DAT_112ff08b0,auStack_70,1,0);
    func_0x000107c61604(param_3 + lVar1);
  }
  return param_3;
}



/* Entry: 102c7bf50; end: 102c7bfaf; -[_TtC24AdPlaybackImplementation25AdAutoAttachmentPresenter init] */

void FUN_102c7bf50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdAutoAttachmentPresenter",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c7bf7c);
  (*pcVar1)();
}



/* Entry: 102c7bfb0; end: 102c7c0df; -[_TtC24AdPlaybackImplementation25AdAutoAttachmentPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c7bfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7c02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7c07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7c7e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7c080) */
/* WARNING: Removing unreachable block (ram,0x000102c7c7d0) */
/* WARNING: Removing unreachable block (ram,0x000102c7c7f8) */
/* WARNING: Removing unreachable block (ram,0x000102c7c7d4) */
/* WARNING: Removing unreachable block (ram,0x000102c7c030) */
/* WARNING: Removing unreachable block (ram,0x000102c7bff0) */
/* WARNING: Removing unreachable block (ram,0x000102c7c7e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7bfb0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f07070));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f07078));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f07080));
  return;
}



/* Entry: 102c7c0e0; end: 102c7c0ff;  */

void FUN_102c7c0e0(void)

{
  func_0x000107c61168(&PTR_PTR_11289ab50);
  return;
}



/* Entry: 102c7c100; end: 102c7c14b; -[_TtC24AdPlaybackImplementation25AdAutoAttachmentPresenter trayUIContainerDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000102c7c134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7c138) */

void FUN_102c7c100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102c7c21c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102c7c14c; end: 102c7c19f; -[_TtC24AdPlaybackImplementation25AdAutoAttachmentPresenter trayUIContainer:didChangeFullScreen:] */

/* WARNING: Possible PIC construction at 0x000102c7c188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7c18c) */

void FUN_102c7c14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102c7c3a0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102c7c1a0; end: 102c7c1a3; -[_TtC24AdPlaybackImplementation25AdAutoAttachmentPresenter adAttachmentHandlerViewWillFullyAppear:] */

void FUN_102c7c1a0(void)

{
  return;
}



/* Entry: 102c7c1a4; end: 102c7c1a7; -[_TtC24AdPlaybackImplementation25AdAutoAttachmentPresenter adAttachmentHandlerViewDidFullyAppear:] */

void FUN_102c7c1a4(void)

{
  return;
}



/* Entry: 102c7c1a8; end: 102c7c1ab; -[_TtC24AdPlaybackImplementation25AdAutoAttachmentPresenter adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_102c7c1a8(void)

{
  return;
}



/* Entry: 102c7c1ac; end: 102c7c1af; -[_TtC24AdPlaybackImplementation25AdAutoAttachmentPresenter adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_102c7c1ac(void)

{
  return;
}



/* Entry: 102c7c1b0; end: 102c7c1b3; -[_TtC24AdPlaybackImplementation25AdAutoAttachmentPresenter adAttachmentHandlerDidPresent:] */

void FUN_102c7c1b0(void)

{
  return;
}



/* Entry: 102c7c1b4; end: 102c7c21b; -[_TtC24AdPlaybackImplementation25AdAutoAttachmentPresenter adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x000102c7c1fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7c200) */

void FUN_102c7c1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c7c594(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102c7c21c; end: 102c7c593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7c21c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f070f8);
  if (lVar1 != 0) {
    lVar6 = ((long *)(unaff_x20 + _DAT_112f070f8))[1];
    func_0x000107c61174();
    func_0x000107c61174(lVar6);
    func_0x0001000d224c(auStack_88);
    uVar4 = uStack_70;
    func_0x0001000a8868(auStack_88);
    lVar5 = lVar1;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    lVar2 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    auStack_a0[0] = 1;
    pcVar7 = *(code **)(lStack_68 + 0x10);
    uVar3 = 0x112f07128;
    lStack_98 = lVar2;
    func_0x0001000285a8(0x112f07128,&UNK_10db3a870);
    (*pcVar7)(auStack_a0,uVar3,&PTR_DAT_1105c4558,uStack_70,lStack_68);
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar1);
    func_0x0001000834e4(auStack_88);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112f070e0);
  if (lVar1 != 0) {
    func_0x000107c50684(lVar1);
    func_0x000107c5615c(lVar1);
  }
  func_0x000102c7b8a8();
  lVar5 = *(long *)(unaff_x20 + _DAT_112f070a0);
  lVar1 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 102c7c594; end: 102c7c783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7c594(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_90;
  ppuVar6 = &puStack_90;
  pcStack_70 = FUN_102c7a758;
  puStack_68 = (undefined *)0x0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x102456760;
  puStack_78 = &UNK_1105ba640;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  puVar4 = &UNK_1105ba678;
  func_0x000107c613fc(&UNK_1105ba678,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar5 = &UNK_1105ba6a0;
  func_0x000107c613fc(&UNK_1105ba6a0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x102c7c7a0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_70 = (code *)0x102c7c858;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_1105ba6b8;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar3);
  func_0x000102c7b8a8();
  lVar9 = *(long *)(unaff_x20 + _DAT_112f070a0);
  lVar7 = lVar9;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar7 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar9);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar8 = 0;
  func_0x000107c61544(0,"",0x65,0x1a1,0x1d,1);
  func_0x000107c61574(puVar4);
  if ((uVar8 & 1) == 0) {
    puVar4 = puVar5;
    func_0x000107c61544(puVar5,"",0x65,0x1a1,0x30,1);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar4 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c7c784);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c7c780);
  (*pcVar2)();
}



/* Entry: 102c7c784; end: 102c7c7a3;  */

void FUN_102c7c784(long param_1,long param_2)

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



/* Entry: 102c7c7a4; end: 102c7c7fb;  */

/* WARNING: Possible PIC construction at 0x000102c7c7b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7c7bc) */

void FUN_102c7c7a4(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 102c7c7fc; end: 102c7c80b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7c7fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar5 = *(byte *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    if ((param_1 != 0) && (*(long *)(param_1 + _DAT_113067d28) != 0)) {
      puVar1 = (undefined8 *)(lVar6 + _DAT_112f070f8);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = uVar4;
      puVar1[1] = uVar7;
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar4);
      func_0x000107c61174(uVar7);
      func_0x000102c7c7d0(uVar2,uVar3);
      FUN_102c7b1dc(param_1,bVar5 & 1);
      func_0x000107c61170(lVar6);
      lVar6 = param_1;
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 102c7c80c; end: 102c7c82b;  */

void FUN_102c7c80c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c7c82c; end: 102c7c85f;  */

void FUN_102c7c82c(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  func_0x000107c61170();
  return;
}



/* Entry: 102c7c860; end: 102c7d393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7c860(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8,long param_9,long param_10,
                  undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  uVar17 = *(undefined8 *)(param_8 + _DAT_11306ce28);
  uVar23 = *(undefined8 *)(param_1 + _DAT_113068fd0);
  uVar21 = *(undefined8 *)(param_4 + _DAT_113043d30);
  *(bool *)(unaff_x20 + 0x18) = *(long *)(*(long *)(param_3 + _DAT_113078cc8) + _DAT_113078d90) == 0
  ;
  uVar18 = *(undefined8 *)(param_5 + _DAT_11304a480);
  func_0x0001000285a8(0x112d6e3a8,&UNK_10d930310);
  func_0x000107c61174();
  func_0x000107c615f0(uVar23);
  func_0x000107c6157c(uVar21);
  func_0x000107c61174();
  uVar11 = param_6;
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar3 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  uVar16 = *(undefined8 *)(param_7 + _DAT_11308d048);
  uVar20 = *(undefined8 *)(param_1 + _DAT_113068fd8);
  uVar15 = *(undefined8 *)(param_1 + _DAT_113069008);
  puVar4 = &UNK_1105ba808;
  func_0x000107c613fc(&UNK_1105ba808,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar17;
  func_0x0001000285a8(0x112f05f90,&UNK_10db39f10);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c6157c(uVar16);
  func_0x000107c615f0(uVar20);
  pcVar5 = FUN_102c7d394;
  func_0x0001000bdd8c(FUN_102c7d394,puVar4);
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar6 = *(undefined8 *)(param_10 + _DAT_11308b850);
  func_0x000107c61174();
  uVar11 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  lVar19 = *(long *)(param_1 + _DAT_113068ff0);
  if (lVar19 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = lVar19;
    func_0x000107c615f0();
    func_0x000107c5e210();
    func_0x000107c61180();
  }
  puVar4 = &UNK_1105ba830;
  func_0x000107c613fc(&UNK_1105ba830,0x18,7);
  lVar2 = _DAT_113078b50;
  func_0x000107c61614(puVar4 + 0x10,*(undefined8 *)(param_2 + _DAT_113078b50));
  uVar6 = *(undefined8 *)(param_2 + lVar2);
  func_0x000107c6157c(puVar4);
  func_0x000107c5df08();
  func_0x000107c61180();
  uVar22 = *(undefined8 *)(param_9 + _DAT_112f0dfa8);
  puVar7 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar22);
  func_0x000107c453e4();
  lVar8 = 0;
  FUN_102c7c0e0();
  lVar9 = lVar8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f070f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar9 + _DAT_112f07070) = uVar23;
  *(undefined8 *)(lVar9 + _DAT_112f07078) = uVar21;
  *(undefined8 *)(lVar9 + _DAT_112f07080) = uVar18;
  *(undefined8 *)(lVar9 + _DAT_112f07088) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112f07090) = uVar16;
  *(undefined8 *)(lVar9 + _DAT_112f07098) = uVar20;
  *(undefined8 *)(lVar9 + _DAT_112f070a0) = param_12;
  *(undefined8 *)(lVar9 + _DAT_112f070a8) = param_11;
  *(undefined8 *)(lVar9 + _DAT_112f070b0) = uVar15;
  *(code **)(lVar9 + _DAT_112f070b8) = pcVar5;
  *(undefined8 *)(lVar9 + _DAT_112f070c0) = uVar11;
  *(long *)(lVar9 + _DAT_112f070c8) = lVar19;
  *(long *)(lVar9 + _DAT_112f070d0) = lVar13;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f070d8);
  *puVar1 = FUN_102c7d450;
  puVar1[1] = puVar4;
  *(undefined8 *)(lVar9 + _DAT_112f070e0) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112f070e8) = uVar22;
  *(undefined **)(lVar9 + _DAT_112f070f0) = puVar7;
  puVar7 = PTR_s_init_1125d9248;
  lStack_78 = lVar9;
  lStack_70 = lVar8;
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_11);
  plVar10 = &lStack_78;
  func_0x000107c61154(plVar10,puVar7);
  func_0x000107c61574(puVar4);
  uVar11 = *(undefined8 *)(param_2 + lVar2);
  func_0x000107c4e2bc();
  func_0x000107c61180();
  pcVar12 = "init(pageProviding:presenter:mainQueuePerformer:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar13 = 0;
  FUN_102c7d714();
  lVar19 = lVar13;
  func_0x000107c610f8();
  *(undefined8 *)(lVar19 + _DAT_112f071d8) = uVar11;
  puVar1 = (undefined8 *)(lVar19 + _DAT_112f071e0);
  *puVar1 = plVar10;
  puVar1[1] = &PTR_DAT_1105ba630;
  *(char **)(lVar19 + _DAT_112f071e8) = pcVar12;
  puVar4 = PTR_s_init_1125d9248;
  lStack_88 = lVar19;
  lStack_80 = lVar13;
  func_0x000107c615f0(uVar11);
  func_0x000107c61174(plVar10);
  func_0x000107c615f0(pcVar12);
  plVar14 = &lStack_88;
  func_0x000107c61154(plVar14,puVar4);
  func_0x000107c615e8(uVar11);
  func_0x000107c61170(plVar10);
  func_0x000107c615e8(pcVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_6);
  *(long **)(unaff_x20 + 0x10) = plVar14;
  return;
}



/* Entry: 102c7d394; end: 102c7d44f;  */

void FUN_102c7d394(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c7d450; end: 102c7d457;  */

void FUN_102c7d450(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5d1b4(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 102c7d458; end: 102c7d51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7d458(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  if ((*(byte *)(unaff_x20 + 0x18) & 1) == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112f071e8);
    puVar1 = &UNK_1105ba880;
    func_0x000107c613fc(&UNK_1105ba880,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lVar3);
    uStack_40 = 0x102c7d568;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105ba898;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 102c7d51c; end: 102c7d53f;  */

void FUN_102c7d51c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c7d540; end: 102c7d55f;  */

void FUN_102c7d540(void)

{
  FUN_102c7d458();
  return;
}



/* Entry: 102c7d560; end: 102c7d58b;  */

undefined8 FUN_102c7d560(void)

{
  return 0;
}



/* Entry: 102c7d58c; end: 102c7d5ab;  */

void FUN_102c7d58c(void)

{
  func_0x000107c61168(&PTR_PTR_112f07170);
  return;
}



/* Entry: 102c7d5ac; end: 102c7d5b3;  */

void FUN_102c7d5ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c7d5b4; end: 102c7d66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7d5b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112f071d8);
    if (lVar1 != 0) {
      func_0x000107c40fa0();
      func_0x000107c61180();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_112f071e0);
        func_0x000107c615f0(uVar2);
        FUN_102c7a75c(lVar1);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(uVar2);
        return;
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c7d66c; end: 102c7d6cb; -[_TtC24AdPlaybackImplementation31AdAutoAttachmentTriggerWorkflow init] */

void FUN_102c7d66c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdAutoAttachmentTriggerWorkflow",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c7d698);
  (*pcVar1)();
}



/* Entry: 102c7d6cc; end: 102c7d713; -[_TtC24AdPlaybackImplementation31AdAutoAttachmentTriggerWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c7d6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7d6ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7d6cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f071d8));
  return;
}



/* Entry: 102c7d714; end: 102c7d733;  */

void FUN_102c7d714(void)

{
  func_0x000107c61168(&PTR_PTR_11289ac98);
  return;
}



/* Entry: 102c7d734; end: 102c7d77f;  */

undefined8 FUN_102c7d734(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102c7d780(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102c7d780; end: 102c7d957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7d780(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar6 = param_1 + _DAT_113068e98;
  uVar8 = *(undefined8 *)(lVar6 + 0x18);
  lVar9 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar8);
  (**(code **)(lVar9 + 0x38))();
  uVar2 = uVar8;
  func_0x000107c614f0();
  (**(code **)(lVar9 + 0x18))();
  func_0x000107c615e8(uVar8);
  uVar11 = *(undefined8 *)(param_1 + _DAT_113068ea0);
  uVar8 = *(undefined8 *)(lVar6 + 0x18);
  lVar1 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar8);
  pcVar10 = *(code **)(lVar1 + 8);
  func_0x000107c615f0(uVar11);
  (*pcVar10)(uVar8,lVar1);
  uVar3 = *(undefined8 *)(lVar6 + 0x18);
  lVar1 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar3);
  (**(code **)(lVar1 + 0x28))(uVar3,lVar1);
  uVar12 = *(undefined8 *)(param_2 + _DAT_112f0ded0);
  func_0x000107c6157c(uVar12);
  pcVar4 = 
  "init(operaAttachmentInteractionEventSession:adTrackerHelper:adLifecycleEventObservableV2:adReminderEventObservableV2:eventStream:mainQueuePerformer:timeProvider:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar6 = 0;
  func_0x000102c7de0c();
  func_0x000107c613fc();
  uVar7 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(lVar6 + 0x50) = uVar7;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined1 *)(lVar6 + 0x60) = 1;
  *(undefined8 *)(lVar6 + 0x68) = 0;
  *(undefined1 *)(lVar6 + 0x70) = 1;
  *(undefined8 *)(lVar6 + 0x10) = uVar2;
  *(long *)(lVar6 + 0x18) = lVar9;
  *(undefined8 *)(lVar6 + 0x20) = uVar11;
  *(undefined8 *)(lVar6 + 0x28) = uVar8;
  *(undefined8 *)(lVar6 + 0x30) = uVar3;
  *(undefined8 *)(lVar6 + 0x38) = uVar12;
  *(char **)(lVar6 + 0x40) = pcVar4;
  *(undefined **)(lVar6 + 0x48) = puVar5;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  *(long *)(unaff_x20 + 0x10) = lVar6;
  func_0x000107c61574(uVar8);
  return;
}



/* Entry: 102c7d958; end: 102c7d993;  */

void FUN_102c7d958(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_102c7da20();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c7d994; end: 102c7d9b7;  */

void FUN_102c7d994(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c7d9b8; end: 102c7d9f7;  */

void FUN_102c7d9b8(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_102c7da20();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c7d9f8; end: 102c7d9ff;  */

undefined8 FUN_102c7d9f8(void)

{
  return 0;
}



/* Entry: 102c7da00; end: 102c7da1f;  */

void FUN_102c7da00(void)

{
  func_0x000107c61168(&PTR_PTR_112f07258);
  return;
}



/* Entry: 102c7da20; end: 102c7dd97;  */

void FUN_102c7da20(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  long *plVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  undefined1 auStack_78 [24];
  long *plStack_60;
  long lStack_58;
  
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    plVar8 = *(long **)(unaff_x20 + 0x40);
    plVar2 = plVar8;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c615e8(plVar8);
    puVar3 = &UNK_1105ba910;
    func_0x000107c613fc(&UNK_1105ba910,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar4 = 0x102c7ebf0;
    puVar7 = puVar3;
    (**(code **)(*plVar2 + 0x60))(0x102c7ebf0);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    uVar5 = uVar4;
    func_0x000107c614f0(uVar4);
    (**(code **)(puVar7 + 0x18))(*(undefined8 *)(unaff_x20 + 0x50),uVar5,puVar7);
    func_0x000107c615e8(uVar4);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    plVar8 = *(long **)(unaff_x20 + 0x40);
    plVar2 = plVar8;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c615e8(plVar8);
    puVar3 = &UNK_1105ba910;
    func_0x000107c613fc(&UNK_1105ba910,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcVar6 = FUN_102c7ebd0;
    puVar7 = puVar3;
    (**(code **)(*plVar2 + 0x60))(FUN_102c7ebd0);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    pcVar9 = pcVar6;
    func_0x000107c614f0(pcVar6);
    (**(code **)(puVar7 + 0x18))(*(undefined8 *)(unaff_x20 + 0x50),pcVar9,puVar7);
    func_0x000107c615e8(pcVar6);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105ba910;
  puVar7 = puVar3;
  func_0x000107c613fc(&UNK_1105ba910,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  pcVar9 = *(code **)(lVar1 + 8);
  func_0x000107c6157c(puVar7);
  pcVar6 = FUN_102c7e3c4;
  (*pcVar9)(FUN_102c7e3c4,puVar7,uVar4,lVar1);
  func_0x000107c61578(puVar7,2);
  pcVar11 = pcVar6;
  func_0x000107c614f0(pcVar6);
  puVar7 = puVar3;
  func_0x000107c613fc(&UNK_1105ba910,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  pcVar10 = *(code **)(lVar1 + 0x10);
  func_0x000107c6157c(puVar7);
  pcVar9 = FUN_102c7e6e8;
  (*pcVar10)(FUN_102c7e6e8,puVar7,pcVar11,lVar1);
  func_0x000107c615e8(pcVar6);
  func_0x000107c61578(puVar7,2);
  pcVar6 = pcVar9;
  func_0x000107c614f0(pcVar9);
  puVar7 = puVar3;
  func_0x000107c613fc(&UNK_1105ba910,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  pcVar11 = *(code **)(lVar1 + 0x18);
  func_0x000107c6157c(puVar7);
  (*pcVar11)(FUN_102c7ea40,puVar7,pcVar6,lVar1);
  func_0x000107c615e8();
  func_0x000107c615e8(pcVar9);
  func_0x000107c61578(puVar7,2);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,plStack_60);
  plVar2 = plStack_60;
  (**(code **)(lStack_58 + 8))(plStack_60,lStack_58);
  func_0x000107c613fc(&UNK_1105ba910,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar6 = FUN_102c7ebc8;
  puVar7 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_102c7ebc8);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(auStack_78);
  pcVar9 = pcVar6;
  func_0x000107c614f0(pcVar6);
  (**(code **)(puVar7 + 0x18))(*(undefined8 *)(unaff_x20 + 0x50),pcVar9,puVar7);
  func_0x000107c615e8(pcVar6);
  return;
}



/* Entry: 102c7dd98; end: 102c7de2b;  */

void FUN_102c7dd98(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102c7de2c; end: 102c7e26b;  */

/* WARNING: Possible PIC construction at 0x000102c7eddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ee3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ee88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7efe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7eee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ef34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ef5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ef88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7efd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7df3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7dfa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e0b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7e138) */
/* WARNING: Removing unreachable block (ram,0x000102c7e1b4) */
/* WARNING: Removing unreachable block (ram,0x000102c7e174) */
/* WARNING: Removing unreachable block (ram,0x000102c7e10c) */
/* WARNING: Removing unreachable block (ram,0x000102c7e120) */
/* WARNING: Removing unreachable block (ram,0x000102c7e0e4) */
/* WARNING: Removing unreachable block (ram,0x000102c7e0f8) */
/* WARNING: Removing unreachable block (ram,0x000102c7e0bc) */
/* WARNING: Removing unreachable block (ram,0x000102c7e0d0) */
/* WARNING: Removing unreachable block (ram,0x000102c7e024) */
/* WARNING: Removing unreachable block (ram,0x000102c7e038) */
/* WARNING: Removing unreachable block (ram,0x000102c7e040) */
/* WARNING: Removing unreachable block (ram,0x000102c7e070) */
/* WARNING: Removing unreachable block (ram,0x000102c7e0a8) */
/* WARNING: Removing unreachable block (ram,0x000102c7e058) */
/* WARNING: Removing unreachable block (ram,0x000102c7df40) */
/* WARNING: Removing unreachable block (ram,0x000102c7dfa4) */
/* WARNING: Removing unreachable block (ram,0x000102c7df74) */
/* WARNING: Removing unreachable block (ram,0x000102c7efdc) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef8c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f00c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f010) */
/* WARNING: Removing unreachable block (ram,0x000102c7f050) */
/* WARNING: Removing unreachable block (ram,0x000102c7efc8) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef60) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef74) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef38) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef4c) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef10) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef24) */
/* WARNING: Removing unreachable block (ram,0x000102c7efe8) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee8c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f000) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee40) */
/* WARNING: Removing unreachable block (ram,0x000102c7ede0) */
/* WARNING: Removing unreachable block (ram,0x000102c7edf4) */
/* WARNING: Removing unreachable block (ram,0x000102c7edfc) */
/* WARNING: Removing unreachable block (ram,0x000102c7eeb8) */
/* WARNING: Removing unreachable block (ram,0x000102c7eee8) */
/* WARNING: Removing unreachable block (ram,0x000102c7f090) */
/* WARNING: Removing unreachable block (ram,0x000102c7eefc) */
/* WARNING: Removing unreachable block (ram,0x000102c7eed0) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee04) */
/* WARNING: Removing unreachable block (ram,0x000102c7f098) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee0c) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee44) */
/* WARNING: Removing unreachable block (ram,0x000102c7efe0) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee60) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee68) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee84) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee24) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102c7e188) */
/* WARNING: Removing unreachable block (ram,0x000102c7e1b8) */
/* WARNING: Removing unreachable block (ram,0x000102c7e238) */
/* WARNING: Removing unreachable block (ram,0x000102c7e240) */
/* WARNING: Removing unreachable block (ram,0x000102c7e1f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c7de2c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + _DAT_11308c0c8);
  lVar4 = lVar3;
  func_0x000107c30b1c();
  if (lVar4 == 0x15) {
    if (*(long *)(param_1 + _DAT_11308c0d0) == 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + _DAT_11308c0c0);
    func_0x000107c61174();
    func_0x000107c30adc(lVar4);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
  else if (lVar4 == 7) {
    lVar4 = *(long *)(param_1 + _DAT_11308c0c0);
    func_0x000107c30adc(lVar4);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
  else {
    if (lVar4 != 3) {
      return lVar4;
    }
    func_0x000107c30b38(lVar3);
    lVar4 = *(long *)(param_1 + _DAT_11308c0c0);
    lVar2 = *(long *)(param_1 + _DAT_11308c0d0);
    puVar1 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x48));
    func_0x000107c51b38(puVar1);
    if (lVar2 == 0) {
      return lVar3;
    }
    func_0x000107c61174(lVar2);
    func_0x000107c30adc(lVar4);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return lVar4;
}



/* Entry: 102c7e26c; end: 102c7e2d7;  */

void FUN_102c7e26c(undefined8 *param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    (*param_3)(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102c7e2d8; end: 102c7e3c3;  */

/* WARNING: Possible PIC construction at 0x000102c7e38c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7e390) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7e2d8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11308c3a0);
  func_0x000107c30bc4();
  if (iVar1 == 1) {
    lVar5 = *(long *)(param_1 + _DAT_11308c3a8);
    if (lVar5 != 0) {
      lVar2 = lVar5;
      func_0x000107c61174(lVar5);
      lVar3 = lVar2;
      FUN_102c7f3c0();
      uVar6 = *(undefined8 *)(param_1 + _DAT_11308c398);
      puVar4 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
      func_0x000107c61174(lVar2);
      func_0x000107c3ceac(uVar7);
      func_0x000107c51b38(puVar4);
      FUN_102c7ed74(lVar3,uVar6,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 102c7e3c4; end: 102c7e3e3;  */

void FUN_102c7e3c4(void)

{
  FUN_102c7e674();
  return;
}



/* Entry: 102c7e3e4; end: 102c7e673;  */

/* WARNING: Possible PIC construction at 0x000102c7e43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e64c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7e470) */
/* WARNING: Removing unreachable block (ram,0x000102c7e484) */
/* WARNING: Removing unreachable block (ram,0x000102c7e4b0) */
/* WARNING: Removing unreachable block (ram,0x000102c7e4fc) */
/* WARNING: Removing unreachable block (ram,0x000102c7e500) */
/* WARNING: Removing unreachable block (ram,0x000102c7e548) */
/* WARNING: Removing unreachable block (ram,0x000102c7e55c) */
/* WARNING: Removing unreachable block (ram,0x000102c7e564) */
/* WARNING: Removing unreachable block (ram,0x000102c7e554) */
/* WARNING: Removing unreachable block (ram,0x000102c7e518) */
/* WARNING: Removing unreachable block (ram,0x000102c7e568) */
/* WARNING: Removing unreachable block (ram,0x000102c7e570) */
/* WARNING: Removing unreachable block (ram,0x000102c7e5d4) */
/* WARNING: Removing unreachable block (ram,0x000102c7e440) */
/* WARNING: Removing unreachable block (ram,0x000102c7e540) */
/* WARNING: Removing unreachable block (ram,0x000102c7e650) */
/* WARNING: Removing unreachable block (ram,0x000102c7e448) */
/* WARNING: Removing unreachable block (ram,0x000102c7e640) */
/* WARNING: Removing unreachable block (ram,0x000102c7e648) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7e3e4(long param_1)

{
  func_0x0001041f3970();
  if (param_1 != 0) {
    func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_113068f40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102c7e674; end: 102c7e6e7;  */

void FUN_102c7e674(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    (*param_4)(param_1,param_2);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 102c7e6e8; end: 102c7e707;  */

void FUN_102c7e6e8(void)

{
  FUN_102c7e674();
  return;
}



/* Entry: 102c7e708; end: 102c7e9b7;  */

/* WARNING: Possible PIC construction at 0x000102c7e760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7e990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7e794) */
/* WARNING: Removing unreachable block (ram,0x000102c7e7a8) */
/* WARNING: Removing unreachable block (ram,0x000102c7e7d4) */
/* WARNING: Removing unreachable block (ram,0x000102c7e884) */
/* WARNING: Removing unreachable block (ram,0x000102c7e898) */
/* WARNING: Removing unreachable block (ram,0x000102c7e8a4) */
/* WARNING: Removing unreachable block (ram,0x000102c7e890) */
/* WARNING: Removing unreachable block (ram,0x000102c7e854) */
/* WARNING: Removing unreachable block (ram,0x000102c7e8a8) */
/* WARNING: Removing unreachable block (ram,0x000102c7e918) */
/* WARNING: Removing unreachable block (ram,0x000102c7e764) */
/* WARNING: Removing unreachable block (ram,0x000102c7e87c) */
/* WARNING: Removing unreachable block (ram,0x000102c7e994) */
/* WARNING: Removing unreachable block (ram,0x000102c7e76c) */
/* WARNING: Removing unreachable block (ram,0x000102c7e984) */
/* WARNING: Removing unreachable block (ram,0x000102c7e98c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7e708(long param_1)

{
  func_0x0001041f3970();
  if (param_1 != 0) {
    func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_113068f40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102c7e9b8; end: 102c7ea3f;  */

void FUN_102c7e9b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x70) == '\x01') {
      puVar1 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c3ceac(*(undefined8 *)(param_3 + 0x48));
      func_0x000107c51b38(puVar1);
      *(undefined8 *)(param_3 + 0x68) = param_1;
      *(undefined1 *)(param_3 + 0x70) = 0;
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102c7ea40; end: 102c7ea47;  */

void FUN_102c7ea40(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x70) == '\x01') {
      puVar2 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c3ceac(*(undefined8 *)(lVar1 + 0x48));
      func_0x000107c51b38(puVar2);
      *(undefined8 *)(lVar1 + 0x68) = param_1;
      *(undefined1 *)(lVar1 + 0x70) = 0;
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102c7ea48; end: 102c7ebc7;  */

void FUN_102c7ea48(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_68 [4];
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(auStack_68,&UNK_1105c41d8,uVar1,&UNK_1105c41d8,uVar2,&PTR_DAT_1105c33a8,lVar3);
  if (lStack_48 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_190,&UNK_1105c4320,uVar1,&UNK_1105c4320,uVar2,&PTR_DAT_1105c33d8,param_1);
    lStack_128 = lStack_188;
    uStack_130 = uStack_190;
    uStack_100 = uStack_160;
    uStack_118 = uStack_178;
    uStack_120 = uStack_180;
    uStack_108 = uStack_168;
    uStack_110 = uStack_170;
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_a0 = uStack_160;
    uStack_d8 = uStack_138;
    uStack_e0 = uStack_140;
    lStack_c8 = lStack_188;
    uStack_d0 = uStack_190;
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    if (lStack_188 != 0) {
      func_0x000107c61428(param_2 + 0x10,auStack_1a8,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61648();
      if (param_2 != 0) {
        uStack_168 = uStack_a8;
        uStack_170 = uStack_b0;
        uStack_160 = uStack_a0;
        lStack_188 = lStack_c8;
        uStack_190 = uStack_d0;
        uStack_178 = uStack_b8;
        uStack_180 = uStack_c0;
        FUN_102c7ec10(&uStack_190);
        func_0x000107c61574(param_2);
      }
      func_0x000102c7f3fc(&uStack_130);
    }
  }
  else {
    func_0x000107c61428(param_2 + 0x10,&uStack_d0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    func_0x000107c6142c(lStack_48);
    if (param_2 != 0) {
      *(undefined8 *)(param_2 + 0x58) = auStack_68[0];
      *(undefined1 *)(param_2 + 0x60) = 0;
      func_0x000107c61574(param_2);
    }
  }
  return;
}



/* Entry: 102c7ebc8; end: 102c7ebcf;  */

void FUN_102c7ebc8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_68 [4];
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(auStack_68,&UNK_1105c41d8,uVar1,&UNK_1105c41d8,uVar2,&PTR_DAT_1105c33a8,lVar3);
  if (lStack_48 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_190,&UNK_1105c4320,uVar1,&UNK_1105c4320,uVar2,&PTR_DAT_1105c33d8,param_1);
    lStack_128 = lStack_188;
    uStack_130 = uStack_190;
    uStack_100 = uStack_160;
    uStack_118 = uStack_178;
    uStack_120 = uStack_180;
    uStack_108 = uStack_168;
    uStack_110 = uStack_170;
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_a0 = uStack_160;
    uStack_d8 = uStack_138;
    uStack_e0 = uStack_140;
    lStack_c8 = lStack_188;
    uStack_d0 = uStack_190;
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    if (lStack_188 != 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_1a8,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar3 != 0) {
        uStack_168 = uStack_a8;
        uStack_170 = uStack_b0;
        uStack_160 = uStack_a0;
        lStack_188 = lStack_c8;
        uStack_190 = uStack_d0;
        uStack_178 = uStack_b8;
        uStack_180 = uStack_c0;
        FUN_102c7ec10(&uStack_190);
        func_0x000107c61574(lVar3);
      }
      func_0x000102c7f3fc(&uStack_130);
    }
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,&uStack_d0,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    func_0x000107c6142c(lStack_48);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x58) = auStack_68[0];
      *(undefined1 *)(lVar3 + 0x60) = 0;
      func_0x000107c61574(lVar3);
    }
  }
  return;
}



/* Entry: 102c7ebd0; end: 102c7ec0f;  */

void FUN_102c7ebd0(void)

{
  FUN_102c7e26c();
  return;
}



/* Entry: 102c7ec10; end: 102c7ed73;  */

/* WARNING: Possible PIC construction at 0x000102c7ec54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ed3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7ec58) */
/* WARNING: Removing unreachable block (ram,0x000102c7ec70) */
/* WARNING: Removing unreachable block (ram,0x000102c7ec88) */
/* WARNING: Removing unreachable block (ram,0x000102c7ec98) */
/* WARNING: Removing unreachable block (ram,0x000102c7ecb0) */
/* WARNING: Removing unreachable block (ram,0x000102c7ed5c) */
/* WARNING: Removing unreachable block (ram,0x000102c7ecfc) */
/* WARNING: Removing unreachable block (ram,0x000102c7ed40) */

void FUN_102c7ec10(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102c7ed74; end: 102c7f0c3;  */

/* WARNING: Possible PIC construction at 0x000102c7eddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ee88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7efe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ef34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ef5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7ef88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7efd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f08c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7ef8c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f00c) */
/* WARNING: Removing unreachable block (ram,0x000102c7efc8) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef60) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef74) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef38) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef4c) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef10) */
/* WARNING: Removing unreachable block (ram,0x000102c7ef24) */
/* WARNING: Removing unreachable block (ram,0x000102c7efe8) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee8c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f000) */
/* WARNING: Removing unreachable block (ram,0x000102c7ede0) */
/* WARNING: Removing unreachable block (ram,0x000102c7edf4) */
/* WARNING: Removing unreachable block (ram,0x000102c7edfc) */
/* WARNING: Removing unreachable block (ram,0x000102c7eeb8) */
/* WARNING: Removing unreachable block (ram,0x000102c7eed0) */
/* WARNING: Removing unreachable block (ram,0x000102c7eee8) */
/* WARNING: Removing unreachable block (ram,0x000102c7eefc) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee04) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee0c) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee24) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee44) */
/* WARNING: Removing unreachable block (ram,0x000102c7efe0) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee60) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee68) */
/* WARNING: Removing unreachable block (ram,0x000102c7ee84) */
/* WARNING: Removing unreachable block (ram,0x000102c7efdc) */
/* WARNING: Removing unreachable block (ram,0x000102c7f010) */
/* WARNING: Removing unreachable block (ram,0x000102c7f090) */
/* WARNING: Removing unreachable block (ram,0x000102c7f098) */
/* WARNING: Removing unreachable block (ram,0x000102c7f050) */

void FUN_102c7ed74(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c30adc(param_2);
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102c7f0c4; end: 102c7f3bf;  */

/* WARNING: Possible PIC construction at 0x000102c7f128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f1a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f1c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7f298) */
/* WARNING: Removing unreachable block (ram,0x000102c7f270) */
/* WARNING: Removing unreachable block (ram,0x000102c7f29c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f2a0) */
/* WARNING: Removing unreachable block (ram,0x000102c7f314) */
/* WARNING: Removing unreachable block (ram,0x000102c7f284) */
/* WARNING: Removing unreachable block (ram,0x000102c7f244) */
/* WARNING: Removing unreachable block (ram,0x000102c7f258) */
/* WARNING: Removing unreachable block (ram,0x000102c7f21c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f230) */
/* WARNING: Removing unreachable block (ram,0x000102c7f1f4) */
/* WARNING: Removing unreachable block (ram,0x000102c7f208) */
/* WARNING: Removing unreachable block (ram,0x000102c7f1cc) */
/* WARNING: Removing unreachable block (ram,0x000102c7f1e0) */
/* WARNING: Removing unreachable block (ram,0x000102c7f1a4) */
/* WARNING: Removing unreachable block (ram,0x000102c7f1b8) */
/* WARNING: Removing unreachable block (ram,0x000102c7f17c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f190) */
/* WARNING: Removing unreachable block (ram,0x000102c7f154) */
/* WARNING: Removing unreachable block (ram,0x000102c7f168) */
/* WARNING: Removing unreachable block (ram,0x000102c7f12c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f140) */
/* WARNING: Removing unreachable block (ram,0x000102c7f364) */

void FUN_102c7f0c4(void)

{
  long in_x3;
  
  func_0x000107c30c6c();
  func_0x000107c61180();
  if (in_x3 != 0) {
    func_0x000107c4223c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(in_x3);
    return;
  }
  return;
}



/* Entry: 102c7f3c0; end: 102c7f443;  */

undefined1 FUN_102c7f3c0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c30c94();
  if ((int)uVar2 == 0) {
    func_0x000107c30c98(param_1);
    uVar1 = (int)param_1 != 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 102c7f444; end: 102c7f4e7;  */

undefined8 FUN_102c7f444(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102c7f558(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 102c7f4e8; end: 102c7f507;  */

void FUN_102c7f4e8(void)

{
  FUN_102c7f658();
  return;
}



/* Entry: 102c7f508; end: 102c7f52b;  */

void FUN_102c7f508(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c7f52c; end: 102c7f54f;  */

void FUN_102c7f52c(void)

{
  FUN_102c7f658();
  return;
}



/* Entry: 102c7f550; end: 102c7f557;  */

undefined8 FUN_102c7f550(void)

{
  return 0;
}



/* Entry: 102c7f558; end: 102c7f637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7f558(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_112f0ded0);
  uVar6 = *(undefined8 *)(param_1 + _DAT_113068e88);
  uVar1 = *(undefined8 *)(param_1 + _DAT_113068e80);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113068e80))[1];
  uVar7 = *(undefined8 *)(param_1 + _DAT_113068ea0);
  lVar3 = 0;
  func_0x000102c7fa68();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar7);
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(uVar5);
  uVar4 = uVar6;
  func_0x000107c615f0();
  func_0x0001000c6580();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  *(undefined8 *)(lVar3 + 0x30) = uVar7;
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(long *)(unaff_x20 + 0x10) = lVar3;
  return;
}



/* Entry: 102c7f638; end: 102c7f657;  */

void FUN_102c7f638(void)

{
  func_0x000107c61168(&PTR_PTR_112f073e8);
  return;
}



/* Entry: 102c7f658; end: 102c7f743;  */

void FUN_102c7f658(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105ba958;
  func_0x000107c613fc(&UNK_1105ba958,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_102c7fa88;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102c7fa88);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x38),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102c7f744; end: 102c7f7f7;  */

void FUN_102c7f744(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(alStack_48,&UNK_1105c42a0,uVar1,&UNK_1105c42a0,uVar2,&PTR_DAT_1105c33d0,param_1);
  if (alStack_48[0] != 0) {
    func_0x000107c61428(param_2 + 0x10,alStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      FUN_102c7f7f8(alStack_48[0]);
      func_0x000107c61574(param_2);
    }
    func_0x000107c6142c(uStack_38);
    func_0x000107c61170(alStack_48[0]);
  }
  return;
}



/* Entry: 102c7f7f8; end: 102c7fa23;  */

/* WARNING: Possible PIC construction at 0x000102c7f858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7f9f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7f920) */
/* WARNING: Removing unreachable block (ram,0x000102c7f8d0) */
/* WARNING: Removing unreachable block (ram,0x000102c7f9ac) */
/* WARNING: Removing unreachable block (ram,0x000102c7f874) */
/* WARNING: Removing unreachable block (ram,0x000102c7f878) */
/* WARNING: Removing unreachable block (ram,0x000102c7f8d8) */
/* WARNING: Removing unreachable block (ram,0x000102c7f89c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f85c) */
/* WARNING: Removing unreachable block (ram,0x000102c7f930) */
/* WARNING: Removing unreachable block (ram,0x000102c7f97c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102c7f860) */
/* WARNING: Removing unreachable block (ram,0x000102c7f9f8) */

void FUN_102c7f7f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c615f0(*(long *)(unaff_x20 + 0x30));
    func_0x000107c5fadc(uVar2,uVar1);
    func_0x000107c3d368(uVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c7fa24; end: 102c7fa87;  */

void FUN_102c7fa24(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c7fa88; end: 102c7fa8f;  */

void FUN_102c7fa88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(alStack_48,&UNK_1105c42a0,uVar1,&UNK_1105c42a0,uVar2,&PTR_DAT_1105c33d0,param_1);
  if (alStack_48[0] != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,alStack_48,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar3 != 0) {
      FUN_102c7f7f8(alStack_48[0]);
      func_0x000107c61574(lVar3);
    }
    func_0x000107c6142c(uStack_38);
    func_0x000107c61170(alStack_48[0]);
  }
  return;
}



/* Entry: 102c7fa90; end: 102c7fb7f;  */

undefined1  [16] FUN_102c7fa90(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar8 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar7 = uVar8;
    if (0x7fffffffffffffff < param_2) {
      uVar7 = param_2;
    }
    func_0x000107c60480();
  }
  uVar6 = 0;
  do {
    if (uVar7 == uVar6) {
      uVar6 = 0;
      uVar5 = 1;
LAB_102c7fb48:
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = uVar6;
      return auVar9;
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c7fb68);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_2 + uVar6 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar6;
      func_0x000100e471e4(uVar6,param_2);
    }
    func_0x0001047c6864(0);
    uVar4 = uVar3;
    func_0x000107c60118(uVar3,param_1);
    func_0x000107c61170(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar5 = 0;
      goto LAB_102c7fb48;
    }
    bVar2 = SCARRY8(uVar6,1);
    uVar6 = uVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c7fb6c);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 102c7fb80; end: 102c7fba7; -[_TtC24AdPlaybackImplementation21DpaAdTrackEventStream adLifecycleEventObservableV2] */

void FUN_102c7fb80(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c7fba8; end: 102c7fbaf; -[_TtC24AdPlaybackImplementation21DpaAdTrackEventStream streamsType] */

undefined8 FUN_102c7fba8(void)

{
  return 0;
}



/* Entry: 102c7fbb0; end: 102c7fbef; -[_TtC24AdPlaybackImplementation21DpaAdTrackEventStream dpaImpressionEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7fbb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c7fbf0; end: 102c80193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7fbf0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar15 = *(long *)(unaff_x20 + _DAT_112f07508);
  func_0x000107c5fadc();
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar15 == 0) {
    return;
  }
  func_0x0001041f3970();
  func_0x000107c61170(lVar15);
  lVar15 = _DAT_113068f40;
  if (param_2 == 0) {
    return;
  }
  lVar5 = *(long *)(param_2 + _DAT_113068f40);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f07518);
  func_0x000107c61174();
  func_0x000107c3ceac(uVar16);
  uVar16 = *(undefined8 *)(lVar5 + _DAT_11308f130);
  uVar1 = ((undefined8 *)(lVar5 + _DAT_11308f130))[1];
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c61434(uVar1);
  func_0x000107c602fc(0x1a);
  func_0x000107c5fb78(0xd000000000000015,0x800000010f104d20);
  func_0x000107c5fb78(uVar16,uVar1);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&puStack_88,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar3 = uStack_80;
  puVar11 = puStack_88;
  func_0x0001000d224c(&puStack_88);
  puVar9 = puStack_88;
  if (puStack_88 == (undefined *)0x0) {
    puStack_90 = (undefined *)0x0;
  }
  else {
    uVar23 = uVar16;
    func_0x000107c5fadc(uVar16,uVar1);
    puStack_90 = puVar9;
    func_0x000107c5ce1c();
    func_0x000107c615e8(puVar9);
    func_0x000107c61170(uVar23);
  }
  func_0x0001000d224c(&puStack_88);
  puVar9 = puStack_88;
  if (puStack_88 == (undefined *)0x0) {
    puStack_98 = (undefined *)0x1;
  }
  else {
    uVar23 = uVar16;
    func_0x000107c5fadc(uVar16,uVar1);
    puStack_98 = puVar9;
    func_0x000107c5df18();
    func_0x000107c615e8(puVar9);
    func_0x000107c61170(uVar23);
  }
  func_0x0001000d224c(&puStack_88);
  puVar9 = puStack_88;
  if (puStack_88 == (undefined *)0x0) {
    puStack_a0 = (undefined *)0x1;
  }
  else {
    uVar23 = uVar16;
    func_0x000107c5fadc(uVar16,uVar1);
    puStack_a0 = puVar9;
    func_0x000107c42f50();
    func_0x000107c615e8(puVar9);
    func_0x000107c61170(uVar23);
  }
  uVar17 = *(ulong *)(lVar5 + _DAT_113815208);
  if (uVar17 == 0) {
    func_0x000107c61174(lVar5);
    lVar18 = 0;
  }
  else {
    uVar21 = uVar17 & 0xffffffffffffff8;
    if (uVar17 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar21 + 0x10);
    }
    else {
      uVar6 = uVar17;
      if (-1 < (long)uVar17) {
        uVar6 = uVar21;
      }
      func_0x000107c60480();
    }
    if (uVar6 == 0) {
      func_0x000107c61174(lVar5);
      lVar18 = 0;
    }
    else if ((uVar17 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar21 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c80194);
        (*pcVar4)();
      }
      lVar18 = *(long *)(uVar17 + 0x20);
      func_0x000107c61174(lVar5);
      func_0x000107c61174(lVar18);
    }
    else {
      func_0x000107c61174(lVar5);
      lVar18 = 0;
      func_0x000100e471e4(0,uVar17);
    }
  }
  lVar7 = lVar5;
  lVar13 = lVar18;
  func_0x0001084c6f7c(lVar5,lVar18);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar18);
  if ((long)((ulong)puStack_98 | (ulong)puStack_90 | (ulong)puStack_a0) < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102c80178);
    (*pcVar4)();
  }
  uVar23 = *(undefined8 *)(lVar5 + _DAT_11308f140);
  lVar18 = ((undefined8 *)(lVar5 + _DAT_11308f140))[1];
  uVar22 = *(undefined8 *)(lVar5 + _DAT_11308f138);
  lVar2 = ((undefined8 *)(lVar5 + _DAT_11308f138))[1];
  lVar15 = *(long *)(*(long *)(param_2 + lVar15) + _DAT_113815208);
  if (lVar15 != 0) {
    uVar20 = *(undefined8 *)(param_2 + _DAT_113068f48);
    func_0x000107c61434(lVar15);
    lVar13 = lVar15;
    FUN_102c7fa90();
    uVar12 = (uint)lVar13;
    func_0x000107c6142c(lVar15);
    if ((uVar12 & 0xff) != 1) goto LAB_102c7ff68;
  }
  uVar20 = 0;
LAB_102c7ff68:
  uVar14 = *(undefined8 *)(lVar5 + _DAT_113815200);
  uVar19 = *(undefined8 *)(lVar5 + _DAT_11308f128);
  uVar8 = uVar19;
  func_0x000104840e10();
  puVar9 = puVar11;
  func_0x000107c5fadc(puVar11,uVar3);
  func_0x000107c5fadc(uVar16,uVar1);
  func_0x000107c6142c(uVar1);
  if (lVar18 == 0) {
    uVar23 = 0;
  }
  else {
    func_0x000107c5fadc(uVar23,lVar18);
  }
  if (lVar2 == 0) {
    uVar22 = 0;
  }
  else {
    func_0x000107c5fadc(uVar22,lVar2);
  }
  puVar10 = PTR_PTR_1126b9150;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar8,lVar13);
  func_0x000107c6142c(lVar13);
  func_0x000107c30ad4(param_1 * 1000.0,puVar10,puVar9,uVar16,uVar23,uVar22,0,puStack_90,puStack_98,
                      puStack_a0,0,uVar20,uVar14,lVar7,lVar7,uVar19,uVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar8);
  puVar9 = PTR_PTR_1126b90d8;
  func_0x000107c610f8(PTR_PTR_1126b90d8);
  func_0x000107c61174();
  func_0x000107c5fadc(puVar11,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5ee20(param_4,param_5);
  func_0x000107c30d78(puVar9,puVar11,param_4);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(param_4);
  uVar16 = 0;
  func_0x00010469e0dc(0);
  func_0x000107c610f8();
  puVar11 = puVar10;
  func_0x00010469d97c(puVar10,puVar9,uVar16);
  puStack_88 = puVar11;
  func_0x0001002a64a8(&puStack_88);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102c80194; end: 102c801f3; -[_TtC24AdPlaybackImplementation21DpaAdTrackEventStream init] */

void FUN_102c80194(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.DpaAdTrackEventStream",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c801c0);
  (*pcVar1)();
}



/* Entry: 102c801f4; end: 102c8024b; -[_TtC24AdPlaybackImplementation21DpaAdTrackEventStream .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c80220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c80224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c801f4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f07508));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f07510));
  return;
}



/* Entry: 102c8024c; end: 102c8026b;  */

void FUN_102c8024c(void)

{
  func_0x000107c61168(&PTR_PTR_11289ad68);
  return;
}



/* Entry: 102c8026c; end: 102c8042f;  */

void FUN_102c8026c(void)

{
  FUN_102c7fbf0();
  return;
}



/* Entry: 102c80430; end: 102c80443;  */

ulong FUN_102c80430(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c80528);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c8052c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b5b98;
    func_0x000107c61168(PTR_PTR_1126b5b98);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b5b98;
    func_0x000107c61168(PTR_PTR_1126b5b98);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102c80600(0,0x112f07550,&PTR_PTR_1126b5b98);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c80600);
  (*pcVar2)();
}



/* Entry: 102c80444; end: 102c805ff;  */

ulong FUN_102c80444(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c80528);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c8052c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102c80600(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c80600);
  (*pcVar2)();
}



/* Entry: 102c80600; end: 102c8063f;  */

void FUN_102c80600(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102c80640; end: 102c80643; -[_TtC24AdPlaybackImplementation21DpaAdTrackEventStream adInteractionEventObservable] */

void FUN_102c80640(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102c80644; end: 102c80647; -[_TtC24AdPlaybackImplementation21DpaAdTrackEventStream adLifecycleEventObservable] */

void FUN_102c80644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102c80648; end: 102c8069b;  */

undefined8 FUN_102c80648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102c8069c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102c8069c; end: 102c808fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8069c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_a8;
  long lStack_a0;
  long *aplStack_98 [3];
  long lStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar8 = *(undefined8 *)(param_3 + _DAT_11308b848);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar8;
  uVar9 = *(undefined8 *)(param_1 + _DAT_113068fd0);
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar10 = *(undefined8 *)(param_3 + _DAT_11308b850);
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(uVar9);
  func_0x000107c61174();
  uVar8 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = 0;
  FUN_102c8024c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112f07520;
  uVar10 = 0x112f07558;
  func_0x0001000285a8(0x112f07558,&UNK_10db3aa98);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar4 + lVar1) = uVar10;
  *(undefined8 *)(lVar4 + _DAT_112f07508) = uVar9;
  *(undefined8 *)(lVar4 + _DAT_112f07510) = uVar8;
  *(undefined **)(lVar4 + _DAT_112f07518) = puVar2;
  plVar5 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + 0x18) = plVar5;
  uVar8 = *(undefined8 *)(param_2 + _DAT_112f0dfa8);
  ppuStack_78 = &PTR_DAT_1105ba970;
  lVar6 = 0;
  aplStack_98[0] = plVar5;
  lStack_80 = lVar3;
  FUN_102c80d44();
  lVar4 = lVar6;
  func_0x000107c610f8();
  lVar1 = _DAT_112f07620;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c61174(plVar5);
  func_0x000107c61174();
  uVar10 = uVar8;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + lVar1) = uVar10;
  *(undefined8 *)(lVar4 + _DAT_112f07610) = uVar8;
  FUN_102c808fc(aplStack_98,lVar4 + _DAT_112f07618);
  puVar2 = PTR_s_init_1125d9248;
  lStack_a8 = lVar4;
  lStack_a0 = lVar6;
  func_0x000107c6157c(uVar8);
  plVar7 = &lStack_a8;
  func_0x000107c61154(plVar7,puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x0001000834e4(aplStack_98);
  *(long **)(unaff_x20 + 0x10) = plVar7;
  return;
}


