/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100604518; end: 100604543;  */

undefined8 * FUN_100604518(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_40 [16];
  
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 0x32aaaba7;
  puVar1 = param_1 + 9;
  param_1[10] = 0;
  *puVar1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  FUN_100604584(puVar1);
  FUN_100604710(auStack_40,puVar1);
  FUN_100604780(param_1 + 0xe,auStack_40);
  func_0x000100604708();
  return param_1;
}



/* Entry: 100604544; end: 100604583;  */

void FUN_100604544(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  
  func_0x000100604530();
  FUN_1006046d8(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    do {
      FUN_1005f2574();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 100604584; end: 1006045a3;  */

void FUN_100604584(undefined8 *param_1)

{
  FUN_100604544();
  *param_1 = &PTR_DAT_110895c68;
  return;
}



/* Entry: 1006045a4; end: 100604657;  */

undefined8 * FUN_1006045a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_40 [16];
  
  *param_1 = 0x32aaaba7;
  puVar1 = param_1 + 9;
  param_1[10] = 0;
  *puVar1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  FUN_100604584(puVar1);
  FUN_100604710(auStack_40,puVar1);
  FUN_100604780(param_1 + 0xe,auStack_40);
  func_0x000100604708();
  return param_1;
}



/* Entry: 100604658; end: 1006046d7;  */

/* WARNING: Removing unreachable block (ram,0x0001006046f8) */

void FUN_100604658(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb0;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110895cd0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0x3cb0b1bb;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0x32aaaba7;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  param_1[1] = puVar1;
  puVar1[3] = 0;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 1006046d8; end: 1006046f3;  */

void FUN_1006046d8(void)

{
  undefined1 uStack_11;
  
  FUN_100604658(&uStack_11);
  return;
}



/* Entry: 1006046f4; end: 10060470f;  */

void FUN_1006046f4(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100604710; end: 10060475b;  */

void FUN_100604710(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar2;
  param_1[1] = lVar3;
  func_0x000100604708();
  return;
}



/* Entry: 10060475c; end: 10060477f;  */

void FUN_10060475c(long param_1)

{
  FUN_1005f25d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100604780; end: 100604a2b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_100604780(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  int extraout_w10;
  undefined8 *puVar6;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_68 [5];
  
  puVar3 = (undefined8 *)0x90;
  func_0x000107c60e20();
  plVar5 = puVar3 + 1;
  *plVar5 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110895d20;
  puVar6 = puVar3 + 3;
  puVar3[4] = 0;
  *puVar6 = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0x11] = 0;
  func_0x000107c60d30(puVar6);
  *(undefined1 *)(puVar3 + 0xb) = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *param_1 = puVar6;
  param_1[1] = puVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  puStack_e0 = puVar6;
  puStack_d8 = puVar3;
  FUN_100604a3c(&puStack_a0,param_2,alStack_68 + 1);
  FUN_100604a9c(alStack_68 + 3,&puStack_a0);
  FUN_10060475c(&puStack_a0);
  FUN_10060475c(alStack_68 + 1);
  FUN_1003b69cc(alStack_68);
  FUN_1003b6c18(&uStack_80,alStack_68[0]);
  lStack_90 = alStack_68[0];
  puStack_e0 = (undefined8 *)0x0;
  puStack_d8 = (undefined8 *)0x0;
  alStack_68[0] = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_c0 = alStack_68[3] + 0x48;
  lStack_b8 = CONCAT71(lStack_b8._1_7_,1);
  puStack_a0 = puVar6;
  puStack_98 = puVar3;
  func_0x000107c60d88();
  lVar4 = alStack_68[3];
  FUN_100604ae0();
  if ((int)lVar4 == 0) {
    puVar3 = (undefined8 *)0x20;
    func_0x000107c60e20();
    lVar4 = lStack_90;
    *puVar3 = &PTR_DAT_110895d70;
    puVar3[2] = puStack_98;
    puVar3[1] = puStack_a0;
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    lStack_90 = 0;
    puVar3[3] = lVar4;
    plVar5 = *(long **)(alStack_68[3] + 0x90);
    *(undefined8 **)(alStack_68[3] + 0x90) = puVar3;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  else {
    FUN_100604a9c(&lStack_b0,alStack_68 + 3);
  }
  FUN_1000df5a0(&lStack_c0);
  if (lStack_b0 != 0) {
    lStack_c0 = lStack_b0;
    lStack_b8 = lStack_a8;
    if (lStack_a8 != 0) {
      do {
        FUN_1005f2574();
      } while (extraout_w10 != 0);
    }
    FUN_1006052a0(&puStack_a0);
    func_0x000100605a60();
  }
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x000100604b30();
  FUN_100604b38(&puStack_a0);
  FUN_1003b6c64(&uStack_80);
  lVar4 = alStack_68[0];
  alStack_68[0] = 0;
  if (lVar4 != 0) {
    func_0x00010552fde8();
  }
  FUN_10060475c(alStack_68 + 3);
  FUN_1003b6c64(&uStack_d0);
  func_0x000100604b60(&puStack_e0);
  return param_1;
}



/* Entry: 100604a2c; end: 100604a3b;  */

void FUN_100604a2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbccec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112__get_sp_mutEPKv_110346250)();
  return;
}



/* Entry: 100604a3c; end: 100604a6f;  */

void FUN_100604a3c(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  
  FUN_100604a2c();
  func_0x000107c60dc4();
  FUN_100604a70();
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 100604a70; end: 100604a9b;  */

void FUN_100604a70(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *unaff_x19;
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x19[1] = uVar3;
  *unaff_x19 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 100604a9c; end: 100604ad3;  */

undefined8 * FUN_100604a9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000100604a94();
  return param_1;
}



/* Entry: 100604ad4; end: 100604adf;  */

void FUN_100604ad4(void)

{
  return;
}



/* Entry: 100604ae0; end: 100604b27;  */

bool FUN_100604ae0(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x88) != 0;
    FUN_100604b28();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 100604b28; end: 100604b37;  */

void FUN_100604b28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptrD1Ev_110346198)(&stack0x00000008);
  return;
}



/* Entry: 100604b38; end: 100604b87;  */

long FUN_100604b38(long param_1)

{
  FUN_1003b6cec(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100604b88; end: 100604b93;  */

void FUN_100604b88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)();
  return;
}



/* Entry: 100604b94; end: 100604c67;  */

void FUN_100604b94(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined1 auStack_40 [16];
  
  iVar1 = (int)auStack_40;
  FUN_100604b88();
  if (*(long *)(unaff_x19 + 0x40) == 0) {
    FUN_100604c68(auStack_40,unaff_x19 + 0x70);
    FUN_1006050c0();
    func_0x000100604708();
    if (iVar1 == 0) goto LAB_100604be0;
  }
  func_0x00010552fc80();
LAB_100604be0:
  lVar2 = *unaff_x20;
  *(long *)(unaff_x19 + 0x40) = lVar2;
  if (lVar2 == 0) {
    func_0x000107c60c20(auStack_40,&UNK_10f2d0272);
    func_0x00010552fd34(unaff_x19 + 0x48,auStack_40);
    func_0x000107c60c30(auStack_40);
  }
  else {
    FUN_100605218(unaff_x19 + 0x48);
  }
  func_0x000100605ad0();
  return;
}



/* Entry: 100604c68; end: 10060502b;  */

/* WARNING: Possible PIC construction at 0x000100604de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100604dec) */

void FUN_100604c68(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  ulong uVar9;
  int extraout_w11;
  int extraout_w11_00;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  long lVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [8];
  
  puVar3 = (undefined8 *)0x70;
  func_0x000107c60e20();
  *puVar3 = FUN_100605674;
  puVar3[1] = &UNK_10552fd98;
  FUN_100604584(puVar3 + 2);
  puVar14 = puVar3 + 7;
  *(undefined1 *)puVar14 = 0;
  *(undefined1 *)(puVar3 + 10) = 0;
  FUN_100604710(param_1,puVar3 + 2);
  puVar4 = param_2;
  FUN_10060502c();
  uVar5 = *param_2;
  if ((int)puVar4 == 0) {
    lVar10 = param_2[1];
    puVar3[0xb] = uVar5;
    puVar3[0xc] = lVar10;
    if (lVar10 != 0) {
      do {
        FUN_1005f2574();
      } while (extraout_w10 != 0);
    }
    puVar4 = puVar3 + 0xb;
    FUN_10060502c();
    if (((ulong)puVar4 & 1) == 0) {
      *(undefined1 *)(puVar3 + 0xd) = 0;
      uVar5 = puVar3[0xb];
      func_0x000107c60d28(uVar5);
      lVar10 = puVar3[0xb];
      if ((*(byte *)(lVar10 + 0x58) & 1) == 0) {
        puVar4 = *(undefined8 **)(lVar10 + 0x68);
        if (puVar4 < *(undefined8 **)(lVar10 + 0x70)) {
          puVar14 = puVar4 + 1;
          *puVar4 = puVar3;
        }
        else {
          lVar12 = *(long *)(lVar10 + 0x60);
          lVar13 = (long)puVar4 - lVar12;
          uVar1 = (lVar13 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
            func_0x00010552fc6c();
LAB_100604f6c:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100604f70);
            (*pcVar2)();
          }
          uVar7 = (long)*(undefined8 **)(lVar10 + 0x70) - lVar12;
          uVar9 = (long)uVar7 >> 2;
          if (uVar9 <= uVar1) {
            uVar9 = uVar1;
          }
          if (0x7ffffffffffffff7 < uVar7) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            lVar6 = 0;
          }
          else {
            if (uVar9 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_100604f6c;
            }
            lVar6 = uVar9 << 3;
            func_0x000107c60e20();
          }
          puVar4 = (undefined8 *)(lVar6 + lVar13);
          puVar14 = puVar4 + 1;
          *puVar4 = puVar3;
          func_0x000107c610b4(puVar4 + -(lVar13 >> 3),lVar12,lVar13);
          *(undefined8 **)(lVar10 + 0x60) = puVar4 + -(lVar13 >> 3);
          *(undefined8 **)(lVar10 + 0x68) = puVar14;
          *(ulong *)(lVar10 + 0x70) = lVar6 + uVar9 * 8;
          if (lVar12 != 0) {
            func_0x000107c60e14(lVar12);
          }
        }
        *(undefined8 **)(lVar10 + 0x68) = puVar14;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar5);
      return;
    }
    uVar5 = puVar3[0xb];
    FUN_100605628(uVar5);
    FUN_10060589c(puVar14,uVar5);
    func_0x00010552fe60();
  }
  else {
    FUN_100605628();
    FUN_10060589c(puVar14,uVar5);
  }
  FUN_1006058e8();
  if ((bool)in_ZR) {
    func_0x000107c60c40(puVar3 + 3);
    func_0x000107c60dc4();
    func_0x000100605900();
    func_0x000107c60d88(unaff_x23 + 9);
    uVar5 = *puVar14;
    if (*(char *)(unaff_x23 + 2) == '\x01') {
      uVar8 = puVar3[8];
      *puVar14 = 0;
      puVar3[8] = 0;
      lVar10 = unaff_x23[1];
      *unaff_x23 = uVar5;
      unaff_x23[1] = uVar8;
      if (lVar10 != 0) {
        do {
          func_0x000100605910();
        } while (extraout_w11 != 0);
        if (extraout_x9 == 0) {
          func_0x00010552fdfc();
          func_0x000107c60d68(lVar10);
        }
      }
    }
    else {
      *unaff_x23 = uVar5;
      unaff_x23[1] = puVar3[8];
      *puVar14 = 0;
      puVar3[8] = 0;
      *(undefined1 *)(unaff_x23 + 2) = 1;
    }
    plVar11 = (long *)unaff_x23[0x12];
    unaff_x23[0x12] = 0;
    func_0x000107c60d8c(unaff_x23 + 9);
    if (plVar11 == (long *)0x0) {
      func_0x000107c60d48(unaff_x23 + 3);
    }
    else {
      (**(code **)(*plVar11 + 0x10))(plVar11,&stack0xffffffffffffff90);
      func_0x00010552fe0c();
    }
    if (param_2 != (undefined8 *)0x0) {
      do {
        func_0x000100605910();
      } while (extraout_w11_00 != 0);
      if (extraout_x9_00 == 0) {
        func_0x00010552fdfc();
        func_0x000107c60d68(param_2);
      }
    }
  }
  else {
    func_0x000107c60c14(auStack_78,puVar14);
    func_0x00010552faa8(puVar3 + 2,&stack0xffffffffffffff90);
    func_0x00010552fdf4();
  }
  func_0x00010552fe68();
  FUN_100605a54();
  return;
}



