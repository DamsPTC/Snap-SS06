/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100690fac; end: 100690fb3;  */

void FUN_100690fac(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong uVar3;
  
  if (unaff_x19[2] == 0) {
    puVar2 = unaff_x19;
    func_0x00010006818c();
    puVar1 = unaff_x19;
    if ((*unaff_x19 & 1) != 0) {
      puVar1 = (ulong *)(*unaff_x19 + 7);
    }
    for (uVar3 = (ulong)((uint)puVar2 & ((int)(uint)puVar2 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      if ((long *)*puVar1 != (long *)0x0) {
        (**(code **)(*(long *)*puVar1 + 8))();
      }
      puVar1 = puVar1 + 1;
    }
    if ((*unaff_x19 & 1) != 0) {
      func_0x000107c60e14(*unaff_x19 - 1);
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 100690fb4; end: 100690fe3;  */

long FUN_100690fb4(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_100690ff8(param_1);
  return param_1;
}



/* Entry: 100690fe4; end: 100690ff7;  */

void FUN_100690fe4(void)

{
  FUN_100690fb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100690ff8; end: 10069103f;  */

void FUN_100690ff8(long param_1)

{
  FUN_100067de0(param_1 + 0x18);
  FUN_100067de0(param_1 + 0x20);
  FUN_100067de0(param_1 + 0x28);
  FUN_100067de0(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c30580();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100691040; end: 100691053;  */

void FUN_100691040(void)

{
  return;
}



/* Entry: 100691054; end: 10069107b;  */

void FUN_100691054(void)

{
  long extraout_x8;
  
  func_0x000100691048();
  if (extraout_x8 != 0) {
    func_0x000107c34a00();
  }
  return;
}



/* Entry: 10069107c; end: 1006910a7;  */

undefined8 FUN_10069107c(undefined8 param_1)

{
  FUN_10068e1bc();
  FUN_1006910a8(param_1);
  return param_1;
}



/* Entry: 1006910a8; end: 100691107;  */

long FUN_1006910a8(long param_1)

{
  if (*(long *)(param_1 + 0x108) != 0) {
    func_0x000107c2a5d0();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x110) != 0) {
    func_0x000107c2a5d4();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x118) != 0) {
    func_0x000107c2a604();
  }
  func_0x000107c60e14();
  if (*(int *)(param_1 + 0x150) != 0) {
    func_0x000107c2a5d8(param_1);
  }
  FUN_100691108(param_1 + 0xf0);
  FUN_1006911a4(param_1 + 0xd8);
  FUN_1006911dc(param_1 + 0xc0);
  FUN_10066beb8(param_1 + 0xa8);
  FUN_10066beb8(param_1 + 0x90);
  FUN_10066beb8(param_1 + 0x78);
  FUN_10066beb8(param_1 + 0x60);
  FUN_10066beb8(param_1 + 0x48);
  FUN_10066beb8(param_1 + 0x30);
  FUN_10066beb8(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 100691108; end: 100691137;  */

long * FUN_100691108(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000681a0(param_1);
  }
  return param_1;
}



/* Entry: 100691138; end: 1006911a3;  */

long FUN_100691138(long param_1)

{
  FUN_100691108(param_1 + 0xe0);
  FUN_1006911a4(param_1 + 200);
  FUN_1006911dc(param_1 + 0xb0);
  FUN_10066beb8(param_1 + 0x98);
  FUN_10066beb8(param_1 + 0x80);
  FUN_10066beb8(param_1 + 0x68);
  FUN_10066beb8(param_1 + 0x50);
  FUN_10066beb8(param_1 + 0x38);
  FUN_10066beb8(param_1 + 0x20);
  FUN_10066beb8(param_1 + 8);
  return param_1;
}



/* Entry: 1006911a4; end: 1006911d3;  */

long * FUN_1006911a4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000681a0(param_1);
  }
  return param_1;
}



/* Entry: 1006911d4; end: 1006911db;  */

void FUN_1006911d4(void)

{
  return;
}



/* Entry: 1006911dc; end: 10069120b;  */

long * FUN_1006911dc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000681a0(param_1);
  }
  return param_1;
}



/* Entry: 10069120c; end: 10069123f;  */

long FUN_10069120c(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_100691240(param_1);
  return param_1;
}



/* Entry: 100691240; end: 10069124f;  */

void FUN_100691240(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    FUN_100067de0(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x24) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_1005f73a4();
      }
      func_0x000107c60e14();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 100691250; end: 1006912bb;  */

void FUN_100691250(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    FUN_100067de0(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x24) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_1005f73a4();
      }
      func_0x000107c60e14();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 1006912bc; end: 1006912c7;  */

void FUN_1006912bc(void)

{
  return;
}



/* Entry: 1006912c8; end: 1006912cb; -[SCCameraViewfinderRenderTargetImpl viewfinder] */

void FUN_1006912c8(void)

{
  return;
}



/* Entry: 1006912cc; end: 100692797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1006912cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  FUN_10023b5f0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar2 = _DAT_113074eb0;
  func_0x000107c61614(lVar5 + _DAT_113074eb0,0);
  lVar3 = _DAT_113074eb8;
  func_0x000107c61614(lVar5 + _DAT_113074eb8,0);
  *(long *)(lVar5 + _DAT_113074e90) = param_1;
  *(undefined8 *)(lVar5 + _DAT_113074e98) = param_2;
  *(undefined8 *)(lVar5 + _DAT_113074ea0) = param_3;
  *(undefined8 *)(lVar5 + _DAT_113074ea8) = param_4;
  func_0x000107c61428(lVar5 + lVar2,auStack_78,1,0);
  func_0x000107c61604(lVar5 + lVar2,param_5);
  func_0x000107c61428(lVar5 + lVar3,auStack_90,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_6);
  *(undefined8 *)(lVar5 + _DAT_113074ec0) = param_7;
  *(undefined8 *)(lVar5 + _DAT_113074ec8) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  plVar6 = &lStack_a0;
  func_0x000107c61154(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  FUN_10008a7c8(&uStack_a8,aplStack_b8);
  FUN_100083b20(aplStack_b8);
  func_0x000107c61574(uStack_a8);
  return plVar6;
}



/* Entry: 100692798; end: 10069283b;  */

void FUN_100692798(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100691470(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Entry: 10069283c; end: 100692843;  */

void FUN_10069283c(long param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    FUN_10068e154();
  }
  return;
}



/* Entry: 100692844; end: 1006928bb;  */

/* WARNING: Possible PIC construction at 0x00010069286c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100692870) */
/* WARNING: Removing unreachable block (ram,0x000100692880) */
/* WARNING: Removing unreachable block (ram,0x000100692874) */

void FUN_100692844(long param_1,undefined8 param_2)

{
  func_0x000107c4d9e8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006928bc; end: 1006928db;  */

void FUN_1006928bc(long param_1)

{
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    FUN_10068e154();
  }
  return;
}



/* Entry: 1006928dc; end: 1006928ef;  */

void FUN_1006928dc(void)

{
  char in_stack_000003b0;
  
  if (in_stack_000003b0 == '\x01') {
    FUN_10068e154();
  }
  return;
}



/* Entry: 1006928f0; end: 10069295b;  */

undefined8 * FUN_1006928f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [432];
  
  func_0x000107c60ee4(auStack_1e8,0x1b8);
  FUN_1006929a8(param_1 + 1,auStack_1e8);
  FUN_1006928bc(auStack_1e0);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_1006928bc(param_1 + 2);
  return param_1;
}



/* Entry: 10069295c; end: 100692983;  */

void FUN_10069295c(long param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  cVar2 = *(char *)(param_1 + 0x1a8);
  if (cVar2 != *(char *)(param_2 + 0x1a8)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x1a8) == '\x01') {
        FUN_10068e154();
        *(undefined1 *)(param_1 + 0x1a8) = 0;
      }
      return;
    }
    func_0x00010068df2c();
    *(undefined1 *)(param_1 + 0x1a8) = 1;
    return;
  }
  if (cVar2 != '\0') {
    func_0x0001006577c8();
    func_0x00010065acbc();
    uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined1 *)(unaff_x20 + 0x48) = *(undefined1 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar8;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar7;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
    FUN_10068e060(unaff_x20 + 0x50,unaff_x19 + 0x50);
    FUN_100066230(unaff_x20 + 200,unaff_x19 + 200);
    uVar3 = *(undefined8 *)(unaff_x19 + 0xe0);
    *(undefined8 *)(unaff_x20 + 0xe8) = *(undefined8 *)(unaff_x19 + 0xe8);
    *(undefined8 *)(unaff_x20 + 0xe0) = uVar3;
    FUN_10069077c(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x128);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x120);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x138);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x130);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x139);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x118);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x110);
    *(undefined8 *)(unaff_x20 + 0x141) = *(undefined8 *)(unaff_x19 + 0x141);
    *(undefined8 *)(unaff_x20 + 0x139) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x128) = uVar7;
    *(undefined8 *)(unaff_x20 + 0x120) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x138) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x130) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x118) = uVar9;
    *(undefined8 *)(unaff_x20 + 0x110) = uVar8;
    FUN_1005fcf54(unaff_x20 + 0x150,unaff_x19 + 0x150);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x180);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x170);
    *(undefined8 *)(unaff_x20 + 0x178) = *(undefined8 *)(unaff_x19 + 0x178);
    *(undefined8 *)(unaff_x20 + 0x170) = uVar3;
    *(undefined1 *)(unaff_x20 + 0x180) = uVar1;
    FUN_1005fcf54(unaff_x20 + 0x188,unaff_x19 + 0x188);
    return;
  }
  return;
}



