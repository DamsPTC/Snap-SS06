/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10898e284; end: 10898e2c7;  */

long FUN_10898e284(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  FUN_10898f85c(lVar1 + 0x18,param_1,param_3);
  return param_1;
}



/* Entry: 10898e2c8; end: 10898e2d3;  */

void FUN_10898e2c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2e70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10898e2d4; end: 10898e2fb;  */

void FUN_10898e2d4(long param_1)

{
  FUN_10898f87c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10898e2fc; end: 10898e317;  */

void FUN_10898e2fc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10898e318; end: 10898e33f;  */

undefined8 FUN_10898e318(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10898c6a4(param_1 + 0x10);
  func_0x00010898e7c0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10898e340; end: 10898e34f;  */

void FUN_10898e340(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10898e350; end: 10898e3db;  */

void FUN_10898e350(long param_1)

{
  func_0x00010898e7c0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10898e3dc; end: 10898e3df;  */

void FUN_10898e3dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2ec0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10898e3e0; end: 10898e3f3;  */

void FUN_10898e3e0(void)

{
  func_0x00010898e594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898e3f4; end: 10898e40b;  */

void FUN_10898e3f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010898e3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10898e40c; end: 10898e57b;  */

void FUN_10898e40c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long alStack_50 [2];
  
  lVar4 = *(long *)(param_1 + 8);
  FUN_10898d900(alStack_50,*(undefined8 *)(lVar4 + 8));
  uVar1 = *(undefined4 *)(param_2 + 9);
  uVar2 = *(undefined4 *)((long)param_2 + 0x4c);
  func_0x00010898c1b0(alStack_50[0],1,uVar1,uVar2,0);
  *(undefined8 *)(alStack_50[0] + 0x88) = param_2[10];
  if ((param_2[2] + 1 == param_2[4] && *(int *)((long)param_2 + 0x34) == 2) &&
      *(int *)(param_2 + 7) == 2) {
    func_0x000108b699d4(*param_2,*(undefined4 *)((long)param_2 + 0x3c),param_2[2],
                        *(undefined4 *)(param_2 + 8),*(undefined8 *)(alStack_50[0] + 0x48),
                        *(undefined4 *)(alStack_50[0] + 0x68),*(undefined8 *)(alStack_50[0] + 0x50),
                        *(undefined4 *)(alStack_50[0] + 0x6c),*(undefined8 *)(alStack_50[0] + 0x58),
                        *(undefined4 *)(alStack_50[0] + 0x70),uVar1,uVar2);
  }
  else {
    func_0x00010898e764(*(undefined8 *)(alStack_50[0] + 0x48),*(undefined4 *)(alStack_50[0] + 0x68),
                        *param_2,*(undefined4 *)(param_2 + 6),*(undefined4 *)((long)param_2 + 0x3c))
    ;
    func_0x00010898e764(*(undefined8 *)(alStack_50[0] + 0x50),*(undefined4 *)(alStack_50[0] + 0x6c),
                        param_2[2],*(undefined4 *)((long)param_2 + 0x34),
                        *(undefined4 *)(param_2 + 8));
    func_0x00010898e764(*(undefined8 *)(alStack_50[0] + 0x58),*(undefined4 *)(alStack_50[0] + 0x70),
                        param_2[4],*(undefined4 *)(param_2 + 7),
                        *(undefined4 *)((long)param_2 + 0x44));
  }
  plVar3 = *(long **)(lVar4 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,alStack_50);
    func_0x00010899700c(*(undefined8 *)(lVar4 + 0x70),0);
  }
  FUN_10898e6b0(alStack_50);
  return;
}



/* Entry: 10898e57c; end: 10898e5a7;  */

void FUN_10898e57c(void)

{
  return;
}



/* Entry: 10898e5a8; end: 10898e5fb;  */

void FUN_10898e5a8(void)

{
  func_0x00010898e654();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898e5fc; end: 10898e687;  */

void FUN_10898e5fc(long param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x00010898e724();
    } while (extraout_w10 != 0);
  }
  FUN_10898e12c();
  FUN_10898e688(&uStack_30,param_1,1);
  func_0x00010898e788();
  return;
}



/* Entry: 10898e688; end: 10898e69f;  */

void FUN_10898e688(void)

{
  FUN_10898e6a0();
  return;
}



/* Entry: 10898e6a0; end: 10898e6af;  */

void FUN_10898e6a0(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_28 = param_2;
  __ZNSt3__15mutex4lockEv(lVar1 + 0x20,param_2,param_3 * 0xb8);
  FUN_10898fd8c(lVar1 + 0x70,&uStack_28);
  func_0x0001089905c8();
  return;
}



/* Entry: 10898e6b0; end: 10898e6d3;  */

void FUN_10898e6b0(long param_1)

{
  func_0x00010898e7c0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10898e6d4; end: 10898e7d7;  */

void FUN_10898e6d4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010898e6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 10898e7d8; end: 10898ea7f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010898e958 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_10898e7d8(undefined8 param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int extraout_w10;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  char cStack_49;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  lVar3 = param_2;
  func_0x00010898f5f8();
  *(int *)(lVar3 + 0x20) = (int)param_3;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0x32aaaba7;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined1 *)(lVar3 + 0x168) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined1 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x170) = 0x32aaaba7;
  *(undefined8 *)(lVar3 + 0x180) = 0;
  *(undefined8 *)(lVar3 + 0x178) = 0;
  *(undefined8 *)(lVar3 + 400) = 0;
  *(undefined8 *)(lVar3 + 0x188) = 0;
  *(undefined8 *)(lVar3 + 0x1a0) = 0;
  *(undefined8 *)(lVar3 + 0x198) = 0;
  *(undefined8 *)(lVar3 + 0x1a8) = 0;
  *(undefined8 *)(lVar3 + 0x1b0) = 500;
  *(undefined8 *)(lVar3 + 0x1c0) = 0;
  *(undefined8 *)(lVar3 + 0x1c8) = 0;
  *(undefined8 *)(lVar3 + 0x1b8) = 0;
  *(undefined8 *)(lVar3 + 0x1d0) = *param_4;
  lVar8 = param_4[1];
  *(long *)(lVar3 + 0x1d8) = lVar8;
  if (lVar8 != 0) {
    do {
      func_0x00010898f5ac();
    } while (extraout_w10 != 0);
  }
  iVar7 = (int)param_3;
  if (iVar7 == 4 || iVar7 == 2) {
    puVar4 = (undefined8 *)0x60;
    __Znwm();
    *puVar4 = &PTR_DAT_110aaac48;
    *(undefined1 *)((long)puVar4 + 0x54) = 0;
    *(undefined1 *)(puVar4 + 0xb) = 0;
    *(undefined1 *)((long)puVar4 + 0x5c) = 0;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[6] = 0;
    puVar4[5] = 0;
    puVar4[8] = 0;
    puVar4[7] = 0;
    *(undefined8 *)((long)puVar4 + 0x49) = 0;
    *(undefined8 *)((long)puVar4 + 0x41) = 0;
  }
  else {
    if (iVar7 != 1) {
      pppuStack_60 = (undefined8 ***)(param_3 & 0xffffffff);
      uStack_58 = 0;
      func_0x000107c2793c(&UNK_10f4edf1a);
      func_0x000107c3173c(&pppuStack_78);
      if (-1 < (char)bStack_61) {
        uStack_70 = (ulong)bStack_61;
        pppuStack_78 = &pppuStack_78;
      }
      func_0x00010bd3f434(&pppuStack_60,pppuStack_78,uStack_70,&DAT_10f6842c6);
      ppppuVar1 = (undefined8 ****)pppuStack_60;
      if (-1 < cStack_49) {
        ppppuVar1 = &pppuStack_60;
      }
      func_0x00010bd3f4e0(ppppuVar1,"unknown",0x2e);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10898e9fc);
      (*pcVar2)();
    }
    puVar4 = (undefined8 *)0x68;
    __Znwm();
    *puVar4 = &PTR_DAT_110aaac18;
    *(undefined1 *)(puVar4 + 1) = 0;
    *(undefined1 *)(puVar4 + 7) = 0;
    *(undefined1 *)((long)puVar4 + 0x3c) = 0;
    *(undefined1 *)((long)puVar4 + 0x5c) = 0;
    *(undefined1 *)(puVar4 + 0xc) = 0;
    *(undefined1 *)((long)puVar4 + 100) = 0;
  }
  *(undefined8 **)(param_2 + 0x1e0) = puVar4;
  func_0x000108afd080();
  FUN_10894b3c4();
  puVar5 = puVar4;
  func_0x000108afd080();
  func_0x00010894b400();
  *(long *)(param_2 + 0x1e8) = (long)puVar4 - (long)puVar5;
  *(undefined1 *)(param_2 + 0x1f0) = 1;
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  *(undefined8 *)(param_2 + 0x200) = 0;
  *(undefined8 *)(param_2 + 0x208) = 0x32aaaba7;
  *(undefined8 *)(param_2 + 0x218) = 0;
  *(undefined8 *)(param_2 + 0x210) = 0;
  *(undefined8 *)(param_2 + 0x228) = 0;
  *(undefined8 *)(param_2 + 0x220) = 0;
  *(undefined8 *)(param_2 + 0x238) = 0;
  *(undefined8 *)(param_2 + 0x230) = 0;
  *(undefined8 *)(param_2 + 0x240) = 0;
  uVar6 = 200;
  __Znwm();
  func_0x000108a338e8(param_1,0x3f733333);
  *(undefined8 *)(param_2 + 0x248) = uVar6;
  *(undefined4 *)(param_2 + 0x250) = 0;
  *(undefined2 *)(param_2 + 0x254) = 0;
  return param_2;
}



