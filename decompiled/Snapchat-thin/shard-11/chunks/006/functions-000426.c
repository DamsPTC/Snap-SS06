/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087b1758; end: 1087b1767;  */

void FUN_1087b1758(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001087b5e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1087b1768; end: 1087b179b;  */

long FUN_1087b1768(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001087b6508(param_2,param_1,&PTR_DAT_110a70958);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087b179c; end: 1087b17a3;  */

void FUN_1087b179c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b17a4; end: 1087b17b7;  */

void FUN_1087b17a4(void)

{
  func_0x0001087b17c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b17b8; end: 1087b17cf;  */

long FUN_1087b17b8(long param_1)

{
  func_0x00010056abcc(param_1 + 0x380);
  func_0x000100559070(param_1 + 0x370);
  func_0x00010056cb50(param_1 + 0x360);
  func_0x00010056240c(param_1 + 0x350);
  func_0x000100555e3c(param_1 + 0x340);
  func_0x000100563450(param_1 + 0x330);
  func_0x000100563770(param_1 + 800);
  func_0x000100568b80(param_1 + 0x310);
  func_0x0001004a6508(param_1 + 0x230);
  func_0x000100567be4(param_1 + 0x220);
  func_0x000100564088(param_1 + 0x210);
  func_0x0001005f12cc(param_1 + 0x200);
  func_0x0001005f12f0(param_1 + 0x1f0);
  func_0x000100567c34(param_1 + 0x1e0);
  func_0x00010054f94c(param_1 + 0x1d0);
  func_0x00010056cb74(param_1 + 0x1c0);
  func_0x00010056abf0(param_1 + 0x1b0);
  func_0x000100567e90(param_1 + 0x1a0);
  func_0x000100555fc0(param_1 + 400);
  func_0x000100558934(param_1 + 0x180);
  func_0x000100567ef4(param_1 + 0x170);
  func_0x000100562cac(param_1 + 0x160);
  func_0x0001004b55ac(param_1 + 0x150);
  func_0x000100565838(param_1 + 0x140);
  func_0x000100564c18(param_1 + 0x130);
  func_0x0001005657d0(param_1 + 0x120);
  func_0x000100565774(param_1 + 0x110);
  func_0x0001005640e4(param_1 + 0x100);
  func_0x0001005f1314(param_1 + 0xf0);
  func_0x000100568ba4(param_1 + 0xe0);
  func_0x000100558bb4(param_1 + 0xd0);
  func_0x00010055890c(param_1 + 0xc0);
  func_0x000100450be4(param_1 + 0xb0);
  func_0x000100567ba4(param_1 + 0xa0);
  func_0x00010055c0b4(param_1 + 0x90);
  func_0x00010055c0b4(param_1 + 0x80);
  func_0x00010055c0b4(param_1 + 0x70);
  func_0x00010055c0b4(param_1 + 0x60);
  func_0x00010054fa34(param_1 + 0x50);
  func_0x00010054f9c4(param_1 + 0x40);
  func_0x000100100fec(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x18;
}



/* Entry: 1087b17d0; end: 1087b1853;  */

void FUN_1087b17d0(void)

{
  long unaff_x20;
  
  func_0x000107c335a4();
  if (unaff_x20 != 0) {
    func_0x000107c289f8(unaff_x20 + 0x1e8);
    func_0x000107c289f8(unaff_x20 + 0x1b8);
    func_0x000107c289f8(unaff_x20 + 0x188);
    func_0x000107c289f8(unaff_x20 + 0x158);
    func_0x000107c289f8(unaff_x20 + 0x128);
    func_0x000107c289f8(unaff_x20 + 0xf8);
    func_0x000107c289f8(unaff_x20 + 200);
    func_0x000107c289f8(unaff_x20 + 0x98);
    func_0x000107c289f8(unaff_x20 + 0x68);
    func_0x000107c289f8(unaff_x20 + 0x38);
    func_0x000107c29948(unaff_x20 + 0x10);
    func_0x0001087a8fd8();
    __ZdlPv();
  }
  return;
}



/* Entry: 1087b1854; end: 1087b18a3;  */

long * FUN_1087b1854(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x000107c27914(lVar1);
    func_0x0001087b616c();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087b18a4; end: 1087b18a7;  */

void FUN_1087b18a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a709c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087b18a8; end: 1087b18bb;  */

void FUN_1087b18a8(void)

{
  FUN_1087b18e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b18bc; end: 1087b18e3;  */

undefined8 * FUN_1087b18bc(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  
  func_0x000107c27f98(param_1 + 0x20);
  puVar2 = (undefined8 *)(param_1 + 0x18);
  plVar6 = (long *)*puVar2;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0,puVar2);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return puVar2;
}



/* Entry: 1087b18e4; end: 1087b18f7;  */

void FUN_1087b18e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b18f8; end: 1087b190b;  */

void FUN_1087b18f8(void)

{
  FUN_1087b1934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b190c; end: 1087b1933;  */

undefined8 FUN_1087b190c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c29998(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x000100567bd8();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1087b1934; end: 1087b1943;  */

void FUN_1087b1934(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b1944; end: 1087b1a23;  */

void FUN_1087b1944(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  code *extraout_x8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined4 auStack_90 [18];
  undefined1 uStack_48;
  
  (**(code **)(*param_2 + 0x48))(param_2,param_4,param_5);
  if (*(char *)(param_6 + 2) == '\x01') {
    param_2 = (long *)*param_1;
    FUN_1087ab85c(param_2,*param_6,param_6[1],param_7);
  }
  func_0x000107c31338();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a8,param_10);
  func_0x0001087b5e88(auStack_c0);
  func_0x0001087b5aa8(*param_3);
  (*extraout_x8)();
  auStack_90[0] = param_8;
  func_0x0001087b5c6c(param_9);
  uStack_48 = 0;
  func_0x00010bcc46f8(param_2,auStack_90);
  func_0x0001087b5cac();
  func_0x0001087b5d28();
  func_0x0001087b5e50();
  return;
}



/* Entry: 1087b1a24; end: 1087b1acb;  */

void FUN_1087b1a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087b1a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}



/* Entry: 1087b1acc; end: 1087b1c9f;  */

undefined8 * FUN_1087b1acc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  func_0x000107c27994(param_1 + 1,param_2 + 1);
  func_0x000107c28aa0(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  func_0x000104be0ccc(param_1 + 9,param_2 + 9);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  func_0x0001087b6398(param_1 + 0xe);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x11,param_2 + 0x11);
  uVar2 = param_2[0x15];
  uVar1 = param_2[0x14];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  FUN_10867be90(param_1 + 0x17,param_2 + 0x17);
  uVar2 = param_2[0x1b];
  uVar1 = param_2[0x1a];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x1b] = uVar2;
  param_1[0x1a] = uVar1;
  func_0x000104be0ccc(param_1 + 0x1d,param_2 + 0x1d);
  func_0x000104be0ccc(param_1 + 0x21,param_2 + 0x21);
  func_0x000104be0ccc(param_1 + 0x25,param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  func_0x000107c279d4(param_1 + 0x2a,param_2 + 0x2a);
  FUN_108656428(param_1 + 0x2e,param_2 + 0x2e);
  *(undefined1 *)(param_1 + 0x47) = *(undefined1 *)(param_2 + 0x47);
  func_0x000107c279d4(param_1 + 0x48,param_2 + 0x48);
  func_0x000104be0ccc(param_1 + 0x4c,param_2 + 0x4c);
  uVar2 = param_2[0x51];
  uVar1 = param_2[0x50];
  uVar3 = *(undefined8 *)((long)param_2 + 0x289);
  *(undefined8 *)((long)param_1 + 0x291) = *(undefined8 *)((long)param_2 + 0x291);
  *(undefined8 *)((long)param_1 + 0x289) = uVar3;
  param_1[0x51] = uVar2;
  param_1[0x50] = uVar1;
  return param_1;
}



/* Entry: 1087b1ca0; end: 1087b1ca3;  */

void FUN_1087b1ca0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70a98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087b1ca4; end: 1087b1cb7;  */

void FUN_1087b1ca4(void)

{
  func_0x0001087b1cdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b1cb8; end: 1087b1ce7;  */

void FUN_1087b1cb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087b1cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087b1ce8; end: 1087b1d47;  */

void FUN_1087b1ce8(long param_1)

{
  func_0x000107c33588();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1087b1d48; end: 1087b1e07;  */

long FUN_1087b1d48(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar8 = (long *)param_1[1];
  if ((plVar8 != (long *)0x0) && (param_1[3] != 0)) {
    plVar3 = param_1;
    func_0x0001087b6494();
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)((ulong)plVar3 & uVar9);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        uVar7 = (uint)plVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)plVar3 / uVar7;
        }
        plVar10 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    plVar4 = plVar3;
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        plVar5 = (long *)plVar6[1];
        if (plVar5 != plVar3) break;
        func_0x0001087b64a0();
        if ((int)plVar4 != 0) {
          return (long)plVar6;
        }
      }
      if (((ulong)plVar8 & uVar9) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar9);
      }
      else if (plVar8 <= plVar5) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar5 / (ulong)plVar8;
        }
        plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar8);
      }
    } while (plVar5 == plVar10);
  }
  return 0;
}



/* Entry: 1087b1e08; end: 1087b1f6f;  */

long FUN_1087b1e08(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar5 = param_1[1];
  lVar1 = *param_2;
  uVar4 = param_2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar10 = 0;
    if (uVar5 != 0) {
      uVar10 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar10 * uVar5;
  }
  lVar8 = *param_1;
  plVar3 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar3;
    plVar3 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  lVar9 = lVar1;
  if (plVar6 == param_1 + 2) {
LAB_1087b1e98:
    if (lVar1 == 0) {
LAB_1087b1ecc:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar9 = *param_2;
      goto LAB_1087b1ed4;
    }
    uVar10 = *(ulong *)(lVar1 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar2 * uVar5;
    }
    if (uVar10 != uVar4) goto LAB_1087b1ecc;
  }
  else {
    uVar10 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar2 * uVar5;
    }
    if (uVar10 != uVar4) goto LAB_1087b1e98;
LAB_1087b1ed4:
    if (lVar9 == 0) goto LAB_1087b1f0c;
  }
  uVar10 = *(ulong *)(lVar9 + 8);
  if ((uVar5 & uVar7) == 0) {
    uVar10 = uVar10 & uVar7;
  }
  else if (uVar5 <= uVar10) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar10 / uVar5;
    }
    uVar10 = uVar10 - uVar7 * uVar5;
  }
  if (uVar10 != uVar4) {
    *(long **)(lVar8 + uVar10 * 8) = plVar6;
    lVar9 = *param_2;
  }
LAB_1087b1f0c:
  *plVar6 = lVar9;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x0001087b6354();
  func_0x0001087b1f38();
  return lVar1;
}



/* Entry: 1087b1f70; end: 1087b1fe3;  */

undefined8 * FUN_1087b1f70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [704];
  
  _bzero(auStack_2f8,0x2c8);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x59) != '\0') {
    FUN_1087b2090(param_1 + 2);
  }
  func_0x0001087acfb8(auStack_2f0);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  func_0x0001087acfb8(param_1 + 2);
  return param_1;
}



/* Entry: 1087b1fe4; end: 1087b208f;  */

void FUN_1087b1fe4(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c33580();
  *param_1 = *param_2;
  func_0x000107c3194c(param_1 + 1,param_2 + 1);
  func_0x000107c28960(unaff_x19 + 0x20,unaff_x20 + 0x20);
  func_0x0001087b6880();
  func_0x0001052b2b60();
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
  func_0x000107c3194c(unaff_x19 + 0x70,unaff_x20 + 0x70);
  func_0x0001087b6710();
  FUN_10865f9c0(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  func_0x0001087b60f4();
  func_0x0001052b2b60();
  func_0x0001052b2b60(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  func_0x0001052b2b60(unaff_x19 + 0x118,unaff_x20 + 0x118);
  func_0x0001087b66fc();
  func_0x000107c28908();
  FUN_1086ac3c8(unaff_x19 + 0x160,unaff_x20 + 0x160);
  func_0x0001087b66e8();
  func_0x000107c28908();
  func_0x0001052b2b60(unaff_x19 + 0x250,unaff_x20 + 0x250);
  func_0x0001087b6110();
  return;
}



/* Entry: 1087b2090; end: 1087b20cf;  */

void FUN_1087b2090(long param_1)

{
  if (*(char *)(param_1 + 0x2b8) == '\x01') {
    FUN_1087acfd8();
    *(undefined1 *)(param_1 + 0x2b8) = 0;
  }
  return;
}



/* Entry: 1087b20d0; end: 1087b21bb;  */

void FUN_1087b20d0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c33580();
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  func_0x000107c28978(param_1 + 4,param_2 + 4);
  func_0x0001087b6880();
  func_0x000107c27b7c();
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  func_0x0001087b6710();
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  func_0x0001087b60f4();
  func_0x000107c27b7c();
  func_0x000107c27b7c(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  func_0x000107c27b7c(unaff_x19 + 0x118,unaff_x20 + 0x118);
  func_0x0001087b66fc();
  func_0x000107c27afc();
  FUN_1086ac390(unaff_x19 + 0x160,unaff_x20 + 0x160);
  func_0x0001087b66e8();
  func_0x000107c27afc();
  func_0x000107c27b7c(unaff_x19 + 0x250,unaff_x20 + 0x250);
  func_0x0001087b6110();
  return;
}



/* Entry: 1087b21bc; end: 1087b2227;  */

void FUN_1087b21bc(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_2d8 [696];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x000107c3141c(), (int)lVar2 != 0)) {
    FUN_1087b225c(auStack_2d8,*param_1);
    func_0x0001087b680c();
    FUN_1087b2228();
    FUN_1087acfd8(auStack_2d8);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[0x58] == '\x01') {
    FUN_1087acfd8();
    *(undefined1 *)(plVar1 + 0x57) = 0;
  }
  return;
}



