/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107446498; end: 1074464db;  */

long FUN_107446498(long param_1)

{
  func_0x000107444470(param_1 + 0x120);
  FUN_1074444a8(param_1 + 0x100);
  func_0x00010730b13c(param_1 + 200);
  FUN_107446460(param_1 + 0xb0);
  func_0x00010744ccf8();
  func_0x00010744cb44();
  return param_1;
}



/* Entry: 1074464dc; end: 10744652f;  */

void FUN_1074464dc(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x00010744c38c();
  if ((bool)in_CY && !(bool)in_ZR) {
    if (param_2 >> 0x3d != 0) {
      FUN_107446530();
      func_0x00010744c408();
      FUN_107446594();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c94c();
    FUN_10744655c();
    func_0x00010744c514();
    func_0x00010744c4f4();
    FUN_10744653c();
    FUN_107446594(auStack_48);
  }
  return;
}



/* Entry: 107446530; end: 10744653b;  */

void FUN_107446530(void)

{
  func_0x00010744c184();
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 10744653c; end: 10744655b;  */

void FUN_10744653c(void)

{
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 10744655c; end: 10744657b;  */

void FUN_10744655c(void)

{
  FUN_10744657c();
  return;
}



/* Entry: 10744657c; end: 107446593;  */

long * FUN_10744657c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1074465c0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107446594; end: 1074465bf;  */

long * FUN_107446594(long *param_1)

{
  FUN_1074465c0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074465c0; end: 1074465e3;  */

void FUN_1074465c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1074465e4; end: 107446613;  */

void FUN_1074465e4(void)

{
  undefined1 in_CY;
  
  func_0x00010744c0d4();
  if ((bool)in_CY) {
    FUN_107446614();
  }
  else {
    func_0x00010744cb58();
  }
  func_0x00010744cba4();
  return;
}



/* Entry: 107446614; end: 107446673;  */

void FUN_107446614(undefined8 param_1,long param_2)

{
  func_0x00010744c010();
  func_0x00010744cd74();
  FUN_107446674();
  func_0x00010744c0bc();
  if (param_2 != 0) {
    FUN_10744655c();
  }
  func_0x00010744c1ac();
  func_0x00010744c4f4();
  FUN_10744653c();
  func_0x00010744c6f4();
  FUN_107446594();
  return;
}



/* Entry: 107446674; end: 1074466c7;  */

/* WARNING: Possible PIC construction at 0x0001074466b8: Changing call to branch */

long FUN_107446674(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010744c4a0();
    lVar1 = extraout_x9;
    if ((bool)in_CY) {
      lVar1 = extraout_x8;
    }
    return lVar1;
  }
  FUN_107446530();
  if (param_2 < (ulong)(param_1[1] - *param_1 >> 3)) {
    return *param_1 + param_2 * 8;
  }
  func_0x00010744c340();
  func_0x00010744c9ec();
  FUN_1074466e8();
  return unaff_x19;
}



/* Entry: 1074466c8; end: 1074466e7;  */

void FUN_1074466c8(void)

{
  func_0x00010744c9ec();
  FUN_1074466e8();
  return;
}



/* Entry: 1074466e8; end: 1074466ff;  */

void FUN_1074466e8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107446498(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107446700; end: 10744671b;  */

void FUN_107446700(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107446498(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10744671c; end: 10744678f;  */

void FUN_10744671c(float param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  
  *(undefined **)(param_4 + 0x10) = &UNK_10e52b660;
  *(undefined8 *)(param_4 + 0x18) = 0;
  lVar1 = param_4;
  func_0x00010744c9d4(&UNK_1109b16d8);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined **)(lVar1 + 0x30) = &UNK_10e52b660;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined **)(lVar1 + 0x50) = &UNK_10e52b660;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  FUN_107339130(lVar1 + 0x70);
  *(undefined4 *)(param_4 + 0xa8) = param_2;
  *(undefined4 *)(param_4 + 0xac) = param_3;
  *(float *)(param_4 + 0xb0) = param_1;
  *(float *)(param_4 + 0xb4) = param_1 + 1.0;
  func_0x00010744c828();
  return;
}



/* Entry: 107446790; end: 107446793;  */

void FUN_107446790(void)

{
  long unaff_x19;
  
  func_0x00010744cfcc();
  FUN_1074444a8(unaff_x19 + 0x108);
  func_0x00010730b13c(unaff_x19 + 0xd0);
  FUN_107446ec4(unaff_x19 + 0xb8);
  func_0x00010744ccf8();
  func_0x00010744cb44();
  return;
}



/* Entry: 107446794; end: 1074467a7;  */

void FUN_107446794(void)

{
  FUN_107446efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074467a8; end: 1074469bf;  */

long FUN_1074467a8(long param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long lVar2;
  code *extraout_x8_00;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined1 auStack_2d0 [64];
  long lStack_290;
  undefined1 auStack_288 [232];
  undefined1 auStack_1a0 [8];
  undefined4 uStack_198;
  undefined4 uStack_194;
  byte bStack_168;
  undefined8 uStack_10;
  
  FUN_10744c750();
  func_0x00010744bf78();
  uStack_10 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)(param_1 + 0xb0),auStack_1a0);
  func_0x00010744cc24();
  func_0x00010744c530(auStack_288);
  func_0x00010744c1e4();
  func_0x00010744cf8c();
  func_0x00010744c648(auStack_1a0);
  func_0x00010744cc80();
  lStack_290 = unaff_x19 + 0x10;
  FUN_107339498(*(undefined4 *)(unaff_x19 + 0xa8),*(undefined4 *)(unaff_x19 + 0xac),unaff_x19 + 0x70
                ,auStack_1a0,auStack_2d0);
  func_0x00010744c6b8();
  func_0x0001077512dc(*(undefined4 *)(unaff_x19 + 0xb4),&uStack_460);
  func_0x00010744d060();
  func_0x00010744c538();
  func_0x00010744c1e4();
  func_0x00010744c694();
  func_0x00010744c3b0();
  func_0x00010744c278();
  uVar5 = *(undefined4 *)(unaff_x19 + 0xa8);
  uVar6 = *(undefined4 *)(unaff_x19 + 0xac);
  func_0x00010744ccd8();
  func_0x00010744c7b8();
  func_0x00010744c7c0();
  func_0x00010744c780();
  func_0x00010744c7c8();
  func_0x00010744cc68();
  func_0x00010744cc9c();
  func_0x00010744cca4();
  func_0x00010744ccac();
  uStack_460 = uVar5;
  uStack_45c = uVar6;
  FUN_10744594c(auStack_1a0,&uStack_460);
  func_0x00010744c0e8();
  plVar3 = (long *)(unaff_x19 + 0xb8);
  lVar2 = *plVar3;
  if ((ulong)(*(long *)(unaff_x19 + 200) - lVar2 >> 4) < unaff_x20) {
    func_0x00010744cfe4();
    FUN_107446f38(plVar3);
    lVar2 = *plVar3;
  }
  for (uVar4 = *(long *)(unaff_x19 + 0xc0) - lVar2 >> 4; uVar1 = uVar4 == unaff_x20,
      uVar4 < unaff_x20; uVar4 = uVar4 + 1) {
    uStack_198 = uVar5;
    uStack_194 = uVar6;
    FUN_10744707c(plVar3,auStack_1a0);
  }
  func_0x00010744c92c(unaff_x19 + 0x108);
  func_0x00010744c924(unaff_x19 + 0x128);
  func_0x00010744c470();
  (*extraout_x8_00)();
  func_0x00010726236c(auStack_1a0);
  if ((bStack_168 & 1) == 0) {
    func_0x00010744c904();
    lVar2 = unaff_x19 + 0x128;
    func_0x00010744cd38();
  }
  else {
    lVar2 = unaff_x19 + 0x108;
    FUN_10744464c(lVar2,auStack_1a0);
    func_0x00010744c904();
    func_0x00010744cd38();
  }
  *(undefined1 *)(unaff_x19 + 0x140) = 1;
  func_0x00010744ccb4();
  func_0x00010744bf64(uStack_10);
  if ((bool)uVar1) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x00010744ccb4();
  func_0x00010744c3c8();
  return ((*(long *)(lVar2 + 0xb8) - *(long *)(lVar2 + 0xc0) ^ 0xffffffffffffffffU) &
         0xfffffffffffffff0) + 0x10;
}



/* Entry: 1074469c0; end: 1074469c7;  */

long FUN_1074469c0(long param_1)

{
  return ((*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xc0) ^ 0xffffffffffffffffU) &
         0xfffffffffffffff0) + 0x10;
}



/* Entry: 1074469c8; end: 107446a1f;  */

char FUN_1074469c8(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x140);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x140) = 0;
    func_0x00010744c158(*(undefined8 *)(param_1 + 0xb8));
  }
  return cVar1;
}