/* Entry: 10060502c; end: 100605063;  */

undefined1 FUN_10060502c(long *param_1)

{
  undefined1 uVar1;
  
  func_0x000107c60d28(*param_1);
  uVar1 = *(undefined1 *)(*param_1 + 0x58);
  FUN_100605064();
  return uVar1;
}



/* Entry: 100605064; end: 10060506b;  */

void FUN_100605064(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 10060506c; end: 1006050bf;  */

void FUN_10060506c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_2;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1005f2574();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 1006050c0; end: 100605127;  */

long FUN_1006050c0(void)

{
  long lVar1;
  long lStack_40;
  undefined1 uStack_38;
  long alStack_30 [2];
  
  FUN_10060506c(alStack_30);
  lStack_40 = alStack_30[0] + 0x48;
  uStack_38 = 1;
  func_0x000107c60d88();
  lVar1 = alStack_30[0];
  FUN_100604ae0(alStack_30[0]);
  FUN_1000df5a0(&lStack_40);
  FUN_100605128();
  return lVar1;
}



/* Entry: 100605128; end: 10060513f;  */

void FUN_100605128(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000010;
  FUN_1005f25d0();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100605140; end: 100605217;  */

void FUN_100605140(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  long *plVar3;
  
  func_0x000100605130();
  FUN_100605238();
  func_0x000100605128();
  func_0x000100604708();
  func_0x000107c60d88(0x48);
  puVar2 = (undefined8 *)*param_2;
  lVar1 = 0;
  if (cRam0000000000000010 == '\x01') {
    FUN_1005f2584();
    lVar1 = 0;
  }
  else {
    uRam0000000000000008 = puVar2[1];
    uRam0000000000000000 = *puVar2;
    if (puVar2[1] != 0) {
      do {
        FUN_1005f2574();
      } while (extraout_w10 != 0);
    }
    *(undefined1 *)(lVar1 + 0x10) = 1;
  }
  plVar3 = *(long **)(lVar1 + 0x90);
  *(undefined8 *)(lVar1 + 0x90) = 0;
  func_0x000107c60d8c(0x48);
  if (plVar3 == (long *)0x0) {
    func_0x00010552fe54();
  }
  else {
    func_0x000100605244(*(undefined8 *)(*plVar3 + 0x10));
    func_0x000100605a74();
  }
  func_0x000100605a60();
  return;
}



/* Entry: 100605218; end: 100605237;  */

void FUN_100605218(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_100605140(param_1,&uStack_18);
  return;
}



/* Entry: 100605238; end: 10060524f;  */

undefined1 * FUN_100605238(void)

{
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = in_stack_00000018;
  uStack0000000000000020 = in_stack_00000010;
  func_0x000100604a94();
  return (undefined1 *)&stack0x00000020;
}



/* Entry: 100605250; end: 10060529f;  */

void FUN_100605250(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_1005f2574();
    } while (extraout_w10 != 0);
  }
  FUN_1006052a0(param_1 + 8);
  func_0x000100604708();
  return;
}