/* Entry: 1087b2228; end: 1087b225b;  */

long FUN_1087b2228(long param_1)

{
  if (*(char *)(param_1 + 0x2b8) == '\x01') {
    FUN_1087b1fe4();
  }
  else {
    func_0x0001087b20b4();
  }
  return param_1;
}



/* Entry: 1087b225c; end: 1087b245b;  */

void FUN_1087b225c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 unaff_x21;
  
  func_0x000107c313f8();
  func_0x0001087b6690();
  func_0x0001087b5ddc();
  func_0x0001087b61f4();
  func_0x0001087b6604();
  *(undefined4 *)(param_1 + 0x40) = param_2;
  func_0x0001087b6014();
  func_0x0001087b6578();
  *(undefined4 *)(param_1 + 0x68) = param_2;
  func_0x0001087b6280();
  uVar2 = 7;
  uVar1 = unaff_x21;
  func_0x000107c313d8();
  *(int *)(param_1 + 0x88) = (int)uVar1;
  func_0x0001087b656c();
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  func_0x0001087b65ec();
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  func_0x0001087b6658();
  *(int *)(param_1 + 0xa0) = (int)uVar1;
  func_0x0001087b65c8();
  *(int *)(param_1 + 0xa4) = (int)uVar1;
  func_0x0001087b6640(param_1 + 0xa8);
  func_0x0001087b6590();
  *(char *)(param_1 + 0xc0) = (char)uVar1;
  func_0x0001087b65bc();
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined1 *)(param_1 + 0xd0) = uVar2;
  func_0x0001087b664c(param_1 + 0xd8);
  func_0x0001087b65b0(param_1 + 0xf8);
  func_0x0001087b6634(param_1 + 0x118);
  func_0x0001087b65e0();
  *(char *)(param_1 + 0x138) = (char)uVar1;
  func_0x0001087b6610(param_1 + 0x140);
  func_0x0001087b6628(param_1 + 0x160);
  func_0x0001087b6584();
  *(char *)(param_1 + 0x228) = (char)uVar1;
  func_0x0001087b659c(param_1 + 0x230);
  func_0x0001087b661c(param_1 + 0x250);
  func_0x0001087b65d4();
  *(undefined8 *)(param_1 + 0x270) = uVar1;
  *(undefined1 *)(param_1 + 0x278) = uVar2;
  func_0x0001087b65f8();
  *(undefined8 *)(param_1 + 0x280) = uVar1;
  *(undefined1 *)(param_1 + 0x288) = uVar2;
  uVar1 = unaff_x21;
  func_0x000107c313d8();
  *(undefined8 *)(param_1 + 0x290) = uVar1;
  uVar1 = unaff_x21;
  func_0x000107c313d8();
  *(int *)(param_1 + 0x298) = (int)uVar1;
  uVar1 = unaff_x21;
  func_0x000107c313d8();
  *(int *)(param_1 + 0x29c) = (int)uVar1;
  uVar1 = unaff_x21;
  func_0x000107c313d8();
  *(int *)(param_1 + 0x2a0) = (int)uVar1;
  uVar1 = unaff_x21;
  func_0x000107c313d8();
  *(undefined8 *)(param_1 + 0x2a8) = uVar1;
  func_0x000107c313d8();
  *(int *)(param_1 + 0x2b0) = (int)unaff_x21;
  return;
}



/* Entry: 1087b245c; end: 1087b247f;  */

/* WARNING: Possible PIC construction at 0x0001087b246c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001087b2470) */

undefined8 FUN_1087b245c(undefined8 param_1)

{
  undefined8 uStack_48;
  
  func_0x0001087b6300();
  uStack_48 = param_1;
  func_0x000100100fd4(&uStack_48);
  return param_1;
}



/* Entry: 1087b2480; end: 1087b249f;  */

void FUN_1087b2480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1087b24a0(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 1087b24a0; end: 1087b26c7;  */

undefined1  [16] FUN_1087b24a0(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 extraout_x9;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong unaff_x26;
  ulong uVar13;
  undefined1 auVar14 [16];
  long *aplStack_78 [3];
  
  uVar9 = param_2;
  FUN_108848654();
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar13 = uVar12 - 1;
    uVar11 = (uint)uVar12;
    if ((uVar12 & uVar13) == 0) {
      unaff_x26 = uVar11 - 1 & uVar9;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar9 - uVar12) < 0;
      unaff_x26 = uVar9;
      if (uVar12 <= uVar9) {
        uVar1 = 0;
        if (uVar11 != 0) {
          uVar1 = (uint)uVar9 / uVar11;
        }
        unaff_x26 = (ulong)((uint)uVar9 - uVar1 * uVar11);
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_1087b2570;
          uVar6 = plVar10[1];
          in_NG = (long)(uVar6 - uVar9) < 0;
          if (uVar6 != uVar9) break;
          plVar8 = plVar10 + 2;
          func_0x000107c28078(plVar8,param_2);
          if (((ulong)plVar8 & 1) != 0) {
            uVar5 = 0;
            goto LAB_1087b2698;
          }
        }
        if ((uVar12 & uVar13) == 0) {
          uVar6 = uVar6 & uVar13;
        }
        else if (uVar12 <= uVar6) {
          uVar2 = 0;
          if (uVar12 != 0) {
            uVar2 = uVar6 / uVar12;
          }
          uVar6 = uVar6 - uVar2 * uVar12;
        }
        in_NG = (long)(uVar6 - unaff_x26) < 0;
      } while (uVar6 == unaff_x26);
    }
  }
