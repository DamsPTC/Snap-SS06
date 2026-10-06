/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108707220; end: 10870728b;  */

void FUN_108707220(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_b0 [144];
  
  func_0x00010870757c();
  cVar1 = *(char *)(param_1 + 0x90);
  if (cVar1 != *(char *)(param_2 + 0x90)) {
    if (cVar1 == '\0') {
      func_0x000108707590();
      func_0x0001087070d4();
    }
    else {
      func_0x0001087076ac();
      func_0x0001087070d4();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x90) == '\x01') {
      FUN_108706cb0();
      *(undefined1 *)(unaff_x19 + 0x90) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108707590();
    func_0x00010870757c();
    FUN_1087070f0(auStack_b0,unaff_x20);
    func_0x000108707590();
    FUN_108707054();
    func_0x000108707668();
    FUN_108707054();
    FUN_108706cb0(auStack_b0);
    return;
  }
  return;
}



/* Entry: 10870728c; end: 1087072d3;  */

void FUN_10870728c(void)

{
  undefined1 auStack_b0 [144];
  
  func_0x00010870757c();
  FUN_1087070f0(auStack_b0);
  func_0x000108707590();
  FUN_108707054();
  func_0x000108707668();
  FUN_108707054();
  FUN_108706cb0(auStack_b0);
  return;
}



/* Entry: 1087072d4; end: 1087072ef;  */

void FUN_1087072d4(long param_1)

{
  FUN_1087070f0();
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



/* Entry: 1087072f0; end: 108707363;  */

undefined8 * FUN_1087072f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [344];
  
  _bzero(auStack_190,0x160);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_1087073a0(param_1 + 2);
  }
  FUN_108706d08(auStack_188);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_108706d08(param_1 + 2);
  return param_1;
}



/* Entry: 108707364; end: 10870739f;  */

void FUN_108707364(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010870757c();
  func_0x000107c3194c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  func_0x000107c28df0(unaff_x20 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 1087073a0; end: 1087073df;  */

void FUN_1087073a0(long param_1)

{
  if (*(char *)(param_1 + 0x150) == '\x01') {
    FUN_108706d28();
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  return;
}



/* Entry: 1087073e0; end: 108707413;  */

long FUN_1087073e0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  lVar1 = param_3;
  func_0x0001087075c0();
  *(undefined8 *)(lVar1 + 0x30) = in_register_00005028;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  func_0x000107c28dec(lVar1 + 0x38,param_4 + 0x38);
  return param_3;
}



/* Entry: 108707414; end: 108707483;  */

void FUN_108707414(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_170 [336];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x000107c3141c(), (int)lVar2 != 0)) {
    FUN_1087074b8(auStack_170,*param_1);
    func_0x000108707668();
    FUN_108707484();
    FUN_108706d28(auStack_170);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[0x2b] == '\x01') {
    FUN_108706d28();
    *(undefined1 *)(plVar1 + 0x2a) = 0;
  }
  return;
}



/* Entry: 108707484; end: 1087074b7;  */

long FUN_108707484(long param_1)

{
  if (*(char *)(param_1 + 0x150) == '\x01') {
    FUN_108707364();
  }
  else {
    func_0x0001087073c4();
  }
  return param_1;
}



/* Entry: 1087074b8; end: 108707543;  */

void FUN_1087074b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c313f8();
  func_0x000107c2879c(param_1);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,3);
  *(int *)(param_1 + 0x28) = (int)uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,4);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000107c2915c(param_1 + 0x38,param_2,5);
  return;
}



/* Entry: 108707544; end: 1087077c7;  */

void FUN_108707544(void)

{
  return;
}



/* Entry: 1087077c8; end: 108707b0b;  */

void FUN_1087077c8(ulong *param_1,ulong param_2,ulong *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  int iVar10;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long lVar11;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long unaff_x20;
  long *unaff_x24;
  long lVar12;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong *puStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_90;
  ulong uStack_88;
  
  func_0x000107c32e18();
  bVar4 = (char)param_1[0x18] == '\x01';
  if (bVar4) {
    puVar6 = (ulong *)*param_4;
    UNRECOVERED_JUMPTABLE = *(code **)(*puVar6 + 8);
    func_0x000107c32df8();
    iVar10 = (int)param_2;
    if (bVar4) {
                    /* WARNING: Could not recover jumptable at 0x000108707828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    uVar5 = param_1[0x16] == 1;
    if ((bool)uVar5) {
      lStack_b0 = *param_3;
      *param_3 = 0;
      func_0x000108681930(lStack_b0,6);
      (**(code **)(*(long *)*param_4 + 8))((long *)*param_4,6);
      uStack_88 = uStack_88 & 0xffffffffffffff00;
      iVar10 = (int)&uStack_88;
      func_0x000107c28b2c(lStack_b0);
      func_0x000107c29560(&uStack_88);
      puVar6 = (ulong *)&lStack_b0;
      func_0x000107c29578();
    }
    else {
      param_1[0x16] = param_1[0x16] + 1;
      uVar8 = *param_1;
      uVar2 = param_1[1];
      uStack_c8 = uVar8;
      uStack_c0 = uVar2;
      if (uVar2 != 0) {
        do {
          func_0x000107c32dfc();
        } while (extraout_w10 != 0);
      }
      puVar7 = (undefined8 *)0xc8;
      puStack_b8 = param_1;
      __Znwm();
      func_0x000107c32e70();
      *puVar7 = &PTR_FUN_110a68618;
      lStack_90 = *param_3;
      *param_3 = 0;
      uStack_a8 = uVar8;
      if (uVar2 != 0) {
        do {
          func_0x000107c32dfc();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c32e28();
      uVar1 = unaff_x20 + 0x18;
      *puVar7 = &PTR_FUN_110a68668;
      puVar7[1] = uVar8;
      uStack_a8 = 0;
      puVar7[2] = uVar2;
      puVar7[3] = param_1;
      uVar8 = uVar1;
      func_0x000107c29614(uVar1,&uStack_88,param_1 + 0x12);
      func_0x000107c32e4c(&PTR_FUN_110a68418);
      if (uVar8 == 0) {
        *(undefined8 *)(unaff_x20 + 0xa0) = 0;
      }
      else {
        uVar5 = uVar8 == param_2;
        if ((bool)uVar5) {
          *(long *)(unaff_x20 + 0xa0) = unaff_x20 + 0x88;
          func_0x000108708250();
          (*extraout_x8)();
        }
        else {
          *(ulong *)(unaff_x20 + 0xa0) = uVar8;
          *(undefined8 *)(param_2 + 0x18) = 0;
        }
      }
      lVar11 = lStack_90;
      lStack_90 = 0;
      *(long *)(unaff_x20 + 0xa8) = lVar11;
      lVar11 = param_4[1];
      lVar12 = *param_4;
      *(long *)(unaff_x20 + 0xb8) = param_4[1];
      *(long *)(unaff_x20 + 0xb0) = lVar12;
      if (lVar11 != 0) {
        do {
          func_0x000107c32dfc();
        } while (extraout_w10_01 != 0);
      }
      *(undefined1 *)(unaff_x20 + 0xc0) = 0;
      func_0x000107c29620(&uStack_88);
      func_0x000107c29584(&uStack_a8);
      func_0x000107c29578(&lStack_90);
      uVar8 = uVar1;
      if ((*(long *)(unaff_x20 + 0x80) == 0) ||
         (uVar5 = *(long *)(*(long *)(unaff_x20 + 0x80) + 8) == -1, (bool)uVar5)) {
        do {
          uStack_a8 = uVar8;
          func_0x000107c32e1c();
          uVar8 = uStack_a8;
        } while (extraout_w10_02 != 0);
        do {
          func_0x000107c32e3c();
        } while (extraout_w11 != 0);
        uStack_88 = *(ulong *)(unaff_x20 + 0x78);
        *(ulong *)(unaff_x20 + 0x78) = uVar1;
        *(long *)(unaff_x20 + 0x80) = unaff_x20;
        func_0x000108707e9c(&uStack_88);
        FUN_108708044(&uStack_a8);
      }
      func_0x000108708038(0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(unaff_x24,0x10);
        if (bVar4) {
          *unaff_x24 = *unaff_x24 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      param_1[2] = param_1[2] + 1;
      uStack_a8 = uVar1;
      uStack_88 = uVar1;
      do {
        func_0x000107c32e1c();
      } while (extraout_w10_03 != 0);
      iVar10 = (int)&uStack_88;
      func_0x000107c29634(param_1 + 0xb);
      func_0x000107c2961c(param_1 + 2);
      func_0x000107c29580(&uStack_88);
      func_0x000107c29580(&uStack_a8);
      func_0x000108708248();
      puVar6 = &uStack_c8;
      func_0x000107c29584();
    }
    func_0x000107c32df8();
    if ((bool)uVar5) {
      return;
    }
  }
  ___stack_chk_fail();
  if (iVar10 != 0) {
    func_0x000108708280();
    func_0x000107c29620(&uStack_88);
    func_0x000107c29584(&uStack_a8);
    func_0x000107c29578(&lStack_90);
    __ZNSt3__119__shared_weak_countD2Ev();
    func_0x000108708038();
    puVar6 = &uStack_c8;
    func_0x000107c29584();
  }
  func_0x000108708204();
  *(undefined1 *)(puVar6 + 0x18) = 1;
  *(undefined1 *)(puVar6 + 0x11) = 1;
  while ((puVar6[10] != 0 || (puVar6[0x10] != 0))) {
    puVar9 = puVar6 + 2;
    func_0x000107c2960c();
    func_0x000108708250(*puVar9);
    (*extraout_x8_00)();
    func_0x0001008715f4(puVar6 + 2);
  }
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  return;
}



/* Entry: 108707b0c; end: 108707b67;  */

void FUN_108707b0c(long param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined1 *)(param_1 + 0x88) = 1;
  while ((*(long *)(param_1 + 0x50) != 0 || (*(long *)(param_1 + 0x80) != 0))) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    func_0x000107c2960c();
    func_0x000108708250(*puVar1);
    (*extraout_x8)();
    func_0x0001008715f4(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



/* Entry: 108707b68; end: 108707be7;  */

void FUN_108707b68(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c32e48();
  if ((param_1 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), param_1 == (long *)0x0)
     ) {
    func_0x00010527822c();
  }
  else {
    func_0x000107c32e2c();
    if (param_1 != (long *)0x0) {
      func_0x000107c32e54(*(undefined8 *)(*param_1 + 0x30));
      func_0x0001086ff014(auStack_38);
      func_0x000108708248();
      func_0x000107c32e24();
      return;
    }
    func_0x000104bfeb48();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108707bc8);
  (*pcVar1)();
}



/* Entry: 108707be8; end: 108707bff;  */

void FUN_108707be8(long param_1)

{
  *(undefined1 *)(param_1 + 0xa8) = 1;
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010870823c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 8))(*(long **)(param_1 + 0x98),0xb);
  return;
}



/* Entry: 108707c00; end: 108707c6b;  */

void FUN_108707c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    func_0x00010086c044();
    func_0x00010086c3a0();
    (**(code **)**(undefined8 **)(param_1 + 0x98))(*(undefined8 **)(param_1 + 0x98),param_2,param_3)
    ;
  }
  return;
}



/* Entry: 108707c6c; end: 108707c73;  */

void FUN_108707c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x00010086c044();
    func_0x00010086c3a0();
    (**(code **)**(undefined8 **)(param_1 + 0x40))(*(undefined8 **)(param_1 + 0x40),param_2,param_3)
    ;
  }
  return;
}



/* Entry: 108707c74; end: 108707cab;  */

void FUN_108707c74(long param_1)

{
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    func_0x00010870829c();
    func_0x000108708290();
    func_0x00010086c3a0();
    func_0x000108708218();
  }
  return;
}



/* Entry: 108707cac; end: 108707cc3;  */

void FUN_108707cac(long param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x00010870829c();
    func_0x000108708290();
    func_0x00010086c3a0();
    func_0x000108708218();
  }
  return;
}



/* Entry: 108707cc4; end: 108707cfb;  */

void FUN_108707cc4(long param_1)

{
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    func_0x00010870829c();
    func_0x000108708290();
    func_0x00010086c3a0();
    func_0x000108708218();
  }
  return;
}



/* Entry: 108707cfc; end: 108707d03;  */

void FUN_108707cfc(long param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x00010870829c();
    func_0x000108708290();
    func_0x00010086c3a0();
    func_0x000108708218();
  }
  return;
}



/* Entry: 108707d04; end: 108707e07;  */

void FUN_108707d04(long param_1,long param_2)

{
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [96];
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    if (*(char *)(param_2 + 0x60) == '\x01') {
      func_0x00010086cb40(auStack_80);
    }
    else {
      FUN_108681a24(auStack_a8,*(undefined8 *)(param_1 + 0x90));
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_d8 = 0;
      func_0x00010086bfc0(auStack_80,auStack_a8,&uStack_c0,&uStack_d8,0,0);
      func_0x000107c27a04(&uStack_d8);
      func_0x000107c27a04(&uStack_c0);
      func_0x00010086cfe4(auStack_a8);
    }
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    (**(code **)**(undefined8 **)(param_1 + 0x98))
              (*(undefined8 **)(param_1 + 0x98),&uStack_f0,&uStack_108,0,auStack_80);
    func_0x000107c27b3c(&uStack_108);
    func_0x000107c27b40(&uStack_f0);
    func_0x00010086cf88(auStack_80);
  }
  return;
}



/* Entry: 108707e08; end: 108707e0b;  */

undefined8 * FUN_108707e08(undefined8 *param_1)

{
  func_0x0001008716c4(&PTR_FUN_110a68418);
  func_0x0001086ff014();
  func_0x000107c29578(param_1 + 0x12);
  func_0x000108700d14(param_1 + 0xe);
  func_0x000108707e9c(param_1 + 0xc);
  *param_1 = &PTR_DAT_110a685c8;
  func_0x000100558bb4(param_1 + 5);
  func_0x0001006acb08(param_1 + 1);
  return param_1;
}



/* Entry: 108707e0c; end: 108707e1f;  */

void FUN_108707e0c(void)