/* Entry: 1006052a0; end: 10060549f;  */

void FUN_1006052a0(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 extraout_w8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  
  if (param_3 != 0) {
    do {
      FUN_1005f2574();
    } while (extraout_w10 != 0);
    do {
      FUN_1005f2574();
    } while (extraout_w10_00 != 0);
  }
  uStack_70 = param_2;
  lStack_68 = param_3;
  func_0x000107c60d28(*param_1);
  FUN_1006054a0(auStack_40,&uStack_70);
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x58) == '\x01') {
    if (*(char *)(lVar1 + 0x50) == '\x01') {
      func_0x00010552fe7c();
      func_0x00010552fbb0();
    }
    else {
      func_0x000107c60c18(lVar1 + 0x40);
      func_0x000100605610();
    }
  }
  else {
    func_0x000100605610();
    *(undefined1 *)(lVar1 + 0x58) = extraout_w8;
  }
  FUN_1005f25dc(auStack_40);
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + 0x60);
  uStack_50 = *(undefined8 *)(lVar1 + 0x70);
  puVar3 = *(undefined8 **)(lVar1 + 0x68);
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  puStack_60 = puVar2;
  puStack_58 = puVar3;
  FUN_100605064();
  for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)*puVar2)();
  }
  FUN_1003b8240(&puStack_60);
  func_0x000100604b30();
  func_0x000100605a60();
  func_0x0001003b8370(param_1[2]);
  return;
}