/* Entry: 107446a20; end: 107446b27;  */

void FUN_107446a20(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  int extraout_w10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long in_stack_00000040;
  
  func_0x00010744ce4c();
  func_0x00010744c19c();
  func_0x00010744c8d0();
  func_0x00010744c880();
  func_0x00010744cbe0();
  if ((bool)in_ZR) {
    func_0x00010744cbc8();
  }
  else {
    func_0x00010744c460();
    func_0x00010744c318();
    func_0x00010744cbbc();
    for (; uVar1 = unaff_x23 == unaff_x24, !(bool)uVar1; unaff_x23 = unaff_x23 + 0x58) {
      func_0x00010744c244();
      func_0x00010744c9cc();
      if (in_stack_00000040 != 0) {
        func_0x00010744cbb0();
        if ((bool)uVar1) {
          func_0x00010744c93c();
          func_0x00010744c30c();
        }
        else {
          func_0x00010786967c();
          func_0x00010744c8a4();
        }
        func_0x00010744c230();
        if (extraout_x8 != 0) {
          do {
            func_0x00010744c2cc();
          } while (extraout_w10 != 0);
        }
        func_0x00010744c038();
        FUN_107446b28();
        func_0x00010744c664();
        *(undefined1 *)(unaff_x22 + 0x140) = unaff_w25;
        func_0x00010744c640();
      }
      func_0x00010744c65c();
    }
    func_0x00010744c300();
  }
  func_0x00010744c620();
  return;
}



/* Entry: 107446b28; end: 107446cbf;  */

void FUN_107446b28(long param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined8 in_stack_00000070;
  long in_stack_00000080;
  undefined1 auStack_590 [72];
  undefined1 auStack_548 [40];
  undefined8 *puStack_520;
  code *pcStack_518;
  undefined1 auStack_510 [176];
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined1 auStack_2d0 [64];
  long lStack_290;
  undefined1 auStack_288 [232];
  undefined1 auStack_1a0 [400];
  undefined8 uStack_10;
  
  FUN_10744c750();
  func_0x00010744bfa0();
  uStack_10 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)(param_1 + 0xb0),auStack_1a0);
  func_0x00010744c708(auStack_288);
  func_0x00010744c2f4();
  func_0x00010744cf80();
  func_0x00010744c718(auStack_1a0);
  func_0x00010744d024();
  lStack_290 = unaff_x22 + 0x10;
  FUN_107339498(*(undefined4 *)(unaff_x22 + 0xa8),*(undefined4 *)(unaff_x22 + 0xac),unaff_x22 + 0x70
                ,auStack_1a0,auStack_2d0);
  func_0x00010744c6b8();
  func_0x0001077512dc(*(undefined4 *)(unaff_x22 + 0xb4),&uStack_460);
  func_0x00010744c708(auStack_548);
  func_0x00010744c528(auStack_510);
  func_0x00010744cf68();
  func_0x00010744c718(&uStack_460);
  func_0x00010744ce64();
  uVar5 = *(undefined4 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined4 *)(unaff_x22 + 0xac);
  FUN_107339498(unaff_x22 + 0x70,&uStack_460,auStack_590);
  func_0x00010724b3d8(auStack_590);
  func_0x00010744cc30();
  func_0x00010744cc40();
  func_0x00010744cc38();
  func_0x00010744cc14();
  func_0x00010744cc50();
  func_0x00010744cc58();
  func_0x00010744cc60();
  puVar2 = auStack_1a0;
  uStack_460 = uVar5;
  uStack_45c = uVar6;
  FUN_10744594c(puVar2,&uStack_460);
  func_0x00010744c0e8();
  while (uVar1 = unaff_x21 == unaff_x20, unaff_x21 < unaff_x20) {
    puVar2 = (undefined1 *)(unaff_x22 + 0xb8);
    func_0x00010744713c();
    func_0x00010744ce28();
    *(undefined4 *)(puVar2 + 8) = uVar5;
    *(undefined4 *)(puVar2 + 0xc) = uVar6;
  }
  if ((*(byte *)(in_stack_00000080 + 0x20) & 1) != 0) {
    func_0x00010744c944();
  }
  func_0x00010744bf64(uStack_10);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010744c9e0();
    func_0x00010724b3d8();
    func_0x00010744cc30();
    func_0x00010744cc40();
    func_0x00010744cc38();
    func_0x00010744cc14();
    func_0x00010744cc50();
    func_0x00010744cc58();
    func_0x00010744cc60();
    func_0x00010744c3c8();
    pcVar4 = FUN_107446cc0;
    FUN_10744c750();
    puVar3 = puVar2;
    puStack_520 = &stack0x00000070;
    pcStack_518 = pcVar4;
    func_0x00010744c078();
    func_0x00010744c868(*(undefined4 *)(puVar3 + 0xb0));
    func_0x00010744c2e8();
    func_0x00010744c2dc();
    func_0x00010744c178();
    func_0x00010744c148();
    func_0x00010744c2ac();
    func_0x00010744c444(*(undefined4 *)(puVar2 + 0xa8),*(undefined4 *)(puVar2 + 0xac));
    FUN_107339498();
    func_0x00010744c6b8();
    func_0x00010744c43c();
    func_0x00010744c424();
    func_0x00010744c42c();
    func_0x00010744c434();
    func_0x00010744c868(*(undefined4 *)(puVar2 + 0xb4));
    func_0x00010744c2e8();
    func_0x00010744c2dc();
    func_0x00010744c178();
    func_0x00010744c148();
    func_0x00010744c2ac();
    uVar5 = *(undefined4 *)(puVar2 + 0xa8);
    uVar6 = *(undefined4 *)(puVar2 + 0xac);
    func_0x00010744c444();
    FUN_107339498();
    func_0x00010744c43c();
    func_0x00010744c424();
    func_0x00010744c42c();
    func_0x00010744c434();
    *extraout_x8_00 = unaff_s8;
    extraout_x8_00[1] = unaff_s9;
    extraout_x8_00[2] = uVar5;
    extraout_x8_00[3] = uVar6;
    *(undefined1 *)(extraout_x8_00 + 4) = 1;
    func_0x00010744bf64(extraout_x8_01);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010744c294();
      func_0x00010744c424();
      func_0x00010744c42c();
      func_0x00010744c434();
      func_0x00010744c3c8();
      return;
    }
  }
  return;
}