/* Entry: 100692984; end: 1006929a7;  */

undefined8 FUN_100692984(undefined8 param_1)

{
  FUN_10069295c();
  return param_1;
}



/* Entry: 1006929a8; end: 1006929cf;  */

undefined8 * FUN_1006929a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_100692984(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1006929d0; end: 1006929e7;  */

void FUN_1006929d0(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006929e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 1006929e8; end: 1006929fb;  */

void FUN_1006929e8(void)

{
  FUN_10054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1006929fc; end: 100692a53; -[SCRequestConcurrencyLoggingItem initRequestConcurrencyLoggingItemWithStartTimestamp:requestType:] */

void FUN_1006929fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706050;
  uStack_40 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
  }
  return;
}



/* Entry: 100692a54; end: 100692a67;  */

void FUN_100692a54(void)

{
  long unaff_x26;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x26 + 8);
  return;
}



/* Entry: 100692a68; end: 100692ae7;  */

void FUN_100692a68(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  FUN_1005ee630();
  if ((bool)in_ZR) {
    FUN_1005ecc68();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c34184();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3423c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_10066cbdc(*(undefined8 *)(unaff_x21 + 0x20));
  FUN_100692ae8();
  return;
}



/* Entry: 100692ae8; end: 100692b0b;  */

void FUN_100692ae8(void)

{
  func_0x0001005ed940();
  FUN_1005f5e74();
  func_0x0001005edc50();
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_1005f5fb0();
  return;
}



/* Entry: 100692b0c; end: 100692b63;  */

void FUN_100692b0c(void)

{
  func_0x0001005edc5c();
  FUN_10065f1e8();
  func_0x0001005edd60();
  FUN_1005f5fb0();
  return;
}



/* Entry: 100692b64; end: 100692ce3;  */

void FUN_100692b64(void)

{
  FUN_1000285a8(0x112d9e8f8,&UNK_10d93ef70);
  FUN_1000823a8(FUN_1006bbd54,0);
  return;
}



/* Entry: 100692ce4; end: 100692d23;  */

void FUN_100692ce4(void)

{
  func_0x000107c61168(&PTR_PTR_112ef7488);
  return;
}



/* Entry: 100692d24; end: 100692d2f;  */

void FUN_100692d24(void)

{
  undefined1 auStack_310 [184];
  undefined1 auStack_258 [184];
  undefined1 auStack_1a0 [184];
  undefined1 auStack_e8 [184];
  
  func_0x0001005f6130(auStack_1a0,&stack0x00000650);
  FUN_100692de8(auStack_e8,auStack_1a0);
  func_0x000100692ea8();
  FUN_100692de8(auStack_258,auStack_310);
  FUN_100692ec4(&stack0x000002a8,auStack_e8,auStack_258);
  func_0x000100693098();
  func_0x0001006930a0();
  FUN_1005f679c();
  func_0x0001006930ac(auStack_1a0);
  return;
}



/* Entry: 100692d30; end: 100692dd3;  */

void FUN_100692d30(undefined8 param_1)

{
  undefined1 auStack_310 [184];
  undefined1 auStack_258 [184];
  undefined1 auStack_1a0 [184];
  undefined1 auStack_e8 [184];
  
  func_0x0001005f6130(auStack_1a0);
  FUN_100692de8(auStack_e8,auStack_1a0);
  func_0x000100692ea8();
  FUN_100692de8(auStack_258,auStack_310);
  FUN_100692ec4(param_1,auStack_e8,auStack_258);
  func_0x000100693098();
  func_0x0001006930a0();
  FUN_1005f679c();
  func_0x0001006930ac(auStack_1a0);
  return;
}



/* Entry: 100692dd4; end: 100692de7;  */

undefined1  [16] FUN_100692dd4(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = &stack0x00000008;
  return auVar1;
}



/* Entry: 100692de8; end: 100692e13;  */

void FUN_100692de8(void)

{
  FUN_100692dd4();
  FUN_100692e28();
  func_0x000100692e90();
  FUN_100692e28();
  FUN_1005f679c();
  return;
}



/* Entry: 100692e14; end: 100692e27;  */

undefined1  [16] FUN_100692e14(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  *param_1 = 0;
  auVar1._8_8_ = param_2 + 1;
  auVar1._0_8_ = param_1 + 1;
  *param_1 = *param_2;
  return auVar1;
}



/* Entry: 100692e28; end: 100692e47;  */

void FUN_100692e28(void)

{
  FUN_100692e14();
  FUN_100692e54();
  return;
}



/* Entry: 100692e48; end: 100692e53;  */

void FUN_100692e48(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 100692e54; end: 100692e7b;  */

void FUN_100692e54(long param_1)

{
  FUN_100692e48();
  *(undefined1 *)(param_1 + 0xa8) = 0;
  FUN_100692e7c();
  return;
}



/* Entry: 100692e7c; end: 100692ec3;  */

void FUN_100692e7c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    func_0x0001086a94f4();
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  return;
}



/* Entry: 100692ec4; end: 100692f3f;  */

void FUN_100692ec4(void)

{
  undefined1 auStack_e8 [184];
  
  func_0x000100692eb4();
  FUN_100692f40(auStack_e8);
  func_0x000100692fa4();
  FUN_100692f40();
  func_0x000100692fb0();
  FUN_100692fcc();
  FUN_1005f679c();
  func_0x000100693098();
  return;
}



/* Entry: 100692f40; end: 100692f5f;  */

void FUN_100692f40(void)

{
  FUN_100692e14();
  FUN_100692f60();
  return;
}



/* Entry: 100692f60; end: 100692f8f;  */

void FUN_100692f60(long param_1)

{
  FUN_100692e48();
  *(undefined1 *)(param_1 + 0xa8) = 0;
  FUN_100692f90();
  return;
}



/* Entry: 100692f90; end: 100692fcb;  */

void FUN_100692f90(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    func_0x0001086a9c58();
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  return;
}



/* Entry: 100692fcc; end: 10069303f;  */

void FUN_100692fcc(void)

{
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100692fbc();
  FUN_100693040();
  while ((((*(byte *)(unaff_x20 + 0xb0) & 1) != 0 || ((*(byte *)(unaff_x19 + 0xb0) & 1) != 0)) &&
         (func_0x000107c3253c(), extraout_x8 != extraout_x9))) {
    func_0x000107c28ef8();
    func_0x000107c28f7c();
    FUN_1005f6004();
  }
  func_0x00010069304c();
  FUN_10069305c();
  return;
}



/* Entry: 100693040; end: 10069305b;  */

void FUN_100693040(void)

{
  return;
}



/* Entry: 10069305c; end: 100693087;  */

long FUN_10069305c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10069fc4c(param_1);
  }
  return param_1;
}