/* Entry: 1006054a0; end: 1006055b7;  */

void FUN_1006054a0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  puStack_30 = (undefined8 *)0x0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_100604a3c(&puStack_40,param_2,&uStack_50);
  FUN_100604a9c(&puStack_30,&puStack_40);
  FUN_10060475c(&puStack_40);
  FUN_1006055b8();
  puStack_40 = puStack_30 + 9;
  uStack_38 = 1;
  func_0x000107c60d88();
  puStack_60 = puStack_30;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1006055c8(puStack_30 + 3,&puStack_40,&puStack_60);
  FUN_100605608();
  if (puStack_30[0x11] == 0) {
    uVar5 = *puStack_30;
    param_1[1] = puStack_30[1];
    *param_1 = uVar5;
    *puStack_30 = 0;
    puStack_30[1] = 0;
    FUN_1000df5a0(&puStack_40);
    FUN_10060475c(&puStack_30);
    return;
  }
  func_0x000107c60c14(auStack_68);
  func_0x000107c60e08(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10060557c);
  (*pcVar4)();
}



/* Entry: 1006055b8; end: 1006055c7;  */

void FUN_1006055b8(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000020;
  FUN_1005f25d0();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006055c8; end: 100605607;  */

void FUN_1006055c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, func_0x0001006055c0(), (uVar1 & 1) == 0) {
    func_0x000107c60d4c(param_1,param_2);
  }
  return;
}



/* Entry: 100605608; end: 100605627;  */

void FUN_100605608(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000010;
  FUN_1005f25d0();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100605628; end: 100605673;  */

long FUN_100605628(long param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    return param_1 + 0x40;
  }
  func_0x000107c60c14(auStack_28,param_1 + 0x40);
  func_0x000107c60e08(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100605668);
  (*pcVar1)();
}



/* Entry: 100605674; end: 100605877;  */

void FUN_100605674(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x21;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x23;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  FUN_100605628(uVar1);
  FUN_10060589c(param_1 + 0x38,uVar1);
  func_0x000100604b60((undefined8 *)(param_1 + 0x58));
  FUN_1006058e8();
  if ((bool)in_ZR) {
    func_0x000107c60c40(param_1 + 0x18);
    func_0x000107c60dc4();
    func_0x000100605900();
    func_0x000107c60d88(unaff_x23 + 9);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    if (*(char *)(unaff_x23 + 2) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      lVar3 = unaff_x23[1];
      *unaff_x23 = uVar1;
      unaff_x23[1] = uVar2;
      if (lVar3 != 0) {
        do {
          func_0x000100605910();
        } while (extraout_w11 != 0);
        if (extraout_x9 == 0) {
          func_0x00010552fdc8();
          func_0x00010552fe2c();
        }
      }
    }
    else {
      *unaff_x23 = uVar1;
      unaff_x23[1] = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(unaff_x23 + 2) = 1;
    }
    plVar4 = (long *)unaff_x23[0x12];
    unaff_x23[0x12] = 0;
    func_0x000107c60d8c(unaff_x23 + 9);
    if (plVar4 == (long *)0x0) {
      func_0x000107c60d48(unaff_x23 + 3);
    }
    else {
      (**(code **)(*plVar4 + 0x10))(plVar4,&stack0xffffffffffffffb0);
      func_0x00010552fe1c();
    }
    if (unaff_x21 != 0) {
      do {
        func_0x000100605910();
      } while (extraout_w11_00 != 0);
      if (extraout_x9_00 == 0) {
        func_0x00010552fdc8();
        func_0x00010552fe2c();
      }
    }
  }
  else {
    func_0x000107c60c14(auStack_58,param_1 + 0x38);
    func_0x00010552faa8(param_1 + 0x10,&stack0xffffffffffffffb0);
    func_0x00010552fdf4();
  }
  FUN_100605968(param_1 + 0x10);
  FUN_100605a54();
  return;
}



/* Entry: 100605878; end: 10060589b;  */

void FUN_100605878(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100605920();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10060589c; end: 1006058e7;  */

undefined8 * FUN_10060589c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  FUN_100605878();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1005f2574();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



/* Entry: 1006058e8; end: 10060591f;  */

void FUN_1006058e8(void)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = 0;
  *(undefined1 *)(unaff_x19 + 0xd) = 1;
  return;
}



/* Entry: 100605920; end: 100605967;  */

void FUN_100605920(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1005f25dc();
  }
  else {
    func_0x000107c60c18();
  }
  return;
}



/* Entry: 100605968; end: 10060598f;  */

long FUN_100605968(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000100605948(param_1 + 0x28);
  func_0x000100604530();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x00010552fa24(unaff_x19,&ppuStack_28);
    func_0x000107c60dfc(&ppuStack_28);
  }
  FUN_10060475c(unaff_x19 + 0x18);
  FUN_10060475c((long *)(param_1 + 8));
  return unaff_x19;
}



/* Entry: 100605990; end: 1006059f3;  */

