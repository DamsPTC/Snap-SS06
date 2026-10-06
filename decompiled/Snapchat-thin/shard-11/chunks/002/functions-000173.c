/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083415ec; end: 10834166f;  */

void FUN_1083415ec(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar1;
  undefined8 uVar2;
  int extraout_w10;
  int extraout_w11;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000108341e84();
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x000108341c8c();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *unaff_x19 = uVar1;
  func_0x000108342368(unaff_x19 + 1,unaff_x20 + 8);
  FUN_108341774(unaff_x19 + 0x1b,unaff_x20 + 0xd8);
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x140) != 0) {
    do {
      func_0x000108341d44();
      uVar1 = extraout_x8_00;
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x148);
  unaff_x19[0x28] = uVar1;
  unaff_x19[0x29] = uVar2;
  return;
}



/* Entry: 108341670; end: 108341733;  */

long * FUN_108341670(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  FUN_10810a400(param_1 + 0x28);
  FUN_1083414c4(param_1 + 0x1b);
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



/* Entry: 108341734; end: 108341773;  */

void FUN_108341734(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
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
                    /* WARNING: Could not recover jumptable at 0x000108341ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108341774; end: 1083417d7;  */

void FUN_108341774(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000108341e84();
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x000108341c8c();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *unaff_x19 = uVar1;
  _memcpy(unaff_x19 + 1,unaff_x20 + 8,0x48);
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    do {
      func_0x000108341c8c();
      uVar1 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  unaff_x19[10] = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  unaff_x19[0xc] = *(undefined8 *)(unaff_x20 + 0x60);
  unaff_x19[0xb] = uVar1;
  return;
}



/* Entry: 1083417d8; end: 1083417ef;  */

uint FUN_1083417d8(uint param_1)

{
  func_0x00010816c270();
  return param_1 ^ 1;
}



/* Entry: 1083417f0; end: 10834182b;  */

void FUN_1083417f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x00010834240c();
  FUN_10833bbb4();
  lVar1 = *unaff_x19;
  *(undefined4 *)(lVar1 + 0xc8c) = param_1;
  *(undefined4 *)(lVar1 + 0xc90) = param_2;
  *(undefined4 *)(lVar1 + 0xc94) = param_3;
  *(undefined4 *)(lVar1 + 0xc98) = param_4;
  return;
}



/* Entry: 10834182c; end: 10834184f;  */

void FUN_10834182c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x000108341ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108341850; end: 1083418c3;  */

void FUN_108341850(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_108342c4c();
  }
  return;
}



/* Entry: 1083418c4; end: 1083418fb;  */

long * FUN_1083418c4(long *param_1,long param_2,undefined8 param_3)

{
  *param_1 = param_2;
  func_0x00010818d67c(param_1 + 1,param_2 + 0xf8);
  FUN_108337d68(*param_1,param_3);
  return param_1;
}



/* Entry: 1083418fc; end: 108341927;  */

undefined8 * FUN_1083418fc(undefined8 *param_1)

{
  FUN_108337d68(*param_1,param_1 + 1);
  return param_1;
}



/* Entry: 108341928; end: 108341957;  */

void FUN_108341928(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10834192c);
  (*pcVar1)();
}



/* Entry: 108341958; end: 1083419db;  */

void FUN_108341958(void)

{
  func_0x000108342418();
  func_0x000108341978();
  return;
}



/* Entry: 1083419dc; end: 108341a03;  */

void FUN_1083419dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1083389b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108341a04; end: 108341a4b;  */

void FUN_108341a04(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x00010834240c();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 108341a4c; end: 108341a5b;  */

void FUN_108341a4c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
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
                    /* WARNING: Could not recover jumptable at 0x000108341ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108341a5c; end: 108341a7b;  */

void FUN_108341a5c(void)

{
  func_0x000108342418();
  FUN_108341a7c();
  return;
}



/* Entry: 108341a7c; end: 108341a8b;  */

void FUN_108341a7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 108341a8c; end: 108341aab;  */

void FUN_108341a8c(void)

{
  func_0x000108342418();
  FUN_108341aac();
  return;
}



/* Entry: 108341aac; end: 108341ac3;  */

void FUN_108341aac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108341ae0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108341ac4; end: 108341adf;  */

void FUN_108341ac4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108341ae0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108341ae0; end: 108341b7f;  */

long FUN_108341ae0(long param_1)

{
  func_0x00010730b05c(param_1 + 0x78);
  func_0x000108341b1c(param_1 + 0x20);
  FUN_108341a5c(param_1 + 0x18);
  FUN_108341a5c(param_1 + 8);
  return param_1;
}



/* Entry: 108341b80; end: 108341b87;  */

void FUN_108341b80(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108341d9c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x60) {
    func_0x0001081298a0(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108341b88; end: 108341bc7;  */

void FUN_108341b88(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108341d9c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x60) {
    func_0x0001081298a0(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108341bc8; end: 108341bf7;  */

void FUN_108341bc8(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010834240c();
  *unaff_x19 = 0;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}



/* Entry: 108341bf8; end: 108342423;  */

void FUN_108341bf8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x000108341ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108342424; end: 1083424c7;  */

long * FUN_108342424(long *param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = param_2;
  iVar1 = *(int *)(param_2 + 0xc60);
  *(int *)(param_1 + 1) = iVar1;
  if (param_4 == 0) {
    if (param_3 == 0) {
      return param_1;
    }
    *(int *)(param_2 + 0xc60) = iVar1 + 1;
    *(int *)(*(long *)(param_2 + 0xc40) + 0x58) = *(int *)(*(long *)(param_2 + 0xc40) + 0x58) + 1;
  }
  else {
    uStack_38 = param_5[1];
    uStack_40 = *param_5;
    if (param_3 == 0) {
      func_0x000108342e18(param_1,&uStack_40);
      return param_1;
    }
    FUN_108189c38(param_3,&uStack_40,1);
    func_0x000108342e18();
  }
  FUN_10833e2b0(param_2,param_3);
  return param_1;
}



/* Entry: 1083424c8; end: 1083424f3;  */

undefined8 * FUN_1083424c8(undefined8 *param_1)

{
  FUN_10833baf4(*param_1,*(undefined4 *)(param_1 + 1));
  return param_1;
}



/* Entry: 1083424f4; end: 10834261b;  */

long FUN_1083424f4(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_2[2] == 0) {
    iVar5 = *(int *)((long)param_2 + 0x1c);
    uVar4 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 3) + 1;
    iVar5 = *(int *)((long)param_2 + 0x1c);
    uVar4 = (ulong)(uint)(iVar1 + iVar1 * iVar5);
  }
  lVar7 = (long)(int)uVar4;
  uVar4 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
  lVar2 = uVar4 + (long)(*(int *)(param_2 + 3) + iVar5 + 3) * 4 + (lVar7 + 3U & 0xfffffffffffffffc)
          + 0x10;
  if (param_1 != 0) {
    uStack_48 = 0;
    uStack_58 = 0;
    lStack_68 = param_1;
    lStack_60 = lVar2;
    lStack_50 = param_1;
    FUN_10834261c(&lStack_68);
    func_0x000108342640(&lStack_68,*param_2,(long)*(int *)(param_2 + 3) << 2);
    FUN_10834261c(&lStack_68,*(undefined4 *)((long)param_2 + 0x1c));
    func_0x000108342640(&lStack_68,param_2[1],(long)*(int *)((long)param_2 + 0x1c) << 2);
    FUN_10834261c(&lStack_68,lVar7);
    func_0x00010834267c(&lStack_68,param_2[2],lVar7);
    func_0x000108342640(&lStack_68,param_2[5],uVar4);
    plVar6 = (long *)param_2[4];
    plVar3 = &lStack_68;
    FUN_1082a2c70(plVar3,0x10);
    lVar7 = *plVar6;
    plVar3[1] = plVar6[1];
    *plVar3 = lVar7;
    func_0x00010815277c(&uStack_48);
  }
  return lVar2;
}



/* Entry: 10834261c; end: 1083426b7;  */

void FUN_10834261c(undefined4 *param_1,undefined4 param_2)

{
  FUN_1082a2c70(param_1,4);
  *param_1 = param_2;
  return;
}



/* Entry: 1083426b8; end: 1083426f7;  */

void FUN_1083426b8(long param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  iVar4 = 0;
  piVar2 = (int *)(param_1 + 0x28);
  iVar3 = -1;
  for (uVar5 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0;
      uVar5 = uVar5 - 1) {
    iVar4 = iVar4 + (uint)*(byte *)(piVar2 + 3) * 4;
    iVar1 = *piVar2;
    if (*piVar2 <= iVar3) {
      iVar1 = iVar3;
    }
    piVar2 = piVar2 + 0xe;
    iVar3 = iVar1;
  }
  *param_3 = iVar4;
  *param_4 = iVar3 + 1;
  return;
}



/* Entry: 1083426f8; end: 108342827;  */

undefined8 FUN_1083426f8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    FUN_108355708(uVar6,&uStack_38);
    if ((int)uVar6 != 0) {
      uStack_40 = uStack_38;
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        piVar1 = (int *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lStack_50 = lVar5;
        FUN_1083ade28(&uStack_48,uStack_38,&lStack_50);
        uVar4 = uStack_40;
        uStack_40 = uStack_48;
        uStack_48 = 0;
        FUN_108342dc8(uVar4);
        FUN_108115b2c(&uStack_48);
        FUN_108115b2c(&lStack_50);
        uStack_38 = uStack_40;
      }
      uStack_40 = 0;
      uStack_58 = 0;
      FUN_108164954((long *)(param_1 + 0x18),uStack_38);
      FUN_108115b2c(&uStack_58);
      uStack_60 = 0;
      FUN_108167c3c((undefined8 *)(param_1 + 0x20),0);
      FUN_10811e834(&uStack_60);
      FUN_108115b2c(&uStack_40);
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 108342828; end: 1083428af;  */

ulong FUN_108342828(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_108375f34(param_1,param_3);
  *(undefined8 *)(uVar1 + 0x50) = param_2;
  *(undefined4 *)(uVar1 + 0x58) = 0;
  if ((*(long *)(uVar1 + 0x20) != 0) && (uVar1 = param_1, FUN_1083426f8(), (uVar1 & 1) == 0)) {
    FUN_1083428b0(param_1,param_4);
  }
  if (((param_5 & 1) == 0) && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_1083429d4(param_1,param_4);
  }
  return param_1;
}



/* Entry: 1083428b0; end: 1083429d3;  */

void FUN_1083428b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_44 = 0x3f800000;
  uStack_3c = 0x40800000;
  uVar2 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x000108342df4();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_88 = 0;
  uStack_60 = uVar2;
  FUN_108167bec(0);
  FUN_10811e834(&uStack_88);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x000108342df4();
      uVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  uStack_90 = 0;
  uVar1 = CONCAT44(uStack_54,uStack_58);
  uStack_58 = (undefined4)uVar2;
  uStack_54 = (undefined4)((ulong)uVar2 >> 0x20);
  FUN_10816618c(uVar1);
  FUN_108154c6c(&uStack_90);
  uStack_98 = 0;
  FUN_108167c3c((long *)(param_1 + 0x20),0);
  FUN_10811e834(&uStack_98);
  func_0x000108342e0c();
  FUN_108342d1c(param_1,&uStack_80,param_2,0);
  FUN_108375e94(&uStack_80);
  return;
}



/* Entry: 1083429d4; end: 108342c4b;  */

void FUN_1083429d4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *plVar3;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  long lStack_48;
  
  plVar3 = *(long **)(param_5 + 0x10);
  func_0x00010833b800(&uStack_a0,*(undefined8 *)(param_5 + 0x50));
  (**(code **)(*plVar3 + 0x60))(&lStack_48,plVar3,&uStack_a0);
  if (lStack_48 != 0) {
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0x3f800000;
    uStack_64 = 0x3f800000;
    uStack_5c = 0x40800000;
    FUN_10819a67c(param_5);
    uStack_ac = param_2;
    uStack_a8 = param_3;
    uStack_a4 = param_4;
    FUN_108375e28(&uStack_a0,&uStack_b0,0);
    uVar2 = 0;
    if (*(long *)(param_5 + 8) != 0) {
      do {
        func_0x000108342df4();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uVar1 = uStack_98;
    uStack_b8 = 0;
    uStack_98 = uVar2;
    FUN_108114eec(uVar1);
    func_0x000106f47224(&uStack_b8);
    uVar2 = 0;
    if (*(long *)(param_5 + 0x18) != 0) {
      do {
        func_0x000108342df4();
        uVar2 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    uVar1 = uStack_88;
    uStack_c0 = 0;
    uStack_88 = uVar2;
    func_0x000108164964(uVar1);
    FUN_108115b2c(&uStack_c0);
    uVar2 = 0;
    if (*(long *)(param_5 + 0x28) != 0) {
      do {
        func_0x000108342df4();
        uVar2 = extraout_x8_01;
      } while (extraout_w11_01 != 0);
    }
    uStack_c8 = 0;
    uVar1 = CONCAT44(uStack_74,uStack_78);
    uStack_78 = (undefined4)uVar2;
    uStack_74 = (undefined4)((ulong)uVar2 >> 0x20);
    FUN_10816618c(uVar1);
    FUN_108154c6c(&uStack_c8);
    uStack_5c = CONCAT44(uStack_5c._4_4_ & 0xfffffffc |
                         uStack_5c._4_4_ & 1 | (*(uint *)(param_5 + 0x48) >> 1 & 1) << 1,
                         (undefined4)uStack_5c);
    uVar2 = 0;
    if (lStack_48 != 0) {
      do {
        func_0x000108342df4();
        uVar2 = extraout_x8_02;
      } while (extraout_w11_02 != 0);
    }
    uVar1 = uStack_80;
    uStack_d0 = 0;
    uStack_80 = uVar2;
    FUN_108167bec(uVar1);
    FUN_10811e834(&uStack_d0);
    FUN_108375e28(param_5,&UNK_10df1cb18,0);
    uStack_d8 = 0;
    func_0x000108114f18((long *)(param_5 + 8),0);
    func_0x000106f47224(&uStack_d8);
    uStack_e0 = 0;
    func_0x000108164954((long *)(param_5 + 0x18),0);
    FUN_108115b2c(&uStack_e0);
    uStack_e8 = 0;
    func_0x00010837656c((undefined8 *)(param_5 + 0x10),0);
    FUN_10810c718(&uStack_e8);
    *(uint *)(param_5 + 0x48) = *(uint *)(param_5 + 0x48) & 0xfffffffd;
    func_0x000108342e0c();
    FUN_108342d1c(param_5,&uStack_a0,param_6,1);
    FUN_108375e94(&uStack_a0);
  }
  FUN_10811e834(&lStack_48);
  return;
}



/* Entry: 108342c4c; end: 108342c9b;  */

long * FUN_108342c4c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < (int)param_1[0xb]; iVar4 = iVar4 + 1) {
    *(int *)(param_1[10] + 0xc60) = *(int *)(param_1[10] + 0xc60) + -1;
    FUN_10833c008();
  }
  FUN_108154c6c(param_1 + 5);
  FUN_10811e834(param_1 + 4);
  FUN_108115b2c(param_1 + 3);
  FUN_10810c718(param_1 + 2);
  func_0x000106f47224(param_1 + 1);
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000108115bc4();
    }
  }
  return param_1;
}



/* Entry: 108342c9c; end: 108342ceb;  */

undefined8 * FUN_108342c9c(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x40800000;
  FUN_108342cec();
  return param_1;
}



/* Entry: 108342cec; end: 108342d1b;  */

void FUN_108342cec(long param_1,long param_2)

{
  func_0x000108376114();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x58) = 0;
  return;
}



/* Entry: 108342d1c; end: 108342dc7;  */

void FUN_108342d1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  if ((param_3 == 0) || (lVar1 = param_1, FUN_108376360(), (int)lVar1 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x0001083763a8(param_1,param_3,&uStack_40);
  }
  lVar2 = *(long *)(param_1 + 0x50);
  *(int *)(lVar2 + 0xc60) = *(int *)(lVar2 + 0xc60) + 1;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x3f80000000000000;
  lStack_80 = lVar1;
  uStack_78 = param_2;
  FUN_10833c45c(lVar2,&lStack_80,0,param_4);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  return;
}



/* Entry: 108342dc8; end: 108342e3f;  */

void FUN_108342dc8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x000108342dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108342e40; end: 108342f23;  */

long FUN_108342e40(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 extraout_x9;
  undefined8 in_register_00005008;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  FUN_108343134();
  func_0x000108343164();
  uVar2 = *param_4;
  *(undefined8 *)(lVar1 + 0xc58) = param_4[1];
  *(undefined8 *)(lVar1 + 0xc50) = uVar2;
  *(undefined8 *)(lVar1 + 0xc68) = 0;
  *(undefined8 *)(lVar1 + 0xc80) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0xc78) = param_1;
  *(undefined4 *)(lVar1 + 0xc88) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0xc94) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0xc8c) = param_1;
  *(undefined8 *)(lVar1 + 0xca0) = 0;
  FUN_108342f24(&uStack_40,extraout_x9,lVar1 + 0xc50);
  uStack_38 = uStack_40;
  uStack_40 = 0;
  FUN_10833bc48(param_2,&uStack_38);
  FUN_10830c294(&uStack_38);
  FUN_108333638(&uStack_40);
  return param_2;
}