{
  FUN_108707e54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108707e20; end: 108707e2f;  */

undefined8 * FUN_108707e20(long param_1)

{
  func_0x0001008716c4(&PTR_FUN_110a68418);
  func_0x0001086ff014();
  func_0x000107c29578(param_1 + 0x38);
  func_0x000108700d14(param_1 + 0x18);
  func_0x000108707e9c(param_1 + 8);
  *(undefined8 *)(param_1 + -0x58) = &PTR_DAT_110a685c8;
  func_0x000100558bb4(param_1 + -0x30);
  func_0x0001006acb08(param_1 + -0x50);
  return (undefined8 *)(param_1 + -0x58);
}



/* Entry: 108707e30; end: 108707e43;  */

void FUN_108707e30(void)

{
  func_0x0001008716d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108707e44; end: 108707e53;  */

undefined8 * FUN_108707e44(long param_1)

{
  func_0x0001008716c4(&PTR_DAT_110a68490);
  func_0x0001006b3a34();
  func_0x0001005fe494(param_1 + 0x38);
  func_0x0001006b3ab0(param_1 + 0x18);
  func_0x0001006acbd0(param_1 + 8);
  *(undefined8 *)(param_1 + -0x58) = &PTR_DAT_110a685c8;
  func_0x000100558bb4(param_1 + -0x30);
  func_0x0001006acb08(param_1 + -0x50);
  return (undefined8 *)(param_1 + -0x58);
}



/* Entry: 108707e54; end: 108707ebf;  */

undefined8 * FUN_108707e54(undefined8 *param_1)

{
  func_0x0001008716c4(&PTR_FUN_110a68418);
  func_0x0001086ff014();
  func_0x000107c29578(param_1 + 0x12);
  func_0x000108700d14(param_1 + 0xe);
  func_0x000108707e9c(param_1 + 0xc);
  *param_1 = &PTR_DAT_110a685c8;
  func_0x000100558bb4(param_1 + 5);
  func_0x0001006acb08(param_1 + 1);
  return param_1;
}



/* Entry: 108707ec0; end: 108707ec3;  */

void FUN_108707ec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a68618;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108707ec4; end: 108707ed7;  */

void FUN_108707ec4(void)

{
  func_0x000108708028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108707ed8; end: 108707edf;  */

void FUN_108707ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008716bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108707ee0; end: 108707f0b;  */

undefined8 * FUN_108707ee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a68668;
  func_0x000107c29584(param_1 + 1);
  return param_1;
}



/* Entry: 108707f0c; end: 108707f1f;  */

void FUN_108707f0c(void)

{
  FUN_108707ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108707f20; end: 108707f43;  */

void FUN_108707f20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c32e28();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_110a68668;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c32dfc();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  return;
}



/* Entry: 108707f44; end: 108707f67;  */

void FUN_108707f44(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a68668;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c32dfc();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 108707f68; end: 108707faf;  */

void FUN_108707f68(void)

{
  long unaff_x21;
  undefined8 uStack_40;
  
  func_0x00010087127c();
  if (uStack_40 != 0) {
    func_0x000100871320();
    *(long *)(unaff_x21 + 0xb0) = *(long *)(unaff_x21 + 0xb0) + -1;
  }
  func_0x00010087181c();
  return;
}



/* Entry: 108707fb0; end: 108707fe7;  */

long FUN_108707fb0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a686d8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108707fe8; end: 108708043;  */

undefined ** FUN_108707fe8(void)

{
  return &PTR_DAT_110a686d8;
}



/* Entry: 108708044; end: 108708067;  */

void FUN_108708044(long param_1)

{
  func_0x000107c32e74();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108708068; end: 10870806b;  */

void FUN_108708068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a686f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10870806c; end: 10870807f;  */

void FUN_10870806c(void)

{
  func_0x0001087080dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108708080; end: 108708097;  */

void FUN_108708080(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a68748;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100574708();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 108708098; end: 1087080cf;  */

long FUN_108708098(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a687a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087080d0; end: 1087080eb;  */

undefined ** FUN_1087080d0(void)

{
  return &PTR_DAT_110a687a8;
}



/* Entry: 1087080ec; end: 1087081db;  */

void FUN_1087080ec(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      func_0x000107c29640();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_1087081dc(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x000107c29644(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 1087081dc; end: 1087082af;  */

void FUN_1087081dc(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 1087082b0; end: 1087082cf;  */

void FUN_1087082b0(void)

{
  undefined1 uStack_11;
  
  FUN_1087082f8(&uStack_11);
  return;
}



/* Entry: 1087082d0; end: 1087082f7;  */

undefined8 FUN_1087082d0(undefined8 param_1)

{
  func_0x000107c32e80();
  func_0x000107c2916c();
  return param_1;
}



/* Entry: 1087082f8; end: 10870838f;  */

undefined8 * FUN_1087082f8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 auStack_40 [2];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c29664(auStack_40,1);
  FUN_108708390(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000107c29668();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107c29668(auStack_40);
  __Unwind_Resume();
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110a687c8;
  puVar2[1] = 0;
  FUN_1087083e8(puVar2 + 3);
  return puVar2;
}



/* Entry: 108708390; end: 1087083c3;  */

undefined8 * FUN_108708390(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a687c8;
  param_1[1] = 0;
  FUN_1087083e8(param_1 + 3);
  return param_1;
}



/* Entry: 1087083c4; end: 1087083c7;  */

void FUN_1087083c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a687c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087083c8; end: 1087083db;  */

void FUN_1087083c8(void)

{
  func_0x000108708444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087083dc; end: 1087083e7;  */

long FUN_1087083dc(long param_1)

{
  func_0x000107c29660(param_1 + 0x110);
  func_0x000107c29660(param_1 + 0xd8);
  func_0x000107c29660(param_1 + 0xa0);
  func_0x000107c29660(param_1 + 0x68);
  func_0x000107c29660(param_1 + 0x30);
  return param_1 + 0x18;
}



/* Entry: 1087083e8; end: 10870840f;  */

void FUN_1087083e8(undefined4 *param_1)

{
  _bzero(param_1,0x130);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 108708410; end: 108708457;  */

void FUN_108708410(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 108708458; end: 10870849b;  */

long FUN_108708458(long param_1)

{
  func_0x000107c29660(param_1 + 0xf8);
  func_0x000107c29660(param_1 + 0xc0);
  func_0x000107c29660(param_1 + 0x88);
  func_0x000107c29660(param_1 + 0x50);
  func_0x000107c29660(param_1 + 0x18);
  return param_1;
}



/* Entry: 10870849c; end: 1087084a3;  */

void FUN_10870849c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1087084a4; end: 1087085ff;  */

uint FUN_1087084a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x22;
  long unaff_x23;
  long lVar10;
  
  if (*(int *)(param_1 + 0x40) == 0x11) {
    if ((*(byte *)(*(long *)(param_1 + 0x38) + 0x10) & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar8 = 0;
      uVar6 = 0;
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
      FUN_108708684();
      uVar2 = 0;
      for (; unaff_x23 != 0; unaff_x23 = unaff_x23 + -8) {
        lVar10 = *unaff_x22;
        ppuVar7 = *(undefined ***)(lVar10 + 0x18);
        ppuVar1 = &PTR_PTR_11326cb58;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar1 = ppuVar7;
        }
        uVar4 = param_3;
        func_0x000107c287fc(param_3,ppuVar1);
        uVar5 = uVar2;
        if ((int)uVar4 != 0) {
          if ((uVar8 & 1) == 0) {
            ppuVar7 = *(undefined ***)(lVar10 + 0x20);
            ppuVar1 = &PTR_PTR_11326ae28;
            if (ppuVar7 != (undefined **)0x0) {
              ppuVar1 = ppuVar7;
            }
            if (*(int *)(lVar9 + 0x1c) == 1) {
              if (*(int *)((long)ppuVar1 + 0x1c) != 1) goto LAB_1087085bc;
              bVar3 = *(undefined **)(lVar9 + 0x10) == ppuVar1[2];
              uVar5 = (uint)!bVar3;
              uVar8 = (ulong)bVar3;
              if ((!bVar3) || (((uVar2 ^ 1) & 1) != 0)) goto LAB_1087085c4;
            }
            else {
              if ((*(int *)(lVar9 + 0x1c) != 2) || (*(int *)((long)ppuVar1 + 0x1c) != 2)) {
LAB_1087085bc:
                uVar8 = 0;
                uVar5 = 1;
                goto LAB_1087085c4;
              }
              uVar8 = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffffc;
              func_0x000107c278d0(uVar8,(ulong)ppuVar1[2] & 0xfffffffffffffffc);
              if (((uint)uVar8 & uVar2 & 1) == 0) {
                uVar5 = (uint)uVar8 ^ 1;
                goto LAB_1087085c4;
              }
            }
          }
          uVar6 = 1;
          goto LAB_1087085f8;
        }
LAB_1087085c4:
        uVar6 = (uint)uVar8;
        unaff_x22 = unaff_x22 + 1;
        uVar2 = uVar5;
      }
      uVar6 = uVar6 & uVar2;
    }
  }
  else {
    uVar6 = 0;
  }
LAB_1087085f8:
  return uVar6 & 1;
}



/* Entry: 108708600; end: 108708683;  */

bool FUN_108708600(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *unaff_x22;
  long unaff_x23;
  
  if (*(int *)(param_1 + 0x40) == 0x11) {
    ppuVar1 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x18);
    }
    FUN_108708684();
    do {
      bVar3 = unaff_x23 != 0;
      if (unaff_x23 == 0) {
        return false;
      }
      ppuVar2 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(*unaff_x22 + 0x18) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(*unaff_x22 + 0x18);
      }
      ppuVar4 = ppuVar1;
      func_0x000107c287e8(ppuVar1,ppuVar2);
      unaff_x23 = unaff_x23 + -8;
      unaff_x22 = unaff_x22 + 1;
    } while ((int)ppuVar4 == 0);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 108708684; end: 1087086b3;  */

void FUN_108708684(void)

{
  return;
}



/* Entry: 1087086b4; end: 108708703;  */

void FUN_1087086b4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uStack_28;
  
  if ((param_3 & 0x1ffffffff) == 0x100000000) {
    uStack_28 = param_2;
    func_0x000107c28944(param_1 + 0x378,&uStack_28);
    if ((*(byte *)(param_1 + 0x370) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x370) = 1;
    }
    *(undefined8 *)(param_1 + 0x368) = 0;
  }
  return;
}



/* Entry: 108708704; end: 1087087c7;  */

/* WARNING: Removing unreachable block (ram,0x000108708790) */

void FUN_108708704(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_38;
  
  plVar4 = *(long **)(param_1 + 0x380);
  plVar1 = *(long **)(param_1 + 0x378);
  lStack_38 = param_2;
  FUN_108708c0c(plVar1,plVar4,&lStack_38);
  plVar3 = plVar4;
  plVar2 = plVar1;
  if (plVar4 != plVar1) {
    while (plVar1 = plVar1 + 1, plVar3 = plVar2, plVar1 != plVar4) {
      if (*plVar1 != lStack_38) {
        *plVar2 = *plVar1;
        plVar2 = plVar2 + 1;
      }
    }
  }
  if (plVar3 != *(long **)(param_1 + 0x380)) {
    *(long **)(param_1 + 0x380) = plVar3;
  }
  if ((*(long **)(param_1 + 0x378) == plVar3) && (*(char *)(param_1 + 0x370) == '\x01')) {
    *(undefined1 *)(param_1 + 0x370) = 0;
  }
  return;
}



/* Entry: 1087087c8; end: 108708c0b;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1087087c8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  uint param_5,uint param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined4 param_12,undefined4 param_13,
                  undefined8 param_14)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long lVar7;
  undefined8 *unaff_x19;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  ulong uStack_70;
  long lStack_68;
  
  uVar6 = param_5;
  func_0x00010871ed20();
  param_6 = param_6 & 0xff;
  uVar8 = (uint)((ulong)param_14 >> 0x20);
  lStack_68 = param_4;
  if (uVar6 == 5 || param_6 == 3) {
    puVar4 = (undefined8 *)unaff_x19[0x2d];
    param_2 = (undefined8 *)unaff_x19[0x2e];
    FUN_108708c0c(puVar4,param_2,&lStack_68);
    uVar10 = 2;
    switch(param_6) {
    case 0:
      if ((undefined8 *)unaff_x19[0x2e] != puVar4) {
        return (bool)2;
      }
      func_0x000107c28944(unaff_x19 + 0x2d,&lStack_68);
      func_0x00010871f7d4();
      puVar4 = unaff_x19 + 0x33;
      goto LAB_108708a8c;
    case 3:
    case 7:
      if ((undefined8 *)unaff_x19[0x2e] != puVar4) {
        lVar7 = unaff_x19[0x2d];
        lVar3 = (long)unaff_x19[0x2e] - (long)(puVar4 + 1);
        puVar9 = puVar4;
        if (lVar3 != 0) {
          func_0x00010871f4c4();
        }
        unaff_x19[0x2e] = (long)puVar4 + lVar3;
        puVar1 = (undefined8 *)((long)puVar4 + (unaff_x19[0x33] - lVar7));
        param_2 = puVar1 + 1;
        lVar3 = unaff_x19[0x34] - (long)param_2;
        puVar4 = puVar9;
        if (lVar3 != 0) {
          puVar4 = puVar1;
          _memmove(puVar1,param_2,lVar3);
        }
        unaff_x19[0x34] = (long)puVar1 + lVar3;
        func_0x00010871f400();
      }
      uVar10 = 0;
      if (param_6 != 3) {
        return false;
      }
      if (((int)param_14 == 1 & uVar8) != 0) {
        return false;
      }
      break;
    case 9:
code_r0x0001087088d4:
      unaff_x19[0x4c] = param_11;
      *(undefined1 *)(unaff_x19 + 0x4d) = 1;
      FUN_108690b88(unaff_x19 + 0x4e,param_9);
      puVar4 = unaff_x19 + 0x52;
      param_9 = param_10;
      goto LAB_1087088f8;
    }
  }
  else {
    if (param_6 == 9) goto code_r0x0001087088d4;
    uVar10 = 2;
    puVar4 = param_1;
  }
  if (param_5 == 1 || param_6 == 4) {
    puVar4 = (undefined8 *)unaff_x19[0x2a];
    param_2 = (undefined8 *)unaff_x19[0x2b];
    FUN_108708c0c(puVar4,param_2,&lStack_68);
    if (param_6 == 7 || param_6 == 4) {
      if ((undefined8 *)unaff_x19[0x2b] != puVar4) {
        lVar7 = unaff_x19[0x2a];
        lVar3 = (long)unaff_x19[0x2b] - (long)(puVar4 + 1);
        puVar9 = puVar4;
        if (lVar3 != 0) {
          func_0x00010871f4c4();
        }
        unaff_x19[0x2b] = (long)puVar4 + lVar3;
        puVar1 = (undefined8 *)((long)puVar4 + (unaff_x19[0x30] - lVar7));
        param_2 = puVar1 + 1;
        lVar3 = unaff_x19[0x31] - (long)param_2;
        puVar4 = puVar9;
        if (lVar3 != 0) {
          puVar4 = puVar1;
          _memmove(puVar1,param_2,lVar3);
        }
        unaff_x19[0x31] = (long)puVar1 + lVar3;
        func_0x00010871f400();
      }
      uVar10 = 0;
      if (param_6 != 4) {
        return false;
      }
      if (((int)param_14 == 1 & uVar8) != 0) {
        return false;
      }
    }
    else if (param_6 == 0) {
      if ((undefined8 *)unaff_x19[0x2b] != puVar4) {
        return (bool)2;
      }
      func_0x000107c28944(unaff_x19 + 0x2a,&lStack_68);
      func_0x00010871f7d4();
      puVar4 = unaff_x19 + 0x30;
LAB_108708a8c:
      func_0x000107c27adc(puVar4,&uStack_70);
      FUN_1087086b4();
      return false;
    }
  }
  if ((param_5 & 0xfffffffb) == 1) {
    return (bool)2;
  }
  if (param_6 == 0) {
    if (param_5 < 0x1c) {
      func_0x00010871e80c();
      if ((extraout_w8_00 & 0xc80069) != 0) {
        return (bool)uVar10;
      }
      if ((extraout_w8_00 & 0xe000000) == 0) goto LAB_108708acc;
    }
    else {
LAB_108708acc:
      if (*(char *)(unaff_x19 + 0x23) != '\x01' || (long)unaff_x19[0x22] < lStack_68) {
        unaff_x19[0x22] = lStack_68;
        *(undefined1 *)(unaff_x19 + 0x23) = 1;
        uVar5 = *param_1;
        param_2 = unaff_x19;
        FUN_108863418();
        unaff_x19[0x76] = uVar5;
      }
      if (param_6 - 3 < 2) goto LAB_108708a1c;
    }
  }
  else {
    if (1 < param_6 - 3) {
      if (param_6 == 0xd) {
        if ((param_5 < 0x18) && (func_0x00010871e80c(), (extraout_w8_01 & 0xc80069) != 0)) {
          return (bool)uVar10;
        }
        if (*(char *)(unaff_x19 + 0x3f) == '\x01' && lStack_68 <= (long)unaff_x19[0x3e]) {
          return false;
        }
        unaff_x19[0x3e] = lStack_68;
        *(undefined1 *)(unaff_x19 + 0x3f) = 1;
        return false;
      }
      if (param_6 == 0xf) {
        cVar2 = *(char *)(unaff_x19 + 0x4d);
        if (cVar2 == '\x01') {
          *(undefined1 *)(unaff_x19 + 0x4d) = 0;
        }
        func_0x000107c2890c(unaff_x19 + 0x4e);
        func_0x000107c2890c(unaff_x19 + 0x52);
        return cVar2 == *(char *)(unaff_x19 + 0x4d);
      }
      if (param_6 == 0x11) {
        if (*(char *)(unaff_x19 + 0x25) != '\x01' || (long)unaff_x19[0x24] < lStack_68) {
          puVar9 = (undefined8 *)unaff_x19[0x76];
          func_0x00010871e3fc();
          unaff_x19[0x76] = puVar4;
          return puVar9 == puVar4;
        }
        return (bool)uVar10;
      }
      return (bool)uVar10;
    }
    if ((0x1b < param_5) || (func_0x00010871e80c(), (extraout_w8 & 0xe000001) == 0))
    goto LAB_108708acc;
LAB_108708a1c:
    if ((*(char *)(unaff_x19 + 0x25) != '\x01') || ((long)unaff_x19[0x24] < lStack_68)) {
      uStack_70 = uStack_70 & 0xffffffff00000000;
      func_0x00010871ea14();
      FUN_1086a3dd8();
      if ((((ulong)param_2 & 1) != 0) && (lStack_68 <= (long)param_1)) {
        func_0x00010871e3fc();
        unaff_x19[0x76] = param_1;
      }
    }
  }
  puVar4 = unaff_x19 + 0x26;
LAB_1087088f8:
  FUN_108690b88(puVar4,param_9);
  return false;
}



/* Entry: 108708c0c; end: 108708c2b;  */

void FUN_108708c0c(void)

{
  func_0x00010871bb4c();
  return;
}



/* Entry: 108708c2c; end: 108708cc7;  */

void FUN_108708c2c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  
  if ((param_2 & 1) == 0) {
    func_0x00010887b8a4(param_1,param_3,param_4);
    if ((bool)in_ZR) {
      func_0x000107c34178();
      func_0x000107c3437c();
      if (!(bool)in_ZR) {
        func_0x000107c31338();
        func_0x00010887b508();
        func_0x00010887b668();
        func_0x00010887b788();
        func_0x000107c316c4();
        func_0x00010887b4a4();
        func_0x00010887b838();
        func_0x00010887be60();
        func_0x000107c34388();
        func_0x00010887be50();
      }
    }
    func_0x00010887c41c(param_1,&UNK_10f4d544d);
    FUN_10886c55c();
  }
  else {
    func_0x00010887b8a4(param_1,param_3,param_4);
    if ((bool)in_ZR) {
      func_0x000107c34178();
      func_0x000107c3437c();
      if (!(bool)in_ZR) {
        func_0x000107c31338();
        func_0x00010887b508();
        func_0x00010887b668();
        func_0x00010887b788();
        func_0x000107c316c4();
        func_0x00010887b4a4();
        func_0x00010887b838();
        func_0x00010887be60();
        func_0x000107c34388();
        func_0x00010887be50();
      }
    }
    func_0x00010887c41c(param_1,&UNK_10f4d5330);
    FUN_10886c55c();
  }
  return;
}



/* Entry: 108708cc8; end: 108708e6f;  */

undefined1 * FUN_108708cc8(int param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  long *plVar4;
  undefined1 auStack_848 [200];
  undefined1 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [736];
  int iStack_438;
  byte bStack_434;
  byte bStack_430;
  char cStack_3c8;
  undefined1 auStack_3a0 [888];
  undefined8 uStack_28;
  
  func_0x00010871e07c();
  uStack_28 = extraout_x8;
  func_0x00010871eccc(auStack_718);
  func_0x00010871e9a4();
  if ((((param_1 != 0) && (in_ZR = cStack_3c8 == '\x01', (bool)in_ZR)) && ((bStack_430 & 1) != 0))
     && (in_ZR = 0, iStack_438 == 1)) {
    if (*(long *)(unaff_x19 + 0x448) != 0) {
      FUN_1086995ac(unaff_x19 + 0x40,auStack_718);
      func_0x00010871ecdc(*(undefined8 *)(unaff_x19 + 0x448));
      (*extraout_x8_00)();
      in_ZR = cStack_3c8 == '\x01';
      if ((!(bool)in_ZR) || ((bStack_430 & 1) == 0)) goto LAB_108708d64;
    }
    in_ZR = iStack_438 == 1;
    if (((bool)in_ZR) && ((bStack_434 & 1) == 0)) goto LAB_108708df8;
  }
LAB_108708d64:
  plVar4 = *(long **)(unaff_x19 + 200);
  func_0x000107c27af4(auStack_3a0,auStack_718);
  FUN_10871bb70(auStack_730,auStack_3a0,1);
  uStack_748 = 0;
  uStack_740 = 0;
  uStack_738 = 0;
  uStack_760 = 0;
  uStack_758 = 0;
  uStack_750 = 0;
  uStack_778 = 0;
  uStack_770 = 0;
  uStack_768 = 0;
  auStack_848[0] = 0;
  uStack_780 = 0;
  (**(code **)(*plVar4 + 0x10))(plVar4,auStack_730,&uStack_748,&uStack_760,&uStack_778,auStack_848);
  func_0x000107c27b38(auStack_848);
  func_0x000107c28c5c(&uStack_778);
  func_0x000107c27b3c(&uStack_760);
  func_0x000107c28c60(&uStack_748);
  func_0x000107c27b40(auStack_730);
  func_0x000107c27b1c(auStack_3a0);
LAB_108708df8:
  puVar1 = auStack_718;
  func_0x000107c27b1c(puVar1);
  func_0x00010086526c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010871e314();
  func_0x000107c27b38();
  func_0x000107c28c5c(&uStack_778);
  func_0x000107c27b3c(&uStack_760);
  func_0x000107c28c60(&uStack_748);
  func_0x000107c27b40(auStack_730);
  func_0x000107c27b1c(auStack_3a0);
  puVar1 = auStack_718;
  func_0x000107c27b1c();
  func_0x00010871e260();
  if (puVar1[0x100] == '\x01') {
    pbVar2 = puVar1 + 0xd0;
    func_0x000107c289e8();
    uVar3 = (uint)*pbVar2;
  }
  else {
    uVar3 = 0;
  }
  return (undefined1 *)(ulong)(uVar3 & 1);
}



/* Entry: 108708e70; end: 108708e9f;  */

byte FUN_108708e70(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x100) == '\x01') {
    pbVar1 = (byte *)(param_1 + 0xd0);
    func_0x000107c289e8();
    bVar2 = *pbVar1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 108708ea0; end: 108709053;  */

void FUN_108708ea0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  long lVar4;
  undefined1 auStack_408 [24];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_3c0 [200];
  undefined1 uStack_2f8;
  int iStack_e0;
  byte bStack_dc;
  byte bStack_d8;
  char cStack_70;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  plVar3 = &lStack_48;
  func_0x000104bf1c14(plVar3,(param_2[1] - *param_2) / 0x3d0);
  lVar4 = *param_2;
  lVar1 = param_2[1];
  do {
    iVar2 = (int)plVar3;
    if (lVar4 == lVar1) {
      if (lStack_48 != lStack_40) {
        uStack_3d8 = 0;
        uStack_3d0 = 0;
        uStack_3c8 = 0;
        uStack_3f0 = 0;
        uStack_3e8 = 0;
        uStack_3e0 = 0;
        func_0x00010871f6ac(*(undefined8 *)(param_1 + 200));
        auStack_3c0[0] = 0;
        uStack_2f8 = 0;
        func_0x000107c32ec8();
        (*extraout_x8_00)();
        func_0x000107c27b38(auStack_3c0);
        func_0x000107c28c5c(auStack_408);
        func_0x000107c27b3c(&uStack_3f0);
        func_0x000107c28c60(&uStack_3d8);
      }
      func_0x000107c27b40(&lStack_48);
      return;
    }
    func_0x0001008655c8(auStack_3c0);
    func_0x00010871eccc();
    func_0x00010871e9a4();
    if ((((iVar2 == 0) || (cStack_70 != '\x01')) || ((bStack_d8 & 1) == 0)) || (iStack_e0 != 1)) {
LAB_108708f70:
      func_0x000107c27b14(&lStack_48,auStack_3c0);
    }
    else {
      if (*(long *)(param_1 + 0x448) != 0) {
        FUN_1086995ac(param_1 + 0x40,auStack_3c0);
        func_0x00010871ecdc(*(undefined8 *)(param_1 + 0x448));
        (*extraout_x8)();
        if ((cStack_70 != '\x01') || ((bStack_d8 & 1) == 0)) goto LAB_108708f70;
      }
      if ((iStack_e0 != 1) || ((bStack_dc & 1) != 0)) goto LAB_108708f70;
    }
    plVar3 = (long *)auStack_3c0;
    func_0x000107c27b1c();
    lVar4 = lVar4 + 0x3d0;
  } while( true );
}



/* Entry: 108709054; end: 108709097;  */

void FUN_108709054(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_108867224(auStack_38,*(undefined8 *)(param_1 + 0xb8));
  func_0x000107c32ee8();
  FUN_108708ea0();
  func_0x000107c29108(auStack_38);
  return;
}



/* Entry: 108709098; end: 1087091b3;  */

void FUN_108709098(void)

{
  long unaff_x19;
  undefined1 auStack_f38 [984];
  undefined1 auStack_b60 [984];
  undefined1 auStack_788 [424];
  byte bStack_5e0;
  undefined1 auStack_5d8 [464];
  char cStack_408;
  undefined1 auStack_400 [976];
  
  func_0x000107c32eb0();
  func_0x00010871e108(auStack_400);
  func_0x000107c29f64(auStack_5d8,*(undefined8 *)(unaff_x19 + 0xb8));
  FUN_10886397c(auStack_f38,*(undefined8 *)(unaff_x19 + 0xb8));
  func_0x000107c28998(auStack_788,auStack_f38);
  func_0x000107c28948(auStack_f38);
  if ((cStack_408 == '\x01') && ((bStack_5e0 & 1) != 0)) {
    FUN_10871bca8(auStack_f38,auStack_400);
    func_0x00010871ef0c(auStack_b60);
    func_0x00010871ec30();
    func_0x000107c288cc(auStack_b60);
    func_0x00010871e76c();
  }
  func_0x00010871e354();
  func_0x00010871e274();
  func_0x000107c288dc(auStack_788);
  func_0x000107c288c8(auStack_5d8);
  func_0x000107c288d0(auStack_400);
  return;
}



/* Entry: 1087091b4; end: 1087091e7;  */

void FUN_1087091b4(void)

{
  undefined1 auStack_3f8 [984];
  
  func_0x00010871e314();
  func_0x00010871e48c();
  func_0x000107c32ee8();
  func_0x000107c28918();
  func_0x000107c288d0(auStack_3f8);
  return;
}



/* Entry: 1087091e8; end: 10870a20b;  */

void FUN_1087091e8(undefined1 *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  ulong param_6,undefined8 param_7)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  undefined **ppuVar5;
  uint uVar6;
  byte bVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  char *pcVar18;
  undefined4 *puVar19;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar20;
  undefined *puVar21;
  ulong uVar22;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int iVar23;
  ulong uVar24;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar25;
  uint uVar26;
  ulong *puVar27;
  ulong *puVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  undefined4 *puVar32;
  int iVar33;
  int iVar34;
  ulong uVar35;
  uint uStack_c4c;
  undefined1 auStack_c48 [24];
  undefined1 auStack_c30 [32];
  byte bStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  long lStack_bf8;
  uint uStack_bf0;
  char cStack_bec;
  ushort uStack_beb;
  byte bStack_be9;
  char cStack_be8;
  char cStack_bc8;
  undefined1 auStack_bc0 [88];
  char cStack_b68;
  char cStack_b48;
  long lStack_b20;
  byte bStack_b18;
  undefined8 uStack_b10;
  int iStack_b08;
  undefined4 uStack_b04;
  undefined1 auStack_b00 [88];
  undefined1 uStack_aa8;
  undefined1 auStack_aa0 [56];
  byte bStack_a68;
  long lStack_a50;
  ushort uStack_a41;
  undefined1 auStack_a38 [224];
  undefined1 auStack_958 [24];
  undefined1 uStack_940;
  undefined8 uStack_938;
  undefined1 auStack_930 [32];
  undefined1 auStack_910 [24];
  undefined1 auStack_8f8 [24];
  undefined1 auStack_8e0 [24];
  undefined1 auStack_8c8 [40];
  undefined1 auStack_8a0 [8];
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined4 uStack_880;
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [40];
  undefined4 uStack_670;
  undefined1 uStack_66c;
  undefined **ppuStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined4 uStack_648;
  long lStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  ulong uStack_620;
  uint uStack_610;
  long lStack_608;
  byte bStack_600;
  long lStack_570;
  long lStack_568;
  ulong uStack_538;
  char cStack_478;
  long lStack_470;
  byte bStack_468;
  long lStack_3e0;
  char cStack_3d8;
  undefined4 uStack_358;
  undefined1 uStack_354;
  uint uStack_328;
  uint uStack_300;
  long lStack_2d8;
  char cStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [40];
  undefined1 auStack_210 [80];
  undefined8 auStack_1c0 [12];
  byte bStack_160;
  long lStack_148;
  char cStack_18;
  undefined8 uStack_10;
  
  func_0x000107c32ee4();
  puVar14 = param_1;
  func_0x00010086515c();
  uStack_c4c = (uint)puVar14;
  uStack_10 = extraout_x8;
  if ((*(byte *)(param_5 + 0x60) >> 3 & 1) == 0) {
    *param_1 = 0;
    param_1[0x3d0] = 0;
    goto LAB_10870993c;
  }
  func_0x00010871e3dc(*(undefined8 *)(param_5 + 0x68));
  uVar13 = (uint)param_6;
  if (uStack_c4c == 0) {
    uVar35 = (ulong)*(uint *)(param_5 + 0xb8);
    if ((*(byte *)(param_5 + 0x60) >> 2 & 1) == 0) {
      bVar9 = false;
    }
    else {
      bVar9 = *(int *)(*(long *)(param_5 + 0x78) + 0xa8) == 0;
    }
    func_0x000108842b30(uVar35,bVar9);
    uVar12 = (uint)uVar35;
    if (uVar12 == 0) {
      ppuVar5 = &PTR_PTR_113286e08;
      if (*(undefined ***)(param_5 + 0x80) != (undefined **)0x0) {
        ppuVar5 = *(undefined ***)(param_5 + 0x80);
      }
      func_0x00010871ee0c(ppuVar5);
      lVar29 = (long)*(int *)(extraout_x8_00 + 8) << 3;
      do {
        uVar12 = (uint)uVar35;
        uVar31 = (ulong)(lVar29 != 0);
        if (lVar29 == 0) break;
        func_0x00010871e64c();
        lVar29 = lVar29 + -8;
        uVar12 = (uint)uVar35;
      } while (uVar12 == 0);
    }
    else {
      puVar27 = (ulong *)(param_4 + 0x18);
      puVar4 = puVar27;
      if ((*puVar27 & 1) != 0) {
        puVar4 = (ulong *)(*puVar27 + 7);
      }
      puVar1 = puVar4 + *(int *)(param_4 + 0x20);
      for (lVar29 = (long)*(int *)(param_4 + 0x20) << 3; puVar28 = puVar1, lVar29 != 0;
          lVar29 = lVar29 + -8) {
        func_0x00010871e3dc(*(undefined8 *)(*puVar4 + 0x18));
        uVar12 = (uint)uVar35;
        puVar28 = puVar4;
        if ((uVar35 & 1) != 0) break;
        puVar4 = puVar4 + 1;
      }
      if ((*(ulong *)(param_4 + 0x18) & 1) != 0) {
        puVar27 = (ulong *)(*(ulong *)(param_4 + 0x18) + 7);
      }
      if (puVar27 + *(int *)(param_4 + 0x20) == puVar28) {
        uVar31 = 0;
      }
      else {
        uVar31 = (ulong)(*(ulong *)(param_5 + 0xb0) <= *(ulong *)(*puVar28 + 0x28));
      }
    }
    uVar26 = uVar13 & (uint)uVar31;
  }
  else {
    uVar31 = param_5 + 0x50;
    FUN_1086a5324(uVar31,param_4,param_2 + 0x78,param_2 + 0x90);
    uVar12 = (uint)uVar31;
    uVar26 = 0;
  }
  func_0x00010871ec08();
  FUN_10870b048(auStack_930,param_5 + 0x50);
  if (uVar12 == 0x11) {
    func_0x00010871e5c4(*(undefined8 *)(param_5 + 0x78));
    ppuVar5 = &PTR_PTR_113280be8;
    if (*(undefined ***)(extraout_x8_01 + 0x80) != (undefined **)0x0) {
      ppuVar5 = *(undefined ***)(extraout_x8_01 + 0x80);
    }
    FUN_10884668c(&lStack_640,ppuVar5,param_2 + 0x78);
    uVar12 = (uint)lStack_640;
    if ((char)uStack_620 == '\x01') {
      func_0x000107c28d24(auStack_930,&uStack_638);
      uStack_c4c = 0;
    }
    uVar25 = *(undefined8 *)(param_2 + 0xb8);
    auStack_1c0[0] = *(undefined8 *)(param_5 + 0x18);
    func_0x0001086d0774(auStack_8a0,auStack_1c0,1);
    FUN_108864508(uVar25,param_3,auStack_8a0);
    func_0x000107c27ae4(auStack_8a0);
    func_0x000107c279dc(&uStack_638);
  }
  func_0x000107c28f30();
  uVar2 = uVar12 & 0xfffffffb;
  uVar6 = (uint)param_4 | uStack_c4c ^ 1;
  uVar30 = (uint)uVar31;
  if (uVar13 == 0) {
    if ((uVar2 != 1) || ((uVar30 & uVar6 & 1) == 0)) {
      uVar35 = *(ulong *)(param_5 + 0x20);
      FUN_1087104b8(uVar35,uVar12,param_7);
    }
    else {
      uVar35 = 7;
    }
  }
  else {
    uVar3 = 0;
    if (uVar2 == 1) {
      uVar3 = uVar30;
    }
    if (uVar6 == 0) {
      uVar3 = 0xd;
    }
    uVar35 = (ulong)uVar3;
  }
  lVar29 = param_2 + 0x78;
  FUN_1086a30e8(lVar29,param_5 + 0x50);
  puVar20 = (undefined8 *)(param_2 + 0xb8);
  FUN_10869ab4c(auStack_958,param_5,*puVar20);
  uVar25 = *(undefined8 *)(param_5 + 0x78);
  FUN_10870e4b8(uVar25);
  uVar15 = param_5;
  FUN_1087208d0(param_5,uVar12,uVar35,((uStack_c4c | uVar30) ^ 1) & 1,lVar29,uStack_940,uVar25);
  ppuVar5 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_5 + 0x80) != (undefined **)0x0) {
    ppuVar5 = *(undefined ***)(param_5 + 0x80);
  }
  if (((param_6 & 1) != 0) || (puVar21 = ppuVar5[0x25], puVar21 == (undefined *)0x0)) {
    puVar21 = ppuVar5[0x24];
  }
  lVar29 = (long)puVar21 * 1000;
  in_ZR = (int)uVar35 == 2 && uVar2 == 1;
  if ((bool)in_ZR) {
    if ((uStack_c4c & (uVar30 ^ 1) & 1) == 0) {
      func_0x000100865634(param_1);
      FUN_10870f90c();
    }
    else {
      *param_1 = 0;
      param_1[0x3d0] = 0;
    }
  }
  else {
    uVar2 = uVar30;
    if (uVar13 == 0) {
      uVar2 = 0;
    }
    uVar22 = (ulong)uVar2;
    uVar24 = 0x100;
    if (uVar13 == 0) {
      uVar24 = 0;
    }
    if (((uStack_c4c | uVar13 ^ 1) & 1) == 0) {
      uVar11 = uVar12 == 0x1e;
      if (uVar12 < 0x1f) {
        func_0x00010871e80c();
        func_0x00010871e0f8();
        if (!(bool)uVar11) {
          uVar24 = 0x100;
          uVar22 = uVar31;
          goto LAB_108709588;
        }
      }
      pcVar18 = (char *)(param_2 + 0x310);
      func_0x000107c289e8();
      if (*pcVar18 != '\0') {
        uVar30 = 1;
      }
      uVar22 = (ulong)uVar30;
      uVar24 = 0x100;
    }
LAB_108709588:
    auStack_b00[0] = 0;
    uStack_aa8 = 0;
    FUN_10870b0c4(auStack_aa0,param_5,auStack_930,uVar35,1,lVar29,*(undefined8 *)(param_5 + 0xb0),
                  uVar12,uVar15 & 0xff,uVar24 | uVar22 & 0xffffffff,auStack_b00,auStack_958,
                  uStack_938);
    uVar13 = (uint)lVar29;
    FUN_1086d0498(auStack_b00);
    uStack_a41 = (ushort)uVar26 | (ushort)(uVar26 << 8);
    FUN_108720700(&lStack_640,param_5 + 0x50,uVar12,uVar15);
    FUN_10866a140(auStack_a38,&lStack_640);
    func_0x000104bee748(&lStack_640);
    FUN_10870b0d8(param_2,auStack_aa0,param_5 + 0x50);
    FUN_10871bdd4(auStack_c48,auStack_aa0);
    func_0x00010871e2b4();
    uStack_630 = 0;
    uStack_628 = 0;
    lStack_640 = extraout_x8_02 + 0x10;
    uStack_638 = 0;
    uStack_620 = CONCAT44(uStack_620._4_4_,0x1ce);
    func_0x00010871e2e0();
    func_0x000107c278b8(auStack_250);
    func_0x000108841d8c(auStack_268,(long)(char)bStack_c10);
    plVar16 = &lStack_640;
    func_0x000107c28820(plVar16,auStack_250,auStack_268);
    func_0x000107c2884c(auStack_238,plVar16);
    func_0x00010871e090(auStack_210,param_2 + 0x118,auStack_238);
    func_0x000107c2882c(auStack_238);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_250);
    func_0x00010871eae0();
    func_0x00010871e48c(&lStack_640,puVar20,auStack_c48);
    bVar9 = bStack_c10 == 0xf;
    if ((((bVar9) && ((bStack_b18 & 1) != 0)) &&
        (bVar9 = cStack_3d8 == '\x01' && lStack_b20 == lStack_3e0,
        cStack_3d8 == '\x01' && lStack_b20 < lStack_3e0)) ||
       ((func_0x00010871e52c(), bVar9 && extraout_w9 == 2 || (cStack_478 == '\x01'))))
    goto LAB_1087098a4;
    bVar9 = false;
    if (uStack_bf0 == 0x1e) {
      pcVar18 = (char *)(param_2 + 0x340);
      func_0x000107c289e8();
      bVar9 = *pcVar18 != '\x01' || uStack_328 == 2;
      if (*pcVar18 != '\x01' || uStack_328 == 2) {
        uStack_bf0 = 6;
      }
    }
    func_0x00010871e628(bStack_c10);
    if ((bVar9) && ((uStack_beb & 1) != 0)) {
      iVar33 = 2;
      bVar9 = extraout_w8 == 0x14;
      if ((extraout_w8 < 0x15) && (func_0x00010871df48(), !bVar9)) goto LAB_108709774;
    }
    else {
LAB_108709774:
      func_0x00010871e0ac(auStack_c48);
      func_0x00010871e610(CONCAT44(uStack_b04,iStack_b08));
      puVar17 = puVar20;
      FUN_1087087c8(puVar20,param_2 + 0x78,&lStack_640);
      iVar33 = (int)puVar17;
      uVar13 = (uint)bStack_c10;
    }
    bVar10 = (uVar13 & 0xff) == 5;
    bVar9 = bVar10 && cStack_bec == '\f';
    if ((((bVar10 && cStack_bec == '\f') && (func_0x00010871e508(uStack_bf0), bVar9)) &&
        (lVar29 = lStack_2c0 - lStack_2c8, lStack_2c0 != lStack_2c8)) &&
       (FUN_108708704(&lStack_640,lStack_bf8), lStack_2c0 - lStack_2c8 != lVar29)) {
      iVar33 = 0;
    }
    uVar13 = (uint)bStack_a68;
    if (bStack_468 == 1 && lStack_a50 < lStack_470) {
      if (bStack_a68 != 0xd) {
        if (bStack_a68 != 0) goto LAB_108709854;
        if ((uVar31 & 1) != 0) goto LAB_10870988c;
        func_0x00010871ee4c();
        lVar29 = extraout_x8_03;
        iVar34 = extraout_w10;
        iVar23 = extraout_w9_00;
        goto LAB_108709878;
      }
LAB_10870988c:
      if (iVar33 != 2) {
        FUN_1088665d4(*puVar20,&lStack_640);
      }
LAB_1087098a4:
      *param_1 = 0;
      param_1[0x3d0] = 0;
    }
    else {
LAB_108709854:
      func_0x00010871ee4c();
      lVar29 = extraout_x8_04;
      iVar34 = extraout_w10_00;
      iVar23 = extraout_w9_01;
      if (((uVar13 < 0x15) && ((1 << (ulong)(uVar13 & 0x1f) & 0x1ffdfcU) != 0)) ||
         ((uVar31 & 1) == 0)) {
LAB_108709878:
        bVar9 = uVar13 == 0xd;
      }
      else {
        bVar9 = true;
      }
      if (((iVar23 == 0) && (iVar34 != 0)) && (bVar9)) goto LAB_10870988c;
      uVar11 = bStack_c10 == 7 || bStack_c10 == 2;
      if (((bStack_c10 == 7 || bStack_c10 == 2) &&
          (uVar11 = (uStack_bf0 & 0xfffffffb) == 1, (bool)uVar11)) &&
         (((iVar23 == 0 || (uVar11 = lVar29 == lStack_bf8, !(bool)uVar11)) &&
          (func_0x00010871e520(cStack_bec), !(bool)uVar11)))) goto LAB_1087098a4;
      puVar17 = puVar20;
      FUN_108720660(puVar20,auStack_c48);
      uVar35 = uStack_538;
      uVar13 = uStack_bf0;
      uVar25 = uStack_c08;
      bVar7 = bStack_c10;
      uVar26 = (uint)uStack_538;
      FUN_10871e8e8(&lStack_640,(long)(char)bStack_c10,uStack_bf0,uStack_c08,uStack_c00);
      iVar34 = 0;
      if ((bool)uVar11) {
        iVar34 = iVar33;
      }
      uVar11 = bVar7 == 0x14;
      if (bVar7 < 0x15) {
        func_0x00010871e80c();
        func_0x00010871e164();
        if ((bool)uVar11) goto LAB_108709df8;
      }
      else {
LAB_108709df8:
        func_0x00010871f7d4();
        if (uStack_620 <= extraout_x8_08) {
          bVar9 = uVar13 == 0xe;
          uVar31 = extraout_x8_08;
          if (((uVar13 < 0xf) && (func_0x00010871e2ec(), uVar31 = extraout_x8_09, !bVar9)) &&
             (uVar11 = bVar7 == 0x14, bVar7 < 0x15)) {
            func_0x00010871f7c8();
            func_0x00010871e144();
            uVar31 = extraout_x8_10;
            if (!(bool)uVar11) goto LAB_108709e60;
          }
          uStack_300 = (uint)((int)uVar25 != 2);
          uStack_620 = uVar31;
          func_0x00010871c970();
          iVar34 = 0;
          uStack_358 = (undefined4)uStack_b10;
          uStack_354 = (undefined1)((ulong)uStack_b10 >> 0x20);
          uVar13 = uStack_bf0;
        }
LAB_108709e60:
        bVar9 = uVar13 == 0xe;
        if (((0xe < uVar13) || (func_0x00010871e790(1 << (ulong)(uVar13 & 0x1f)), bVar9)) &&
           (((bStack_468 & 1) == 0 || (lStack_470 <= lStack_bf8)))) {
          lStack_470 = lStack_bf8;
          bStack_468 = 1;
          if (cStack_b68 == '\x01') {
            func_0x00010883f80c(auStack_bc0,&lStack_640);
          }
          iVar34 = 0;
        }
      }
      if (((lStack_608 == 0) && ((uVar35 & 0xfe) != 0)) && ((*(byte *)(param_2 + 0x250) & 1) == 0))
      {
        uStack_650 = 0;
        uStack_658 = 0;
        uStack_660 = 0;
        ppuStack_668 = &PTR_FUN_110a609a8;
        uStack_648 = 0x1cf;
        func_0x00010871e378(*(undefined8 *)(param_2 + 0x118));
        (*extraout_x8_05)();
        func_0x000107c2882c(&ppuStack_668);
        uVar26 = 1;
        uVar13 = uStack_bf0;
      }
      bVar7 = bStack_600;
      puVar19 = (undefined4 *)(long)(char)bStack_c10;
      FUN_1087200ec(puVar19,puVar17,uVar13,cStack_bec,uVar26 & 0xff);
      uStack_670 = SUB84(puVar19,0);
      uStack_66c = (undefined1)((ulong)puVar19 >> 0x20);
      if (((ulong)puVar19 >> 0x20 & 1) == 0) {
        puVar32 = (undefined4 *)0x0;
      }
      else {
        puVar19 = &uStack_670;
        func_0x00010871edd0(param_2 + 0x90,puVar19,uStack_bf0,auStack_c30,uStack_c08,uStack_c00,
                            uStack_beb,&lStack_640,param_2 + 0x78);
        puVar32 = puVar19;
      }
      uVar13 = (uint)puVar19;
      bVar9 = bStack_c10 == 0x14;
      if (((0x14 < bStack_c10) || (func_0x00010871df48(), bVar9)) &&
         ((bVar9 = uStack_bf0 == 0x1e, 0x1e < uStack_bf0 || (func_0x00010871df90(), bVar9)))) {
        func_0x000107c289e8();
        uStack_890 = 0;
        uStack_888 = 0;
        func_0x00010871e048();
        uStack_898 = 0;
        uStack_880 = 400;
        func_0x00010871e550();
        func_0x000107c278b8(auStack_6b0);
        pcVar18 = "true";
        if (bVar7 == 0) {
          pcVar18 = "false";
        }
        func_0x000107c28824(auStack_8a0,auStack_6b0,pcVar18);
        func_0x00010871e544();
        func_0x000107c278b8(auStack_6c8);
        func_0x00010871e5a0();
        func_0x00010871e538();
        puVar14 = auStack_6e0;
        func_0x000107c278b8(puVar14);
        func_0x00010871e5a0();
        func_0x000107c2884c(auStack_698,puVar14);
        func_0x00010871e938();
        func_0x00010871e5fc();
        func_0x000107c2882c(auStack_698);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_6e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_6c8);
        uVar13 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010871f180();
      }
      if (((ulong)puVar32 & 1) == 0) {
LAB_108709c24:
        bVar9 = bStack_c10 == 0x14;
        if (((bStack_c10 < 0x15) && (func_0x00010871dfc0(), !bVar9)) ||
           (((int)puVar17 == 0 ||
            ((((bVar9 = uStack_bf0 == 0xe, uStack_bf0 < 0xf && (func_0x00010871e01c(), !bVar9)) &&
              (bVar9 = extraout_w8_00 == 0x14, extraout_w8_00 < 0x15)) &&
             (func_0x00010871dfa8(), !bVar9)))))) {
          if (iVar34 == 2) goto LAB_1087098a4;
          goto LAB_108709dcc;
        }
        func_0x00010871e800(auStack_c48);
        FUN_1086a470c();
        if (iVar34 != 2) {
          uVar13 = 1;
        }
        if ((uVar13 & 1) != 0) goto LAB_108709dcc;
        goto LAB_1087098a4;
      }
      if ((lStack_608 == 0xb) && (bStack_c10 < 0x15 && bStack_c10 != 9)) {
        if (bStack_468 == 1) {
          iVar33 = (int)param_2 + 0x188;
          func_0x00010871c9a0();
          uVar13 = 0;
          if (iVar33 != 0) {
            uVar13 = (uint)*puVar20;
            func_0x00010871f568();
            func_0x00010871f55c();
            func_0x00010871f178();
            if (((cStack_18 == '\x01') && ((bStack_160 >> 2 & 1) != 0)) &&
               (*(int *)(lStack_148 + 0xa8) == 0)) {
              uStack_890 = 0;
              uStack_888 = 0;
              func_0x00010871e048();
              uStack_898 = 0;
              uStack_880 = 399;
              func_0x00010871e574();
              func_0x000107c278b8(auStack_8e0);
              func_0x00010871e568();
              func_0x000107c28824(auStack_8a0,auStack_8e0,
                                  *(undefined8 *)
                                   (extraout_x8_06 + ((ulong)puVar17 & 0xffffffff) * 8));
              func_0x00010871e2e0();
              func_0x000107c278b8(auStack_8f8);
              lVar29 = (long)(char)bStack_c10;
              func_0x000108841d8c(auStack_910,lVar29);
              func_0x00010871e994();
              func_0x000107c2884c(auStack_8c8,lVar29);
              func_0x00010871e938();
              func_0x00010871e5fc();
              func_0x000107c2882c(auStack_8c8);
              func_0x00010871edc0();
              func_0x00010871edc8();
              uVar13 = (uint)auStack_8e0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              func_0x00010871f180();
              func_0x00010871f530();
              lStack_608 = 0xd;
              uStack_610 = uVar13;
            }
            func_0x00010871f528();
          }
        }
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (((bStack_c10 == 2) && ((bStack_468 & 1) != 0)) && (lStack_470 == lStack_bf8)) {
        uVar13 = (uint)*puVar20;
        func_0x00010871f568();
        func_0x00010871f55c();
        func_0x00010871f178();
        if (cStack_18 == '\x01') {
          uVar13 = 0;
          func_0x00010871e370(auStack_1c0);
        }
        func_0x00010871f528();
      }
      uVar8 = 1 < uStack_328;
      uVar11 = uStack_328 == 2;
      if ((bool)uVar11) {
        lVar29 = lStack_608;
        FUN_10871fb04(lStack_608,uStack_610);
        uVar13 = (uint)lVar29;
        if (((uVar13 != 0) && (func_0x00010871e55c(bStack_c10), !(bool)uVar8 || (bool)uVar11)) &&
           (((bStack_600 & 1) != 0 &&
            (((long)uStack_538 < 2 &&
             ((uStack_610 == 2 || uStack_610 == 0x1d) || (uStack_610 & 0xfffffffb) == 1)))))) {
          lStack_608 = 1;
        }
      }
      if (cStack_be8 == '\x01') {
        uStack_538 = (ulong)bStack_be9;
      }
      if (cStack_b48 == '\x01') {
        func_0x00010871e18c(auStack_c48);
      }
      else {
        if (bStack_c10 == 0xf) {
          bVar9 = true;
        }
        if (!bVar9) {
          func_0x00010871e368(&lStack_640);
        }
      }
      if (cStack_bc8 == '\x01') {
        func_0x00010871e180(auStack_c48);
      }
      else if (lStack_570 != lStack_568) {
        func_0x00010871e360(&lStack_640);
      }
      if ((byte)uStack_b04 == 1 && iStack_b08 == 1) {
        lStack_608 = 0x10;
      }
      if (((cStack_2d0 == '\x01') && (lStack_2d8 != 0)) && (((byte)uStack_b04 & 1) == 0)) {
        cStack_2d0 = '\0';
      }
      iVar34 = 0;
      if (((bStack_c10 != 7) || ((byte)uStack_b04 == 0)) || (iStack_b08 != 2)) goto LAB_108709c24;
      lStack_2d8 = 1;
      cStack_2d0 = '\x01';
LAB_108709dcc:
      FUN_1088665d4(*puVar20,&lStack_640);
      func_0x00010871e320(*(undefined8 *)(param_2 + 0x158));
      (*extraout_x8_07)();
      FUN_10871bca8(param_1,&lStack_640);
    }
    func_0x00010871ead8();
    func_0x000107c28b40(auStack_210);
    FUN_10871be98(auStack_c48);
    in_ZR = uVar12 == 0xe;
    if (!(bool)in_ZR) {
      uStack_c4c = 1;
    }
    if ((uStack_c4c & 1) == 0) {
      ppuVar5 = &PTR_PTR_113280c30;
      if (*(undefined ***)(param_5 + 0x78) != (undefined **)0x0) {
        ppuVar5 = *(undefined ***)(param_5 + 0x78);
      }
      iVar33 = (int)ppuVar5;
      FUN_10884262c();
      in_ZR = iVar33 == 2;
      if ((bool)in_ZR) {
        uVar25 = *(undefined8 *)(param_2 + 0xd8);
        FUN_10883a000(uVar25,param_5,*(undefined8 *)(param_5 + 0x18));
        if (((int)uVar25 != 0) && ((param_1[0x3d0] & 1) == 0)) {
          func_0x00010871e340(&lStack_640,puVar20);
          func_0x000107c28924(param_1,&lStack_640);
          func_0x00010871ead8();
        }
      }
    }
    FUN_10871be98(auStack_aa0);
  }
  func_0x000107c279dc(auStack_958);
  func_0x00010871eb88();
LAB_10870993c:
  func_0x00010086526c(uStack_10);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2882c(auStack_698);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_6e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_6c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_6b0);
  func_0x000107c2882c(auStack_8a0);
  func_0x00010871ead8();
  func_0x000107c28b40(auStack_210);
  FUN_10871be98(auStack_c48);
  FUN_10871be98(auStack_aa0);
  func_0x000107c279dc(auStack_958);
  func_0x00010871eb88();
  do {
    func_0x00010871e32c();
  } while( true );
}



/* Entry: 10870a20c; end: 10870a293;  */

void FUN_10870a20c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  undefined1 *puVar15;
  long lVar16;
  uint uVar17;
  uint extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  undefined **extraout_x8_06;
  code *extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  undefined8 *extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  undefined1 *extraout_x11;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  undefined **ppuVar21;
  char *pcVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined1 *puStack_1068;
  undefined8 *puStack_1060;
  code *pcStack_1058;
  undefined1 uStack_1050;
  ulong uStack_1048;
  long *plStack_1040;
  undefined1 *puStack_1038;
  undefined8 uStack_1030;
  uint uStack_1024;
  uint uStack_1020;
  uint uStack_101c;
  undefined1 auStack_1018 [56];
  byte bStack_fe0;
  undefined8 uStack_fd8;
  long lStack_fd0;
  ulong uStack_fc8;
  uint uStack_fc0;
  char cStack_fbc;
  byte bStack_fbb;
  byte bStack_fb9;
  char cStack_fb8;
  char cStack_f98;
  undefined1 auStack_f90 [88];
  char cStack_f38;
  long lStack_ef0;
  byte bStack_ee8;
  undefined8 uStack_ee0;
  int iStack_ed8;
  undefined4 uStack_ed4;
  undefined1 auStack_ed0 [88];
  undefined1 uStack_e78;
  undefined1 auStack_e70 [104];
  undefined1 auStack_e08 [224];
  undefined1 auStack_d28 [32];
  undefined1 auStack_d08 [24];
  undefined1 uStack_cf0;
  char acStack_ce8 [24];
  undefined1 auStack_cd0 [24];
  undefined1 auStack_cb8 [24];
  undefined1 auStack_ca0 [40];
  undefined **ppuStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined4 uStack_c58;
  undefined1 auStack_ab8 [96];
  byte bStack_a58;
  long lStack_a40;
  char cStack_910;
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  char acStack_8d8 [24];
  undefined1 auStack_8c0 [40];
  undefined4 uStack_898;
  undefined1 uStack_894;
  undefined1 auStack_890 [8];
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined4 uStack_870;
  long lStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  ulong uStack_848;
  uint uStack_838;
  char *pcStack_830;
  byte bStack_828;
  long lStack_798;
  long lStack_790;
  ulong uStack_760;
  char cStack_6a0;
  ulong uStack_698;
  byte bStack_690;
  byte bStack_680;
  long lStack_608;
  char cStack_600;
  undefined4 uStack_580;
  undefined1 uStack_57c;
  uint uStack_550;
  uint uStack_528;
  long lStack_500;
  char cStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  byte bStack_4a8;
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [40];
  undefined1 auStack_438 [80];
  char acStack_3e8 [952];
  
  if (((*(byte *)(param_4 + 0x10) >> 2 & 1) == 0) || ((*(byte *)(param_3 + 0x10) & 1) == 0)) {
    return;
  }
  uVar25 = param_4;
  func_0x00010871e67c();
  uVar10 = *(undefined8 *)(param_3 + 0x18);
  FUN_1087084a4(uVar10,uVar25,unaff_x21 + 0x78);
  iVar24 = (int)uVar10;
  func_0x00010871e5c4(*(undefined8 *)(param_3 + 0x18));
  uVar9 = *(uint *)(extraout_x8 + 0x40);
  lVar16 = *(long *)(extraout_x8 + 0x30) * 1000;
  uVar10 = 2;
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010086515c();
  if ((uVar9 == 0) || (in_ZR = 1, uVar9 == 5)) goto LAB_10870a674;
  uVar11 = param_4;
  func_0x000107c32eb0();
  func_0x000107c29e78();
  auStack_d08[0] = 0;
  uStack_cf0 = 0;
  uVar25 = uVar11;
  func_0x00010871ed7c(auStack_d28);
  uVar8 = (uint)uVar25;
  uVar25 = (ulong)(uVar9 == 0x11);
  uStack_101c = (uint)(uVar9 == 4 && ((uint)uVar11 & 0xfffffffb) == 1);
  func_0x00010871e120(*(undefined8 *)(param_4 + 0x18));
  func_0x00010871e9ac();
  in_ZR = uVar9 == 6;
  uVar8 = uVar8 ^ 1;
  if (!(bool)in_ZR) {
    uVar8 = 1;
  }
  if ((uVar8 & 1) == 0) {
    uVar25 = param_4;
    FUN_1086a52d4(param_4,unaff_x19 + 0x78);
joined_r0x00010870a3a0:
    uVar26 = 7;
    if (iVar24 == 0) goto LAB_10870a3b0;
LAB_10870a3a4:
    uVar12 = unaff_x19 + 0x188;
    FUN_10870b0a8();
    if ((uVar12 & 1) == 0) goto LAB_10870a3b0;
  }
  else {
    in_ZR = (uVar9 & 0xfffffffe) == 0x10;
    if (!(bool)in_ZR) {
      uVar25 = 1;
      goto joined_r0x00010870a3a0;
    }
    func_0x00010871ed7c(&lStack_868);
    func_0x000107c28908(auStack_d08,&lStack_868);
    func_0x00010871f418();
    FUN_108690b88(auStack_d28,unaff_x19 + 0x78);
    uVar26 = 8;
    if (iVar24 != 0) goto LAB_10870a3a4;
LAB_10870a3b0:
    auStack_ed0[0] = 0;
    uStack_e78 = 0;
    uStack_1048 = uVar25 & 0xffffffff | 0x100;
    puStack_1038 = auStack_d08;
    uStack_1030 = 0;
    plStack_1040 = (long *)auStack_ed0;
    uStack_1050 = (undefined1)uVar9;
    FUN_10870b0c4(auStack_e70,unaff_x20,auStack_d28,uVar26,uVar10,lVar16,
                  *(undefined8 *)(param_4 + 0x60),uVar11);
    uVar17 = (uint)lVar16;
    func_0x00010871ed10();
    uVar8 = uStack_101c;
    if (uStack_101c == 0) {
      if (uVar9 == 0xb) {
        uStack_860 = 0;
        lStack_868 = 0;
        uStack_858 = 0;
        FUN_10866c90c(auStack_e08,&lStack_868);
        func_0x00010871e7d0();
        ppuVar21 = *(undefined ***)(param_4 + 0x30);
        func_0x00010871e664(&lStack_868);
        in_ZR = ppuVar21 == (undefined **)0x0;
        ppuVar1 = &PTR_PTR_113286e08;
        if (!(bool)in_ZR) {
          ppuVar1 = ppuVar21;
        }
        FUN_10870b1c4(auStack_e70,ppuVar1 + 0xf,&lStack_868);
      }
      else if (uVar9 == 0xd) {
        ppuVar21 = *(undefined ***)(param_4 + 0x30);
        func_0x00010871e664(&lStack_868);
        in_ZR = ppuVar21 == (undefined **)0x0;
        ppuVar1 = &PTR_PTR_113286e08;
        if (!(bool)in_ZR) {
          ppuVar1 = ppuVar21;
        }
        FUN_10870b278(auStack_e70,ppuVar1 + 0x1e,&lStack_868);
      }
      else {
        in_ZR = uVar9 == 0xc;
        if (!(bool)in_ZR) goto LAB_10870a4f0;
        ppuVar21 = *(undefined ***)(param_4 + 0x30);
        func_0x00010871e664(&lStack_868);
        in_ZR = ppuVar21 == (undefined **)0x0;
        ppuVar1 = &PTR_PTR_113286e08;
        if (!(bool)in_ZR) {
          ppuVar1 = ppuVar21;
        }
        FUN_10870b1c4(auStack_e70,ppuVar1 + 0x12,&lStack_868);
      }
      func_0x00010871f418();
    }
    else {
      func_0x00010871e2f8(*(undefined8 *)(param_4 + 0x28));
      lVar16 = extraout_x9;
      if (!(bool)in_ZR) {
        lVar16 = extraout_x8_01;
      }
      if (((*(byte *)(lVar16 + 0x10) >> 6 & 1) == 0) ||
         (in_ZR = *(int *)(*(long *)(lVar16 + 0x98) + 0x1c) == 2, !(bool)in_ZR)) {
        func_0x00010871f43c(unaff_x19,auStack_e70);
      }
    }
LAB_10870a4f0:
    uVar25 = *(ulong *)(param_4 + 0x60);
    func_0x00010871f2d0();
    func_0x00010871e2b4();
    uStack_858 = 0;
    uStack_850 = 0;
    lStack_868 = extraout_x8_02 + 0x10;
    uStack_860 = 0;
    uStack_848 = CONCAT44(uStack_848._4_4_,0x1ce);
    func_0x00010871e2e0();
    func_0x000107c278b8(auStack_478);
    func_0x000108841d8c(auStack_490,(long)(char)bStack_fe0);
    plVar13 = &lStack_868;
    func_0x000107c28820(plVar13,auStack_478,auStack_490);
    func_0x000107c2884c(auStack_460,plVar13);
    func_0x00010871e090(auStack_438,unaff_x19 + 0x118,auStack_460);
    plVar13 = (long *)(unaff_x19 + 0xb8);
    func_0x000107c2882c(auStack_460);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_490);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_478);
    func_0x000107c2882c(&lStack_868);
    plVar18 = &lStack_868;
    func_0x00010871e48c(plVar18,plVar13,auStack_1018);
    func_0x00010871f7a4();
    if ((((bool)in_ZR) && ((bStack_ee8 & 1) != 0)) &&
       (in_ZR = cStack_600 == '\x01' && lStack_ef0 == lStack_608,
       cStack_600 == '\x01' && lStack_ef0 < lStack_608)) {
LAB_10870a5d8:
      plVar18 = (long *)0x0;
LAB_10870a5dc:
      acStack_3e8[0] = '\0';
      uVar25 = 0;
    }
    else {
      func_0x00010871e52c();
      bVar6 = (bool)in_ZR && extraout_w9 == 2;
      in_ZR = true;
      if (bVar6) goto LAB_10870a5d8;
      bVar6 = cStack_6a0 == '\x01';
      in_ZR = true;
      if (bVar6) goto LAB_10870a5d8;
      func_0x00010871f798();
      bVar7 = false;
      if (bVar6) {
        func_0x00010871e968();
        bVar6 = (char)*plVar18 != '\x01';
        bVar7 = bVar6 || uStack_550 == 2;
        if (bVar6 || uStack_550 == 2) {
          uStack_fc0 = 6;
        }
      }
      iVar24 = (int)plVar18;
      func_0x00010871e628(bStack_fe0);
      if ((bVar7) && ((bStack_fbb & 1) != 0)) {
        iVar23 = 2;
        bVar6 = extraout_w8 == 0x14;
        if ((extraout_w8 < 0x15) && (func_0x00010871df48(), !bVar6)) goto LAB_10870a6e4;
      }
      else {
LAB_10870a6e4:
        iVar23 = iVar24;
        func_0x00010871e0ac(auStack_1018);
        func_0x00010871e494(CONCAT44(uStack_ed4,iStack_ed8));
        func_0x00010871e6a0();
        uVar17 = (uint)bStack_fe0;
      }
      bVar7 = (uVar17 & 0xff) == 5;
      bVar6 = bVar7 && cStack_fbc == '\f';
      if (((bVar7 && cStack_fbc == '\f') && (func_0x00010871e508(uStack_fc0), bVar6)) &&
         ((lVar16 = lStack_4e8 - lStack_4f0, lStack_4e8 != lStack_4f0 &&
          (FUN_108708704(&lStack_868,uStack_fc8), lStack_4e8 - lStack_4f0 != lVar16)))) {
        iVar23 = 0;
      }
      plVar18 = &lStack_868;
      func_0x000107c28db4(plVar18,plVar13);
      bVar7 = (uStack_838 & 0xfffffffb) == 1;
      bVar6 = uVar9 == 8 && bVar7;
      if ((uVar9 == 8 && bVar7) && (bVar6 = true, bStack_690 != 1 || uStack_698 != uVar25)) {
        in_ZR = iVar23 == 2;
        if (!(bool)in_ZR) {
          FUN_1088665d4(*plVar13,&lStack_868);
        }
        goto LAB_10870a5dc;
      }
      uVar9 = (uint)plVar18;
      func_0x00010871f7bc();
      bVar7 = bVar6 || extraout_w8_00 == 2;
      in_ZR = bVar7;
      if (bVar6 || extraout_w8_00 == 2) {
        func_0x00010871e694(uStack_fc0);
        in_ZR = 0;
        if (((bVar7) &&
            (in_ZR = bStack_690 == 1 && uStack_698 == uStack_fc8,
            bStack_690 != 1 || uStack_698 != uStack_fc8)) &&
           (func_0x00010871e520(cStack_fbc), !(bool)in_ZR)) goto LAB_10870a5dc;
      }
      uStack_1024 = (uint)plVar18;
      func_0x00010871f3a8();
      uVar25 = uStack_760;
      uVar20 = uStack_fc0;
      bVar2 = bStack_fe0;
      uVar19 = (uint)uStack_760;
      uVar17 = (uint)bStack_fe0;
      uStack_1020 = uVar9;
      FUN_10871e8e8(&lStack_868,(long)(char)bStack_fe0,uStack_fc0,uStack_fd8,lStack_fd0);
      iVar24 = 0;
      if ((bool)in_ZR) {
        iVar24 = iVar23;
      }
      uVar4 = 0x13 < bVar2;
      bVar6 = bVar2 == 0x14;
      if ((0x14 < bVar2) || (func_0x00010871e164(1 << (ulong)(uVar17 & 0x1f)), bVar6)) {
        uVar8 = uStack_101c;
        uVar11 = lStack_fd0 / 1000;
        if ((uStack_848 <= uVar11) &&
           (((bVar6 = uVar20 == 0xe, 0xe < uVar20 ||
             (func_0x00010871e2ec(), uVar11 = extraout_x8_08, bVar6)) ||
            ((bVar6 = uVar17 == 0x14, 0x14 < uVar17 ||
             (func_0x00010871e144(), uVar11 = extraout_x8_09, bVar6)))))) {
          uStack_528 = (uint)((int)uStack_fd8 != 2);
          uStack_848 = uVar11;
          FUN_10871c970();
          iVar24 = 0;
          uStack_580 = (undefined4)uStack_ee0;
          uStack_57c = (undefined1)((ulong)uStack_ee0 >> 0x20);
          uVar20 = uStack_fc0;
        }
        uVar4 = 0xd < uVar20;
        uVar5 = uVar20 == 0xe;
        if ((uVar20 < 0xf) && (func_0x00010871e790(1 << (ulong)(uVar20 & 0x1f)), !(bool)uVar5))
        goto LAB_10870a848;
        plVar18 = (long *)(ulong)uStack_1024;
        if ((bStack_690 & 1) == 0) {
LAB_10870ae30:
          uStack_698 = uStack_fc8;
          bStack_690 = 1;
          uVar4 = cStack_f38 != '\0';
          uVar5 = cStack_f38 == '\x01';
          if ((bool)uVar5) {
            func_0x00010883f80c(auStack_f90,&lStack_868);
          }
          iVar24 = 0;
        }
        else {
          uVar4 = uStack_fc8 <= uStack_698;
          uVar5 = uStack_698 == uStack_fc8;
          if ((long)uStack_698 <= (long)uStack_fc8) goto LAB_10870ae30;
        }
      }
      else {
        uVar5 = 0;
        uVar8 = uStack_101c;
LAB_10870a848:
        plVar18 = (long *)(ulong)uStack_1024;
      }
      if (((pcStack_830 == (char *)0x0) && ((uVar25 & 0xfe) != 0)) &&
         ((*(byte *)(unaff_x19 + 0x250) & 1) == 0)) {
        uStack_878 = 0;
        uStack_880 = 0;
        func_0x00010871e048(*(undefined8 *)(unaff_x19 + 0x118));
        uStack_888 = 0;
        uStack_870 = 0x1cf;
        func_0x00010871e378();
        (*extraout_x8_03)();
        func_0x000107c2882c(auStack_890);
        uVar19 = 1;
        uVar20 = uStack_fc0;
      }
      bVar2 = bStack_828;
      pcVar14 = (char *)(long)(char)bStack_fe0;
      FUN_1087200ec(pcVar14,uStack_1020,uVar20,cStack_fbc,uVar19 & 0xff);
      uStack_898 = SUB84(pcVar14,0);
      uStack_894 = (undefined1)((ulong)pcVar14 >> 0x20);
      if (((ulong)pcVar14 >> 0x20 & 1) == 0) {
        pcVar22 = (char *)0x0;
      }
      else {
        func_0x00010871ee2c(auStack_1018);
        pcVar14 = (char *)&uStack_898;
        plStack_1040 = plVar13;
        puStack_1038 = extraout_x11;
        func_0x00010871e784();
        pcVar22 = pcVar14;
      }
      func_0x00010871f7b0();
      uVar3 = uVar5;
      if ((bool)uVar4 && !(bool)uVar5) {
LAB_10870ac58:
        func_0x00010871f798();
        if (((bool)uVar4 && !(bool)uVar3) || (func_0x00010871df90(), (bool)uVar3)) {
          func_0x00010871e960();
          uVar10 = *(undefined8 *)(unaff_x19 + 0x118);
          uStack_c68 = 0;
          uStack_c60 = 0;
          func_0x00010871e048();
          uStack_c70 = 0;
          uStack_c58 = 400;
          ppuStack_c78 = extraout_x8_06;
          func_0x00010871e550();
          func_0x000107c278b8(acStack_8d8);
          func_0x00010871ec6c();
          pcVar14 = "true";
          if (bVar2 == 0) {
            pcVar14 = acStack_3e8;
          }
          func_0x000107c28824(&ppuStack_c78,acStack_8d8,pcVar14);
          func_0x00010871e544();
          func_0x000107c278b8(auStack_8f0);
          func_0x00010871ed8c();
          func_0x00010871e538();
          puVar15 = auStack_908;
          func_0x000107c278b8(puVar15);
          func_0x00010871ed8c();
          func_0x000107c2884c(auStack_8c0,puVar15);
          func_0x00010871eeb8();
          (*extraout_x8_07)(uVar10,auStack_8c0);
          func_0x000107c2882c(auStack_8c0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8f0);
          pcVar14 = acStack_8d8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x00010871f360();
          plVar18 = (long *)(ulong)uStack_1024;
          uVar8 = uStack_101c;
        }
      }
      else {
        func_0x00010871df48();
        uVar3 = 1;
        if ((bool)uVar5) goto LAB_10870ac58;
      }
      if (((ulong)pcVar22 & 1) == 0) {
        uVar9 = (uint)bStack_fe0;
LAB_10870aa44:
        bVar6 = uVar9 == 0x14;
        if ((((uVar9 < 0x15) && (func_0x00010871dfc0(), !bVar6)) ||
            ((uStack_1020 == 0 ||
             ((((in_ZR = uStack_fc0 == 0xe, uStack_fc0 < 0xf &&
                (func_0x00010871e01c(), !(bool)in_ZR)) &&
               (in_ZR = extraout_w8_03 == 0x14, extraout_w8_03 < 0x15)) &&
              (func_0x00010871dfa8(), !(bool)in_ZR)))))) ||
           (func_0x00010871e444(auStack_1018), ((ulong)pcVar14 & 1) == 0)) {
          in_ZR = iVar24 == 2;
          if ((bool)in_ZR) goto LAB_10870a5dc;
        }
        else {
          iVar24 = 0;
        }
      }
      else {
        bVar7 = (char *)0xa < pcStack_830;
        bVar6 = pcStack_830 == (char *)0xb;
        if ((!bVar6) || (func_0x00010871f7b0(), bVar7 && !bVar6 || extraout_w8_01 == 9)) {
          bVar6 = false;
        }
        else {
          if ((bStack_690 == 1) && (func_0x00010871f544(), (int)pcVar14 != 0)) {
            pcVar14 = (char *)*plVar13;
            func_0x00010871f374();
            func_0x00010871f368();
            func_0x00010871f358();
            if ((cStack_910 == '\x01') &&
               (((bStack_a58 >> 2 & 1) != 0 && (*(int *)(lStack_a40 + 0xa8) == 0)))) {
              uStack_c68 = 0;
              uStack_c60 = 0;
              uStack_c70 = 0;
              ppuStack_c78 = &PTR_FUN_110a609a8;
              uStack_c58 = 399;
              func_0x00010871e574();
              func_0x000107c278b8(auStack_cb8);
              func_0x00010871e568();
              func_0x000107c28824(&ppuStack_c78,auStack_cb8,
                                  *(undefined8 *)(extraout_x8_04 + (ulong)uStack_1020 * 8));
              func_0x00010871e2e0();
              func_0x000107c278b8(auStack_cd0);
              lVar16 = (long)(char)bStack_fe0;
              func_0x000108841d8c(acStack_ce8,lVar16);
              func_0x00010871f4b4();
              func_0x000107c2884c(auStack_ca0,lVar16);
              func_0x00010871e938();
              func_0x00010871e5fc();
              func_0x000107c2882c(auStack_ca0);
              pcVar14 = acStack_ce8;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              func_0x00010871edc0();
              func_0x00010871edc8();
              func_0x00010871f360();
              func_0x00010871ec90();
              uStack_838 = (uint)pcVar14;
              pcStack_830 = (char *)0xd;
              plVar18 = (long *)(ulong)uStack_1024;
            }
            func_0x00010871f31c();
          }
          bVar6 = true;
        }
        if (((bStack_fe0 == 2) && ((bStack_690 & 1) != 0)) && (uStack_698 == uStack_fc8)) {
          pcVar14 = (char *)*plVar13;
          func_0x00010871f374();
          func_0x00010871f368();
          func_0x00010871f358();
          if (cStack_910 == '\x01') {
            pcVar14 = (char *)0x0;
            func_0x00010871e370(auStack_ab8);
          }
          func_0x00010871f31c();
        }
        uVar5 = 1 < uStack_550;
        uVar4 = uStack_550 == 2;
        if (((((bool)uVar4) &&
             (pcVar14 = pcStack_830, FUN_10871fb04(pcStack_830,uStack_838), (int)pcVar14 != 0)) &&
            ((func_0x00010871e55c(bStack_fe0), !(bool)uVar5 || (bool)uVar4 &&
             (((bStack_828 & 1) != 0 && ((long)uStack_760 < 2)))))) &&
           ((uStack_838 == 2 || uStack_838 == 0x1d) || (uStack_838 & 0xfffffffb) == 1)) {
          pcStack_830 = (char *)0x1;
        }
        bVar7 = cStack_fb8 == '\x01';
        if (bVar7) {
          uStack_760 = (ulong)bStack_fb9;
        }
        func_0x00010871f704();
        if (bVar7) {
          func_0x00010871e18c(auStack_1018);
        }
        else {
          func_0x00010871f7a4();
          if (bVar7) {
            bVar6 = true;
          }
          if (!bVar6) {
            func_0x00010871e368(&lStack_868);
          }
        }
        if (cStack_f98 == '\x01') {
          func_0x00010871e180(auStack_1018);
        }
        else if (lStack_798 != lStack_790) {
          func_0x00010871e360(&lStack_868);
        }
        if ((byte)uStack_ed4 == 1 && iStack_ed8 == 1) {
          pcStack_830 = (char *)0x10;
        }
        bVar6 = cStack_4f8 == '\x01';
        if (((bVar6) && (lStack_500 != 0)) && (((byte)uStack_ed4 & 1) == 0)) {
          cStack_4f8 = '\0';
        }
        iVar24 = 0;
        func_0x00010871f7bc();
        uVar9 = extraout_w8_02;
        if (((!bVar6) || (extraout_w10 == 0)) || (in_ZR = extraout_w9_00 == 2, !(bool)in_ZR))
        goto LAB_10870aa44;
        iVar24 = 0;
        lStack_500 = 1;
        cStack_4f8 = '\x01';
      }
      FUN_1088665d4(*plVar13,&lStack_868);
      func_0x00010871e320(*(undefined8 *)(unaff_x19 + 0x158));
      (*extraout_x8_05)();
      if (((iVar24 == 0) && ((func_0x00010871e688(), (bool)in_ZR || ((bStack_4a8 & 1) == 0)))) &&
         ((bStack_680 & 1) == 0)) {
        func_0x00010871e354();
        func_0x00010871e274();
      }
      FUN_10871bca8(acStack_3e8,&lStack_868);
      uVar25 = unaff_x19;
    }
    func_0x000107c288d0(&lStack_868);
    func_0x000107c28b40(auStack_438);
    func_0x000107c288cc(acStack_3e8);
    func_0x00010871e734();
    if ((uVar25 & 1) == 0) {
      func_0x00010871e65c(acStack_3e8);
      func_0x00010871e590(&lStack_868,acStack_3e8);
      func_0x00010871e9e8();
      func_0x00010871e274();
      func_0x00010871e7d0();
      func_0x000107c27914(acStack_3e8);
    }
    if (uVar8 != 0) {
      if (((ulong)plVar18 & 1) == 0) {
        FUN_10871aee8(unaff_x19,1,2);
      }
      else {
        func_0x00010871ecdc(*(undefined8 *)(unaff_x19 + 0x118));
        func_0x00010871f33c();
      }
    }
    func_0x00010871ed18();
  }
  func_0x000107c279dc(auStack_d28);
  unaff_x21 = auStack_d08;
  func_0x000107c279dc();
LAB_10870a674:
  func_0x00010086526c(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c2882c(auStack_8c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(acStack_8d8);
    func_0x000107c2882c(&ppuStack_c78);
    func_0x000107c288d0(&lStack_868);
    func_0x000107c28b40(auStack_438);
    func_0x00010871e734();
    func_0x00010871ed18();
    func_0x000107c279dc(auStack_d28);
    puVar15 = auStack_d08;
    func_0x000107c279dc();
    func_0x00010871e260();
    pcStack_1058 = FUN_10870b048;
    bVar6 = (puVar15[0x10] & 1) != 0;
    if (bVar6) {
      puStack_1068 = unaff_x21;
      puStack_1060 = &stack0x00000050;
      func_0x000107c29ee0(&uStack_1090,*(undefined8 *)(puVar15 + 0x18));
      extraout_x8_10[1] = uStack_1088;
      *extraout_x8_10 = uStack_1090;
      extraout_x8_10[2] = uStack_1080;
      uStack_1088 = 0;
      uStack_1080 = 0;
      uStack_1090 = 0;
      func_0x00010871e4f8();
    }
    else {
      *(undefined1 *)extraout_x8_10 = 0;
    }
    *(bool *)(extraout_x8_10 + 3) = bVar6;
    return;
  }
  return;
}



/* Entry: 10870a294; end: 10870b047;  */

void FUN_10870a294(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  uint param_5,long param_6,int param_7)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  uint extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  uint uVar15;
  uint extraout_w8_02;
  uint extraout_w8_03;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  undefined **extraout_x8_05;
  code *extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong uVar16;
  undefined8 *extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  long unaff_x19;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  undefined **ppuVar20;
  ulong uVar21;
  char *pcVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined1 auStack_1018 [56];
  byte bStack_fe0;
  undefined8 uStack_fd8;
  long lStack_fd0;
  ulong uStack_fc8;
  uint uStack_fc0;
  char cStack_fbc;
  byte bStack_fbb;
  byte bStack_fb9;
  char cStack_fb8;
  char cStack_f98;
  undefined1 auStack_f90 [88];
  char cStack_f38;
  long lStack_ef0;
  byte bStack_ee8;
  undefined8 uStack_ee0;
  int iStack_ed8;
  undefined4 uStack_ed4;
  undefined1 uStack_ed0;
  undefined1 uStack_e78;
  undefined1 auStack_e70 [104];
  undefined1 auStack_e08 [224];
  undefined1 auStack_d28 [32];
  undefined1 auStack_d08 [24];
  undefined1 uStack_cf0;
  char acStack_ce8 [24];
  undefined1 auStack_cd0 [24];
  undefined1 auStack_cb8 [24];
  undefined1 auStack_ca0 [40];
  undefined **ppuStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined4 uStack_c58;
  undefined1 auStack_ab8 [96];
  byte bStack_a58;
  long lStack_a40;
  char cStack_910;
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  char acStack_8d8 [24];
  undefined1 auStack_8c0 [40];
  undefined4 uStack_898;
  undefined1 uStack_894;
  undefined1 auStack_890 [8];
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined4 uStack_870;
  long lStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  ulong uStack_848;
  uint uStack_838;
  char *pcStack_830;
  byte bStack_828;
  long lStack_798;
  long lStack_790;
  ulong uStack_760;
  char cStack_6a0;
  ulong uStack_698;
  byte bStack_690;
  byte bStack_680;
  long lStack_608;
  char cStack_600;
  undefined4 uStack_580;
  undefined1 uStack_57c;
  uint uStack_550;
  uint uStack_528;
  long lStack_500;
  char cStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  byte bStack_4a8;
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [40];
  undefined1 auStack_438 [80];
  char acStack_3e8 [976];
  byte bStack_18;
  undefined8 uStack_10;
  
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010086515c();
  uStack_10 = extraout_x8;
  if ((param_3 == 0) || (in_ZR = 1, param_3 == 5)) goto LAB_10870a674;
  lVar13 = param_6;
  func_0x000107c32eb0();
  uVar15 = (uint)lVar13;
  func_0x000107c29e78();
  auStack_d08[0] = 0;
  uStack_cf0 = 0;
  uVar9 = uVar15;
  func_0x00010871ed7c(auStack_d28);
  bVar6 = (uVar15 & 0xfffffffb) == 1;
  func_0x00010871e120(*(undefined8 *)(param_6 + 0x18));
  func_0x00010871e9ac();
  in_ZR = param_3 == 6;
  uVar9 = uVar9 ^ 1;
  if (!(bool)in_ZR) {
    uVar9 = 1;
  }
  if ((uVar9 & 1) == 0) {
    FUN_1086a52d4(param_6,unaff_x19 + 0x78);
joined_r0x00010870a3a0:
    if (param_7 == 0) goto LAB_10870a3b0;
LAB_10870a3a4:
    uVar21 = unaff_x19 + 0x188;
    FUN_10870b0a8();
    if ((uVar21 & 1) == 0) goto LAB_10870a3b0;
  }
  else {
    in_ZR = (param_3 & 0xfffffffe) == 0x10;
    if (!(bool)in_ZR) goto joined_r0x00010870a3a0;
    func_0x00010871ed7c(&lStack_868);
    func_0x000107c28908(auStack_d08,&lStack_868);
    func_0x00010871f418();
    FUN_108690b88(auStack_d28,unaff_x19 + 0x78);
    if (param_7 != 0) goto LAB_10870a3a4;
LAB_10870a3b0:
    uStack_ed0 = 0;
    uStack_e78 = 0;
    FUN_10870b0c4(auStack_e70);
    func_0x00010871ed10();
    if (param_3 == 4 && bVar6) {
      func_0x00010871e2f8(*(undefined8 *)(param_6 + 0x28));
      lVar13 = extraout_x9;
      if (!(bool)in_ZR) {
        lVar13 = extraout_x8_00;
      }
      if (((*(byte *)(lVar13 + 0x10) >> 6 & 1) == 0) ||
         (in_ZR = *(int *)(*(long *)(lVar13 + 0x98) + 0x1c) == 2, !(bool)in_ZR)) {
        func_0x00010871f43c();
      }
    }
    else {
      if (param_3 == 0xb) {
        uStack_860 = 0;
        lStack_868 = 0;
        uStack_858 = 0;
        FUN_10866c90c(auStack_e08,&lStack_868);
        func_0x00010871e7d0();
        ppuVar20 = *(undefined ***)(param_6 + 0x30);
        func_0x00010871e664(&lStack_868);
        in_ZR = ppuVar20 == (undefined **)0x0;
        ppuVar1 = &PTR_PTR_113286e08;
        if (!(bool)in_ZR) {
          ppuVar1 = ppuVar20;
        }
        FUN_10870b1c4(auStack_e70,ppuVar1 + 0xf,&lStack_868);
      }
      else if (param_3 == 0xd) {
        ppuVar20 = *(undefined ***)(param_6 + 0x30);
        func_0x00010871e664(&lStack_868);
        in_ZR = ppuVar20 == (undefined **)0x0;
        ppuVar1 = &PTR_PTR_113286e08;
        if (!(bool)in_ZR) {
          ppuVar1 = ppuVar20;
        }
        FUN_10870b278(auStack_e70,ppuVar1 + 0x1e,&lStack_868);
      }
      else {
        in_ZR = param_3 == 0xc;
        if (!(bool)in_ZR) goto LAB_10870a4f0;
        ppuVar20 = *(undefined ***)(param_6 + 0x30);
        func_0x00010871e664(&lStack_868);
        in_ZR = ppuVar20 == (undefined **)0x0;
        ppuVar1 = &PTR_PTR_113286e08;
        if (!(bool)in_ZR) {
          ppuVar1 = ppuVar20;
        }
        FUN_10870b1c4(auStack_e70,ppuVar1 + 0x12,&lStack_868);
      }
      func_0x00010871f418();
    }
LAB_10870a4f0:
    uVar21 = *(ulong *)(param_6 + 0x60);
    func_0x00010871f2d0();
    func_0x00010871e2b4();
    uStack_858 = 0;
    uStack_850 = 0;
    lStack_868 = extraout_x8_01 + 0x10;
    uStack_860 = 0;
    uStack_848 = CONCAT44(uStack_848._4_4_,0x1ce);
    func_0x00010871e2e0();
    func_0x000107c278b8(auStack_478);
    func_0x000108841d8c(auStack_490,(long)(char)bStack_fe0);
    plVar10 = &lStack_868;
    func_0x000107c28820(plVar10,auStack_478,auStack_490);
    func_0x000107c2884c(auStack_460,plVar10);
    func_0x00010871e090(auStack_438,unaff_x19 + 0x118,auStack_460);
    plVar10 = (long *)(unaff_x19 + 0xb8);
    func_0x000107c2882c(auStack_460);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_490);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_478);
    func_0x000107c2882c(&lStack_868);
    plVar11 = &lStack_868;
    func_0x00010871e48c(plVar11,plVar10,auStack_1018);
    func_0x00010871f7a4();
    if ((((bool)in_ZR) && ((bStack_ee8 & 1) != 0)) &&
       (in_ZR = cStack_600 == '\x01' && lStack_ef0 == lStack_608,
       cStack_600 == '\x01' && lStack_ef0 < lStack_608)) {
LAB_10870a5d8:
      plVar17 = (long *)0x0;
LAB_10870a5dc:
      acStack_3e8[0] = '\0';
      bStack_18 = 0;
    }
    else {
      func_0x00010871e52c();
      bVar7 = (bool)in_ZR && extraout_w9 == 2;
      in_ZR = true;
      if (bVar7) goto LAB_10870a5d8;
      bVar7 = cStack_6a0 == '\x01';
      in_ZR = true;
      if (bVar7) goto LAB_10870a5d8;
      func_0x00010871f798();
      bVar8 = false;
      if (bVar7) {
        func_0x00010871e968();
        bVar7 = (char)*plVar11 != '\x01';
        bVar8 = bVar7 || uStack_550 == 2;
        if (bVar7 || uStack_550 == 2) {
          uStack_fc0 = 6;
        }
      }
      iVar24 = (int)plVar11;
      func_0x00010871e628(bStack_fe0);
      if ((bVar8) && ((bStack_fbb & 1) != 0)) {
        iVar23 = 2;
        bVar7 = extraout_w8 == 0x14;
        if ((extraout_w8 < 0x15) && (func_0x00010871df48(), !bVar7)) goto LAB_10870a6e4;
      }
      else {
LAB_10870a6e4:
        iVar23 = iVar24;
        func_0x00010871e0ac(auStack_1018);
        func_0x00010871e494(CONCAT44(uStack_ed4,iStack_ed8));
        func_0x00010871e6a0();
        param_5 = (uint)bStack_fe0;
      }
      bVar8 = (param_5 & 0xff) == 5;
      bVar7 = bVar8 && cStack_fbc == '\f';
      if (((bVar8 && cStack_fbc == '\f') && (func_0x00010871e508(uStack_fc0), bVar7)) &&
         ((lVar13 = lStack_4e8 - lStack_4f0, lStack_4e8 != lStack_4f0 &&
          (FUN_108708704(&lStack_868,uStack_fc8), lStack_4e8 - lStack_4f0 != lVar13)))) {
        iVar23 = 0;
      }
      plVar11 = &lStack_868;
      func_0x000107c28db4(plVar11,plVar10);
      uVar9 = (uint)plVar11;
      bVar8 = (uStack_838 & 0xfffffffb) == 1;
      bVar7 = param_3 == 8 && bVar8;
      plVar17 = plVar11;
      if ((param_3 == 8 && bVar8) && (bVar7 = true, bStack_690 != 1 || uStack_698 != uVar21)) {
        in_ZR = iVar23 == 2;
        if (!(bool)in_ZR) {
          FUN_1088665d4(*plVar10,&lStack_868);
        }
        goto LAB_10870a5dc;
      }
      func_0x00010871f7bc();
      bVar8 = bVar7 || extraout_w8_00 == 2;
      in_ZR = bVar8;
      if (bVar7 || extraout_w8_00 == 2) {
        func_0x00010871e694(uStack_fc0);
        in_ZR = 0;
        if (((bVar8) &&
            (in_ZR = bStack_690 == 1 && uStack_698 == uStack_fc8,
            bStack_690 != 1 || uStack_698 != uStack_fc8)) &&
           (func_0x00010871e520(cStack_fbc), !(bool)in_ZR)) goto LAB_10870a5dc;
      }
      func_0x00010871f3a8();
      uVar21 = uStack_760;
      uVar19 = uStack_fc0;
      bVar2 = bStack_fe0;
      uVar18 = (uint)uStack_760;
      uVar15 = (uint)bStack_fe0;
      FUN_10871e8e8(&lStack_868,(long)(char)bStack_fe0,uStack_fc0,uStack_fd8,lStack_fd0);
      iVar24 = 0;
      if ((bool)in_ZR) {
        iVar24 = iVar23;
      }
      uVar4 = 0x13 < bVar2;
      bVar7 = bVar2 == 0x14;
      if ((0x14 < bVar2) || (func_0x00010871e164(1 << (ulong)(uVar15 & 0x1f)), bVar7)) {
        uVar16 = lStack_fd0 / 1000;
        if ((uStack_848 <= uVar16) &&
           (((bVar7 = uVar19 == 0xe, 0xe < uVar19 ||
             (func_0x00010871e2ec(), uVar16 = extraout_x8_07, bVar7)) ||
            ((bVar7 = uVar15 == 0x14, 0x14 < uVar15 ||
             (func_0x00010871e144(), uVar16 = extraout_x8_08, bVar7)))))) {
          uStack_528 = (uint)((int)uStack_fd8 != 2);
          uStack_848 = uVar16;
          FUN_10871c970();
          iVar24 = 0;
          uStack_580 = (undefined4)uStack_ee0;
          uStack_57c = (undefined1)((ulong)uStack_ee0 >> 0x20);
          uVar19 = uStack_fc0;
        }
        uVar4 = 0xd < uVar19;
        bVar7 = uVar19 == 0xe;
        if (uVar19 < 0xf) {
          func_0x00010871e790(1 << (ulong)(uVar19 & 0x1f));
          uVar5 = 0;
          if (!bVar7) goto LAB_10870a84c;
        }
        if ((bStack_690 & 1) != 0) {
          uVar4 = uStack_fc8 <= uStack_698;
          uVar5 = uStack_698 == uStack_fc8;
          if ((long)uStack_fc8 < (long)uStack_698) goto LAB_10870a84c;
        }
        uStack_698 = uStack_fc8;
        bStack_690 = 1;
        uVar4 = cStack_f38 != '\0';
        uVar5 = cStack_f38 == '\x01';
        if ((bool)uVar5) {
          func_0x00010883f80c(auStack_f90,&lStack_868);
        }
        iVar24 = 0;
      }
      else {
        uVar5 = 0;
      }
LAB_10870a84c:
      if (((pcStack_830 == (char *)0x0) && ((uVar21 & 0xfe) != 0)) &&
         ((*(byte *)(unaff_x19 + 0x250) & 1) == 0)) {
        uStack_878 = 0;
        uStack_880 = 0;
        func_0x00010871e048(*(undefined8 *)(unaff_x19 + 0x118));
        uStack_888 = 0;
        uStack_870 = 0x1cf;
        func_0x00010871e378();
        (*extraout_x8_02)();
        func_0x000107c2882c(auStack_890);
        uVar18 = 1;
        uVar19 = uStack_fc0;
      }
      bVar2 = bStack_828;
      pcVar12 = (char *)(long)(char)bStack_fe0;
      FUN_1087200ec(pcVar12,uVar9,uVar19,cStack_fbc,uVar18 & 0xff);
      uStack_898 = SUB84(pcVar12,0);
      uStack_894 = (undefined1)((ulong)pcVar12 >> 0x20);
      if (((ulong)pcVar12 >> 0x20 & 1) == 0) {
        pcVar22 = (char *)0x0;
      }
      else {
        func_0x00010871ee2c(auStack_1018);
        pcVar12 = (char *)&uStack_898;
        func_0x00010871e784();
        pcVar22 = pcVar12;
      }
      func_0x00010871f7b0();
      uVar3 = uVar5;
      if ((bool)uVar4 && !(bool)uVar5) {
LAB_10870ac58:
        func_0x00010871f798();
        if (((bool)uVar4 && !(bool)uVar3) || (func_0x00010871df90(), (bool)uVar3)) {
          func_0x00010871e960();
          uVar25 = *(undefined8 *)(unaff_x19 + 0x118);
          uStack_c68 = 0;
          uStack_c60 = 0;
          func_0x00010871e048();
          uStack_c70 = 0;
          uStack_c58 = 400;
          ppuStack_c78 = extraout_x8_05;
          func_0x00010871e550();
          func_0x000107c278b8(acStack_8d8);
          func_0x00010871ec6c();
          pcVar12 = "true";
          if (bVar2 == 0) {
            pcVar12 = acStack_3e8;
          }
          func_0x000107c28824(&ppuStack_c78,acStack_8d8,pcVar12);
          func_0x00010871e544();
          func_0x000107c278b8(auStack_8f0);
          func_0x00010871ed8c();
          func_0x00010871e538();
          puVar14 = auStack_908;
          func_0x000107c278b8(puVar14);
          func_0x00010871ed8c();
          func_0x000107c2884c(auStack_8c0,puVar14);
          func_0x00010871eeb8();
          (*extraout_x8_06)(uVar25,auStack_8c0);
          func_0x000107c2882c(auStack_8c0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8f0);
          pcVar12 = acStack_8d8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x00010871f360();
        }
      }
      else {
        func_0x00010871df48();
        uVar3 = 1;
        if ((bool)uVar5) goto LAB_10870ac58;
      }
      if (((ulong)pcVar22 & 1) == 0) {
        uVar15 = (uint)bStack_fe0;
LAB_10870aa44:
        plVar17 = (long *)((ulong)plVar11 & 0xffffffff);
        bVar7 = uVar15 == 0x14;
        if ((((uVar15 < 0x15) && (func_0x00010871dfc0(), !bVar7)) ||
            ((uVar9 == 0 ||
             ((((in_ZR = uStack_fc0 == 0xe, uStack_fc0 < 0xf &&
                (func_0x00010871e01c(), !(bool)in_ZR)) &&
               (in_ZR = extraout_w8_03 == 0x14, extraout_w8_03 < 0x15)) &&
              (func_0x00010871dfa8(), !(bool)in_ZR)))))) ||
           (func_0x00010871e444(auStack_1018), ((ulong)pcVar12 & 1) == 0)) {
          in_ZR = iVar24 == 2;
          if ((bool)in_ZR) goto LAB_10870a5dc;
        }
        else {
          iVar24 = 0;
        }
      }
      else {
        bVar8 = (char *)0xa < pcStack_830;
        bVar7 = pcStack_830 == (char *)0xb;
        if ((!bVar7) || (func_0x00010871f7b0(), bVar8 && !bVar7 || extraout_w8_01 == 9)) {
          bVar7 = false;
        }
        else {
          if ((bStack_690 == 1) && (func_0x00010871f544(), (int)pcVar12 != 0)) {
            pcVar12 = (char *)*plVar10;
            func_0x00010871f374();
            func_0x00010871f368();
            func_0x00010871f358();
            if ((cStack_910 == '\x01') &&
               (((bStack_a58 >> 2 & 1) != 0 && (*(int *)(lStack_a40 + 0xa8) == 0)))) {
              uStack_c68 = 0;
              uStack_c60 = 0;
              uStack_c70 = 0;
              ppuStack_c78 = &PTR_FUN_110a609a8;
              uStack_c58 = 399;
              func_0x00010871e574();
              func_0x000107c278b8(auStack_cb8);
              func_0x00010871e568();
              func_0x000107c28824(&ppuStack_c78,auStack_cb8,
                                  *(undefined8 *)(extraout_x8_03 + (ulong)uVar9 * 8));
              func_0x00010871e2e0();
              func_0x000107c278b8(auStack_cd0);
              lVar13 = (long)(char)bStack_fe0;
              func_0x000108841d8c(acStack_ce8,lVar13);
              func_0x00010871f4b4();
              func_0x000107c2884c(auStack_ca0,lVar13);
              func_0x00010871e938();
              func_0x00010871e5fc();
              func_0x000107c2882c(auStack_ca0);
              pcVar12 = acStack_ce8;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              func_0x00010871edc0();
              func_0x00010871edc8();
              func_0x00010871f360();
              func_0x00010871ec90();
              uStack_838 = (uint)pcVar12;
              pcStack_830 = (char *)0xd;
            }
            func_0x00010871f31c();
          }
          bVar7 = true;
        }
        if (((bStack_fe0 == 2) && ((bStack_690 & 1) != 0)) && (uStack_698 == uStack_fc8)) {
          pcVar12 = (char *)*plVar10;
          func_0x00010871f374();
          func_0x00010871f368();
          func_0x00010871f358();
          if (cStack_910 == '\x01') {
            pcVar12 = (char *)0x0;
            func_0x00010871e370(auStack_ab8);
          }
          func_0x00010871f31c();
        }
        uVar5 = 1 < uStack_550;
        uVar4 = uStack_550 == 2;
        if (((((bool)uVar4) &&
             (pcVar12 = pcStack_830, FUN_10871fb04(pcStack_830,uStack_838), (int)pcVar12 != 0)) &&
            ((func_0x00010871e55c(bStack_fe0), !(bool)uVar5 || (bool)uVar4 &&
             (((bStack_828 & 1) != 0 && ((long)uStack_760 < 2)))))) &&
           ((uStack_838 == 2 || uStack_838 == 0x1d) || (uStack_838 & 0xfffffffb) == 1)) {
          pcStack_830 = (char *)0x1;
        }
        bVar8 = cStack_fb8 == '\x01';
        if (bVar8) {
          uStack_760 = (ulong)bStack_fb9;
        }
        func_0x00010871f704();
        if (bVar8) {
          func_0x00010871e18c(auStack_1018);
        }
        else {
          func_0x00010871f7a4();
          if (bVar8) {
            bVar7 = true;
          }
          if (!bVar7) {
            func_0x00010871e368(&lStack_868);
          }
        }
        if (cStack_f98 == '\x01') {
          func_0x00010871e180(auStack_1018);
        }
        else if (lStack_798 != lStack_790) {
          func_0x00010871e360(&lStack_868);
        }
        if ((byte)uStack_ed4 == 1 && iStack_ed8 == 1) {
          pcStack_830 = (char *)0x10;
        }
        bVar7 = cStack_4f8 == '\x01';
        if (((bVar7) && (lStack_500 != 0)) && (((byte)uStack_ed4 & 1) == 0)) {
          cStack_4f8 = '\0';
        }
        iVar24 = 0;
        func_0x00010871f7bc();
        uVar15 = extraout_w8_02;
        if (((!bVar7) || (extraout_w10 == 0)) || (in_ZR = extraout_w9_00 == 2, !(bool)in_ZR))
        goto LAB_10870aa44;
        iVar24 = 0;
        lStack_500 = 1;
        cStack_4f8 = '\x01';
      }
      plVar17 = (long *)((ulong)plVar11 & 0xffffffff);
      FUN_1088665d4(*plVar10,&lStack_868);
      func_0x00010871e320(*(undefined8 *)(unaff_x19 + 0x158));
      (*extraout_x8_04)();
      if (((iVar24 == 0) && ((func_0x00010871e688(), (bool)in_ZR || ((bStack_4a8 & 1) == 0)))) &&
         ((bStack_680 & 1) == 0)) {
        func_0x00010871e354();
        func_0x00010871e274();
      }
      FUN_10871bca8(acStack_3e8,&lStack_868);
    }
    func_0x000107c288d0(&lStack_868);
    func_0x000107c28b40(auStack_438);
    bVar2 = bStack_18;
    func_0x000107c288cc(acStack_3e8);
    func_0x00010871e734();
    if ((bVar2 & 1) == 0) {
      func_0x00010871e65c(acStack_3e8);
      func_0x00010871e590(&lStack_868,acStack_3e8);
      func_0x00010871e9e8();
      func_0x00010871e274();
      func_0x00010871e7d0();
      func_0x000107c27914(acStack_3e8);
    }
    if (param_3 == 4 && bVar6) {
      if (((ulong)plVar17 & 1) == 0) {
        FUN_10871aee8();
      }
      else {
        func_0x00010871ecdc(*(undefined8 *)(unaff_x19 + 0x118));
        func_0x00010871f33c();
      }
    }
    func_0x00010871ed18();
  }
  func_0x000107c279dc(auStack_d28);
  func_0x000107c279dc();