/* Entry: 10898ea80; end: 10898eb5b;  */

long FUN_10898ea80(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_50 [40];
  byte bStack_28;
  
  lVar3 = param_1;
  func_0x00010898f5f8();
  puVar2 = *(undefined8 **)(lVar3 + 0x1f8);
  FUN_108996b58(auStack_50,puVar2,*(undefined8 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x20));
  if (bStack_28 == 1) {
    FUN_1089a3c0c();
    if ((bStack_28 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10898eb58);
      (*pcVar1)();
    }
    (**(code **)(*(long *)*puVar2 + 8))((long *)*puVar2,auStack_50,1);
  }
  FUN_10894c490(auStack_50);
  lVar3 = *(long *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (lVar3 != 0) {
    func_0x00010898f5c8();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x208);
  FUN_10898f510(param_1 + 0x1e0);
  func_0x00010894c74c(param_1 + 0x1d0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x170);
  FUN_10894c5ac(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x40);
  func_0x00010894c628(param_1 + 0x38);
  FUN_10898f4b4(param_1 + 0x28);
  func_0x00010898f53c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10898eb5c; end: 10898eb67;  */

long FUN_10898eb5c(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_50 [40];
  byte bStack_28;
  
  lVar3 = param_1;
  func_0x00010898f5f8();
  puVar2 = *(undefined8 **)(lVar3 + 0x1f8);
  FUN_108996b58(auStack_50,puVar2,*(undefined8 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x20));
  if (bStack_28 == 1) {
    FUN_1089a3c0c();
    if ((bStack_28 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10898eb58);
      (*pcVar1)();
    }
    (**(code **)(*(long *)*puVar2 + 8))((long *)*puVar2,auStack_50,1);
  }
  FUN_10894c490(auStack_50);
  lVar3 = *(long *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (lVar3 != 0) {
    func_0x00010898f5c8();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x208);
  FUN_10898f510(param_1 + 0x1e0);
  func_0x00010894c74c(param_1 + 0x1d0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x170);
  FUN_10894c5ac(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x40);
  func_0x00010894c628(param_1 + 0x38);
  FUN_10898f4b4(param_1 + 0x28);
  func_0x00010898f53c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10898eb68; end: 10898eb7b;  */

void FUN_10898eb68(void)

{
  FUN_10898ea80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898eb7c; end: 10898eb83;  */

void FUN_10898eb7c(long param_1)

{
  FUN_10898ea80(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898eb84; end: 10898ebeb;  */

void FUN_10898eb84(void)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010898f594();
  lVar1 = *(long *)(unaff_x19 + 0x80);
  *(long *)(unaff_x19 + 0x80) = unaff_x20;
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x40);
  if (((*(char *)(unaff_x19 + 0x255) == '\x01' && unaff_x20 != 0) && lVar1 == 0) &&
     (*(long **)(unaff_x19 + 0x28) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010898ebd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(unaff_x19 + 0x28) + 0x18))();
    return;
  }
  return;
}



/* Entry: 10898ebec; end: 10898eccb;  */

void FUN_10898ebec(long param_1,int param_2)

{
  uint uVar1;
  long extraout_x8;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x208);
  if (param_2 != 0) {
    func_0x000108a33998(*(undefined8 *)(param_1 + 0x248),param_2 * 1000);
  }
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x248);
  func_0x000108a33a0c();
  __ZNSt3__15mutex6unlockEv(param_1 + 0x208);
  if (*(uint *)(param_1 + 0x250) != uVar1 / 1000) {
    *(uint *)(param_1 + 0x250) = uVar1 / 1000;
    func_0x00010898f5bc();
                    /* WARNING: Could not recover jumptable at 0x00010898ec60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8 + 0x10))();
    return;
  }
  return;
}



/* Entry: 10898eccc; end: 10898ed2b;  */

void FUN_10898eccc(long param_1)

{
  long extraout_x8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_108996d9c(*(undefined8 *)(param_1 + 0x1d0));
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001089970e0(*(undefined8 *)(param_1 + 0x1d0),&uStack_30);
  func_0x00010898f5e8();
  func_0x00010898f5bc();
  (**(code **)(extraout_x8 + 0x20))();
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  func_0x00010898f5e8();
  return;
}



/* Entry: 10898ed2c; end: 10898ed63;  */

void FUN_10898ed2c(long param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010898ed40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x40))(*(long **)(param_1 + 0x28),*param_2,param_2[1]);
  return;
}



/* Entry: 10898ed64; end: 10898edf3;  */

void FUN_10898ed64(long param_1)

{
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
    FUN_108996d48(*(undefined8 *)(param_1 + 0x1d0));
    __ZNSt3__15mutex4lockEv(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    func_0x00010898f5f0();
    *(char *)(param_1 + 0x1f0) = '\0';
  }
  return;
}



/* Entry: 10898edf4; end: 10898efb7;  */

void FUN_10898edf4(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_1089910ac(param_3,*(undefined4 *)(param_1 + 0x20));
  FUN_10894b374(&uStack_90);
  uVar2 = uStack_90;
  uStack_90 = 0;
  FUN_10894c64c(param_1 + 0x38,uVar2);
  func_0x00010894c628(&uStack_90);
  uVar1 = *(int *)(param_1 + 0x20) - 1;
  if (uVar1 < 4) {
    puVar5 = (&PTR_DAT_110aa30d0)[uVar1];
  }
  else {
    puVar5 = &DAT_10df7c664;
  }
  plVar7 = (long *)*param_2;
  func_0x000107c278b8(&uStack_a8,puVar5);
  uStack_78 = *(undefined4 *)(param_3 + 1);
  uStack_74 = *(undefined4 *)(param_3 + 4);
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  uStack_80 = uStack_98;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_70 = *param_3;
  lStack_b0 = *(long *)(param_1 + 0x18);
  if (lStack_b0 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (lStack_b0 != 0) {
      lStack_b8 = 0;
      if (lVar8 != 0) {
        lStack_b8 = lVar8 + 8;
      }
      uStack_c8 = 0;
      uStack_c0 = 0;
      (**(code **)(*plVar7 + 0x10))(&uStack_60,plVar7,param_4 == 2,&uStack_90,&lStack_b8);
      uVar3 = uStack_58;
      uVar2 = uStack_60;
      uStack_60 = 0;
      uStack_58 = 0;
      puVar6 = (undefined8 *)(param_1 + 0x28);
      uStack_48 = *(undefined8 *)(param_1 + 0x30);
      uStack_50 = *puVar6;
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      *puVar6 = uVar2;
      FUN_10898f4b4(&uStack_50);
      FUN_10898f4b4(&uStack_60);
      FUN_108945a74(&lStack_b8);
      func_0x00010898f564(&uStack_c8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a8);
      func_0x0001089970e0(*(undefined8 *)(param_1 + 0x1d0),puVar6);
      __ZNSt3__15mutex4lockEv(param_1 + 0x208);
      func_0x000108a33998(*(undefined8 *)(param_1 + 0x248),*(int *)(param_3 + 1) * 1000);
      __ZNSt3__15mutex6unlockEv(param_1 + 0x208);
      return;
    }
  }
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10898ef88);
  (*pcVar4)();
}



/* Entry: 10898efb8; end: 10898f39f;  */

void FUN_10898efb8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  undefined8 *puVar6;
  undefined8 auStack_378 [28];
  undefined2 auStack_298 [4];
  undefined8 uStack_290;
  long *plStack_288;
  undefined1 uStack_280;
  undefined1 uStack_278;
  undefined1 uStack_270;
  undefined1 uStack_268;
  undefined4 uStack_260;
  long lStack_258;
  undefined4 uStack_250;
  undefined1 uStack_24c;
  undefined1 uStack_208;
  undefined1 uStack_204;
  undefined1 uStack_200;
  undefined1 uStack_1fc;
  undefined1 uStack_1f8;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long alStack_1d0 [3];
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  int iStack_1ac;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined5 uStack_140;
  undefined3 uStack_13b;
  int iStack_138;
  undefined1 uStack_134;
  undefined1 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_114;
  undefined1 uStack_110;
  undefined1 uStack_10c;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_a6;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined1 uStack_90;
  undefined1 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_60;
  long *plStack_58;
  
  if ((*(byte *)(param_1 + 0x1f0) & 1) != 0) {
    return;
  }
  do {
    func_0x00010898f5ac();
  } while (extraout_w10 != 0);
  lVar2 = param_1 + 0x170;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar5 = param_1 + 0x1b0;
  alStack_1d0[0] = lVar2;
  func_0x00010898f60c(lVar5,alStack_1d0);
  func_0x00010898f5f0();
  if ((int)lVar5 != 0) {
    func_0x00010898f5bc();
    (**(code **)(extraout_x8 + 0x18))();
  }
  lVar2 = 0;
  for (plVar3 = (long *)*param_2; plVar3 != (long *)param_2[1]; plVar3 = plVar3 + 2) {
    if ((*plVar3 == 0) || (0x100000 < (ulong)plVar3[1])) {
      func_0x00010898f5bc();
                    /* WARNING: Could not recover jumptable at 0x00010898f1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0x18))();
      return;
    }
    lVar2 = plVar3[1] + lVar2;
  }
  func_0x0001089fddb0(&plStack_58,lVar2);
  lVar2 = 0;
  puVar1 = (undefined8 *)param_2[1];
  for (puVar6 = (undefined8 *)*param_2; puVar6 != puVar1; puVar6 = puVar6 + 2) {
    _memcpy(plStack_58[6] + lVar2,*puVar6,puVar6[1]);
    lVar2 = puVar6[1] + lVar2;
  }
  alStack_1d0[0] = 0;
  alStack_1d0[1] = 0;
  alStack_1d0[2] = 0;
  uStack_1b8 = 4;
  uStack_1b0 = 0;
  iStack_1ac = 0xffffffff;
  uStack_1a8 = 0xff;
  uStack_150 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  puStack_108 = &uStack_100;
  uStack_f8 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_160 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_13b = 0;
  iStack_138 = 0;
  uStack_134 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a6 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_96 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  plStack_1d8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    (**(code **)*plStack_58)();
  }
  func_0x00010894c344(alStack_1d0,&plStack_1d8);
  FUN_10894c8f0(&plStack_1d8);
  uVar4 = 3;
  if ((char)param_2[5] == '\0') {
    uVar4 = 4;
  }
  uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar4);
  alStack_1d0[0] = param_2[3];
  plVar3 = *(long **)((long)param_2 + 0x2c);
  if (((ulong)plVar3 >> 0x20 & 1) == 0) {
    if (*(char *)(param_1 + 0x254) == '\x01') {
      iStack_1ac = 0x1e;
      goto LAB_10898f23c;
    }
    plVar3 = *(long **)(param_1 + 0x1e0);
    lVar5 = plStack_58[6];
    (**(code **)(*plStack_58 + 0x28))();
    lVar2 = 0;
    if (plStack_58 != (long *)0x0) {
      lVar2 = lVar5;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2,plStack_58);
    plVar3 = *(long **)(param_1 + 0x1e0);
    (**(code **)(*plVar3 + 0x18))();
    if (((ulong)plVar3 >> 0x20 & 1) != 0) goto LAB_10898f224;
    iStack_1ac = -1;
  }
  else {
LAB_10898f224:
    iStack_1ac = (int)plVar3;
    if (iStack_1ac != -1) goto LAB_10898f23c;
  }
  do {
    func_0x00010898f5ac();
  } while (extraout_w10_00 != 0);
LAB_10898f23c:
  func_0x000108afd080();
  (**(code **)(*plVar3 + 0x10))();
  lVar2 = *(long *)(param_1 + 0x1e8) + (long)plVar3 / 1000;
  iStack_138 = (int)lVar2 * 0x5a;
  __ZNSt3__15mutex4lockEv(param_1 + 0x208);
  func_0x000108a33a38(*(undefined8 *)(param_1 + 0x248),CONCAT35(uStack_13b,uStack_140));
  __ZNSt3__15mutex6unlockEv(param_1 + 0x208);
  auStack_298[0] = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  lStack_258 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_290 = 0;
  plStack_288 = (long *)0x0;
  uStack_280 = 0;
  func_0x00010899fd84(auStack_378,alStack_1d0);
  func_0x00010899fcb0(&uStack_290,auStack_378[0]);
  FUN_10894c5cc(auStack_378);
  plStack_288 = plVar3;
  lStack_258 = lVar2;
  func_0x000108a00d40(auStack_378,auStack_298);
  if (*(char *)(param_1 + 0x168) == '\x01') {
    func_0x000108a010a4(param_1 + 0x88,auStack_378);
  }
  else {
    func_0x000108a01014(param_1 + 0x88,auStack_378);
    *(undefined1 *)(param_1 + 0x168) = 1;
  }
  func_0x000108a00f74(auStack_378);
  func_0x000108a00d18(auStack_298);
  func_0x0001089fe02c(alStack_1d0);
  FUN_10898f4dc(&plStack_58);
  return;
}



/* Entry: 10898f3a0; end: 10898f3a7;  */

void FUN_10898f3a0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  undefined8 *puVar6;
  undefined8 auStack_378 [28];
  undefined2 auStack_298 [4];
  undefined8 uStack_290;
  long *plStack_288;
  undefined1 uStack_280;
  undefined1 uStack_278;
  undefined1 uStack_270;
  undefined1 uStack_268;
  undefined4 uStack_260;
  long lStack_258;
  undefined4 uStack_250;
  undefined1 uStack_24c;
  undefined1 uStack_208;
  undefined1 uStack_204;
  undefined1 uStack_200;
  undefined1 uStack_1fc;
  undefined1 uStack_1f8;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long alStack_1d0 [3];
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  int iStack_1ac;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined5 uStack_140;
  undefined3 uStack_13b;
  int iStack_138;
  undefined1 uStack_134;
  undefined1 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_114;
  undefined1 uStack_110;
  undefined1 uStack_10c;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_a6;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined1 uStack_90;
  undefined1 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_60;
  long *plStack_58;
  
  if ((*(byte *)(param_1 + 0x1e8) & 1) != 0) {
    return;
  }
  do {
    func_0x00010898f5ac();
  } while (extraout_w10 != 0);
  lVar2 = param_1 + 0x168;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar5 = param_1 + 0x1a8;
  alStack_1d0[0] = lVar2;
  func_0x00010898f60c(lVar5,alStack_1d0);
  func_0x00010898f5f0();
  if ((int)lVar5 != 0) {
    func_0x00010898f5bc();
    (**(code **)(extraout_x8 + 0x18))();
  }
  lVar2 = 0;
  for (plVar3 = (long *)*param_2; plVar3 != (long *)param_2[1]; plVar3 = plVar3 + 2) {
    if ((*plVar3 == 0) || (0x100000 < (ulong)plVar3[1])) {
      func_0x00010898f5bc();
                    /* WARNING: Could not recover jumptable at 0x00010898f1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0x18))();
      return;
    }
    lVar2 = plVar3[1] + lVar2;
  }
  func_0x0001089fddb0(&plStack_58,lVar2);
  lVar2 = 0;
  puVar1 = (undefined8 *)param_2[1];
  for (puVar6 = (undefined8 *)*param_2; puVar6 != puVar1; puVar6 = puVar6 + 2) {
    _memcpy(plStack_58[6] + lVar2,*puVar6,puVar6[1]);
    lVar2 = puVar6[1] + lVar2;
  }
  alStack_1d0[0] = 0;
  alStack_1d0[1] = 0;
  alStack_1d0[2] = 0;
  uStack_1b8 = 4;
  uStack_1b0 = 0;
  iStack_1ac = 0xffffffff;
  uStack_1a8 = 0xff;
  uStack_150 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  puStack_108 = &uStack_100;
  uStack_f8 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_160 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_13b = 0;
  iStack_138 = 0;
  uStack_134 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a6 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_96 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  plStack_1d8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    (**(code **)*plStack_58)();
  }
  func_0x00010894c344(alStack_1d0,&plStack_1d8);
  FUN_10894c8f0(&plStack_1d8);
  uVar4 = 3;
  if ((char)param_2[5] == '\0') {
    uVar4 = 4;
  }
  uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar4);
  alStack_1d0[0] = param_2[3];
  plVar3 = *(long **)((long)param_2 + 0x2c);
  if (((ulong)plVar3 >> 0x20 & 1) == 0) {
    if (*(char *)(param_1 + 0x24c) == '\x01') {
      iStack_1ac = 0x1e;
      goto LAB_10898f23c;
    }
    plVar3 = *(long **)(param_1 + 0x1d8);
    lVar5 = plStack_58[6];
    (**(code **)(*plStack_58 + 0x28))();
    lVar2 = 0;
    if (plStack_58 != (long *)0x0) {
      lVar2 = lVar5;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2,plStack_58);
    plVar3 = *(long **)(param_1 + 0x1d8);
    (**(code **)(*plVar3 + 0x18))();
    if (((ulong)plVar3 >> 0x20 & 1) != 0) goto LAB_10898f224;
    iStack_1ac = -1;
  }
  else {
LAB_10898f224:
    iStack_1ac = (int)plVar3;
    if (iStack_1ac != -1) goto LAB_10898f23c;
  }
  do {
    func_0x00010898f5ac();
  } while (extraout_w10_00 != 0);
LAB_10898f23c:
  func_0x000108afd080();
  (**(code **)(*plVar3 + 0x10))();
  lVar2 = *(long *)(param_1 + 0x1e0) + (long)plVar3 / 1000;
  iStack_138 = (int)lVar2 * 0x5a;
  __ZNSt3__15mutex4lockEv(param_1 + 0x200);
  func_0x000108a33a38(*(undefined8 *)(param_1 + 0x240),CONCAT35(uStack_13b,uStack_140));
  __ZNSt3__15mutex6unlockEv(param_1 + 0x200);
  auStack_298[0] = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  lStack_258 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_290 = 0;
  plStack_288 = (long *)0x0;
  uStack_280 = 0;
  func_0x00010899fd84(auStack_378,alStack_1d0);
  func_0x00010899fcb0(&uStack_290,auStack_378[0]);
  FUN_10894c5cc(auStack_378);
  plStack_288 = plVar3;
  lStack_258 = lVar2;
  func_0x000108a00d40(auStack_378,auStack_298);
  if (*(char *)(param_1 + 0x160) == '\x01') {
    func_0x000108a010a4(param_1 + 0x80,auStack_378);
  }
  else {
    func_0x000108a01014(param_1 + 0x80,auStack_378);
    *(undefined1 *)(param_1 + 0x160) = 1;
  }
  func_0x000108a00f74(auStack_378);
  func_0x000108a00d18(auStack_298);
  func_0x0001089fe02c(alStack_1d0);
  FUN_10898f4dc(&plStack_58);
  return;
}



/* Entry: 10898f3a8; end: 10898f45b;  */

void FUN_10898f3a8(long param_1)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  
  if (*(char *)(param_1 + 0x168) == '\x01') {
    FUN_10898302c(&lStack_48,*(undefined8 *)(param_1 + 0x38),param_1 + 0x88);
    for (lVar1 = lStack_48; lVar1 != lStack_40; lVar1 = lVar1 + 0xe0) {
      FUN_10898f45c(param_1,lVar1);
    }
    FUN_10898f45c(param_1,param_1 + 0x88);
    func_0x00010899700c(*(undefined8 *)(param_1 + 0x1d0),0);
    if (*(char *)(param_1 + 0x168) == '\x01') {
      func_0x000108a00f74(param_1 + 0x88);
      *(undefined1 *)(param_1 + 0x168) = 0;
    }
    func_0x00010894c500(&lStack_48);
  }
  return;
}



/* Entry: 10898f45c; end: 10898f4a7;  */

void FUN_10898f45c(void)

{
  long unaff_x19;
  
  func_0x00010898f594();
  if (*(long **)(unaff_x19 + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_x19 + 0x80) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x40);
  return;
}



/* Entry: 10898f4a8; end: 10898f4b3;  */

void FUN_10898f4a8(long param_1)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  
  if (*(char *)(param_1 + 0x160) == '\x01') {
    FUN_10898302c(&lStack_48,*(undefined8 *)(param_1 + 0x30),param_1 + 0x80);
    for (lVar1 = lStack_48; lVar1 != lStack_40; lVar1 = lVar1 + 0xe0) {
      FUN_10898f45c(param_1 + -8,lVar1);
    }
    FUN_10898f45c(param_1 + -8,param_1 + 0x80);
    func_0x00010899700c(*(undefined8 *)(param_1 + 0x1c8),0);
    if (*(char *)(param_1 + 0x160) == '\x01') {
      func_0x000108a00f74(param_1 + 0x80);
      *(undefined1 *)(param_1 + 0x160) = 0;
    }
    func_0x00010894c500(&lStack_48);
  }
  return;
}



/* Entry: 10898f4b4; end: 10898f4db;  */

long FUN_10898f4b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10898f4dc; end: 10898f50f;  */

long * FUN_10898f4dc(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  return param_1;
}



/* Entry: 10898f510; end: 10898f58b;  */

long * FUN_10898f510(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010898f5c8();
  }
  return param_1;
}



/* Entry: 10898f58c; end: 10898f697;  */

void FUN_10898f58c(void)

{
  return;
}



/* Entry: 10898f698; end: 10898f6b7;  */

void FUN_10898f698(void)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000108990594();
  return;
}



/* Entry: 10898f6b8; end: 10898f70f;  */

void FUN_10898f6b8(long param_1)

{
  undefined8 *puVar1;
  
  while (*(long *)(param_1 + 0x98) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x70);
    func_0x00010898fd68();
    _free(*puVar1);
    func_0x00010898fccc(param_1 + 0x70);
  }
  FUN_10898fa1c(param_1 + 0x70);
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10898f710; end: 10898f7d7;  */

undefined8 * FUN_10898f710(long param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar2;
  long in_register_00005008;
  
  func_0x00010899057c();
  if (*(undefined8 **)(unaff_x19 + 0xa0) != (undefined8 *)0x0 &&
      unaff_x20 != *(undefined8 **)(unaff_x19 + 0xa0)) {
    func_0x000108990874();
    *param_3 = &PTR_FUN_110aa3118;
    ___cxa_throw();
LAB_10898f7c4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10898f7c8);
    (*pcVar1)();
  }
  *(undefined8 **)(unaff_x19 + 0xa0) = unaff_x20;
  if (*(long *)(unaff_x19 + 0x98) == 0) {
    puVar2 = unaff_x20;
    FUN_10898f7dc();
    if (puVar2 == (undefined8 *)0x0) {
      func_0x000108990874();
      *puVar2 = &PTR_FUN_110aa3140;
      func_0x00010899062c();
      goto LAB_10898f7c4;
    }
    func_0x0001089907c8();
    *(long *)(unaff_x19 + 0x68) = in_register_00005008 + (long)unaff_x20;
    *(long *)(unaff_x19 + 0x60) = param_1 + param_2;
  }
  else {
    puVar2 = (undefined8 *)(unaff_x19 + 0x70);
    func_0x00010898fd68();
    puVar2 = (undefined8 *)*puVar2;
    func_0x00010898fccc(unaff_x19 + 0x70);
  }
  func_0x0001089905c8();
  return puVar2;
}