/* Entry: 108342f24; end: 108342f6f;  */

void FUN_108342f24(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001083431a4();
  FUN_108331c7c();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108342f70; end: 10834307f;  */

long FUN_108342f70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 extraout_x9;
  undefined8 in_register_00005008;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_5;
  FUN_108343134();
  func_0x000108343164();
  if (param_6 == (undefined8 *)0x0) {
    uVar1 = 0;
    uVar2 = 0x3f000000;
  }
  else {
    uVar1 = *param_6;
    uVar2 = param_6[1];
  }
  *(undefined8 *)(param_2 + 0xc50) = uVar1;
  *(undefined8 *)(param_2 + 0xc58) = uVar2;
  uVar1 = *param_4;
  *param_4 = 0;
  *(undefined8 *)(param_2 + 0xc68) = uVar1;
  *(undefined8 *)(param_2 + 0xc80) = in_register_00005008;
  *(undefined8 *)(param_2 + 0xc78) = param_1;
  *(undefined4 *)(param_2 + 0xc88) = 0xffffffff;
  *(undefined8 *)(param_2 + 0xc94) = in_register_00005008;
  *(undefined8 *)(param_2 + 0xc8c) = param_1;
  *(undefined8 *)(param_2 + 0xca0) = 0;
  FUN_108343080(&uStack_48,extraout_x9,param_2 + 0xc50,&uStack_38);
  uStack_40 = uStack_48;
  uStack_48 = 0;
  FUN_10833bc48(param_2,&uStack_40);
  FUN_10830c294(&uStack_40);
  FUN_108333638(&uStack_48);
  return param_2;
}



/* Entry: 108343080; end: 1083430d7;  */

void FUN_108343080(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001083431a4();
  FUN_108331c7c();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1083430d8; end: 108343133;  */

undefined8 FUN_1083430d8(undefined8 param_1,undefined8 param_2)

{
  long lStack_28;
  
  lStack_28 = 0;
  FUN_108342f70(param_1,param_2,&lStack_28,0,0);
  if (lStack_28 != 0) {
    func_0x000108343190();
  }
  return param_1;
}



/* Entry: 108343134; end: 1083431af;  */

void FUN_108343134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3de78;
  param_1[0x185] = 0x60;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x186] = param_1 + 1;
  return;
}



/* Entry: 1083431b0; end: 10834326f;  */

void FUN_1083431b0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uStack_28;
  
  if ((bRam0000000113826c70 & 1) == 0) {
    iVar4 = 0x13826c70;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      *puVar5 = &PTR_DAT_110a3e048;
      puVar5[1] = 1;
      puRam0000000113826c68 = puVar5;
      ___cxa_guard_release(0x113826c70);
    }
  }
  puVar5 = puRam0000000113826c68;
  if (puRam0000000113826c68 != (undefined8 *)0x0) {
    piVar1 = (int *)(puRam0000000113826c68 + 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_28 = 0;
  *param_1 = puVar5;
  FUN_1083432b8(&uStack_28);
  return;
}



/* Entry: 108343270; end: 1083432b7;  */

undefined8 FUN_108343270(int *param_1)

{
  if ((((*(char *)((long)param_1 + 5) == '\x01') && ((char)param_1[2] == '\x01')) &&
      (*(char *)((long)param_1 + 7) == '\x01')) && (3 < *param_1)) {
    return 1;
  }
  return 0;
}



/* Entry: 1083432b8; end: 108343307;  */

long * FUN_1083432b8(long *param_1)

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



/* Entry: 108343308; end: 1083434ff;  */

ulong FUN_108343308(ulong *param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3 ^ 0xa0761d6478bd642f;
  param_3 = param_3 ^ SUB168(auVar1 * ZEXT816(0xe7037ed1a0b428db),8) ^
                      (param_3 ^ 0xa0761d6478bd642f) * -0x18fc812e5f4bd725;
  if (param_2 < 0x11) {
    if (param_2 < 4) {
      if (param_2 == 0) {
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        uVar14 = (ulong)(byte)*param_1 << 0x10 |
                 (ulong)*(byte *)((long)param_1 + (param_2 >> 1)) << 8 |
                 (ulong)*(byte *)((long)param_1 + (param_2 - 1));
      }
    }
    else {
      uVar15 = param_2 >> 1 & 0xc;
      uVar14 = CONCAT44((int)*param_1,*(undefined4 *)((long)param_1 + uVar15));
      puVar16 = (undefined4 *)((long)param_1 + (param_2 - 4));
      uVar15 = CONCAT44(*puVar16,*(undefined4 *)((long)puVar16 - uVar15));
    }
  }
  else {
    uVar15 = param_2;
    uVar14 = param_3;
    uVar17 = param_3;
    if (0x30 < param_2) {
      do {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1[1] ^ param_3;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *param_1 ^ 0xe7037ed1a0b428db;
        param_3 = SUB168(auVar4 * auVar10,8) ^
                  (param_1[1] ^ param_3) * (*param_1 ^ 0xe7037ed1a0b428db);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = param_1[3] ^ uVar14;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = param_1[2] ^ 0x8ebc6af09c88c6e3;
        uVar14 = SUB168(auVar5 * auVar11,8) ^
                 (param_1[3] ^ uVar14) * (param_1[2] ^ 0x8ebc6af09c88c6e3);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = param_1[5] ^ uVar17;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = param_1[4] ^ 0x589965cc75374cc3;
        uVar17 = SUB168(auVar6 * auVar12,8) ^
                 (param_1[5] ^ uVar17) * (param_1[4] ^ 0x589965cc75374cc3);
        param_1 = param_1 + 6;
        uVar15 = uVar15 - 0x30;
      } while (0x30 < uVar15);
      param_3 = uVar14 ^ param_3 ^ uVar17;
    }
    for (; 0x10 < uVar15; uVar15 = uVar15 - 0x10) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_1[1] ^ param_3;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *param_1 ^ 0xe7037ed1a0b428db;
      param_3 = SUB168(auVar7 * auVar13,8) ^
                (param_1[1] ^ param_3) * (*param_1 ^ 0xe7037ed1a0b428db);
      param_1 = param_1 + 2;
    }
    uVar14 = *(ulong *)((long)param_1 + (uVar15 - 0x10));
    uVar15 = *(ulong *)((long)param_1 + (uVar15 - 8));
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3 ^ uVar15;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar14 ^ 0xe7037ed1a0b428db;
  uVar14 = param_2 ^ 0xa0761d6478bd642f ^ (param_3 ^ uVar15) * (uVar14 ^ 0xe7037ed1a0b428db);
  uVar15 = SUB168(auVar2 * auVar8,8) ^ 0xe7037ed1a0b428db;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar15;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar14;
  return SUB168(auVar3 * auVar9,8) ^ uVar15 * uVar14;
}



/* Entry: 108343500; end: 108343583;  */

undefined8 FUN_108343500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108343520();
  return param_3;
}