LAB_10870a674:
  func_0x00010086526c(uStack_10);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2882c(auStack_8c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(acStack_8d8);
  func_0x000107c2882c(&ppuStack_c78);
  func_0x000107c288d0(&lStack_868);
  func_0x000107c28b40(auStack_438);
  func_0x00010871e734();
  func_0x00010871ed18();
  func_0x000107c279dc(auStack_d28);
  puVar14 = auStack_d08;
  func_0x000107c279dc();
  func_0x00010871e260();
  bVar6 = (puVar14[0x10] & 1) != 0;
  if (bVar6) {
    func_0x000107c29ee0(&uStack_1090,*(undefined8 *)(puVar14 + 0x18));
    extraout_x8_09[1] = uStack_1088;
    *extraout_x8_09 = uStack_1090;
    extraout_x8_09[2] = uStack_1080;
    uStack_1088 = 0;
    uStack_1080 = 0;
    uStack_1090 = 0;
    func_0x00010871e4f8();
  }
  else {
    *(undefined1 *)extraout_x8_09 = 0;
  }
  *(bool *)(extraout_x8_09 + 3) = bVar6;
  return;
}



/* Entry: 10870b048; end: 10870b0a7;  */

void FUN_10870b048(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  bVar1 = (*(byte *)(param_2 + 0x10) & 1) != 0;
  if (bVar1) {
    func_0x000107c29ee0(&uStack_40,*(undefined8 *)(param_2 + 0x18));
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    func_0x00010871e4f8();
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 3) = bVar1;
  return;
}