LAB_1087b2570:
  func_0x000107c335d8(aplStack_78);
  FUN_1087b26c8();
  if ((uVar12 == 0) ||
     (func_0x0001087b66b4((float)(param_1[3] + 1),(int)param_1[4],(float)uVar12), (bool)in_NG)) {
    bVar3 = 2 < uVar12;
    bVar4 = uVar12 == 3;
    uVar13 = 1;
    if (bVar3) {
      uVar13 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    func_0x0001087b5da4(uVar13 | uVar12 << 1);
    uVar5 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar5 = extraout_x9;
    }
    FUN_1087b2770(param_1,uVar5);
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = (int)uVar12 - 1 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uVar12 <= uVar9) {
        uVar13 = 0;
        if (uVar12 != 0) {
          uVar13 = uVar9 / uVar12;
        }
        unaff_x26 = uVar9 - uVar13 * uVar12;
      }
    }
  }
  plVar10 = aplStack_78[0];
  lVar7 = *param_1;
  plVar8 = *(long **)(lVar7 + unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *aplStack_78[0] = *plVar8;
    *plVar8 = (long)aplStack_78[0];
    *(long **)(lVar7 + unaff_x26 * 8) = plVar8;
    if (*aplStack_78[0] != 0) {
      uVar9 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar9 = uVar9 & uVar12 - 1;
      }
      else if (uVar12 <= uVar9) {
        uVar13 = 0;
        if (uVar12 != 0) {
          uVar13 = uVar9 / uVar12;
        }
        uVar9 = uVar9 - uVar13 * uVar12;
      }
      *(long **)(lVar7 + uVar9 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar8;
    *plVar8 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1087b2924(aplStack_78);
  uVar5 = 1;
LAB_1087b2698:
  auVar14._8_8_ = uVar5;
  auVar14._0_8_ = plVar10;
  return auVar14;
}



/* Entry: 1087b26c8; end: 1087b272f;  */

void FUN_1087b26c8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1087b2730(puVar1 + 2,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1087b2730; end: 1087b276f;  */

long FUN_1087b2730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c27994();
  func_0x0001087b1d0c(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 1087b2770; end: 1087b2807;  */

void FUN_1087b2770(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar6;
  ulong extraout_x10;
  long *plVar7;
  long *plVar8;
  long *extraout_x11;
  long *plVar9;
  
  plVar3 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  bVar2 = plVar9 <= param_2;
  if (param_2 <= plVar9) {
    if (!bVar2) {
      func_0x0001087b60d0();
      if ((bVar2) && (((ulong)plVar9 & (long)plVar9 - 1U) == 0)) {
        func_0x0001087b5998();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar9) goto LAB_1087b27b8;
    }
    return;
  }
LAB_1087b27b8:
  func_0x000107c335d8();
  if (plVar4 == (long *)0x0) {
    FUN_1087b28f0(plVar3);
    plVar3[1] = 0;
  }
  else {
    plVar9 = plVar3 + 1;
    FUN_1087b2908(plVar9);
    FUN_1087b28f0(plVar3,plVar9);
    plVar9 = (long *)0x0;
    plVar3[1] = (long)plVar4;
    lVar5 = *plVar3;
    while (plVar4 != plVar9) {
      func_0x0001087b68ac();
      lVar5 = extraout_x8;
      plVar9 = extraout_x9;
    }
    plVar9 = (long *)plVar3[2];
    if (plVar9 != (long *)0x0) {
      plVar7 = (long *)plVar9[1];
      uVar6 = (long)plVar4 - 1;
      uVar1 = 0;
      if (plVar4 != (long *)0x0) {
        uVar1 = (ulong)plVar7 / (ulong)plVar4;
      }
      plVar8 = plVar7;
      if (plVar4 <= plVar7) {
        plVar8 = (long *)((long)plVar7 - uVar1 * (long)plVar4);
      }
      if (((ulong)plVar4 & uVar6) == 0) {
        plVar8 = (long *)((ulong)plVar7 & uVar6);
      }
      *(long **)(lVar5 + (long)plVar8 * 8) = plVar3 + 2;
      while (plVar3 = plVar9, plVar9 = (long *)*plVar3, plVar9 != (long *)0x0) {
        plVar7 = (long *)plVar9[1];
        if (((ulong)plVar4 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (plVar4 <= plVar7) {
          uVar1 = 0;
          if (plVar4 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)plVar4;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar4);
        }
        if (plVar7 != plVar8) {
          if (*(long *)(lVar5 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar7 * 8) = plVar3;
            plVar8 = plVar7;
          }
          else {
            *plVar3 = *plVar9;
            func_0x0001087b5c44();
            lVar5 = extraout_x8_00;
            plVar9 = extraout_x9_00;
            uVar6 = extraout_x10;
            plVar8 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1087b2808; end: 1087b28ef;  */

void FUN_1087b2808(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long *plVar3;
  long *plVar4;
  long *extraout_x9_00;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_1087b28f0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1087b2908(plVar3);
    FUN_1087b28f0(param_1,plVar3);
    uVar2 = 0;
    param_1[1] = param_2;
    lVar1 = *param_1;
    while (param_2 != uVar2) {
      func_0x0001087b68ac();
      lVar1 = extraout_x8;
      uVar2 = extraout_x9;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            func_0x0001087b5c44();
            lVar1 = extraout_x8_00;
            plVar3 = extraout_x9_00;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1087b28f0; end: 1087b2907;  */

void FUN_1087b28f0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087b2908; end: 1087b2923;  */

long FUN_1087b2908(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_1087b2948();
  return param_1;
}



/* Entry: 1087b2924; end: 1087b2947;  */

undefined8 FUN_1087b2924(undefined8 param_1)

{
  FUN_1087b2948(param_1,0);
  return param_1;
}



/* Entry: 1087b2948; end: 1087b295f;  */

void FUN_1087b2948(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_1087b245c(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1087b2960; end: 1087b299f;  */

void FUN_1087b2960(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1087b245c(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1087b29a0; end: 1087b29ab;  */

void FUN_1087b29a0(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x0001087b5e24();
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087b29ac; end: 1087b29c3;  */

void FUN_1087b29ac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087b29c4; end: 1087b2a83;  */

long FUN_1087b29c4(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar8 = (long *)param_1[1];
  if ((plVar8 != (long *)0x0) && (param_1[3] != 0)) {
    plVar3 = param_1;
    func_0x0001087b6494();
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)((ulong)plVar3 & uVar9);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        uVar7 = (uint)plVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)plVar3 / uVar7;
        }
        plVar10 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    plVar4 = plVar3;
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        plVar5 = (long *)plVar6[1];
        if (plVar5 != plVar3) break;
        func_0x0001087b64a0();
        if ((int)plVar4 != 0) {
          return (long)plVar6;
        }
      }
      if (((ulong)plVar8 & uVar9) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar9);
      }
      else if (plVar8 <= plVar5) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar5 / (ulong)plVar8;
        }
        plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar8);
      }
    } while (plVar5 == plVar10);
  }
  return 0;
}



/* Entry: 1087b2a84; end: 1087b2ab7;  */

long FUN_1087b2a84(long param_1)

{
  if (*(char *)(param_1 + 0x2a0) == '\x01') {
    FUN_108788d40();
  }
  else {
    FUN_108788e18();
  }
  return param_1;
}



/* Entry: 1087b2ab8; end: 1087b2c67;  */

void FUN_1087b2ab8(long param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined8 unaff_x21;
  
  func_0x000107c313f8();
  func_0x0001087b6690();
  func_0x0001087b5ddc();
  func_0x0001087b61f4();
  func_0x0001087b6604();
  *(undefined4 *)(param_1 + 0x40) = param_2;
  func_0x0001087b6014();
  func_0x0001087b6578();
  *(undefined4 *)(param_1 + 0x68) = param_2;
  func_0x0001087b6280();
  uVar1 = 7;
  func_0x000107c313dc(param_1 + 0x88);
  func_0x0001087b656c();
  *(undefined8 *)(param_1 + 0xa0) = unaff_x21;
  func_0x0001087b65ec();
  *(undefined8 *)(param_1 + 0xa8) = unaff_x21;
  func_0x0001087b6658();
  *(int *)(param_1 + 0xb0) = (int)unaff_x21;
  func_0x0001087b65c8();
  *(int *)(param_1 + 0xb4) = (int)unaff_x21;
  func_0x0001087b6640(param_1 + 0xb8);
  func_0x0001087b6590();
  *(char *)(param_1 + 0xd0) = (char)unaff_x21;
  func_0x0001087b65bc();
  *(undefined8 *)(param_1 + 0xd8) = unaff_x21;
  *(undefined1 *)(param_1 + 0xe0) = uVar1;
  func_0x0001087b664c(param_1 + 0xe8);
  func_0x0001087b65b0(param_1 + 0x108);
  func_0x0001087b6634(param_1 + 0x128);
  func_0x0001087b65e0();
  *(char *)(param_1 + 0x148) = (char)unaff_x21;
  func_0x0001087b6610(param_1 + 0x150);
  func_0x0001087b6628(param_1 + 0x170);
  func_0x0001087b6584();
  *(char *)(param_1 + 0x238) = (char)unaff_x21;
  func_0x0001087b659c(param_1 + 0x240);
  func_0x0001087b661c(param_1 + 0x260);
  func_0x0001087b65d4();
  *(undefined8 *)(param_1 + 0x280) = unaff_x21;
  *(undefined1 *)(param_1 + 0x288) = uVar1;
  func_0x0001087b65f8();
  *(undefined8 *)(param_1 + 0x290) = unaff_x21;
  *(undefined1 *)(param_1 + 0x298) = uVar1;
  return;
}



/* Entry: 1087b2c68; end: 1087b2dd7;  */

void FUN_1087b2c68(long param_1)

{
  int iVar1;
  code *extraout_x8;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [64];
  undefined1 auStack_d8 [56];
  undefined8 uStack_a0;
  int iStack_98;
  char cStack_88;
  undefined1 auStack_80 [80];
  
  plVar4 = *(long **)(param_1 + 0x10);
  iVar1 = (int)plVar4[0x154];
  func_0x0001087b5aa8();
  (*extraout_x8)();
  if (iVar1 == 0) {
    FUN_1087a9ad0(auStack_80,1,plVar4 + 7,plVar4[5]);
    FUN_108860568(auStack_d8,*plVar4,auStack_80);
    if (cStack_88 == '\x01') {
      if (iStack_98 == 3) {
        uVar2 = *(undefined8 *)(*plVar4 + 0x18);
        func_0x000107c278b8(auStack_130,&UNK_10f4bb22f);
        func_0x000107c31420(auStack_118,uVar2,auStack_130);
        func_0x0001087b5d28();
        iStack_98 = 2;
        FUN_10886024c(*plVar4,auStack_d8);
        func_0x000107c31428(auStack_118);
        func_0x000107c31424(auStack_118);
      }
      lVar3 = plVar4[2];
      FUN_108848684(auStack_118);
      FUN_10879785c(lVar3,auStack_118,uStack_a0,0);
      func_0x000107c27914(auStack_118);
    }
    func_0x000107c298e0(auStack_d8);
    func_0x000107c27914(auStack_80);
  }
  return;
}



/* Entry: 1087b2dd8; end: 1087b2df7;  */

void FUN_1087b2dd8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087acf64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087b2df8; end: 1087b2e0f;  */

void FUN_1087b2df8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087b2e10; end: 1087b2e6b;  */

void FUN_1087b2e10(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = **(undefined8 **)*param_1;
  lStack_28 = (*(undefined8 **)*param_1)[1];
  if (lStack_28 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10 != 0);
  }
  func_0x000108797934();
  func_0x000108797c2c(&uStack_30);
  return;
}



/* Entry: 1087b2e6c; end: 1087b2f0b;  */

void FUN_1087b2e6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  puVar1 = (undefined8 *)0xb08;
  __Znwm();
  *puVar1 = FUN_1087b564c;
  puVar1[1] = FUN_1087b577c;
  FUN_1087b378c(puVar1 + 4,param_2);
  func_0x0001087adea8(puVar1 + 2);
  FUN_1087ad990(param_1,puVar1 + 2);
  puVar1[0x15e] = param_3;
  *(undefined1 *)(puVar1 + 0x160) = 0;
  func_0x0001087b5aa8(*param_3);
  (*extraout_x8)();
  return;
}



/* Entry: 1087b2f0c; end: 1087b3547;  */

void FUN_1087b2f0c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint *puVar3;
  uint extraout_w8;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar6 = *param_2;
  puVar2 = (undefined8 *)0xb30;
  __Znwm();
  *puVar2 = FUN_1087b515c;
  puVar2[1] = FUN_1087b561c;
  puVar2[0x162] = lVar6;
  puVar2[0x161] = param_2;
  func_0x0001087adea8(puVar2 + 2);
  FUN_1087ad990(param_1,puVar2 + 2);
  func_0x000107c27994(puVar2 + 0x157,param_2 + 10);
  puVar3 = (uint *)(puVar2 + 0x154);
  puVar2[0x163] = param_2[0x149];
  puVar2[0x164] = param_2[0xd];
  plVar7 = *(long **)(lVar6 + 0x10);
  FUN_108792710(puVar2 + 4,param_2 + 7);
  lVar6 = param_2[4];
  puVar2[0x15b] = param_2[5];
  puVar2[0x15a] = lVar6;
  puVar2[0x15c] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  (**(code **)(*plVar7 + 0x10))(puVar2 + 0x15d,plVar7,puVar2 + 4,puVar2 + 0x15a,param_2 + 0x157);
  func_0x0001087b6800(puVar2[0x15d]);
  do {
    func_0x0001087b58e8();
  } while (extraout_w10 != 0);
  func_0x0001087b5a94(*(undefined8 *)puVar3);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0x165) = 0;
    lVar6 = puVar2[0x154];
    func_0x0001087b58a4();
    lVar8 = *plVar7;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar7;
    }
    plVar4 = (long *)(lVar6 + 0x10);
    do {
      if (*plVar4 == 0) {
        func_0x0001087b5968();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x0001087b5c38();
        plVar4 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x0001087b5978();
        if ((bool)in_ZR) {
          func_0x0001087b5948();
          func_0x0001087b5924();
          func_0x0001087b5878();
          *(long **)(lVar6 + 0x90) = plVar7;
        }
        func_0x0001087b5988();
        *(long *)(extraout_x8_01 + 0x20) = lVar8;
        func_0x0001087b5958(*(undefined8 *)(lVar6 + 0x90));
        *(undefined8 *)(lVar6 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1087b3548();
  uVar1 = *puVar3;
  func_0x0001087b5b30();
  func_0x0001087b5cb4();
  func_0x0001087b5f64();
  func_0x0001087b5bf4();
  *(uint *)(puVar2 + 0x15e) = uVar1;
  if ((uVar1 < 8) && ((1 << (ulong)(uVar1 & 0x1f) & 0xcfU) != 0)) {
    func_0x0001087b62e8();
    FUN_10879785c();
  }
  if ((*(char *)(puVar2[0x161] + 0x18) != '\x01') || (7 < uVar1)) goto LAB_1087b310c;
  func_0x0001087b62ac();
  switch(uVar1) {
  case 0:
    FUN_1087ab728();
    goto LAB_1087b310c;
  default:
    break;
  case 4:
  case 5:
    goto LAB_1087b310c;
  case 6:
    break;
  case 7:
    break;
  }
  FUN_1087ab85c();
LAB_1087b310c:
  func_0x0001087b6164(puVar2[0x162]);
  func_0x0001087ade80(puVar2 + 2,puVar2 + 0x15e);
  func_0x0001087b5f6c();
  func_0x0001087b5a40();
  func_0x0001087b5a84();
  return;
}



/* Entry: 1087b3548; end: 1087b358b;  */

long FUN_1087b3548(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  undefined1 auStack_28 [8];
  
  func_0x0001087b6724();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x0001087b5b7c(auStack_28);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087b3580);
  (*pcVar1)();
}



/* Entry: 1087b358c; end: 1087b3703;  */

void FUN_1087b358c(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x19;
  
  func_0x0001087b6300();
  FUN_108794e0c();
  if (param_1 == (long *)0x0) {
    return;
  }
  func_0x000107c28850(param_1 + 5);
  uVar4 = *(ulong *)(unaff_x19 + 0x20);
  lVar2 = *param_1;
  uVar3 = param_1[1];
  uVar6 = uVar4 - 1;
  if ((uVar4 & uVar6) == 0) {
    uVar3 = uVar6 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar7 = *(long *)(unaff_x19 + 0x18);
  plVar1 = *(long **)(lVar7 + uVar3 * 8);
  do {
    plVar5 = plVar1;
    plVar1 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_1);
  if (plVar5 == (long *)(unaff_x19 + 0x28)) {
LAB_1087b3630:
    if (lVar2 == 0) {
LAB_1087b3664:
      *(undefined8 *)(lVar7 + uVar3 * 8) = 0;
      lVar2 = *param_1;
      goto LAB_1087b366c;
    }
    uVar8 = *(ulong *)(lVar2 + 8);
    if ((uVar4 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar4 <= uVar8) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar8 / uVar4;
        }
        uVar9 = uVar8 - uVar9 * uVar4;
      }
    }
    if (uVar9 != uVar3) goto LAB_1087b3664;
  }
  else {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar9 = 0;
      if (uVar4 != 0) {
        uVar9 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar9 * uVar4;
    }
    if (uVar8 != uVar3) goto LAB_1087b3630;
LAB_1087b366c:
    if (lVar2 == 0) goto LAB_1087b36a4;
    uVar8 = *(ulong *)(lVar2 + 8);
  }
  if ((uVar4 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar4 <= uVar8) {
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar8 / uVar4;
    }
    uVar8 = uVar8 - uVar6 * uVar4;
  }
  if (uVar8 != uVar3) {
    *(long **)(lVar7 + uVar8 * 8) = plVar5;
    lVar2 = *param_1;
  }
LAB_1087b36a4:
  *plVar5 = lVar2;
  *param_1 = 0;
  *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x19 + 0x30) + -1;
  func_0x0001087b6354();
  func_0x0001087b36cc();
  return;
}



/* Entry: 1087b3704; end: 1087b3757;  */

void FUN_1087b3704(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1087b3758();
  if (lVar1 != 0) {
    param_2 = lVar1;
  }
  func_0x000107c278b8(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1087b3758; end: 1087b378b;  */

void FUN_1087b3758(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uStack_20 = 0;
  ___cxa_demangle(param_1,0,&uStack_20,&uStack_14);
  return;
}



/* Entry: 1087b378c; end: 1087b3827;  */

void FUN_1087b378c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c33580();
  *param_1 = *param_2;
  FUN_1087b3828(param_1 + 1,param_2 + 1);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  FUN_108792710(unaff_x19 + 0x38,unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0xab8) = *(undefined8 *)(unaff_x20 + 0xab8);
  *(undefined8 *)(unaff_x20 + 0xab8) = 0;
  *(undefined8 *)(unaff_x19 + 0xac0) = *(undefined8 *)(unaff_x20 + 0xac0);
  *(undefined1 *)(unaff_x19 + 0xac8) = 0;
  *(undefined1 *)(unaff_x20 + 0xac8) = 1;
  return;
}



/* Entry: 1087b3828; end: 1087b386b;  */

void FUN_1087b3828(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10 != 0);
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 1087b386c; end: 1087b38d7;  */

long FUN_1087b386c(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0xac8) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0xac0);
    iVar1 = *(int *)(lVar2 + 0x40) + -1;
    *(int *)(lVar2 + 0x40) = iVar1;
    if (*(char *)(lVar2 + 0x44) == '\x01' && iVar1 == 0) {
      func_0x000107c28850(lVar2 + 0x50);
    }
  }
  func_0x000107c27f9c(param_1 + 0xab8);
  func_0x000108794568(param_1 + 0x38);
  FUN_1087a8f08(param_1 + 0x20);
  FUN_1087acf98(param_1 + 8);
  return param_1;
}



/* Entry: 1087b38d8; end: 1087b3967;  */

void FUN_1087b38d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087b3968; end: 1087b3acf;  */

void FUN_1087b3968(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087b5d20();
    lVar6 = *plVar4;
    func_0x0001087b5aa0();
    func_0x0001087b5b60();
    uVar3 = lVar6 == 1;
    if ((bool)uVar3) {
      func_0x0001087b5a94(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087b5e30();
        func_0x0001087b6148();
        func_0x0001087b5b14();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087b5a20();
        func_0x0001087b61c0();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087b3a80);
      (*pcVar2)();
    }
    func_0x0001087b5ef8(param_1[7]);
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
    func_0x0001087b5a10();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087b68a0();
      func_0x0001087b58a4();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087b633c();
      plVar4 = extraout_x8;
      do {
        if (*plVar4 == 0) {
          func_0x0001087b5968();
          plVar4 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x0001087b5c38();
          plVar4 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x0001087b5b40();
          if ((bool)uVar3) {
            func_0x0001087b5948();
            func_0x0001087b58d8();
            func_0x0001087b5934();
            func_0x0001087b5e90();
          }
          func_0x0001087b58f8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087b5d20();
  func_0x0001087b6024();
  func_0x0001087b5aa0();
  func_0x0001087b5a40();
  func_0x0001087b5ac0();
  func_0x0001087b5b28();
  func_0x0001087b5b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b3ad0; end: 1087b3b17;  */

void FUN_1087b3ad0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087b5a40();
  func_0x0001087b5ac0();
  func_0x0001087b5b28();
  func_0x0001087b5b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b3b18; end: 1087b3b8f;  */

void FUN_1087b3b18(long param_1)

{
  func_0x000107c28870(param_1 + 0x48);
  func_0x0001087b6024();
  func_0x0001087b5aa0();
  func_0x0001087b5b60();
  func_0x0001087b5ac0();
  func_0x0001087b5be4();
  func_0x0001087b5c30();
  func_0x0001087b5a40();
  func_0x0001087b5b28();
  func_0x0001087b5b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b3b90; end: 1087b3bc7;  */

void FUN_1087b3b90(void)

{
  func_0x0001087b64fc();
  func_0x0001087b5b60();
  func_0x0001087b5ac0();
  func_0x0001087b5be4();
  func_0x0001087b5c30();
  func_0x0001087b5a40();
  func_0x0001087b5b28();
  func_0x0001087b5b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b3bc8; end: 1087b3d2b;  */

void FUN_1087b3bc8(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087b5d20();
    lVar6 = *plVar4;
    func_0x0001087b5aa0();
    func_0x0001087b5b60();
    uVar3 = lVar6 == 1;
    if ((bool)uVar3) {
      func_0x0001087b5a94(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087b5e30();
        func_0x0001087b6148();
        func_0x0001087b5b14();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087b5a20();
        func_0x0001087b61c0();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087b3cdc);
      (*pcVar2)();
    }
    func_0x0001087b5ef8(param_1[7]);
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
    func_0x0001087b5a10();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087b68a0();
      func_0x0001087b58a4();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087b633c();
      plVar4 = extraout_x8;
      do {
        if (*plVar4 == 0) {
          func_0x0001087b5968();
          plVar4 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x0001087b5c38();
          plVar4 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x0001087b5b40();
          if ((bool)uVar3) {
            func_0x0001087b5948();
            func_0x0001087b58d8();
            func_0x0001087b5934();
            func_0x0001087b5e90();
          }
          func_0x0001087b58f8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087b63a0();
  func_0x0001087b5aa0();
  func_0x0001087b5ca4();
  func_0x0001087b5a40();
  func_0x0001087b5ac0();
  func_0x0001087b5b28();
  func_0x0001087b5b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b3d2c; end: 1087b3d73;  */

void FUN_1087b3d2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087b5a40();
  func_0x0001087b5ac0();
  func_0x0001087b5b28();
  func_0x0001087b5b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b3d74; end: 1087b3de7;  */

void FUN_1087b3d74(long param_1)

{
  func_0x000107c28834(param_1 + 0x48);
  func_0x0001087b5aa0();
  func_0x0001087b5b60();
  func_0x0001087b5ac0();
  func_0x0001087b5be4();
  func_0x0001087b5c30();
  func_0x0001087b5ca4();
  func_0x0001087b5a40();
  func_0x0001087b5b28();
  func_0x0001087b5b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b3de8; end: 1087b3e1f;  */

void FUN_1087b3de8(void)

{
  func_0x0001087b64fc();
  func_0x0001087b5b60();
  func_0x0001087b5ac0();
  func_0x0001087b5be4();
  func_0x0001087b5c30();
  func_0x0001087b5a40();
  func_0x0001087b5b28();
  func_0x0001087b5b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b3e20; end: 1087b3f3b;  */

void FUN_1087b3e20(long param_1,int param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x000107c33538();
  uStack_48 = extraout_x8;
  if ((*(byte *)(lVar1 + 0xc0) & 1) == 0) {
    func_0x000107c28870(param_1 + 0x88);
    func_0x0001087b5f38();
    func_0x0001087b5fa0();
    func_0x0001087b5bfc();
    func_0x0001087b5fc0();
    func_0x0001087b5f04();
  }
  else {
    func_0x000107c28834(lVar1 + 0x78);
    func_0x0001087b5a8c();
    func_0x0001087b5b30();
    func_0x0001087b5bfc();
  }
  func_0x0001087b5b30();
  func_0x0001087b5a8c();
  func_0x0001087b5cbc();
  func_0x0001087b636c();
  func_0x0001087a3420(auStack_b8);
  param_1 = param_1 + 0x20;
  func_0x0001087a33a8();
  while( true ) {
    func_0x0001087b5a40();
    func_0x0001087b5a84();
    func_0x000107c33530(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if (param_2 == 0) break;
    func_0x0001087b5f38();
    func_0x0001087b5fa0();
    func_0x0001087b5bfc();
    func_0x0001087b5fc0();
    func_0x0001087b5f04();
    func_0x0001087b5b30();
    func_0x0001087b5a8c();
    func_0x0001087b5f7c();
    func_0x0001087b5a7c();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    func_0x0001087b5f38();
    func_0x0001087b5fa0();
    func_0x0001087b5bfc();
    func_0x0001087b5fc0();
    func_0x0001087b5f04();
  }
  else {
    func_0x0001087b5a8c();
    func_0x0001087b5b30();
    func_0x0001087b5bfc();
  }
  func_0x0001087b5b30();
  func_0x0001087b5a8c();
  func_0x0001087b5a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b3f3c; end: 1087b3faf;  */

void FUN_1087b3f3c(long param_1)

{
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    func_0x0001087b5f38();
    func_0x0001087b5fa0();
    func_0x0001087b5bfc();
    func_0x0001087b5fc0();
    func_0x0001087b5f04();
  }
  else {
    func_0x0001087b5a8c();
    func_0x0001087b5b30();
    func_0x0001087b5bfc();
  }
  func_0x0001087b5b30();
  func_0x0001087b5a8c();
  func_0x0001087b5a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b3fb0; end: 1087b407f;  */

void FUN_1087b3fb0(long param_1)

{
  code *pcVar1;
  long *plVar2;
  uint extraout_w8;
  uint extraout_w8_00;
  long lVar3;
  
  plVar2 = (long *)(param_1 + 0x30);
  func_0x000107c28870();
  lVar3 = *plVar2;
  func_0x0001087b6034();
  func_0x0001087b5b74();
  if (lVar3 == 1) {
    func_0x0001087b5a94(*(undefined8 *)(param_1 + 0x28));
    if ((extraout_w8_00 >> 5 & 1) == 0) goto LAB_1087b4010;
    func_0x0001087b5b7c(*(undefined8 *)(param_1 + 0x28),param_1 + 0x48);
    __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x48);
  }
  else {
    if ((lVar3 != 0) ||
       (func_0x0001087b5a94(*(undefined8 *)(param_1 + 0x20)), (extraout_w8 >> 5 & 1) == 0)) {
LAB_1087b4010:
      func_0x0001087b5ca4();
      func_0x0001087b5a40();
      func_0x0001087b60ec();
      func_0x0001087b5dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
    func_0x0001087b5b7c(*(undefined8 *)(param_1 + 0x20),param_1 + 0x40);
    __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x40);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087b4044);
  (*pcVar1)();
}



/* Entry: 1087b4080; end: 1087b40b3;  */

void FUN_1087b4080(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x30);
  func_0x0001087b5b74();
  func_0x0001087b5a40();
  func_0x0001087b60ec();
  func_0x0001087b5dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b40b4; end: 1087b487b;  */

void FUN_1087b40b4(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  uint extraout_w8;
  uint extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long alStack_120 [6];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_68;
  
  lVar4 = param_1;
  func_0x000107c33538();
  uStack_68 = extraout_x8;
  FUN_1087afeec(lVar4 + 0xc0);
  func_0x0001087b686c();
  func_0x0001087b07bc(param_1 + 0x28);
  func_0x0001087b66d4();
  func_0x0001087b63b4();
  func_0x0001087b604c();
  func_0x0001087b5f14();
  func_0x0001087b5a94(**(undefined8 **)(param_1 + 0x2a0));
  if (((extraout_w8 >> 1 & 1) != 0) ||
     ((func_0x0001087b5a94(**(undefined8 **)(param_1 + 0x2a0)), (extraout_w8_00 >> 5 & 1) != 0 &&
      (func_0x0001087b6744(), extraout_w8_01 == 0)))) {
    func_0x0001087b62a0();
    uStack_e0 = 0;
    uStack_d8 = 0;
    lStack_f0 = extraout_x8_00 + 0x10;
    uStack_e8 = 0;
    uStack_d0 = 0x13;
    func_0x0001087b6080();
    FUN_1087b5eb8();
    plVar5 = &lStack_f0;
    FUN_108791610(plVar5,param_1 + 0x238);
    FUN_108791a34(alStack_120,plVar5);
    lVar4 = *(long *)(param_1 + 0x288);
    func_0x0001087b6078();
    func_0x0001087b6510();
    plVar5 = *(long **)(lVar4 + 0x48);
    FUN_108791a34(param_1 + 0x110,alStack_120);
    func_0x0001087b622c(*(undefined8 *)(*plVar5 + 0x60));
    func_0x0001087b605c();
    FUN_108788618(alStack_120);
  }
  func_0x000107c28288(param_1 + 0x1a8);
  lVar4 = *(long *)(*(long *)(param_1 + 0x288) + 0x88);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x0001087b5aa8();
    uVar3 = (undefined4)lVar4;
    (*extraout_x8_01)();
  }
  lVar4 = param_1 + 0x1a8;
  FUN_1087b023c();
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar3);
  lStack_f0 = lVar4;
  func_0x0001087b63cc();
  plVar5 = (long *)(param_1 + 0x18);
  lVar4 = *plVar5;
  do {
    alStack_120[0] = 0;
    iVar1 = (int)lVar4 + 0x10;
    plVar2 = alStack_120;
    func_0x0001087b5a50();
    if (iVar1 != 0) {
      in_ZR = *(char *)(lVar4 + 0x118) == '\x01';
      if ((bool)in_ZR) {
        func_0x0001087a3420(lVar4 + 0xa8);
        *(undefined1 *)(lVar4 + 0x118) = 0;
      }
      FUN_1087b151c(lVar4 + 0x98,&lStack_f0);
      *(undefined1 *)(lVar4 + 0x118) = 1;
      func_0x0001087b6348(lVar4 + 0x10);
      plVar2 = plVar5;
      func_0x000107c31508(lVar4);
      break;
    }
  } while (((uint)alStack_120[0] >> 1 & 1) == 0);
  func_0x0001087b6234(plVar5);
  plVar5 = &uStack_e0;
  func_0x0001087a3420(plVar5);
  func_0x0001087b5fa8();
  func_0x0001087b5e10();
  func_0x0001087b6140();
  func_0x0001087b6174();
  func_0x0001087b5dcc();
  while( true ) {
    func_0x0001087b5a40();
    func_0x0001087b5a84();
    func_0x000107c33530(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)plVar2 == 0) break;
    func_0x0001087b605c();
    plVar5 = alStack_120;
    FUN_108788618();
    func_0x0001087b5fa8();
    func_0x0001087b5e10();
    func_0x0001087b6140();
    func_0x0001087b6174();
    func_0x0001087b5dcc();
    func_0x0001087b5b38();
    func_0x0001087b5a7c();
    ___cxa_end_catch();
  }
  func_0x0001087b5bdc();
  func_0x000107c27f9c(plVar5 + 0x18);
  func_0x0001087b5f14();
  func_0x0001087b5fa8();
  func_0x0001087b5e10();
  func_0x0001087b6140();
  func_0x000108794594(plVar5 + 0x4a);
  func_0x0001087b5dcc();
  func_0x0001087b5a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar5);
  return;
}



/* Entry: 1087b487c; end: 1087b48eb;  */

void FUN_1087b487c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xc0);
  func_0x0001087b5f14();
  func_0x0001087b5fa8();
  func_0x0001087b5e10();
  func_0x0001087b6140();
  func_0x000108794594(param_1 + 0x250);
  func_0x0001087b5dcc();
  func_0x0001087b5a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b48ec; end: 1087b4c2f;  */

void FUN_1087b48ec(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint extraout_w8;
  long extraout_x8;
  long *plVar14;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_68;
  
  plVar15 = param_1 + 0x1b;
  plVar1 = param_1 + 0x1c;
  plVar9 = param_1;
  func_0x0001087b58a4();
  do {
    if (((uint)*(undefined8 *)(*plVar15 + 0x10) >> 5 & 1) != 0) {
      func_0x0001087b5b7c(*plVar15,param_1 + 0x14);
      __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x14);
LAB_1087b4bdc:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1087b4be0);
      (*pcVar6)();
    }
    func_0x0001087b6378();
    func_0x0001087b5b30();
    func_0x0001087b5a8c();
    uVar10 = param_1[0x19];
    bVar7 = (ulong)param_1[0x1a] <= uVar10;
    if (bVar7) {
      lVar17 = param_1[0x18];
      if (((long)(uVar10 - lVar17) >> 7) + 1U >> 0x39 != 0) {
        FUN_1087aee8c();
        goto LAB_1087b4bdc;
      }
      func_0x0001087b5fe8();
      lVar16 = extraout_x9;
      if (bVar7) {
        lVar16 = extraout_x8;
      }
      if (lVar16 == 0) {
        lVar16 = 0;
        param_2 = 0;
      }
      else {
        FUN_1087aee98();
      }
      lVar17 = lVar16 + (uVar10 - lVar17);
      FUN_1087b151c(lVar17,param_1 + 4);
      lVar18 = param_1[0x18];
      lVar3 = param_1[0x19];
      lVar2 = lVar17 + (lVar18 - lVar3);
      param_1[0x1b] = lVar2;
      param_1[0x1c] = lVar2;
      param_1[0x14] = (long)(param_1 + 0x1a);
      param_1[0x15] = (long)plVar1;
      param_1[0x16] = (long)plVar15;
      lVar11 = lVar2;
      for (lVar12 = lVar18; lVar12 != lVar3; lVar12 = lVar12 + 0x80) {
        FUN_1087b151c(lVar11,lVar12);
        lVar11 = *plVar15 + 0x80;
        *plVar15 = lVar11;
      }
      *(undefined1 *)(param_1 + 0x17) = 1;
      for (; lVar18 != lVar3; lVar18 = lVar18 + 0x80) {
        func_0x0001087a3420(lVar18 + 0x10);
      }
      lVar17 = lVar17 + 0x80;
      FUN_1087aeeec(param_1 + 0x14);
      lVar12 = param_1[0x18];
      param_1[0x18] = lVar2;
      param_1[0x19] = lVar17;
      param_1[0x1a] = lVar16 + param_2 * 0x80;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    else {
      FUN_1087b151c(uVar10,param_1 + 4);
      lVar17 = uVar10 + 0x80;
    }
    lVar16 = param_1[0x21];
    param_1[0x19] = lVar17;
    iVar4 = *(int *)(lVar17 + -0x6c);
    func_0x0001087b602c();
    if (iVar4 != 0) {
LAB_1087b4b1c:
      plVar15 = param_1 + 3;
      lVar17 = *plVar15;
      break;
    }
    plVar14 = (long *)(lVar16 + 8);
    param_1[0x21] = (long)plVar14;
    uVar8 = plVar14 == (long *)param_1[0x20];
    if ((bool)uVar8) goto LAB_1087b4b1c;
    plVar13 = (long *)param_1[0x1d];
    param_2 = *plVar14;
    FUN_1087af044(plVar1,plVar13,param_2,param_1[0x1e],param_1[0x1f]);
    func_0x0001087b6800(*plVar1);
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
    func_0x0001087b5a94(*plVar15);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x22) = 0;
      lVar17 = *plVar15;
      lVar16 = *plVar9;
      if (lVar16 == 0) {
        func_0x000107c3a5c0();
        lVar16 = *plVar13;
      }
      plVar14 = (long *)(lVar17 + 0x10);
      do {
        if (*plVar14 == 0) {
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *plVar14 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001087b6794();
          plVar14 = extraout_x8_01;
          uVar5 = extraout_w9_00;
          uVar10 = extraout_x10_00;
        }
        else {
          func_0x0001087b67a0();
          plVar14 = extraout_x8_00;
          uVar5 = extraout_w9;
          uVar10 = extraout_x10;
        }
        if ((uVar10 & 1) != 0) {
          func_0x0001087b5978();
          if ((bool)uVar8) {
            func_0x0001087b5948();
            func_0x0001087b5924();
            func_0x0001087b5878();
            *(long **)(lVar17 + 0x90) = plVar13;
          }
          func_0x0001087b5988();
          *(long *)(extraout_x8_02 + 0x20) = lVar16;
          func_0x0001087b5958(*(undefined8 *)(lVar17 + 0x90));
          *(undefined8 *)(lVar17 + 0x10) = 0;
          return;
        }
      } while ((uVar5 >> 1 & 1) == 0);
    }
  } while( true );
  while (((uint)uStack_68 >> 1 & 1) == 0) {
    uStack_68 = 0;
    lVar16 = lVar17 + 0x10;
    func_0x0001087b5a50(lVar16,&uStack_68);
    if ((int)lVar16 != 0) {
      if (*(char *)(lVar17 + 0xb0) == '\x01') {
        FUN_1087aefd0(lVar17 + 0x98);
      }
      lVar16 = param_1[0x18];
      *(long *)(lVar17 + 0xa0) = param_1[0x19];
      *(long *)(lVar17 + 0x98) = lVar16;
      *(long *)(lVar17 + 0xa8) = param_1[0x1a];
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      *(undefined1 *)(lVar17 + 0xb0) = 1;
      func_0x0001087b6348(lVar17 + 0x10);
      func_0x000107c31508(lVar17,plVar15);
      break;
    }
  }
  func_0x0001087b6234(plVar15);
  func_0x0001087b5f0c();
  func_0x0001087b5a40();
  func_0x0001087b5a84();
  return;
}



/* Entry: 1087b4c30; end: 1087b4c63;  */

void FUN_1087b4c30(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xd8);
  func_0x000107c27f9c(param_1 + 0xe0);
  func_0x0001087b5f0c();
  func_0x0001087b5a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b4c64; end: 1087b511b;  */

void FUN_1087b4c64(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long *plVar15;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  undefined4 extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  ulong extraout_x9;
  long extraout_x9_00;
  long lVar16;
  int extraout_w10;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lStack_ab0;
  long lStack_aa8;
  long lStack_aa0;
  undefined1 auStack_a98 [2696];
  undefined8 uStack_10;
  
  func_0x000107c335c0();
  plVar9 = param_1;
  func_0x000107c33538();
  plVar17 = plVar9 + 0x16b;
  plVar1 = plVar9 + 0x154;
  plVar10 = plVar9;
  uStack_10 = extraout_x8;
  func_0x0001087b58a4();
  do {
    func_0x0001087b5a94(*plVar1);
    if ((extraout_w8 >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(param_1 + 0x170,*plVar1 + 0x18);
      __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x170);
LAB_1087b5034:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1087b5038);
      (*pcVar4)();
    }
    uVar19 = param_1[0x16c];
    bVar5 = (ulong)param_1[0x16d] <= uVar19;
    bVar6 = uVar19 == param_1[0x16d];
    if (bVar5) {
      lVar18 = *plVar17;
      func_0x0001087b6858();
      if (bVar5 && !bVar6) {
        FUN_1087aefc4();
        goto LAB_1087b5034;
      }
      func_0x0001087b61c8((extraout_x8_00 - extraout_x10) / 0x18);
      uVar2 = extraout_x9;
      if (bVar5) {
        uVar2 = extraout_x11;
      }
      param_1[0x162] = (long)(plVar9 + 0x16d);
      if (uVar2 == 0) {
        lVar21 = 0;
      }
      else {
        if (extraout_x11 < uVar2) {
          func_0x000104bd35f4();
          goto LAB_1087b5034;
        }
        lVar21 = uVar2 * 0x18;
        __Znwm();
      }
      param_1[0x15e] = lVar21;
      lVar16 = lVar21 + (uVar19 - lVar18);
      param_1[0x160] = lVar16;
      param_1[0x15f] = lVar16;
      lVar21 = lVar21 + uVar2 * 0x18;
      param_1[0x161] = lVar21;
      func_0x0001087b6550();
      lVar22 = param_1[0x16c];
      lVar18 = param_1[0x16b];
      lVar13 = lVar22 - lVar18;
      lVar14 = lVar18;
      while (lVar14 != lVar22) {
        func_0x0001087b5d78();
        lVar14 = extraout_x9_00;
      }
      for (; lVar18 != lVar22; lVar18 = lVar18 + 0x18) {
        FUN_1087aefd0();
      }
      lVar18 = lVar16 + 0x18;
      lVar14 = param_1[0x16b];
      param_1[0x16b] = lVar16 + (lVar13 / -0x18) * 0x18;
      param_1[0x15f] = lVar14;
      param_1[0x16c] = lVar18;
      param_1[0x160] = lVar14;
      lVar16 = param_1[0x16d];
      param_1[0x16d] = lVar21;
      param_1[0x161] = lVar16;
      param_1[0x15e] = lVar14;
      func_0x0001087b615c();
    }
    else {
      func_0x0001087b6550();
      lVar18 = uVar19 + 0x18;
    }
    param_1[0x16c] = lVar18;
    func_0x0001087b5b30();
    func_0x0001087b5cb4();
    lVar18 = param_1[0x16c];
    if (*(long *)(lVar18 + -0x18) == *(long *)(lVar18 + -0x10)) {
      iVar8 = 7;
    }
    else {
      iVar8 = *(int *)(*(long *)(lVar18 + -0x10) + -0x6c);
    }
    *(int *)(param_1 + 0x15e) = iVar8;
    (**(code **)(**(long **)(param_1[0x171] + 8) + 8))(plVar1,*(long **)(param_1[0x171] + 8),iVar8);
    lVar21 = param_1[0x173];
    FUN_1087addf8(param_1 + 0x16e,plVar1);
    func_0x000107c299a0(plVar1);
    uVar7 = iVar8 == 1;
    *(undefined1 *)(lVar21 + 0x20) = uVar7;
    func_0x0001087b153c(lVar21 + 0x10,param_1 + 0x16e);
    lVar21 = param_1[0x16e];
    if (lVar21 == 0) {
LAB_1087b4f78:
      func_0x0001087ade30(&lStack_ab0,lVar18 + -0x18);
      func_0x000107c279a4(&lStack_ab0);
      lStack_aa8 = plVar9[0x16c];
      lStack_ab0 = *plVar17;
      lStack_aa0 = plVar9[0x16d];
      plVar9[0x16c] = 0;
      plVar9[0x16d] = 0;
      *plVar17 = 0;
      FUN_108792710(auStack_a98,param_1 + 4);
      func_0x0001087b5aa8(*(undefined8 *)(param_1[0x171] + 0x60));
      plVar12 = &lStack_ab0;
      (*extraout_x8_07)();
      func_0x0001087b5db4();
      func_0x0001087b15d4(&lStack_ab0);
      func_0x0001087b5f48();
      func_0x0001087b158c(plVar17);
      goto LAB_1087b4fe4;
    }
    func_0x0001087b5aa8(lVar21,(int)param_1[6]);
    iVar8 = (int)lVar21;
    (*extraout_x8_01)();
    if (iVar8 == 0) goto LAB_1087b4f78;
    func_0x0001087b5aa8(*(undefined8 *)(param_1[0x171] + 0x58));
    (*extraout_x8_02)();
    uVar7 = *(int *)((long)param_1 + 0xa3c) == 3;
    if ((bool)uVar7) {
      func_0x0001087b5d40();
    }
    else {
      *(undefined4 *)((long)param_1 + 0xa3c) = 3;
    }
    uVar20 = *(undefined8 *)(param_1[0x171] + 0x28);
    func_0x000107c27994(plVar1,param_1 + 7);
    param_1[0x157] = param_1[10];
    func_0x0001087b5aa8(*(undefined8 *)(param_1[0x171] + 0x18));
    (*extraout_x8_03)();
    func_0x0001087b5cf0();
    *(undefined4 *)((long)param_1 + 0xae4) = 1;
    *(undefined4 *)(param_1 + 0x15d) = extraout_w9;
    FUN_10886024c(uVar20,plVar1);
    func_0x000107c27914(plVar1);
    plVar11 = (long *)param_1[0x171];
    plVar12 = param_1 + 0x168;
    FUN_1087ad9cc(plVar9 + 0x163,plVar11,plVar12,param_1 + 4,param_1[0x172]);
    func_0x0001087b6800(plVar9[0x163]);
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
    func_0x0001087b5a94(*plVar1);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(plVar9 + 0x174) = 0;
      lVar21 = *plVar1;
      lVar18 = *plVar10;
      if (lVar18 == 0) {
        func_0x000107c3a5c0();
        lVar18 = *plVar11;
      }
      plVar15 = (long *)(lVar21 + 0x10);
      do {
        if (*plVar15 == 0) {
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001087b6794();
          plVar15 = extraout_x8_05;
          uVar3 = extraout_w9_01;
          uVar19 = extraout_x10_01;
        }
        else {
          func_0x0001087b67a0();
          plVar15 = extraout_x8_04;
          uVar3 = extraout_w9_00;
          uVar19 = extraout_x10_00;
        }
        if ((uVar19 & 1) != 0) {
          plVar17 = *(long **)(lVar21 + 0x90);
          func_0x0001087b5978();
          if ((bool)uVar7) {
            func_0x0001087b5948();
            func_0x0001087b5924();
            func_0x0001087b5878();
            *(long **)(lVar21 + 0x90) = plVar11;
          }
          func_0x0001087b5988();
          *(long *)(extraout_x8_06 + 0x20) = lVar18;
          func_0x0001087b5958(*(undefined8 *)(lVar21 + 0x90));
          *(undefined8 *)(lVar21 + 0x10) = 0;
          while (func_0x000107c33530(uStack_10), !(bool)uVar7) {
            ___stack_chk_fail();
            if ((int)plVar12 == 0) {
              do {
                __Unwind_Resume(plVar11);
                func_0x000104bd46a0();
              } while ((int)plVar12 == 0);
              func_0x0001087b5b30();
              func_0x0001087b5cb4();
            }
            else {
              func_0x0001087b15d4(&lStack_ab0);
            }
            func_0x0001087b5f48();
            func_0x0001087b158c(plVar17);
            func_0x0001087b5d30();
            func_0x0001087b5a7c();
            ___cxa_end_catch();
LAB_1087b4fe4:
            func_0x0001087b5a40();
            plVar11 = param_1 + 0x168;
            FUN_1087a8f08();
            func_0x0001087b5bf4();
            func_0x0001087b5a84();
          }
          return;
        }
      } while ((uVar3 >> 1 & 1) == 0);
    }
  } while( true );
}



/* Entry: 1087b511c; end: 1087b515b;  */

void FUN_1087b511c(void)

{
  long unaff_x19;
  
  func_0x0001087b64f0();
  func_0x000107c27f9c(unaff_x19 + 0xb18);
  func_0x0001087b5f48();
  FUN_1087b158c(unaff_x19 + 0xb58);
  func_0x0001087b5a40();
  FUN_1087a8f08(unaff_x19 + 0xb40);
  func_0x0001087b5bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b515c; end: 1087b561b;  */

void FUN_1087b515c(long param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0xaa0);
  FUN_1087b3548();
  uVar1 = *puVar2;
  func_0x0001087b5a8c();
  func_0x0001087b6534();
  func_0x0001087b5f64();
  func_0x0001087b5bf4();
  *(uint *)(param_1 + 0xaf0) = uVar1;
  if (uVar1 < 8 && (1 << (ulong)(uVar1 & 0x1f) & 0xcfU) != 0) {
    func_0x0001087b62e8();
    FUN_10879785c();
  }
  if ((*(char *)(*(long *)(param_1 + 0xb08) + 0x18) != '\x01') || (7 < uVar1)) goto LAB_1087b520c;
  func_0x0001087b62ac();
  switch(uVar1) {
  case 0:
    FUN_1087ab728();
    goto LAB_1087b520c;
  default:
    break;
  case 4:
  case 5:
    goto LAB_1087b520c;
  case 6:
    break;
  case 7:
    break;
  }
  FUN_1087ab85c();
LAB_1087b520c:
  func_0x0001087b6164(*(undefined8 *)(param_1 + 0xb10));
  func_0x0001087b5db4();
  func_0x0001087b5f6c();
  func_0x0001087b5a40();
  func_0x0001087b5a84();
  return;
}



/* Entry: 1087b561c; end: 1087b564b;  */

void FUN_1087b561c(void)

{
  func_0x0001087b64f0();
  func_0x0001087b6534();
  func_0x0001087b5f64();
  func_0x0001087b5bf4();
  func_0x0001087b5f6c();
  func_0x0001087b5a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b564c; end: 1087b577b;  */

void FUN_1087b564c(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar4;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = (long *)(param_1 + 0xaf0);
  if ((*(byte *)(param_1 + 0xb00) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1087b2f0c((undefined8 *)(param_1 + 0xaf8));
    func_0x0001087b6800(*(undefined8 *)(param_1 + 0xaf8));
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
    func_0x0001087b5a94(*plVar3);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb00) = 1;
      lVar6 = *plVar3;
      func_0x0001087b58a4();
      lVar7 = *plVar2;
      if (lVar7 == 0) {
        func_0x000107c3a5c0();
        lVar7 = *plVar2;
      }
      func_0x0001087b630c();
      plVar4 = extraout_x8;
      do {
        if (*plVar4 == 0) {
          func_0x0001087b5968();
          plVar4 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x0001087b5c38();
          plVar4 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x0001087b5978();
          if ((bool)in_ZR) {
            func_0x0001087b5948();
            func_0x0001087b5924();
            func_0x0001087b5878();
            *(long **)(lVar6 + 0x90) = plVar2;
          }
          func_0x0001087b5988();
          *(long *)(extraout_x8_02 + 0x20) = lVar7;
          func_0x0001087b5958(*(undefined8 *)(lVar6 + 0x90));
          *(undefined8 *)(lVar6 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1087b3548(plVar3);
  func_0x0001087ade80(param_1 + 0x10,plVar3);
  func_0x0001087b5b30();
  func_0x0001087b5a8c();
  func_0x0001087b5a40();
  func_0x0001087b6390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b577c; end: 1087b57bb;  */

void FUN_1087b577c(long param_1)

{
  if (*(char *)(param_1 + 0xb00) == '\x01') {
    func_0x000107c27f9c(param_1 + 0xaf0);
    func_0x000107c27f9c(param_1 + 0xaf8);
  }
  func_0x0001087b5a40();
  func_0x0001087b6390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b57bc; end: 1087b5807;  */

void FUN_1087b57bc(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x0001087b5dd4();
  func_0x0001087b5ca4();
  func_0x0001087b5a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b5808; end: 1087b582f;  */

void FUN_1087b5808(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x0001087b5a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087b5830; end: 1087b5eb7;  */

void FUN_1087b5830(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined1 uStack0000000000000048;
  undefined1 uStack0000000000000080;
  undefined1 uStack0000000000000088;
  undefined1 uStack000000000000008c;
  undefined1 uStack0000000000000090;
  undefined1 uStack00000000000000a8;
  
  uStack0000000000000048 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000088 = 0;
  uStack000000000000008c = 0;
  uStack0000000000000090 = 0;
  uStack00000000000000a8 = 0;
  puVar2 = (undefined8 *)(unaff_x19 + 0x20);
  puVar3 = (undefined8 *)&stack0x00000040;
  func_0x0001087b5d6c();
  *puVar2 = *puVar3;
  FUN_1087b12d0(puVar2 + 1,puVar3 + 1);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x4c);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined1 *)(unaff_x20 + 0x4c) = uVar1;
  func_0x000107c27c54(unaff_x20 + 0x50,unaff_x19 + 0x50);
  return;
}



/* Entry: 1087b5eb8; end: 1087b5ed3;  */

void FUN_1087b5eb8(void)

{
  long unaff_x19;
  
  func_0x0001087b038c(*(undefined4 *)(*(long *)(unaff_x19 + 0x290) + 8));
  return;
}



/* Entry: 1087b5ed4; end: 1087b68b7;  */

void FUN_1087b5ed4(void)

{
  return;
}



/* Entry: 1087b68b8; end: 1087b76ff;  */

void FUN_1087b68b8(undefined1 *param_1,long param_2,ulong param_3,uint *param_4,uint *param_5,
                  long param_6,long param_7,long *param_8,undefined8 param_9)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  uint uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [40];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_80 [32];
  
  uVar7 = (uint)param_3;
  puVar3 = param_1;
  switch(param_3 & 0xffffffff) {
  case 0:
    goto code_r0x0001087b695c;
  case 1:
  case 6:
code_r0x0001087b6ad8:
    func_0x0001087b9840();
    func_0x0001087b98b8();
    uStack_c8 = 0x195;
    func_0x0001087b9830();
    func_0x0001087b98ac();
    func_0x0001087b9820();
    func_0x0001087b9918();
    func_0x0001087b9a18();
    puVar3 = auStack_118;
    func_0x0001087b9ac8(puVar3);
    func_0x0001087b9cf4();
    func_0x0001087b9b44();
    FUN_1087974f8();
    func_0x0001087b9938();
    func_0x0001087b9968();
    func_0x0001087b9924();
    func_0x0001087b9904();
    func_0x0001087b9960();
    func_0x0001087b98e8();
    func_0x0001087b9b18();
    func_0x0001087b9ac0();
    func_0x0001087b9c00();
    func_0x0001087b9998();
    func_0x0001087b98e8();
    func_0x0001087b98e0();
    func_0x0001087b9948();
    break;
  case 2:
  case 3:
  case 7:
code_r0x0001087b695c:
    func_0x0001087b9840();
    func_0x0001087b98b8();
    uStack_c8 = 0x193;
    func_0x0001087b990c();
    func_0x0001087b9a18();
    func_0x0001087b9940(auStack_118);
    func_0x0001087b9cf4(&ppuStack_e8);
    func_0x000107c28820();
    func_0x0001087b9918();
    func_0x000107c278b8(auStack_130);
    puVar3 = auStack_148;
    func_0x0001087b9ac8();
    func_0x0001087b9b44();
    FUN_108659af8();
    FUN_10879d02c();
    func_0x0001087b9938();
    func_0x0001087b99ec();
    func_0x0001087b9978();
    func_0x0001087b9968();
    func_0x0001087b9924();
    func_0x0001087b98e8();
    func_0x0001087b9b18();
    func_0x0001087b9ac0();
    func_0x0001087b9c00();
    func_0x0001087b9998();
    func_0x0001087b98e8();
    if ((*(long *)(param_2 + 0x68) != *(long *)(param_2 + 0x70)) &&
       (func_0x0001087b9c2c(), (ulong)puVar3 >> 0x20 != 0)) {
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      ppuStack_1e0 = &PTR_FUN_110a609a8;
      uStack_1d8 = 0;
      uStack_1c0 = 0x24f;
      func_0x0001087b9918();
      func_0x000107c278b8(auStack_160);
      func_0x0001087b9ac8(auStack_178);
      pppuVar4 = &ppuStack_1e0;
      func_0x000107c28820(pppuVar4,auStack_160,auStack_178);
      FUN_1087b88ec();
      FUN_108659af8();
      func_0x000107c2884c(auStack_1a0,pppuVar4);
      func_0x0001087b9990();
      func_0x0001087b9aac();
      func_0x0001087b9be8();
      func_0x0001087b9b18();
      func_0x000107c2884c(&ppuStack_1e0,auStack_1a0);
      func_0x0001087b9c00();
      func_0x0001087b9998();
      func_0x0001087b9be8();
      puVar3 = auStack_1a0;
      func_0x000107c2882c(puVar3);
    }
    func_0x0001087b98e0();
    func_0x0001087b9948();
    if ((uVar7 < 8) && ((0xcfU >> (ulong)(uVar7 & 0x1f) & 1) != 0)) goto code_r0x0001087b6ad8;
    break;
  default:
    break;
  }
  func_0x0001087b9840();
  func_0x0001087b98b8();
  uStack_c8 = 0x194;
  func_0x0001087b9830();
  func_0x0001087b98ac();
  func_0x0001087b9820();
  FUN_10879755c();
  func_0x0001087b9a70();
  func_0x0001087b9a18();
  puVar8 = (&PTR_s_Success_110a70d88)[(int)uVar7];
  func_0x000107c28824(puVar3,auStack_100);
  func_0x0001087b9938();
  func_0x0001087b9924();
  func_0x0001087b9904();
  func_0x0001087b9960();
  func_0x0001087b98e8();
  func_0x0001087b9b18();
  func_0x0001087b9ac0();
  func_0x0001087b9c00();
  func_0x0001087b9998();
  func_0x0001087b98e8();
  func_0x0001087b98e0();
  func_0x0001087b9948();
  if ((char)param_4[1] != '\x01') {
    func_0x0001087b9a38(param_1);
    FUN_1087b79a8(param_1,param_2,0x70036,param_5);
    goto LAB_1087b6d1c;
  }
  uVar11 = (ulong)*param_4;
  FUN_1086814d0(param_9);
  if (uVar7 - 2 < 2 || uVar7 == 7) {
    FUN_1087b82ec(uVar11);
    FUN_1087b7700(param_1,param_2,uVar11,param_9);
    if (uVar7 - 2 < 2) {
      uVar11 = 0x70036;
    }
    else {
      if (uVar7 != 7) goto LAB_1087b6cbc;
      uVar11 = (ulong)*param_4;
      FUN_1087b82ec(uVar11);
    }
LAB_1087b6ca8:
    FUN_1087b79a8(param_1,param_2,uVar11,param_5);
  }
  else if (uVar7 == 0) {
    uVar11 = 0x70036;
    func_0x0001087b9a38(param_1);
    goto LAB_1087b6ca8;
  }
LAB_1087b6cbc:
  uVar11 = (ulong)*param_5;
  uStack_b0 = 0;
  uStack_a8 = 0;
  ppuStack_c0 = &PTR_FUN_110a609a8;
  uStack_b8 = 0;
  uStack_a0 = 0x19b;
  FUN_1087b8998(uVar11,(char)param_5[1]);
  FUN_1087b8948(&ppuStack_c0,uVar11);
  FUN_10879d02c();
  func_0x0001087b9ca8();
  func_0x0001087b98e0();
  func_0x0001087b9b18();
  func_0x000107c2884c();
  func_0x0001087b9c00();
  func_0x0001087b9998();
  func_0x0001087b98e0();
  func_0x0001087b9ca0();
LAB_1087b6d1c:
  func_0x0001087b9d7c();
  if ((int)param_4 != 0) {
    if ((uVar7 < 8) && ((1 << (ulong)(uVar7 & 0x1f) & 0xcfU) != 0)) {
      func_0x0001087b9840();
      iVar2 = (int)param_2 + 0x38;
      FUN_1087b9e04();
      if (iVar2 == 0) {
        func_0x0001087b98b8();
        uStack_c8 = 0x198;
        func_0x0001087b990c();
        func_0x0001087b9ccc();
        puVar3 = auStack_100;
        func_0x0001087b9940();
        func_0x0001087b9b54();
        func_0x0001087b9938();
        func_0x0001087b9924();
        func_0x0001087b9904();
        func_0x0001087b98e8();
        func_0x0001087b9b0c();
        func_0x0001087b98d0(param_6 * 1000000);
        func_0x0001087b984c();
      }
      else {
        func_0x0001087b98b8();
        uStack_c8 = 0x198;
        func_0x0001087b990c();
        func_0x0001087b9ccc();
        func_0x0001087b9940(auStack_100);
        func_0x0001087b9b54();
        func_0x0001087b9918();
        func_0x000107c278b8(auStack_118);
        puVar3 = auStack_130;
        func_0x0001087b9ac8();
        func_0x0001087b9b44();
        FUN_10879d02c();
        func_0x0001087b9938();
        func_0x0001087b9978();
        func_0x0001087b9968();
        func_0x0001087b9924();
        func_0x0001087b9904();
        func_0x0001087b98e8();
        func_0x0001087b9b0c();
        func_0x0001087b98d0(param_6 * 1000000);
        func_0x0001087b984c();
      }
      func_0x0001087b98e0();
      if ((*(long *)(param_2 + 0x68) != *(long *)(param_2 + 0x70)) &&
         (func_0x0001087b9c2c(), (ulong)puVar3 >> 0x20 != 0)) {
        uVar11 = (ulong)*(uint *)(param_2 + 0x174);
        func_0x0001087b98b8();
        uStack_c8 = 0x252;
        func_0x0001087b9918();
        func_0x000107c278b8(auStack_1a0);
        FUN_1087b14f8(uVar11);
        func_0x000107c28824(&ppuStack_e8,auStack_1a0,uVar11);
        func_0x0001087b9c24();
        func_0x0001087b9938();
        func_0x0001087b9960();
        func_0x0001087b98e8();
        func_0x0001087b9b0c();
        func_0x0001087b98d0(param_6 * 1000000);
        func_0x0001087b984c();
        func_0x0001087b98e0();
      }
      func_0x0001087b9948();
    }
    lVar9 = *(long *)(param_2 + 0x658);
    lVar10 = *(long *)(param_2 + 0x7d8);
    bVar1 = *(byte *)(param_2 + 0x7e0);
    func_0x0001087b9840();
    if ((bVar1 & 1) != 0) {
      func_0x0001087b98b8();
      uStack_c8 = 0x19c;
      func_0x0001087b9830();
      func_0x0001087b98ac();
      func_0x0001087b9820();
      FUN_10879d02c();
      func_0x0001087b9938();
      func_0x0001087b9904();
      func_0x0001087b9960();
      func_0x0001087b98e8();
      func_0x0001087b9b0c();
      func_0x0001087b98d0((lVar10 - lVar9) * 1000000);
      func_0x0001087b984c();
      func_0x0001087b98e0();
    }
    func_0x0001087b9948();
  }
  if ((uVar7 & 0xfffffffe) != 4) {
    plVar12 = (long *)(param_7 + 0x10);
    while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
      FUN_1087b82ec(*(undefined4 *)(plVar12 + 2));
      lVar9 = plVar12[3];
      func_0x0001087b9840();
      iVar2 = (int)param_2 + 0x38;
      FUN_1087b9e04();
      if (iVar2 == 0) {
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        ppuStack_e8 = &PTR_FUN_110a609a8;
        uStack_c8 = 0x199;
        puVar3 = auStack_1a0;
        func_0x0001087b990c();
        func_0x000107c278b8();
        func_0x0001087b98ac();
        func_0x0001087b9820();
        func_0x0001087b9c5c();
        func_0x0001087b9938();
        func_0x0001087b9904();
        func_0x0001087b9960();
        func_0x0001087b98e8();
        func_0x0001087b9b0c();
        func_0x0001087b98d0(lVar9 * 1000000);
        func_0x0001087b984c();
      }
      else {
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        ppuStack_e8 = &PTR_FUN_110a609a8;
        uStack_c8 = 0x199;
        func_0x0001087b990c(auStack_1a0);
        func_0x000107c278b8();
        func_0x0001087b98ac();
        func_0x0001087b9820();
        func_0x0001087b9918(auStack_100);
        func_0x000107c278b8();
        puVar3 = auStack_118;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3,auStack_80);
        func_0x0001087b9cf4();
        func_0x0001087b9b44();
        func_0x0001087b9c5c();
        FUN_10879d02c();
        func_0x0001087b9938();
        func_0x0001087b9968();
        func_0x0001087b9924();
        func_0x0001087b9904();
        func_0x0001087b9960();
        func_0x0001087b98e8();
        func_0x0001087b9b0c();
        func_0x0001087b98d0(lVar9 * 1000000);
        func_0x0001087b984c();
      }
      func_0x0001087b98e0();
      func_0x0001087b9948();
      if (*(long *)(param_2 + 0x68) != *(long *)(param_2 + 0x70)) {
        lVar9 = plVar12[3];
        func_0x0001087b9c2c();
        if ((ulong)puVar3 >> 0x20 != 0) {
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          ppuStack_c0 = &PTR_FUN_110a609a8;
          uStack_a0 = 0x253;
          pppuVar4 = &ppuStack_e8;
          func_0x0001087b9918(pppuVar4);
          func_0x000107c278b8();
          func_0x0001087b9af4();
          pppuVar6 = &ppuStack_c0;
          func_0x000107c28824(pppuVar6,&ppuStack_e8,pppuVar4);
          func_0x0001087b9c24();
          func_0x0001087b9c5c();
          func_0x0001087b9ca8();
          func_0x0001087b99bc();
          func_0x0001087b98e0();
          func_0x0001087b9b0c();
          ppuStack_c0 = (undefined **)(lVar9 * 1000000);
          (*(code *)(*pppuVar6)[3])();
          func_0x0001087b9ca0();
        }
      }
    }
  }
  func_0x0001087b9840();
  plVar12 = (long *)(param_7 + 0x10);
  func_0x0001087b9b30();
  while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 7;
    ppuStack_e8 = (undefined **)(extraout_x8 + 0x10);
    func_0x000107c278b8(auStack_118,"message_type");
    func_0x0001087b9940(auStack_130);
    pppuVar4 = &ppuStack_e8;
    FUN_108791664(pppuVar4,auStack_118,auStack_130);
    func_0x000107c278b8(auStack_148,"media_type");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_160,auStack_80)
    ;
    FUN_108791664(pppuVar4,auStack_148,auStack_160);
    FUN_1087b7e18();
    uVar11 = (ulong)*(uint *)(plVar12 + 2);
    FUN_1087b82ec(uVar11);
    FUN_1087b83ac(pppuVar4,uVar11);
    puVar3 = auStack_178;
    func_0x000107c278b8(puVar3,&UNK_10f4ba7eb);
    func_0x0001087b99e4();
    FUN_108791a34(&ppuStack_c0,puVar3);
    func_0x0001087b9990();
    func_0x0001087b9aac();
    func_0x0001087b99ec();
    func_0x0001087b9978();
    func_0x0001087b9968();
    FUN_108788618(&ppuStack_e8);
    func_0x0001087b9b18();
    FUN_108791a34(auStack_1a0,&ppuStack_c0);
    func_0x0001087b9998((*pppuVar4)[0xc]);
    FUN_108788618(auStack_1a0);
    FUN_108788618(&ppuStack_c0);
  }
  if (uVar7 != 0) {
    lVar9 = 0;
    func_0x0001087b9b30();
    for (uVar11 = 1; uVar11 < (ulong)(param_8[1] - *param_8 >> 3); uVar11 = uVar11 + 1) {
      lVar10 = *param_8 + lVar9;
      if (*(int *)(lVar10 + 0xc) != *(int *)(lVar10 + 4)) {
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 8;
        uVar5 = (ulong)*(uint *)(lVar10 + 8);
        ppuStack_e8 = (undefined **)(extraout_x8_00 + 0x10);
        FUN_1087b82ec(uVar5);
        pppuVar4 = &ppuStack_e8;
        FUN_1087b83ac(pppuVar4,uVar5);
        func_0x0001087b9a70(auStack_1b8);
        func_0x000107c278b8();
        FUN_108791610(pppuVar4,auStack_1b8,puVar8);
        func_0x0001087b9a18();
        func_0x0001087b99e4();
        func_0x0001087b9924();
        FUN_108791a34(&ppuStack_c0,pppuVar4);
        func_0x0001087b9ad0();
        FUN_108788618(&ppuStack_e8);
        func_0x0001087b9b18();
        FUN_108791a34(&ppuStack_1e0,&ppuStack_c0);
        func_0x0001087b9998((*pppuVar4)[0xc]);
        FUN_108788618(&ppuStack_1e0);
        FUN_108788618(&ppuStack_c0);
      }
      lVar9 = lVar9 + 8;
    }
  }
  func_0x0001087b9948();
  if ((*(char *)(param_2 + 0x8b8) == '\x01') &&
     (((6 < uVar7 || ((1 << (ulong)(uVar7 & 0x1f) & 0x72U) == 0)) &&
      (FUN_108797474(param_3,param_5), *(char *)(param_2 + 0x8b8) == '\x01')))) {
    func_0x0001087b9840();
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x0001087b9d0c();
    ppuStack_e8 = (undefined **)(extraout_x8_01 + 0x10);
    uStack_e0 = 0;
    uStack_c8 = 0x16f;
    func_0x0001087b9830();
    func_0x0001087b98ac();
    func_0x0001087b9820();
    func_0x0001087b9918();
    func_0x0001087b9a18();
    func_0x0001087b9ac8(auStack_118);
    func_0x0001087b9cf4();
    func_0x000107c28820(param_3);
    FUN_1087972f0();
    FUN_10879d02c();
    func_0x0001087b9938();
    func_0x0001087b9968();
    func_0x0001087b9924();
    func_0x0001087b9904();
    func_0x0001087b9960();
    func_0x0001087b98e8();
    func_0x0001087b9ac0();
    func_0x0001087b9c18();
    func_0x0001087b9970();
    func_0x0001087b98e8();
    func_0x0001087b98e0();
    func_0x0001087b9948();
  }
  return;
}



/* Entry: 1087b7700; end: 1087b79a7;  */

void FUN_1087b7700(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined1 auStack_1f0 [40];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [24];
  
  func_0x0001087b9afc(auStack_98);
  uStack_d8 = 0;
  uStack_d0 = 0;
  ppuStack_e8 = &PTR_FUN_110a609a8;
  uStack_e0 = 0;
  uStack_c8 = 0x196;
  func_0x0001087b990c();
  func_0x000107c278b8(auStack_100);
  func_0x0001087b9940(auStack_118);
  func_0x000107c28820(&ppuStack_e8,auStack_100,auStack_118);
  func_0x0001087b9918();
  func_0x000107c278b8(auStack_130);
  func_0x0001087b9bac(auStack_148);
  func_0x0001087b9c88();
  FUN_10879cfb8();
  FUN_10879d02c();
  func_0x0001087b9938();
  func_0x0001087b9990();
  func_0x0001087b9aac();
  func_0x0001087b99ec();
  func_0x0001087b9978();
  func_0x0001087b98e8();
  plVar3 = *(long **)(param_1 + 8);
  func_0x0001087b9ac0(auStack_170);
  (**(code **)(*plVar3 + 0x50))(plVar3,auStack_170);
  func_0x000107c2882c(auStack_170);
  if (*(long *)(param_2 + 0x68) != *(long *)(param_2 + 0x70)) {
    uVar1 = param_2 + 0x50;
    FUN_1087b9e40();
    if (uVar1 >> 0x20 != 0) {
      uStack_188 = 0;
      uStack_180 = 0;
      ppuStack_198 = &PTR_FUN_110a609a8;
      uStack_190 = 0;
      uStack_178 = 0x250;
      func_0x0001087b9918();
      func_0x0001087b9ccc();
      func_0x0001087b9bac(auStack_1c8);
      pppuVar2 = &ppuStack_198;
      func_0x000107c28820(pppuVar2,auStack_1b0,auStack_1c8);
      FUN_1087b88ec();
      FUN_10879cfb8();
      func_0x000107c278b8(auStack_68,PTR_DAT_113269020);
      if ((param_4 & 0x2bf) < 0x2b8) {
        func_0x0001087b989c();
      }
      else {
        func_0x0001087b9ab4();
      }
      func_0x000107c28824(pppuVar2,auStack_68);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
      func_0x000107c2884c(&ppuStack_e8,pppuVar2);
      func_0x0001087b9980();
      func_0x0001087b9904();
      func_0x000107c2882c(&ppuStack_198);
      func_0x000107c2884c(auStack_1f0,&ppuStack_e8);
      func_0x0001087b9c18();
      func_0x0001087b9890();
      func_0x0001087b9a20();
      func_0x0001087b98e8();
    }
  }
  func_0x0001087b98e0();
  func_0x0001087b9948();
  return;
}



/* Entry: 1087b79a8; end: 1087b7c1f;  */

void FUN_1087b79a8(long param_1,long param_2,undefined8 param_3,uint *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined1 auStack_1d8 [40];
  undefined1 auStack_1b0 [48];
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined1 auStack_158 [40];
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [48];
  
  func_0x0001087b9afc(auStack_80);
  uStack_c0 = 0;
  uStack_b8 = 0;
  ppuStack_d0 = &PTR_FUN_110a609a8;
  uStack_c8 = 0;
  uStack_b0 = 0x197;
  func_0x0001087b990c();
  func_0x000107c278b8(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_100,auStack_80);
  func_0x000107c28820(&ppuStack_d0,auStack_e8,auStack_100);
  func_0x0001087b9918();
  func_0x0001087b9c44();
  puVar1 = auStack_130;
  func_0x0001087b9bac(puVar1);
  func_0x0001087b9c88();
  FUN_10879cfb8();
  FUN_10879d02c();
  uVar2 = (ulong)*param_4;
  FUN_1087b8998(uVar2,(char)param_4[1]);
  FUN_1087b8948(puVar1,uVar2);
  func_0x000107c2884c(auStack_a8,puVar1);
  func_0x0001087b99d4();
  func_0x0001087b99dc();
  func_0x0001087b9b3c();
  func_0x0001087b99bc();
  func_0x000107c2882c(&ppuStack_d0);
  plVar4 = *(long **)(param_1 + 8);
  func_0x000107c2884c(auStack_158,auStack_a8);
  func_0x0001087b9bb4(*(undefined8 *)(*plVar4 + 0x50));
  func_0x000107c2882c(auStack_158);
  if (*(long *)(param_2 + 0x68) != *(long *)(param_2 + 0x70)) {
    uVar2 = param_2 + 0x50;
    FUN_1087b9e40();
    if (uVar2 >> 0x20 != 0) {
      uStack_170 = 0;
      uStack_168 = 0;
      ppuStack_180 = &PTR_FUN_110a609a8;
      uStack_178 = 0;
      uStack_160 = 0x251;
      func_0x0001087b9918();
      func_0x0001087b9cd4();
      func_0x0001087b9bac(auStack_1b0);
      pppuVar3 = &ppuStack_180;
      func_0x0001087b9cb8(pppuVar3);
      func_0x0001087b9c24();
      FUN_10879cfb8();
      func_0x000107c2884c(&ppuStack_d0,pppuVar3);
      func_0x0001087b9aa4();
      func_0x0001087b9b04();
      func_0x000107c2882c(&ppuStack_180);
      func_0x000107c2884c(auStack_1d8,&ppuStack_d0);
      func_0x0001087b9c18();
      func_0x0001087b9970();
      func_0x000107c2882c(auStack_1d8);
      func_0x000107c2882c(&ppuStack_d0);
    }
  }
  func_0x000107c2882c(auStack_a8);
  func_0x0001087b9bd4();
  return;
}



/* Entry: 1087b7c20; end: 1087b7cc7;  */

void FUN_1087b7c20(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [48];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  undefined1 auStack_90 [48];
  
  uVar2 = param_3;
  FUN_108797474(param_3,param_4);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,uVar2);
  uVar4 = (uint)param_3;
  if (7 < uVar4) {
    return;
  }
  if ((1 << (ulong)(uVar4 & 0x1f) & 0xceU) == 0) {
    if (uVar4 != 0) {
      return;
    }
    iVar1 = 0x30011;
    param_3 = 0;
  }
  else {
    iVar1 = 0x30012;
  }
  FUN_1087b9dac(auStack_130,param_2 + 0x38,iVar1,param_3);
  func_0x000107c316c4();
  if (iVar1 == 0x30011) {
    func_0x0001087b9950();
    uStack_98 = 0;
    func_0x0001087b990c();
    func_0x000107c278b8(auStack_148);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_160,auStack_130);
    puVar3 = auStack_b8;
    FUN_108791664(puVar3,auStack_148,auStack_160);
    func_0x0001087b9918();
    func_0x0001087b9c44();
    func_0x0001087b9aec(auStack_190);
    FUN_108791664(puVar3,auStack_178,auStack_190);
    FUN_1087b7e18();
    func_0x0001087b9c3c();
    func_0x0001087b9a94();
    func_0x0001087b9c90();
    func_0x0001087b9b6c();
    func_0x0001087b99cc();
    func_0x0001087b99d4();
    func_0x0001087b99dc();
    func_0x0001087b9b3c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
    func_0x0001087b9bf8();
    func_0x0001087b98f0();
    func_0x0001087b992c();
  }
  else {
    func_0x0001087b9950();
    uStack_98 = 1;
    func_0x0001087b9830();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1d8,auStack_130);
    puVar3 = auStack_b8;
    FUN_108791664(puVar3,auStack_1c0,auStack_1d8);
    func_0x0001087b9918();
    func_0x000107c278b8(auStack_1f0);
    func_0x0001087b9aec(auStack_208);
    FUN_108791664(puVar3,auStack_1f0,auStack_208);
    FUN_1087b7e18();
    func_0x000107c278b8(auStack_220,&UNK_10f4bb1fa);
    func_0x0001087b9a94();
    func_0x0001087b9c90();
    func_0x0001087b9a70();
    func_0x0001087b9988();
    func_0x0001087b9a60();
    func_0x0001087b9c90();
    func_0x0001087b9b6c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
    func_0x0001087b9c98();
    func_0x0001087b9bbc();
    func_0x0001087b9b4c();
    func_0x0001087b9ad0();
    func_0x0001087b9960();
    func_0x0001087b9bf8();
    func_0x0001087b98f0();
    func_0x0001087b992c();
  }
  FUN_108788618(auStack_90);
  if (*(long *)(param_2 + 0x68) != *(long *)(param_2 + 0x70)) {
    if (iVar1 == 0x30011) {
      func_0x0001087b9950();
      uStack_98 = 0x16;
      func_0x0001087b9918();
      func_0x000107c278b8(auStack_d0);
      func_0x0001087b9af4();
      func_0x0001087b9cdc();
      func_0x0001087b9bc4();
      func_0x0001087b9a94();
      func_0x0001087b9c78();
      func_0x0001087b9b6c();
      func_0x0001087b99bc();
      func_0x0001087b9c54();
      func_0x0001087b9bf8();
      func_0x0001087b98f0();
      func_0x0001087b992c();
    }
    else {
      func_0x0001087b9950();
      uStack_98 = 0x17;
      func_0x0001087b9918();
      puVar3 = auStack_d0;
      func_0x000107c278b8(puVar3);
      func_0x0001087b9af4();
      func_0x0001087b9cdc();
      func_0x0001087b9bc4();
      func_0x0001087b9a94();
      func_0x0001087b99e4();
      func_0x0001087b9a70();
      func_0x0001087b9a18();
      func_0x0001087b9a60();
      FUN_108791610(puVar3,auStack_100);
      func_0x0001087b9b6c();
      func_0x0001087b9924();
      func_0x0001087b99bc();
      func_0x0001087b9c54();
      func_0x0001087b9bf8();
      func_0x0001087b98f0();
      func_0x0001087b992c();
    }
    FUN_108788618(auStack_90);
  }
  func_0x000107c27bbc(auStack_130);
  return;
}



/* Entry: 1087b7cc8; end: 1087b7cd7;  */

void FUN_1087b7cc8(long *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001087b7cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,param_2 + 0x38);
  return;
}