/* Entry: 100693088; end: 1006931c7;  */

void FUN_100693088(void)

{
  return;
}



/* Entry: 1006931c8; end: 10069325b;  */

ulong FUN_1006931c8(ulong param_1)

{
  undefined **ppuVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0xa8);
  func_0x000100693194();
  if ((int)uVar4 == 1) {
    ppuVar1 = &PTR_PTR_1132808d8;
    if (*(undefined ***)(param_1 + 0x70) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x70);
    }
    bVar9 = *(byte *)(ppuVar1 + 2);
  }
  else {
    bVar9 = 0;
  }
  uVar5 = param_1;
  FUN_10069325c();
  if ((uVar5 & 1) != 0) {
    return 0xe;
  }
  ppuVar1 = &PTR_PTR_113280be8;
  if (*(undefined ***)(param_1 + 0x80) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x80);
  }
  uVar5 = 2;
  switch(uVar4 & 0xffffffff) {
  case 0:
  case 0xb:
    uVar5 = uVar4;
    break;
  case 1:
    if ((bVar9 & 1) != 0) {
      return 5;
    }
    if (*(int *)((long)ppuVar1 + 0x1c) != 1) {
      return 1;
    }
    uVar7 = 5;
    if (ppuVar1[2][0x10] == '\0') {
      uVar7 = 1;
    }
    return (ulong)uVar7;
  case 3:
    if (*(int *)((long)ppuVar1 + 0x1c) == 3) {
      bVar3 = *(int *)(ppuVar1[2] + 0x1c) == 2;
      uVar7 = 0xf;
code_r0x000100693398:
      if (!bVar3) {
        uVar7 = 2;
      }
      return (ulong)uVar7;
    }
    break;
  case 4:
    if (*(int *)((long)ppuVar1 + 0x1c) == 4) {
      bVar3 = *(int *)(ppuVar1[2] + 0x1c) == 1;
      uVar7 = 0x15;
      goto code_r0x000100693398;
    }
    break;
  case 5:
    return 0x10;
  case 7:
  case 0x12:
    if (*(int *)((long)ppuVar1 + 0x1c) != 2) {
      return 6;
    }
    puVar6 = ppuVar1[2];
    switch(*(int *)(puVar6 + 0x1c)) {
    case 2:
      iVar2 = *(int *)(*(long *)(puVar6 + 0x10) + 0x14);
      if (*(int *)(*(long *)(puVar6 + 0x10) + 0x10) == 4) {
        uVar7 = 9;
        if (iVar2 != 0) {
          uVar7 = 10;
        }
        return (ulong)uVar7;
      }
      bVar3 = iVar2 == 0;
      uVar8 = 0x13;
      uVar7 = 3;
      break;
    case 3:
      return 0xc;
    case 4:
      return 0xd;
    default:
      bVar3 = *(int *)(puVar6 + 0x1c) == 0xc;
      uVar8 = 6;
      uVar7 = 0x1e;
      break;
    case 6:
      return 0x11;
    case 7:
      return 2;
    case 8:
      return 0x14;
    case 9:
      return 0x16;
    case 10:
      bVar3 = *(int *)(*(long *)(puVar6 + 0x10) + 0x10) == 1;
      uVar8 = 0x18;
      uVar7 = 0x1c;
      break;
    case 0xb:
      uVar7 = *(int *)(*(long *)(puVar6 + 0x10) + 0x10) + 0x18;
      if (2 < *(int *)(*(long *)(puVar6 + 0x10) + 0x10) - 1U) {
        uVar7 = 0;
      }
      return (ulong)uVar7;
    }
    if (!bVar3) {
      uVar7 = uVar8;
    }
    return (ulong)uVar7;
  case 9:
    return 7;
  case 10:
    return 8;
  case 0xc:
    return 10;
  case 0xd:
    return 9;
  case 0x16:
    return 0x17;
  case 0x1f:
    return 0x1d;
  }
  return uVar5;
}