void FUN_100605990(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000100604530();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x00010552fa24();
    func_0x000107c60dfc(&ppuStack_28);
  }
  FUN_10060475c(unaff_x19 + 0x18);
  FUN_10060475c((long *)(param_1 + 8));
  return;
}



/* Entry: 1006059f4; end: 100605a53;  */

long FUN_1006059f4(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    func_0x00010552fde8();
  }
  func_0x000107c60c18(param_1 + 0xa0);
  func_0x000107c60d94(param_1 + 0x60);
  lVar1 = param_1 + 0x30;
  func_0x000107c60d50(lVar1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x18;
    FUN_1005f25d0();
    if (param_1 != 0) {
      func_0x0001000df548();
    }
    return unaff_x19;
  }
  return lVar1;
}



/* Entry: 100605a54; end: 100605a83;  */

void FUN_100605a54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100605a84; end: 100605aaf;  */

undefined8 * FUN_100605a84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110895d70;
  FUN_100604b38(param_1 + 1);
  return param_1;
}



/* Entry: 100605ab0; end: 100605ac3;  */

void FUN_100605ab0(void)

{
  FUN_100605a84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100605ac4; end: 100605af7;  */

void FUN_100605ac4(void)

{
  return;
}



/* Entry: 100605af8; end: 100605c3f;  */

void FUN_100605af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar1 = param_2;
  func_0x000107c3ebcc();
  if ((int)uVar1 == 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    puStack_48 = &UNK_105528a34;
    puStack_40 = &UNK_105528a44;
    uStack_38 = 0;
    func_0x000107c4c790(param_3);
    puVar2 = (undefined *)puStack_58[5];
    func_0x000107c61174(puVar2);
    func_0x000107c60bcc(&uStack_60,8);
    func_0x000107c61170(uStack_38);
  }
  else {
    puVar2 = PTR_PTR_1126ba650;
    func_0x000107c5e40c(PTR_PTR_1126ba650);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100605c40; end: 100605ceb; -[SCPureArroyoABChangeEvent matchUpgrade:downgrade:unchanged:] */

/* WARNING: Possible PIC construction at 0x000100605ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100605cd0) */

void FUN_100605c40(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_100605cc8;
    pcVar2 = *(code **)(param_5 + 0x10);
    param_4 = param_5;
  }
  else {
    if (lVar1 != 1) {
      if ((lVar1 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_100605cc8;
    }
    if (param_4 == 0) goto LAB_100605cc8;
    pcVar2 = *(code **)(param_4 + 0x10);
  }
  (*pcVar2)(param_4);
LAB_100605cc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100605cec; end: 100605cfb;  */

void FUN_100605cec(void)

{
  return;
}



/* Entry: 100605cfc; end: 10060610f; -[SCNativeFeedManager initWithNativeSession:feedDataUpdateAnnouncer:friendsFeedReadyLogger:ghostToFeedLogger:graphene:friendsFeedGrapheneV2:friendsFeedEntryStore:friendsFeedLoadingStatusStream:userId:crashLogger:notificationPool:messagingExperimentService:networkConnectivityObservable:] */

undefined8 *
FUN_100605cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_70 = PTR_PTR_1126e8da8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0;
    func_0x000107c611a0(puVar1 + 1,param_3);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c3d740(puVar1[2]);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    uVar2 = param_11;
    func_0x000107c40794();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    func_0x000107c61170();
    FUN_10060654c();
    func_0x000107c61180();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(puVar1[8]);
    puVar1[9] = 0;
    func_0x000107c61174(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_80,puVar1);
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar2 = param_15;
    func_0x000107c5c320(param_15);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c3bd90(puVar1);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100606110; end: 100606117; -[SCArroyoFeedDataUpdateAnnouncer addListener:] */

void FUN_100606110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 100606118; end: 1006063c3; -[SCArroyoFeedDataUpdateListenerAnnouncer addListener:] */

undefined8 FUN_100606118(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  plVar3 = (long *)0x30;
  func_0x000107c60e20();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_DAT_110ca9950;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    func_0x000107c61144(auStack_90,param_3);
    FUN_1006063c4(plVar10,auStack_90);
    func_0x000107c61120(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_100606504(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_1006062cc:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x000107c60d68(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        func_0x000107c61148();
        func_0x000107c61170();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_1006062ec;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      func_0x000107c61148();
      func_0x000107c61170();
      if (lVar5 != 0) {
        FUN_1006063c4(plVar10,lVar7);
      }
    }
    func_0x000107c61144(auStack_78,param_3);
    FUN_1006063c4(plVar10,auStack_78);
    func_0x000107c61120(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_100606504(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_1006062cc;
    }
  }
  uVar9 = 1;
LAB_1006062ec:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      func_0x000107c60d68(plVar3);
    }
  }
  func_0x000107c60d8c(param_1 + 8);
  func_0x000107c61170(param_3);
  return uVar9;
}



/* Entry: 1006063c4; end: 100606503;  */

void FUN_1006063c4(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    func_0x000107c6111c(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c2bc94();
LAB_100606500:
      func_0x000104bd35f4();
      plVar5 = param_1;
      func_0x000107c60c40();
      func_0x000107c60dc4();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_100606500;
      lVar4 = uVar7 << 3;
      func_0x000107c60e20();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107c6111c(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        func_0x000107c6114c(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        func_0x000107c61120(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 100606504; end: 10060654b;  */

void FUN_100606504(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10060654c; end: 100606577;  */

void FUN_10060654c(void)

{
  func_0x000107c610f4(PTR_PTR_1126ba4c0);
  func_0x000107c47d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100606578; end: 100606607; -[SCNativeQueryFeedParameters initWithPaginationTimestamp:conversationId:hasMoreEntries:] */

undefined1 *
FUN_100606578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112703b30;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100606608; end: 10060664f;  */

/* WARNING: Possible PIC construction at 0x00010060663c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100606640) */

void FUN_100606608(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3bf84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100606650; end: 10060669f; -[SCNativeFeedManager _networkConnectivityDidChange:] */

void FUN_100606650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba4e8;
  func_0x000107c40ef0(param_3);
  func_0x000107c49b90();
  if ((int)puVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be38350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__incrementConsecutivePaginationF_11256ba70,1);
    return;
  }
  return;
}



/* Entry: 1006066a0; end: 1006066e3; -[SCNativeFeedManager _incrementConsecutivePaginationFailures:] */

void FUN_1006066a0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  func_0x000107c611ec(param_1 + 0x98);
  if ((param_3 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0xa0) + 1;
  }
  else {
    lVar1 = 0;
  }
  *(long *)(param_1 + 0xa0) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x98);
  return;
}



/* Entry: 1006066e4; end: 100606753; -[SCNativeFeedManager _loadInitialLocalFeedEntries] */

/* WARNING: Possible PIC construction at 0x00010060671c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100606720) */

void FUN_1006066e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c6071c();
  *(undefined8 *)(param_2 + 0x88) = param_1;
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x000107c3abc0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  *(undefined **)(param_2 + 0x80) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100606754; end: 100606917;  */

undefined * FUN_100606754(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uVar1 = 0;
  func_0x000107c5eec8();
  lStack_70 = *(long *)(uVar1 - 8);
  uStack_68 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar6 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4(lVar6);
  func_0x000107c5eec0();
  uStack_b0 = uVar1 >> 0x38;
  uStack_a8 = param_2 >> 8;
  uStack_a0 = param_2 >> 0x10;
  uStack_98 = param_2 >> 0x18;
  uStack_90 = param_2 >> 0x20;
  uStack_88 = param_2 >> 0x28;
  uStack_80 = param_2 >> 0x30;
  uStack_78 = param_2 >> 0x38;
  lVar2 = 0x112d48d68;
  FUN_1000285a8(0x112d48d68,&UNK_10d912150);
  uVar5 = 0x30;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0x20;
  *(undefined8 *)(lVar2 + 0x10) = 0x10;
  *(char *)(lVar2 + 0x20) = (char)uVar1;
  *(char *)(lVar2 + 0x21) = (char)(uVar1 >> 8);
  *(char *)(lVar2 + 0x22) = (char)(uVar1 >> 0x10);
  *(char *)(lVar2 + 0x23) = (char)(uVar1 >> 0x18);
  *(char *)(lVar2 + 0x24) = (char)(uVar1 >> 0x20);
  *(char *)(lVar2 + 0x25) = (char)(uVar1 >> 0x28);
  *(char *)(lVar2 + 0x26) = (char)(uVar1 >> 0x30);
  *(char *)(lVar2 + 0x27) = (char)uStack_b0;
  *(char *)(lVar2 + 0x28) = (char)param_2;
  *(char *)(lVar2 + 0x29) = (char)uStack_a8;
  *(char *)(lVar2 + 0x2a) = (char)uStack_a0;
  *(char *)(lVar2 + 0x2b) = (char)uStack_98;
  *(char *)(lVar2 + 0x2c) = (char)uStack_90;
  *(char *)(lVar2 + 0x2d) = (char)uStack_88;
  *(char *)(lVar2 + 0x2e) = (char)uStack_80;
  *(char *)(lVar2 + 0x2f) = (char)uStack_78;
  lVar3 = lVar2;
  FUN_1004496cc();
  func_0x000107c61574(lVar2);
  puVar4 = PTR_PTR_1126b0cd8;
  func_0x000107c610f8(PTR_PTR_1126b0cd8);
  lVar2 = lVar3;
  func_0x000107c5ee20(lVar3,uVar5);
  func_0x000107c46d34(puVar4);
  func_0x000107c61170(lVar2);
  func_0x00010006c090(lVar3,uVar5);
  (**(code **)(lStack_70 + 8))(lVar6,uStack_68);
  return puVar4;
}



/* Entry: 100606918; end: 10060692b; +[SCNMessagingUUID RandomUUID] */

void FUN_100606918(void)

{
  FUN_100606754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10060692c; end: 10060696b; -[SCNativeFeedManager _feedManager] */

void FUN_10060692c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c44070();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10060696c; end: 100606977;  */

void FUN_10060696c(void)

{
  return;
}



/* Entry: 100606978; end: 1006069ef; -[SCNMessagingSession getFeedManager] */

void FUN_100606978(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10060696c();
  FUN_1006069f0();
  FUN_100606afc(auStack_30);
  func_0x000107c61180();
  func_0x000100606c94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006069f0; end: 100606a07;  */

void FUN_1006069f0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001006069f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100606a08; end: 100606a47;  */

void FUN_100606a08(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001006069f8();
  if (*(long *)(unaff_x19 + 8) == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    FUN_100606a48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x20);
  return;
}



/* Entry: 100606a48; end: 100606a87;  */

void FUN_100606a48(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100606a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100606a88; end: 100606afb;  */

void FUN_100606a88(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5c5a0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000100606a78();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_100606b28);
  func_0x000107c61180();
  func_0x000100606c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100606afc; end: 100606b27;  */

void FUN_100606afc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100606a88();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100606b28; end: 100606b97;  */

void FUN_100606b28(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126daa20;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000100606a78();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000100606c58(&uStack_30);
  return;
}



/* Entry: 100606b98; end: 100606bd7; -[SCNMessagingFeedManager .cxx_construct] */

undefined8 * FUN_100606b98(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100606a78();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 100606bd8; end: 100606bdf;  */

void FUN_100606bd8(void)

{
  return;
}



/* Entry: 100606be0; end: 100606c7b; -[SCNMessagingFeedManager initWithCpp:] */

undefined1 * FUN_100606be0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd298;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000100606a78();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000100606c58(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100606c7c; end: 100606cab;  */

void FUN_100606c7c(void)

{
  return;
}



/* Entry: 100606cac; end: 100606d53; -[SCNMessagingFeedManager fetchFeed:numberOfEntries:trackingId:] */

void FUN_100606cac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c61174(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_100606d54();
  FUN_100606d60();
  (**(code **)(*plVar1 + 0x28))(plVar1,param_3,param_4,auStack_50);
  FUN_1005fce88(auStack_50);
  func_0x000100607a4c();
  return;
}



/* Entry: 100606d54; end: 100606d5f;  */

void FUN_100606d54(void)

{
  return;
}



/* Entry: 100606d60; end: 100606de3;  */

void FUN_100606d60(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_10049c280(&uStack_40,param_2);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_100100fec(&uStack_40);
  }
  FUN_100606de4();
  return;
}



/* Entry: 100606de4; end: 100606dff;  */

void FUN_100606de4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100606e00; end: 100606f6b;  */

void FUN_100606e00(void)

{
  undefined1 in_ZR;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x23;
  undefined8 in_stack_000000c8;
  
  func_0x000100606dec();
  FUN_100606f6c();
  FUN_10055096c();
  func_0x000100606f78();
  func_0x000100606f84();
  FUN_100606f9c();
  FUN_100606fd8(unaff_x23 + 0x20);
  FUN_100607030();
  FUN_1004b4e98();
  func_0x000100607150();
  (*extraout_x8)();
  func_0x000100607170();
  func_0x00010060731c();
  FUN_100607368();
  func_0x000100607584();
  FUN_1006075cc();
  func_0x000100607880();
  func_0x000100607888();
  FUN_1006078ac();
  in_stack_000000c8 = 0;
  FUN_1006078ec(unaff_x19 + 0x38);
  func_0x000100607904();
  func_0x00010054fba8();
  func_0x000100607918();
  FUN_1006078ac();
  func_0x000100607924();
  func_0x000100607970();
  FUN_1006079b8();
  FUN_1006079d4(&stack0x00000088);
  func_0x000100607a28();
  FUN_100607a00();
  func_0x000100607a30();
  func_0x0001005ee154();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3377c();
  FUN_1006079d4(&stack0x00000088);
  func_0x000100607a28();
  FUN_100607a00();
  func_0x000100607a30();
  func_0x000107c33930();
  return;
}



/* Entry: 100606f6c; end: 100606f9b;  */

void FUN_100606f6c(void)

{
  return;
}



/* Entry: 100606f9c; end: 100606fcf;  */

void FUN_100606f9c(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  
  func_0x000100606f90();
  if (param_3 == 0) {
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  else {
    FUN_100606fd0();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      return;
    }
  }
  func_0x00010527822c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count4lockEv_110346650)(param_3);
  return;
}



/* Entry: 100606fd0; end: 100606fd7;  */

void FUN_100606fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count4lockEv_110346650)(param_3);
  return;
}



/* Entry: 100606fd8; end: 100607003;  */

void FUN_100606fd8(void)

{
  FUN_10028af74();
  FUN_100607004();
  return;
}



/* Entry: 100607004; end: 100607017;  */

void FUN_100607004(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10054f8dc();
    FUN_10028b5dc();
    return;
  }
  return;
}



/* Entry: 100607018; end: 10060702f;  */

void FUN_100607018(void)

{
  FUN_10054f8dc();
  FUN_10028b5dc();
  return;
}



/* Entry: 100607030; end: 10060703b;  */

void FUN_100607030(void)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x19;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  puVar1 = &stack0x00000040;
  func_0x0001004a6390(puVar1,&stack0x00000080);
  uVar4 = *(ulong *)(puVar1 + 8);
  if (uVar4 < *(ulong *)(puVar1 + 0x10)) {
    func_0x000107c33c04();
    FUN_100607108();
    lVar3 = uVar4 + 0x30;
    unaff_x19[1] = lVar3;
  }
  else {
    plVar2 = unaff_x19;
    FUN_100164d38();
    func_0x000100164e8c(auStack_58,plVar2,(unaff_x19[1] - *unaff_x19) / 0x30,puVar1 + 0x10);
    FUN_100607108(lStack_48);
    lStack_48 = lStack_48 + 0x30;
    func_0x0001004b4d60();
    FUN_100164f34();
    lVar3 = unaff_x19[1];
    FUN_100607148();
  }
  unaff_x19[1] = lVar3;
  return;
}



/* Entry: 10060703c; end: 100607107;  */

void FUN_10060703c(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001004a6390();
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107c33c04();
    FUN_100607108();
    lVar2 = uVar3 + 0x30;
    unaff_x19[1] = lVar2;
  }
  else {
    plVar1 = unaff_x19;
    FUN_100164d38();
    func_0x000100164e8c(auStack_58,plVar1,(unaff_x19[1] - *unaff_x19) / 0x30,
                        (ulong *)(param_1 + 0x10));
    FUN_100607108(lStack_48);
    lStack_48 = lStack_48 + 0x30;
    func_0x0001004b4d60();
    FUN_100164f34();
    lVar2 = unaff_x19[1];
    FUN_100607148();
  }
  unaff_x19[1] = lVar2;
  return;
}



/* Entry: 100607108; end: 100607147;  */

void FUN_100607108(long param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001004a6390();
  FUN_10002b838();
  FUN_10002b838(param_1 + 0x18,*unaff_x20);
  return;
}



/* Entry: 100607148; end: 10060719f;  */

undefined8 * FUN_100607148(void)

{
  long in_stack_00000008;
  
  func_0x000100164fc8();
  if (in_stack_00000008 != 0) {
    func_0x000107c60e14();
  }
  return &stack0x00000008;
}



/* Entry: 1006071a0; end: 1006071df;  */

void FUN_1006071a0(void)

{
  long extraout_x8;
  
  func_0x000100607184();
  FUN_1006071e0();
  FUN_1005e3578();
  func_0x000100607304();
  func_0x000100607310(*(undefined8 *)(extraout_x8 + 8));
  FUN_1005fe1e0();
  return;
}



/* Entry: 1006071e0; end: 1006071eb;  */

void FUN_1006071e0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar3; lVar2 = lVar2 + 0x30) {
    func_0x000107c60c94(auStack_48);
    func_0x000107c60c94(auStack_60,lVar2 + 0x18);
    puVar1 = &stack0x00000008;
    FUN_1005e3484(&stack0x00000008,auStack_48,auStack_60);
    FUN_100607298(&stack0x00000008,puVar1);
    func_0x000107c60ca0(auStack_60);
    func_0x000107c60ca0(auStack_48);
  }
  return;
}



/* Entry: 1006071ec; end: 100607297;  */

void FUN_1006071ec(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar3; lVar2 = lVar2 + 0x30) {
    func_0x000107c60c94(auStack_48);
    func_0x000107c60c94(auStack_60,lVar2 + 0x18);
    uVar1 = param_1;
    FUN_1005e3484(param_1,auStack_48,auStack_60);
    FUN_100607298(param_1,uVar1);
    func_0x000107c60ca0(auStack_60);
    func_0x000107c60ca0(auStack_48);
  }
  return;
}



/* Entry: 100607298; end: 1006072fb;  */

void FUN_100607298(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001005fe13c();
  func_0x0001006072c8(param_1 + 8,param_2 + 8);
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 1006072fc; end: 100607327;  */

void FUN_1006072fc(void)

{
  return;
}



/* Entry: 100607328; end: 100607367;  */

void FUN_100607328(void)

{
  long extraout_x8;
  
  func_0x000100607184();
  FUN_1006071e0();
  FUN_1005e3578();
  func_0x000100607304();
  func_0x000100607310(*(undefined8 *)(extraout_x8 + 0x10));
  FUN_1005fe1e0();
  return;
}



/* Entry: 100607368; end: 10060758b;  */

undefined * FUN_100607368(void)

{
  undefined *puVar1;
  uint unaff_w21;
  
  if (unaff_w21 < 0xb) {
    return (&PTR_DAT_110a622e0)[unaff_w21];
  }
  if (unaff_w21 - 0xb < 9) {
    return &UNK_10f4b0302;
  }
  if (unaff_w21 - 0x14 < 10) {
    return &UNK_10f4b0309;
  }
  if (unaff_w21 - 0x1e < 10) {
    return &UNK_10f4b0310;
  }
  if (unaff_w21 - 0x28 < 10) {
    return &UNK_10f4b0317;
  }
  if (unaff_w21 - 0x32 < 10) {
    return &UNK_10f4b031e;
  }
  if (unaff_w21 - 0x3c < 10) {
    return &UNK_10f4b0325;
  }
  if (unaff_w21 - 0x46 < 10) {
    return &UNK_10f4b032c;
  }
  if (unaff_w21 - 0x50 < 10) {
    return &UNK_10f4b0333;
  }
  if (unaff_w21 - 0x5a < 10) {
    return &UNK_10f4b033a;
  }
  if (unaff_w21 - 100 < 10) {
    return &UNK_10f4b0341;
  }
  if (unaff_w21 - 0x6e < 10) {
    return &UNK_10f4b034a;
  }
  if (unaff_w21 - 0x78 < 10) {
    return &UNK_10f4b0353;
  }
  if (unaff_w21 - 0x82 < 10) {
    return &UNK_10f4b035c;
  }
  if (unaff_w21 - 0x8c < 10) {
    return &UNK_10f4b0365;
  }
  if (unaff_w21 - 0x96 < 0x32) {
    return &UNK_10f4b036e;
  }
  if (unaff_w21 - 200 < 0x32) {
    return &UNK_10f4b0377;
  }
  if (unaff_w21 - 0xfa < 0x32) {
    return &UNK_10f4b0380;
  }
  if (unaff_w21 - 300 < 0x32) {
    return &UNK_10f4b0389;
  }
  if (unaff_w21 - 0x15e < 0x32) {
    return &UNK_10f4b0392;
  }
  if (unaff_w21 - 400 < 0x32) {
    return &UNK_10f4b039b;
  }
  puVar1 = &UNK_10f4b03a4;
  if (0x31 < unaff_w21 - 0x1c2) {
    puVar1 = &UNK_10f4b03ad;
  }
  return puVar1;
}



/* Entry: 10060758c; end: 1006075cb;  */

void FUN_10060758c(long param_1)

{
  func_0x0001004a6390();
  FUN_10002b838();
  FUN_10002b838(param_1 + 0x18);
  return;
}