/* Entry: 108343584; end: 10834360f;  */

undefined4 FUN_108343584(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fVar2 = 255.0;
  FUN_108343648();
  fVar2 = fVar2 + 0.5;
  uStack_38 = 0x437f0000437f0000;
  uStack_40 = 0x437f0000437f0000;
  fStack_30 = (float)-(uint)(255.0 < fVar2);
  func_0x000108343660(&uStack_40);
  uVar1 = CONCAT44(-(uint)(0.0 < fVar2),-(uint)(0.0 < fStack_30));
  fVar3 = 0.0;
  fStack_2c = fVar2;
  fStack_28 = param_3;
  fStack_24 = param_4;
  func_0x000108343660(uVar1,&fStack_30);
  return CONCAT13((char)(int)param_4,
                  CONCAT12((char)(int)param_3,CONCAT11((char)(int)fVar3,(char)(int)(float)uVar1)));
}



/* Entry: 108343610; end: 108343647;  */

void FUN_108343610(undefined8 *param_1)

{
  func_0x0001083436d0(*param_1);
  return;
}



/* Entry: 108343648; end: 1083436e3;  */

float FUN_108343648(float param_1,undefined8 *param_2)

{
  return (float)*param_2 * param_1;
}



/* Entry: 1083436e4; end: 10834376b;  */

void FUN_1083436e4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_6[1];
  uVar2 = *param_6;
  uStack_30 = uVar2;
  FUN_108344004(&uStack_94,param_7,3,param_8,2);
  uVar1 = (undefined4)uVar2;
  FUN_1083441a4(&uStack_94,&uStack_30);
  (**(code **)(*param_5 + 0x58))(param_5,&uStack_30,param_8);
  uStack_a4 = uVar1;
  uStack_a0 = param_2;
  uStack_9c = param_3;
  uStack_98 = param_4;
  FUN_10834376c(&uStack_a4);
  uStack_94 = uVar1;
  uStack_90 = param_2;
  uStack_8c = param_3;
  uStack_88 = param_4;
  FUN_10827f6c8(&uStack_94);
  return;
}



/* Entry: 10834376c; end: 1083437bb;  */

undefined4 FUN_10834376c(undefined4 *param_1)

{
  return *param_1;
}



/* Entry: 1083437bc; end: 10834382f;  */

undefined4 * FUN_1083437bc(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 1;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar4 = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(undefined8 *)(param_1 + 5) = uVar3;
  *(undefined8 *)(param_1 + 3) = uVar2;
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  param_1[0x12] = *(undefined4 *)(param_3 + 4);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined1 *)(param_1 + 0x23) = 0;
  puVar1 = param_1 + 3;
  FUN_108343308(puVar1,0x1c,0);
  param_1[1] = (int)puVar1;
  puVar1 = param_1 + 10;
  FUN_108343308(puVar1,0x24,0);
  param_1[2] = (int)puVar1;
  return param_1;
}



/* Entry: 108343830; end: 108343a33;  */

void FUN_108343830(undefined8 *param_1,float *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  pfVar4 = param_2;
  func_0x000108407f28();
  if ((int)pfVar4 == 0) {
    *param_1 = 0;
    return;
  }
  fVar7 = param_2[1];
  fVar6 = 0.001;
  bVar2 = ABS(0.9478673 - fVar7) < 0.001;
  if (((((!bVar2) || (func_0x000108343ff8(0x3a83126f,fVar7,param_2[2],0x3d558919), !bVar2)) ||
       (func_0x000108343ff8(), !bVar2)) ||
      ((func_0x000108343ff8(), !bVar2 || (fVar6 <= ABS(0.0 - param_2[5]))))) ||
     ((bVar2 = ABS(0.0 - param_2[6]) < fVar6, !bVar2 || (func_0x000108343ff8(), !bVar2)))) {
    if (((fVar6 <= ABS(1.0 - fVar7)) || (fVar6 <= ABS(0.0 - param_2[2]))) ||
       (fVar6 <= ABS(0.0 - param_2[5]))) {
      bVar2 = false;
    }
    else {
      if ((ABS(2.2 - *param_2) < fVar6) && (param_2[4] <= 0.0)) goto LAB_1083439ec;
      bVar2 = ABS(1.0 - *param_2) < fVar6 && param_2[4] <= 0.0;
    }
    if ((fVar6 <= ABS(1.0 - param_2[3])) || (fVar6 <= ABS(0.0 - param_2[6]))) {
      bVar3 = false;
    }
    else {
      bVar3 = 1.0 <= param_2[4];
    }
    if ((bVar2 || bVar3) && (FUN_108343a34(), (int)param_3 != 0)) {
      FUN_108343ba0();
      if (param_3 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar2) {
            *param_3 = *param_3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *param_1 = param_3;
      return;
    }
  }
  else {
    FUN_108343a34();
    if ((int)param_3 != 0) {
      FUN_108343afc();
      if (param_3 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar2) {
            *param_3 = *param_3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *param_1 = param_3;
      return;
    }
  }
LAB_1083439ec:
  uVar5 = 0x90;
  __Znwm();
  FUN_1083437bc();
  *param_1 = uVar5;
  return;
}



/* Entry: 108343a34; end: 108343a93;  */

bool FUN_108343a34(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = &UNK_10df1cb50;
  for (lVar3 = 0; lVar3 != 3; lVar3 = lVar3 + 1) {
    lVar5 = 0;
    while (lVar5 != 0xc) {
      pfVar1 = (float *)(param_1 + lVar5);
      pfVar2 = (float *)(puVar4 + lVar5);
      lVar5 = lVar5 + 4;
      if (0.01 <= ABS(*pfVar1 - *pfVar2)) goto LAB_108343a88;
    }
    param_1 = param_1 + 0xc;
    puVar4 = puVar4 + 0xc;
  }
LAB_108343a88:
  return lVar3 == 3;
}



/* Entry: 108343a94; end: 108343afb;  */

void FUN_108343a94(undefined8 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  
  FUN_108343afc();
  if (param_2 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = *param_2 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108343afc; end: 108343b6f;  */

undefined * FUN_108343afc(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113826c80 & 1) == 0) {
    iVar1 = 0x13826c80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10df1cb74;
      func_0x000108343fe4();
      puRam0000000113826c78 = puVar2;
      ___cxa_guard_release(0x113826c80);
    }
  }
  return puRam0000000113826c78;
}



/* Entry: 108343b70; end: 108343b9f;  */

undefined4 * FUN_108343b70(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined4 *)0x90;
  __Znwm();
  *puVar2 = 1;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar5 = *(undefined8 *)((long)param_1 + 0xc);
  *(undefined8 *)(puVar2 + 8) = *(undefined8 *)((long)param_1 + 0x14);
  *(undefined8 *)(puVar2 + 6) = uVar5;
  *(undefined8 *)(puVar2 + 5) = uVar4;
  *(undefined8 *)(puVar2 + 3) = uVar3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  puVar2[0x12] = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0xe) = uVar5;
  *(undefined8 *)(puVar2 + 0xc) = uVar4;
  *(undefined8 *)(puVar2 + 10) = uVar3;
  *(undefined1 *)(puVar2 + 0x23) = 0;
  puVar1 = puVar2 + 3;
  FUN_108343308(puVar1,0x1c,0);
  puVar2[1] = (int)puVar1;
  puVar1 = puVar2 + 10;
  FUN_108343308(puVar1,0x24,0);
  puVar2[2] = (int)puVar1;
  return puVar2;
}



/* Entry: 108343ba0; end: 108343c13;  */

undefined * FUN_108343ba0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113826c90 & 1) == 0) {
    iVar1 = 0x13826c90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10df1cb34;
      func_0x000108343fe4();
      puRam0000000113826c88 = puVar2;
      ___cxa_guard_release(0x113826c90);
    }
  }
  return puRam0000000113826c88;
}



/* Entry: 108343c14; end: 108343cc3;  */

void FUN_108343c14(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  char cStack_21;
  
  pcVar1 = (char *)(param_1 + 0x8c);
  cStack_21 = *pcVar1;
  if (cStack_21 != '\0') goto LAB_108343cac;
  pcVar2 = pcVar1;
  FUN_10825bc50(pcVar1,&cStack_21,1,0,0);
  if ((int)pcVar2 == 0) {
    do {
      cStack_21 = *pcVar1;
LAB_108343cac:
    } while (cStack_21 != '\x02');
  }
  else {
    uVar3 = param_1 + 0x28;
    FUN_108409de0(uVar3,param_1 + 0x68);
    if ((uVar3 & 1) == 0) {
      FUN_108409de0(&UNK_10df2c588,param_1 + 0x68);
    }
    uVar3 = param_1 + 0xc;
    FUN_108409f3c(uVar3,param_1 + 0x4c);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x54) = 0x414eb85280000000;
      *(undefined8 *)(param_1 + 0x4c) = 0x3f9192803ed55555;
      *(undefined8 *)(param_1 + 0x60) = 0x80000000bd612800;
      *(undefined8 *)(param_1 + 0x58) = 0x3b4d2e31414eb852;
    }
    *pcVar1 = '\x02';
  }
  return;
}



/* Entry: 108343cc4; end: 108343cf3;  */

bool FUN_108343cc4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x14);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)((long)param_2 + 0x14) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((long)param_2 + 0xc) = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  func_0x000108407f28(param_2);
  return (int)param_2 == 1;
}



/* Entry: 108343cf4; end: 108343d53;  */

void FUN_108343cf4(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  FUN_108343c14(param_2);
  FUN_108409b48(&uStack_54,param_2 + 0x68,param_1 + 0x28);
  param_3[1] = uStack_4c;
  *param_3 = uStack_54;
  param_3[3] = uStack_3c;
  param_3[2] = uStack_44;
  *(undefined4 *)(param_3 + 4) = uStack_34;
  return;
}



/* Entry: 108343d54; end: 108343d7b;  */

bool FUN_108343d54(long param_1)

{
  param_1 = param_1 + 0xc;
  func_0x000108343fdc(param_1,&UNK_10df1cb34);
  return (int)param_1 == 0;
}