/* Entry: 1087b7cd8; end: 1087b7e17;  */

void FUN_1087b7cd8(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  long alStack_c0 [4];
  undefined4 uStack_a0;
  undefined1 auStack_98 [88];
  
  func_0x0001087b99a0();
  func_0x0001087b9b30();
  alStack_c0[2] = 0;
  alStack_c0[3] = 0;
  alStack_c0[0] = extraout_x8 + 0x10;
  alStack_c0[1] = 0;
  uStack_a0 = 0xd;
  func_0x0001087b990c();
  func_0x000107c278b8(auStack_d8);
  func_0x0001087b9a50(auStack_f0);
  func_0x0001087b9b94();
  func_0x0001087b9918();
  func_0x000107c278b8(auStack_108);
  puVar1 = auStack_120;
  func_0x0001087b9aec(puVar1);
  func_0x0001087b9b84();
  FUN_1087b7e18();
  func_0x0001087b9a70();
  func_0x0001087b9c80();
  func_0x0001087b9a60();
  func_0x0001087b99e4();
  FUN_108791a34(auStack_98,puVar1);
  func_0x0001087b9980();
  func_0x0001087b9904();
  func_0x0001087b9ba4();
  func_0x0001087b9a58();
  func_0x0001087b99c4();
  FUN_108788618(alStack_c0);
  func_0x0001087b9c6c();
  func_0x0001087b9d00();
  func_0x0001087b9890();
  func_0x0001087b9a28();
  FUN_108788618(auStack_98);
  func_0x0001087b9a30();
  return;
}