/* Entry: 10898f7d8; end: 10898f7db;  */

void FUN_10898f7d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10898f7dc; end: 10898f80f;  */

undefined8 FUN_10898f7dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_18;
  
  puVar1 = &uStack_18;
  _posix_memalign(puVar1,0x10,param_1);
  if ((int)puVar1 != 0) {
    uStack_18 = 0;
  }
  return uStack_18;
}



/* Entry: 10898f810; end: 10898f813;  */

void FUN_10898f810(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10898f814; end: 10898f85b;  */

void FUN_10898f814(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  FUN_10898fd8c(param_1 + 0x70,&uStack_28);
  func_0x0001089905c8();
  return;
}



/* Entry: 10898f85c; end: 10898f87b;  */

void FUN_10898f85c(void)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000108990594();
  return;
}



/* Entry: 10898f87c; end: 10898f8d3;  */

void FUN_10898f87c(long param_1)

{
  long lVar1;
  
  while (*(long *)(param_1 + 0x98) != 0) {
    lVar1 = param_1 + 0x70;
    func_0x0001089901b0();
    _free(*(undefined8 *)(lVar1 + 8));
    FUN_108990114(param_1 + 0x70);
  }
  FUN_10898fb88(param_1 + 0x70);
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10898f8d4; end: 10898f9a7;  */

undefined8 * FUN_10898f8d4(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x19;
  ulong *unaff_x20;
  long in_register_00005008;
  
  func_0x00010899057c();
  puVar5 = (undefined8 *)*unaff_x20;
  puVar4 = *(undefined8 **)(unaff_x19 + 0xa0);
  if (*(undefined8 **)(unaff_x19 + 0xa0) < puVar5) {
    *(undefined8 **)(unaff_x19 + 0xa0) = puVar5;
    puVar4 = puVar5;
  }
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    puVar3 = (ulong *)(unaff_x19 + 0x70);
    func_0x0001089901b0();
    uVar1 = *puVar3;
    puVar4 = (undefined8 *)puVar3[1];
    FUN_108990114(unaff_x19 + 0x70);
    if (*(ulong *)(unaff_x19 + 0xa0) <= uVar1) {
      *unaff_x20 = uVar1;
      goto LAB_10898f974;
    }
    func_0x0001089907c8();
    *(ulong *)(unaff_x19 + 0x68) = in_register_00005008 - uVar1;
    *(long *)(unaff_x19 + 0x60) = param_1 - param_2;
    _free(puVar4);
    puVar4 = *(undefined8 **)(unaff_x19 + 0xa0);
  }
  *unaff_x20 = (ulong)puVar4;
  FUN_10898f7dc();
  if (puVar4 == (undefined8 *)0x0) {
    func_0x000108990874();
    *puVar4 = &PTR_FUN_110aa3140;
    func_0x00010899062c();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10898f99c);
    (*pcVar2)();
  }
  *(long *)(unaff_x19 + 0x60) = *(long *)(unaff_x19 + 0x60) + 1;
  *(ulong *)(unaff_x19 + 0x68) = *(long *)(unaff_x19 + 0x68) + *unaff_x20;