/* Entry: 10870b0a8; end: 10870b0c3;  */

undefined1 FUN_10870b0a8(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(param_1 + 0x98);
  func_0x000107c289e8();
  return *puVar1;
}



/* Entry: 10870b0c4; end: 10870b0d7;  */

long FUN_10870b0c4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,undefined2 param_11,undefined4 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c27994();
  func_0x000107c279d4(lVar1 + 0x18,param_3);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0x48) = param_6;
  *(undefined8 *)(param_1 + 0x50) = param_7;
  *(undefined4 *)(param_1 + 0x58) = param_8;
  *(undefined1 *)(param_1 + 0x5c) = param_9;
  *(undefined2 *)(param_1 + 0x5d) = param_11;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  if (*(char *)(param_13 + 0x58) == '\x01') {
    FUN_1086d7388((undefined1 *)(param_1 + 0x88));
    *(undefined1 *)(param_1 + 0xe0) = 1;
  }
  func_0x000107c279d4(param_1 + 0xe8,param_14);
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = param_15;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x144) = 0;
  return param_1;
}



/* Entry: 10870b0d8; end: 10870b1c3;  */

void FUN_10870b0d8(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010871e2f8(*(undefined8 *)(param_3 + 0x28));
  lVar3 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar3 = extraout_x8;
  }
  if ((*(byte *)(lVar3 + 0x10) >> 6 & 1) == 0) {
    return;
  }
  func_0x00010086504c();
  iVar1 = *(int *)(*(long *)(extraout_x8_00 + 0x98) + 0x1c);
  if (iVar1 == 1) {
    func_0x00010871e120(*(undefined8 *)(param_3 + 0x18));
    func_0x00010871e64c();
    if ((param_1 & 1) != 0) {
      return;
    }
    uVar4 = 2;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    func_0x00010871e120(*(undefined8 *)(param_3 + 0x18));
    func_0x00010871e64c();
    if ((param_1 & 1) != 0) {
      return;
    }
    uVar2 = unaff_x21 + 0x78;
    func_0x000107c28f08(uVar2,param_3);
    if ((uVar2 & 1) != 0) {
      return;
    }
    func_0x00010871e5c4(*(undefined8 *)(param_3 + 0x30));
    if (0 < *(int *)(extraout_x8_01 + 0x50)) {
      return;
    }
    lVar3 = *(long *)(unaff_x21 + 0xa8);
    func_0x000107c32ec8();
    (*extraout_x8_02)();
    FUN_1086a73d4();
    if (param_3 - lVar3 < 1) {
      *(undefined2 *)(unaff_x19 + 0x5d) = 0x101;
      *(undefined1 *)(unaff_x19 + 0x5c) = 0x10;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  *(undefined4 *)(unaff_x19 + 0x140) = uVar4;
  *(undefined1 *)(unaff_x19 + 0x144) = 1;
  return;
}



/* Entry: 10870b1c4; end: 10870b277;  */

void FUN_10870b1c4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 in_ZR;
  uint uVar3;
  undefined4 uVar4;
  long unaff_x23;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (uint)param_1;
  func_0x00010871ed20();
  lVar2 = CONCAT44(uVar4,uVar3);
  func_0x00010871f6ac();
  func_0x00010871f288();
  func_0x00010871e4d4();
  func_0x00010871f680();
  if ((bool)in_ZR) {
    func_0x00010871f270();
  }
  func_0x00010871ec38();
  do {
    if (unaff_x23 == 0) {
      return;
    }
    func_0x00010871f680();
    if ((bool)in_ZR) {
      func_0x00010871edac();
      func_0x000107c287fc();
      if ((uVar3 & 1) == 0) goto LAB_10870b220;
    }
    else {
LAB_10870b220:
      func_0x00010871f2bc();
      func_0x00010871f27c();
      func_0x00010871e774();
      uVar1 = (*(long *)(lVar2 + 0x70) - *(long *)(lVar2 + 0x68)) / 0x18;
      in_ZR = uVar1 == 3;
      if (3 < uVar1) {
        return;
      }
    }
    unaff_x23 = unaff_x23 + -8;
  } while( true );
}



/* Entry: 10870b278; end: 10870b327;  */

void FUN_10870b278(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 in_ZR;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (uint)param_1;
  func_0x0001008652d4();
  func_0x00010871ed20();
  lVar2 = CONCAT44(uVar4,uVar3);
  func_0x00010871f6ac();
  func_0x00010871f288();
  func_0x00010871e4d4();
  func_0x00010871f680();
  if ((bool)in_ZR) {
    func_0x00010871f270();
  }
  func_0x00010871ec38();
  do {
    if (unaff_x23 == 0) {
      return;
    }
    func_0x00010871eeac(*unaff_x22);
    func_0x00010871f680();
    if ((bool)in_ZR) {
      func_0x00010871edac();
      func_0x000107c287fc();
      if ((uVar3 & 1) == 0) goto LAB_10870b2e0;
    }
    else {
LAB_10870b2e0:
      func_0x00010871f2bc();
      func_0x00010871f27c();
      func_0x00010871e774();
      uVar1 = (*(long *)(lVar2 + 0x70) - *(long *)(lVar2 + 0x68)) / 0x18;
      in_ZR = uVar1 == 3;
      if (3 < uVar1) {
        return;
      }
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + -8;
  } while( true );
}



/* Entry: 10870b328; end: 10870b393;  */

void FUN_10870b328(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_400 [456];
  byte bStack_238;
  long lStack_1a8;
  
  FUN_1087091b4(auStack_400,param_1 + 0xb8,param_2);
  if (((bStack_238 & 1) == 0) && (lStack_1a8 < param_3)) {
    lStack_1a8 = param_3;
    FUN_1088665d4(*(undefined8 *)(param_1 + 0xb8),auStack_400);
  }
  func_0x00010871e598();
  return;
}



/* Entry: 10870b394; end: 10870be77;  */

void FUN_10870b394(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined ***pppuVar8;
  long *plVar9;
  char *pcVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar13;
  int extraout_w9;
  long unaff_x19;
  long lVar14;
  uint uVar15;
  char *pcVar16;
  long *plVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  undefined1 auStack_fd0 [56];
  byte bStack_f98;
  undefined8 uStack_f90;
  long lStack_f88;
  long lStack_f80;
  uint uStack_f78;
  char cStack_f74;
  byte bStack_f73;
  byte bStack_f71;
  char cStack_f70;
  char cStack_f50;
  undefined1 auStack_f48 [88];
  char cStack_ef0;
  char cStack_ed0;
  long lStack_ea8;
  byte bStack_ea0;
  undefined8 uStack_e98;
  int iStack_e90;
  undefined4 uStack_e8c;
  undefined1 auStack_e88 [976];
  undefined1 uStack_ab8;
  undefined1 auStack_ab0 [88];
  undefined1 uStack_a58;
  undefined1 auStack_a50 [328];
  undefined1 auStack_908 [24];
  char acStack_8f0 [24];
  undefined1 auStack_8d8 [24];
  undefined1 auStack_8c0 [40];
  undefined1 auStack_898 [24];
  undefined1 uStack_880;
  undefined4 uStack_878;
  undefined1 auStack_6d8 [96];
  byte bStack_678;
  long lStack_660;
  char cStack_530;
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [24];
  char acStack_4f8 [24];
  undefined1 auStack_4e0 [40];
  undefined4 uStack_4b8;
  undefined1 uStack_4b4;
  undefined **ppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  uint uStack_458;
  char *pcStack_450;
  byte bStack_448;
  long lStack_3b8;
  long lStack_3b0;
  ulong uStack_380;
  char cStack_2c0;
  long lStack_2b8;
  byte bStack_2b0;
  byte bStack_2a0;
  long lStack_228;
  char cStack_220;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  uint uStack_170;
  uint uStack_148;
  long lStack_120;
  char cStack_118;
  long lStack_110;
  long lStack_108;
  byte bStack_c8;
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((*(byte *)(param_4 + 0x10) >> 2 & 1) == 0) {
    return;
  }
  if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
    return;
  }
  lVar14 = param_4;
  func_0x000107c32eb0();
  uVar12 = (uint)lVar14;
  iVar18 = *(int *)(*(long *)(param_3 + 0x18) + 0x40);
  func_0x000107c29e78();
  if (iVar18 != 8 && iVar18 != 6 || (uVar12 & 0xfffffffb) != 1) {
    return;
  }
  lVar14 = *(long *)(param_4 + 0x60);
  FUN_10870b048(&ppuStack_488,param_4);
  func_0x00010871e5c4(*(undefined8 *)(param_3 + 0x18));
  uVar12 = (int)*(undefined8 *)(extraout_x8 + 0x30) * 1000;
  auStack_ab0[0] = 0;
  uStack_a58 = 0;
  auStack_898[0] = 0;
  uStack_880 = 0;
  func_0x00010871ebe4(auStack_a50);
  func_0x000107c279dc(auStack_898);
  FUN_1086d0498(auStack_ab0);
  func_0x000107c279dc(&ppuStack_488);
  FUN_10871bdd4(auStack_fd0,auStack_a50);
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_480 = 0;
  ppuStack_488 = &PTR_FUN_110a609a8;
  uStack_468 = CONCAT44(uStack_468._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)(char)bStack_f98);
  func_0x00010871e174(&ppuStack_488);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_58,unaff_x19 + 0x118);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(&ppuStack_488);
  plVar1 = (long *)(unaff_x19 + 0xb8);
  pppuVar8 = &ppuStack_488;
  func_0x00010871e48c(pppuVar8,plVar1,auStack_fd0);
  bVar5 = bStack_f98 == 0xf;
  if ((((!bVar5) || ((bStack_ea0 & 1) == 0)) ||
      (bVar5 = cStack_220 == '\x01' && lStack_ea8 == lStack_228,
      cStack_220 != '\x01' || lStack_228 <= lStack_ea8)) &&
     ((func_0x00010871e52c(), !bVar5 || extraout_w9 != 2 && (cStack_2c0 != '\x01')))) {
    bVar5 = false;
    if (uStack_f78 == 0x1e) {
      func_0x00010871e968();
      bVar5 = *(char *)pppuVar8 != '\x01' || uStack_170 == 2;
      if (*(char *)pppuVar8 != '\x01' || uStack_170 == 2) {
        uStack_f78 = 6;
      }
    }
    func_0x00010871e628(bStack_f98);
    if ((bVar5) && ((bStack_f73 & 1) != 0)) {
      iVar18 = 2;
      bVar5 = extraout_w8 == 0x14;
      if ((extraout_w8 < 0x15) && (func_0x00010871df48(), !bVar5)) goto LAB_10870b5a4;
    }
    else {
LAB_10870b5a4:
      func_0x00010871e0ac(auStack_fd0);
      func_0x00010871e494(CONCAT44(uStack_e8c,iStack_e90));
      plVar9 = plVar1;
      FUN_1087087c8();
      iVar18 = (int)plVar9;
      uVar12 = (uint)bStack_f98;
    }
    bVar6 = (uVar12 & 0xff) == 5;
    bVar5 = bVar6 && cStack_f74 == '\f';
    if ((((bVar6 && cStack_f74 == '\f') && (func_0x00010871e508(uStack_f78), bVar5)) &&
        (lVar2 = lStack_108 - lStack_110, lStack_108 != lStack_110)) &&
       (FUN_108708704(&ppuStack_488,lStack_f80), lStack_108 - lStack_110 != lVar2)) {
      iVar18 = 0;
    }
    if ((bStack_2b0 == 1) && (lStack_2b8 == lVar14)) {
      uVar7 = bStack_f98 == 7 || bStack_f98 == 2;
      if (((bStack_f98 != 7 && bStack_f98 != 2) ||
          (bVar6 = (uStack_f78 & 0xfffffffb) != 1, bVar5 = bVar6 || lVar14 == lStack_f80,
          uVar7 = bVar5, bVar6 || lVar14 == lStack_f80)) ||
         (func_0x00010871e520(cStack_f74), uVar7 = true, bVar5)) {
        plVar9 = plVar1;
        FUN_108720660(plVar1,auStack_fd0);
        uVar20 = uStack_380;
        uVar15 = uStack_f78;
        bVar3 = bStack_f98;
        uVar12 = (uint)bStack_f98;
        FUN_10871e8e8(&ppuStack_488,(long)(char)bStack_f98,uStack_f78,uStack_f90,lStack_f88);
        iVar19 = 0;
        if ((bool)uVar7) {
          iVar19 = iVar18;
        }
        bVar5 = bVar3 == 0x14;
        if ((0x14 < bVar3) || (func_0x00010871e164(1 << (ulong)(uVar12 & 0x1f)), bVar5)) {
          uVar13 = lStack_f88 / 1000;
          if ((uStack_468 <= uVar13) &&
             ((((bVar5 = uVar15 == 0xe, 0xe < uVar15 ||
                (func_0x00010871e2ec(), uVar13 = extraout_x8_03, bVar5)) ||
               (bVar5 = uVar12 == 0x14, 0x14 < uVar12)) ||
              (func_0x00010871e144(), uVar13 = extraout_x8_04, bVar5)))) {
            uStack_148 = (uint)((int)uStack_f90 != 2);
            uStack_468 = uVar13;
            FUN_10871c970();
            iVar19 = 0;
            uStack_1a0 = (undefined4)uStack_e98;
            uStack_19c = (undefined1)((ulong)uStack_e98 >> 0x20);
            uVar15 = uStack_f78;
          }
          bVar5 = uVar15 == 0xe;
          if (((0xe < uVar15) || (func_0x00010871e790(1 << (ulong)(uVar15 & 0x1f)), bVar5)) &&
             (((bStack_2b0 & 1) == 0 || (lStack_2b8 <= lStack_f80)))) {
            lStack_2b8 = lStack_f80;
            bStack_2b0 = 1;
            if (cStack_ef0 == '\x01') {
              func_0x00010883f80c(auStack_f48,&ppuStack_488);
            }
            iVar19 = 0;
          }
        }
        if (((pcStack_450 == (char *)0x0) && ((uVar20 & 0xfe) != 0)) &&
           ((*(byte *)(unaff_x19 + 0x250) & 1) == 0)) {
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_4a8 = 0;
          ppuStack_4b0 = &PTR_FUN_110a609a8;
          uStack_490 = 0x1cf;
          func_0x00010871e378(*(undefined8 *)(unaff_x19 + 0x118));
          (*extraout_x8_00)();
          func_0x000107c2882c(&ppuStack_4b0);
          uVar20 = 1;
          uVar15 = uStack_f78;
        }
        pcVar10 = (char *)(long)(char)bStack_f98;
        FUN_1087200ec(pcVar10,(int)plVar9,uVar15,cStack_f74,(uint)uVar20 & 0xff);
        uStack_4b8 = SUB84(pcVar10,0);
        uStack_4b4 = (undefined1)((ulong)pcVar10 >> 0x20);
        if (((ulong)pcVar10 >> 0x20 & 1) == 0) {
          pcVar16 = (char *)0x0;
        }
        else {
          func_0x00010871ee2c(auStack_fd0);
          pcVar10 = (char *)&uStack_4b8;
          func_0x00010871e784();
          pcVar16 = pcVar10;
        }
        bVar5 = bStack_f98 == 0x14;
        if (((0x14 < bStack_f98) || (func_0x00010871df48(), bVar5)) &&
           ((bVar5 = uStack_f78 == 0x1e, 0x1e < uStack_f78 || (func_0x00010871df90(), bVar5)))) {
          func_0x00010871e960();
          plVar17 = *(long **)(unaff_x19 + 0x118);
          func_0x00010871ee94();
          uStack_878 = 400;
          func_0x00010871e550();
          func_0x000107c278b8(acStack_4f8);
          func_0x00010871ec6c();
          func_0x00010871f628();
          func_0x000107c28824(auStack_898,acStack_4f8);
          func_0x00010871e544();
          func_0x000107c278b8(auStack_510);
          func_0x00010871e66c();
          func_0x00010871e538();
          puVar11 = auStack_528;
          func_0x000107c278b8(puVar11);
          func_0x00010871e66c();
          func_0x000107c2884c(auStack_4e0,puVar11);
          (**(code **)(*plVar17 + 0x50))(plVar17,auStack_4e0);
          func_0x000107c2882c(auStack_4e0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_528);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_510);
          pcVar10 = acStack_4f8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x00010871f1e8();
        }
        if (((ulong)pcVar16 & 1) == 0) {
LAB_10870b910:
          bVar5 = bStack_f98 == 0x14;
          if ((((bStack_f98 < 0x15) && (func_0x00010871dfc0(), !bVar5)) ||
              (((int)plVar9 == 0 ||
               ((((uVar7 = uStack_f78 == 0xe, uStack_f78 < 0xf &&
                  (func_0x00010871e01c(), !(bool)uVar7)) &&
                 (uVar7 = extraout_w8_00 == 0x14, extraout_w8_00 < 0x15)) &&
                (func_0x00010871dfa8(), !(bool)uVar7)))))) ||
             (func_0x00010871e444(auStack_fd0), ((ulong)pcVar10 & 1) == 0)) {
            if (iVar19 == 2) goto LAB_10870b76c;
            uVar7 = 0;
          }
          else {
            iVar19 = 0;
          }
        }
        else {
          if ((pcStack_450 == (char *)0xb) && (bStack_f98 < 0x15 && bStack_f98 != 9)) {
            if ((bStack_2b0 == 1) && (func_0x00010871f544(), (int)pcVar10 != 0)) {
              pcVar10 = (char *)*plVar1;
              func_0x00010871f200();
              func_0x00010871f13c();
              func_0x00010871f1e0();
              if ((cStack_530 == '\x01') &&
                 (((bStack_678 >> 2 & 1) != 0 && (*(int *)(lStack_660 + 0xa8) == 0)))) {
                plVar17 = *(long **)(unaff_x19 + 0x118);
                func_0x00010871ee94();
                uStack_878 = 399;
                func_0x00010871e574();
                func_0x000107c278b8(auStack_8d8);
                func_0x00010871e568();
                puVar11 = auStack_898;
                func_0x000107c28824(puVar11,auStack_8d8,
                                    *(undefined8 *)
                                     (extraout_x8_01 + ((ulong)plVar9 & 0xffffffff) * 8));
                func_0x00010871e2e0();
                func_0x000107c278b8(acStack_8f0);
                func_0x000108841d8c(auStack_908,(long)(char)bStack_f98);
                func_0x000107c28820(puVar11,acStack_8f0,auStack_908);
                func_0x000107c2884c(auStack_8c0,puVar11);
                func_0x00010871f490(*(undefined8 *)(*plVar17 + 0x50));
                func_0x000107c2882c(auStack_8c0);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
                pcVar10 = acStack_8f0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                func_0x00010871eb20();
                func_0x00010871f1e8();
                func_0x00010871eb18();
                uStack_458 = (uint)pcVar10;
                pcStack_450 = (char *)0xd;
              }
              func_0x00010871f128();
            }
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (((bStack_f98 == 2) && ((bStack_2b0 & 1) != 0)) && (lStack_2b8 == lStack_f80)) {
            pcVar10 = (char *)*plVar1;
            func_0x00010871f200();
            func_0x00010871f13c();
            func_0x00010871f1e0();
            if (cStack_530 == '\x01') {
              pcVar10 = (char *)0x0;
              func_0x00010871e370(auStack_6d8);
            }
            func_0x00010871f128();
          }
          uVar4 = 1 < uStack_170;
          uVar7 = uStack_170 == 2;
          if (((((bool)uVar7) &&
               (pcVar10 = pcStack_450, FUN_10871fb04(pcStack_450,uStack_458), (int)pcVar10 != 0)) &&
              ((func_0x00010871e55c(bStack_f98), !(bool)uVar4 || (bool)uVar7 &&
               (((bStack_448 & 1) != 0 && ((long)uStack_380 < 2)))))) &&
             ((uStack_458 == 2 || uStack_458 == 0x1d) || (uStack_458 & 0xfffffffb) == 1)) {
            pcStack_450 = (char *)0x1;
          }
          if (cStack_f70 == '\x01') {
            uStack_380 = (ulong)bStack_f71;
          }
          if (cStack_ed0 == '\x01') {
            func_0x00010871e18c(auStack_fd0);
          }
          else {
            if (bStack_f98 == 0xf) {
              bVar5 = true;
            }
            if (!bVar5) {
              func_0x00010871e368(&ppuStack_488);
            }
          }
          if (cStack_f50 == '\x01') {
            func_0x00010871e180(auStack_fd0);
          }
          else if (lStack_3b8 != lStack_3b0) {
            func_0x00010871e360(&ppuStack_488);
          }
          if ((byte)uStack_e8c == 1 && iStack_e90 == 1) {
            pcStack_450 = (char *)0x10;
          }
          if (((cStack_118 == '\x01') && (lStack_120 != 0)) && (((byte)uStack_e8c & 1) == 0)) {
            cStack_118 = '\0';
          }
          iVar19 = 0;
          if (((bStack_f98 != 7) || ((byte)uStack_e8c == 0)) || (iStack_e90 != 2))
          goto LAB_10870b910;
          iVar19 = 0;
          lStack_120 = 1;
          cStack_118 = '\x01';
          uVar7 = 1;
        }
        FUN_1088665d4(*plVar1,&ppuStack_488);
        func_0x00010871e320(*(undefined8 *)(unaff_x19 + 0x158));
        (*extraout_x8_02)();
        if (((iVar19 == 0) && ((func_0x00010871e688(), (bool)uVar7 || ((bStack_c8 & 1) == 0)))) &&
           ((bStack_2a0 & 1) == 0)) {
          func_0x00010871e354();
          func_0x00010871e274();
        }
        FUN_10871bca8(auStack_e88,&ppuStack_488);
        goto LAB_10870b774;
      }
    }
    else if (iVar18 != 2) {
      FUN_1088665d4(*plVar1,&ppuStack_488);
    }
  }
LAB_10870b76c:
  auStack_e88[0] = 0;
  uStack_ab8 = 0;
LAB_10870b774:
  func_0x000107c288d0(&ppuStack_488);
  func_0x00010871e2c8();
  func_0x000107c288cc(auStack_e88);
  FUN_10871be98(auStack_fd0);
  FUN_10871be98(auStack_a50);
  return;
}



/* Entry: 10870be78; end: 10870c08f;  */

void FUN_10870be78(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,uint param_5)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  int extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 extraout_w8_02;
  long lVar7;
  undefined **extraout_x9;
  undefined1 auStack_7f0 [984];
  undefined1 auStack_418 [552];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined4 uStack_128;
  byte bStack_48;
  
  auStack_418[0] = 0;
  bStack_48 = 0;
  iVar2 = *(int *)(param_4 + 0x48);
  if (iVar2 == 8) {
    lVar7 = *(long *)(param_4 + 0x40);
    uVar3 = *(uint *)(lVar7 + 0x24);
    bVar4 = (1 << (ulong)(uVar3 & 0x1f) & 0x16U) == 0;
    bVar5 = 4 < uVar3 || bVar4;
    if ((4 >= uVar3 && !bVar4) && (func_0x00010871f604(param_2,param_3,param_3), bVar5)) {
      func_0x00010871f470();
      func_0x00010871f23c(auStack_418);
      func_0x00010871e598();
      iVar2 = *(int *)(lVar7 + 0x24);
      bVar5 = iVar2 == 4;
      if (bVar5) {
        func_0x00010871f604();
        if (bVar5) {
          func_0x00010871e6ac(*(undefined4 *)(lVar7 + 0x28));
          uStack_128 = extraout_w8_02;
        }
        else {
          uStack_128 = 0;
        }
      }
      else {
        bVar5 = iVar2 == 2;
        if (bVar5) {
          func_0x00010871f604();
          if (bVar5) {
            func_0x00010871e6ac(*(undefined4 *)(lVar7 + 0x28));
            uStack_1ec = extraout_w8_01;
          }
          else {
            uStack_1ec = 0;
          }
        }
        else {
          bVar5 = iVar2 == 1;
          if (bVar5) {
            func_0x00010871f604();
            if (bVar5) {
              func_0x00010871e6ac(*(undefined4 *)(lVar7 + 0x28));
              uStack_1f0 = extraout_w8_00;
            }
            else {
              uStack_1f0 = 0;
            }
          }
        }
      }
    }
LAB_10870c024:
    if (((param_5 & 1) == 0) && ((bStack_48 & 1) != 0)) {
      func_0x00010871ed74(*(undefined8 *)(*param_2 + 400));
    }
    if (param_5 != 0) {
      FUN_1086d7004(param_1,auStack_418);
      goto LAB_10870c058;
    }
  }
  else if (iVar2 != 0x21) {
    if (iVar2 == 0x10) {
      func_0x00010871f470();
      func_0x00010871f23c(auStack_418);
      func_0x00010871e598();
      func_0x00010871e9bc();
      ppuVar1 = extraout_x9;
      if (extraout_w8 != 0x10) {
        ppuVar1 = &PTR_PTR_11327c260;
      }
      uStack_160 = *(int *)(ppuVar1 + 4) == 1;
      uStack_168 = 0x7fffffffffffffff;
      if (!(bool)uStack_160) {
        uStack_168 = 0x7fffffffffffff00;
      }
    }
    else if (((iVar2 == 10) && ((*(byte *)(*(long *)(param_4 + 0x40) + 0x10) >> 1 & 1) != 0)) &&
            (lVar7 = *(long *)(*(long *)(param_4 + 0x40) + 0x20), *(int *)(lVar7 + 0x10) == 0)) {
      if (*(int *)(lVar7 + 0x24) == 2) {
        uVar6 = *(undefined8 *)(lVar7 + 0x18);
      }
      else {
        uVar6 = 0;
      }
      FUN_10870c090(auStack_7f0,param_2,param_3,uVar6,1,1);
      func_0x000107c288f0(auStack_418,auStack_7f0);
      func_0x00010871e98c();
    }
    goto LAB_10870c024;
  }
  func_0x00010871e5e8();
LAB_10870c058:
  func_0x00010871f350();
  return;
}



/* Entry: 10870c090; end: 10870cde3;  */

void FUN_10870c090(undefined8 param_1,long param_2,ulong param_3,undefined ***param_4,int param_5,
                  ulong param_6)

{
  undefined ****ppppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  byte *pbVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  uint uVar15;
  uint extraout_w8;
  uint extraout_w8_00;
  code *extraout_x8;
  long lVar16;
  code *extraout_x8_00;
  undefined **extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  undefined **extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong uVar17;
  int extraout_w9;
  undefined ***pppuVar18;
  long unaff_x20;
  long *plVar19;
  byte bVar20;
  char *pcVar21;
  long *plVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  undefined1 auStack_ff0 [24];
  undefined1 auStack_fd8 [32];
  byte bStack_fb8;
  undefined8 uStack_fb0;
  long lStack_fa8;
  long lStack_fa0;
  uint uStack_f98;
  char cStack_f94;
  ushort uStack_f93;
  byte bStack_f91;
  char cStack_f90;
  char cStack_f70;
  undefined1 auStack_f68 [88];
  char cStack_f10;
  char cStack_ef0;
  long lStack_ec8;
  byte bStack_ec0;
  undefined8 uStack_eb8;
  int iStack_eb0;
  undefined4 uStack_eac;
  undefined1 auStack_ea8 [88];
  undefined1 uStack_e50;
  undefined1 auStack_e48 [328];
  undefined ***pppuStack_d00;
  byte abStack_cf8 [8];
  undefined **ppuStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  ulong uStack_cd8;
  ulong uStack_cd0;
  uint uStack_cc0;
  char *pcStack_cb8;
  byte bStack_cb0;
  long lStack_c20;
  long lStack_c18;
  undefined1 auStack_c08 [32];
  ulong uStack_be8;
  long lStack_be0;
  char cStack_bd8;
  char cStack_b28;
  long lStack_b20;
  byte bStack_b18;
  byte bStack_b08;
  long lStack_a90;
  char cStack_a88;
  undefined4 uStack_a08;
  undefined1 uStack_a04;
  uint uStack_9d8;
  uint uStack_9b0;
  long lStack_988;
  char cStack_980;
  long lStack_978;
  long lStack_970;
  byte bStack_930;
  char cStack_920;
  undefined1 auStack_908 [272];
  undefined ***pppuStack_7f8;
  char cStack_7f0;
  char cStack_538;
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  char acStack_500 [24];
  undefined1 auStack_4e8 [40];
  undefined **ppuStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  ulong uStack_4a8;
  undefined4 uStack_4a0;
  undefined1 auStack_300 [96];
  byte bStack_2a0;
  long lStack_288;
  char cStack_158;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [40];
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c32eb0();
  plVar19 = (long *)(param_2 + 0xb8);
  func_0x00010871f3a0(&ppuStack_cf0,*plVar19);
  FUN_10869148c(auStack_908,&ppuStack_cf0);
  func_0x000107c288ec(&ppuStack_cf0);
  uVar14 = param_3;
  FUN_1088638d0(&ppuStack_cf0,*plVar19,param_3,param_4);
  pppuVar18 = &ppuStack_cf0;
  func_0x000107c29670();
  abStack_cf8[0] = (byte)uVar14;
  pppuStack_d00 = pppuVar18;
  func_0x000107c29020(&ppuStack_cf0);
  if (((cStack_538 == '\x01') && (cStack_7f0 == '\x01')) && ((long)pppuStack_7f8 < (long)param_4)) {
    ppppuVar1 = &pppuStack_7f8;
    if ((long)pppuStack_7f8 <= (long)pppuVar18) {
      ppppuVar1 = &pppuStack_d00;
    }
    if ((uVar14 & 1) == 0) {
      ppppuVar1 = &pppuStack_7f8;
    }
    pppuVar18 = *ppppuVar1;
    abStack_cf8[0] = *(byte *)(ppppuVar1 + 1);
    pppuStack_d00 = pppuVar18;
    if ((abStack_cf8[0] & 1) == 0) {
LAB_10870c230:
      func_0x00010871e5e8();
      goto code_r0x000100671834;
    }
  }
  else if ((uVar14 & 1) == 0) goto LAB_10870c230;
  if ((long)param_4 <= (long)pppuVar18) {
    pppuVar18 = param_4;
  }
  ppuStack_cf0 = (undefined **)((ulong)ppuStack_cf0 & 0xffffffffffffff00);
  uStack_cd8 = uStack_cd8 & 0xffffffffffffff00;
  uVar15 = (uint)*(undefined8 *)(unaff_x20 + 0xa8);
  func_0x00010871e320();
  (*extraout_x8)();
  auStack_ea8[0] = 0;
  uStack_e50 = 0;
  ppuStack_4c0 = (undefined **)((ulong)ppuStack_4c0 & 0xffffffffffffff00);
  uStack_4a8 = uStack_4a8 & 0xffffffffffffff00;
  func_0x00010871ea7c(auStack_ea8);
  FUN_10871bcc4(auStack_e48,param_3,&ppuStack_cf0,0x11,2);
  func_0x000107c279dc(&ppuStack_4c0);
  FUN_1086d0498(auStack_ea8);
  func_0x00010871eb88();
  FUN_10871bdd4(auStack_ff0,auStack_e48);
  if (*(char *)(unaff_x20 + 0x3a8) == '\x01') {
    pbVar8 = (byte *)(unaff_x20 + 0x378);
    func_0x000107c289e8();
    bVar20 = *pbVar8;
  }
  else {
    bVar20 = 0;
  }
  uStack_ce0 = 0;
  uStack_cd8 = 0;
  uStack_ce8 = 0;
  ppuStack_cf0 = &PTR_FUN_110a609a8;
  uStack_cd0 = CONCAT44(uStack_cd0._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)(char)bStack_fb8);
  func_0x00010871e174(&ppuStack_cf0);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_58,unaff_x20 + 0x118);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(&ppuStack_cf0);
  pppuVar9 = &ppuStack_cf0;
  func_0x00010871e9b4(pppuVar9,plVar19,auStack_ff0);
  bVar5 = bStack_fb8 == 0xf;
  if ((((bVar5) && ((bStack_ec0 & 1) != 0)) &&
      (bVar5 = cStack_a88 == '\x01' && lStack_ec8 == lStack_a90,
      cStack_a88 == '\x01' && lStack_ec8 < lStack_a90)) ||
     (func_0x00010871e52c(), bVar5 && extraout_w9 == 2)) {
LAB_10870c9a8:
    func_0x00010871e5e8();
  }
  else {
    if (cStack_920 != '\x01') {
      if (cStack_b28 == '\x01') goto LAB_10870c9a8;
      bVar5 = false;
      if (uStack_f98 == 0x1e) {
        FUN_10871e8d8();
        bVar5 = *(char *)pppuVar9 != '\x01' || uStack_9d8 == 2;
        if (*(char *)pppuVar9 != '\x01' || uStack_9d8 == 2) {
          uStack_f98 = 6;
        }
      }
      lVar16 = param_2 + 0x78;
      func_0x00010871e628(bStack_fb8);
      if ((bVar5) && ((uStack_f93 & 1) != 0)) {
        iVar23 = 2;
        bVar5 = extraout_w8 == 0x14;
        if ((extraout_w8 < 0x15) && (func_0x00010871df48(), !bVar5)) goto LAB_10870c3ac;
      }
      else {
LAB_10870c3ac:
        func_0x00010871e0ac(auStack_ff0);
        func_0x00010871e610(CONCAT44(uStack_eac,iStack_eb0));
        plVar10 = plVar19;
        FUN_1087087c8(plVar19,lVar16,&ppuStack_cf0);
        iVar23 = (int)plVar10;
        uVar15 = (uint)bStack_fb8;
      }
      bVar6 = (uVar15 & 0xff) == 5;
      bVar5 = bVar6 && cStack_f94 == '\f';
      if ((((bVar6 && cStack_f94 == '\f') && (func_0x00010871e508(uStack_f98), bVar5)) &&
          (lVar2 = lStack_970 - lStack_978, lStack_970 != lStack_978)) &&
         (FUN_108708704(&ppuStack_cf0,lStack_fa0), lStack_970 - lStack_978 != lVar2)) {
        iVar23 = 0;
      }
      if (cStack_bd8 != '\x01' || lStack_be0 <= (long)pppuVar18) {
        puVar11 = auStack_c08;
        func_0x000107c28f58(puVar11,lVar16);
        if (((int)puVar11 == 0) || (func_0x000107c2a620(param_3,param_2 + 0x90), (int)param_3 == 0))
        {
          bVar5 = bStack_fb8 == 7 || bStack_fb8 == 2;
          uVar7 = bVar5;
          if (bStack_fb8 == 7 || bStack_fb8 == 2) {
            func_0x00010871e694(uStack_f98);
            uVar7 = 0;
            if (((bVar5) &&
                (uVar7 = bStack_b18 == 1 && lStack_b20 == lStack_fa0,
                bStack_b18 != 1 || lStack_b20 != lStack_fa0)) &&
               (func_0x00010871e520(cStack_f94), !(bool)uVar7)) goto LAB_10870c9a8;
          }
          plVar10 = plVar19;
          FUN_108720660(plVar19,auStack_ff0);
          uVar14 = uStack_be8;
          uVar24 = uStack_f98;
          lVar2 = lStack_fa8;
          uVar3 = uStack_fb0;
          bVar20 = bStack_fb8;
          uVar15 = (uint)bStack_fb8;
          FUN_10871e8e8(&ppuStack_cf0,(long)(char)bStack_fb8,uStack_f98,uStack_fb0,lStack_fa8);
          iVar25 = 0;
          if ((bool)uVar7) {
            iVar25 = iVar23;
          }
          bVar5 = bVar20 == 0x14;
          if ((0x14 < bVar20) || (func_0x00010871e164(1 << (ulong)(uVar15 & 0x1f)), bVar5)) {
            uVar17 = lVar2 / 1000;
            if ((uStack_cd0 <= uVar17) &&
               ((((bVar5 = uVar24 == 0xe, 0xe < uVar24 ||
                  (func_0x00010871e2ec(), uVar17 = extraout_x8_05, bVar5)) ||
                 (bVar5 = uVar15 == 0x14, 0x14 < uVar15)) ||
                (func_0x00010871e144(), uVar17 = extraout_x8_06, bVar5)))) {
              uStack_9b0 = (uint)((int)uVar3 != 2);
              uStack_cd0 = uVar17;
              func_0x00010871c970();
              iVar25 = 0;
              uStack_a08 = (undefined4)uStack_eb8;
              uStack_a04 = (undefined1)((ulong)uStack_eb8 >> 0x20);
              uVar24 = uStack_f98;
            }
            bVar5 = uVar24 == 0xe;
            if (((0xe < uVar24) || (func_0x00010871e790(1 << (ulong)(uVar24 & 0x1f)), bVar5)) &&
               (((bStack_b18 & 1) == 0 || (lStack_b20 <= lStack_fa0)))) {
              lStack_b20 = lStack_fa0;
              bStack_b18 = 1;
              if (cStack_f10 == '\x01') {
                func_0x00010883f80c(auStack_f68,&ppuStack_cf0);
              }
              iVar25 = 0;
            }
          }
          uVar15 = (uint)uVar14;
          if (((pcStack_cb8 == (char *)0x0) && ((uVar14 & 0xfe) != 0)) &&
             ((*(byte *)(unaff_x20 + 0x250) & 1) == 0)) {
            uStack_c0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            ppuStack_d8 = &PTR_FUN_110a609a8;
            uStack_b8 = 0x1cf;
            func_0x00010871e378(*(undefined8 *)(unaff_x20 + 0x118));
            (*extraout_x8_00)();
            func_0x000107c2882c(&ppuStack_d8);
            uVar15 = 1;
            uVar24 = uStack_f98;
          }
          pcVar12 = (char *)(long)(char)bStack_fb8;
          FUN_1087200ec(pcVar12,(ulong)plVar10 & 0xffffffff,uVar24,cStack_f94,uVar15 & 0xff);
          pcVar13 = (char *)(unaff_x20 + 0x188);
          uStack_e0 = SUB84(pcVar12,0);
          uStack_dc = (undefined1)((ulong)pcVar12 >> 0x20);
          if (((ulong)pcVar12 >> 0x20 & 1) == 0) {
            pcVar21 = (char *)0x0;
          }
          else {
            pcVar12 = (char *)&uStack_e0;
            FUN_108720360(pcVar12,uStack_f98,auStack_fd8,uStack_fb0,lStack_fa8,uStack_f93,
                          &ppuStack_cf0,lVar16,param_2 + 0x90,(undefined8 *)(unaff_x20 + 0xa8),
                          plVar19,pcVar13);
            pcVar21 = pcVar12;
          }
          bVar5 = bStack_fb8 == 0x14;
          if (((0x14 < bStack_fb8) || (func_0x00010871df48(), bVar5)) &&
             ((bVar5 = uStack_f98 == 0x1e, 0x1e < uStack_f98 || (func_0x00010871df90(), bVar5)))) {
            func_0x00010871e85c();
            plVar22 = *(long **)(unaff_x20 + 0x118);
            uStack_4b0 = 0;
            uStack_4a8 = 0;
            func_0x00010871e048();
            uStack_4b8 = 0;
            uStack_4a0 = 400;
            ppuStack_4c0 = extraout_x8_04;
            func_0x00010871e550();
            func_0x000107c278b8(auStack_120);
            func_0x00010871ec6c();
            func_0x00010871f628();
            func_0x000107c28824(&ppuStack_4c0,auStack_120);
            func_0x00010871e544();
            func_0x000107c278b8(auStack_138);
            func_0x00010871e66c();
            func_0x00010871e538();
            puVar11 = auStack_150;
            func_0x000107c278b8(puVar11);
            func_0x00010871e66c();
            func_0x000107c2884c(auStack_108,puVar11);
            func_0x00010871ed74(*(undefined8 *)(*plVar22 + 0x50));
            func_0x00010871f4d0();
            func_0x00010871ed94();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
            pcVar12 = (char *)0x0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x00010871ede4();
            param_6 = param_6 & 0xffffffff;
          }
          if (((ulong)pcVar21 & 1) == 0) {
LAB_10870c790:
            bVar5 = bStack_fb8 == 0x14;
            if (((0x14 < bStack_fb8) || (func_0x00010871dfc0(), bVar5)) && ((int)plVar10 != 0)) {
              bVar5 = uStack_f98 == 0xe;
              uVar7 = bVar5;
              if (uStack_f98 < 0xf) {
                func_0x00010871e01c();
                uVar7 = true;
                if ((!bVar5) &&
                   (bVar5 = extraout_w8_00 == 0x14, uVar7 = bVar5, extraout_w8_00 < 0x15)) {
                  func_0x00010871dfa8();
                  uVar7 = true;
                  if (!bVar5) goto LAB_10870c7a0;
                }
              }
              func_0x00010871e800(auStack_ff0);
              FUN_1086a470c();
              if (((ulong)pcVar12 & 1) != 0) {
                iVar25 = 0;
                goto LAB_10870c93c;
              }
            }
LAB_10870c7a0:
            uVar7 = 0;
            if (iVar25 == 2) goto LAB_10870c9a8;
          }
          else {
            if ((pcStack_cb8 == (char *)0xb) && (bStack_fb8 < 0x15 && bStack_fb8 != 9)) {
              if ((bStack_b18 == 1) && (func_0x00010871c9a0(), pcVar12 = pcVar13, (int)pcVar13 != 0)
                 ) {
                pcVar12 = (char *)*plVar19;
                func_0x00010871efc0();
                func_0x00010871f538();
                func_0x00010871f5d4();
                if ((cStack_158 == '\x01') &&
                   (((bStack_2a0 >> 2 & 1) != 0 && (*(int *)(lStack_288 + 0xa8) == 0)))) {
                  plVar22 = *(long **)(unaff_x20 + 0x118);
                  uStack_4b0 = 0;
                  uStack_4a8 = 0;
                  func_0x00010871e048();
                  uStack_4b8 = 0;
                  uStack_4a0 = 399;
                  ppuStack_4c0 = extraout_x8_01;
                  func_0x00010871e574();
                  func_0x000107c278b8(acStack_500);
                  func_0x00010871e568();
                  func_0x000107c28824(&ppuStack_4c0,acStack_500,
                                      *(undefined8 *)
                                       (extraout_x8_02 + ((ulong)plVar10 & 0xffffffff) * 8));
                  func_0x00010871e2e0();
                  func_0x000107c278b8(auStack_518);
                  lVar16 = (long)(char)bStack_fb8;
                  func_0x000108841d8c(auStack_530,lVar16);
                  func_0x00010871f4b4();
                  func_0x000107c2884c(auStack_4e8,lVar16);
                  func_0x00010871f4bc(*(undefined8 *)(*plVar22 + 0x50));
                  func_0x000107c2882c(auStack_4e8);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_530);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_518);
                  pcVar12 = acStack_500;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                  func_0x00010871ede4();
                  func_0x00010871eb18();
                  uStack_cc0 = (uint)pcVar12;
                  pcStack_cb8 = (char *)0xd;
                }
                func_0x00010871f590();
              }
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if (((bStack_fb8 == 2) && ((bStack_b18 & 1) != 0)) && (lStack_b20 == lStack_fa0)) {
              pcVar12 = (char *)*plVar19;
              func_0x00010871efc0();
              func_0x00010871f538();
              func_0x00010871f5d4();
              if (cStack_158 == '\x01') {
                pcVar12 = (char *)0x0;
                func_0x00010871e370(auStack_300);
              }
              func_0x00010871f590();
            }
            uVar4 = 1 < uStack_9d8;
            uVar7 = uStack_9d8 == 2;
            if (((((bool)uVar7) &&
                 (pcVar12 = pcStack_cb8, FUN_10871fb04(pcStack_cb8,uStack_cc0), (int)pcVar12 != 0))
                && ((func_0x00010871e55c(bStack_fb8), !(bool)uVar4 || (bool)uVar7 &&
                    (((bStack_cb0 & 1) != 0 && ((long)uStack_be8 < 2)))))) &&
               ((uStack_cc0 == 2 || uStack_cc0 == 0x1d) || (uStack_cc0 & 0xfffffffb) == 1)) {
              pcStack_cb8 = (char *)0x1;
            }
            if (cStack_f90 == '\x01') {
              uStack_be8 = (ulong)bStack_f91;
            }
            if (cStack_ef0 == '\x01') {
              func_0x00010871e18c(auStack_ff0);
            }
            else {
              if (bStack_fb8 == 0xf) {
                bVar5 = true;
              }
              if (!bVar5) {
                func_0x00010871e368(&ppuStack_cf0);
              }
            }
            if (cStack_f70 == '\x01') {
              func_0x00010871e180(auStack_ff0);
            }
            else if (lStack_c20 != lStack_c18) {
              func_0x00010871e360(&ppuStack_cf0);
            }
            if ((byte)uStack_eac == 1 && iStack_eb0 == 1) {
              pcStack_cb8 = (char *)0x10;
            }
            if (((cStack_980 == '\x01') && (lStack_988 != 0)) && (((byte)uStack_eac & 1) == 0)) {
              cStack_980 = '\0';
            }
            iVar25 = 0;
            if (((bStack_fb8 != 7) || ((byte)uStack_eac == 0)) || (iStack_eb0 != 2))
            goto LAB_10870c790;
            iVar25 = 0;
            lStack_988 = 1;
            cStack_980 = '\x01';
            uVar7 = 1;
          }
LAB_10870c93c:
          FUN_1088665d4(*plVar19,&ppuStack_cf0);
          func_0x00010871e320(*(undefined8 *)(unaff_x20 + 0x158));
          (*extraout_x8_03)();
          if (((param_5 == 0) || (iVar25 != 0)) ||
             (((func_0x00010871ef84(), !(bool)uVar7 && ((bStack_930 & 1) != 0)) ||
              ((bStack_b08 & 1) != 0)))) {
            if ((param_6 & 1) != 0) goto LAB_10870c9a8;
          }
          else if ((param_6 & 1) == 0) {
            func_0x00010871edd8();
            func_0x00010871e500();
          }
          func_0x00010871e87c();
          goto LAB_10870c9ac;
        }
      }
      if (iVar23 != 2) {
        FUN_1088665d4(*plVar19,&ppuStack_cf0);
        if ((param_5 != 0) && ((bVar20 & iVar23 == 0) != 0)) {
          if ((int)param_6 != 0) {
            func_0x00010871e87c();
            goto LAB_10870c9ac;
          }
          func_0x00010871edd8();
          func_0x00010871e500();
        }
      }
      goto LAB_10870c9a8;
    }
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4b8 = 0;
    ppuStack_4c0 = &PTR_FUN_110a609a8;
    uStack_4a0 = 0x173;
    func_0x000107c2884c(auStack_300,&ppuStack_4c0);
    func_0x00010871f850();
    func_0x00010871e500();
    func_0x000107c2882c(auStack_300);
    func_0x00010871e5e8();
    func_0x00010871ede4();
  }