/* Entry: 1087b7e18; end: 1087b7e73;  */

void FUN_1087b7e18(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x0001087b9a04();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087b987c();
  }
  else {
    func_0x0001087b9b24();
  }
  func_0x0001087b9988();
  func_0x0001087b9c0c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087b989c();
  }
  else {
    func_0x0001087b9ab4();
  }
  func_0x0001087b9bdc();
  FUN_108791610();
  func_0x0001087b9814();
  return;
}



/* Entry: 1087b7e74; end: 1087b7fb3;  */

void FUN_1087b7e74(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  long alStack_c0 [4];
  undefined4 uStack_a0;
  undefined1 auStack_98 [88];
  
  func_0x0001087b99a0();
  func_0x0001087b9b30();
  alStack_c0[2] = 0;
  alStack_c0[3] = 0;
  alStack_c0[0] = extraout_x8 + 0x10;
  alStack_c0[1] = 0;
  uStack_a0 = 0x1a;
  func_0x0001087b990c();
  func_0x000107c278b8(auStack_d8);
  func_0x0001087b9a50(auStack_f0);
  func_0x0001087b9b94();
  func_0x0001087b9918();
  func_0x000107c278b8(auStack_108);
  puVar1 = auStack_120;
  func_0x0001087b9aec(puVar1);
  func_0x0001087b9b84();
  FUN_1087b7e18();
  func_0x0001087b9a70();
  func_0x0001087b9c80();
  func_0x0001087b9a60();
  func_0x0001087b99e4();
  FUN_108791a34(auStack_98,puVar1);
  func_0x0001087b9980();
  func_0x0001087b9904();
  func_0x0001087b9ba4();
  func_0x0001087b9a58();
  func_0x0001087b99c4();
  FUN_108788618(alStack_c0);
  func_0x0001087b9c6c();
  func_0x0001087b9d00();
  func_0x0001087b9890();
  func_0x0001087b9a28();
  FUN_108788618(auStack_98);
  func_0x0001087b9a30();
  return;
}