/* Entry: 107446cc0; end: 107446ddb;  */

void FUN_107446cc0(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined4 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  FUN_10744c750();
  lVar1 = param_1;
  func_0x00010744c078();
  func_0x00010744c868(*(undefined4 *)(lVar1 + 0xb0));
  func_0x00010744c2e8();
  func_0x00010744c2dc();
  func_0x00010744c178();
  func_0x00010744c148();
  func_0x00010744c2ac();
  func_0x00010744c444(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  FUN_107339498();
  func_0x00010744c6b8();
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c868(*(undefined4 *)(param_1 + 0xb4));
  func_0x00010744c2e8();
  func_0x00010744c2dc();
  func_0x00010744c178();
  func_0x00010744c148();
  func_0x00010744c2ac();
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  uVar3 = *(undefined4 *)(param_1 + 0xac);
  func_0x00010744c444();
  FUN_107339498();
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  *extraout_x8 = unaff_s8;
  extraout_x8[1] = unaff_s9;
  extraout_x8[2] = uVar2;
  extraout_x8[3] = uVar3;
  *(undefined1 *)(extraout_x8 + 4) = 1;
  func_0x00010744bf64(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  return;
}



/* Entry: 107446ddc; end: 107446dfb;  */

void FUN_107446ddc(void)

{
  return;
}



/* Entry: 107446dfc; end: 107446e97;  */

void FUN_107446dfc(int param_1)

{
  long unaff_x20;
  
  func_0x00010744c168();
  if (param_1 == 0) {
    func_0x00010744ca28();
  }
  else if (*(int *)(unaff_x20 + 0x38) == 0) {
    func_0x00010744cbd4();
  }
  else {
    func_0x00010744cdb0();
  }
  func_0x00010744c1cc();
  return;
}



/* Entry: 107446e98; end: 107446ec3;  */

void FUN_107446e98(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x9;
  ulong uVar4;
  undefined1 auStack_48 [40];
  
  lVar2 = *(long *)(param_1 + 200) - *(long *)(param_1 + 0xb8);
  uVar3 = lVar2 >> 4;
  uVar4 = lVar2 >> 3;
  uVar1 = param_2;
  if (param_2 <= uVar4) {
    uVar1 = uVar4;
  }
  if (param_2 <= uVar3) {
    uVar1 = uVar3;
  }
  uVar1 = uVar1 & 0xffffffff;
  func_0x00010744c258();
  if ((ulong)(extraout_x9 >> 4) < uVar1) {
    if (uVar1 >> 0x3c != 0) {
      FUN_107446f94();
      func_0x00010744c408();
      FUN_10744702c();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c4c8();
    FUN_107446fc0(auStack_48);
    func_0x00010744c4f4();
    FUN_107446fa0();
    FUN_10744702c(auStack_48);
  }
  return;
}



/* Entry: 107446ec4; end: 107446ee7;  */

void FUN_107446ec4(void)

{
  func_0x00010744c220();
  FUN_107446ee8();
  return;
}



/* Entry: 107446ee8; end: 107446efb;  */

void FUN_107446ee8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107446efc; end: 107446f37;  */

void FUN_107446efc(void)

{
  long unaff_x19;
  
  func_0x00010744cfcc();
  FUN_1074444a8(unaff_x19 + 0x108);
  func_0x00010730b13c(unaff_x19 + 0xd0);
  FUN_107446ec4(unaff_x19 + 0xb8);
  func_0x00010744ccf8();
  func_0x00010744cb44();
  return;
}



/* Entry: 107446f38; end: 107446f93;  */

void FUN_107446f38(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x00010744c258();
  if ((ulong)(extraout_x9 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_107446f94();
      func_0x00010744c408();
      FUN_10744702c();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c4c8();
    FUN_107446fc0(auStack_48);
    func_0x00010744c4f4();
    FUN_107446fa0();
    FUN_10744702c(auStack_48);
  }
  return;
}



/* Entry: 107446f94; end: 107446f9f;  */

void FUN_107446f94(void)

{
  func_0x00010744c184();
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 107446fa0; end: 107446fbf;  */

void FUN_107446fa0(void)

{
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 107446fc0; end: 10744700f;  */

void FUN_107446fc0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010744c480();
  if (param_2 != 0) {
    func_0x000107446ff0(param_4);
  }
  func_0x00010744ce10();
  return;
}



/* Entry: 107447010; end: 10744702b;  */

long * FUN_107447010(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107447058();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10744702c; end: 107447057;  */

long * FUN_10744702c(long *param_1)

{
  FUN_107447058();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107447058; end: 10744707b;  */

void FUN_107447058(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10744707c; end: 1074470b7;  */

undefined8 * FUN_10744707c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x00010744c4d8();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_1074470b8();
  }
  else {
    uVar2 = *param_2;
    extraout_x8[1] = param_2[1];
    *extraout_x8 = uVar2;
    puVar1 = extraout_x8 + 2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 1074470b8; end: 107447113;  */

void FUN_1074470b8(void)

{
  func_0x00010744c010();
  FUN_107447114();
  func_0x00010744c324();
  func_0x00010744ca40();
  FUN_107446fc0();
  func_0x00010744cbec();
  func_0x00010744c4f4();
  FUN_107446fa0();
  func_0x00010744c6f4();
  FUN_10744702c();
  return;
}



/* Entry: 107447114; end: 10744716b;  */

/* WARNING: Possible PIC construction at 0x00010744715c: Changing call to branch */

long FUN_107447114(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x00010744d09c();
    lVar1 = extraout_x9;
    if ((bool)in_CY) {
      lVar1 = extraout_x8;
    }
    return lVar1;
  }
  FUN_107446f94();
  if (param_2 < (ulong)(param_1[1] - *param_1 >> 4)) {
    return *param_1 + param_2 * 0x10;
  }
  func_0x00010744c340();
  func_0x00010744c9ec();
  FUN_10744718c();
  return unaff_x19;
}



/* Entry: 10744716c; end: 10744718b;  */

void FUN_10744716c(void)

{
  func_0x00010744c9ec();
  FUN_10744718c();
  return;
}



/* Entry: 10744718c; end: 1074471a3;  */

void FUN_10744718c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107446efc(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074471a4; end: 10744720b;  */

void FUN_1074471a4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107446efc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10744720c; end: 10744722b;  */

void FUN_10744720c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010744cdf0(param_2,param_1);
    if ((extraout_x8 & 1) == 0) {
      func_0x00010744caf8();
      FUN_10744740c();
      func_0x00010744c490();
      FUN_1074487e4();
    }
    else {
      func_0x00010744caf8();
      FUN_1074473b4();
      func_0x00010744c490();
      FUN_107447d58();
    }
    *unaff_x19 = unaff_x20;
    return;
  }
  func_0x00010744d06c(param_1);
  lVar1 = 0x28;
  __Znwm();
  uVar2 = *(undefined4 *)unaff_x19;
  func_0x00010744c8f0();
  func_0x00010744c9d4(&UNK_1109b1778);
  *(undefined4 *)(lVar1 + 0x20) = uVar2;
  *unaff_x20 = lVar1;
  return;
}



/* Entry: 10744722c; end: 107447267;  */

void FUN_10744722c(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined4 uVar2;
  
  func_0x00010744d06c();
  lVar1 = 0x28;
  __Znwm();
  uVar2 = *unaff_x19;
  func_0x00010744c8f0();
  func_0x00010744c9d4(&UNK_1109b1778);
  *(undefined4 *)(lVar1 + 0x20) = uVar2;
  *unaff_x20 = lVar1;
  return;
}



/* Entry: 107447268; end: 1074472c3;  */

void FUN_107447268(void)

{
  return;
}



/* Entry: 1074472c4; end: 10744735f;  */

void FUN_1074472c4(int param_1)

{
  func_0x00010744c9a8();
  if (param_1 == 0) {
    func_0x00010744ce88();
  }
  else {
    func_0x00010744cdd0();
  }
  func_0x00010744c36c();
  return;
}



/* Entry: 107447360; end: 107447363;  */

void FUN_107447360(void)

{
  return;
}



/* Entry: 107447364; end: 1074473b3;  */

void FUN_107447364(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010744cdf0();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010744caf8();
    FUN_10744740c();
    func_0x00010744c490();
    FUN_1074487e4();
  }
  else {
    func_0x00010744caf8();
    FUN_1074473b4();
    func_0x00010744c490();
    FUN_107447d58();
  }
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 1074473b4; end: 10744740b;  */

void FUN_1074473b4(void)

{
  undefined4 *unaff_x21;
  
  func_0x00010744ce00();
  func_0x00010744cef4();
  func_0x00010744c9e0();
  func_0x00010727d69c();
  func_0x00010744c6ac(*unaff_x21);
  FUN_107447474();
  func_0x00010744c67c();
  return;
}



/* Entry: 10744740c; end: 107447473;  */

void FUN_10744740c(void)

{
  undefined4 *unaff_x21;
  undefined4 *unaff_x22;
  
  func_0x00010744c500();
  __Znwm(0x150);
  func_0x00010744c9e0();
  func_0x00010727d69c();
  func_0x00010744c6ac(*unaff_x22,*unaff_x21);
  FUN_107447dac();
  func_0x00010744c67c();
  return;
}



/* Entry: 107447474; end: 1074474af;  */

void FUN_107447474(undefined4 param_1,long param_2)

{
  func_0x00010744c8f0();
  func_0x00010744c378(&UNK_1109b1828);
  func_0x00010744c790();
  *(undefined4 *)(param_2 + 0xb0) = param_1;
  func_0x00010744c828();
  return;
}



/* Entry: 1074474b0; end: 1074474b3;  */

void FUN_1074474b0(void)

{
  long unaff_x19;
  
  func_0x00010744cfcc();
  FUN_1074444a8(unaff_x19 + 0x108);
  func_0x00010730b13c(unaff_x19 + 0xd0);
  FUN_107447a30(unaff_x19 + 0xb8);
  func_0x000107266a84(unaff_x19 + 0x80);
  func_0x000107266af0(unaff_x19 + 0x20);
  return;
}



/* Entry: 1074474b4; end: 1074474c7;  */

void FUN_1074474b4(void)

{
  FUN_107447a68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074474c8; end: 107447633;  */

long FUN_1074474c8(void)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 auStack_1a0 [14];
  byte bStack_168;
  undefined8 uStack_10;
  
  func_0x00010744c720();
  func_0x00010744bf78();
  uStack_10 = extraout_x8;
  func_0x000107751284(auStack_1a0);
  func_0x00010744cc24();
  func_0x00010744d060();
  func_0x00010744c530();
  func_0x00010744c1e4();
  func_0x00010744c694();
  func_0x00010744c3b0();
  func_0x00010744c278();
  uVar6 = *(undefined4 *)(unaff_x19 + 0xb0);
  func_0x00010744cb94();
  func_0x00010744c7b8();
  func_0x00010744c7c0();
  func_0x00010744c780();
  func_0x00010744c7c8();
  func_0x00010744cd88(unaff_x19 + 8);
  if ((*(byte *)(unaff_x19 + 0x1c) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  }
  plVar2 = (long *)(unaff_x19 + 0xb8);
  lVar3 = *plVar2;
  *(undefined4 *)(unaff_x19 + 0x14) = uVar6;
  *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
  lVar5 = *(long *)(unaff_x19 + 0xc0);
  FUN_107447aec(plVar2,unaff_x20 & 0xffffffff);
  for (uVar4 = lVar5 - lVar3 >> 2; uVar1 = uVar4 == unaff_x20, uVar4 < unaff_x20; uVar4 = uVar4 + 1)
  {
    auStack_1a0[0] = uVar6;
    FUN_107447c40(plVar2,auStack_1a0);
  }
  func_0x00010744c92c(unaff_x19 + 0x108);
  func_0x00010744c924(unaff_x19 + 0x128);
  func_0x00010744c470();
  (*extraout_x8_00)();
  func_0x00010726236c(auStack_1a0);
  if ((bStack_168 & 1) == 0) {
    func_0x00010744c914();
    lVar3 = unaff_x19 + 0x128;
    func_0x00010744cd30();
  }
  else {
    lVar3 = unaff_x19 + 0x108;
    FUN_10744464c(lVar3,auStack_1a0);
    func_0x00010744c914();
    func_0x00010744cd30();
  }
  *(undefined1 *)(unaff_x19 + 0x140) = 1;
  func_0x00010744cd80();
  func_0x00010744bf64(uStack_10);
  if ((bool)uVar1) {
    return lVar3;
  }
  ___stack_chk_fail();
  func_0x00010744cd80();
  func_0x00010744c3c8();
  return ((*(long *)(lVar3 + 0xb8) - *(long *)(lVar3 + 0xc0) ^ 0xffffffffffffffffU) &
         0xfffffffffffffff0) + 0x10;
}



/* Entry: 107447634; end: 10744763b;  */

long FUN_107447634(long param_1)

{
  return ((*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xc0) ^ 0xffffffffffffffffU) &
         0xfffffffffffffff0) + 0x10;
}



/* Entry: 10744763c; end: 107447697;  */

char FUN_10744763c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x140);
  if (cVar1 == '\x01') {
    func_0x00010744c158(*(undefined8 *)(param_1 + 0xb8));
    *(undefined1 *)(param_1 + 0x140) = 0;
  }
  return cVar1;
}



/* Entry: 107447698; end: 1074477a7;  */

void FUN_107447698(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  int extraout_w10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long in_stack_00000040;
  
  func_0x00010744ce4c();
  func_0x00010744c19c();
  func_0x00010744c880(&stack0x00000068,param_1 + 0x80,unaff_x22 + 0x20,unaff_x22 + 0x108,
                      unaff_x22 + 0x128,*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 2);
  func_0x00010744cbe0();
  if ((bool)in_ZR) {
    func_0x00010744cbc8();
  }
  else {
    func_0x00010744c460();
    func_0x00010744c318();
    func_0x00010744cbbc();
    for (; uVar1 = unaff_x23 == unaff_x24, !(bool)uVar1; unaff_x23 = unaff_x23 + 0x58) {
      func_0x00010744c244();
      func_0x00010744c9cc();
      if (in_stack_00000040 != 0) {
        func_0x00010744cbb0();
        if ((bool)uVar1) {
          func_0x00010744c93c();
          func_0x00010744c30c();
        }
        else {
          func_0x00010786967c();
          func_0x00010744c8a4();
        }
        func_0x00010744c230();
        if (extraout_x8 != 0) {
          do {
            func_0x00010744c2cc();
          } while (extraout_w10 != 0);
        }
        func_0x00010744c038();
        FUN_1074477a8();
        func_0x00010744c664();
        *(undefined1 *)(unaff_x22 + 0x140) = unaff_w25;
        func_0x00010744c640();
      }
      func_0x00010744c65c();
    }
    func_0x00010744c300();
  }
  func_0x00010744c620();
  return;
}



/* Entry: 1074477a8; end: 1074478a7;  */

undefined1  [16]
FUN_1074477a8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long in_stack_00000070;
  undefined1 auStack_5b0 [56];
  undefined1 auStack_578 [400];
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_338;
  undefined1 auStack_280 [232];
  undefined1 auStack_198 [400];
  undefined8 uStack_8;
  
  func_0x00010744c720();
  func_0x00010744bfa0();
  uStack_8 = extraout_x8;
  func_0x00010744ca60();
  func_0x00010744c708(auStack_280);
  func_0x00010744c2f4();
  func_0x00010744c178();
  func_0x00010744c718(auStack_198);
  func_0x00010744d04c();
  uVar4 = *(undefined4 *)(unaff_x22 + 0xb0);
  func_0x00010744c59c(unaff_x22 + 0x80);
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  puVar2 = (undefined4 *)(unaff_x22 + 8);
  func_0x00010744cd88(puVar2);
  if ((*(byte *)(unaff_x22 + 0x1c) & 1) == 0) {
    *(undefined1 *)(unaff_x22 + 0x1c) = 1;
  }
  *(undefined4 *)(unaff_x22 + 0x14) = uVar4;
  *(undefined4 *)(unaff_x22 + 0x18) = uVar4;
  for (; uVar1 = unaff_x21 == unaff_x20, unaff_x21 < unaff_x20; unaff_x21 = unaff_x21 + 1) {
    puVar2 = (undefined4 *)(unaff_x22 + 0xb8);
    param_2 = unaff_x21;
    func_0x000107447d28(puVar2,unaff_x21);
    *puVar2 = uVar4;
  }
  if ((*(byte *)(in_stack_00000070 + 0x20) & 1) != 0) {
    param_2 = *unaff_x19;
    func_0x00010744c944();
  }
  func_0x00010744bf64(uStack_8);
  if ((bool)uVar1) {
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = puVar2;
    return auVar6;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  func_0x00010744bff8();
  uStack_338 = extraout_x8_00;
  func_0x00010744ca60();
  func_0x00010744c530(auStack_5b0);
  func_0x00010744c538(auStack_578);
  func_0x00010744c178();
  func_0x00010744c5a8();
  uStack_3e8 = param_6;
  uStack_3e0 = param_5;
  func_0x00010744c2ac();
  uVar4 = (undefined4)unaff_x19[0x16];
  puVar3 = unaff_x19 + 0x10;
  func_0x00010744c59c(uVar4,puVar3);
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744bf64(uStack_338);
  if ((bool)uVar1) {
    auVar7._4_4_ = uVar4;
    auVar7._0_4_ = uVar4;
    auVar7._8_8_ = 1;
    return auVar7;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Entry: 1074478a8; end: 10744796f;  */

undefined1  [16]
FUN_1074478a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_2e0 [56];
  undefined1 auStack_2a8 [400];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_68;
  
  func_0x00010744bff8();
  uStack_68 = extraout_x8;
  func_0x00010744ca60();
  func_0x00010744c530(auStack_2e0);
  func_0x00010744c538(auStack_2a8);
  func_0x00010744c178();
  func_0x00010744c5a8();
  uStack_118 = param_6;
  uStack_110 = param_5;
  func_0x00010744c2ac();
  uVar2 = *(undefined4 *)(unaff_x19 + 0xb0);
  lVar1 = unaff_x19 + 0x80;
  func_0x00010744c59c(uVar2,lVar1);
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744bf64(uStack_68);
  if ((bool)in_ZR) {
    auVar4._4_4_ = uVar2;
    auVar4._0_4_ = uVar2;
    auVar4._8_8_ = 1;
    return auVar4;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 107447970; end: 10744798b;  */

void FUN_107447970(void)

{
  return;
}



/* Entry: 10744798c; end: 107447a23;  */

void FUN_10744798c(int param_1)

{
  long unaff_x20;
  
  func_0x00010744c168();
  if (param_1 == 0) {
    func_0x00010744ca28();
  }
  else if (*(int *)(unaff_x20 + 0x30) == 0) {
    func_0x00010744cbd4();
  }
  func_0x00010744c1cc();
  return;
}



/* Entry: 107447a24; end: 107447a2f;  */

void FUN_107447a24(long param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  param_2 = param_2 & 0xffffffff;
  func_0x00010744c258(param_1 + 0xb8);
  if ((ulong)(extraout_x9 >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
      FUN_107447b48();
      func_0x00010744c408();
      FUN_107447bf0();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c4c8();
    FUN_107447b74(auStack_48);
    func_0x00010744c4f4();
    FUN_107447b54();
    FUN_107447bf0(auStack_48);
  }
  return;
}



/* Entry: 107447a30; end: 107447a53;  */

void FUN_107447a30(void)

{
  func_0x00010744c220();
  FUN_107447a54();
  return;
}



/* Entry: 107447a54; end: 107447a67;  */

void FUN_107447a54(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107447a68; end: 107447aab;  */

void FUN_107447a68(void)

{
  long unaff_x19;
  
  func_0x00010744cfcc();
  FUN_1074444a8(unaff_x19 + 0x108);
  func_0x00010730b13c(unaff_x19 + 0xd0);
  FUN_107447a30(unaff_x19 + 0xb8);
  func_0x000107266a84(unaff_x19 + 0x80);
  func_0x000107266af0(unaff_x19 + 0x20);
  return;
}



/* Entry: 107447aac; end: 107447aeb;  */

void FUN_107447aac(float param_1,float *param_2)

{
  ulong uVar1;
  
  if (((uint)param_2[2] & 1) != 0) {
    uVar1 = *(ulong *)param_2;
    *(ulong *)param_2 =
         uVar1 ^ (uVar1 ^ CONCAT44(param_1,param_1)) &
                 CONCAT44(-(uint)((float)(uVar1 >> 0x20) < param_1),-(uint)(param_1 < (float)uVar1))
    ;
    return;
  }
  *param_2 = param_1;
  param_2[1] = param_1;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}



/* Entry: 107447aec; end: 107447b47;  */

void FUN_107447aec(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x00010744c258();
  if ((ulong)(extraout_x9 >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
      FUN_107447b48();
      func_0x00010744c408();
      FUN_107447bf0();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c4c8();
    FUN_107447b74(auStack_48);
    func_0x00010744c4f4();
    FUN_107447b54();
    FUN_107447bf0(auStack_48);
  }
  return;
}



/* Entry: 107447b48; end: 107447b53;  */

void FUN_107447b48(void)

{
  func_0x00010744c184();
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 107447b54; end: 107447b73;  */

void FUN_107447b54(void)

{
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 107447b74; end: 107447bd3;  */

void FUN_107447b74(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010744c480();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107447bb4();
  }
  lVar1 = param_4 + unaff_x20 * 4;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 4;
  return;
}



/* Entry: 107447bd4; end: 107447bef;  */

long * FUN_107447bd4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_2 << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107447c1c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107447bf0; end: 107447c1b;  */

long * FUN_107447bf0(long *param_1)

{
  FUN_107447c1c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107447c1c; end: 107447c3f;  */

void FUN_107447c1c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107447c40; end: 107447c77;  */

undefined4 * FUN_107447c40(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 in_CY;
  undefined4 *puVar1;
  undefined4 *unaff_x19;
  
  func_0x00010744c0d4();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_107447c78();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 107447c78; end: 107447ce7;  */

void FUN_107447c78(void)

{
  undefined4 *unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010744c010();
  FUN_107447ce8();
  func_0x00010744c324();
  func_0x00010744ca40();
  FUN_107447b74();
  *uStack_38 = *unaff_x20;
  func_0x00010744c4f4();
  FUN_107447b54();
  func_0x00010744c6f4();
  FUN_107447bf0();
  return;
}



/* Entry: 107447ce8; end: 107447d57;  */

/* WARNING: Possible PIC construction at 0x000107447d48: Changing call to branch */

ulong FUN_107447ce8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if (param_2 >> 0x3e == 0) {
    uVar1 = param_1[2] - *param_1 >> 1;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x3fffffffffffffff;
    }
    return uVar1;
  }
  FUN_107447b48();
  if (param_2 < (ulong)(param_1[1] - *param_1 >> 2)) {
    return *param_1 + param_2 * 4;
  }
  func_0x00010744c340();
  func_0x00010744c9ec();
  FUN_107447d78();
  return unaff_x19;
}



/* Entry: 107447d58; end: 107447d77;  */

void FUN_107447d58(void)

{
  func_0x00010744c9ec();
  FUN_107447d78();
  return;
}



/* Entry: 107447d78; end: 107447d8f;  */

void FUN_107447d78(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107447a68(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107447d90; end: 107447dab;  */

void FUN_107447d90(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107447a68(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107447dac; end: 107447df7;  */

void FUN_107447dac(float param_1,undefined4 param_2,long param_3)

{
  func_0x00010744c8f0();
  func_0x00010744c378(&UNK_1109b18c8);
  func_0x00010744c790();
  *(undefined4 *)(param_3 + 0xb0) = param_2;
  *(float *)(param_3 + 0xb4) = param_1;
  *(float *)(param_3 + 0xb8) = param_1 + 1.0;
  func_0x00010744c7dc();
  return;
}



/* Entry: 107447df8; end: 107447dfb;  */

void FUN_107447df8(void)

{
  long unaff_x19;
  
  func_0x00010744cfc0();
  FUN_1074444a8(unaff_x19 + 0x110);
  func_0x00010730b13c(unaff_x19 + 0xd8);
  FUN_10744857c(unaff_x19 + 0xc0);
  func_0x000107266a84(unaff_x19 + 0x80);
  func_0x000107266af0(unaff_x19 + 0x20);
  return;
}



/* Entry: 107447dfc; end: 107447e0f;  */

void FUN_107447dfc(void)

{
  FUN_1074485b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107447e10; end: 10744803f;  */

long FUN_107447e10(long param_1)

{
  float fVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long lVar3;
  ulong uVar4;
  code *extraout_x8_00;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_460 [400];
  undefined1 auStack_2d0 [64];
  long lStack_290;
  undefined1 auStack_288 [232];
  float fStack_1a0;
  float fStack_19c;
  byte bStack_168;
  undefined8 uStack_10;
  
  func_0x00010744c720();
  func_0x00010744bf78();
  uStack_10 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)(param_1 + 0xb4),&fStack_1a0);
  func_0x00010744cc24();
  func_0x00010744c530(auStack_288);
  func_0x00010744c1e4();
  func_0x00010744cf8c();
  func_0x00010744c648(&fStack_1a0);
  func_0x00010744cc80();
  lStack_290 = unaff_x19 + 0x20;
  fVar8 = *(float *)(unaff_x19 + 0xb0);
  func_0x00010727f6f4(unaff_x19 + 0x80,&fStack_1a0,auStack_2d0);
  func_0x0001077512dc(*(undefined4 *)(unaff_x19 + 0xb8),auStack_460);
  func_0x00010744d060();
  func_0x00010744c538();
  func_0x00010744c1e4();
  func_0x00010744c694();
  func_0x00010744c3b0();
  func_0x00010744c278();
  uVar7 = (ulong)*(uint *)(unaff_x19 + 0xb0);
  func_0x00010744cb94();
  func_0x00010744c7b8();
  func_0x00010744c7c0();
  func_0x00010744c780();
  func_0x00010744c7c8();
  func_0x00010744cc68();
  func_0x00010744cc9c();
  func_0x00010744cca4();
  func_0x00010744ccac();
  func_0x00010744cd88(unaff_x19 + 8);
  FUN_107447aac(uVar7,unaff_x19 + 8);
  if ((*(byte *)(unaff_x19 + 0x1c) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  }
  fVar10 = (float)uVar7;
  fVar1 = fVar10;
  if (fVar10 <= fVar8) {
    fVar1 = fVar8;
  }
  plVar6 = (long *)(unaff_x19 + 0xc0);
  lVar3 = *plVar6;
  fVar9 = fVar10;
  if (fVar8 <= fVar10) {
    fVar9 = fVar8;
  }
  *(float *)(unaff_x19 + 0x14) = fVar9;
  *(float *)(unaff_x19 + 0x18) = fVar1;
  lVar5 = *(long *)(unaff_x19 + 0xd0) - lVar3;
  if ((ulong)(lVar5 >> 3) < unaff_x20) {
    uVar4 = lVar5 >> 2;
    uVar7 = unaff_x20;
    if (unaff_x20 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_1074485f8(plVar6,uVar7 & 0xffffffff);
    lVar3 = *plVar6;
  }
  for (uVar7 = *(long *)(unaff_x19 + 200) - lVar3 >> 3; uVar2 = uVar7 == unaff_x20,
      uVar7 < unaff_x20; uVar7 = uVar7 + 1) {
    fStack_1a0 = fVar8;
    fStack_19c = fVar10;
    FUN_107448700(plVar6,&fStack_1a0);
  }
  func_0x00010744c92c(unaff_x19 + 0x110);
  func_0x00010744c924(unaff_x19 + 0x130);
  func_0x00010744c470();
  (*extraout_x8_00)();
  func_0x00010726236c(&fStack_1a0);
  if ((bStack_168 & 1) == 0) {
    func_0x00010744c904();
    lVar3 = unaff_x19 + 0x130;
    func_0x00010744cd38();
  }
  else {
    lVar3 = unaff_x19 + 0x110;
    FUN_10744464c(lVar3,&fStack_1a0);
    func_0x00010744c904();
    func_0x00010744cd38();
  }
  *(undefined1 *)(unaff_x19 + 0x148) = 1;
  func_0x00010744ccb4();
  func_0x00010744bf64(uStack_10);
  if ((bool)uVar2) {
    return lVar3;
  }
  ___stack_chk_fail();
  func_0x00010744ccb4();
  func_0x00010744c3c8();
  return ((*(long *)(lVar3 + 0xc0) - *(long *)(lVar3 + 200) ^ 0xffffffffffffffffU) &
         0xfffffffffffffff0) + 0x10;
}



/* Entry: 107448040; end: 107448047;  */

long FUN_107448040(long param_1)

{
  return ((*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 200) ^ 0xffffffffffffffffU) &
         0xfffffffffffffff0) + 0x10;
}



/* Entry: 107448048; end: 10744809f;  */

char FUN_107448048(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x148);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x148) = 0;
    func_0x00010744c158(*(undefined8 *)(param_1 + 0xc0));
  }
  return cVar1;
}



/* Entry: 1074480a0; end: 1074481af;  */

void FUN_1074480a0(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  int extraout_w10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long in_stack_00000040;
  
  func_0x00010744ce4c();
  func_0x00010744c19c();
  func_0x00010744c880(&stack0x00000068,param_1 + 0x80,unaff_x22 + 0x20,unaff_x22 + 0x110,
                      unaff_x22 + 0x130,*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0) >> 3);
  func_0x00010744cbe0();
  if ((bool)in_ZR) {
    func_0x00010744cbc8();
  }
  else {
    func_0x00010744c460();
    func_0x00010744c318();
    func_0x00010744cbbc();
    for (; uVar1 = unaff_x23 == unaff_x24, !(bool)uVar1; unaff_x23 = unaff_x23 + 0x58) {
      func_0x00010744c244();
      func_0x00010744c9cc();
      if (in_stack_00000040 != 0) {
        func_0x00010744cbb0();
        if ((bool)uVar1) {
          func_0x00010744c93c();
          func_0x00010744c30c();
        }
        else {
          func_0x00010786967c();
          func_0x00010744c8a4();
        }
        func_0x00010744c230();
        if (extraout_x8 != 0) {
          do {
            func_0x00010744c2cc();
          } while (extraout_w10 != 0);
        }
        func_0x00010744c038();
        FUN_1074481b0();
        func_0x00010744c664();
        *(undefined1 *)(unaff_x22 + 0x148) = unaff_w25;
        func_0x00010744c640();
      }
      func_0x00010744c65c();
    }
    func_0x00010744c300();
  }
  func_0x00010744c620();
  return;
}



/* Entry: 1074481b0; end: 107448357;  */

undefined1  [16] FUN_1074481b0(long param_1)

{
  float fVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  long unaff_x22;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long in_stack_00000070;
  undefined1 auStack_870 [56];
  undefined1 auStack_838 [400];
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  undefined1 auStack_590 [72];
  undefined1 auStack_548 [56];
  undefined1 auStack_510 [176];
  undefined1 auStack_460 [400];
  undefined1 auStack_2d0 [64];
  long lStack_290;
  undefined1 auStack_288 [232];
  undefined1 auStack_1a0 [400];
  undefined8 uStack_10;
  
  func_0x00010744c720();
  func_0x00010744bfa0();
  uStack_10 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)(param_1 + 0xb4),auStack_1a0);
  func_0x00010744c708(auStack_288);
  func_0x00010744c2f4();
  func_0x00010744cf80();
  func_0x00010744c718(auStack_1a0);
  func_0x00010744d024();
  lStack_290 = unaff_x22 + 0x20;
  uVar6 = (ulong)*(uint *)(unaff_x22 + 0xb0);
  func_0x00010727f6f4(unaff_x22 + 0x80,auStack_1a0,auStack_2d0);
  func_0x0001077512dc(*(undefined4 *)(unaff_x22 + 0xb8),auStack_460);
  func_0x00010744c708(auStack_548);
  func_0x00010744c528(auStack_510);
  func_0x00010744cf68();
  func_0x00010744c718(auStack_460);
  func_0x00010744ce64();
  uVar7 = (ulong)*(uint *)(unaff_x22 + 0xb0);
  puVar5 = auStack_460;
  func_0x00010727f6f4(unaff_x22 + 0x80,puVar5,auStack_590);
  func_0x00010724b3d8(auStack_590);
  func_0x00010744cc30();
  func_0x00010744cc40();
  func_0x00010744cc38();
  func_0x00010744cc14();
  func_0x00010744cc50();
  func_0x00010744cc58();
  func_0x00010744cc60();
  func_0x00010744cd88(unaff_x22 + 8);
  lVar3 = unaff_x22 + 8;
  FUN_107447aac(uVar7);
  if ((*(byte *)(unaff_x22 + 0x1c) & 1) == 0) {
    *(undefined1 *)(unaff_x22 + 0x1c) = 1;
  }
  fVar9 = (float)uVar6;
  fVar8 = (float)uVar7;
  fVar1 = fVar8;
  if (fVar8 <= fVar9) {
    fVar1 = fVar9;
  }
  if (fVar9 <= fVar8) {
    fVar8 = fVar9;
  }
  *(float *)(unaff_x22 + 0x14) = fVar8;
  *(float *)(unaff_x22 + 0x18) = fVar1;
  while (uVar2 = unaff_x21 == unaff_x20, unaff_x21 < unaff_x20) {
    lVar3 = unaff_x22 + 0xc0;
    puVar5 = unaff_x21;
    func_0x0001074487b8();
    func_0x00010744ce28();
  }
  if ((*(byte *)(in_stack_00000070 + 0x20) & 1) != 0) {
    puVar5 = (undefined1 *)*unaff_x19;
    func_0x00010744c944();
  }
  func_0x00010744bf64(uStack_10);
  if ((bool)uVar2) {
    auVar11._8_8_ = puVar5;
    auVar11._0_8_ = lVar3;
    return auVar11;
  }
  ___stack_chk_fail();
  func_0x00010744c9e0();
  func_0x00010724b3d8();
  func_0x00010744cc30();
  func_0x00010744cc40();
  func_0x00010744cc38();
  func_0x00010744cc14();
  func_0x00010744cc50();
  func_0x00010744cc58();
  func_0x00010744cc60();
  func_0x00010744c3c8();
  uStack_5f0 = uVar7;
  uStack_5e8 = uVar6;
  func_0x00010744bff8();
  uStack_5f8 = extraout_x8_00;
  func_0x00010744c868(*(undefined4 *)(lVar3 + 0xb4));
  func_0x00010744c530(auStack_870);
  func_0x00010744c538(auStack_838);
  func_0x00010744c178();
  func_0x00010744c5a8();
  uStack_6a8 = in_x5;
  uStack_6a0 = in_x4;
  func_0x00010744c2ac();
  uVar6 = (ulong)*(uint *)(unaff_x19 + 0x16);
  func_0x00010744c59c(uVar6,unaff_x19 + 0x10);
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c868((int)unaff_x19[0x17]);
  func_0x00010744c530(auStack_870);
  func_0x00010744c538(auStack_838);
  func_0x00010744c178();
  func_0x00010744c5a8();
  uStack_6a8 = in_x5;
  uStack_6a0 = in_x4;
  func_0x00010744c2ac();
  uVar7 = (ulong)*(uint *)(unaff_x19 + 0x16);
  plVar4 = unaff_x19 + 0x10;
  func_0x00010744c59c(uVar7,plVar4);
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744bf64(uStack_5f8);
  if ((bool)uVar2) {
    auVar12._0_8_ = uVar6 & 0xffffffff | uVar7 << 0x20;
    auVar12._8_8_ = 1;
    return auVar12;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  auVar10._8_8_ = puVar5;
  auVar10._0_8_ = plVar4;
  return auVar10;
}



/* Entry: 107448358; end: 10744847b;  */

undefined1  [16]
FUN_107448358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_2e0 [56];
  undefined1 auStack_2a8 [400];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_68;
  
  func_0x00010744bff8();
  uStack_68 = extraout_x8;
  func_0x00010744c868(*(undefined4 *)(param_1 + 0xb4));
  func_0x00010744c530(auStack_2e0);
  func_0x00010744c538(auStack_2a8);
  func_0x00010744c178();
  func_0x00010744c5a8();
  uStack_118 = param_6;
  uStack_110 = param_5;
  func_0x00010744c2ac();
  uVar2 = *(undefined4 *)(unaff_x19 + 0xb0);
  func_0x00010744c59c(uVar2,unaff_x19 + 0x80);
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c868(*(undefined4 *)(unaff_x19 + 0xb8));
  func_0x00010744c530(auStack_2e0);
  func_0x00010744c538(auStack_2a8);
  func_0x00010744c178();
  func_0x00010744c5a8();
  uStack_118 = param_6;
  uStack_110 = param_5;
  func_0x00010744c2ac();
  uVar3 = *(undefined4 *)(unaff_x19 + 0xb0);
  lVar1 = unaff_x19 + 0x80;
  func_0x00010744c59c(uVar3,lVar1);
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744bf64(uStack_68);
  if ((bool)in_ZR) {
    auVar5._4_4_ = uVar3;
    auVar5._0_4_ = uVar2;
    auVar5._8_8_ = 1;
    return auVar5;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar1;
  return auVar4;
}



/* Entry: 10744847c; end: 107448497;  */

void FUN_10744847c(void)

{
  return;
}



/* Entry: 107448498; end: 10744854f;  */

void FUN_107448498(int param_1)

{
  long unaff_x20;
  
  func_0x00010744c168();
  if (param_1 == 0) {
    func_0x00010744ca28();
  }
  else if (*(int *)(unaff_x20 + 0x30) == 0) {
    func_0x00010744cbd4();
  }
  else {
    func_0x00010744cdb0();
  }
  func_0x00010744c1cc();
  return;
}



/* Entry: 107448550; end: 10744857b;  */

void FUN_107448550(long param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 auStack_48 [40];
  
  uVar3 = *(long *)(param_1 + 0xd0) - *(long *)(param_1 + 0xc0) >> 3;
  bVar1 = uVar3 <= param_2;
  bVar2 = param_2 == uVar3;
  uVar3 = 0;
  func_0x00010744c38c();
  if (bVar1 && !bVar2) {
    if (uVar3 >> 0x3d != 0) {
      FUN_10744864c();
      func_0x00010744c408();
      FUN_1074486b0();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c94c();
    FUN_107448678();
    func_0x00010744c514();
    func_0x00010744c4f4();
    FUN_107448658();
    FUN_1074486b0(auStack_48);
  }
  return;
}



/* Entry: 10744857c; end: 10744859f;  */

void FUN_10744857c(void)

{
  func_0x00010744c220();
  FUN_1074485a0();
  return;
}



/* Entry: 1074485a0; end: 1074485b3;  */

void FUN_1074485a0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074485b4; end: 1074485f7;  */

void FUN_1074485b4(void)

{
  long unaff_x19;
  
  func_0x00010744cfc0();
  FUN_1074444a8(unaff_x19 + 0x110);
  func_0x00010730b13c(unaff_x19 + 0xd8);
  FUN_10744857c(unaff_x19 + 0xc0);
  func_0x000107266a84(unaff_x19 + 0x80);
  func_0x000107266af0(unaff_x19 + 0x20);
  return;
}



/* Entry: 1074485f8; end: 10744864b;  */

void FUN_1074485f8(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x00010744c38c();
  if ((bool)in_CY && !(bool)in_ZR) {
    if (param_2 >> 0x3d != 0) {
      FUN_10744864c();
      func_0x00010744c408();
      FUN_1074486b0();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c94c();
    FUN_107448678();
    func_0x00010744c514();
    func_0x00010744c4f4();
    FUN_107448658();
    FUN_1074486b0(auStack_48);
  }
  return;
}



/* Entry: 10744864c; end: 107448657;  */

void FUN_10744864c(void)

{
  func_0x00010744c184();
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 107448658; end: 107448677;  */

void FUN_107448658(void)

{
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 107448678; end: 107448697;  */

void FUN_107448678(void)

{
  FUN_107448698();
  return;
}



/* Entry: 107448698; end: 1074486af;  */

long * FUN_107448698(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1074486dc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074486b0; end: 1074486db;  */

long * FUN_1074486b0(long *param_1)

{
  FUN_1074486dc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}