LAB_10870c9ac:
  func_0x000107c288d0(&ppuStack_cf0);
  func_0x00010871e2c8();
  FUN_10871be98(auStack_ff0);
  FUN_10871be98(auStack_e48);
code_r0x000100671834:
  func_0x000107c288cc(auStack_908);
  return;
}



/* Entry: 10870cde4; end: 10870ce23;  */

undefined1 FUN_10870cde4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_3f8 [976];
  undefined1 uStack_28;
  
  func_0x00010871ed6c(auStack_3f8,param_1,param_2,param_3,1);
  func_0x00010871e76c();
  return uStack_28;
}



/* Entry: 10870ce24; end: 10870d19b;  */

void FUN_10870ce24(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  int iVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  int extraout_w8;
  int extraout_w8_00;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined **extraout_x9;
  undefined8 extraout_x9_00;
  undefined **extraout_x9_01;
  undefined8 *extraout_x10;
  long *unaff_x19;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_498 [88];
  undefined1 uStack_440;
  undefined1 auStack_438 [72];
  undefined1 auStack_3f0 [112];
  ulong uStack_380;
  ulong uStack_378;
  int iStack_210;
  int iStack_20c;
  undefined1 uStack_180;
  int iStack_148;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar11 = param_3;
  func_0x000107c32eb0();
  iVar5 = *(int *)(lVar11 + 0x48);
  lStack_68 = param_5;
  uStack_60 = param_2;
  uStack_58 = param_1;
  if (iVar5 == 4) {
    func_0x00010871e108(auStack_438);
    func_0x00010871e9bc();
    func_0x00010871f610();
    func_0x00010871f420(auStack_3f0);
    func_0x00010871e984(unaff_x19[0x17]);
    FUN_10870d19c(&lStack_68);
  }
  else if (iVar5 == 0x12) {
    func_0x00010871e108(auStack_438);
    uVar6 = uStack_378;
    for (uVar10 = uStack_380; uVar9 = uVar6, uVar10 != uVar6; uVar10 = uVar10 + 0x18) {
      func_0x00010871e9bc();
      ppuVar1 = extraout_x9_01;
      if (extraout_w8_00 != 0x12) {
        ppuVar1 = &PTR_PTR_11327c210;
      }
      ppuVar4 = &PTR_PTR_11326cb58;
      if ((undefined **)ppuVar1[4] != (undefined **)0x0) {
        ppuVar4 = (undefined **)ppuVar1[4];
      }
      uVar8 = uVar10;
      func_0x000107c287fc(uVar10,ppuVar4);
      uVar9 = uVar10;
      if ((uVar8 & 1) != 0) break;
    }
    if (uVar9 != uStack_378) {
      FUN_10867cba4(&uStack_380,uVar9);
      func_0x00010871e984(unaff_x19[0x17]);
    }
    FUN_10870d19c(&lStack_68);
  }
  else if (iVar5 == 8) {
    lVar11 = *(long *)(param_3 + 0x40);
    if (4 < *(uint *)(lVar11 + 0x24) || (1 << (ulong)(*(uint *)(lVar11 + 0x24) & 0x1f) & 0x16U) == 0
       ) {
      return;
    }
    if (*(int *)(lVar11 + 0x2c) != 4) {
      return;
    }
    func_0x00010871e108(auStack_438);
    iVar5 = *(int *)(lVar11 + 0x24);
    if (iVar5 == 4) {
      if ((*(int *)(lVar11 + 0x2c) != 4) ||
         (iStack_148 = *(int *)(lVar11 + 0x28), 2 < iStack_148 - 1U)) {
        iStack_148 = 0;
      }
    }
    else if (iVar5 == 2) {
      if ((*(int *)(lVar11 + 0x2c) != 4) ||
         (iStack_20c = *(int *)(lVar11 + 0x28), 2 < iStack_20c - 1U)) {
        iStack_20c = 0;
      }
    }
    else if ((iVar5 == 1) &&
            ((*(int *)(lVar11 + 0x2c) != 4 ||
             (iStack_210 = *(int *)(lVar11 + 0x28), 2 < iStack_210 - 1U)))) {
      iStack_210 = 0;
    }
    func_0x00010871e984(unaff_x19[0x17]);
    func_0x00010871e354();
    func_0x00010871e274();
  }
  else if (iVar5 == 0x10) {
    if (*(char *)(param_4 + 0x50) != '\x01') {
      return;
    }
    func_0x00010871e108(auStack_438);
    func_0x00010871f610(*(undefined4 *)(param_4 + 0x48));
    uStack_180 = extraout_x8_01 != 0;
    func_0x00010871e984(unaff_x19[0x17]);
    func_0x00010871e354();
    func_0x00010871e274();
  }
  else {
    if (iVar5 != 5) {
      return;
    }
    func_0x00010871e108(auStack_438);
    func_0x00010871e9bc();
    bVar7 = extraout_w8 == 5;
    ppuVar1 = extraout_x9;
    if (!bVar7) {
      ppuVar1 = &PTR_PTR_11327c3f8;
    }
    func_0x00010871ee0c(ppuVar1);
    puVar2 = extraout_x8;
    if (!bVar7) {
      puVar2 = extraout_x10;
    }
    for (lVar11 = (long)*(int *)(extraout_x8 + 1) << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
      func_0x000107c29ee0(auStack_498,*puVar2);
      func_0x000107c27ac4(&uStack_380,auStack_498);
      func_0x00010871e774();
      puVar2 = puVar2 + 1;
    }
    func_0x00010871e984(unaff_x19[0x17]);
    bVar7 = *(char *)(param_5 + 0x1a8) == '\x01';
    if (bVar7) {
      func_0x00010871e2f8(*(undefined8 *)(param_5 + 0x78));
      uVar3 = extraout_x9_00;
      if (!bVar7) {
        uVar3 = extraout_x8_00;
      }
      func_0x000107c29e7c(uVar3);
      auStack_498[0] = 0;
      uStack_440 = 0;
      func_0x0001008655c8(*(undefined8 *)(*unaff_x19 + 0x60));
      func_0x00010871ed2c();
      FUN_1086d0498(auStack_498);
    }
  }
  func_0x000107c288d0(auStack_438);
  return;
}



/* Entry: 10870d19c; end: 10870d23b;  */

void FUN_10870d19c(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  bool bVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auStack_a0 [88];
  undefined1 uStack_48;
  
  bVar3 = *(char *)(*param_1 + 0x1a8) == '\x01';
  if (bVar3) {
    plVar2 = (long *)param_1[2];
    func_0x00010871e2f8(*(undefined8 *)(*param_1 + 0x78));
    uVar1 = extraout_x9;
    if (!bVar3) {
      uVar1 = extraout_x8;
    }
    func_0x000107c29e7c(uVar1);
    auStack_a0[0] = 0;
    uStack_48 = 0;
    func_0x00010871ef78(*(undefined8 *)(*plVar2 + 0x60));
    func_0x00010871ed2c();
    FUN_1086d0498(auStack_a0);
  }
  return;
}



/* Entry: 10870d23c; end: 10870d2ab;  */

void FUN_10870d23c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (*(int *)(param_3 + 0x48) == 8) {
    func_0x00010871ed54(param_2);
    func_0x00010871e354();
    func_0x00010871e274();
  }
  else {
    if (*(int *)(param_3 + 0x48) != 0x10) {
      return;
    }
    func_0x00010871ed54(param_2);
    func_0x00010871e354();
    func_0x00010871e274();
  }
  func_0x00010871e598();
  return;
}



/* Entry: 10870d2ac; end: 10870d473;  */

void FUN_10870d2ac(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  int iVar15;
  code *pcVar16;
  byte bVar17;
  char extraout_w8;
  uint extraout_w8_00;
  uint uVar18;
  int extraout_w8_01;
  uint extraout_w8_02;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong uVar19;
  int extraout_w9;
  ulong extraout_x10;
  long unaff_x19;
  ulong uVar20;
  uint uVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined1 auStack_f98 [24];
  undefined1 auStack_f80 [24];
  undefined1 auStack_f68 [24];
  undefined1 auStack_f50 [40];
  undefined1 auStack_f28 [8];
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined4 uStack_f08;
  undefined1 auStack_d68 [96];
  byte bStack_d08;
  long lStack_cf0;
  undefined1 auStack_bb8 [24];
  undefined1 auStack_ba0 [24];
  char acStack_b88 [24];
  undefined1 auStack_b70 [40];
  undefined4 uStack_b48;
  undefined1 uStack_b44;
  undefined1 auStack_b40 [8];
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined4 uStack_b20;
  long alStack_b18 [4];
  ulong uStack_af8;
  uint uStack_ae8;
  ulong uStack_ae0;
  byte bStack_ad8;
  long lStack_a48;
  long lStack_a40;
  ulong uStack_a10;
  undefined1 auStack_968 [24];
  char cStack_950;
  ulong uStack_948;
  byte bStack_940;
  byte bStack_930;
  long lStack_8b8;
  char cStack_8b0;
  undefined4 uStack_830;
  undefined1 uStack_82c;
  uint uStack_800;
  uint uStack_7d8;
  long lStack_7b0;
  char cStack_7a8;
  long lStack_7a0;
  long lStack_798;
  byte bStack_758;
  undefined1 auStack_6e8 [88];
  undefined1 uStack_690;
  undefined8 uStack_688;
  undefined1 *puStack_680;
  undefined1 *puStack_678;
  undefined8 uStack_670;
  undefined1 auStack_668 [24];
  undefined1 uStack_650;
  undefined1 auStack_648 [8];
  undefined1 *puStack_640;
  code *pcStack_638;
  undefined1 uStack_5f0;
  undefined1 auStack_5e8 [328];
  undefined1 auStack_4a0 [984];
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [40];
  uint uStack_58;
  char cStack_54;
  char cStack_50;
  undefined8 uStack_48;
  
  lVar12 = param_4;
  func_0x00010871e07c();
  iVar15 = (int)lVar12;
  iVar9 = (int)*(undefined8 *)(param_1 + 0x108);
  uStack_48 = extraout_x8;
  func_0x0001087225b8();
  if (iVar9 != 0) {
    func_0x00010871ed3c(auStack_80);
    func_0x00010871e590(auStack_c8,auStack_80);
    func_0x00010871e9e8();
    func_0x00010871e274();
    func_0x000107c27a04(auStack_c8);
    func_0x00010871ed08();
  }
  FUN_10885edd8(auStack_c8,*(undefined8 *)(unaff_x19 + 0xb8),param_2);
  FUN_108663a10(auStack_80,auStack_c8);
  FUN_108656820(auStack_c8);
  uVar4 = 0;
  if ((cStack_50 == '\x01') &&
     (uVar4 = cStack_54 == '\x01' && uStack_58 == 2, cStack_54 != '\x01' || 1 < uStack_58)) {
    func_0x00010871e664();
    uStack_690 = (undefined1)*(undefined8 *)(unaff_x19 + 0xa8);
    func_0x00010871e320();
    (*extraout_x8_00)();
    func_0x00010871e248();
    auStack_648[0] = 0;
    uStack_5f0 = 0;
    auStack_668[0] = 0;
    uStack_650 = 0;
    puStack_678 = auStack_668;
    uStack_670 = 0;
    puStack_680 = auStack_648;
    uStack_688 = 0x100;
    iVar15 = 0xb;
    func_0x00010871e94c(auStack_5e8,param_2,auStack_c8);
    param_3 = auStack_5e8;
    func_0x00010871e7c4(auStack_4a0);
    func_0x00010871eb08();
    func_0x00010871e7bc();
    func_0x000107c279dc(auStack_668);
    FUN_1086d0498(auStack_648);
    func_0x000107c279dc(auStack_c8);
  }
  FUN_1086569a0(auStack_80);
  func_0x00010086526c(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010871e7bc();
  func_0x000107c279dc(auStack_668);
  FUN_1086d0498(auStack_648);
  func_0x000107c279dc(auStack_c8);
  FUN_1086569a0(auStack_80);
  func_0x00010871e260();
  pcVar16 = FUN_10870d474;
  func_0x000107c32ee4();
  puStack_640 = &stack0xfffffffffffffff0;
  pcStack_638 = pcVar16;
  func_0x00010871e67c();
  func_0x00010871e2b4();
  alStack_b18[2] = 0;
  alStack_b18[3] = 0;
  alStack_b18[0] = extraout_x8_01 + 0x10;
  alStack_b18[1] = 0;
  uStack_af8 = CONCAT44(uStack_af8._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)(char)param_3[0x38]);
  func_0x00010871e174(alStack_b18);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_6e8,param_4 + 0x118);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(alStack_b18);
  puVar1 = (undefined8 *)(param_4 + 0xb8);
  plVar10 = alStack_b18;
  func_0x00010871e48c(plVar10,puVar1,param_3);
  func_0x00010871f780();
  bVar7 = false;
  if (((((bool)uVar4) && (bVar7 = false, param_3[0x130] == '\x01')) &&
      (bVar7 = cStack_8b0 == '\x01' && *(long *)(param_3 + 0x128) == lStack_8b8,
      cStack_8b0 == '\x01' && *(long *)(param_3 + 0x128) < lStack_8b8)) ||
     ((func_0x00010871e52c(), bVar7 && extraout_w9 == 2 || (bVar7 = cStack_950 == '\x01', bVar7))))
  {
LAB_10870d550:
    *param_2 = 0;
    param_2[0x3d0] = 0;
    goto code_r0x000100671834;
  }
  func_0x00010871f768();
  if ((bVar7) && (FUN_10871e8d8(), (char)*plVar10 != '\x01' || uStack_800 == 2)) {
    *(undefined4 *)(param_3 + 0x58) = 6;
  }
  uVar8 = (uint)plVar10;
  if ((param_3[0x5e] & 1) == 0) {
LAB_10870d5d0:
    func_0x00010871e914();
    func_0x00010871f754();
    func_0x00010871efd8();
    uVar18 = (uint)(byte)param_3[0x38];
    uVar23 = uVar8;
  }
  else {
    uVar18 = (uint)(byte)param_3[0x38];
    if (param_3[0x5d] != '\x01') goto LAB_10870d5d0;
    if (((byte)param_3[0x38] - 2 < 0x13) &&
       (func_0x00010871ee3c(), uVar18 = extraout_w8_00, (extraout_x10 & 1) != 0)) {
      func_0x00010871e79c();
      goto LAB_10870d5d0;
    }
    uVar23 = 2;
  }
  if (uVar18 == 5) {
    bVar7 = param_3[0x5c] == '\f';
    if (((bVar7) && (func_0x00010871e508(*(undefined4 *)(param_3 + 0x58)), bVar7)) &&
       (lVar12 = lStack_798 - lStack_7a0, lStack_798 != lStack_7a0)) {
      plVar10 = alStack_b18;
      FUN_108708704(plVar10,*(undefined8 *)(param_3 + 0x50));
      uVar8 = (uint)plVar10;
      if (lStack_798 - lStack_7a0 != lVar12) {
        uVar23 = 0;
      }
      uVar18 = (uint)(byte)param_3[0x38];
      goto LAB_10870d63c;
    }
  }
  else {
LAB_10870d63c:
    bVar7 = uVar18 == 7 || uVar18 == 2;
    if (((uVar18 == 7 || uVar18 == 2) &&
        (func_0x00010871e694(*(undefined4 *)(param_3 + 0x58)), bVar7)) &&
       ((bVar7 = bStack_940 == 1 && uStack_948 == *(ulong *)(param_3 + 0x50),
        bStack_940 != 1 || uStack_948 != *(ulong *)(param_3 + 0x50) &&
        (func_0x00010871e520(param_3[0x5c]), !bVar7)))) goto LAB_10870d550;
  }
  func_0x00010871f4a0();
  uVar20 = uStack_a10;
  bVar17 = param_3[0x38];
  uVar18 = (uint)bVar17;
  uVar21 = *(uint *)(param_3 + 0x58);
  uVar14 = *(undefined8 *)(param_3 + 0x40);
  lVar12 = *(long *)(param_3 + 0x48);
  FUN_10871e8c0(alStack_b18,(long)(char)bVar17,uVar21,uVar14,lVar12);
  uVar4 = 0x13 < bVar17;
  bVar7 = bVar17 == 0x14;
  if ((0x14 < bVar17) || (func_0x00010871e164(1 << (ulong)(uVar18 & 0x1f)), bVar7)) {
    uVar19 = lVar12 / 1000;
    if ((uStack_af8 <= uVar19) &&
       ((((bVar7 = uVar21 == 0xe, 0xe < uVar21 ||
          (func_0x00010871e2ec(), uVar19 = extraout_x8_05, bVar7)) ||
         (bVar7 = uVar18 == 0x14, 0x14 < uVar18)) ||
        (func_0x00010871e144(), uVar19 = extraout_x8_06, bVar7)))) {
      uStack_af8 = uVar19;
      uStack_7d8 = (uint)((int)uVar14 != 2);
      uVar14 = *(undefined8 *)(param_3 + 0x138);
      FUN_10871c970();
      uVar23 = 0;
      uStack_830 = (int)uVar14;
      uStack_82c = (char)((ulong)uVar14 >> 0x20);
      uVar21 = *(uint *)(param_3 + 0x58);
    }
    uVar4 = 0xd < uVar21;
    bVar7 = uVar21 == 0xe;
    if (uVar21 < 0xf) {
      func_0x00010871e790(1 << (ulong)(uVar21 & 0x1f));
      uVar6 = 0;
      if (!bVar7) goto LAB_10870d6d4;
    }
    if ((bStack_940 & 1) == 0) {
      uVar19 = *(ulong *)(param_3 + 0x50);
    }
    else {
      uVar19 = *(ulong *)(param_3 + 0x50);
      uVar4 = uVar19 <= uStack_948;
      uVar6 = uStack_948 == uVar19;
      if (!(bool)uVar6 && (long)uVar19 <= (long)uStack_948) goto LAB_10870d6d4;
    }
    uStack_948 = uVar19;
    bStack_940 = 1;
    uVar4 = param_3[0xe0] != '\0';
    uVar6 = param_3[0xe0] == '\x01';
    if ((bool)uVar6) {
      func_0x00010883f80c(param_3 + 0x88,alStack_b18);
    }
    uVar23 = 0;
  }
  else {
    uVar6 = 0;
  }
LAB_10870d6d4:
  if (((uStack_ae0 == 0) && ((uVar20 & 0xfe) != 0)) && ((*(byte *)(param_4 + 0x250) & 1) == 0)) {
    uStack_b28 = 0;
    uStack_b30 = 0;
    func_0x00010871e048(*(undefined8 *)(param_4 + 0x118));
    uStack_b38 = 0;
    uStack_b20 = 0x1cf;
    func_0x00010871e378();
    (*extraout_x8_02)();
    func_0x000107c2882c(auStack_b40);
    uVar21 = *(uint *)(param_3 + 0x58);
    uVar20 = 1;
  }
  puVar11 = (undefined4 *)(long)(char)param_3[0x38];
  FUN_1087200ec(puVar11,uVar8,uVar21,param_3[0x5c],(uint)uVar20 & 0xff);
  uStack_b48 = SUB84(puVar11,0);
  uStack_b44 = (undefined1)((ulong)puVar11 >> 0x20);
  if (((ulong)puVar11 >> 0x20 & 1) == 0) {
    puVar22 = (undefined4 *)0x0;
  }
  else {
    func_0x00010871ecb0();
    puVar11 = &uStack_b48;
    func_0x00010871edd0();
    puVar22 = puVar11;
  }
  iVar9 = (int)puVar11;
  func_0x00010871f78c();
  uVar3 = uVar6;
  if ((bool)uVar4 && !(bool)uVar6) {
LAB_10870dad0:
    func_0x00010871f768();
    if (((bool)uVar4 && !(bool)uVar3) || (func_0x00010871df90(), (bool)uVar3)) {
      func_0x00010871e85c();
      uStack_f18 = 0;
      uStack_f10 = 0;
      func_0x00010871e048();
      uStack_f20 = 0;
      uStack_f08 = 400;
      func_0x00010871e550();
      func_0x000107c278b8(acStack_b88);
      func_0x00010871ec6c();
      func_0x00010871f6c4();
      func_0x000107c28824(auStack_f28,acStack_b88);
      func_0x00010871e544();
      func_0x000107c278b8(auStack_ba0);
      func_0x00010871e854();
      func_0x00010871e538();
      puVar13 = auStack_bb8;
      func_0x000107c278b8(puVar13);
      func_0x00010871e854();
      func_0x000107c2884c(auStack_b70,puVar13);
      func_0x00010871e938();
      func_0x00010871e5fc();
      func_0x000107c2882c(auStack_b70);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_bb8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ba0);
      iVar9 = (int)acStack_b88;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010871f3c8();
    }
  }
  else {
    func_0x00010871df48();
    uVar3 = 1;
    if ((bool)uVar6) goto LAB_10870dad0;
  }
  if (((ulong)puVar22 & 1) == 0) {
    bVar17 = param_3[0x38];
LAB_10870d8ac:
    uVar18 = uVar23;
    bVar7 = bVar17 == 0x14;
    if (((0x14 < bVar17) || (func_0x00010871dfc0(), bVar7)) && (uVar8 != 0)) {
      bVar7 = *(uint *)(param_3 + 0x58) == 0xe;
      uVar4 = bVar7;
      if (*(uint *)(param_3 + 0x58) < 0xf) {
        func_0x00010871e01c();
        uVar4 = true;
        if ((!bVar7) && (bVar7 = extraout_w8_02 == 0x14, uVar4 = bVar7, extraout_w8_02 < 0x15)) {
          func_0x00010871dfa8();
          uVar4 = true;
          if (!bVar7) goto LAB_10870d8bc;
        }
      }
      puVar13 = auStack_968;
      func_0x00010871ec5c(puVar13,param_3 + 0x18);
      if (((ulong)puVar13 & 1) != 0) {
        uVar18 = 0;
        goto LAB_10870da4c;
      }
    }
LAB_10870d8bc:
    uVar4 = 0;
    if (uVar18 == 2) {
      *param_2 = 0;
      param_2[0x3d0] = 0;
      goto code_r0x000100671834;
    }
  }
  else {
    bVar5 = 10 < uStack_ae0;
    bVar7 = uStack_ae0 == 0xb;
    if ((!bVar7) || (func_0x00010871f78c(), bVar5 && !bVar7 || extraout_w8_01 == 9)) {
      bVar7 = false;
    }
    else {
      uVar4 = bStack_940 == 1;
      if (((bool)uVar4) && (func_0x00010871eca0(), iVar9 != 0)) {
        func_0x00010871f330(*puVar1);
        func_0x00010871f324();
        func_0x00010871f3c0();
        func_0x00010871f710();
        if (((bool)uVar4) && (((bStack_d08 >> 2 & 1) != 0 && (*(int *)(lStack_cf0 + 0xa8) == 0)))) {
          uStack_f18 = 0;
          uStack_f10 = 0;
          func_0x00010871e048();
          uStack_f20 = 0;
          uStack_f08 = 399;
          func_0x00010871e574();
          func_0x000107c278b8(auStack_f68);
          func_0x00010871e568();
          func_0x000107c28824(auStack_f28,auStack_f68,
                              *(undefined8 *)(extraout_x8_03 + (ulong)uVar8 * 8));
          func_0x00010871e2e0();
          func_0x000107c278b8(auStack_f80);
          lVar12 = (long)(char)param_3[0x38];
          func_0x000108841d8c(auStack_f98,lVar12);
          func_0x00010871e994();
          func_0x000107c2884c(auStack_f50,lVar12);
          func_0x00010871ebb8();
          func_0x00010871e674();
          func_0x000107c2882c(auStack_f50);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f98);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f80);
          uVar18 = (uint)auStack_f68;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x00010871f3c8();
          func_0x00010871f530();
          uStack_ae0 = 0xd;
          uStack_ae8 = uVar18;
        }
        func_0x00010871f30c();
      }
      bVar7 = true;
    }
    if (((param_3[0x38] == '\x02') && ((bStack_940 & 1) != 0)) &&
       (uVar4 = uStack_948 == *(ulong *)(param_3 + 0x50), (bool)uVar4)) {
      func_0x00010871f330(*puVar1);
      func_0x00010871f324();
      func_0x00010871f3c0();
      func_0x00010871f710();
      if ((bool)uVar4) {
        func_0x00010871e370(auStack_d68,alStack_b18);
      }
      func_0x00010871f30c();
    }
    uVar6 = 1 < uStack_800;
    uVar4 = uStack_800 == 2;
    if (((((bool)uVar4) &&
         (uVar20 = uStack_ae0, FUN_10871fb04(uStack_ae0,uStack_ae8), (int)uVar20 != 0)) &&
        ((func_0x00010871e55c(param_3[0x38]), !(bool)uVar6 || (bool)uVar4 &&
         (((bStack_ad8 & 1) != 0 && ((long)uStack_a10 < 2)))))) &&
       ((uStack_ae8 == 2 || uStack_ae8 == 0x1d) || (uStack_ae8 & 0xfffffffb) == 1)) {
      uStack_ae0 = 1;
    }
    if (param_3[0x60] == '\x01') {
      uStack_a10 = (ulong)(byte)param_3[0x5f];
    }
    bVar5 = param_3[0x100] == '\x01';
    if (bVar5) {
      func_0x00010871f4f8(alStack_b18);
    }
    else {
      func_0x00010871f780();
      if (bVar5) {
        bVar7 = true;
      }
      if (!bVar7) {
        func_0x00010871e368(alStack_b18);
      }
    }
    if (param_3[0x80] == '\x01') {
      func_0x00010871f4e0(alStack_b18);
    }
    else if (lStack_a48 != lStack_a40) {
      func_0x00010871e360(alStack_b18);
    }
    bVar2 = param_3[0x144];
    if (bVar2 == 1 && *(int *)(param_3 + 0x140) == 1) {
      uStack_ae0 = 0x10;
    }
    if (((cStack_7a8 == '\x01') && (lStack_7b0 != 0)) && ((bVar2 & 1) == 0)) {
      cStack_7a8 = '\0';
    }
    uVar23 = 0;
    uVar18 = 0;
    bVar17 = param_3[0x38];
    if (((bVar17 != 7) || (bVar2 == 0)) || (uVar4 = *(int *)(param_3 + 0x140) == 2, !(bool)uVar4))
    goto LAB_10870d8ac;
    func_0x00010871f844();
    cStack_7a8 = extraout_w8;
  }
LAB_10870da4c:
  FUN_1088665d4(*puVar1,alStack_b18);
  func_0x00010871e320(*(undefined8 *)(param_4 + 0x158));
  (*extraout_x8_04)();
  if (((iVar15 != 0) && (uVar18 == 0)) &&
     (((func_0x00010871ef84(), (bool)uVar4 || ((bStack_758 & 1) == 0)) && ((bStack_930 & 1) == 0))))
  {
    func_0x00010871edd8();
    func_0x00010871e500();
  }
  FUN_10871bca8(param_2,alStack_b18);
code_r0x000100671834:
  func_0x000107c288d0(alStack_b18);
  func_0x00010871e2c8();
  return;
}



/* Entry: 10870d474; end: 10870ddf3;  */