LAB_10898f974:
  func_0x0001089905c8();
  return puVar4;
}



/* Entry: 10898f9a8; end: 10898fa1b;  */

void FUN_10898f9a8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long unaff_x19;
  long in_register_00005008;
  ulong uStack_40;
  
  func_0x00010899057c();
  if (param_5 < *(ulong *)(unaff_x19 + 0xa0)) {
    func_0x0001089907c8();
    *(ulong *)(unaff_x19 + 0x68) = in_register_00005008 - param_5;
    *(long *)(unaff_x19 + 0x60) = param_1 - param_2;
    _free();
  }
  else {
    uStack_40 = param_5;
    FUN_1089901d0(unaff_x19 + 0x70,&uStack_40);
  }
  func_0x0001089905c8();
  return;
}



/* Entry: 10898fa1c; end: 10898fa5f;  */

long * FUN_10898fa1c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10898fa60();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10898fb3c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10898fa60; end: 10898facb;  */

void FUN_10898fa60(long param_1)

{
  undefined1 in_CY;
  long lVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  long extraout_x9;
  
  FUN_10898facc();
  func_0x00010898faec(param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar1 = *(long *)(param_1 + 8);
  while (func_0x0001089908c8(lVar1), (bool)in_CY) {
    __ZdlPv(*extraout_x8);
    lVar1 = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 8) = lVar1;
  }
  if (extraout_x9 == 1) {
    uVar2 = 0x100;
  }
  else {
    if (extraout_x9 != 2) {
      return;
    }
    uVar2 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 10898facc; end: 10898fb0f;  */

void FUN_10898facc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10898fb10; end: 10898fb3b;  */

long * FUN_10898fb10(long *param_1)

{
  FUN_10898fb3c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10898fb3c; end: 10898fb5f;  */

void FUN_10898fb3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10898fb60; end: 10898fb87;  */

void FUN_10898fb60(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898fb88; end: 10898fbcb;  */

long * FUN_10898fb88(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10898fbcc();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10898fca8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10898fbcc; end: 10898fc37;  */

void FUN_10898fbcc(long param_1)

{
  undefined1 in_CY;
  long lVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  long extraout_x9;
  
  FUN_10898fc38();
  func_0x00010898fc58(param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar1 = *(long *)(param_1 + 8);
  while (func_0x0001089908c8(lVar1), (bool)in_CY) {
    __ZdlPv(*extraout_x8);
    lVar1 = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 8) = lVar1;
  }
  if (extraout_x9 == 1) {
    uVar2 = 0x80;
  }
  else {
    if (extraout_x9 != 2) {
      return;
    }
    uVar2 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 10898fc38; end: 10898fc7b;  */

void FUN_10898fc38(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10898fc7c; end: 10898fca7;  */

long * FUN_10898fc7c(long *param_1)

{
  FUN_10898fca8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10898fca8; end: 10898fcdf;  */

void FUN_10898fca8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10898fce0; end: 10898fd33;  */

void FUN_10898fce0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10898fd34();
  if ((1 < uVar1) || (((param_2 & 1) == 0 && (uVar1 = param_1, FUN_10898fd34(), uVar1 != 0)))) {
    func_0x000108990894();
    FUN_10898fd4c(param_1);
  }
  return;
}



/* Entry: 10898fd34; end: 10898fd4b;  */

ulong FUN_10898fd34(ulong param_1)

{
  func_0x00010898fd58();
  return param_1 >> 9;
}



/* Entry: 10898fd4c; end: 10898fd8b;  */

void FUN_10898fd4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != lVar2 + -8) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10898fd8c; end: 10898fdcf;  */

void FUN_10898fd8c(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001089906a0();
  func_0x00010898fd58();
  if (param_1 == 0) {
    FUN_10898fdd0();
  }
  func_0x00010898faec();
  *param_2 = *unaff_x20;
  *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x19 + 0x28) + 1;
  return;
}



/* Entry: 10898fdd0; end: 10898ffc7;  */

void FUN_10898fdd0(long param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *plVar6;
  undefined8 *extraout_x8_00;
  long lVar7;
  undefined8 *puVar8;
  long *extraout_x9;
  long extraout_x9_00;
  ulong *unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long *plVar10;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar11;
  long unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [32];
  
  bVar2 = 0x1ff < *(ulong *)(param_1 + 0x20);
  lVar7 = *(ulong *)(param_1 + 0x20) - 0x200;
  uVar3 = lVar7 == 0;
  if (!bVar2) {
    lVar4 = param_1;
    func_0x000108990660(lVar7);
    if (bVar2) {
      func_0x0001089908b4();
      FUN_10899007c();
      func_0x00010899071c();
      func_0x00010899070c();
      func_0x0001089908a0();
      plVar9 = unaff_x20;
      plVar11 = unaff_x21;
      if (unaff_x28 == extraout_x9) {
        if (unaff_x27 == unaff_x26) {
          FUN_10899007c(1);
          func_0x000108990774();
          FUN_108990054();
          func_0x0001089906ac();
          func_0x0001089900d4();
          plVar9 = unaff_x26;
          unaff_x21 = unaff_x27;
          plVar11 = unaff_x22;
          unaff_x25 = unaff_x20;
        }
        else {
          func_0x000108990640();
        }
      }
      func_0x000108990838();
      while (unaff_x26 != *(long **)(param_1 + 8)) {
        plVar10 = plVar9;
        plVar6 = unaff_x21;
        if (unaff_x21 == plVar9) {
          bVar2 = plVar11 == unaff_x25;
          if (plVar11 < unaff_x25) {
            func_0x000108990790();
            plVar11 = plVar11 + extraout_x8;
            plVar6 = (long *)((long)plVar11 - extraout_x9_00);
            if (!bVar2) {
              func_0x000108990868();
            }
          }
          else {
            plVar6 = (long *)((long)unaff_x25 - (long)plVar9 >> 2);
            if ((long)unaff_x25 - (long)plVar9 == 0) {
              plVar6 = (long *)0x1;
            }
            FUN_10899007c(plVar6);
            func_0x000108990558((long)plVar6 * 2 + 6);
            FUN_108990054(auStack_90,plVar9,plVar11);
            func_0x000108990820();
            func_0x0001089900d4();
            plVar10 = unaff_x28;
            plVar11 = plVar9;
            unaff_x25 = unaff_x21;
          }
        }
        unaff_x26 = unaff_x26 + -1;
        unaff_x21 = plVar6 + -1;
        *unaff_x21 = *unaff_x26;
        plVar9 = plVar10;
      }
      func_0x0001089906cc();
      func_0x0001089900a8();
      func_0x0001089900d4(auStack_b8);
    }
    else {
      func_0x00010899070c();
      if (unaff_x21 == unaff_x27) {
        if (unaff_x26 == unaff_x22) {
          func_0x000108990738();
          FUN_10899007c();
          func_0x000108990558((long)unaff_x21 + 6);
          FUN_108990054(auStack_90,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
          func_0x0001089907d8();
          func_0x0001089900d4();
        }
        func_0x0001089906ec();
        FUN_10898ffc8();
      }
      else {
        *unaff_x27 = lVar4;
        func_0x000108990608();
      }
    }
    return;
  }
  func_0x000108990808();
  func_0x0001089906a0();
  func_0x0001089908dc();
  puVar8 = extraout_x8_00;
  if ((bool)uVar3) {
    uVar1 = *unaff_x19;
    uVar5 = unaff_x19[1];
    bVar2 = uVar5 == uVar1;
    if (uVar1 < uVar5) {
      func_0x0001089907ac();
      if (!bVar2) {
        func_0x000108990888();
        uVar5 = unaff_x19[1];
      }
      puVar8 = (undefined8 *)((long)unaff_x21 + (long)unaff_x22);
      unaff_x19[1] = uVar5 + unaff_x23 * 8;
      unaff_x19[2] = (ulong)puVar8;
    }
    else {
      lVar7 = (long)((long)extraout_x8_00 - uVar1) >> 2;
      if ((long)extraout_x8_00 - uVar1 == 0) {
        lVar7 = 1;
      }
      FUN_10899007c(lVar7);
      func_0x000108990680();
      FUN_108990054();
      func_0x0001089907f0();
      func_0x0001089900d4();
      puVar8 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar8 = unaff_x20;
  func_0x000108990608();
  return;
}



/* Entry: 10898ffc8; end: 108990053;  */

void FUN_10898ffc8(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  long lVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x0001089906a0();
  func_0x0001089908dc();
  puVar5 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x0001089907ac();
      if (!bVar2) {
        func_0x000108990888();
        uVar3 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(unaff_x21 + unaff_x22);
      unaff_x19[1] = uVar3 + unaff_x23 * 8;
      unaff_x19[2] = (ulong)puVar5;
    }
    else {
      lVar4 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        lVar4 = 1;
      }
      FUN_10899007c(lVar4);
      func_0x000108990680();
      FUN_108990054();
      func_0x0001089907f0();
      func_0x0001089900d4();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  func_0x000108990608();
  return;
}



/* Entry: 108990054; end: 10899007b;  */

void FUN_108990054(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10899007c; end: 108990113;  */

long * FUN_10899007c(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x000108990850();
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108990114; end: 108990127;  */

/* WARNING: Removing unreachable block (ram,0x000108990154) */

void FUN_108990114(ulong param_1)

{
  ulong uVar1;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  uVar1 = param_1;
  FUN_10899017c();
  if (1 < uVar1) {
    func_0x000108990894();
    FUN_108990194(param_1);
  }
  return;
}



/* Entry: 108990128; end: 10899017b;  */

void FUN_108990128(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10899017c();
  if ((1 < uVar1) || (((param_2 & 1) == 0 && (uVar1 = param_1, FUN_10899017c(), uVar1 != 0)))) {
    func_0x000108990894();
    FUN_108990194(param_1);
  }
  return;
}



/* Entry: 10899017c; end: 108990193;  */

ulong FUN_10899017c(ulong param_1)

{
  func_0x0001089901a0();
  return param_1 >> 8;
}



/* Entry: 108990194; end: 1089901cf;  */

void FUN_108990194(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != lVar2 + -8) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1089901d0; end: 108990213;  */

void FUN_1089901d0(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x0001089906a0();
  func_0x0001089901a0();
  if (param_1 == 0) {
    FUN_108990214();
  }
  func_0x00010898fc58();
  uVar1 = *unaff_x20;
  param_2[1] = unaff_x20[1];
  *param_2 = uVar1;
  *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x19 + 0x28) + 1;
  return;
}



/* Entry: 108990214; end: 10899040b;  */

void FUN_108990214(long param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *plVar6;
  undefined8 *extraout_x8_00;
  long lVar7;
  undefined8 *puVar8;
  long *extraout_x9;
  long extraout_x9_00;
  ulong *unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long *plVar10;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar11;
  long unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [32];
  
  bVar2 = 0xff < *(ulong *)(param_1 + 0x20);
  lVar7 = *(ulong *)(param_1 + 0x20) - 0x100;
  uVar3 = lVar7 == 0;
  if (!bVar2) {
    lVar4 = param_1;
    func_0x000108990660(lVar7);
    if (bVar2) {
      func_0x0001089908b4();
      FUN_1089904c0();
      func_0x00010899071c();
      func_0x00010899070c();
      func_0x0001089908a0();
      plVar9 = unaff_x20;
      plVar11 = unaff_x21;
      if (unaff_x28 == extraout_x9) {
        if (unaff_x27 == unaff_x26) {
          FUN_1089904c0(1);
          func_0x000108990774();
          FUN_108990498();
          func_0x0001089906ac();
          func_0x000108990518();
          plVar9 = unaff_x26;
          unaff_x21 = unaff_x27;
          plVar11 = unaff_x22;
          unaff_x25 = unaff_x20;
        }
        else {
          func_0x000108990640();
        }
      }
      func_0x000108990838();
      while (unaff_x26 != *(long **)(param_1 + 8)) {
        plVar10 = plVar9;
        plVar6 = unaff_x21;
        if (unaff_x21 == plVar9) {
          bVar2 = plVar11 == unaff_x25;
          if (plVar11 < unaff_x25) {
            func_0x000108990790();
            plVar11 = plVar11 + extraout_x8;
            plVar6 = (long *)((long)plVar11 - extraout_x9_00);
            if (!bVar2) {
              func_0x000108990868();
            }
          }
          else {
            plVar6 = (long *)((long)unaff_x25 - (long)plVar9 >> 2);
            if ((long)unaff_x25 - (long)plVar9 == 0) {
              plVar6 = (long *)0x1;
            }
            FUN_1089904c0(plVar6);
            func_0x000108990558((long)plVar6 * 2 + 6);
            FUN_108990498(auStack_90,plVar9,plVar11);
            func_0x000108990820();
            func_0x000108990518();
            plVar10 = unaff_x28;
            plVar11 = plVar9;
            unaff_x25 = unaff_x21;
          }
        }
        unaff_x26 = unaff_x26 + -1;
        unaff_x21 = plVar6 + -1;
        *unaff_x21 = *unaff_x26;
        plVar9 = plVar10;
      }
      func_0x0001089906cc();
      func_0x0001089904ec();
      func_0x000108990518(auStack_b8);
    }
    else {
      func_0x00010899070c();
      if (unaff_x21 == unaff_x27) {
        if (unaff_x26 == unaff_x22) {
          func_0x000108990738();
          FUN_1089904c0();
          func_0x000108990558((long)unaff_x21 + 6);
          FUN_108990498(auStack_90,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
          func_0x0001089907d8();
          func_0x000108990518();
        }
        func_0x0001089906ec();
        FUN_10899040c();
      }
      else {
        *unaff_x27 = lVar4;
        func_0x000108990608();
      }
    }
    return;
  }
  func_0x000108990808();
  func_0x0001089906a0();
  func_0x0001089908dc();
  puVar8 = extraout_x8_00;
  if ((bool)uVar3) {
    uVar1 = *unaff_x19;
    uVar5 = unaff_x19[1];
    bVar2 = uVar5 == uVar1;
    if (uVar1 < uVar5) {
      func_0x0001089907ac();
      if (!bVar2) {
        func_0x000108990888();
        uVar5 = unaff_x19[1];
      }
      puVar8 = (undefined8 *)((long)unaff_x21 + (long)unaff_x22);
      unaff_x19[1] = uVar5 + unaff_x23 * 8;
      unaff_x19[2] = (ulong)puVar8;
    }
    else {
      lVar7 = (long)((long)extraout_x8_00 - uVar1) >> 2;
      if ((long)extraout_x8_00 - uVar1 == 0) {
        lVar7 = 1;
      }
      FUN_1089904c0(lVar7);
      func_0x000108990680();
      FUN_108990498();
      func_0x0001089907f0();
      func_0x000108990518();
      puVar8 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar8 = unaff_x20;
  func_0x000108990608();
  return;
}



/* Entry: 10899040c; end: 108990497;  */

void FUN_10899040c(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  long lVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x0001089906a0();
  func_0x0001089908dc();
  puVar5 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x0001089907ac();
      if (!bVar2) {
        func_0x000108990888();
        uVar3 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(unaff_x21 + unaff_x22);
      unaff_x19[1] = uVar3 + unaff_x23 * 8;
      unaff_x19[2] = (ulong)puVar5;
    }
    else {
      lVar4 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        lVar4 = 1;
      }
      FUN_1089904c0(lVar4);
      func_0x000108990680();
      FUN_108990498();
      func_0x0001089907f0();
      func_0x000108990518();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  func_0x000108990608();
  return;
}



/* Entry: 108990498; end: 1089904bf;  */

void FUN_108990498(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1089904c0; end: 108990557;  */

long * FUN_1089904c0(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x000108990850();
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108990558; end: 1089908ef;  */

void FUN_108990558(void)

{
  return;
}



/* Entry: 1089908f0; end: 108990977;  */

void FUN_1089908f0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  
  puVar4 = param_2;
  FUN_108990a54();
  plVar3 = (long *)*puVar4;
  (**(code **)(*plVar3 + 0x10))();
  *(int *)(unaff_x19 + 8) = (int)plVar3;
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x18))();
  *(int *)(unaff_x19 + 0xc) = (int)plVar3;
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x20))();
  *(long **)(unaff_x19 + 0x10) = plVar3;
  *(undefined8 *)(unaff_x19 + 0x18) = *param_2;
  lVar5 = param_2[1];
  *(long *)(unaff_x19 + 0x20) = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 108990978; end: 1089909a7;  */

void FUN_108990978(void)

{
  long unaff_x19;
  
  FUN_108990a54();
  FUN_1089909a8();
  func_0x000108944fd0(unaff_x19 + 0x18);
  return;
}



/* Entry: 1089909a8; end: 1089909f7;  */

void FUN_1089909a8(long param_1)

{
  long *plVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_108990a10((long *)(param_1 + 0x18),&uStack_30);
    func_0x000108944fd0(&uStack_30);
  }
  return;
}



/* Entry: 1089909f8; end: 1089909fb;  */

void FUN_1089909f8(void)

{
  long unaff_x19;
  
  FUN_108990a54();
  FUN_1089909a8();
  func_0x000108944fd0(unaff_x19 + 0x18);
  return;
}



/* Entry: 1089909fc; end: 108990a0f;  */

void FUN_1089909fc(void)

{
  FUN_108990978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108990a10; end: 108990a53;  */

undefined8 * FUN_108990a10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000108944fd0(&uStack_30);
  return param_1;
}



/* Entry: 108990a54; end: 108990a7b;  */

void FUN_108990a54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3168;
  return;
}



/* Entry: 108990a7c; end: 108990cb7;  */

undefined8 *
FUN_108990a7c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  *param_1 = &PTR_FUN_110aa3198;
  uVar7 = *param_2;
  param_1[1] = uVar7;
  lVar6 = param_2[1];
  param_1[2] = lVar6;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = param_1[1];
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_9;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = &PTR_FUN_110aa3240;
  puVar4[1] = uVar7;
  puVar4[2] = param_6;
  puVar4[3] = param_7;
  puVar4[4] = param_8;
  lVar6 = param_3[1];
  uVar7 = *param_3;
  puVar4[6] = param_3[1];
  puVar4[5] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = param_4[1];
  uVar7 = *param_4;
  puVar4[8] = param_4[1];
  puVar4[7] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(puVar4 + 9) = param_9;
  puVar4[10] = param_11;
  uVar7 = 0x68;
  __Znwm(0x68);
  puStack_70 = puVar4;
  FUN_108993244();
  if (puStack_70 != (undefined8 *)0x0) {
    func_0x0001089910a0();
  }
  uStack_80 = 0;
  FUN_108990ee8(param_1 + 3,uVar7);
  FUN_108990f18(&uStack_80);
  puVar4 = (undefined8 *)0x98;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar5 = puVar4 + 3;
  *puVar4 = &PTR_FUN_110aa3290;
  FUN_108991aa0(puVar5,param_6,param_5,param_7,param_3,param_9);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_68 = param_1[5];
  puStack_70 = (undefined8 *)param_1[4];
  param_1[4] = puVar5;
  param_1[5] = puVar4;
  func_0x000108990f3c(&puStack_70);
  func_0x000108990f3c(&uStack_80);
  return param_1;
}



/* Entry: 108990cb8; end: 108990cfb;  */

undefined8 * FUN_108990cb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3198;
  func_0x000108990f3c(param_1 + 4);
  func_0x000108990f18(param_1 + 3);
  FUN_10897b374(param_1 + 1);
  return param_1;
}



/* Entry: 108990cfc; end: 108990cff;  */

undefined8 * FUN_108990cfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3198;
  func_0x000108990f3c(param_1 + 4);
  func_0x000108990f18(param_1 + 3);
  FUN_10897b374(param_1 + 1);
  return param_1;
}



/* Entry: 108990d00; end: 108990d13;  */

void FUN_108990d00(void)

{
  FUN_108990cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108990d14; end: 108990d43;  */

void FUN_108990d14(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x60);
  if (param_2 == 0) {
    pcVar3 = (code *)(&PTR_FUN_110aa3478)[*(byte *)(lVar2 + 0xc)];
    lVar1 = -2;
  }
  else {
    pcVar3 = (code *)(&PTR_FUN_110aa3440)[*(byte *)(lVar2 + 0xc)];
    lVar1 = -1;
  }
  (*pcVar3)(&stack0xfffffffffffffff0 + lVar1,lVar2 + 8,lVar2,lVar2 + 8,lVar2 + 0xc);
  return;
}



/* Entry: 108990d44; end: 108990d87;  */

void FUN_108990d44(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x58);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar2 + 0x68);
  while (lVar3 != lVar2 + 0x70) {
    FUN_108992698(lVar2,lVar3 + 0x28,param_2);
    func_0x000107c27be0();
  }
  return;
}



/* Entry: 108990d88; end: 108990d97;  */

void FUN_108990d88(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x48) = param_2;
  if (*(long **)(lVar1 + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001089935a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar1 + 0x58) + 0x28))();
    return;
  }
  return;
}



/* Entry: 108990d98; end: 108990e07;  */

void FUN_108990d98(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_10899161c(*(undefined8 *)(param_1 + 8));
  FUN_1089934e0(*(undefined8 *)(param_1 + 0x18),param_3,param_4);
  if (*(char *)(param_3 + 0x28) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    func_0x000108990e7c(param_3);
    func_0x000108990e08(uVar1,param_3);
    *(undefined4 *)(lVar2 + 8) = uVar1;
  }
  return;
}



/* Entry: 108990e08; end: 108990e93;  */

ulong FUN_108990e08(ulong param_1,uint *param_2)

{
  undefined4 uStack_14;
  
  switch(param_1 & 0xffffffff) {
  case 0:
    uStack_14 = 0;
    break;
  case 1:
    uStack_14 = 1;
    break;
  case 2:
    uStack_14 = 10;
    break;
  case 3:
    uStack_14 = 0xc;
    break;
  default:
    return param_1;
  }
  FUN_1089806ec(param_2,&uStack_14);
  return (ulong)*param_2;
}



/* Entry: 108990e94; end: 108990ee7;  */

void FUN_108990e94(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10899341c(*(undefined8 *)(param_1 + 0x18));
  FUN_108991b90(*(undefined8 *)(param_1 + 0x20));
  FUN_108990ee8((undefined8 *)(param_1 + 0x18),0);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x000108990f3c(&uStack_30);
  return;
}



/* Entry: 108990ee8; end: 108990f0f;  */

void FUN_108990ee8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010899335c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108990f10; end: 108990f17;  */

undefined8 FUN_108990f10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108990f18; end: 108990f63;  */

undefined8 FUN_108990f18(undefined8 param_1)

{
  FUN_108990ee8(param_1,0);
  return param_1;
}



/* Entry: 108990f64; end: 108991013;  */

void FUN_108990f64(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x188;
  __Znwm();
  FUN_108993a60();
  *param_1 = uVar1;
  return;
}



/* Entry: 108991014; end: 10899104f;  */

undefined8 * FUN_108991014(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3240;
  func_0x000104c05328(param_1 + 7);
  func_0x00010897b3e4(param_1 + 5);
  return param_1;
}