/* Entry: 108343d7c; end: 108343f97;  */

/* WARNING: Removing unreachable block (ram,0x000108343874) */
/* WARNING: Removing unreachable block (ram,0x000108343888) */
/* WARNING: Removing unreachable block (ram,0x00010834389c) */
/* WARNING: Removing unreachable block (ram,0x0001083438b0) */
/* WARNING: Removing unreachable block (ram,0x0001083438bc) */
/* WARNING: Removing unreachable block (ram,0x0001083438c0) */
/* WARNING: Removing unreachable block (ram,0x0001083438c4) */
/* WARNING: Removing unreachable block (ram,0x0001083438cc) */
/* WARNING: Removing unreachable block (ram,0x0001083438d0) */
/* WARNING: Removing unreachable block (ram,0x0001083438d4) */
/* WARNING: Removing unreachable block (ram,0x0001083438e8) */
/* WARNING: Removing unreachable block (ram,0x0001083438f4) */
/* WARNING: Removing unreachable block (ram,0x000108343aac) */
/* WARNING: Removing unreachable block (ram,0x000108343ab4) */
/* WARNING: Removing unreachable block (ram,0x000108343abc) */
/* WARNING: Removing unreachable block (ram,0x000108343a28) */
/* WARNING: Removing unreachable block (ram,0x000108343974) */
/* WARNING: Removing unreachable block (ram,0x000108343960) */
/* WARNING: Removing unreachable block (ram,0x000108343988) */
/* WARNING: Removing unreachable block (ram,0x000108343994) */
/* WARNING: Removing unreachable block (ram,0x000108343998) */
/* WARNING: Removing unreachable block (ram,0x00010834399c) */

void FUN_108343d7c(undefined8 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = param_2;
  FUN_108343d54();
  if ((int)piVar5 != 0) {
    if (param_2 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar2) {
          *param_2 = *param_2 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *param_1 = param_2;
    return;
  }
  iVar3 = 0xdf1cb34;
  param_2 = param_2 + 10;
  func_0x000108407f28();
  if (iVar3 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_108343a34();
    if ((int)param_2 != 0) {
      FUN_108343ba0();
      if (param_2 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar2) {
            *param_2 = *param_2 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *param_1 = param_2;
      return;
    }
    uVar4 = 0x90;
    __Znwm();
    FUN_1083437bc();
    *param_1 = uVar4;
  }
  return;
}



/* Entry: 108343f98; end: 108344003;  */

bool FUN_108343f98(long param_1,long param_2)

{
  bool bVar1;
  
  if (param_1 != param_2) {
    bVar1 = false;
    if ((param_1 != 0) && (param_2 != 0)) {
      bVar1 = CONCAT44(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8)) ==
              CONCAT44(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    }
    return bVar1;
  }
  return true;
}



/* Entry: 108344004; end: 1083441a3;  */

char * FUN_108344004(char *param_1,char *param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  char *pcVar8;
  undefined1 auVar9 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_74 [16];
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  param_1[4] = '\0';
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  iVar1 = param_3;
  if (param_5 != 1) {
    iVar1 = param_5;
  }
  if (param_2 == (char *)0x0) {
    param_2 = param_1;
    FUN_108343afc();
  }
  pcVar2 = param_2;
  if (param_4 != (char *)0x0) {
    pcVar2 = param_4;
  }
  iVar3 = *(int *)(param_2 + 8);
  iVar4 = *(int *)(pcVar2 + 8);
  if (param_3 != iVar1 ||
      CONCAT44(*(undefined4 *)(param_2 + 4),iVar3) != CONCAT44(*(undefined4 *)(pcVar2 + 4),iVar4)) {
    *param_1 = param_3 == 2;
    pcVar8 = param_2;
    FUN_108343d54();
    param_1[1] = (byte)pcVar8 ^ 1;
    param_1[2] = iVar3 != iVar4;
    pcVar8 = pcVar2;
    FUN_108343d54();
    param_1[3] = (byte)pcVar8 ^ 1;
    param_1[4] = param_3 != 1 && iVar1 == 2;
    if (iVar3 != iVar4) {
      FUN_108343cf4(param_2,pcVar2,auStack_74);
      auVar7._8_8_ = uStack_5c;
      auVar7._0_8_ = uStack_64;
      auVar14._8_8_ = uStack_5c;
      auVar14._0_8_ = uStack_64;
      auVar14 = NEON_ext(auVar14,auStack_74,4,1);
      auVar18._4_12_ = auVar14._4_12_;
      auVar18._0_4_ = auVar14._4_4_;
      auVar16._0_8_ = auVar18._0_8_;
      auVar16._8_4_ = auVar14._12_4_;
      auVar16._12_4_ = auVar14._12_4_;
      auVar15._8_8_ = auVar16._8_8_;
      auVar15._4_4_ = auStack_74._4_4_;
      auVar15._0_4_ = auVar14._4_4_;
      auVar17._0_12_ = auVar15._0_12_;
      auVar17._12_4_ = auStack_74._12_4_;
      auVar18 = NEON_ext(auVar17,auVar17,8,1);
      auVar14 = NEON_ext(auStack_74,auVar7,4,1);
      auVar9._4_12_ = auVar14._4_12_;
      auVar9._0_4_ = auVar14._4_4_;
      auVar11._0_8_ = auVar9._0_8_;
      auVar11._8_4_ = auVar14._12_4_;
      auVar11._12_4_ = auVar14._12_4_;
      auVar10._8_8_ = auVar11._8_8_;
      auVar10._4_4_ = (int)((ulong)uStack_64 >> 0x20);
      auVar10._0_4_ = auVar14._4_4_;
      auVar12._0_12_ = auVar10._0_12_;
      auVar12._12_4_ = (int)((ulong)uStack_5c >> 0x20);
      auVar14 = NEON_ext(auVar12,auVar12,8,1);
      *(long *)(param_1 + 0x48) = auVar18._8_8_;
      *(long *)(param_1 + 0x40) = auVar18._0_8_;
      *(long *)(param_1 + 0x58) = auVar14._8_8_;
      *(long *)(param_1 + 0x50) = auVar14._0_8_;
      *(undefined4 *)(param_1 + 0x60) = uStack_54;
    }
    uVar5 = *(undefined8 *)(param_2 + 0xc);
    uVar6 = *(undefined8 *)(param_2 + 0x14);
    uVar13 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x14) = uVar13;
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(undefined8 *)(param_1 + 8) = uVar5;
    FUN_108343c14(pcVar2);
    uVar5 = *(undefined8 *)(pcVar2 + 0x4c);
    uVar6 = *(undefined8 *)(pcVar2 + 0x54);
    uVar13 = *(undefined8 *)(pcVar2 + 0x58);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(pcVar2 + 0x60);
    *(undefined8 *)(param_1 + 0x30) = uVar13;
    *(undefined8 *)(param_1 + 0x2c) = uVar6;
    *(undefined8 *)(param_1 + 0x24) = uVar5;
    if (param_1[1] == '\x01') {
      if ((param_1[2] & 1U) != 0) {
        return param_1;
      }
      if (param_1[3] != '\x01') {
        return param_1;
      }
      if (*(int *)(param_2 + 4) != *(int *)(pcVar2 + 4)) {
        return param_1;
      }
      param_1[1] = '\0';
      param_1[3] = '\0';
    }
    if (((*param_1 == '\x01') && ((param_1[3] & 1U) == 0)) && (param_1[4] == '\x01')) {
      *param_1 = '\0';
      param_1[4] = '\0';
    }
  }
  return param_1;
}



/* Entry: 1083441a4; end: 10834436f;  */

void FUN_1083441a4(void)

{
  undefined1 in_ZR;
  long lVar1;
  float *pfVar2;
  float *unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  
  func_0x000108344380();
  if ((bool)in_ZR) {
    fVar3 = 1.0 / unaff_x19[3];
    if (fVar3 * 0.0 != 0.0) {
      fVar3 = 0.0;
    }
    *(ulong *)unaff_x19 =
         CONCAT44((float)((ulong)*(undefined8 *)unaff_x19 >> 0x20) * fVar3,
                  (float)*(undefined8 *)unaff_x19 * fVar3);
    unaff_x19[2] = fVar3 * unaff_x19[2];
  }
  if (*(char *)(unaff_x20 + 1) == '\x01') {
    fVar3 = *unaff_x19;
    func_0x000108344378();
    *unaff_x19 = fVar3;
    fVar3 = unaff_x19[1];
    func_0x000108344378();
    unaff_x19[1] = fVar3;
    fVar3 = unaff_x19[2];
    func_0x000108344378();
    unaff_x19[2] = fVar3;
  }
  if (*(char *)(unaff_x20 + 2) == '\x01') {
    fVar3 = *unaff_x19;
    fVar4 = unaff_x19[1];
    pfVar2 = (float *)(unaff_x20 + 0x40);
    fVar5 = unaff_x19[2];
    for (lVar1 = 0; lVar1 != 0xc; lVar1 = lVar1 + 4) {
      *(float *)((long)unaff_x19 + lVar1) = fVar4 * pfVar2[3] + fVar3 * *pfVar2 + fVar5 * pfVar2[6];
      pfVar2 = pfVar2 + 1;
    }
  }
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    fVar3 = *unaff_x19;
    func_0x000108344370();
    *unaff_x19 = fVar3;
    fVar3 = unaff_x19[1];
    func_0x000108344370();
    unaff_x19[1] = fVar3;
    fVar3 = unaff_x19[2];
    func_0x000108344370();
    unaff_x19[2] = fVar3;
  }
  if (*(char *)(unaff_x20 + 4) == '\x01') {
    fVar3 = unaff_x19[3];
    *(ulong *)unaff_x19 =
         CONCAT44(fVar3 * (float)((ulong)*(undefined8 *)unaff_x19 >> 0x20),
                  (float)*(undefined8 *)unaff_x19 * fVar3);
    unaff_x19[2] = fVar3 * unaff_x19[2];
  }
  return;
}



/* Entry: 108344370; end: 108344393;  */

float FUN_108344370(float param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  puVar1 = (undefined4 *)(unaff_x20 + 0x24);
  fVar3 = -1.0;
  if (0.0 <= param_1) {
    fVar3 = 1.0;
  }
  puVar2 = puVar1;
  func_0x000108407f34(puVar1,&fStack_58,&fStack_70);
  if ((int)puVar2 - 1U < 4) {
    param_1 = param_1 * fVar3;
    switch((int)puVar2) {
    case 1:
      if (*(float *)(unaff_x20 + 0x34) <= param_1) {
        param_1 = *(float *)(unaff_x20 + 0x2c) + param_1 * *(float *)(unaff_x20 + 0x28);
        FUN_108407de8(param_1,*puVar1);
        param_1 = param_1 + *(float *)(unaff_x20 + 0x38);
      }
      else {
        param_1 = *(float *)(unaff_x20 + 0x3c) + param_1 * *(float *)(unaff_x20 + 0x30);
      }
      break;
    case 2:
      FUN_108407de8(param_1,uStack_50);
      param_1 = (fStack_58 + param_1 * fStack_54) / (fStack_4c + param_1 * fStack_48);
      FUN_108407de8(param_1,uStack_44);
      break;
    case 3:
      fVar4 = param_1 * fStack_70;
      if (fVar4 <= 1.0) {
        FUN_108407de8(fVar4,uStack_6c);
      }
      else {
        fVar4 = (param_1 - fStack_60) * fStack_68 * 1.442695;
        func_0x000108407e34(fVar4);
        fVar4 = fVar4 + fStack_64;
      }
      return fVar3 * (fStack_5c + 1.0) * fVar4;
    case 4:
      param_1 = param_1 / (fStack_5c + 1.0);
      if (param_1 <= 1.0) {
        FUN_108407de8(param_1,uStack_6c);
        param_1 = fStack_70 * param_1;
      }
      else {
        param_1 = param_1 - fStack_64;
        func_0x000108407edc(param_1);
        param_1 = fStack_60 + param_1 * 0.6931472 * fStack_68;
      }
    }
    fVar3 = fVar3 * param_1;
  }
  else {
    fVar3 = 0.0;
  }
  return fVar3;
}