void FUN_10870d474(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  byte bVar15;
  char extraout_w8;
  uint extraout_w8_00;
  uint uVar16;
  int extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar17;
  int extraout_w9;
  ulong extraout_x10;
  long unaff_x20;
  undefined1 *unaff_x21;
  ulong uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  undefined1 auStack_8d8 [24];
  undefined1 auStack_8c0 [40];
  undefined1 auStack_898 [8];
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined4 uStack_878;
  undefined1 auStack_6d8 [96];
  byte bStack_678;
  long lStack_660;
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [24];
  char acStack_4f8 [24];
  undefined1 auStack_4e0 [40];
  undefined4 uStack_4b8;
  undefined1 uStack_4b4;
  undefined1 auStack_4b0 [8];
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  long alStack_488 [4];
  ulong uStack_468;
  uint uStack_458;
  ulong uStack_450;
  byte bStack_448;
  long lStack_3b8;
  long lStack_3b0;
  ulong uStack_380;
  undefined1 auStack_2d8 [24];
  char cStack_2c0;
  ulong uStack_2b8;
  byte bStack_2b0;
  byte bStack_2a0;
  long lStack_228;
  char cStack_220;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  uint uStack_170;
  uint uStack_148;
  long lStack_120;
  char cStack_118;
  long lStack_110;
  long lStack_108;
  byte bStack_c8;
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4();
  func_0x00010871e67c();
  func_0x00010871e2b4();
  alStack_488[2] = 0;
  alStack_488[3] = 0;
  alStack_488[0] = extraout_x8 + 0x10;
  alStack_488[1] = 0;
  uStack_468 = CONCAT44(uStack_468._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)*(char *)(param_3 + 0x38));
  func_0x00010871e174(alStack_488);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_58,unaff_x20 + 0x118);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(alStack_488);
  puVar1 = (undefined8 *)(unaff_x20 + 0xb8);
  plVar10 = alStack_488;
  func_0x00010871e48c(plVar10,puVar1,param_3);
  func_0x00010871f780();
  bVar7 = false;
  if (((((bool)in_ZR) && (bVar7 = false, *(char *)(param_3 + 0x130) == '\x01')) &&
      (bVar7 = cStack_220 == '\x01' && *(long *)(param_3 + 0x128) == lStack_228,
      cStack_220 == '\x01' && *(long *)(param_3 + 0x128) < lStack_228)) ||
     ((func_0x00010871e52c(), bVar7 && extraout_w9 == 2 || (bVar7 = cStack_2c0 == '\x01', bVar7))))
  {
LAB_10870d550:
    *unaff_x21 = 0;
    unaff_x21[0x3d0] = 0;
    goto code_r0x000100671834;
  }
  func_0x00010871f768();
  if ((bVar7) && (FUN_10871e8d8(), (char)*plVar10 != '\x01' || uStack_170 == 2)) {
    *(undefined4 *)(param_3 + 0x58) = 6;
  }
  uVar8 = (uint)plVar10;
  if ((*(byte *)(param_3 + 0x5e) & 1) == 0) {
LAB_10870d5d0:
    func_0x00010871e914();
    func_0x00010871f754();
    func_0x00010871efd8();
    uVar16 = (uint)*(byte *)(param_3 + 0x38);
    uVar21 = uVar8;
  }
  else {
    uVar16 = (uint)*(byte *)(param_3 + 0x38);
    if (*(char *)(param_3 + 0x5d) != '\x01') goto LAB_10870d5d0;
    if ((*(byte *)(param_3 + 0x38) - 2 < 0x13) &&
       (func_0x00010871ee3c(), uVar16 = extraout_w8_00, (extraout_x10 & 1) != 0)) {
      func_0x00010871e79c();
      goto LAB_10870d5d0;
    }
    uVar21 = 2;
  }
  if (uVar16 == 5) {
    bVar7 = *(char *)(param_3 + 0x5c) == '\f';
    if (((bVar7) && (func_0x00010871e508(*(undefined4 *)(param_3 + 0x58)), bVar7)) &&
       (lVar12 = lStack_108 - lStack_110, lStack_108 != lStack_110)) {
      plVar10 = alStack_488;
      FUN_108708704(plVar10,*(undefined8 *)(param_3 + 0x50));
      uVar8 = (uint)plVar10;
      if (lStack_108 - lStack_110 != lVar12) {
        uVar21 = 0;
      }
      uVar16 = (uint)*(byte *)(param_3 + 0x38);
      goto LAB_10870d63c;
    }
  }
  else {
LAB_10870d63c:
    bVar7 = uVar16 == 7 || uVar16 == 2;
    if (((uVar16 == 7 || uVar16 == 2) &&
        (func_0x00010871e694(*(undefined4 *)(param_3 + 0x58)), bVar7)) &&
       ((bVar5 = uStack_2b8 == *(ulong *)(param_3 + 0x50), bVar7 = bStack_2b0 == 1 && bVar5,
        bStack_2b0 != 1 || !bVar5 && (func_0x00010871e520(*(undefined1 *)(param_3 + 0x5c)), !bVar7))
       )) goto LAB_10870d550;
  }
  func_0x00010871f4a0();
  uVar18 = uStack_380;
  bVar15 = *(byte *)(param_3 + 0x38);
  uVar16 = (uint)bVar15;
  uVar19 = *(uint *)(param_3 + 0x58);
  uVar14 = *(undefined8 *)(param_3 + 0x40);
  lVar12 = *(long *)(param_3 + 0x48);
  FUN_10871e8c0(alStack_488,(long)(char)bVar15,uVar19,uVar14,lVar12);
  uVar4 = 0x13 < bVar15;
  bVar7 = bVar15 == 0x14;
  if ((0x14 < bVar15) || (func_0x00010871e164(1 << (ulong)(uVar16 & 0x1f)), bVar7)) {
    uVar17 = lVar12 / 1000;
    if ((uStack_468 <= uVar17) &&
       ((((bVar7 = uVar19 == 0xe, 0xe < uVar19 ||
          (func_0x00010871e2ec(), uVar17 = extraout_x8_03, bVar7)) ||
         (bVar7 = uVar16 == 0x14, 0x14 < uVar16)) ||
        (func_0x00010871e144(), uVar17 = extraout_x8_04, bVar7)))) {
      uStack_148 = (uint)((int)uVar14 != 2);
      uVar14 = *(undefined8 *)(param_3 + 0x138);
      uStack_468 = uVar17;
      FUN_10871c970();
      uVar21 = 0;
      uStack_1a0 = (undefined4)uVar14;
      uStack_19c = (undefined1)((ulong)uVar14 >> 0x20);
      uVar19 = *(uint *)(param_3 + 0x58);
    }
    uVar4 = 0xd < uVar19;
    bVar7 = uVar19 == 0xe;
    if (uVar19 < 0xf) {
      func_0x00010871e790(1 << (ulong)(uVar19 & 0x1f));
      uVar6 = 0;
      if (!bVar7) goto LAB_10870d6d4;
    }
    if ((bStack_2b0 & 1) == 0) {
      uVar17 = *(ulong *)(param_3 + 0x50);
    }
    else {
      uVar17 = *(ulong *)(param_3 + 0x50);
      uVar4 = uVar17 <= uStack_2b8;
      uVar6 = uStack_2b8 == uVar17;
      if (!(bool)uVar6 && (long)uVar17 <= (long)uStack_2b8) goto LAB_10870d6d4;
    }
    bStack_2b0 = 1;
    uVar4 = *(char *)(param_3 + 0xe0) != '\0';
    uVar6 = *(char *)(param_3 + 0xe0) == '\x01';
    uStack_2b8 = uVar17;
    if ((bool)uVar6) {
      func_0x00010883f80c(param_3 + 0x88,alStack_488);
    }
    uVar21 = 0;
  }
  else {
    uVar6 = 0;
  }
LAB_10870d6d4:
  if (((uStack_450 == 0) && ((uVar18 & 0xfe) != 0)) && ((*(byte *)(unaff_x20 + 0x250) & 1) == 0)) {
    uStack_498 = 0;
    uStack_4a0 = 0;
    func_0x00010871e048(*(undefined8 *)(unaff_x20 + 0x118));
    uStack_4a8 = 0;
    uStack_490 = 0x1cf;
    func_0x00010871e378();
    (*extraout_x8_00)();
    func_0x000107c2882c(auStack_4b0);
    uVar19 = *(uint *)(param_3 + 0x58);
    uVar18 = 1;
  }
  puVar11 = (undefined4 *)(long)*(char *)(param_3 + 0x38);
  FUN_1087200ec(puVar11,uVar8,uVar19,*(undefined1 *)(param_3 + 0x5c),(uint)uVar18 & 0xff);
  uStack_4b8 = SUB84(puVar11,0);
  uStack_4b4 = (undefined1)((ulong)puVar11 >> 0x20);
  if (((ulong)puVar11 >> 0x20 & 1) == 0) {
    puVar20 = (undefined4 *)0x0;
  }
  else {
    func_0x00010871ecb0();
    puVar11 = &uStack_4b8;
    func_0x00010871edd0();
    puVar20 = puVar11;
  }
  iVar9 = (int)puVar11;
  func_0x00010871f78c();
  uVar3 = uVar6;
  if ((bool)uVar4 && !(bool)uVar6) {
LAB_10870dad0:
    func_0x00010871f768();
    if (((bool)uVar4 && !(bool)uVar3) || (func_0x00010871df90(), (bool)uVar3)) {
      func_0x00010871e85c();
      uStack_888 = 0;
      uStack_880 = 0;
      func_0x00010871e048();
      uStack_890 = 0;
      uStack_878 = 400;
      func_0x00010871e550();
      func_0x000107c278b8(acStack_4f8);
      func_0x00010871ec6c();
      func_0x00010871f6c4();
      func_0x000107c28824(auStack_898,acStack_4f8);
      func_0x00010871e544();
      func_0x000107c278b8(auStack_510);
      func_0x00010871e854();
      func_0x00010871e538();
      puVar13 = auStack_528;
      func_0x000107c278b8(puVar13);
      func_0x00010871e854();
      func_0x000107c2884c(auStack_4e0,puVar13);
      func_0x00010871e938();
      func_0x00010871e5fc();
      func_0x000107c2882c(auStack_4e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_528);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_510);
      iVar9 = (int)acStack_4f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010871f3c8();
    }
  }
  else {
    func_0x00010871df48();
    uVar3 = 1;
    if ((bool)uVar6) goto LAB_10870dad0;
  }
  if (((ulong)puVar20 & 1) == 0) {
    bVar15 = *(byte *)(param_3 + 0x38);
LAB_10870d8ac:
    uVar16 = uVar21;
    bVar7 = bVar15 == 0x14;
    if (((0x14 < bVar15) || (func_0x00010871dfc0(), bVar7)) && (uVar8 != 0)) {
      bVar7 = *(uint *)(param_3 + 0x58) == 0xe;
      uVar4 = bVar7;
      if (*(uint *)(param_3 + 0x58) < 0xf) {
        func_0x00010871e01c();
        uVar4 = true;
        if ((!bVar7) && (bVar7 = extraout_w8_02 == 0x14, uVar4 = bVar7, extraout_w8_02 < 0x15)) {
          func_0x00010871dfa8();
          uVar4 = true;
          if (!bVar7) goto LAB_10870d8bc;
        }
      }
      puVar13 = auStack_2d8;
      func_0x00010871ec5c(puVar13,param_3 + 0x18);
      if (((ulong)puVar13 & 1) != 0) {
        uVar16 = 0;
        goto LAB_10870da4c;
      }
    }
LAB_10870d8bc:
    uVar4 = 0;
    if (uVar16 == 2) {
      *unaff_x21 = 0;
      unaff_x21[0x3d0] = 0;
      goto code_r0x000100671834;
    }
  }
  else {
    bVar5 = 10 < uStack_450;
    bVar7 = uStack_450 == 0xb;
    if ((!bVar7) || (func_0x00010871f78c(), bVar5 && !bVar7 || extraout_w8_01 == 9)) {
      bVar7 = false;
    }
    else {
      uVar4 = bStack_2b0 == 1;
      if (((bool)uVar4) && (func_0x00010871eca0(), iVar9 != 0)) {
        func_0x00010871f330(*puVar1);
        func_0x00010871f324();
        func_0x00010871f3c0();
        func_0x00010871f710();
        if (((bool)uVar4) && (((bStack_678 >> 2 & 1) != 0 && (*(int *)(lStack_660 + 0xa8) == 0)))) {
          uStack_888 = 0;
          uStack_880 = 0;
          func_0x00010871e048();
          uStack_890 = 0;
          uStack_878 = 399;
          func_0x00010871e574();
          func_0x000107c278b8(auStack_8d8);
          func_0x00010871e568();
          func_0x000107c28824(auStack_898,auStack_8d8,
                              *(undefined8 *)(extraout_x8_01 + (ulong)uVar8 * 8));
          func_0x00010871e2e0();
          func_0x000107c278b8(auStack_8f0);
          lVar12 = (long)*(char *)(param_3 + 0x38);
          func_0x000108841d8c(auStack_908,lVar12);
          func_0x00010871e994();
          func_0x000107c2884c(auStack_8c0,lVar12);
          func_0x00010871ebb8();
          func_0x00010871e674();
          func_0x000107c2882c(auStack_8c0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8f0);
          uVar16 = (uint)auStack_8d8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x00010871f3c8();
          func_0x00010871f530();
          uStack_450 = 0xd;
          uStack_458 = uVar16;
        }
        func_0x00010871f30c();
      }
      bVar7 = true;
    }
    if (((*(char *)(param_3 + 0x38) == '\x02') && ((bStack_2b0 & 1) != 0)) &&
       (uVar4 = uStack_2b8 == *(ulong *)(param_3 + 0x50), (bool)uVar4)) {
      func_0x00010871f330(*puVar1);
      func_0x00010871f324();
      func_0x00010871f3c0();
      func_0x00010871f710();
      if ((bool)uVar4) {
        func_0x00010871e370(auStack_6d8,alStack_488);
      }
      func_0x00010871f30c();
    }
    uVar6 = 1 < uStack_170;
    uVar4 = uStack_170 == 2;
    if (((((bool)uVar4) &&
         (uVar18 = uStack_450, FUN_10871fb04(uStack_450,uStack_458), (int)uVar18 != 0)) &&
        ((func_0x00010871e55c(*(undefined1 *)(param_3 + 0x38)), !(bool)uVar6 || (bool)uVar4 &&
         (((bStack_448 & 1) != 0 && ((long)uStack_380 < 2)))))) &&
       ((uStack_458 == 2 || uStack_458 == 0x1d) || (uStack_458 & 0xfffffffb) == 1)) {
      uStack_450 = 1;
    }
    if (*(char *)(param_3 + 0x60) == '\x01') {
      uStack_380 = (ulong)*(byte *)(param_3 + 0x5f);
    }
    bVar5 = *(char *)(param_3 + 0x100) == '\x01';
    if (bVar5) {
      func_0x00010871f4f8(alStack_488);
    }
    else {
      func_0x00010871f780();
      if (bVar5) {
        bVar7 = true;
      }
      if (!bVar7) {
        func_0x00010871e368(alStack_488);
      }
    }
    if (*(char *)(param_3 + 0x80) == '\x01') {
      func_0x00010871f4e0(alStack_488);
    }
    else if (lStack_3b8 != lStack_3b0) {
      func_0x00010871e360(alStack_488);
    }
    bVar2 = *(byte *)(param_3 + 0x144);
    if (bVar2 == 1 && *(int *)(param_3 + 0x140) == 1) {
      uStack_450 = 0x10;
    }
    if (((cStack_118 == '\x01') && (lStack_120 != 0)) && ((bVar2 & 1) == 0)) {
      cStack_118 = '\0';
    }
    uVar21 = 0;
    uVar16 = 0;
    bVar15 = *(byte *)(param_3 + 0x38);
    if (((bVar15 != 7) || (bVar2 == 0)) || (uVar4 = *(int *)(param_3 + 0x140) == 2, !(bool)uVar4))
    goto LAB_10870d8ac;
    func_0x00010871f844();
    cStack_118 = extraout_w8;
  }
LAB_10870da4c:
  FUN_1088665d4(*puVar1,alStack_488);
  func_0x00010871e320(*(undefined8 *)(unaff_x20 + 0x158));
  (*extraout_x8_02)();
  if (((param_4 != 0) && (uVar16 == 0)) &&
     (((func_0x00010871ef84(), (bool)uVar4 || ((bStack_c8 & 1) == 0)) && ((bStack_2a0 & 1) == 0))))
  {
    func_0x00010871edd8();
    func_0x00010871e500();
  }
  FUN_10871bca8(unaff_x21,alStack_488);
code_r0x000100671834:
  func_0x000107c288d0(alStack_488);
  func_0x00010871e2c8();
  return;
}



/* Entry: 10870ddf4; end: 10870df5b;  */

void FUN_10870ddf4(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined8 in_x7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined1 auStack_bd0 [96];
  undefined1 auStack_b70 [360];
  undefined1 auStack_a08 [984];
  undefined1 uStack_630;
  undefined8 uStack_628;
  undefined1 *puStack_620;
  undefined1 *puStack_618;
  undefined8 uStack_610;
  undefined1 auStack_608 [40];
  undefined1 *puStack_5e0;
  undefined1 uStack_5b0;
  undefined1 auStack_5a8 [32];
  undefined1 auStack_588 [328];
  undefined1 auStack_440 [984];
  undefined1 auStack_68 [24];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010871e07c();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x108);
  uStack_48 = extraout_x8;
  FUN_1087225a8();
  if (iVar1 != 0) {
    func_0x00010871ed3c(auStack_68);
    func_0x00010871e590(auStack_5a8,auStack_68);
    func_0x00010871e9e8();
    func_0x00010871e274();
    func_0x000107c27a04(auStack_5a8);
    func_0x000107c27914(auStack_68);
  }
  func_0x00010871e664(auStack_5a8);
  uStack_630 = (undefined1)*(undefined8 *)(unaff_x19 + 0xa8);
  func_0x00010871e320();
  (*extraout_x8_00)();
  func_0x00010871e248();
  auStack_608[0] = 0;
  uStack_5b0 = 0;
  auStack_68[0] = 0;
  uStack_50 = 0;
  puStack_618 = auStack_68;
  uStack_610 = 0;
  puStack_620 = auStack_608;
  uStack_628 = 0x100;
  func_0x00010871e94c(auStack_588,param_2,auStack_5a8,0xc);
  func_0x00010871e7c4(auStack_440);
  func_0x00010871eb08();
  func_0x00010871e7bc();
  func_0x000107c279dc(auStack_68);
  FUN_1086d0498(auStack_608);
  func_0x000107c279dc(auStack_5a8);
  func_0x00010086526c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27a04(auStack_5a8);
    puVar2 = auStack_68;
    func_0x000107c27914();
    func_0x00010871e260();
    func_0x000107c32ee4(FUN_10870df5c);
    puStack_5e0 = &stack0xfffffffffffffff0;
    FUN_1087225d8(*(undefined8 *)(puVar2 + 0x108));
    func_0x000107c28078(param_2,puVar2 + 0x90);
    func_0x00010871e664(auStack_b70);
    puVar2 = auStack_bd0;
    FUN_10871bed0(puVar2,in_x7);
    func_0x00010871e248();
    func_0x00010871ee1c(puVar2);
    FUN_10870b0c4();
    func_0x00010871e7c4(auStack_a08);
    func_0x000107c288cc(auStack_a08);
    func_0x00010871e5d0();
    func_0x00010871e5bc();
    func_0x00010871e5f4();
    func_0x00010871e5d8();
    return;
  }
  return;
}



/* Entry: 10870df5c; end: 10870e06b;  */

void FUN_10870df5c(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 in_x7;
  undefined1 auStack_5a0 [96];
  undefined1 auStack_540 [360];
  undefined1 auStack_3d8 [984];
  
  func_0x000107c32ee4();
  FUN_1087225d8(*(undefined8 *)(param_1 + 0x108));
  func_0x000107c28078(param_2,param_1 + 0x90);
  func_0x00010871e664(auStack_540);
  puVar1 = auStack_5a0;
  FUN_10871bed0(puVar1,in_x7);
  func_0x00010871e248();
  func_0x00010871ee1c(puVar1);
  FUN_10870b0c4();
  func_0x00010871e7c4(auStack_3d8);
  func_0x000107c288cc(auStack_3d8);
  func_0x00010871e5d0();
  func_0x00010871e5bc();
  func_0x00010871e5f4();
  func_0x00010871e5d8();
  return;
}



/* Entry: 10870e06c; end: 10870e0e7;  */

void FUN_10870e06c(long param_1,long *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x9;
  undefined1 auStack_890 [120];
  undefined1 auStack_818 [328];
  undefined1 auStack_6d0 [984];
  undefined1 auStack_2f8 [96];
  undefined1 auStack_298 [328];
  undefined1 auStack_150 [24];
  undefined1 uStack_138;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 ***pppuStack_d0;
  code *pcStack_c8;
  long alStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 *puStack_70;
  code *pcStack_68;
  long alStack_58 [3];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  plVar5 = param_2;
  func_0x00010871e07c();
  puVar3 = *(undefined1 **)(param_1 + 0x108);
  uStack_28 = extraout_x8;
  func_0x0001087225c8();
  if ((int)puVar3 != 0) {
    puVar3 = auStack_40;
    func_0x00010871e65c();
    func_0x00010871e3ec();
    func_0x00010871e9e8();
    plVar5 = alStack_58;
    func_0x00010871e274();
    func_0x00010871e4d4();
    func_0x00010871e5e0();
  }
  func_0x00010086526c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010871e29c();
    func_0x00010871e5e0();
    func_0x00010871e260();
    pcStack_68 = FUN_10870e0e8;
    plVar7 = plVar5;
    plStack_80 = param_2;
    puStack_70 = (undefined8 *)&stack0xfffffffffffffff0;
    func_0x00010871e07c();
    puVar3 = *(undefined1 **)(puVar3 + 0x108);
    uStack_88 = extraout_x8_00;
    FUN_1087225d8();
    if ((int)puVar3 != 0) {
      puVar3 = auStack_a0;
      func_0x00010871e65c();
      func_0x00010871e3ec();
      func_0x00010871e9e8();
      plVar7 = alStack_b8;
      func_0x00010871e274();
      func_0x00010871e4d4();
      func_0x00010871e5e0();
    }
    func_0x00010086526c(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010871e29c();
      func_0x00010871e5e0();
      func_0x00010871e260();
      pcStack_c8 = FUN_10870e164;
      plStack_e0 = plVar5;
      pppuStack_d0 = (undefined8 ***)&puStack_70;
      func_0x00010871e07c();
      iVar2 = (int)*(undefined8 *)(puVar3 + 0x108);
      uStack_e8 = extraout_x8_01;
      func_0x000108722638();
      if (iVar2 != 0) {
        func_0x00010871e65c(auStack_100);
        func_0x00010871e3ec();
        func_0x00010871e9e8();
        func_0x00010871e274();
        func_0x00010871e4d4();
        func_0x00010871e5e0();
      }
      func_0x00010086526c(uStack_e8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010871e29c();
        func_0x00010871e5e0();
        func_0x00010871e260();
        pcVar8 = FUN_10870e1e0;
        func_0x000107c32ee4();
        if (((*(uint *)(param_3 + 0x10) >> 2 & 1) != 0) &&
           ((*(uint *)(param_3 + 0x10) >> 3 & 1) != 0)) {
          lVar4 = param_3;
          pppuStack_d0 = &pppuStack_d0;
          pcStack_c8 = pcVar8;
          func_0x00010871e348();
          func_0x000107c29e78();
          func_0x00010871e120(*(undefined8 *)(param_3 + 0x18));
          iVar2 = (int)plVar7 + 0x78;
          func_0x000107c287fc();
          if (iVar2 == 0) {
            plVar5 = plVar7 + 0xf;
            FUN_1086a30e8(plVar5,param_3);
            func_0x00010871edac(auStack_150);
            FUN_10869ac88();
            if ((0x7ff7fff7U >> (ulong)((uint)lVar4 & 0x1f) & 1) == 0) {
              func_0x00010871e85c();
            }
            func_0x00010871ed7c(auStack_6d0);
            uVar6 = *(undefined8 *)(param_3 + 0x28);
            uVar1 = *(long *)(param_3 + 0x30) == 0;
            FUN_10870e4b8(uVar6);
            FUN_1087209c8(lVar4,plVar5,uStack_138,1,uVar6);
            func_0x000107c32f08();
            func_0x00010871f1f0(auStack_2f8,param_3);
            FUN_10870b0c4(auStack_298);
            FUN_1086d0498(auStack_2f8);
            func_0x000107c279dc(auStack_6d0);
            func_0x00010871f43c(plVar7,auStack_298);
            FUN_10871bdd4(auStack_818,auStack_298);
            FUN_10870d474(auStack_6d0,plVar7,auStack_818,1);
            func_0x00010871e7bc();
            func_0x000107c287dc(auStack_890,param_3);
            FUN_10870e4f0(plVar7,auStack_6d0,auStack_890);
            func_0x000107c2a5a4(auStack_890);
            func_0x00010871e2f8(*(undefined8 *)(param_3 + 0x28));
            lVar4 = extraout_x9;
            if (!(bool)uVar1) {
              lVar4 = extraout_x8_02;
            }
            if (*(int *)(lVar4 + 0x38) != 0) {
              func_0x000107c32ec8(plVar7[0x2b]);
              (*extraout_x8_03)();
            }
            func_0x00010871eb08();
            FUN_10871be98(auStack_298);
            func_0x000107c279dc(auStack_150);
          }
          else {
            func_0x00010872267c(plVar7[0x21]);
            func_0x000107c32f08();
            func_0x00010871f1f0(auStack_6d0,param_3);
            (**(code **)(*plVar7 + 0x60))(plVar7);
            FUN_1086d0498(auStack_6d0);
          }
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 10870e0e8; end: 10870e163;  */

void FUN_10870e0e8(long param_1,long *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x9;
  undefined1 auStack_830 [120];
  undefined1 auStack_7b8 [328];
  undefined1 auStack_670 [984];
  undefined1 auStack_298 [96];
  undefined1 auStack_238 [328];
  undefined1 auStack_f0 [24];
  undefined1 uStack_d8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  long alStack_58 [3];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  plVar7 = param_2;
  func_0x00010871e07c();
  puVar3 = *(undefined1 **)(param_1 + 0x108);
  uStack_28 = extraout_x8;
  FUN_1087225d8();
  if ((int)puVar3 != 0) {
    puVar3 = auStack_40;
    func_0x00010871e65c();
    func_0x00010871e3ec();
    func_0x00010871e9e8();
    plVar7 = alStack_58;
    func_0x00010871e274();
    func_0x00010871e4d4();
    func_0x00010871e5e0();
  }
  func_0x00010086526c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010871e29c();
    func_0x00010871e5e0();
    func_0x00010871e260();
    pcStack_68 = FUN_10870e164;
    plStack_80 = param_2;
    pppuStack_70 = (undefined8 ***)&stack0xfffffffffffffff0;
    func_0x00010871e07c();
    iVar2 = (int)*(undefined8 *)(puVar3 + 0x108);
    uStack_88 = extraout_x8_00;
    func_0x000108722638();
    if (iVar2 != 0) {
      func_0x00010871e65c(auStack_a0);
      func_0x00010871e3ec();
      func_0x00010871e9e8();
      func_0x00010871e274();
      func_0x00010871e4d4();
      func_0x00010871e5e0();
    }
    func_0x00010086526c(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010871e29c();
      func_0x00010871e5e0();
      func_0x00010871e260();
      pcVar8 = FUN_10870e1e0;
      func_0x000107c32ee4();
      if (((*(uint *)(param_3 + 0x10) >> 2 & 1) != 0) && ((*(uint *)(param_3 + 0x10) >> 3 & 1) != 0)
         ) {
        lVar4 = param_3;
        pppuStack_70 = &pppuStack_70;
        pcStack_68 = pcVar8;
        func_0x00010871e348();
        func_0x000107c29e78();
        func_0x00010871e120(*(undefined8 *)(param_3 + 0x18));
        iVar2 = (int)plVar7 + 0x78;
        func_0x000107c287fc();
        if (iVar2 == 0) {
          plVar5 = plVar7 + 0xf;
          FUN_1086a30e8(plVar5,param_3);
          func_0x00010871edac(auStack_f0);
          FUN_10869ac88();
          if ((0x7ff7fff7U >> (ulong)((uint)lVar4 & 0x1f) & 1) == 0) {
            func_0x00010871e85c();
          }
          func_0x00010871ed7c(auStack_670);
          uVar6 = *(undefined8 *)(param_3 + 0x28);
          uVar1 = *(long *)(param_3 + 0x30) == 0;
          FUN_10870e4b8(uVar6);
          FUN_1087209c8(lVar4,plVar5,uStack_d8,1,uVar6);
          func_0x000107c32f08();
          func_0x00010871f1f0(auStack_298,param_3);
          FUN_10870b0c4(auStack_238);
          FUN_1086d0498(auStack_298);
          func_0x000107c279dc(auStack_670);
          func_0x00010871f43c(plVar7,auStack_238);
          FUN_10871bdd4(auStack_7b8,auStack_238);
          FUN_10870d474(auStack_670,plVar7,auStack_7b8,1);
          func_0x00010871e7bc();
          func_0x000107c287dc(auStack_830,param_3);
          FUN_10870e4f0(plVar7,auStack_670,auStack_830);
          func_0x000107c2a5a4(auStack_830);
          func_0x00010871e2f8(*(undefined8 *)(param_3 + 0x28));
          lVar4 = extraout_x9;
          if (!(bool)uVar1) {
            lVar4 = extraout_x8_01;
          }
          if (*(int *)(lVar4 + 0x38) != 0) {
            func_0x000107c32ec8(plVar7[0x2b]);
            (*extraout_x8_02)();
          }
          func_0x00010871eb08();
          FUN_10871be98(auStack_238);
          func_0x000107c279dc(auStack_f0);
        }
        else {
          func_0x00010872267c(plVar7[0x21]);
          func_0x000107c32f08();
          func_0x00010871f1f0(auStack_670,param_3);
          (**(code **)(*plVar7 + 0x60))(plVar7);
          FUN_1086d0498(auStack_670);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10870e164; end: 10870e1df;  */

void FUN_10870e164(long param_1,long *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x9;
  undefined1 auStack_7d0 [120];
  undefined1 auStack_758 [328];
  undefined1 auStack_610 [984];
  undefined1 auStack_238 [96];
  undefined1 auStack_1d8 [328];
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x00010871e07c();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x108);
  uStack_28 = extraout_x8;
  func_0x000108722638();
  if (iVar2 != 0) {
    func_0x00010871e65c(auStack_40);
    func_0x00010871e3ec();
    func_0x00010871e9e8();
    func_0x00010871e274();
    func_0x00010871e4d4();
    func_0x00010871e5e0();
  }
  func_0x00010086526c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010871e29c();
  func_0x00010871e5e0();
  func_0x00010871e260();
  func_0x000107c32ee4();
  if (((*(uint *)(param_3 + 0x10) >> 2 & 1) != 0) && ((*(uint *)(param_3 + 0x10) >> 3 & 1) != 0)) {
    lVar3 = param_3;
    func_0x00010871e348();
    func_0x000107c29e78();
    func_0x00010871e120(*(undefined8 *)(param_3 + 0x18));
    iVar2 = (int)param_2 + 0x78;
    func_0x000107c287fc();
    if (iVar2 == 0) {
      plVar4 = param_2 + 0xf;
      FUN_1086a30e8(plVar4,param_3);
      func_0x00010871edac(auStack_90);
      FUN_10869ac88();
      if ((0x7ff7fff7U >> (ulong)((uint)lVar3 & 0x1f) & 1) == 0) {
        func_0x00010871e85c();
      }
      func_0x00010871ed7c(auStack_610);
      uVar5 = *(undefined8 *)(param_3 + 0x28);
      uVar1 = *(long *)(param_3 + 0x30) == 0;
      FUN_10870e4b8(uVar5);
      FUN_1087209c8(lVar3,plVar4,uStack_78,1,uVar5);
      func_0x000107c32f08();
      func_0x00010871f1f0(auStack_238,param_3);
      FUN_10870b0c4(auStack_1d8);
      FUN_1086d0498(auStack_238);
      func_0x000107c279dc(auStack_610);
      func_0x00010871f43c(param_2,auStack_1d8);
      FUN_10871bdd4(auStack_758,auStack_1d8);
      FUN_10870d474(auStack_610,param_2,auStack_758,1);
      func_0x00010871e7bc();
      func_0x000107c287dc(auStack_7d0,param_3);
      FUN_10870e4f0(param_2,auStack_610,auStack_7d0);
      func_0x000107c2a5a4(auStack_7d0);
      func_0x00010871e2f8(*(undefined8 *)(param_3 + 0x28));
      lVar3 = extraout_x9;
      if (!(bool)uVar1) {
        lVar3 = extraout_x8_00;
      }
      if (*(int *)(lVar3 + 0x38) != 0) {
        func_0x000107c32ec8(param_2[0x2b]);
        (*extraout_x8_01)();
      }
      func_0x00010871eb08();
      FUN_10871be98(auStack_1d8);
      func_0x000107c279dc(auStack_90);
    }
    else {
      func_0x00010872267c(param_2[0x21]);
      func_0x000107c32f08();
      func_0x00010871f1f0(auStack_610,param_3);
      (**(code **)(*param_2 + 0x60))(param_2);
      FUN_1086d0498(auStack_610);
    }
  }
  return;
}



/* Entry: 10870e1e0; end: 10870e4b7;  */

void FUN_10870e1e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x9;
  long *unaff_x20;
  undefined1 auStack_770 [120];
  undefined1 auStack_6f8 [328];
  undefined1 auStack_5b0 [984];
  undefined1 auStack_1d8 [96];
  undefined1 auStack_178 [328];
  undefined1 auStack_30 [24];
  undefined1 uStack_18;
  
  func_0x000107c32ee4();
  if (((*(uint *)(param_3 + 0x10) >> 2 & 1) != 0) && ((*(uint *)(param_3 + 0x10) >> 3 & 1) != 0)) {
    lVar3 = param_3;
    func_0x00010871e348();
    func_0x000107c29e78();
    func_0x00010871e120(*(undefined8 *)(param_3 + 0x18));
    iVar2 = (int)unaff_x20 + 0x78;
    func_0x000107c287fc();
    if (iVar2 == 0) {
      plVar4 = unaff_x20 + 0xf;
      FUN_1086a30e8(plVar4,param_3);
      func_0x00010871edac(auStack_30);
      FUN_10869ac88();
      if ((0x7ff7fff7U >> (ulong)((uint)lVar3 & 0x1f) & 1) == 0) {
        func_0x00010871e85c();
      }
      func_0x00010871ed7c(auStack_5b0);
      uVar5 = *(undefined8 *)(param_3 + 0x28);
      uVar1 = *(long *)(param_3 + 0x30) == 0;
      FUN_10870e4b8(uVar5);
      FUN_1087209c8(lVar3,plVar4,uStack_18,1,uVar5);
      func_0x000107c32f08();
      func_0x00010871f1f0(auStack_1d8,param_3);
      FUN_10870b0c4(auStack_178);
      FUN_1086d0498(auStack_1d8);
      func_0x000107c279dc(auStack_5b0);
      func_0x00010871f43c();
      FUN_10871bdd4(auStack_6f8,auStack_178);
      FUN_10870d474(auStack_5b0);
      func_0x00010871e7bc();
      func_0x000107c287dc(auStack_770,param_3);
      FUN_10870e4f0();
      func_0x000107c2a5a4(auStack_770);
      func_0x00010871e2f8(*(undefined8 *)(param_3 + 0x28));
      lVar3 = extraout_x9;
      if (!(bool)uVar1) {
        lVar3 = extraout_x8;
      }
      if (*(int *)(lVar3 + 0x38) != 0) {
        func_0x000107c32ec8(unaff_x20[0x2b]);
        (*extraout_x8_00)();
      }
      func_0x00010871eb08();
      FUN_10871be98(auStack_178);
      func_0x000107c279dc(auStack_30);
    }
    else {
      func_0x00010872267c(unaff_x20[0x21]);
      func_0x000107c32f08();
      func_0x00010871f1f0(auStack_5b0,param_3);
      (**(code **)(*unaff_x20 + 0x60))();
      FUN_1086d0498(auStack_5b0);
    }
  }
  return;
}



/* Entry: 10870e4b8; end: 10870e4ef;  */

bool FUN_10870e4b8(undefined **param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_PTR_113280c30;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  if (*(int *)(ppuVar1 + 0x18) == 0xd) {
    return *(int *)(ppuVar1[0x17] + 0x10) == 1;
  }
  return false;
}



/* Entry: 10870e4f0; end: 10870e7a3;  */

void FUN_10870e4f0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar5;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 *puStack_1a0;
  code *pcStack_180;
  undefined1 auStack_178 [40];
  code *pcStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [120];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_68;
  
  func_0x00010086515c();
  uVar3 = *(long *)(param_3 + 0x60) == 1;
  uStack_68 = extraout_x8;
  if (((((bool)uVar3) && ((*(byte *)(param_2 + 0x3d0) & 1) != 0)) && (*(int *)(param_2 + 0x68) == 0)
      ) && (*(long *)(param_1 + 0x128) != 0)) {
    func_0x00010871f7f4(*(undefined8 *)(param_3 + 0x18));
    func_0x000107c29ee0(auStack_1c8);
    ppuStack_148 = *(undefined ***)(param_1 + 0x38);
    pcStack_150 = *(code **)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x38) != 0) {
      do {
        func_0x000107c32e9c();
      } while (extraout_w10 != 0);
    }
    func_0x00010871ed3c(&uStack_140);
    func_0x000107c28974(auStack_128,param_3);
    puVar4 = (undefined8 *)(param_1 + 0x188);
    func_0x000107c29650();
    uStack_a8 = puVar4[1];
    uStack_b0 = *puVar4;
    if (puVar4[1] != 0) {
      do {
        func_0x000107c32e9c();
      } while (extraout_w10_00 != 0);
    }
    pcStack_98 = FUN_10871d29c;
    ppuStack_90 = &PTR_FUN_110a68d80;
    puVar4 = (undefined8 *)0xb0;
    __Znwm();
    ppuVar2 = ppuStack_148;
    pcVar1 = pcStack_150;
    pcStack_150 = (code *)0x0;
    ppuStack_148 = (undefined **)0x0;
    puVar4[1] = ppuVar2;
    *puVar4 = pcVar1;
    puVar4[3] = uStack_138;
    puVar4[2] = uStack_140;
    puVar4[4] = uStack_130;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    func_0x000107c28974(puVar4 + 5,auStack_128);
    puVar4[0x15] = uStack_a8;
    puVar4[0x14] = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    puStack_88 = puVar4;
    FUN_108719b08(&pcStack_150);
    uStack_1e8 = *(undefined8 *)(param_1 + 0x38);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x38) != 0) {
      do {
        func_0x000107c32e9c();
      } while (extraout_w10_01 != 0);
    }
    puVar4 = auStack_1e0;
    func_0x000107c27994(puVar4,auStack_1c8);
    pcStack_150 = FUN_10871de44;
    ppuStack_148 = &PTR_FUN_110a68d98;
    func_0x00010871eb80();
    puVar4[1] = uStack_1e8;
    *puVar4 = uStack_1f0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x000107c27994(puVar4 + 2,auStack_1e0);
    func_0x000108719b40(&uStack_1f0);
    plVar5 = *(long **)(param_1 + 0x128);
    pcStack_180 = pcStack_98;
    (*(code *)ppuStack_90[2])(auStack_178,&ppuStack_90);
    pcStack_1b0 = FUN_10871de44;
    ppuStack_1a8 = &PTR_FUN_110a68d98;
    uStack_140 = 0;
    puStack_1a0 = puVar4;
    (**(code **)(*plVar5 + 0x10))(plVar5,auStack_1c8,&pcStack_180,&pcStack_1b0);
    func_0x00010871eb60();
    func_0x00010871eb50();
    func_0x00010871eb40();
    func_0x00010871eb28();
    func_0x000107c27914(auStack_1c8);
  }
  func_0x00010086526c(uStack_68);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010871eb60();
    func_0x00010871eb50();
    func_0x00010871eb40();
    func_0x00010871eb28();
    func_0x000107c27914(auStack_1c8);
    do {
      func_0x00010871e260();
    } while( true );
  }
  return;
}



/* Entry: 10870e7a4; end: 10870ea4b;  */

void FUN_10870e7a4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 *param_6)