/* Entry: 10069325c; end: 1006932d7;  */

bool FUN_10069325c(long param_1)

{
  bool bVar1;
  undefined1 auStack_40 [16];
  long lStack_30;
  int iStack_24;
  
  if (*(int *)(param_1 + 0xa8) == 6) {
    func_0x000107c33f5c();
    FUN_1001a3c94(auStack_40);
    if (iStack_24 == 8) {
      bVar1 = *(int *)(lStack_30 + 0x1c) == 5;
    }
    else {
      bVar1 = false;
    }
    func_0x000107c33f64();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1006932d8; end: 1006933e3;  */

ulong FUN_1006932d8(ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 2;
  switch(param_1 & 0xffffffff) {
  case 0:
  case 0xb:
    uVar3 = param_1;
    break;
  case 1:
    if ((param_2 & 1) != 0) {
      return 5;
    }
    if (*(int *)(param_3 + 0x1c) != 1) {
      return 1;
    }
    uVar5 = 5;
    if (*(char *)(*(long *)(param_3 + 0x10) + 0x10) == '\0') {
      uVar5 = 1;
    }
    return (ulong)uVar5;
  case 3:
    if (*(int *)(param_3 + 0x1c) == 3) {
      bVar2 = *(int *)(*(long *)(param_3 + 0x10) + 0x1c) == 2;
      uVar5 = 0xf;
code_r0x000100693398:
      if (!bVar2) {
        uVar5 = 2;
      }
      return (ulong)uVar5;
    }
    break;
  case 4:
    if (*(int *)(param_3 + 0x1c) == 4) {
      bVar2 = *(int *)(*(long *)(param_3 + 0x10) + 0x1c) == 1;
      uVar5 = 0x15;
      goto code_r0x000100693398;
    }
    break;
  case 5:
    return 0x10;
  case 7:
  case 0x12:
    if (*(int *)(param_3 + 0x1c) != 2) {
      return 6;
    }
    lVar4 = *(long *)(param_3 + 0x10);
    switch(*(int *)(lVar4 + 0x1c)) {
    case 2:
      iVar1 = *(int *)(*(long *)(lVar4 + 0x10) + 0x14);
      if (*(int *)(*(long *)(lVar4 + 0x10) + 0x10) == 4) {
        uVar5 = 9;
        if (iVar1 != 0) {
          uVar5 = 10;
        }
        return (ulong)uVar5;
      }
      bVar2 = iVar1 == 0;
      uVar6 = 0x13;
      uVar5 = 3;
      break;
    case 3:
      return 0xc;
    case 4:
      return 0xd;
    default:
      bVar2 = *(int *)(lVar4 + 0x1c) == 0xc;
      uVar6 = 6;
      uVar5 = 0x1e;
      break;
    case 6:
      return 0x11;
    case 7:
      return 2;
    case 8:
      return 0x14;
    case 9:
      return 0x16;
    case 10:
      bVar2 = *(int *)(*(long *)(lVar4 + 0x10) + 0x10) == 1;
      uVar6 = 0x18;
      uVar5 = 0x1c;
      break;
    case 0xb:
      iVar1 = *(int *)(*(long *)(lVar4 + 0x10) + 0x10);
      uVar5 = iVar1 + 0x18;
      if (2 < iVar1 - 1U) {
        uVar5 = 0;
      }
      return (ulong)uVar5;
    }
    if (!bVar2) {
      uVar5 = uVar6;
    }
    return (ulong)uVar5;
  case 9:
    return 7;
  case 10:
    return 8;
  case 0xc:
    return 10;
  case 0xd:
    return 9;
  case 0x16:
    return 0x17;
  case 0x1f:
    return 0x1d;
  }
  return uVar3;
}



/* Entry: 1006933e4; end: 100693427;  */

void FUN_1006933e4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x0001006933dc();
  puVar3 = param_1;
  func_0x0001006933dc();
  func_0x000100693448(uVar1,uVar2,param_1,(long)puVar3 + param_2);
  return;
}



/* Entry: 100693428; end: 100693497;  */

undefined1  [16] FUN_100693428(long *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (undefined1 (*) [16])(*(ulong *)(*param_1 + 0x10) & 0xfffffffffffffffc);
  auVar1._8_8_ = (long)(char)auVar1._0_8_[1][7];
  if (-1 < auVar1._8_8_) {
    return auVar1;
  }
  return *auVar1._0_8_;
}



/* Entry: 100693498; end: 1006934c3;  */

void FUN_100693498(void)

{
  long unaff_x19;
  
  func_0x00010069347c();
  FUN_1006934c4(*(undefined8 *)(unaff_x19 + 0x18));
  FUN_100693530();
  func_0x000100693560();
  func_0x00010069357c();
  return;
}



/* Entry: 1006934c4; end: 1006934eb;  */

void FUN_1006934c4(void)

{
  return;
}



/* Entry: 1006934ec; end: 10069352f;  */

long FUN_1006934ec(void)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  ulong unaff_x20;
  long unaff_x21;
  
  func_0x0001006934dc();
  while ((lVar2 = unaff_x19, unaff_x21 != unaff_x19 &&
         (uVar1 = unaff_x20, FUN_1006933e4(), lVar2 = unaff_x21, (uVar1 & 1) == 0))) {
    unaff_x21 = unaff_x21 + 8;
  }
  return lVar2;
}