/* Entry: 108344394; end: 10834450b;  */

void FUN_108344394(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((((param_2 == 0) && (param_3 == 0)) && (param_4 == 0)) && (param_5 == 0)) {
    *param_1 = 0;
  }
  else {
    uStack_50 = 0;
    uStack_68 = 0;
    lStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_98 = 0;
    uStack_88 = 0x400000100;
    uStack_90 = 0x200000001;
    lStack_78 = 0;
    lStack_80 = 0;
    plVar1 = &lStack_80;
    func_0x00010821afec(plVar1,&uStack_98);
    FUN_10810a400(&uStack_98);
    if (((ulong)plVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      for (lVar3 = 0; lVar3 != 0x100; lVar3 = lVar3 + 1) {
        uVar4 = (undefined1)lVar3;
        uVar5 = uVar4;
        if (param_2 != 0) {
          uVar5 = *(undefined1 *)(param_2 + lVar3);
        }
        *(undefined1 *)(lStack_78 + lVar3) = uVar5;
        uVar5 = uVar4;
        if (param_3 != 0) {
          uVar5 = *(undefined1 *)(param_3 + lVar3);
        }
        *(undefined1 *)(lStack_78 + lStack_70 + lVar3) = uVar5;
        uVar5 = uVar4;
        if (param_4 != 0) {
          uVar5 = *(undefined1 *)(param_4 + lVar3);
        }
        *(undefined1 *)(lStack_78 + lStack_70 * 2 + lVar3) = uVar5;
        if (param_5 != 0) {
          uVar4 = *(undefined1 *)(param_5 + lVar3);
        }
        *(undefined1 *)(lStack_78 + lStack_70 * 3 + lVar3) = uVar4;
      }
      if (lStack_80 != 0) {
        *(undefined1 *)(lStack_80 + 0x59) = 2;
      }
      uVar2 = 0x48;
      __Znwm();
      FUN_10834450c();
    }
    *param_1 = uVar2;
    FUN_108330548(&lStack_80);
  }
  return;
}



/* Entry: 10834450c; end: 108344543;  */

undefined8 * FUN_10834450c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a3e070;
  FUN_10833043c(param_1 + 2);
  return param_1;
}



/* Entry: 108344544; end: 108344547;  */

undefined8 * FUN_108344544(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e070;
  FUN_108330548(param_1 + 2);
  return param_1;
}



/* Entry: 108344548; end: 10834455b;  */

void FUN_108344548(void)

{
  FUN_10834455c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10834455c; end: 10834458b;  */

undefined8 * FUN_10834455c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e070;
  FUN_108330548(param_1 + 2);
  return param_1;
}



/* Entry: 10834458c; end: 108344657;  */

long FUN_10834458c(int param_1,ulong param_2,long param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lStack_48;
  
  uVar3 = param_2 >> 0x20;
  if (param_4 == 0) {
    iVar4 = 1;
  }
  else {
    uVar2 = param_2;
    FUN_108368974(param_2,uVar3);
    iVar4 = (int)uVar2 + 1;
  }
  lStack_48 = 0;
  if (param_1 - 1U < 3) {
    lStack_48 = 0;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (param_3 != 0) {
        FUN_10826852c(param_3,&lStack_48);
      }
      lStack_48 = lStack_48 + (long)(((int)uVar3 + 3 >> 2) * ((int)param_2 + 3 >> 2)) * 8;
      uVar1 = (int)param_2 / 2;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      param_2 = (ulong)uVar1;
      uVar1 = (int)uVar3 / 2;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      uVar3 = (ulong)uVar1;
    }
  }
  return lStack_48;
}



/* Entry: 108344658; end: 10834467f;  */

undefined8 FUN_108344658(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 4) {
    return *(undefined8 *)(&UNK_10df1cbd8 + (ulong)param_1 * 8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108344674);
  (*pcVar1)();
}



/* Entry: 108344680; end: 10834492f;  */

float * FUN_108344680(float param_1,float param_2,float *param_3,undefined8 *param_4,float *param_5,
                     uint param_6,float param_7,uint param_8)

{
  uint uVar1;
  float *pfVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  long extraout_x8;
  float *extraout_x8_00;
  float *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  float fVar9;
  undefined8 uVar10;
  undefined8 auStack_80 [7];
  undefined8 uStack_48;
  
  iVar7 = (int)param_5;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 != param_2) {
                    /* WARNING: Could not recover jumptable at 0x0001083446fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df1cbf8)[(ulong)param_4 & 0xffffffff] * 4 + 0x108344700))();
    return param_3;
  }
  lVar8 = *(long *)param_5;
  if (*(int *)(lVar8 + 0x48) != 0) {
    if ((int)*(uint *)(lVar8 + 0x30) < 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + (ulong)*(uint *)(lVar8 + 0x30) * 8 + -8);
    }
    param_4 = auStack_80;
    auStack_80[0] = uVar10;
    func_0x0001081f7a64(param_5,param_4);
    param_1 = (float)uVar10;
    param_3 = param_5;
  }
  FUN_108345838(uStack_48);
  if (extraout_x9 == extraout_x8) {
    return param_3;
  }
  ___stack_chk_fail();
  pfVar6 = param_3;
  fVar9 = param_1;
  FUN_108345838(param_4);
  pfVar2 = extraout_x8_00;
  if (param_8 < 8) {
    uVar1 = param_6 - iVar7;
    cVar3 = SBORROW4(uVar1,0x400);
    cVar4 = (int)(uVar1 - 0x400) < 0;
    bVar5 = uVar1 == 0x400;
    pfVar2 = extraout_x8_00;
    if (0x3ff < uVar1) {
      fVar9 = param_3[10];
      func_0x000108345924(fVar9,CONCAT44(ABS(((float)((ulong)*(long *)extraout_x8_00 >> 0x20) +
                                             (float)((ulong)*(long *)(extraout_x8_00 + 4) >> 0x20))
                                             * 0.5 * -0.5 +
                                             (float)((ulong)*(long *)(extraout_x8_00 + 2) >> 0x20) *
                                             0.5),ABS(((float)*(long *)extraout_x8_00 +
                                                      (float)*(long *)(extraout_x8_00 + 4)) * 0.5 *
                                                      -0.5 + (float)*(long *)(extraout_x8_00 + 2) *
                                                             0.5)));
      pfVar2 = extraout_x8_01;
      if (!bVar5 && cVar4 == cVar3) {
        func_0x0001083458d4();
        func_0x00010835158c();
        func_0x000108345874();
        FUN_108344930();
        func_0x0001083458bc();
        FUN_108344930();
        goto LAB_108344a0c;
      }
    }
  }
  pfVar6 = pfVar2;
  func_0x00010816bfdc(pfVar6,pfVar6 + 4);
  if (param_1 < param_1 + fVar9) {
    pfVar6 = param_3 + 0xc;
    FUN_108344a44();
    *pfVar6 = param_1 + fVar9;
    pfVar6[1] = param_7;
    pfVar6[2] = (float)(param_6 & 0x3fffffff | 0x40000000);
  }
LAB_108344a0c:
  FUN_108345838(extraout_x9_00);
  if (extraout_x9_01 == extraout_x8_02) {
    return pfVar6;
  }
  ___stack_chk_fail();
  func_0x00010840f37c();
  return (float *)(*(long *)(pfVar6 + 2) + (long)(int)pfVar6[5] * 0xc + -0xc);
}



/* Entry: 108344930; end: 108344a43;  */

float * FUN_108344930(float param_1,float *param_2,undefined8 param_3,int param_4,uint param_5,
                     float param_6,uint param_7)

{
  uint uVar1;
  float *pfVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  float *pfVar6;
  float *extraout_x8;
  float *extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long extraout_x9_00;
  float fVar7;
  
  pfVar6 = param_2;
  fVar7 = param_1;
  FUN_108345838(param_3);
  pfVar2 = extraout_x8;
  if (param_7 < 8) {
    uVar1 = param_5 - param_4;
    cVar3 = SBORROW4(uVar1,0x400);
    cVar4 = (int)(uVar1 - 0x400) < 0;
    bVar5 = uVar1 == 0x400;
    pfVar2 = extraout_x8;
    if (0x3ff < uVar1) {
      fVar7 = param_2[10];
      func_0x000108345924(fVar7,CONCAT44(ABS(((float)((ulong)*(undefined8 *)extraout_x8 >> 0x20) +
                                             (float)((ulong)*(undefined8 *)(extraout_x8 + 4) >> 0x20
                                                    )) * 0.5 * -0.5 +
                                             (float)((ulong)*(undefined8 *)(extraout_x8 + 2) >> 0x20
                                                    ) * 0.5),
                                         ABS(((float)*(undefined8 *)extraout_x8 +
                                             (float)*(undefined8 *)(extraout_x8 + 4)) * 0.5 * -0.5 +
                                             (float)*(undefined8 *)(extraout_x8 + 2) * 0.5)));
      pfVar2 = extraout_x8_00;
      if (!bVar5 && cVar4 == cVar3) {
        func_0x0001083458d4();
        func_0x00010835158c();
        func_0x000108345874();
        FUN_108344930();
        func_0x0001083458bc();
        FUN_108344930();
        goto LAB_108344a0c;
      }
    }
  }
  pfVar6 = pfVar2;
  func_0x00010816bfdc(pfVar6,pfVar6 + 4);
  if (param_1 < param_1 + fVar7) {
    pfVar6 = param_2 + 0xc;
    FUN_108344a44();
    *pfVar6 = param_1 + fVar7;
    pfVar6[1] = param_6;
    pfVar6[2] = (float)(param_5 & 0x3fffffff | 0x40000000);
  }
LAB_108344a0c:
  FUN_108345838(extraout_x9);
  if (extraout_x9_00 == extraout_x8_01) {
    return pfVar6;
  }
  ___stack_chk_fail();
  func_0x00010840f37c();
  return (float *)(*(long *)(pfVar6 + 2) + (long)(int)pfVar6[5] * 0xc + -0xc);
}



/* Entry: 108344a44; end: 108344a73;  */

long FUN_108344a44(long param_1)

{
  func_0x00010840f37c();
  return *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 0xc + -0xc;
}



/* Entry: 108344a74; end: 108344bdf;  */

ulong FUN_108344a74(ulong param_1,float param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 *param_6,undefined8 param_7,undefined8 *param_8,undefined8 param_9,
                   uint param_10)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fStack_78;
  float fStack_74;
  
  uVar3 = (uint)param_7;
  iVar1 = (int)(uVar3 + (int)param_5) >> 1;
  fStack_78 = (float)iVar1 / 1.0737418e+09;
  FUN_108352d70(param_4);
  if (!NAN(param_2 * (fStack_78 - fStack_78))) {
    fVar5 = fStack_78;
    fStack_74 = param_2;
    if ((param_10 < 8) && (0x3ff < uVar3 - (int)param_5)) {
      fVar4 = ABS(fStack_78 + ((float)*param_6 + (float)*param_8) * -0.5);
      fVar5 = ABS(param_2 + ((float)((ulong)*param_6 >> 0x20) + (float)((ulong)*param_8 >> 0x20)) *
                            -0.5);
      if (fVar5 <= fVar4) {
        fVar5 = fVar4;
      }
      if (*(float *)(param_3 + 0x28) < fVar5) {
        FUN_108344a74(param_1,param_3,param_4,param_5,param_6,iVar1,&fStack_78,param_9,param_10 + 1)
        ;
        FUN_108344a74(param_3,param_4,iVar1,&fStack_78,param_7,param_8,param_9,param_10 + 1);
        return param_1;
      }
    }
    func_0x00010816bfdc(param_6,param_8);
    fVar4 = (float)param_1;
    fVar5 = fVar4 + fVar5;
    param_1 = (ulong)(uint)fVar5;
    if (fVar4 < fVar5) {
      pfVar2 = (float *)(param_3 + 0x30);
      FUN_108344a44();
      *pfVar2 = fVar5;
      pfVar2[1] = (float)param_9;
      pfVar2[2] = (float)(uVar3 | 0xc0000000);
    }
  }
  return param_1;
}