{
  undefined **ppuVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined1 uVar8;
  undefined1 *extraout_x8;
  long extraout_x8_00;
  undefined **extraout_x8_01;
  code *extraout_x8_02;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_368 [328];
  undefined1 auStack_220 [32];
  undefined1 uStack_200;
  undefined1 uStack_1a8;
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [280];
  undefined *puStack_68;
  byte bStack_60;
  undefined1 auStack_38 [24];
  undefined1 auStack_20 [32];
  
  func_0x000107c32ee4();
  if (((*(byte *)(param_5 + 0x10) >> 2 & 1) == 0) || ((*(byte *)(param_4 + 0x10) & 1) == 0)) {
    *extraout_x8 = 0;
    extraout_x8[0x3d0] = 0;
    return;
  }
  uVar5 = param_5;
  func_0x000107c29e78();
  iVar4 = (int)uVar5;
  func_0x00010871f674(*(undefined8 *)(param_4 + 0x18));
  cVar2 = *(char *)(extraout_x8_00 + 0x40);
  ppuVar9 = &PTR_PTR_11326cb58;
  func_0x00010871e3dc(*(undefined8 *)(extraout_x8_00 + 0x18));
  uVar8 = 8;
  if (iVar4 == 0) {
    uVar8 = 9;
  }
  ppuVar6 = &PTR_PTR_113284480;
  if (*(undefined ***)(param_4 + 0x18) != (undefined **)0x0) {
    ppuVar6 = *(undefined ***)(param_4 + 0x18);
  }
  FUN_108708600(ppuVar6,param_5);
  uVar3 = *(undefined ***)(param_5 + 0x18) == (undefined **)0x0;
  ppuVar1 = ppuVar9;
  if (!(bool)uVar3) {
    ppuVar1 = *(undefined ***)(param_5 + 0x18);
  }
  func_0x000107c29ee0(auStack_20,ppuVar1);
  func_0x00010871f674(*(undefined8 *)(param_4 + 0x18));
  func_0x00010871eeac();
  if (!(bool)uVar3) {
    ppuVar9 = extraout_x8_01;
  }
  func_0x000107c29ee0(auStack_38,ppuVar9);
  if (*(char *)(param_6 + 2) == '\x01') {
    uVar10 = *param_6;
    lVar7 = param_6[1];
  }
  else {
    lVar7 = param_1[0x15];
    func_0x00010871e320(lVar7);
    (*extraout_x8_02)();
    uVar10 = 2;
  }
  FUN_10868ca64(auStack_1a0,auStack_38);
  uVar11 = *(undefined8 *)(param_5 + 0x60);
  uStack_200 = 0;
  uStack_1a8 = 0;
  FUN_10868ca64(auStack_220,auStack_20);
  FUN_10870b0c4(auStack_180,param_2,auStack_1a0,uVar8,uVar10,lVar7,uVar11,uVar5 & 0xffffffff,cVar2);
  func_0x000107c279dc(auStack_220);
  func_0x00010871eb00();
  func_0x000107c279dc(auStack_1a0);
  if ((iVar4 != 0) &&
     ((**(code **)(*param_1 + 0x18))(param_1,param_2,*(undefined8 *)(param_4 + 0x28)),
     (int)ppuVar6 != 0)) {
    iVar4 = (int)param_1 + 0x188;
    FUN_10870b0a8();
    if (iVar4 != 0) {
      *extraout_x8 = 0;
      extraout_x8[0x3d0] = 0;
      goto LAB_10870e9cc;
    }
  }
  if (cVar2 == '\x10') {
    ppuVar9 = &PTR_PTR_113284480;
    if (*(undefined ***)(param_4 + 0x18) != (undefined **)0x0) {
      ppuVar9 = *(undefined ***)(param_4 + 0x18);
    }
    if (*(int *)(ppuVar9 + 8) == 0x10) {
      ppuVar9 = (undefined **)ppuVar9[7];
    }
    else {
      ppuVar9 = &PTR_PTR_113287020;
    }
    puStack_68 = ppuVar9[4];
    if ((bStack_60 & 1) == 0) {
      bStack_60 = 1;
    }
  }
  FUN_10871bdd4(auStack_368,auStack_180);
  func_0x00010871ef78();
  FUN_10870d474();
  func_0x00010871e734();
LAB_10870e9cc:
  FUN_10871be98(auStack_180);
  func_0x000107c27914(auStack_38);
  func_0x00010871ed08();
  return;
}