/* Entry: 1087b7fb4; end: 1087b82eb;  */

void FUN_1087b7fb4(long param_1,long param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [48];
  
  if (*(char *)(param_2 + 0x9f0) == '\x01') {
    func_0x0001087b9afc(auStack_80);
    if (*(char *)(param_2 + 0x9a0) == '\x01') {
      func_0x0001086b0fc8(*(undefined4 *)(param_2 + 0x99c));
      FUN_1087b82ec();
    }
    uStack_c0 = 0;
    uStack_b8 = 0;
    ppuStack_d0 = &PTR_FUN_110a6f328;
    uStack_c8 = 0;
    uStack_b0 = 0xe;
    func_0x0001087b9918();
    func_0x0001087b9c44();
    func_0x0001087b9aec(auStack_100);
    pppuVar2 = &ppuStack_d0;
    FUN_108791664(pppuVar2,auStack_e8,auStack_100);
    func_0x0001087b9a70();
    func_0x0001087b9c3c();
    func_0x0001087b9c34(pppuVar2,auStack_118);
    uVar3 = (ulong)*(uint *)(param_2 + 0x998);
    FUN_1087b8390(uVar3);
    FUN_1087b8314(pppuVar2,uVar3);
    FUN_1087b83ac();
    FUN_108791a34(auStack_a8,pppuVar2);
    func_0x0001087b99cc();
    func_0x0001087b99d4();
    func_0x0001087b99dc();
    func_0x0001087b9c4c();
    plVar4 = *(long **)(param_1 + 8);
    FUN_108791a34(auStack_140,auStack_a8);
    func_0x0001087b9bb4(*(undefined8 *)(*plVar4 + 0x60));
    FUN_108788618(auStack_140);
    plVar4 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar4 + 0x10))();
    if ((*(char *)(param_2 + 0x9e0) == '\x01') &&
       (lVar1 = (long)plVar4 - *(long *)(param_2 + 0x9d8), -1 < lVar1)) {
      lStack_150 = lVar1 * 1000000;
      uStack_148 = 1;
      uStack_168 = 0;
      uStack_160 = 0;
      ppuStack_178 = &PTR_FUN_110a6f328;
      uStack_170 = 0;
      uStack_158 = 0xf;
      pppuVar2 = &ppuStack_178;
      FUN_1087b7e18(pppuVar2,*(undefined4 *)(param_2 + 0x8a8));
      func_0x0001087b9a70();
      func_0x000107c278b8(auStack_190);
      func_0x0001087b9c34(pppuVar2,auStack_190);
      uVar3 = (ulong)*(uint *)(param_2 + 0x998);
      FUN_1087b8390(uVar3);
      FUN_1087b8314(pppuVar2,uVar3);
      FUN_108791a34(&ppuStack_d0,pppuVar2);
      func_0x0001087b9c98();
      FUN_108788618(&ppuStack_178);
      (**(code **)(**(long **)(param_1 + 8) + 0x20))
                (*(long **)(param_1 + 8),&ppuStack_d0,&lStack_150);
      func_0x0001087b9c4c();
    }
    uStack_168 = 0;
    uStack_160 = 0;
    ppuStack_178 = &PTR_FUN_110a6f328;
    uStack_170 = 0;
    uStack_158 = 0x10;
    pppuVar2 = &ppuStack_178;
    FUN_1087b7e18(pppuVar2,*(undefined4 *)(param_2 + 0x8a8));
    func_0x0001087b9a70();
    func_0x0001087b9988();
    func_0x0001087b9c34(pppuVar2,auStack_1a8);
    uVar3 = (ulong)*(uint *)(param_2 + 0x998);
    FUN_1087b8390(uVar3);
    FUN_1087b8314(pppuVar2,uVar3);
    FUN_108791a34(&ppuStack_d0,pppuVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    FUN_108788618(&ppuStack_178);
    (**(code **)(**(long **)(param_1 + 8) + 0x80))
              (*(long **)(param_1 + 8),&ppuStack_d0,(long)*(int *)(param_2 + 0x9e8));
    func_0x0001087b9c4c();
    FUN_108788618(auStack_a8);
    func_0x0001087b9bd4();
  }
  return;
}



/* Entry: 1087b82ec; end: 1087b8313;  */

undefined4 FUN_1087b82ec(int param_1)

{
  if (param_1 - 1U < 0x1b) {
    return *(undefined4 *)(&UNK_10df570f8 + (ulong)(param_1 - 1U) * 4);
  }
  return 0x7001b;
}



/* Entry: 1087b8314; end: 1087b838f;  */

undefined8 FUN_1087b8314(undefined8 param_1,undefined8 param_2)

{
  if (8 < ((uint)((ulong)param_2 >> 0x10) & 0xffff)) {
    func_0x0001087b9b24();
  }
  func_0x0001087b9988();
  if (0x2a < ((uint)param_2 & 0xffff)) {
    func_0x0001087b9ab4();
  }
  func_0x0001087b9bdc();
  FUN_108791610();
  func_0x0001087b9814();
  return param_1;
}



/* Entry: 1087b8390; end: 1087b83ab;  */

int FUN_1087b8390(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x6001b;
  if (4 < param_1 - 1U) {
    iVar1 = 0x6001b;
  }
  return iVar1;
}