/* Entry: 108344be0; end: 108344d1f;  */

ulong FUN_108344be0(ulong param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                   float *param_6,undefined8 param_7,int param_8,undefined8 param_9,
                   undefined8 param_10,uint param_11)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  float *extraout_x8;
  float *extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int unaff_w25;
  float fVar6;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_68;
  ulong uVar7;
  
  pfVar5 = param_6;
  uVar7 = param_1;
  FUN_108345838(param_7);
  pfVar1 = extraout_x8;
  uStack_68 = extraout_x9;
  if ((param_11 < 8) && (pfVar1 = extraout_x8, 0x3ff < (uint)param_9 - param_8)) {
    fVar6 = param_6[10];
    uVar7 = (ulong)(uint)fVar6;
    uVar8 = *(ulong *)extraout_x8;
    fVar11 = (float)uVar8;
    param_3 = (float)*(ulong *)(extraout_x8 + 6) - fVar11;
    fVar9 = (float)(uVar8 >> 0x20);
    fVar10 = ABS((fVar11 + param_3 * 0.33333334) - (float)*(ulong *)(extraout_x8 + 2));
    param_5 = ABS((fVar9 + ((float)(*(ulong *)(extraout_x8 + 6) >> 0x20) - fVar9) * 0.33333334) -
                  (float)(*(ulong *)(extraout_x8 + 2) >> 0x20));
    param_4 = param_5;
    if (param_5 <= fVar10) {
      param_4 = fVar10;
    }
    cVar4 = NAN(param_4) || NAN(fVar6);
    bVar3 = param_4 == fVar6;
    cVar2 = param_4 < fVar6;
    if (param_4 <= fVar6) {
      param_4 = 0.6666667;
      fVar6 = param_3 * 0.6666667;
      param_3 = (float)*(ulong *)(extraout_x8 + 4);
      uVar8 = (ulong)(uint)ABS((fVar11 + fVar6) - param_3);
      func_0x000108345924();
      param_2 = (undefined4)uVar8;
      pfVar1 = extraout_x8_00;
      if (bVar3 || cVar2 != cVar4) goto LAB_108344cb8;
    }
    param_2 = (undefined4)uVar8;
    func_0x0001083458d4();
    FUN_108351de8();
    func_0x000108345874();
    FUN_108344be0();
    fVar6 = (float)(unaff_w25 + 0x18);
    func_0x0001083458bc();
    FUN_108344be0();
    uVar8 = uVar7;
  }
  else {
LAB_108344cb8:
    pfVar5 = pfVar1;
    fVar6 = (float)((int)pfVar5 + 0x18);
    func_0x00010816bfdc();
    fVar11 = (float)param_1 + (float)uVar7;
    uVar8 = (ulong)(uint)fVar11;
    if ((float)param_1 < fVar11) {
      pfVar5 = param_6 + 0xc;
      FUN_108344a44();
      *pfVar5 = fVar11;
      pfVar5[1] = (float)param_10;
      pfVar5[2] = (float)((uint)param_9 & 0x3fffffff | 0x80000000);
    }
  }
  fVar11 = (float)uVar7;
  FUN_108345838(uStack_68);
  if (extraout_x9_00 == extraout_x8_01) {
    return uVar8;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_108344d20;
  fStack_e0 = param_3;
  fStack_dc = param_4;
  fStack_d8 = fVar11;
  uStack_d4 = param_2;
  uStack_d0 = uVar8;
  uStack_c8 = param_1;
  uStack_c0 = param_9;
  uStack_b8 = param_10;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010816bfdc(&fStack_d8,&fStack_e0);
  fVar11 = param_5 + fVar11;
  if (param_5 < fVar11) {
    pfVar5 = pfVar5 + 0xc;
    FUN_108344a44();
    *pfVar5 = fVar11;
    pfVar5[1] = fVar6;
    pfVar5[2] = 1.9999999;
  }
  return (ulong)(uint)fVar11;
}



/* Entry: 108344d20; end: 108344d8b;  */

float FUN_108344d20(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   float param_5,long param_6,float param_7)

{
  float *pfVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  
  uStack_40 = param_3;
  uStack_3c = param_4;
  fStack_38 = param_1;
  uStack_34 = param_2;
  func_0x00010816bfdc(&fStack_38,&uStack_40);
  param_1 = param_5 + param_1;
  if (param_5 < param_1) {
    pfVar1 = (float *)(param_6 + 0x30);
    FUN_108344a44();
    *pfVar1 = param_1;
    pfVar1[1] = param_7;
    pfVar1[2] = 1.9999999;
  }
  return param_1;
}



/* Entry: 108344d8c; end: 108345057;  */