/* Entry: 10870ea4c; end: 10870f90b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10870ea4c(undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined8 param_7,undefined **param_8)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined **ppuVar15;
  undefined ***pppuVar16;
  char *pcVar17;
  long lVar18;
  uint uVar19;
  undefined **ppuVar20;
  uint extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint extraout_w8_07;
  int extraout_w8_08;
  int extraout_w8_09;
  uint extraout_w8_10;
  uint extraout_w8_11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  undefined **extraout_x8_05;
  code *extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong uVar21;
  undefined8 *extraout_x8_09;
  undefined8 extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  undefined **ppuVar22;
  long extraout_x8_17;
  long extraout_x8_18;
  code *extraout_x8_19;
  long extraout_x8_20;
  code *extraout_x8_21;
  ulong extraout_x8_22;
  ulong extraout_x8_23;
  undefined **extraout_x8_24;
  code *extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  code *extraout_x8_30;
  long extraout_x8_31;
  code *extraout_x8_32;
  ulong extraout_x8_33;
  ulong extraout_x8_34;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  long extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 extraout_x10;
  undefined1 *extraout_x11;
  undefined1 *extraout_x11_00;
  long unaff_x19;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  uint uVar26;
  undefined *puVar27;
  char *pcVar28;
  uint uVar29;
  uint uVar30;
  undefined **ppuVar31;
  byte *pbVar32;
  int iVar33;
  int iVar34;
  undefined **ppuVar35;
  undefined8 uVar36;
  undefined8 unaff_x29;
  undefined **unaff_x30;
  undefined8 in_stack_00000040;
  byte bStack0000000000000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined1 auStack_1ef8 [24];
  undefined1 auStack_1ee0 [32];
  byte bStack_1ec0;
  undefined8 uStack_1eb8;
  long lStack_1eb0;
  undefined **ppuStack_1ea8;
  uint uStack_1ea0;
  char cStack_1e9c;
  ushort uStack_1e9b;
  byte bStack_1e99;
  char cStack_1e98;
  char cStack_1e78;
  undefined1 auStack_1e70 [88];
  char cStack_1e18;
  long lStack_1dd0;
  byte bStack_1dc8;
  undefined8 uStack_1dc0;
  int iStack_1db8;
  undefined4 uStack_1db4;
  undefined1 auStack_1db0 [88];
  undefined1 uStack_1d58;
  undefined1 auStack_1d50 [328];
  undefined1 auStack_1c08 [24];
  undefined1 auStack_1bf0 [24];
  char acStack_1bd8 [24];
  undefined1 auStack_1bc0 [40];
  undefined1 auStack_1b98 [24];
  undefined1 uStack_1b80;
  undefined4 uStack_1b78;
  undefined1 auStack_19d8 [96];
  byte bStack_1978;
  long lStack_1960;
  char cStack_1830;
  undefined1 auStack_1828 [24];
  undefined1 auStack_1810 [24];
  char acStack_17f8 [24];
  undefined1 auStack_17e0 [40];
  undefined4 uStack_17b8;
  undefined1 uStack_17b4;
  undefined **ppuStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined4 uStack_1790;
  undefined **ppuStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  ulong uStack_1768;
  uint uStack_1758;
  char *pcStack_1750;
  byte bStack_1748;
  long lStack_16b8;
  long lStack_16b0;
  ulong uStack_1680;
  char cStack_15c0;
  undefined **ppuStack_15b8;
  byte bStack_15b0;
  byte bStack_15a0;
  long lStack_1528;
  char cStack_1520;
  undefined4 uStack_14a0;
  undefined1 uStack_149c;
  uint uStack_1470;
  uint uStack_1448;
  long lStack_1420;
  char cStack_1418;
  long lStack_1410;
  long lStack_1408;
  byte bStack_13c8;
  undefined1 auStack_1358 [88];
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined **ppuStack_12f0;
  undefined1 *puStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d0;
  uint uStack_12c4;
  uint uStack_12c0;
  uint uStack_12bc;
  undefined1 auStack_12b8 [8];
  undefined8 *puStack_12b0;
  char cStack_12a0;
  undefined *apuStack_1298 [11];
  undefined1 uStack_1240;
  undefined *apuStack_1238 [4];
  undefined *apuStack_1218 [7];
  byte bStack_11e0;
  undefined **ppuStack_11d8;
  undefined **ppuStack_11d0;
  undefined **ppuStack_11c8;
  uint uStack_11c0;
  byte bStack_11bc;
  ushort uStack_11bb;
  byte bStack_11b9;
  char cStack_11b8;
  char cStack_1198;
  undefined1 auStack_1190 [88];
  char cStack_1138;
  char cStack_1118;
  long lStack_10f0;
  byte bStack_10e8;
  undefined8 uStack_10e0;
  int iStack_10d8;
  undefined4 uStack_10d4;
  undefined *puStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  ulong uStack_10b8;
  ulong uStack_10b0;
  uint uStack_10a0;
  byte *pbStack_1098;
  byte bStack_1090;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1010;
  undefined **ppuStack_1008;
  undefined8 *puStack_1000;
  code *pcStack_ff8;
  undefined1 uStack_ff0;
  ulong uStack_fe8;
  long *plStack_fe0;
  undefined1 *puStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  uint uStack_fc0;
  uint uStack_fbc;
  undefined1 auStack_fb8 [56];
  byte bStack_f80;
  undefined8 uStack_f78;
  long lStack_f70;
  undefined *puStack_f68;
  uint uStack_f60;
  char cStack_f5c;
  byte bStack_f5b;
  byte bStack_f59;
  char cStack_f58;
  char cStack_f38;
  undefined1 auStack_f30 [40];
  char cStack_f08;
  undefined **ppuStack_f00;
  byte bStack_ef8;
  byte bStack_ee8;
  char cStack_ed8;
  long lStack_e90;
  byte bStack_e88;
  undefined8 uStack_e80;
  int iStack_e78;
  undefined4 uStack_e74;
  undefined1 uStack_e70;
  undefined7 uStack_e6f;
  char cStack_e68;
  undefined1 uStack_e18;
  undefined1 auStack_e10 [40];
  undefined4 uStack_de8;
  undefined1 uStack_de4;
  uint uStack_db8;
  undefined1 auStack_da8 [24];
  uint uStack_d90;
  long lStack_d68;
  char cStack_d60;
  long lStack_d58;
  long lStack_d50;
  byte bStack_d10;
  undefined *apuStack_ce8 [4];
  undefined1 auStack_cc8 [32];
  undefined *apuStack_ca8 [3];
  undefined1 uStack_c90;
  char acStack_c88 [24];
  undefined1 auStack_c70 [24];
  undefined1 auStack_c58 [24];
  undefined1 auStack_c40 [40];
  undefined **ppuStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined4 uStack_bf8;
  undefined1 auStack_a58 [96];
  byte bStack_9f8;
  long lStack_9e0;
  byte bStack_918;
  undefined1 auStack_910 [96];
  char cStack_8b0;
  undefined1 auStack_8a8 [24];
  undefined1 auStack_890 [24];
  char acStack_878 [24];
  undefined1 auStack_860 [40];
  undefined4 uStack_838;
  undefined1 uStack_834;
  undefined1 auStack_830 [8];
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined4 uStack_810;
  long lStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  ulong uStack_7e8;
  uint uStack_7d8;
  char *pcStack_7d0;
  byte bStack_7c8;
  long lStack_738;
  long lStack_730;
  ulong uStack_700;
  char cStack_640;
  undefined *puStack_638;
  byte bStack_630;
  byte bStack_620;
  long lStack_5a8;
  char cStack_5a0;
  undefined *apuStack_538 [3];
  undefined4 uStack_520;
  undefined1 uStack_51c;
  byte abStack_508 [24];
  uint auStack_4f0 [10];
  uint auStack_4c8 [10];
  long lStack_4a0;
  char cStack_498;
  long lStack_490;
  long lStack_488;
  byte bStack_468;
  long lStack_450;
  byte bStack_448;
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [40];
  undefined1 auStack_3d8 [80];
  char acStack_388 [104];
  char cStack_320;
  undefined1 auStack_318 [24];
  byte abStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined *apuStack_2d0 [5];
  undefined4 uStack_2a8;
  undefined1 uStack_2a4;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [40];
  undefined1 auStack_220 [80];
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_10;
  
  lVar13 = _bStack0000000000000048;
  func_0x000107c32ee4();
  in_stack_00000050 = unaff_x29;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010086515c();
  uStack_10 = extraout_x8_10;
  if ((((*(byte *)(param_6 + 2) >> 2 & 1) == 0) || (((ulong)param_5[2] & 1) == 0)) ||
     (in_ZR = 1, *(int *)(param_5[3] + 0x40) == 0x12)) {
LAB_10870eaa4:
    uVar10 = (uint)param_6;
    func_0x00010086526c(uStack_10);
    ppuVar31 = param_4;
    ppuVar22 = param_5;
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    ppuVar31 = param_4;
    ppuVar22 = param_5;
    ppuVar20 = param_6;
    func_0x000107c32eb0();
    ppuVar35 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(extraout_x8_11 + 0x18) != (undefined **)0x0) {
      ppuVar35 = *(undefined ***)(extraout_x8_11 + 0x18);
    }
    param_1 = param_1 + 0xf;
    func_0x000107c287fc(param_1,ppuVar35);
    uVar10 = (uint)ppuVar20;
    if ((int)param_1 == 0) {
      ppuVar35 = param_6;
      func_0x000107c29e78();
      func_0x00010871e7e4();
      if (((uint)ppuVar35 & 0xfffffffb) == 1) {
        func_0x00010871e5c4(param_6[6]);
        uVar10 = (uint)ppuVar35;
        iVar34 = *(int *)(extraout_x8_13 + 0x20);
        param_2 = &PTR_PTR_11326cb58;
        if ((undefined **)param_6[3] != (undefined **)0x0) {
          param_2 = (undefined **)param_6[3];
        }
        func_0x00010871e9ac();
        puStack_10d0 = (undefined *)((ulong)puStack_10d0 & 0xffffffffffffff00);
        uStack_10b8 = uStack_10b8 & 0xffffffffffffff00;
        func_0x00010871e7e4();
        if ((*(byte *)(extraout_x8_14 + 0x10) & 1) != 0) {
          func_0x000107c29ee0(apuStack_ce8,*(undefined8 *)(extraout_x8_14 + 0x18));
          param_2 = apuStack_ce8;
          FUN_10869026c(&puStack_10d0);
          func_0x000107c27914(apuStack_ce8);
        }
        in_ZR = iVar34 == 1;
        param_5 = ppuVar22;
        if ((iVar34 < 1 & uVar10) == 0) {
          func_0x00010871e7e4();
          param_8 = (undefined **)(*(long *)(extraout_x8_15 + 0x30) * 1000);
          ppuVar20 = (undefined **)(ulong)*(uint *)(extraout_x8_15 + 0x40);
          uStack_1300 = CONCAT71(uStack_1300._1_7_,1);
          func_0x00010871ef0c(auStack_910);
          unaff_x30 = (undefined **)0x1;
          FUN_10870f90c();
          func_0x000107c288cc(auStack_910);
          ppuVar31 = param_4;
          param_5 = param_6;
        }
        param_6 = ppuVar20;
        param_4 = ppuVar31;
        param_1 = &puStack_10d0;
        func_0x000107c279dc(param_1);
        goto LAB_10870eaa4;
      }
      uVar1 = *(undefined4 *)(extraout_x8_12 + 0x40);
      if ((uint)ppuVar35 == 0xe) {
        func_0x00010871f3f8(&puStack_10d0,*(undefined8 *)(unaff_x19 + 0xb8));
        FUN_10869148c(apuStack_ce8,&puStack_10d0);
        func_0x000107c288ec(&puStack_10d0);
        ppuVar31 = param_4;
        FUN_1087104b8(param_4,0xe,apuStack_ce8);
        func_0x00010871e7e4();
        uVar7 = *(int *)(extraout_x8_16 + 0x40) == 8;
        if ((bool)uVar7) {
          ppuVar22 = *(undefined ***)(extraout_x8_16 + 0x38);
        }
        else {
          ppuVar22 = &PTR_PTR_113284460;
        }
        func_0x00010871e5c4(ppuVar22[3]);
        func_0x00010871e2f8(*(undefined8 *)(extraout_x8_17 + 0x28));
        iVar34 = extraout_w9_01;
        if (!(bool)uVar7) {
          iVar34 = extraout_w8_04;
        }
        FUN_10884262c();
        bVar8 = iVar34 == 1;
        if (iVar34 == 2) {
          uStack_12bc = (uint)*(undefined8 *)(unaff_x19 + 0xd8);
          FUN_10883a000();
        }
        else {
          uStack_12bc = 0;
        }
        func_0x00010871f108();
        if ((int)ppuVar31 != 2 || iVar34 != 2) goto LAB_10870ed28;
        uVar23 = 0;
        bVar9 = true;
        ppuVar31 = (undefined **)0x2;
      }
      else {
        uStack_12bc = 0;
        bVar8 = false;
        ppuVar31 = (undefined **)0x2;
LAB_10870ed28:
        bVar9 = false;
        uVar23 = 0x100;
      }
      FUN_10870b048(apuStack_1238,param_6);
      apuStack_1298[0]._0_1_ = 0;
      uStack_1240 = 0;
      auStack_12b8[0] = 0;
      cStack_12a0 = '\0';
      puStack_12e8 = auStack_12b8;
      uStack_12e0 = 0;
      ppuStack_12f0 = apuStack_1298;
      uStack_1300 = CONCAT71(uStack_1300._1_7_,(char)uVar1);
      param_5 = (undefined **)0x2;
      param_6 = (undefined **)0x0;
      unaff_x30 = param_4;
      uStack_12f8 = uVar23;
      FUN_10870b0c4(apuStack_1218);
      func_0x00010871e2b4();
      uStack_10c0 = 0;
      uStack_10b8 = 0;
      puStack_10d0 = (undefined *)(extraout_x8_18 + 0x10);
      uStack_10c8 = 0;
      uStack_10b0 = CONCAT44(uStack_10b0._4_4_,0x1ce);
      func_0x00010871e2e0();
      func_0x000107c278b8(auStack_260);
      func_0x000108841d8c(auStack_278,(long)(char)bStack_11e0);
      ppuVar22 = &puStack_10d0;
      func_0x000107c28820(ppuVar22,auStack_260,auStack_278);
      func_0x000107c2884c(auStack_248,ppuVar22);
      func_0x00010871e090(auStack_220,unaff_x19 + 0x118,auStack_248);
      func_0x000107c2882c(auStack_248);
      func_0x00010871f098();
      func_0x00010871f02c();
      func_0x000107c2882c(&puStack_10d0);
      ppuVar22 = (undefined **)(unaff_x19 + 0xb8);
      ppuVar20 = &puStack_10d0;
      param_3 = apuStack_1218;
      param_2 = ppuVar22;
      func_0x00010871e48c(ppuVar20,ppuVar22,param_3);
      bVar5 = bStack_11e0 == 0xf;
      if ((((bVar5) && ((bStack_10e8 & 1) != 0)) &&
          (bVar5 = cStack_e68 == '\x01' && lStack_10f0 == CONCAT71(uStack_e6f,uStack_e70),
          cStack_e68 == '\x01' && lStack_10f0 < CONCAT71(uStack_e6f,uStack_e70))) ||
         ((func_0x00010871e52c(), bVar5 && extraout_w9_02 == 2 || (cStack_f08 == '\x01')))) {
LAB_10870ee88:
        apuStack_ce8[0]._0_1_ = 0;
        bStack_918 = 0;
      }
      else {
        bVar5 = false;
        if (uStack_11c0 == 0x1e) {
          func_0x00010871e968();
          bVar5 = *(char *)ppuVar20 != '\x01' || uStack_db8 == 2;
          if (*(char *)ppuVar20 != '\x01' || uStack_db8 == 2) {
            uStack_11c0 = 6;
          }
        }
        uVar10 = (uint)ppuVar20;
        func_0x00010871e628(bStack_11e0);
        if ((bVar5) && ((uStack_11bb & 1) != 0)) {
          uVar29 = 2;
          bVar5 = extraout_w8_05 == 0x14;
          if ((extraout_w8_05 < 0x15) && (func_0x00010871df48(), !bVar5)) goto LAB_10870ef68;
        }
        else {
LAB_10870ef68:
          param_5 = (undefined **)(ulong)uStack_11c0;
          ppuVar31 = ppuStack_11c8;
          unaff_x30 = ppuStack_11d8;
          ppuVar35 = ppuStack_11d0;
          func_0x00010871e0ac(apuStack_1218);
          func_0x00010871e494(CONCAT44(uStack_10d4,iStack_10d8));
          param_3 = &puStack_10d0;
          ppuVar20 = ppuVar22;
          uStack_1300 = extraout_x9_00;
          uStack_12f8 = extraout_x10;
          FUN_1087087c8();
          uVar29 = (uint)ppuVar20;
          param_6 = (undefined **)(ulong)bStack_11e0;
          uVar10 = uVar29;
        }
        bVar6 = ((uint)param_6 & 0xff) == 5;
        bVar5 = bVar6 && bStack_11bc == 0xc;
        if (((bVar6 && bStack_11bc == 0xc) && (func_0x00010871e508(uStack_11c0), bVar5)) &&
           (lVar13 = lStack_d50 - lStack_d58, lStack_d50 != lStack_d58)) {
          uVar10 = (uint)&puStack_10d0;
          param_2 = ppuStack_11c8;
          FUN_108708704();
          if (lStack_d50 - lStack_d58 != lVar13) {
            uVar29 = 0;
          }
        }
        if (bVar9) {
          if ((ppuStack_f00 != param_4 || ((bStack_ef8 ^ 0xff) & 1) != 0) || bVar8) {
LAB_10870f144:
            if (uVar29 != 2) {
              param_2 = &puStack_10d0;
              FUN_1088665d4(*ppuVar22);
            }
            goto LAB_10870ee88;
          }
        }
        else if (bVar8) goto LAB_10870f144;
        bVar8 = bStack_11e0 == 7 || bStack_11e0 == 2;
        uVar7 = bVar8;
        if (bStack_11e0 == 7 || bStack_11e0 == 2) {
          func_0x00010871e694(uStack_11c0);
          uVar7 = 0;
          if (((bVar8) &&
              (uVar7 = bStack_ef8 == 1 && ppuStack_f00 == ppuStack_11c8,
              bStack_ef8 != 1 || ppuStack_f00 != ppuStack_11c8)) &&
             (func_0x00010871e520(bStack_11bc), !(bool)uVar7)) goto LAB_10870ee88;
        }
        func_0x00010871f488();
        uVar11 = uStack_fc8;
        uVar30 = uStack_11c0;
        ppuVar20 = ppuStack_11d0;
        ppuVar31 = ppuStack_11d8;
        bVar2 = bStack_11e0;
        uVar26 = (uint)uStack_fc8;
        uVar19 = (uint)bStack_11e0;
        param_3 = (undefined **)(ulong)uStack_11c0;
        uStack_12c0 = uVar10;
        FUN_10871e8e8(&puStack_10d0,(long)(char)bStack_11e0,param_3,ppuStack_11d8,ppuStack_11d0);
        uVar10 = 0;
        if ((bool)uVar7) {
          uVar10 = uVar29;
        }
        bVar8 = bVar2 == 0x14;
        if ((0x14 < bVar2) || (func_0x00010871e164(1 << (ulong)(uVar19 & 0x1f)), bVar8)) {
          uVar21 = (long)ppuVar20 / 1000;
          if ((uStack_10b0 <= uVar21) &&
             ((((bVar8 = uVar30 == 0xe, 0xe < uVar30 ||
                (func_0x00010871e2ec(), uVar21 = extraout_x8_22, bVar8)) ||
               (bVar8 = uVar19 == 0x14, 0x14 < uVar19)) ||
              (func_0x00010871e144(), uVar21 = extraout_x8_23, bVar8)))) {
            uStack_d90 = (uint)((int)ppuVar31 != 2);
            uStack_10b0 = uVar21;
            FUN_10871c970();
            uVar10 = 0;
            uStack_de8 = (undefined4)uStack_10e0;
            uStack_de4 = (undefined1)((ulong)uStack_10e0 >> 0x20);
            param_3 = (undefined **)(ulong)uStack_11c0;
          }
          uVar29 = (uint)param_3;
          bVar8 = uVar29 == 0xe;
          if (((0xe < uVar29) || (func_0x00010871e790(1 << (ulong)(uVar29 & 0x1f)), bVar8)) &&
             (((bStack_ef8 & 1) == 0 || ((long)ppuStack_f00 <= (long)ppuStack_11c8)))) {
            ppuStack_f00 = ppuStack_11c8;
            bStack_ef8 = 1;
            if (cStack_1138 == '\x01') {
              func_0x00010883f80c(auStack_1190,&puStack_10d0);
            }
            uVar10 = 0;
          }
        }
        if (((pbStack_1098 == (byte *)0x0) && ((uVar11 & 0xfe) != 0)) &&
           ((*(byte *)(unaff_x19 + 0x250) & 1) == 0)) {
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_298 = 0;
          ppuStack_2a0 = &PTR_FUN_110a609a8;
          uStack_280 = 0x1cf;
          func_0x00010871e378(*(undefined8 *)(unaff_x19 + 0x118));
          (*extraout_x8_19)();
          func_0x000107c2882c(&ppuStack_2a0);
          uVar26 = 1;
          param_3 = (undefined **)(ulong)uStack_11c0;
        }
        uVar29 = uStack_12c0;
        pbVar12 = (byte *)(long)(char)bStack_11e0;
        ppuVar31 = (undefined **)(ulong)bStack_11bc;
        param_5 = (undefined **)(ulong)(uVar26 & 0xff);
        param_2 = (undefined **)(ulong)uStack_12c0;
        FUN_1087200ec(pbVar12,param_2,param_3);
        uStack_2a8 = SUB84(pbVar12,0);
        uStack_2a4 = (undefined1)((ulong)pbVar12 >> 0x20);
        if (((ulong)pbVar12 >> 0x20 & 1) == 0) {
          pbVar32 = (byte *)0x0;
        }
        else {
          param_2 = (undefined **)(ulong)uStack_11c0;
          func_0x00010871ee2c(apuStack_1218);
          param_6 = (undefined **)(ulong)uStack_11bb;
          pbVar12 = (byte *)&uStack_2a8;
          param_3 = (undefined **)(extraout_x8_20 + 0x18);
          unaff_x30 = &puStack_10d0;
          ppuStack_12f0 = ppuVar22;
          puStack_12e8 = extraout_x11_00;
          func_0x00010871e784();
          ppuVar31 = ppuStack_11d8;
          param_5 = ppuStack_11d0;
          pbVar32 = pbVar12;
        }
        bVar8 = bStack_11e0 == 0x14;
        if (((0x14 < bStack_11e0) || (func_0x00010871df48(), bVar8)) &&
           ((bVar8 = uStack_11c0 == 0x1e, 0x1e < uStack_11c0 || (func_0x00010871df90(), bVar8)))) {
          func_0x00010871e960();
          uStack_12c4 = (uint)*pbVar12;
          uStack_12d0 = *(undefined8 *)(unaff_x19 + 0x118);
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          func_0x00010871e048();
          uStack_1c8 = 0;
          uStack_1b0 = 400;
          ppuStack_1d0 = extraout_x8_24;
          func_0x00010871e550();
          func_0x000107c278b8(auStack_2e8);
          func_0x00010871e514();
          func_0x000107c28824();
          func_0x00010871e544();
          func_0x000107c278b8(abStack_300);
          func_0x00010871ed8c();
          func_0x00010871e538();
          puVar14 = auStack_318;
          func_0x000107c278b8(puVar14);
          param_3 = (undefined **)"true";
          if (uStack_12c4 == 0) {
            param_3 = (undefined **)&DAT_10f6842c6;
          }
          func_0x00010871ed8c();
          func_0x000107c2884c(apuStack_2d0,puVar14);
          func_0x00010871e378(uStack_12d0);
          param_2 = apuStack_2d0;
          (*extraout_x8_25)();
          func_0x000107c2882c(apuStack_2d0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_318);
          pbVar12 = abStack_300;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x00010871eff0();
          func_0x00010871e514();
          func_0x000107c2882c();
          uVar29 = uStack_12c0;
        }
        if (((ulong)pbVar32 & 1) == 0) {
LAB_10870f2e8:
          bVar8 = bStack_11e0 == 0x14;
          if (((bStack_11e0 < 0x15) && (func_0x00010871dfc0(), !bVar8)) ||
             ((uVar29 == 0 ||
              (((((uVar7 = uStack_11c0 == 0xe, uStack_11c0 < 0xf &&
                  (func_0x00010871e01c(), !(bool)uVar7)) &&
                 (uVar7 = extraout_w8_06 == 0x14, extraout_w8_06 < 0x15)) &&
                (func_0x00010871dfa8(), !(bool)uVar7)) ||
               (func_0x00010871e444(apuStack_1218), ((ulong)pbVar12 & 1) == 0)))))) {
            if (uVar10 == 2) goto LAB_10870ee88;
            uVar7 = 0;
          }
          else {
            uVar10 = 0;
          }
        }
        else {
          if ((pbStack_1098 == (byte *)0xb) && (bStack_11e0 < 0x15 && bStack_11e0 != 9)) {
            if ((bStack_ef8 == 1) && (func_0x00010871f544(), (int)pbVar12 != 0)) {
              pbVar12 = *ppuVar22;
              param_3 = ppuStack_f00;
              func_0x00010871ea98();
              func_0x00010871e514(auStack_4c8);
              func_0x000107c28998();
              func_0x00010871e514();
              func_0x000107c28948();
              if ((cStack_320 == '\x01') &&
                 (((bStack_468 >> 2 & 1) != 0 && (*(int *)(lStack_450 + 0xa8) == 0)))) {
                uStack_1c0 = 0;
                uStack_1b8 = 0;
                uStack_1c8 = 0;
                ppuStack_1d0 = &PTR_FUN_110a609a8;
                uStack_1b0 = 399;
                func_0x00010871e574();
                func_0x000107c278b8(abStack_508);
                func_0x00010871e568();
                func_0x00010871e514();
                func_0x000107c28824();
                func_0x00010871e2e0();
                func_0x000107c278b8(&uStack_520);
                lVar13 = (long)(char)bStack_11e0;
                func_0x000108841d8c(apuStack_538,lVar13);
                param_3 = apuStack_538;
                func_0x00010871f4b4();
                func_0x000107c2884c(auStack_4f0,lVar13);
                func_0x00010871e938();
                param_2 = (undefined **)auStack_4f0;
                func_0x00010871e5fc();
                func_0x000107c2882c(auStack_4f0);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_538);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_520);
                pbVar12 = abStack_508;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                func_0x00010871e514();
                func_0x000107c2882c();
                func_0x00010871eb18();
                uStack_10a0 = (uint)pbVar12;
                pbStack_1098 = (byte *)0xd;
                uVar29 = uStack_12c0;
              }
              func_0x00010871f580();
            }
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if (((bStack_11e0 == 2) && ((bStack_ef8 & 1) != 0)) &&
             (param_3 = ppuStack_f00, ppuStack_f00 == ppuStack_11c8)) {
            pbVar12 = *ppuVar22;
            func_0x00010871ea98();
            func_0x00010871e514(auStack_4c8);
            func_0x000107c28998();
            func_0x00010871e514();
            func_0x000107c28948();
            param_3 = ppuStack_f00;
            if (cStack_320 == '\x01') {
              pbVar12 = (byte *)0x0;
              func_0x00010871e370(auStack_4c8);
              param_3 = ppuStack_f00;
            }
            func_0x00010871f580();
          }
          uVar4 = 1 < uStack_db8;
          uVar7 = uStack_db8 == 2;
          if ((bool)uVar7) {
            param_2 = (undefined **)(ulong)uStack_10a0;
            pbVar12 = pbStack_1098;
            FUN_10871fb04();
            if ((((int)pbVar12 != 0) &&
                (func_0x00010871e55c(bStack_11e0), !(bool)uVar4 || (bool)uVar7)) &&
               (((bStack_1090 & 1) != 0 &&
                (((long)uStack_fc8 < 2 &&
                 ((uStack_10a0 == 2 || uStack_10a0 == 0x1d) || (uStack_10a0 & 0xfffffffb) == 1))))))
            {
              pbStack_1098 = (byte *)0x1;
            }
          }
          if (cStack_11b8 == '\x01') {
            uStack_fc8 = (ulong)bStack_11b9;
          }
          if (cStack_1118 == '\x01') {
            func_0x00010871e18c(apuStack_1218);
          }
          else {
            if (bStack_11e0 == 0xf) {
              bVar8 = true;
            }
            if (!bVar8) {
              func_0x00010871e368(&puStack_10d0);
            }
          }
          if (cStack_1198 == '\x01') {
            func_0x00010871e180(apuStack_1218);
          }
          else if ((code *)puStack_1000 != pcStack_ff8) {
            func_0x00010871e360(&puStack_10d0);
          }
          if ((byte)uStack_10d4 == 1 && iStack_10d8 == 1) {
            pbStack_1098 = (byte *)0x10;
          }
          if (((cStack_d60 == '\x01') && (lStack_d68 != 0)) && (((byte)uStack_10d4 & 1) == 0)) {
            cStack_d60 = '\0';
          }
          uVar10 = 0;
          if (((bStack_11e0 != 7) || ((byte)uStack_10d4 == 0)) || (iStack_10d8 != 2))
          goto LAB_10870f2e8;
          uVar10 = 0;
          lStack_d68 = 1;
          cStack_d60 = '\x01';
          uVar7 = 1;
        }
        FUN_1088665d4(*ppuVar22,&puStack_10d0);
        func_0x00010871e320(*(undefined8 *)(unaff_x19 + 0x158));
        (*extraout_x8_21)();
        if (((uVar10 == 0) && ((func_0x00010871e688(), (bool)uVar7 || ((bStack_d10 & 1) == 0)))) &&
           ((bStack_ee8 & 1) == 0)) {
          func_0x00010871e354();
          func_0x00010871e274();
        }
        param_2 = &puStack_10d0;
        FUN_10871bca8(apuStack_ce8);
      }
      func_0x000107c288d0(&puStack_10d0);
      func_0x00010871effc();
      FUN_10871be98(apuStack_1218);
      func_0x000107c279dc(auStack_12b8);
      FUN_1086d0498(apuStack_1298);
      param_1 = apuStack_1238;
      func_0x000107c279dc(param_1);
      in_ZR = (uStack_12bc & (bStack_918 ^ 1)) == 1;
      param_4 = ppuVar31;
      param_8 = ppuVar35;
      if ((bool)in_ZR) {
        func_0x00010871e514();
        func_0x00010871e65c();
        func_0x00010871e590(&puStack_10d0,&ppuStack_1d0);
        func_0x00010871e9e8();
        param_2 = &puStack_10d0;
        func_0x00010871e274();
        param_1 = &puStack_10d0;
        func_0x000107c27a04(param_1);
        func_0x00010871e514();
        func_0x000107c27914();
        param_4 = ppuVar31;
        param_8 = ppuVar35;
      }
      func_0x00010871f108();
      goto LAB_10870eaa4;
    }
    param_1 = &PTR_PTR_113284480;
    if ((undefined **)param_5[3] != (undefined **)0x0) {
      param_1 = (undefined **)param_5[3];
    }
    uVar29 = *(int *)(param_1 + 8) - 4;
    uVar7 = uVar29 == 0x13;
    if (uVar29 < 0x14) {
      uVar29 = *(uint *)(&UNK_10df4aa60 + (ulong)uVar29 * 4);
    }
    else {
      uVar29 = 0;
    }
    puVar27 = param_1[6];
    param_2 = param_6;
    FUN_108708600();
    func_0x00010086526c(uStack_10);
    if ((bool)uVar7) {
      lVar18 = (long)puVar27 * 1000;
      ppuVar35 = param_1;
      func_0x0001008655c8();
      iVar34 = (int)ppuVar35;
      uVar23 = 1;
      func_0x000107c32ee4();
      in_stack_000000b0 = in_stack_00000050;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      func_0x00010086515c();
      in_stack_00000050 = extraout_x8;
      if ((uVar29 == 0) || (uVar7 = 1, uVar29 == 5)) goto LAB_10870a674;
      ppuVar31 = param_6;
      func_0x000107c32eb0();
      func_0x000107c29e78();
      apuStack_ca8[0]._0_1_ = 0;
      uStack_c90 = 0;
      ppuVar35 = ppuVar31;
      func_0x00010871ed7c(auStack_cc8);
      uVar10 = (uint)ppuVar35;
      ppuVar35 = (undefined **)(ulong)(uVar29 == 0x11);
      uStack_fbc = (uint)(uVar29 == 4 && ((uint)ppuVar31 & 0xfffffffb) == 1);
      func_0x00010871e120(param_6[3]);
      func_0x00010871e9ac();
      uVar7 = uVar29 == 6;
      uVar10 = uVar10 ^ 1;
      if (!(bool)uVar7) {
        uVar10 = 1;
      }
      if ((uVar10 & 1) == 0) {
        ppuVar35 = param_6;
        FUN_1086a52d4(param_6,_bStack0000000000000048 + 0x78);
joined_r0x00010870a3a0:
        uVar36 = 7;
        if (iVar34 == 0) goto LAB_10870a3b0;
LAB_10870a3a4:
        uVar11 = _bStack0000000000000048 + 0x188;
        FUN_10870b0a8();
        if ((uVar11 & 1) == 0) goto LAB_10870a3b0;
      }
      else {
        uVar7 = (uVar29 & 0xfffffffe) == 0x10;
        if (!(bool)uVar7) {
          ppuVar35 = (undefined **)0x1;
          goto joined_r0x00010870a3a0;
        }
        func_0x00010871ed7c(&lStack_808);
        func_0x000107c28908(apuStack_ca8,&lStack_808);
        func_0x00010871f418();
        FUN_108690b88(auStack_cc8,_bStack0000000000000048 + 0x78);
        uVar36 = 8;
        if (iVar34 != 0) goto LAB_10870a3a4;
LAB_10870a3b0:
        uStack_e70 = 0;
        uStack_e18 = 0;
        uStack_fe8 = (ulong)ppuVar35 & 0xffffffff | 0x100;
        puStack_fd8 = (undefined1 *)apuStack_ca8;
        uStack_fd0 = 0;
        plStack_fe0 = (long *)&uStack_e70;
        uStack_ff0 = (undefined1)uVar29;
        FUN_10870b0c4(auStack_e10,in_stack_00000040,auStack_cc8,uVar36,uVar23,lVar18,param_6[0xc],
                      ppuVar31);
        uVar19 = (uint)lVar18;
        func_0x00010871ed10();
        uVar10 = uStack_fbc;
        if (uStack_fbc == 0) {
          if (uVar29 == 0xb) {
            uStack_800 = 0;
            lStack_808 = 0;
            uStack_7f8 = 0;
            FUN_10866c90c(auStack_da8,&lStack_808);
            func_0x00010871e7d0();
            ppuVar31 = (undefined **)param_6[6];
            func_0x00010871e664(&lStack_808);
            uVar7 = ppuVar31 == (undefined **)0x0;
            ppuVar35 = &PTR_PTR_113286e08;
            if (!(bool)uVar7) {
              ppuVar35 = ppuVar31;
            }
            FUN_10870b1c4(auStack_e10,ppuVar35 + 0xf,&lStack_808);
          }
          else if (uVar29 == 0xd) {
            ppuVar31 = (undefined **)param_6[6];
            func_0x00010871e664(&lStack_808);
            uVar7 = ppuVar31 == (undefined **)0x0;
            ppuVar35 = &PTR_PTR_113286e08;
            if (!(bool)uVar7) {
              ppuVar35 = ppuVar31;
            }
            FUN_10870b278(auStack_e10,ppuVar35 + 0x1e,&lStack_808);
          }
          else {
            uVar7 = uVar29 == 0xc;
            if (!(bool)uVar7) goto LAB_10870a4f0;
            ppuVar31 = (undefined **)param_6[6];
            func_0x00010871e664(&lStack_808);
            uVar7 = ppuVar31 == (undefined **)0x0;
            ppuVar35 = &PTR_PTR_113286e08;
            if (!(bool)uVar7) {
              ppuVar35 = ppuVar31;
            }
            FUN_10870b1c4(auStack_e10,ppuVar35 + 0x12,&lStack_808);
          }
          func_0x00010871f418();
        }
        else {
          func_0x00010871e2f8(param_6[5]);
          lVar18 = extraout_x9;
          if (!(bool)uVar7) {
            lVar18 = extraout_x8_00;
          }
          if (((*(byte *)(lVar18 + 0x10) >> 6 & 1) == 0) ||
             (uVar7 = *(int *)(*(long *)(lVar18 + 0x98) + 0x1c) == 2, !(bool)uVar7)) {
            func_0x00010871f43c(_bStack0000000000000048,auStack_e10);
          }
        }
LAB_10870a4f0:
        puVar27 = param_6[0xc];
        func_0x00010871f2d0();
        func_0x00010871e2b4();
        uStack_7f8 = 0;
        uStack_7f0 = 0;
        lStack_808 = extraout_x8_01 + 0x10;
        uStack_800 = 0;
        uStack_7e8 = CONCAT44(uStack_7e8._4_4_,0x1ce);
        func_0x00010871e2e0();
        func_0x000107c278b8(auStack_418);
        func_0x000108841d8c(auStack_430,(long)(char)bStack_f80);
        plVar24 = &lStack_808;
        func_0x000107c28820(plVar24,auStack_418,auStack_430);
        func_0x000107c2884c(auStack_400,plVar24);
        func_0x00010871e090(auStack_3d8,_bStack0000000000000048 + 0x118,auStack_400);
        plVar24 = (long *)(_bStack0000000000000048 + 0xb8);
        func_0x000107c2882c(auStack_400);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_430);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_418);
        func_0x000107c2882c(&lStack_808);
        plVar25 = &lStack_808;
        func_0x00010871e48c(plVar25,plVar24,auStack_fb8);
        func_0x00010871f7a4();
        if ((((bool)uVar7) && ((bStack_e88 & 1) != 0)) &&
           (uVar7 = cStack_5a0 == '\x01' && lStack_e90 == lStack_5a8,
           cStack_5a0 == '\x01' && lStack_e90 < lStack_5a8)) {
LAB_10870a5d8:
          plVar25 = (long *)0x0;
LAB_10870a5dc:
          acStack_388[0] = '\0';
          bStack0000000000000048 = 0;
        }
        else {
          func_0x00010871e52c();
          bVar8 = (bool)uVar7 && extraout_w9 == 2;
          uVar7 = true;
          if (bVar8) goto LAB_10870a5d8;
          bVar8 = cStack_640 == '\x01';
          uVar7 = true;
          if (bVar8) goto LAB_10870a5d8;
          func_0x00010871f798();
          bVar9 = false;
          if (bVar8) {
            func_0x00010871e968();
            bVar8 = (char)*plVar25 != '\x01';
            bVar9 = bVar8 || auStack_4f0[0] == 2;
            if (bVar8 || auStack_4f0[0] == 2) {
              uStack_f60 = 6;
            }
          }
          iVar34 = (int)plVar25;
          func_0x00010871e628(bStack_f80);
          if ((bVar9) && ((bStack_f5b & 1) != 0)) {
            iVar33 = 2;
            bVar8 = extraout_w8 == 0x14;
            if ((extraout_w8 < 0x15) && (func_0x00010871df48(), !bVar8)) goto LAB_10870a6e4;
          }
          else {
LAB_10870a6e4:
            iVar33 = iVar34;
            func_0x00010871e0ac(auStack_fb8);
            func_0x00010871e494(CONCAT44(uStack_e74,iStack_e78));
            func_0x00010871e6a0();
            uVar19 = (uint)bStack_f80;
          }
          bVar9 = (uVar19 & 0xff) == 5;
          bVar8 = bVar9 && cStack_f5c == '\f';
          if (((bVar9 && cStack_f5c == '\f') && (func_0x00010871e508(uStack_f60), bVar8)) &&
             ((lVar18 = lStack_488 - lStack_490, lStack_488 != lStack_490 &&
              (FUN_108708704(&lStack_808,puStack_f68), lStack_488 - lStack_490 != lVar18)))) {
            iVar33 = 0;
          }
          plVar25 = &lStack_808;
          func_0x000107c28db4(plVar25,plVar24);
          bVar9 = (uStack_7d8 & 0xfffffffb) == 1;
          bVar8 = uVar29 == 8 && bVar9;
          if ((uVar29 == 8 && bVar9) && (bVar8 = true, bStack_630 != 1 || puStack_638 != puVar27)) {
            uVar7 = iVar33 == 2;
            if (!(bool)uVar7) {
              FUN_1088665d4(*plVar24,&lStack_808);
            }
            goto LAB_10870a5dc;
          }
          uVar29 = (uint)plVar25;
          func_0x00010871f7bc();
          bVar9 = bVar8 || extraout_w8_00 == 2;
          uVar7 = bVar9;
          if (bVar8 || extraout_w8_00 == 2) {
            func_0x00010871e694(uStack_f60);
            uVar7 = 0;
            if (((bVar9) &&
                (uVar7 = bStack_630 == 1 && puStack_638 == puStack_f68,
                bStack_630 != 1 || puStack_638 != puStack_f68)) &&
               (func_0x00010871e520(cStack_f5c), !(bool)uVar7)) goto LAB_10870a5dc;
          }
          uStack_fc8 = CONCAT44((uint)plVar25,(undefined4)uStack_fc8);
          func_0x00010871f3a8();
          uVar11 = uStack_700;
          uVar30 = uStack_f60;
          bVar2 = bStack_f80;
          uVar26 = (uint)uStack_700;
          uVar19 = (uint)bStack_f80;
          uStack_fc0 = uVar29;
          FUN_10871e8e8(&lStack_808,(long)(char)bStack_f80,uStack_f60,uStack_f78,lStack_f70);
          iVar34 = 0;
          if ((bool)uVar7) {
            iVar34 = iVar33;
          }
          uVar7 = 0x13 < bVar2;
          bVar8 = bVar2 == 0x14;
          if ((0x14 < bVar2) || (func_0x00010871e164(1 << (ulong)(uVar19 & 0x1f)), bVar8)) {
            uVar10 = uStack_fbc;
            uVar21 = lStack_f70 / 1000;
            if ((uStack_7e8 <= uVar21) &&
               (((bVar8 = uVar30 == 0xe, 0xe < uVar30 ||
                 (func_0x00010871e2ec(), uVar21 = extraout_x8_07, bVar8)) ||
                ((bVar8 = uVar19 == 0x14, 0x14 < uVar19 ||
                 (func_0x00010871e144(), uVar21 = extraout_x8_08, bVar8)))))) {
              auStack_4c8[0] = (uint)((int)uStack_f78 != 2);
              uStack_7e8 = uVar21;
              FUN_10871c970();
              iVar34 = 0;
              uStack_520 = (undefined4)uStack_e80;
              uStack_51c = (undefined1)((ulong)uStack_e80 >> 0x20);
              uVar30 = uStack_f60;
            }
            uVar7 = 0xd < uVar30;
            uVar4 = uVar30 == 0xe;
            if ((uVar30 < 0xf) && (func_0x00010871e790(1 << (ulong)(uVar30 & 0x1f)), !(bool)uVar4))
            goto LAB_10870a848;
            plVar25 = (long *)(uStack_fc8 >> 0x20);
            if ((bStack_630 & 1) == 0) {
LAB_10870ae30:
              puStack_638 = puStack_f68;
              bStack_630 = 1;
              uVar7 = cStack_ed8 != '\0';
              uVar4 = cStack_ed8 == '\x01';
              if ((bool)uVar4) {
                func_0x00010883f80c(auStack_f30,&lStack_808);
              }
              iVar34 = 0;
            }
            else {
              uVar7 = puStack_f68 <= puStack_638;
              uVar4 = puStack_638 == puStack_f68;
              if ((long)puStack_638 <= (long)puStack_f68) goto LAB_10870ae30;
            }
          }
          else {
            uVar4 = 0;
            uVar10 = uStack_fbc;
LAB_10870a848:
            plVar25 = (long *)(uStack_fc8 >> 0x20);
          }
          if (((pcStack_7d0 == (char *)0x0) && ((uVar11 & 0xfe) != 0)) &&
             ((*(byte *)(_bStack0000000000000048 + 0x250) & 1) == 0)) {
            uStack_818 = 0;
            uStack_820 = 0;
            func_0x00010871e048(*(undefined8 *)(_bStack0000000000000048 + 0x118));
            uStack_828 = 0;
            uStack_810 = 0x1cf;
            func_0x00010871e378();
            (*extraout_x8_02)();
            func_0x000107c2882c(auStack_830);
            uVar26 = 1;
            uVar30 = uStack_f60;
          }
          bVar2 = bStack_7c8;
          pcVar17 = (char *)(long)(char)bStack_f80;
          FUN_1087200ec(pcVar17,uStack_fc0,uVar30,cStack_f5c,uVar26 & 0xff);
          uStack_838 = SUB84(pcVar17,0);
          uStack_834 = (undefined1)((ulong)pcVar17 >> 0x20);
          if (((ulong)pcVar17 >> 0x20 & 1) == 0) {
            pcVar28 = (char *)0x0;
          }
          else {
            func_0x00010871ee2c(auStack_fb8);
            pcVar17 = (char *)&uStack_838;
            plStack_fe0 = plVar24;
            puStack_fd8 = extraout_x11;
            func_0x00010871e784();
            pcVar28 = pcVar17;
          }
          func_0x00010871f7b0();
          uVar3 = uVar4;
          if ((bool)uVar7 && !(bool)uVar4) {
LAB_10870ac58:
            func_0x00010871f798();
            if (((bool)uVar7 && !(bool)uVar3) || (func_0x00010871df90(), (bool)uVar3)) {
              func_0x00010871e960();
              uVar23 = *(undefined8 *)(_bStack0000000000000048 + 0x118);
              uStack_c08 = 0;
              uStack_c00 = 0;
              func_0x00010871e048();
              uStack_c10 = 0;
              uStack_bf8 = 400;
              ppuStack_c18 = extraout_x8_05;
              func_0x00010871e550();
              func_0x000107c278b8(acStack_878);
              func_0x00010871ec6c();
              pcVar17 = "true";
              if (bVar2 == 0) {
                pcVar17 = acStack_388;
              }
              func_0x000107c28824(&ppuStack_c18,acStack_878,pcVar17);
              func_0x00010871e544();
              func_0x000107c278b8(auStack_890);
              func_0x00010871ed8c();
              func_0x00010871e538();
              puVar14 = auStack_8a8;
              func_0x000107c278b8(puVar14);
              func_0x00010871ed8c();
              func_0x000107c2884c(auStack_860,puVar14);
              func_0x00010871eeb8();
              (*extraout_x8_06)(uVar23,auStack_860);
              func_0x000107c2882c(auStack_860);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8a8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_890);
              pcVar17 = acStack_878;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              func_0x00010871f360();
              plVar25 = (long *)(uStack_fc8 >> 0x20);
              uVar10 = uStack_fbc;
            }
          }
          else {
            func_0x00010871df48();
            uVar3 = 1;
            if ((bool)uVar4) goto LAB_10870ac58;
          }
          if (((ulong)pcVar28 & 1) == 0) {
            uVar29 = (uint)bStack_f80;
LAB_10870aa44:
            bVar8 = uVar29 == 0x14;
            if ((((uVar29 < 0x15) && (func_0x00010871dfc0(), !bVar8)) ||
                ((uStack_fc0 == 0 ||
                 ((((uVar7 = uStack_f60 == 0xe, uStack_f60 < 0xf &&
                    (func_0x00010871e01c(), !(bool)uVar7)) &&
                   (uVar7 = extraout_w8_03 == 0x14, extraout_w8_03 < 0x15)) &&
                  (func_0x00010871dfa8(), !(bool)uVar7)))))) ||
               (func_0x00010871e444(auStack_fb8), ((ulong)pcVar17 & 1) == 0)) {
              uVar7 = iVar34 == 2;
              if ((bool)uVar7) goto LAB_10870a5dc;
            }
            else {
              iVar34 = 0;
            }
          }
          else {
            bVar9 = (char *)0xa < pcStack_7d0;
            bVar8 = pcStack_7d0 == (char *)0xb;
            if ((!bVar8) || (func_0x00010871f7b0(), bVar9 && !bVar8 || extraout_w8_01 == 9)) {
              bVar8 = false;
            }
            else {
              if ((bStack_630 == 1) && (func_0x00010871f544(), (int)pcVar17 != 0)) {
                pcVar17 = (char *)*plVar24;
                func_0x00010871f374();
                func_0x00010871f368();
                func_0x00010871f358();
                if ((cStack_8b0 == '\x01') &&
                   (((bStack_9f8 >> 2 & 1) != 0 && (*(int *)(lStack_9e0 + 0xa8) == 0)))) {
                  uStack_c08 = 0;
                  uStack_c00 = 0;
                  uStack_c10 = 0;
                  ppuStack_c18 = &PTR_FUN_110a609a8;
                  uStack_bf8 = 399;
                  func_0x00010871e574();
                  func_0x000107c278b8(auStack_c58);
                  func_0x00010871e568();
                  func_0x000107c28824(&ppuStack_c18,auStack_c58,
                                      *(undefined8 *)(extraout_x8_03 + (ulong)uStack_fc0 * 8));
                  func_0x00010871e2e0();
                  func_0x000107c278b8(auStack_c70);
                  lVar18 = (long)(char)bStack_f80;
                  func_0x000108841d8c(acStack_c88,lVar18);
                  func_0x00010871f4b4();
                  func_0x000107c2884c(auStack_c40,lVar18);
                  func_0x00010871e938();
                  func_0x00010871e5fc();
                  func_0x000107c2882c(auStack_c40);
                  pcVar17 = acStack_c88;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                  func_0x00010871edc0();
                  func_0x00010871edc8();
                  func_0x00010871f360();
                  func_0x00010871ec90();
                  uStack_7d8 = (uint)pcVar17;
                  pcStack_7d0 = (char *)0xd;
                  plVar25 = (long *)(uStack_fc8 >> 0x20);
                }
                func_0x00010871f31c();
              }
              bVar8 = true;
            }
            if (((bStack_f80 == 2) && ((bStack_630 & 1) != 0)) && (puStack_638 == puStack_f68)) {
              pcVar17 = (char *)*plVar24;
              func_0x00010871f374();
              func_0x00010871f368();
              func_0x00010871f358();
              if (cStack_8b0 == '\x01') {
                pcVar17 = (char *)0x0;
                func_0x00010871e370(auStack_a58);
              }
              func_0x00010871f31c();
            }
            uVar4 = 1 < auStack_4f0[0];
            uVar7 = auStack_4f0[0] == 2;
            if (((((bool)uVar7) &&
                 (pcVar17 = pcStack_7d0, FUN_10871fb04(pcStack_7d0,uStack_7d8), (int)pcVar17 != 0))
                && ((func_0x00010871e55c(bStack_f80), !(bool)uVar4 || (bool)uVar7 &&
                    (((bStack_7c8 & 1) != 0 && ((long)uStack_700 < 2)))))) &&
               ((uStack_7d8 == 2 || uStack_7d8 == 0x1d) || (uStack_7d8 & 0xfffffffb) == 1)) {
              pcStack_7d0 = (char *)0x1;
            }
            bVar9 = cStack_f58 == '\x01';
            if (bVar9) {
              uStack_700 = (ulong)bStack_f59;
            }
            func_0x00010871f704();
            if (bVar9) {
              func_0x00010871e18c(auStack_fb8);
            }
            else {
              func_0x00010871f7a4();
              if (bVar9) {
                bVar8 = true;
              }
              if (!bVar8) {
                func_0x00010871e368(&lStack_808);
              }
            }
            if (cStack_f38 == '\x01') {
              func_0x00010871e180(auStack_fb8);
            }
            else if (lStack_738 != lStack_730) {
              func_0x00010871e360(&lStack_808);
            }
            if ((byte)uStack_e74 == 1 && iStack_e78 == 1) {
              pcStack_7d0 = (char *)0x10;
            }
            bVar8 = cStack_498 == '\x01';
            if (((bVar8) && (lStack_4a0 != 0)) && (((byte)uStack_e74 & 1) == 0)) {
              cStack_498 = '\0';
            }
            iVar34 = 0;
            func_0x00010871f7bc();
            uVar29 = extraout_w8_02;
            if (((!bVar8) || (extraout_w10 == 0)) || (uVar7 = extraout_w9_00 == 2, !(bool)uVar7))
            goto LAB_10870aa44;
            iVar34 = 0;
            lStack_4a0 = 1;
            cStack_498 = '\x01';
          }
          FUN_1088665d4(*plVar24,&lStack_808);
          func_0x00010871e320(*(undefined8 *)(_bStack0000000000000048 + 0x158));
          (*extraout_x8_04)();
          if (((iVar34 == 0) && ((func_0x00010871e688(), (bool)uVar7 || ((bStack_448 & 1) == 0))))
             && ((bStack_620 & 1) == 0)) {
            func_0x00010871e354();
            func_0x00010871e274();
          }
          FUN_10871bca8(acStack_388,&lStack_808);
        }
        func_0x000107c288d0(&lStack_808);
        func_0x000107c28b40(auStack_3d8);
        func_0x000107c288cc(acStack_388);
        func_0x00010871e734();
        if ((bStack0000000000000048 & 1) == 0) {
          func_0x00010871e65c(acStack_388);
          func_0x00010871e590(&lStack_808,acStack_388);
          func_0x00010871e9e8();
          func_0x00010871e274();
          func_0x00010871e7d0();
          func_0x000107c27914(acStack_388);
        }
        if (uVar10 != 0) {
          if (((ulong)plVar25 & 1) == 0) {
            FUN_10871aee8(lVar13,1,2);
          }
          else {
            func_0x00010871ecdc(*(undefined8 *)(lVar13 + 0x118));
            func_0x00010871f33c();
          }
        }
        func_0x00010871ed18();
      }
      func_0x000107c279dc(auStack_cc8);
      param_1 = apuStack_ca8;
      func_0x000107c279dc();
LAB_10870a674:
      func_0x00010086526c(in_stack_00000050);
      if ((bool)uVar7) {
        return;
      }
      ___stack_chk_fail();
      func_0x000107c2882c(auStack_860);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_890);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(acStack_878);
      func_0x000107c2882c(&ppuStack_c18);
      func_0x000107c288d0(&lStack_808);
      func_0x000107c28b40(auStack_3d8);
      func_0x00010871e734();
      func_0x00010871ed18();
      func_0x000107c279dc(auStack_cc8);
      puVar14 = (undefined1 *)apuStack_ca8;
      func_0x000107c279dc();
      func_0x00010871e260();
      uStack_1010 = in_stack_00000040;
      pcStack_ff8 = FUN_10870b048;
      bVar8 = (puVar14[0x10] & 1) != 0;
      if (bVar8) {
        ppuStack_1008 = param_1;
        puStack_1000 = &stack0x000000b0;
        func_0x000107c29ee0(&uStack_1030,*(undefined8 *)(puVar14 + 0x18));
        extraout_x8_09[1] = uStack_1028;
        *extraout_x8_09 = uStack_1030;
        extraout_x8_09[2] = uStack_1020;
        uStack_1028 = 0;
        uStack_1020 = 0;
        uStack_1030 = 0;
        func_0x00010871e4f8();
      }
      else {
        *(undefined1 *)extraout_x8_09 = 0;
      }
      *(bool *)(extraout_x8_09 + 3) = bVar8;
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010871e604();
  func_0x000107c2882c(param_1 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_318);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(abStack_300);
  func_0x00010871eff0();
  func_0x00010871e514();
  func_0x000107c2882c();
  func_0x000107c288d0(&puStack_10d0);
  func_0x00010871effc();
  FUN_10871be98(apuStack_1218);
  func_0x000107c279dc(auStack_12b8);
  FUN_1086d0498(apuStack_1298);
  ppuVar35 = apuStack_1238;
  func_0x000107c279dc();
  func_0x00010871e260();
  func_0x000107c32ee4(FUN_10870f90c);
  ppuVar20 = ppuVar22;
  puStack_12b0 = &stack0x00000050;
  func_0x000107c29e78(ppuVar22);
  ppuVar15 = ppuVar22;
  FUN_1087206a8();
  uVar23 = 2;
  uVar29 = uVar10;
  switch((uint)ppuVar15) {
  case 1:
    goto code_r0x00010870f9a8;
  case 2:
    uVar10 = 0xb;
    break;
  case 3:
    uVar10 = 0xc;
    break;
  case 4:
    uVar10 = 0xd;
    break;
  case 0xc:
    uVar10 = 6;
  }
  uVar23 = 5;
  uVar29 = (uint)ppuVar15;
code_r0x00010870f9a8:
  func_0x00010871f7f4(ppuVar22[3]);
  func_0x000107c29ee0(&ppuStack_1788);
  ppuVar22 = param_2 + 0xf;
  func_0x000107c28078(ppuVar22,&ppuStack_1788);
  func_0x000107c27914(&ppuStack_1788);
  func_0x00010871ed7c(&ppuStack_1788);
  auStack_1db0[0] = 0;
  uStack_1d58 = 0;
  auStack_1b98[0] = 0;
  uStack_1b80 = 0;
  func_0x00010871ea7c(auStack_1db0);
  FUN_10871bcc4(auStack_1d50,param_3,&ppuStack_1788,uVar23,unaff_x30,param_8,ppuVar31,ppuVar20,
                (char)uVar29);
  uVar19 = (uint)param_8;
  func_0x000107c279dc(auStack_1b98);
  func_0x00010871ed10();
  func_0x00010871edb8();
  func_0x00010871f43c(param_2,auStack_1d50);
  uVar7 = uVar10 - 6 == 7;
  switch(uVar10 - 6) {
  case 0:
    func_0x00010871e1fc(&PTR_PTR_113286e08);
    func_0x00010871f514(auStack_1d50,extraout_x8_26 + 0x48);
    break;
  default:
    goto LAB_10870fabc;
  case 5:
    func_0x00010871e1fc(&PTR_PTR_113286e08);
    func_0x00010871f514(auStack_1d50,extraout_x8_28 + 0x78);
    break;
  case 6:
    func_0x00010871e1fc(&PTR_PTR_113286e08);
    func_0x00010871f514(auStack_1d50,extraout_x8_27 + 0x90);
    break;
  case 7:
    func_0x00010871e1fc(&PTR_PTR_113286e08);
    FUN_10870b278(auStack_1d50,extraout_x8_29 + 0xf0,&ppuStack_1788);
  }
  func_0x00010871edb8();
LAB_10870fabc:
  func_0x00010871f2d0();
  uStack_1778 = 0;
  uStack_1770 = 0;
  uStack_1780 = 0;
  ppuStack_1788 = &PTR_FUN_110a609a8;
  uStack_1768 = CONCAT44(uStack_1768._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)(char)bStack_1ec0);
  func_0x00010871e174(&ppuStack_1788);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_1358,param_2 + 0x23);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(&ppuStack_1788);
  ppuVar20 = param_2 + 0x17;
  pppuVar16 = &ppuStack_1788;
  func_0x00010871e48c(pppuVar16,ppuVar20,auStack_1ef8);
  func_0x00010871f7a4();
  if ((((!(bool)uVar7) || ((bStack_1dc8 & 1) == 0)) ||
      (uVar7 = cStack_1520 == '\x01' && lStack_1dd0 == lStack_1528,
      cStack_1520 != '\x01' || lStack_1528 <= lStack_1dd0)) &&
     ((func_0x00010871e52c(), !(bool)uVar7 || extraout_w9_03 != 2 &&
      (bVar8 = cStack_15c0 == '\x01', !bVar8)))) {
    func_0x00010871f798();
    bVar9 = false;
    if (bVar8) {
      FUN_10871e8d8();
      bVar9 = *(char *)pppuVar16 != '\x01' || uStack_1470 == 2;
      if (*(char *)pppuVar16 != '\x01' || uStack_1470 == 2) {
        uStack_1ea0 = 6;
      }
    }
    uVar10 = (uint)pppuVar16;
    func_0x00010871e628(bStack_1ec0);
    if ((bVar9) && ((uStack_1e9b & 1) != 0)) {
      uVar30 = 2;
      bVar8 = extraout_w8_07 == 0x14;
      if ((extraout_w8_07 < 0x15) && (func_0x00010871df48(), !bVar8)) goto LAB_10870fbcc;
    }
    else {
LAB_10870fbcc:
      uVar30 = uVar10;
      func_0x00010871e0ac(auStack_1ef8);
      func_0x00010871e610(CONCAT44(uStack_1db4,iStack_1db8));
      func_0x00010871e6a0();
      uVar19 = (uint)bStack_1ec0;
      uVar10 = uVar30;
    }
    bVar9 = (uVar19 & 0xff) == 5;
    bVar8 = bVar9 && cStack_1e9c == '\f';
    if (((bVar9 && cStack_1e9c == '\f') && (func_0x00010871e508(uStack_1ea0), bVar8)) &&
       (lVar13 = lStack_1408 - lStack_1410, lStack_1408 != lStack_1410)) {
      pppuVar16 = &ppuStack_1788;
      FUN_108708704(pppuVar16,ppuStack_1ea8);
      uVar10 = (uint)pppuVar16;
      if (lStack_1408 - lStack_1410 != lVar13) {
        uVar30 = 0;
      }
    }
    if (((((uint)ppuVar22 & (uint)bStack_15b0) != 1) || (ppuStack_15b8 != ppuVar31)) ||
       ((bVar8 = (uVar29 & 0xff) == 1, bVar8 && ((bStack_1748 & 1) != 0)))) {
      if (uVar30 != 2) {
        FUN_1088665d4(*ppuVar20,&ppuStack_1788);
      }
    }
    else {
      func_0x00010871f7bc();
      uVar7 = bVar8 || extraout_w8_08 == 2;
      if (((!bVar8 && extraout_w8_08 != 2) ||
          (bVar9 = (uStack_1ea0 & 0xfffffffb) != 1, bVar8 = bVar9 || ppuVar31 == ppuStack_1ea8,
          uVar7 = bVar8, bVar9 || ppuVar31 == ppuStack_1ea8)) ||
         (func_0x00010871e520(cStack_1e9c), uVar7 = 1, bVar8)) {
        func_0x00010871f3a8();
        uVar11 = uStack_1680;
        uVar26 = uStack_1ea0;
        lVar13 = lStack_1eb0;
        uVar23 = uStack_1eb8;
        bVar2 = bStack_1ec0;
        uVar29 = (uint)bStack_1ec0;
        FUN_10871e8e8(&ppuStack_1788,(long)(char)bStack_1ec0,uStack_1ea0,uStack_1eb8,lStack_1eb0);
        uVar19 = 0;
        if ((bool)uVar7) {
          uVar19 = uVar30;
        }
        uVar7 = 0x13 < bVar2;
        bVar8 = bVar2 == 0x14;
        if (bVar2 < 0x15) {
          func_0x00010871e164(1 << (ulong)(uVar29 & 0x1f));
          uVar4 = 0;
          if (bVar8) goto LAB_108710130;
        }
        else {
LAB_108710130:
          uVar21 = lVar13 / 1000;
          if (uStack_1768 <= uVar21) {
            uVar7 = uVar26 == 0xe;
            if (uVar26 < 0xf) {
              func_0x00010871f7c8();
              func_0x00010871e2ec();
              uVar21 = extraout_x8_33;
              if (((!(bool)uVar7) && (bVar8 = uVar29 == 0x14, uVar29 < 0x15)) &&
                 (func_0x00010871e144(), uVar21 = extraout_x8_34, !bVar8)) goto LAB_10871019c;
            }
            uStack_1448 = (uint)((int)uVar23 != 2);
            uStack_1768 = uVar21;
            FUN_10871c970();
            uVar19 = 0;
            uStack_14a0 = (int)uStack_1dc0;
            uStack_149c = (char)((ulong)uStack_1dc0 >> 0x20);
            uVar26 = uStack_1ea0;
          }
LAB_10871019c:
          uVar7 = 0xd < uVar26;
          uVar4 = uVar26 == 0xe;
          if (uVar26 < 0xf) {
            func_0x00010871e80c();
            func_0x00010871e790();
            if (!(bool)uVar4) goto LAB_10870fd40;
          }
          if ((bStack_15b0 & 1) != 0) {
            uVar7 = ppuStack_1ea8 <= ppuStack_15b8;
            uVar4 = ppuStack_15b8 == ppuStack_1ea8;
            if (!(bool)uVar4 && (long)ppuStack_1ea8 <= (long)ppuStack_15b8) goto LAB_10870fd40;
          }
          ppuStack_15b8 = ppuStack_1ea8;
          bStack_15b0 = 1;
          uVar7 = cStack_1e18 != '\0';
          uVar4 = cStack_1e18 == '\x01';
          if ((bool)uVar4) {
            func_0x00010883f80c(auStack_1e70,&ppuStack_1788);
          }
          uVar19 = 0;
        }
LAB_10870fd40:
        if (((pcStack_1750 == (char *)0x0) && ((uVar11 & 0xfe) != 0)) &&
           (((ulong)param_2[0x4a] & 1) == 0)) {
          uStack_1798 = 0;
          uStack_17a0 = 0;
          uStack_17a8 = 0;
          ppuStack_17b0 = &PTR_FUN_110a609a8;
          uStack_1790 = 0x1cf;
          func_0x00010871e378(param_2[0x23]);
          (*extraout_x8_30)();
          func_0x000107c2882c(&ppuStack_17b0);
        }
        bVar2 = bStack_1748;
        pcVar17 = (char *)(long)(char)bStack_1ec0;
        func_0x00010871f4d8(pcVar17,uVar10);
        uStack_17b8 = SUB84(pcVar17,0);
        uStack_17b4 = (undefined1)((ulong)pcVar17 >> 0x20);
        if (((ulong)pcVar17 >> 0x20 & 1) == 0) {
          pcVar28 = (char *)0x0;
        }
        else {
          pcVar17 = (char *)&uStack_17b8;
          func_0x00010871f344(pcVar17,uStack_1ea0,auStack_1ee0,uStack_1eb8,lStack_1eb0,uStack_1e9b,
                              &ppuStack_1788);
          pcVar28 = pcVar17;
        }
        func_0x00010871f7b0();
        uVar3 = uVar4;
        if ((bool)uVar7 && !(bool)uVar4) {
LAB_1087101cc:
          func_0x00010871f798();
          if (((bool)uVar7 && !(bool)uVar3) || (func_0x00010871df90(), (bool)uVar3)) {
            func_0x00010871e85c();
            plVar24 = (long *)param_2[0x23];
            func_0x00010871ef60();
            uStack_1b78 = 400;
            func_0x00010871e550();
            func_0x000107c278b8(acStack_17f8);
            pcVar17 = "true";
            if (bVar2 == 0) {
              pcVar17 = "false";
            }
            func_0x000107c28824(auStack_1b98,acStack_17f8,pcVar17);
            func_0x00010871e544();
            func_0x000107c278b8(auStack_1810);
            func_0x00010871e5a0();
            func_0x00010871e538();
            puVar14 = auStack_1828;
            func_0x000107c278b8(puVar14);
            func_0x00010871e5a0();
            func_0x000107c2884c(auStack_17e0,puVar14);
            (**(code **)(*plVar24 + 0x50))(plVar24,auStack_17e0);
            func_0x000107c2882c(auStack_17e0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1828);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1810);
            pcVar17 = acStack_17f8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x00010871f554();
          }
        }
        else {
          func_0x00010871df48();
          uVar3 = 1;
          if ((bool)uVar4) goto LAB_1087101cc;
        }
        if (((ulong)pcVar28 & 1) == 0) {
          uVar29 = (uint)bStack_1ec0;
LAB_10870ff34:
          bVar8 = uVar29 == 0x14;
          if (((0x14 < uVar29) || (func_0x00010871dfc0(), bVar8)) && (uVar10 != 0)) {
            bVar8 = uStack_1ea0 == 0xe;
            uVar7 = bVar8;
            if (uStack_1ea0 < 0xf) {
              func_0x00010871e01c();
              uVar7 = true;
              if ((!bVar8) && (bVar8 = extraout_w8_11 == 0x14, uVar7 = bVar8, extraout_w8_11 < 0x15)
                 ) {
                func_0x00010871dfa8();
                uVar7 = true;
                if (!bVar8) goto LAB_10870ff44;
              }
            }
            func_0x00010871e800(auStack_1ef8);
            func_0x00010871ec5c();
            if (((ulong)pcVar17 & 1) != 0) {
              uVar19 = 0;
              goto LAB_1087100d4;
            }
          }
LAB_10870ff44:
          if (uVar19 == 2) goto LAB_10870fc94;
          uVar7 = 0;
        }
        else {
          bVar9 = (char *)0xa < pcStack_1750;
          bVar8 = pcStack_1750 == (char *)0xb;
          if ((!bVar8) || (func_0x00010871f7b0(), bVar9 && !bVar8 || extraout_w8_09 == 9)) {
            bVar8 = false;
          }
          else {
            if ((bStack_15b0 == 1) && (func_0x00010871eca0(), (int)pcVar17 != 0)) {
              pcVar17 = *ppuVar20;
              func_0x00010871f51c();
              func_0x00010871f47c();
              func_0x00010871f54c();
              if ((cStack_1830 == '\x01') &&
                 (((bStack_1978 >> 2 & 1) != 0 && (*(int *)(lStack_1960 + 0xa8) == 0)))) {
                plVar24 = (long *)param_2[0x23];
                func_0x00010871ef60();
                uStack_1b78 = 399;
                func_0x00010871e574();
                func_0x000107c278b8(acStack_1bd8);
                func_0x00010871e568();
                puVar14 = auStack_1b98;
                func_0x000107c28824(puVar14,acStack_1bd8,
                                    *(undefined8 *)(extraout_x8_31 + (ulong)uVar10 * 8));
                func_0x00010871e2e0();
                func_0x000107c278b8(auStack_1bf0);
                func_0x000108841d8c(auStack_1c08,(long)(char)bStack_1ec0);
                func_0x000107c28820(puVar14,auStack_1bf0,auStack_1c08);
                func_0x000107c2884c(auStack_1bc0,puVar14);
                func_0x00010871e274(*(undefined8 *)(*plVar24 + 0x50));
                func_0x000107c2882c(auStack_1bc0);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c08);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1bf0);
                pcVar17 = acStack_1bd8;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                func_0x00010871f554();
                func_0x00010871f530();
                uStack_1758 = (uint)pcVar17;
                pcStack_1750 = (char *)0xd;
              }
              func_0x00010871f45c();
            }
            bVar8 = true;
          }
          if (((bStack_1ec0 == 2) && ((bStack_15b0 & 1) != 0)) && (ppuStack_15b8 == ppuStack_1ea8))
          {
            pcVar17 = *ppuVar20;
            func_0x00010871f51c();
            func_0x00010871f47c();
            func_0x00010871f54c();
            if (cStack_1830 == '\x01') {
              pcVar17 = (char *)0x0;
              func_0x00010871e370(auStack_19d8);
            }
            func_0x00010871f45c();
          }
          uVar4 = 1 < uStack_1470;
          uVar7 = uStack_1470 == 2;
          if (((((bool)uVar7) &&
               (pcVar17 = pcStack_1750, FUN_10871fb04(pcStack_1750,uStack_1758), (int)pcVar17 != 0))
              && ((func_0x00010871e55c(bStack_1ec0), !(bool)uVar4 || (bool)uVar7 &&
                  (((bStack_1748 & 1) != 0 && ((long)uStack_1680 < 2)))))) &&
             ((uStack_1758 == 2 || uStack_1758 == 0x1d) || (uStack_1758 & 0xfffffffb) == 1)) {
            pcStack_1750 = (char *)0x1;
          }
          bVar9 = cStack_1e98 == '\x01';
          if (bVar9) {
            uStack_1680 = (ulong)bStack_1e99;
          }
          func_0x00010871f704();
          if (bVar9) {
            func_0x00010871e18c(auStack_1ef8);
          }
          else {
            func_0x00010871f7a4();
            if (bVar9) {
              bVar8 = true;
            }
            if (!bVar8) {
              func_0x00010871e368(&ppuStack_1788);
            }
          }
          if (cStack_1e78 == '\x01') {
            func_0x00010871e180(auStack_1ef8);
          }
          else if (lStack_16b8 != lStack_16b0) {
            func_0x00010871e360(&ppuStack_1788);
          }
          if ((byte)uStack_1db4 == 1 && iStack_1db8 == 1) {
            pcStack_1750 = (char *)0x10;
          }
          bVar8 = cStack_1418 == '\x01';
          if (((bVar8) && (lStack_1420 != 0)) && (((byte)uStack_1db4 & 1) == 0)) {
            cStack_1418 = '\0';
          }
          uVar19 = 0;
          func_0x00010871f7bc();
          uVar29 = extraout_w8_10;
          if (((!bVar8) || (extraout_w10_00 == 0)) || (uVar7 = extraout_w9_04 == 2, !(bool)uVar7))
          goto LAB_10870ff34;
          uVar19 = 0;
          lStack_1420 = 1;
          cStack_1418 = '\x01';
        }
LAB_1087100d4:
        FUN_1088665d4(*ppuVar20,&ppuStack_1788);
        func_0x00010871e320(param_2[0x2b]);
        (*extraout_x8_32)();
        if (((cStack_12a0 != '\0') && (uVar19 == 0)) &&
           (((func_0x00010871ef84(), (bool)uVar7 || ((bStack_13c8 & 1) == 0)) &&
            ((bStack_15a0 & 1) == 0)))) {
          func_0x00010871edd8();
          func_0x00010871e500();
        }
        FUN_10871bca8(ppuVar35,&ppuStack_1788);
        goto LAB_10870fca0;
      }
    }
  }
LAB_10870fc94:
  *(undefined1 *)ppuVar35 = 0;
  *(undefined1 *)(ppuVar35 + 0x7a) = 0;
LAB_10870fca0:
  func_0x000107c288d0(&ppuStack_1788);
  func_0x00010871e2c8();
  func_0x00010871e734();
  func_0x00010871ed18();
  return;
}