/* Entry: 100693530; end: 10069354b;  */

void FUN_100693530(void)

{
  FUN_1006934ec();
  return;
}



/* Entry: 10069354c; end: 100693597;  */

void FUN_10069354c(void)

{
  return;
}



/* Entry: 100693598; end: 100693613;  */

long FUN_100693598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  func_0x000100693590();
  param_1 = param_1 + 8;
  FUN_100693688(param_1,auStack_40,param_3);
  FUN_100100fec(auStack_40);
  func_0x000100693750();
  return param_1;
}



/* Entry: 100693614; end: 10069367b;  */

undefined4 FUN_100693614(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1;
  FUN_100693598();
  if ((uVar2 & 1) == 0) {
    FUN_1006937e8(param_1,param_2,param_3);
    uVar3 = 3;
    if ((int)param_1 == 0) {
      uVar3 = 1;
    }
    uVar1 = 2;
    if (param_1 >> 0x20 != 0) {
      uVar1 = uVar3;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10069367c; end: 100693687;  */

void FUN_10069367c(void)

{
  return;
}



/* Entry: 100693688; end: 1006936d3;  */

void FUN_100693688(int param_1)

{
  FUN_10069367c();
  FUN_100693728();
  if (param_1 != 0) {
    func_0x000107c29d08();
    func_0x000107c28e58();
  }
  return;
}



/* Entry: 1006936d4; end: 100693727;  */

undefined8 FUN_1006936d4(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  while( true ) {
    do {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      func_0x000107c33c9c();
    } while (((uint)param_1 >> 7 & 1) != 0);
    param_1 = (long)(plVar1 + 4);
    func_0x000108664d0c(param_1,param_2);
    if (((uint)param_1 >> 7 & 1) == 0) break;
    plVar1 = plVar1 + 1;
  }
  return 1;
}



/* Entry: 100693728; end: 100693743;  */

bool FUN_100693728(long param_1)

{
  FUN_1006936d4();
  return param_1 != 0;
}



/* Entry: 100693744; end: 100693757;  */

void FUN_100693744(void)

{
  return;
}



/* Entry: 100693758; end: 1006937e7;  */

ulong FUN_100693758(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  func_0x000100693590();
  lStack_28 = param_3;
  FUN_100693920(param_1 + 0x40,auStack_40);
  FUN_1006939f8();
  if (param_3 == 0) {
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 0;
  }
  else if (*(char *)(param_3 + 0x34) == '\x01') {
    uVar2 = *(uint *)(param_3 + 0x30) & 0xffffff00;
    uVar3 = *(uint *)(param_3 + 0x30) & 0xff;
    uVar1 = 0x100000000;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 1;
  }
  return uVar1 | (uVar2 | uVar3);
}



/* Entry: 1006937e8; end: 10069391f;  */

ulong FUN_1006937e8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  int extraout_w9;
  ulong uVar2;
  uint uVar3;
  undefined1 auStack_b8 [72];
  undefined1 auStack_70 [40];
  uint uStack_48;
  char cStack_40;
  ulong uStack_38;
  
  uVar2 = param_1;
  FUN_100693758();
  uStack_38 = uVar2;
  if (uVar2 >> 0x20 == 0) {
    FUN_100693a04();
    FUN_100693a1c();
    if (extraout_w9 == 1) {
      func_0x000100693a2c();
      uVar2 = 0;
      uStack_48 = 0;
      uVar3 = 0;
    }
    else {
      func_0x000100693a2c();
      FUN_100693a1c();
      func_0x000100693a2c();
      FUN_100693aa0(auStack_b8,*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      FUN_100693e98(auStack_70,auStack_b8);
      FUN_100694080(auStack_b8);
      if (cStack_40 == '\x01') {
        func_0x000107c33cb8();
        uVar3 = uStack_48 & 0xffffff00;
        uVar2 = 0x100000000;
      }
      else {
        uVar2 = 0;
        uStack_48 = 0;
        uVar3 = 0;
      }
      FUN_100693fec(auStack_70);
    }
  }
  else {
    FUN_100693a1c();
    func_0x000100693a2c();
    puVar1 = &uStack_38;
    func_0x000107c29d18();
    uStack_48 = (uint)*puVar1;
    uVar3 = uStack_48 & 0xffffff00;
    uVar2 = 0x100000000;
  }
  return uVar2 | (uVar3 | uStack_48 & 0xff);
}



/* Entry: 100693920; end: 1006939f7;  */

long FUN_100693920(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = param_2;
    func_0x000107c29d30();
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar4 != uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c29d34(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 1006939f8; end: 100693a03;  */

void FUN_1006939f8(void)

{
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 100693a04; end: 100693a1b;  */

void FUN_100693a04(long param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  func_0x00010563ab98();
  return;
}



/* Entry: 100693a1c; end: 100693a3f;  */

void FUN_100693a1c(void)

{
  return;
}



/* Entry: 100693a40; end: 100693a77;  */

void FUN_100693a40(void)

{
  long extraout_x8;
  
  FUN_1005ed310();
  FUN_1005ed358();
  FUN_1005f4a10();
  FUN_100693a78(*(undefined8 *)(extraout_x8 + 8));
  func_0x0001005ed374();
  return;
}



/* Entry: 100693a78; end: 100693a9f;  */

void FUN_100693a78(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100693a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,&stack0x00000008);
  return;
}



/* Entry: 100693aa0; end: 100693b1f;  */

void FUN_100693aa0(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  func_0x000100693a84();
  if ((bool)in_ZR) {
    FUN_1005ecc68();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c34184();
      func_0x000107c341bc();
      func_0x000107c34228();
      FUN_10054f908();
      func_0x000107c34160();
      func_0x000107c34284();
      func_0x000107c34390();
      func_0x00010054f944();
      func_0x000107c34384();
    }
  }
  FUN_100693b20(*(undefined8 *)(unaff_x21 + 0x20));
  FUN_100693b44();
  return;
}



/* Entry: 100693b20; end: 100693b43;  */

long FUN_100693b20(long param_1)

{
  long in_x9;
  
  return param_1 + in_x9;
}



/* Entry: 100693b44; end: 100693b6f;  */

void FUN_100693b44(void)

{
  func_0x000100693b34();
  FUN_100693b70();
  FUN_100693c18();
  func_0x0001005edc5c();
  FUN_100693c80();
  func_0x0001005edd60();
  FUN_100693cd8();
  return;
}



/* Entry: 100693b70; end: 100693c17;  */

long FUN_100693b70(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_100693be4;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_100693be4:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  return param_1;
}



/* Entry: 100693c18; end: 100693c27;  */

void FUN_100693c18(void)

{
  return;
}



/* Entry: 100693c28; end: 100693c7f;  */

void FUN_100693c28(void)

{
  func_0x0001005edc5c();
  FUN_100693c80();
  func_0x0001005edd60();
  FUN_100693cd8();
  return;
}



/* Entry: 100693c80; end: 100693cb7;  */

void FUN_100693c80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_10065f1f4(param_1,1,param_2);
  FUN_1005edd44(param_1,2);
  iVar1 = (int)param_1;
  func_0x000107c6132c();
  if (iVar1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    FUN_1003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 100693cb8; end: 100693cd7;  */

void FUN_100693cb8(void)

{
  func_0x000107c61168(&PTR_PTR_1129ad418);
  return;
}



/* Entry: 100693cd8; end: 100693cfb;  */

void FUN_100693cd8(void)

{
  FUN_1005ec7e4();
  FUN_100693cfc();
  return;
}



/* Entry: 100693cfc; end: 100693d2b;  */

void FUN_100693cfc(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_100693d2c();
  return;
}



/* Entry: 100693d2c; end: 100693dc3;  */

void FUN_100693d2c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001005eddc0();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    FUN_1005ee9a8();
    func_0x000107c34330();
    func_0x000107c3435c();
    FUN_10062c0c4();
    FUN_10054c8f4();
    func_0x00010062c0d4();
    if (*(char *)(unaff_x19 + 0x38) == '\x01') {
      func_0x000107c3453c();
      func_0x000107c29d1c();
    }
    else {
      func_0x000107c3453c();
      func_0x000107c29d20();
    }
    func_0x000107c344c0();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 100693dc4; end: 100693e5b;  */

void FUN_100693dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ef7ab8,&UNK_10db27110);
  puVar1 = &UNK_1105a3260;
  func_0x000107c613fc(&UNK_1105a3260,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006bbc18,puVar1);
  return;
}



/* Entry: 100693e5c; end: 100693e7f;  */

void FUN_100693e5c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 100693e80; end: 100693e97;  */

void FUN_100693e80(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_2 = param_2 + 8;
  FUN_10069367c(param_1,param_2);
  FUN_100693f64(param_1 + 1,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 100693e98; end: 100693f2b;  */

void FUN_100693e98(undefined1 *param_1)

{
  long *plVar1;
  long lStack_60;
  undefined1 auStack_58 [48];
  char cStack_28;
  
  FUN_100693e80(&lStack_60);
  if (cStack_28 == '\x01') {
    FUN_100693fe0();
    if (lStack_60 != 0) {
      plVar1 = &lStack_60;
      func_0x000107c29d24(plVar1);
      func_0x000107c29d2c(param_1,plVar1);
      goto LAB_100693f00;
    }
  }
  else {
    FUN_100693fe0();
  }
  *param_1 = 0;
  param_1[0x30] = 0;
LAB_100693f00:
  FUN_100693fec(auStack_58);
  return;
}



/* Entry: 100693f2c; end: 100693f63;  */

void FUN_100693f2c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_10069367c();
  FUN_100693f64(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 100693f64; end: 100693fdf;  */

void FUN_100693f64(long param_1,long param_2)

{
  char cVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_10069367c();
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 != *(char *)(param_2 + 0x30)) {
    if (cVar1 == '\0') {
      func_0x000107c29d20();
    }
    else {
      func_0x000107c29d20();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 6) == '\x01') {
      FUN_100100fec();
      *(undefined1 *)(unaff_x19 + 6) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    func_0x0001088357f0();
    func_0x0001088357f0();
    func_0x000107c33ca4();
    return;
  }
  return;
}



/* Entry: 100693fe0; end: 100693feb;  */

void FUN_100693fe0(void)

{
  if (*(char *)(((ulong)&stack0x00000000 | 8) + 0x30) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 100693fec; end: 10069400b;  */

void FUN_100693fec(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10069400c; end: 100694033;  */

void FUN_10069400c(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 != *(char *)(param_2 + 0x30)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        FUN_100100fec();
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      return;
    }
    func_0x00010883583c();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c33cbc();
    func_0x000107c3194c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    return;
  }
  return;
}



/* Entry: 100694034; end: 100694057;  */

undefined8 FUN_100694034(undefined8 param_1)

{
  FUN_10069400c();
  return param_1;
}