void FUN_108344d8c(undefined *param_1,ulong param_2,undefined **param_3,ulong *param_4,
                  ulong *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  ulong *puVar5;
  float fVar6;
  ulong *puVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  undefined **ppuVar14;
  ulong *puVar15;
  undefined *puVar16;
  float *pfVar17;
  ulong *puVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined **ppuVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined **ppuVar24;
  ulong *puVar25;
  code *pcVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  byte *in_register_00005028;
  byte *pbVar30;
  float fVar31;
  undefined *unaff_d9;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_d0 [15];
  undefined1 uStack_c1;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  float fStack_88;
  
  fVar28 = SUB84(unaff_d9,0);
  puVar7 = &uStack_a0;
  bVar20 = *(byte *)((long)param_3 + 0x2c);
  func_0x00010840f140(param_3 + 6);
  ppuVar14 = param_3 + 9;
  func_0x00010840f140();
  pcVar26 = (code *)0x108344dd4;
  func_0x000108345848();
  pbVar4 = uStack_98;
  bVar3 = 0;
  ppuVar24 = (undefined **)0xffffffff;
  uVar32 = 0;
  uVar34 = 0x3f800000;
  puVar16 = (undefined *)0x0;
  puVar15 = (ulong *)(ulong)bVar20;
  while( true ) {
    fVar31 = SUB84(puVar16,0);
    fVar27 = SUB84(param_1,0);
    uVar23 = (uint)ppuVar24;
    if (param_3[2] == pbVar4) break;
    bVar20 = *param_3[2];
    ppuVar21 = (undefined **)(ulong)bVar20;
    if (5 < bVar20) goto LAB_108345054;
    cVar11 = false;
    uVar12 = bVar20 == 0;
    bVar8 = true;
    cVar9 = false;
    if ((bool)(bVar3 & uVar12)) break;
    puVar18 = (ulong *)(param_3[3] + *(long *)(&UNK_10df1cc20 + (long)ppuVar21 * 8) * 8);
    bVar10 = (bool)cVar9;
    puVar25 = (ulong *)0x1;
    puVar5 = (ulong *)0x1;
    uVar29 = param_2;
    pbVar30 = in_register_00005028;
    uVar33 = 0;
    uVar35 = 0x3f800000;
    fVar6 = fVar28;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(ppuVar21) {
    default:
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppuVar24 = (undefined **)(ulong)(uVar23 + 1);
    case (undefined **)0x8c:
    case (undefined **)0x90:
                    /* WARNING: This code block may not be properly labeled as switch case */
      bVar3 = 1;
code_r0x000108344e50:
                    /* WARNING: This code block may not be properly labeled as switch case */
      param_5 = (ulong *)0x1;
      FUN_10840f460();
      param_4 = puVar18;
code_r0x000108344e5c:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar25 = puVar15;
      break;
    case (undefined **)0x1:
    case (undefined **)0x59:
    case (undefined **)0x5a:
                    /* WARNING: This code block may not be properly labeled as switch case */
      param_1 = (undefined *)(ulong)(uint)*puVar18;
      param_2 = (ulong)*(uint *)((long)puVar18 + 4);
      in_register_00005028 = (byte *)0x0;
      func_0x000108345904(param_1,param_2,(uint)puVar18[1],*(uint *)((long)puVar18 + 0xc),param_3);
      func_0x0001083458f8();
      puVar25 = puVar15;
      puVar5 = puVar18 + 1;
      puVar16 = unaff_d9;
      if (!(bool)uVar12 && cVar11 == cVar9) goto code_r0x000108344efc;
      break;
    case (undefined **)0x2:
      func_0x000108345854();
      FUN_108344930();
    case (undefined **)0xb:
    case (undefined **)0x9f:
    case (undefined **)0xf4:
                    /* WARNING: This code block may not be properly labeled as switch case */
      func_0x0001083458f8();
code_r0x000108344f20:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar25 = puVar15;
      puVar16 = unaff_d9;
      if (!(bool)uVar12 && cVar11 == cVar9) {
code_r0x000108344f24:
                    /* WARNING: This code block may not be properly labeled as switch case */
        param_4 = puVar18 + 1;
        param_5 = (ulong *)0x2;
        FUN_10840f460(param_3 + 9);
        ppuVar24 = (undefined **)(ulong)(uVar23 + 2);
        puVar25 = puVar15;
        puVar16 = unaff_d9;
      }
      break;
    case (undefined **)0x3:
      fVar27 = *(float *)param_3[4];
      pbVar30 = (byte *)puVar18[1];
      param_2 = *puVar18;
      uStack_90 = puVar18[2];
    case (undefined **)0x56:
    case (undefined **)0x58:
    case (undefined **)0x6b:
                    /* WARNING: This code block may not be properly labeled as switch case */
      uVar29 = (ulong)(uint)(fVar27 - fVar27);
      in_register_00005028 = (byte *)0x0;
      bVar10 = true;
      uStack_a0 = param_2;
      uStack_98 = pbVar30;
      if (!NAN(fVar27 - fVar27)) {
        bVar10 = false;
      }
code_r0x000108344e80:
                    /* WARNING: This code block may not be properly labeled as switch case */
      cVar11 = false;
      uVar12 = true;
      cVar9 = false;
      if (!bVar10) {
        cVar11 = false;
        uVar12 = false;
        cVar9 = true;
        if (!NAN(fVar27)) {
          cVar11 = fVar27 < 0.0;
          uVar12 = fVar27 == 0.0;
          cVar9 = false;
        }
      }
      param_4 = &uStack_a0;
      param_1 = puVar16;
      fStack_88 = fVar27;
      if ((bool)uVar12 || cVar11 != cVar9) {
        fStack_88 = 1.0;
        param_4 = &uStack_a0;
      }
code_r0x000108344ea0:
                    /* WARNING: This code block may not be properly labeled as switch case */
      param_5 = (ulong *)0x0;
      param_2 = uVar29;
code_r0x000108344ea8:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_108344a74();
      func_0x0001083458f8();
      puVar25 = puVar15;
      puVar16 = unaff_d9;
      if (!(bool)uVar12 && cVar11 == cVar9) {
        ppuVar14 = param_3 + 9;
        func_0x0001081e8e18();
        param_1 = (undefined *)(ulong)(uint)fStack_88;
        *ppuVar14 = param_1;
        param_4 = puVar18 + 1;
        param_5 = (ulong *)0x2;
code_r0x000108344f58:
        FUN_10840f460();
        ppuVar24 = (undefined **)(ulong)(uVar23 + 3);
        puVar25 = puVar15;
        puVar16 = unaff_d9;
      }
      break;
    case (undefined **)0x4:
      func_0x000108345854();
    case (undefined **)0xb7:
    case (undefined **)0xcb:
    case (undefined **)0xdf:
    case (undefined **)0xf3:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_108344be0();
      func_0x0001083458f8();
      puVar25 = puVar15;
      puVar16 = unaff_d9;
      if ((bool)uVar12 || cVar11 != cVar9) break;
code_r0x000108344f50:
                    /* WARNING: This code block may not be properly labeled as switch case */
      param_4 = puVar18 + 1;
code_r0x000108344f54:
                    /* WARNING: This code block may not be properly labeled as switch case */
      param_5 = (ulong *)0x3;
      goto code_r0x000108344f58;
    case (undefined **)0x5:
    case (undefined **)0x55:
      break;
    case (undefined **)0x7:
    case (undefined **)0x73:
code_r0x000108344efc:
                    /* WARNING: This code block may not be properly labeled as switch case */
      param_4 = puVar5;
      param_5 = (ulong *)0x1;
    case (undefined **)0xa:
    case (undefined **)0x9e:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_10840f460();
      ppuVar24 = (undefined **)(ulong)(uVar23 + 1);
code_r0x000108344f10:
      puVar25 = puVar15;
      puVar16 = unaff_d9;
                    /* WARNING: This code block may not be properly labeled as switch case */
      break;
    case (undefined **)0x8:
      goto code_r0x000108344e80;
    case (undefined **)0x9:
    case (undefined **)0x5f:
    case (undefined **)0x6a:
      goto code_r0x000108344ea8;
    case (undefined **)0xc:
    case (undefined **)0x95:
    case (undefined **)0xa0:
    case (undefined **)0xf5:
      goto code_r0x000108344f90;
    case (undefined **)0xd:
    case (undefined **)0x96:
    case (undefined **)0xa1:
    case (undefined **)0xf6:
      goto code_r0x000108344ff0;
    case (undefined **)0xe:
      goto code_r0x000108344f50;
    case (undefined **)0xf:
    case (undefined **)0x12:
    case (undefined **)0xa3:
      goto code_r0x000108345000;
    case (undefined **)0x10:
      goto code_r0x000108344ffc;
    case (undefined **)0x11:
      goto code_r0x000108345014;
    case (undefined **)0x13:
    case (undefined **)0x19:
      goto code_r0x000108345018;
    case (undefined **)0x14:
    case (undefined **)0x1a:
    case (undefined **)0xf8:
      goto code_r0x00010834500c;
    case (undefined **)0x15:
      goto LAB_108344f78;
    case (undefined **)0x16:
    case (undefined **)0x1b:
    case (undefined **)0x98:
    case (undefined **)0x9c:
    case (undefined **)0xa7:
    case (undefined **)0xab:
    case (undefined **)0xaf:
      goto code_r0x000108344fd8;
    case (undefined **)0x17:
    case (undefined **)0xf9:
      goto code_r0x000108344fc8;
    case (undefined **)0x18:
    case (undefined **)0xa9:
      goto code_r0x000108345010;
    case (undefined **)0x2c:
    case (undefined **)0x2d:
    case (undefined **)0x2e:
    case (undefined **)0x2f:
    case (undefined **)0x30:
    case (undefined **)0x31:
    case (undefined **)0x32:
    case (undefined **)0x33:
    case (undefined **)0x34:
    case (undefined **)0x35:
    case (undefined **)0x36:
    case (undefined **)0x37:
    case (undefined **)0x38:
    case (undefined **)0x39:
    case (undefined **)0x3a:
    case (undefined **)0x3b:
    case (undefined **)0x3c:
    case (undefined **)0x3d:
    case (undefined **)0x3e:
    case (undefined **)0x3f:
    case (undefined **)0x40:
    case (undefined **)0x41:
    case (undefined **)0x42:
    case (undefined **)0x43:
    case (undefined **)0x44:
    case (undefined **)0x45:
    case (undefined **)0x46:
    case (undefined **)0x47:
    case (undefined **)0x48:
    case (undefined **)0x49:
    case (undefined **)0x4a:
    case (undefined **)0x4b:
    case (undefined **)0x4c:
    case (undefined **)0x4d:
    case (undefined **)0x4e:
    case (undefined **)0x4f:
    case (undefined **)0x50:
    case (undefined **)0x51:
    case (undefined **)0x52:
    case (undefined **)0x53:
    case (undefined **)0x70:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_1083452c4();
      uVar23 = (uint)ppuVar14 ^ (int)(uint)ppuVar14 >> 0x1f;
      pfVar17 = (float *)((long)ppuVar24 + (long)(int)uVar23 * 0xc);
      fVar28 = 0.0;
      if ((int)uVar23 < 1) {
        fVar27 = 0.0;
      }
      else {
        fVar27 = pfVar17[-3];
        fVar28 = 0.0;
        if (pfVar17[-2] == pfVar17[1]) {
          fVar28 = (float)((uint)pfVar17[-1] & 0x3fffffff) / 1.0737418e+09;
        }
      }
      *(float *)param_3 =
           fVar28 + ((uStack_98._4_4_ - fVar27) *
                    ((float)((uint)pfVar17[2] & 0x3fffffff) / 1.0737418e+09 - fVar28)) /
                    (*pfVar17 - fVar27);
      return;
    case (undefined **)0x5e:
      goto code_r0x000108344fd4;
    case (undefined **)0x61:
    case (undefined **)0x62:
      goto code_r0x000108344f20;
    case (undefined **)0x64:
      goto code_r0x000108345030;
    case (undefined **)0x66:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_1083456f8(param_3);
      pcVar26 = FUN_108345090;
      ppuVar14 = ppuVar24;
      __Unwind_Resume();
      puVar7 = (ulong *)auStack_d0;
      ppuStack_c0 = ppuVar24;
      ppuStack_b8 = param_3;
    case (undefined **)0x78:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar7[4] = (ulong)&stack0xfffffffffffffff0;
      puVar7[5] = (ulong)pcVar26;
      *(char *)((long)puVar7 + 0xf) = (char)param_5;
      *(float *)(puVar7 + 1) = fVar27;
      puVar15 = param_4;
      func_0x000108377398();
      if ((int)puVar15 != 0) {
        FUN_108345110(puVar7,param_4,(long)puVar7 + 0xf,puVar7 + 1);
        uVar19 = *puVar7;
        *puVar7 = 0;
        FUN_10834517c(ppuVar14,uVar19);
        FUN_1083456f8(puVar7);
        return;
      }
      uVar19 = puVar7[4];
      uVar1 = puVar7[5];
      puVar16 = *ppuVar14;
      *ppuVar14 = (undefined *)0x0;
      if (puVar16 != (undefined *)0x0) {
        if (puVar16 != (undefined *)0x0) {
          puVar7[4] = uVar19;
          puVar7[5] = uVar1;
          FUN_1083457cc(puVar16);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
      return;
    case (undefined **)0x68:
      goto code_r0x000108344fa0;
    case (undefined **)0x71:
      goto code_r0x0001083451dc;
    case (undefined **)0x72:
      goto LAB_1083451b0;
    case (undefined **)0x74:
      goto code_r0x000108344ea0;
    case (undefined **)0x75:
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppuVar24 = (undefined **)0x60;
      __Znwm();
      param_3 = ppuVar21;
      puVar18 = param_5;
    case (undefined **)0x79:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_10834571c((uint)*puVar18);
      *param_3 = (undefined *)ppuVar24;
      return;
    case (undefined **)0x76:
      goto code_r0x000108344f88;
    case (undefined **)0x77:
    case (undefined **)0x94:
      goto code_r0x000108344f24;
    case (undefined **)0x7a:
                    /* WARNING: This code block may not be properly labeled as switch case */
      param_3 = ppuVar21;
      ppuVar24 = ppuVar14;
      if (*ppuVar14 != (undefined *)0x0) goto LAB_1083451b0;
      goto LAB_1083451cc;
    case (undefined **)0x7b:
      goto code_r0x000108344f10;
    case (undefined **)0x84:
      goto code_r0x000108344e5c;
    case (undefined **)0x88:
      goto code_r0x000108344e50;
    case (undefined **)0x97:
    case (undefined **)0xaa:
    case (undefined **)0xf7:
      goto code_r0x000108344f54;
    case (undefined **)0x99:
    case (undefined **)0xac:
      goto code_r0x00010834501c;
    case (undefined **)0x9a:
    case (undefined **)0xa5:
    case (undefined **)0xad:
      goto LAB_108344fe8;
    case (undefined **)0x9b:
    case (undefined **)0xae:
      goto code_r0x000108344fd0;
    case (undefined **)0xa2:
      goto code_r0x000108344f7c;
    case (undefined **)0xa4:
      goto code_r0x000108344f84;
    case (undefined **)0xa6:
      goto code_r0x000108345024;
    case (undefined **)0xa8:
      goto code_r0x000108344ff4;
    case (undefined **)0xb6:
    case (undefined **)0xca:
    case (undefined **)0xde:
    case (undefined **)0xf2:
      goto code_r0x000108345044;
    case (undefined **)0xfa:
      goto code_r0x000108345020;
    }
                    /* WARNING: This code block may not be properly labeled as switch case */
    ppuVar14 = param_3 + 2;
    pcVar26 = (code *)0x108344f70;
    func_0x0001081e8ec8();
    puVar15 = puVar25;
  }
LAB_108344f78:
                    /* WARNING: This code block may not be properly labeled as switch case */
  fVar27 = fVar31 - fVar31;
code_r0x000108344f7c:
                    /* WARNING: This code block may not be properly labeled as switch case */
  if (!NAN(fVar27)) {
code_r0x000108344f84:
                    /* WARNING: This code block may not be properly labeled as switch case */
    ppuVar21 = (undefined **)(ulong)*(uint *)((long)param_3 + 0x44);
code_r0x000108344f88:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if ((int)ppuVar21 != 0) {
      fVar6 = fVar31;
      if (((ulong)puVar15 & 1) != 0) {
code_r0x000108344f90:
                    /* WARNING: This code block may not be properly labeled as switch case */
        uVar2 = *(uint *)((long)param_3 + 0x5c);
        if ((int)uVar2 < 1) {
LAB_108345054:
                    /* WARNING: Does not return */
          pcVar26 = (code *)SoftwareBreakpoint(1,0x108345058);
          (*pcVar26)();
        }
        bVar8 = uVar2 <= uVar23;
        cVar9 = SBORROW4(uVar23,uVar2);
        cVar11 = (int)(uVar23 - uVar2) < 0;
        uVar12 = uVar23 == uVar2;
code_r0x000108344fa0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (bVar8) goto LAB_108345054;
        puVar22 = (undefined4 *)param_3[10];
        uVar33 = *puVar22;
        uVar35 = puVar22[1];
        func_0x000108345904(puVar22[(long)ppuVar24 * 2],(puVar22 + (long)ppuVar24 * 2)[1],uVar33,
                            uVar35,param_3);
        func_0x0001083458f8();
code_r0x000108344fc8:
        uVar34 = uVar35;
        uVar32 = uVar33;
                    /* WARNING: This code block may not be properly labeled as switch case */
        fVar6 = fVar28;
        if (!(bool)uVar12 && cVar11 == cVar9) {
          ppuVar14 = param_3 + 9;
code_r0x000108344fd0:
                    /* WARNING: This code block may not be properly labeled as switch case */
          func_0x0001081e8e18();
code_r0x000108344fd4:
                    /* WARNING: This code block may not be properly labeled as switch case */
          *(undefined4 *)ppuVar14 = uVar32;
          *(undefined4 *)((long)ppuVar14 + 4) = uVar34;
code_r0x000108344fd8:
          fVar6 = fVar28;
                    /* WARNING: This code block may not be properly labeled as switch case */
        }
      }
LAB_108344fe8:
      fVar28 = fVar6;
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppuVar14 = (undefined **)0x48;
      __Znwm();
code_r0x000108344ff0:
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppuVar24 = ppuVar14;
code_r0x000108344ff4:
                    /* WARNING: This code block may not be properly labeled as switch case */
      *(undefined4 *)(ppuVar14 + 1) = 1;
code_r0x000108344ffc:
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppuVar21 = &PTR_FUN_110a3e000;
code_r0x000108345000:
                    /* WARNING: This code block may not be properly labeled as switch case */
      *ppuVar14 = (undefined *)(ppuVar21 + 0x16);
code_r0x00010834500c:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_10840f0f8();
code_r0x000108345010:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000108345014:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000108345018:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_10840f0f8();
code_r0x00010834501c:
                    /* WARNING: This code block may not be properly labeled as switch case */
      bVar20 = (byte)puVar15 & 1;
code_r0x000108345020:
                    /* WARNING: This code block may not be properly labeled as switch case */
      *(float *)(ppuVar24 + 8) = fVar28;
code_r0x000108345024:
                    /* WARNING: This code block may not be properly labeled as switch case */
      *(byte *)((long)ppuVar24 + 0x44) = bVar20;
    }
  }
code_r0x000108345030:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000108345044:
                    /* WARNING: This code block may not be properly labeled as switch case */
  return;
LAB_1083451cc:
  puVar16 = (undefined *)0x0;
  goto LAB_1083451d0;
  while( true ) {
    puVar16 = *ppuVar24;
    FUN_108344d8c();
    param_3 = ppuVar21;
    if (puVar16 != (undefined *)0x0) break;
LAB_1083451b0:
    ppuVar21 = param_3;
                    /* WARNING: This code block may not be properly labeled as switch case */
    iVar13 = (int)*ppuVar24;
    func_0x0001083451e0();
    if (iVar13 == 0) goto LAB_1083451cc;
  }
LAB_1083451d0:
  *ppuVar21 = puVar16;
code_r0x0001083451dc:
                    /* WARNING: This code block may not be properly labeled as switch case */
  return;
}



/* Entry: 108345058; end: 10834508f;  */

undefined8 * FUN_108345058(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_108345090();
  return param_1;
}



/* Entry: 108345090; end: 10834510f;  */

void FUN_108345090(undefined4 param_1,long *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_21;
  
  uVar1 = param_3;
  uStack_28 = param_1;
  uStack_21 = param_4;
  func_0x000108377398();
  if ((int)uVar1 != 0) {
    FUN_108345110(&uStack_30,param_3,&uStack_21,&uStack_28);
    uVar1 = uStack_30;
    uStack_30 = 0;
    FUN_10834517c(param_2,uVar1);
    FUN_1083456f8(&uStack_30);
    return;
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    if (lVar2 != 0) {
      FUN_1083457cc(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108345110; end: 10834517b;  */

void FUN_108345110(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  FUN_10834571c(*param_4);
  *param_1 = uVar1;
  return;
}



/* Entry: 10834517c; end: 108345193;  */

void FUN_10834517c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083457cc(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108345194; end: 1083452c3;  */

void FUN_108345194(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*param_2 == 0) {
LAB_1083451cc:
    lVar2 = 0;
  }
  else {
    do {
      iVar1 = (int)*param_2;
      func_0x0001083451e0();
      if (iVar1 == 0) goto LAB_1083451cc;
      lVar2 = *param_2;
      FUN_108344d8c();
    } while (lVar2 == 0);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1083452c4; end: 10834533b;  */

ulong FUN_1083452c4(long param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 < 1) {
    return 0xffffffff;
  }
  uVar4 = 0;
  fVar5 = *param_3;
  uVar1 = param_2 - 1;
  while (uVar2 = uVar1, uVar3 = (ulong)uVar2, uVar4 < uVar2) {
    uVar1 = uVar2 + uVar4 >> 1;
    if (*(float *)(param_1 + (ulong)uVar1 * 0xc) < fVar5) {
      uVar4 = uVar1 + 1;
      uVar1 = uVar2;
    }
  }
  fVar6 = *(float *)(param_1 + uVar3 * 0xc);
  if (fVar5 <= fVar6) {
    if (fVar5 < fVar6) {
      uVar3 = (ulong)~uVar2;
    }
    return uVar3;
  }
  return (ulong)(-uVar2 - 2);
}



/* Entry: 10834533c; end: 1083453df;  */

bool FUN_10834533c(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fStack_34;
  
  if (NAN(param_1)) {
    bVar4 = false;
  }
  else {
    fVar6 = param_1;
    if (*(float *)(param_2 + 0x40) < param_1) {
      fVar6 = *(float *)(param_2 + 0x40);
    }
    fVar5 = 0.0;
    if (0.0 <= param_1) {
      fVar5 = fVar6;
    }
    lVar3 = param_2;
    func_0x000108345218(fVar5,param_2,&fStack_34);
    bVar4 = !NAN(fStack_34);
    if (!NAN(fStack_34)) {
      uVar1 = *(uint *)(lVar3 + 4);
      if (((int)uVar1 < 0) || (*(int *)(param_2 + 0x3c) <= (int)uVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1083453e0);
        (*pcVar2)();
      }
      FUN_1083453e0(*(long *)(param_2 + 0x30) + (ulong)uVar1 * 8,*(uint *)(lVar3 + 8) >> 0x1e,
                    param_3,param_4);
    }
  }
  return bVar4;
}



/* Entry: 1083453e0; end: 1083454db;  */

void FUN_1083453e0(undefined8 param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010834540c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10df1cc02)[param_2] * 4 + 0x108345410))();
  return;
}



/* Entry: 1083454dc; end: 108345553;  */

undefined8 FUN_1083454dc(undefined8 param_1,long param_2,uint param_3)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_10834533c(param_1,&uStack_38,&uStack_40);
  if ((param_2 != 0) && ((int)param_1 != 0)) {
    if ((param_3 >> 1 & 1) == 0) {
      func_0x000108363ab4(param_2);
    }
    else {
      FUN_1083640d0(uStack_3c,uStack_40,0,0,param_2);
    }
    if ((param_3 & 1) != 0) {
      FUN_108363ef4(uStack_38,uStack_34,param_2);
    }
  }
  return param_1;
}



/* Entry: 108345554; end: 1083456df;  */

undefined8 FUN_108345554(float param_1,float param_2,long param_3,undefined8 param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  float fVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [8];
  
  fVar10 = 0.0;
  if (0.0 <= param_1) {
    fVar10 = param_1;
  }
  fVar3 = *(float *)(param_3 + 0x40);
  if (param_2 <= *(float *)(param_3 + 0x40)) {
    fVar3 = param_2;
  }
  if (((fVar3 < fVar10) || (*(int *)(param_3 + 0x24) == 0)) ||
     (lVar7 = param_3, func_0x000108345218(param_3,&fStack_5c), NAN(fStack_5c - fStack_5c))) {
    return 0;
  }
  func_0x000108345218(fVar3,param_3,&fStack_60);
  cVar6 = NAN(fStack_60 - fStack_60);
  cVar5 = '\0';
  if ((bool)cVar6) {
    return 0;
  }
  if (param_5 != 0) {
    if ((*(int *)(lVar7 + 4) < 0) || (func_0x000108345938(), cVar5 == cVar6)) goto LAB_1083456dc;
    func_0x0001083458ac();
    FUN_1083453e0(fStack_5c);
    FUN_10817abbc(param_4,auStack_58);
  }
  uVar8 = (ulong)*(uint *)(lVar7 + 4);
  uVar9 = (ulong)*(uint *)(param_3 + 4);
  cVar5 = SBORROW8(uVar8,uVar9);
  cVar6 = (long)(uVar8 - uVar9) < 0;
  fVar10 = fStack_5c;
  if (uVar8 == uVar9) {
    if (((int)*(uint *)(lVar7 + 4) < 0) || (func_0x000108345938(), cVar6 == cVar5)) {
LAB_1083456dc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1083456e0);
      (*pcVar4)();
    }
  }
  else {
    do {
      if (((int)uVar8 < 0) || (func_0x000108345938(), cVar6 == cVar5)) goto LAB_1083456dc;
      func_0x0001083458ac();
      FUN_108344680(fVar10,0x3f800000);
      puVar1 = (uint *)(lVar7 + 4);
      do {
        puVar2 = (uint *)(lVar7 + 0x10);
        uVar8 = (ulong)*puVar2;
        lVar7 = lVar7 + 0xc;
      } while (uVar8 == *puVar1);
      uVar9 = (ulong)*(uint *)(param_3 + 4);
      cVar5 = SBORROW8(uVar8,uVar9);
      cVar6 = (long)(uVar8 - uVar9) < 0;
      fVar10 = 0.0;
    } while (uVar8 < uVar9);
    if (((int)*puVar2 < 0) || (func_0x000108345938(), cVar6 == cVar5)) goto LAB_1083456dc;
  }
  func_0x0001083458ac();
  FUN_108344680(fVar10,fStack_60);
  return 1;
}



/* Entry: 1083456e0; end: 1083456e3;  */

undefined8 * FUN_1083456e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e0b0;
  FUN_10840f118(param_1 + 5);
  FUN_10840f118(param_1 + 2);
  return param_1;
}



/* Entry: 1083456e4; end: 1083456f7;  */

void FUN_1083456e4(void)

{
  func_0x0001083457fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083456f8; end: 10834571b;  */

undefined8 FUN_1083456f8(undefined8 param_1)

{
  FUN_10834517c(param_1,0);
  return param_1;
}



/* Entry: 10834571c; end: 1083457af;  */

long FUN_10834571c(float param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108376b14();
  func_0x000108345848();
  *(undefined8 *)(param_2 + 0x10) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_38;
  *(undefined8 *)(param_2 + 0x18) = uStack_40;
  *(float *)(param_2 + 0x28) = (1.0 / param_1) * 0.5;
  *(undefined1 *)(param_2 + 0x2c) = param_4;
  *(undefined4 *)(param_2 + 0x30) = 0xc;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x48) = 8;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return param_2;
}



/* Entry: 1083457b0; end: 1083457cb;  */

void FUN_1083457b0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083457cc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


