/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10833097c; end: 10833097f;  */

void FUN_10833097c(void)

{
  return;
}



/* Entry: 108330980; end: 1083309b3;  */

void FUN_108330980(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x0001078bdb50(param_2);
  FUN_108330b14(param_1,param_2,uVar2);
  if ((param_1 & 1) != 0) {
    return;
  }
  FUN_10841076c(&UNK_10f48f107);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108330b14);
  (*pcVar1)();
}



/* Entry: 1083309b4; end: 1083309bb;  */

void FUN_1083309b4(ulong param_1)

{
  code *pcVar1;
  
  FUN_108330930(param_1,0);
  if ((param_1 & 1) != 0) {
    return;
  }
  FUN_10841076c(&UNK_10f48f056);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108330a18);
  (*pcVar1)();
}



/* Entry: 1083309bc; end: 108330a17;  */

void FUN_1083309bc(ulong param_1)

{
  code *pcVar1;
  
  FUN_108330930();
  if ((param_1 & 1) != 0) {
    return;
  }
  FUN_10841076c(&UNK_10f48f056);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108330a18);
  (*pcVar1)();
}



/* Entry: 108330a18; end: 108330aab;  */

undefined8 FUN_108330a18(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lStack_30;
  long lStack_28;
  
  uVar1 = param_1;
  FUN_1083306e4(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
    func_0x00010833139c();
    return 0;
  }
  func_0x0001078bdb50(param_1 + 0x18);
  func_0x0001083313b0();
  if (lStack_28 != 0) {
    lStack_30 = lStack_28;
    lStack_28 = 0;
    func_0x000108331358(param_1,&lStack_30);
    func_0x000108331388();
    if (*(long *)(param_1 + 8) != 0) {
      uVar2 = 1;
      goto LAB_108330a88;
    }
  }
  func_0x00010833139c();
  uVar2 = 0;
LAB_108330a88:
  func_0x000108331364();
  return uVar2;
}



/* Entry: 108330aac; end: 108330b13;  */

void FUN_108330aac(ulong param_1)

{
  code *pcVar1;
  
  FUN_108330b14();
  if ((param_1 & 1) != 0) {
    return;
  }
  FUN_10841076c(&UNK_10f48f107);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108330b14);
  (*pcVar1)();
}



/* Entry: 108330b14; end: 108330bab;  */

undefined8 FUN_108330b14(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lStack_30;
  long lStack_28;
  
  uVar1 = param_1;
  FUN_1083306e4();
  if ((uVar1 & 1) == 0) {
    func_0x00010833139c();
    return 0;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return 1;
  }
  func_0x0001083313b0();
  if (lStack_28 != 0) {
    lStack_30 = lStack_28;
    lStack_28 = 0;
    func_0x000108331358(param_1,&lStack_30);
    func_0x000108331388();
    if (*(long *)(param_1 + 8) != 0) {
      uVar2 = 1;
      goto LAB_108330b80;
    }
  }
  func_0x00010833139c();
  uVar2 = 0;
LAB_108330b80:
  func_0x000108331364();
  return uVar2;
}



/* Entry: 108330bac; end: 108330c6f;  */

ulong FUN_108330bac(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5,
                   undefined8 param_6)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  FUN_1083306e4(param_1,param_2,param_4);
  if ((uVar1 & 1) == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)(param_3,param_6);
    }
    func_0x0001083306b0(param_1);
  }
  else if (param_3 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)(0,param_6);
    }
  }
  else {
    FUN_108383e4c(auStack_48,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_4
                  ,param_3,param_5,param_6);
    func_0x000108331358(param_1,auStack_48);
    func_0x000108331364();
  }
  return uVar1;
}



/* Entry: 108330c70; end: 108330c9f;  */

/* WARNING: Removing unreachable block (ram,0x000108330c54) */
/* WARNING: Removing unreachable block (ram,0x000108330c20) */

ulong FUN_108330c70(ulong param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [8];
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar3 = param_1;
  FUN_1083306e4(param_1,param_2 + 2,lVar2);
  if ((uVar3 & 1) == 0) {
    func_0x0001083306b0(param_1);
  }
  else if (lVar1 != 0) {
    FUN_108383e4c(auStack_48,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),lVar2,
                  lVar1,0,0);
    func_0x000108331358(param_1,auStack_48);
    func_0x000108331364();
  }
  return uVar3;
}



/* Entry: 108330ca0; end: 108330d13;  */

bool FUN_108330ca0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lStack_30;
  long lStack_28;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    bVar1 = false;
  }
  else {
    FUN_108360070(&lStack_28,param_2 + 0x18,*(undefined8 *)(param_2 + 0x10));
    bVar1 = lStack_28 != 0;
    if (lStack_28 != 0) {
      lStack_30 = lStack_28;
      lStack_28 = 0;
      func_0x000108331358(param_2,&lStack_30);
      func_0x000108331388();
    }
    func_0x000108331364();
  }
  return bVar1;
}



/* Entry: 108330d14; end: 108330d5b;  */

long FUN_108330d14(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    param_1 = param_1 + 0x18;
    func_0x00010835c644(param_1);
    lVar1 = lVar1 + lVar2 * param_3 + (long)(param_2 << (ulong)((uint)param_1 & 0x1f));
  }
  return lVar1;
}



/* Entry: 108330d5c; end: 108330de7;  */

void FUN_108330d5c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  ulong param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar1 = (int)&uStack_70;
  if (*(int *)(param_5 + 0x20) != 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uVar2 = param_5;
    uStack_3c = param_2;
    uStack_38 = param_3;
    uStack_34 = param_4;
    FUN_108330de8(param_5,&uStack_70);
    if (((uVar2 & 1) != 0) && (FUN_1083842f4(&uStack_70,auStack_40,param_6), iVar1 != 0)) {
      func_0x000108330c90(param_5);
    }
    func_0x0001083313bc();
  }
  return;
}



/* Entry: 108330de8; end: 108330e63;  */

bool FUN_108330de8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((param_2 != 0) && (lVar1 != 0)) {
    FUN_1082b0634(param_2,(long *)(param_1 + 8));
  }
  return lVar1 != 0;
}



/* Entry: 108330e64; end: 108330fef;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_108330e64(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long alStack_d8 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  int *piStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if ((param_2 == 0) || (*param_1 == 0)) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    lStack_80 = param_1[5];
    puVar6 = &uStack_98;
    FUN_10838ea90(puVar6,&uStack_88);
    if ((int)puVar6 != 0) {
      alStack_d8[7] = 0;
      alStack_d8[4] = 0;
      alStack_d8[3] = 0;
      alStack_d8[6] = 0;
      alStack_d8[5] = 0;
      alStack_d8[2] = 0;
      alStack_d8[1] = 0;
      iVar4 = (int)uStack_98;
      iVar5 = uStack_98._4_4_;
      piStack_78 = (int *)param_1[3];
      if (piStack_78 != (int *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piStack_78,0x10);
          if (bVar3) {
            *piStack_78 = *piStack_78 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_70 = param_1[4];
      uStack_68 = CONCAT44(uStack_90._4_4_ - uStack_98._4_4_,(int)uStack_90 - (int)uStack_98);
      FUN_1083306e4(alStack_d8 + 1,&piStack_78,param_1[2]);
      FUN_10810a400(&piStack_78);
      lVar7 = *param_1;
      if (lVar7 != 0) {
        func_0x000108330824(param_1);
        piVar1 = (int *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        alStack_d8[0] = lVar7;
        FUN_108330884(alStack_d8 + 1,alStack_d8,iVar4 + (int)param_1,
                      iVar5 + (int)((ulong)param_1 >> 0x20));
        func_0x000108331364();
      }
      FUN_1083304b8(&piStack_78,param_2);
      func_0x000108330638(param_2,alStack_d8 + 1);
      func_0x000108330638(alStack_d8 + 1,&piStack_78);
      func_0x000108330548(&piStack_78);
      func_0x000108330548(alStack_d8 + 1);
    }
  }
  return puVar6;
}



/* Entry: 108330ff0; end: 10833108f;  */

undefined1 *
FUN_108330ff0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = &uStack_70;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_108330de8(param_1,&uStack_70);
  if ((param_1 & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_108384180(&uStack_70,param_2,param_3,param_4,param_5,param_6);
  }
  func_0x0001083313bc();
  return (undefined1 *)puVar1;
}



/* Entry: 108331090; end: 10833109f;  */

undefined1 * FUN_108331090(ulong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar3 = &uStack_70;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_108330de8(param_1,&uStack_70);
  if ((param_1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_108384180(&uStack_70,param_2 + 2,uVar1,uVar2,param_3,param_4);
  }
  func_0x0001083313bc();
  return (undefined1 *)puVar3;
}



/* Entry: 1083310a0; end: 1083311db;  */

int ** FUN_1083310a0(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int **ppiVar6;
  int *piStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int *piStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar3 = (int)param_1 + 0x18;
  FUN_108331284();
  if (iVar3 != 0) {
    iVar3 = (int)param_2 + 0x10;
    func_0x000108331288();
    if (iVar3 != 0) {
      uStack_70 = *param_2;
      uStack_68 = param_2[1];
      piStack_60 = (int *)param_2[2];
      if (piStack_60 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piStack_60,0x10);
          if (bVar2) {
            *piStack_60 = *piStack_60 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_50 = param_2[4];
      uStack_58 = param_2[3];
      puVar4 = &uStack_70;
      uStack_48 = param_3;
      uStack_44 = param_4;
      FUN_1083aa5ac(puVar4,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
      if (((ulong)puVar4 & 1) == 0) {
        ppiVar6 = (int **)0x0;
      }
      else {
        lVar5 = param_1;
        FUN_108330d14(param_1,uStack_48,uStack_44);
        piStack_88 = *(int **)(param_1 + 0x18);
        if (piStack_88 != (int *)0x0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piStack_88,0x10);
            if (bVar2) {
              *piStack_88 = *piStack_88 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_80 = *(undefined8 *)(param_1 + 0x20);
        uStack_78 = uStack_50;
        ppiVar6 = &piStack_88;
        FUN_108345950(ppiVar6,lVar5,*(undefined8 *)(param_1 + 0x10),&piStack_60,uStack_70,uStack_68)
        ;
        if (((ulong)ppiVar6 & 1) != 0) {
          func_0x000108330c90(param_1);
        }
        FUN_10810a400(&piStack_88);
      }
      FUN_10810a400(&piStack_60);
      return ppiVar6;
    }
  }
  return (int **)0x0;
}



/* Entry: 1083311dc; end: 108331283;  */

void FUN_1083311dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  
  uVar1 = param_6;
  FUN_10818cfd0(param_6,0);
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1083b7d24(auStack_48,param_2,0);
    FUN_1083bb384(param_1,auStack_48,param_3,param_4,param_5,param_6,0);
    func_0x000106f47184(auStack_48);
  }
  return;
}



/* Entry: 108331284; end: 1083312cb;  */

void FUN_108331284(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083312cc; end: 1083312f3;  */

undefined8 * FUN_1083312cc(undefined8 *param_1)

{
  FUN_1083312f4(*param_1);
  return param_1;
}



/* Entry: 1083312f4; end: 10833131f;  */

void FUN_1083312f4(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108331318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108331320; end: 108331347;  */

long FUN_108331320(long param_1)

{
  if (param_1 != 0) {
    FUN_1082a63ac(param_1);
  }
  return param_1;
}



/* Entry: 108331348; end: 1083313f3;  */

void FUN_108331348(undefined8 *param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000108331318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083313f4; end: 108331597;  */

void FUN_1083313f4(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcStack_78;
  code *pcStack_70;
  int *piStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pcVar3 = param_3;
  func_0x0001078bdb50();
  pcVar4 = param_3;
  func_0x00010835c6b0(param_3,pcVar3);
  if (pcVar4 != (code *)0xffffffffffffffff) {
    pcVar6 = pcVar4;
    FUN_1083922fc();
    if (pcVar6 == (code *)0x0) {
      _malloc();
      pcVar6 = (code *)0x0;
    }
    else {
      (*pcVar6)();
      pcVar6 = pcVar4;
      pcVar4 = (code *)0x0;
    }
    if (pcVar6 != (code *)0x0 || pcVar4 != (code *)0x0) {
      if (pcVar6 != (code *)0x0) {
        pcVar4 = pcVar6;
        (**(code **)(*(long *)pcVar6 + 0x18))();
      }
      piStack_68 = *(int **)param_3;
      if (piStack_68 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
          if (bVar2) {
            *piStack_68 = *piStack_68 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_58 = *(undefined8 *)(param_3 + 0x10);
      uStack_60 = *(undefined8 *)(param_3 + 8);
      pcStack_78 = pcVar4;
      pcStack_70 = pcVar3;
      FUN_10827c3e4(param_4,&pcStack_78);
      FUN_10810a400(&piStack_68);
      uVar5 = 0x98;
      __Znwm();
      FUN_108331820();
      *param_1 = uVar5;
      if (pcVar6 == (code *)0x0) {
        return;
      }
      FUN_108331c18();
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 108331598; end: 108331603;  */

void FUN_108331598(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  func_0x0001083315dc(auStack_50,param_1);
  FUN_108392374(auStack_50,FUN_108331604,param_2);
  return;
}



/* Entry: 108331604; end: 108331607;  */

undefined8 FUN_108331604(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  func_0x000108331c60();
  plVar2 = *(long **)(unaff_x19 + 0x58);
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(unaff_x19 + 0x60);
    if (plVar2 == (long *)0x0) {
LAB_108331ab8:
      uVar4 = 0;
      goto LAB_108331abc;
    }
  }
  else {
    if (*(char *)(unaff_x19 + 0x90) != '\x01') {
      (**(code **)(*plVar2 + 0x10))();
      if (((ulong)plVar2 & 1) == 0) {
        lVar3 = *(long *)(unaff_x19 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x58) = 0;
        if (lVar3 != 0) {
          func_0x000108331c18();
        }
        goto LAB_108331ab8;
      }
      *(undefined1 *)(unaff_x19 + 0x90) = 1;
      plVar2 = *(long **)(unaff_x19 + 0x58);
      if (plVar2 == (long *)0x0) {
        plVar2 = *(long **)(unaff_x19 + 0x60);
        goto LAB_108331a60;
      }
    }
    (**(code **)(*plVar2 + 0x18))();
  }
LAB_108331a60:
  FUN_108330bac(param_2,unaff_x19 + 0x68,plVar2,*(undefined8 *)(unaff_x19 + 0x80),FUN_108331aec);
  lVar3 = *param_2;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x88);
  *(undefined1 *)(lVar3 + 0x59) = 2;
  *(undefined4 *)(lVar3 + 0x28) = uVar1;
  *(int *)(unaff_x19 + 0x8c) = *(int *)(unaff_x19 + 0x8c) + 1;
  uVar4 = 1;
LAB_108331abc:
  func_0x000108331c48();
  return uVar4;
}



/* Entry: 108331608; end: 1083316a3;  */

undefined8 FUN_108331608(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  func_0x00010833167c(auStack_50,param_1);
  if (param_2 == (undefined1 *)0x0) {
    param_2 = auStack_50;
    FUN_108392374(param_2,FUN_1083316a4,&uStack_58);
  }
  else {
    FUN_108391b50(param_2,auStack_50,FUN_1083316a4,&uStack_58);
  }
  if (((ulong)param_2 & 1) == 0) {
    uStack_58 = 0;
  }
  return uStack_58;
}



/* Entry: 1083316a4; end: 1083316f3;  */

bool FUN_1083316a4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  FUN_1082a63ac(lVar1);
  lVar2 = *(long *)(lVar1 + 0x20);
  if (lVar2 == 0) {
    func_0x0001082a61d0(lVar1);
  }
  else {
    *param_2 = lVar1;
  }
  return lVar2 != 0;
}



/* Entry: 1083316f4; end: 10833181f;  */

undefined8 * FUN_1083316f4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uStack_84;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0xd0))(param_1,0,&uStack_70,0);
  if (((ulong)plVar2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (param_2 == 0) {
      FUN_1083922fc();
    }
    else {
      plVar2 = *(long **)(param_2 + 0x18);
    }
    puVar3 = &uStack_70;
    FUN_108368ae4(puVar3,plVar2);
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x50;
      __Znwm();
      lStack_78 = param_1[4];
      uStack_84 = (undefined4)param_1[5];
      uStack_80 = 0;
      *puVar1 = &PTR_FUN_110a3cdd0;
      func_0x00010833167c(puVar1 + 3,&uStack_84);
      puVar1[9] = puVar3;
      FUN_108331b54(puVar3);
      if (param_2 == 0) {
        FUN_1083923d8(puVar1,0);
      }
      else {
        FUN_108391edc(param_2,puVar1,0);
      }
      (**(code **)(*param_1 + 0xf8))(param_1);
    }
  }
  FUN_108330548(&uStack_70);
  return puVar3;
}



/* Entry: 108331820; end: 1083318d7;  */

undefined8 *
FUN_108331820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar3;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_110a3cd58;
  func_0x0001083315dc(param_1 + 3);
  uVar3 = *param_5;
  *param_5 = 0;
  param_1[0xb] = uVar3;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xc] = param_6;
  puVar2 = param_1 + 0xd;
  FUN_10814102c(puVar2,param_3);
  uVar1 = SUB84(puVar2,0);
  param_1[0x10] = param_4;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  func_0x000108383c38();
  *(undefined4 *)(param_1 + 0x11) = uVar1;
  return param_1;
}



/* Entry: 1083318d8; end: 1083318db;  */

undefined8 * FUN_1083318d8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a3cd58;
  plVar1 = (long *)param_1[0xb];
  if ((plVar1 != (long *)0x0) && (*(char *)(param_1 + 0x12) == '\x01')) {
    (**(code **)(*plVar1 + 0x20))();
  }
  _free(param_1[0xc]);
  FUN_10810a400(param_1 + 0xd);
  FUN_108331bec(param_1 + 0xb);
  FUN_108410074(param_1 + 9);
  return param_1;
}



/* Entry: 1083318dc; end: 1083318ef;  */

void FUN_1083318dc(void)

{
  FUN_108331974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083318f0; end: 1083318f7;  */

long FUN_1083318f0(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 1083318f8; end: 108331917;  */

long FUN_1083318f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x68;
  func_0x00010835c6b0(lVar1,*(undefined8 *)(param_1 + 0x80));
  return lVar1 + 0x30;
}



/* Entry: 108331918; end: 10833194f;  */

bool FUN_108331918(void)

{
  int iVar1;
  long unaff_x19;
  
  func_0x000108331c60();
  iVar1 = *(int *)(unaff_x19 + 0x8c);
  func_0x000108331c48();
  return iVar1 == 0;
}



/* Entry: 108331950; end: 108331973;  */

undefined8 FUN_108331950(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  func_0x000108331c60();
  plVar2 = *(long **)(unaff_x19 + 0x58);
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(unaff_x19 + 0x60);
    if (plVar2 == (long *)0x0) {
LAB_108331ab8:
      uVar4 = 0;
      goto LAB_108331abc;
    }
  }
  else {
    if (*(char *)(unaff_x19 + 0x90) != '\x01') {
      (**(code **)(*plVar2 + 0x10))();
      if (((ulong)plVar2 & 1) == 0) {
        lVar3 = *(long *)(unaff_x19 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x58) = 0;
        if (lVar3 != 0) {
          func_0x000108331c18();
        }
        goto LAB_108331ab8;
      }
      *(undefined1 *)(unaff_x19 + 0x90) = 1;
      plVar2 = *(long **)(unaff_x19 + 0x58);
      if (plVar2 == (long *)0x0) {
        plVar2 = *(long **)(unaff_x19 + 0x60);
        goto LAB_108331a60;
      }
    }
    (**(code **)(*plVar2 + 0x18))();
  }
LAB_108331a60:
  FUN_108330bac(param_2,unaff_x19 + 0x68,plVar2,*(undefined8 *)(unaff_x19 + 0x80),FUN_108331aec);
  lVar3 = *param_2;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x88);
  *(undefined1 *)(lVar3 + 0x59) = 2;
  *(undefined4 *)(lVar3 + 0x28) = uVar1;
  *(int *)(unaff_x19 + 0x8c) = *(int *)(unaff_x19 + 0x8c) + 1;
  uVar4 = 1;
LAB_108331abc:
  func_0x000108331c48();
  return uVar4;
}



/* Entry: 108331974; end: 1083319e3;  */

undefined8 * FUN_108331974(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a3cd58;
  plVar1 = (long *)param_1[0xb];
  if ((plVar1 != (long *)0x0) && (*(char *)(param_1 + 0x12) == '\x01')) {
    (**(code **)(*plVar1 + 0x20))();
  }
  _free(param_1[0xc]);
  FUN_10810a400(param_1 + 0xd);
  FUN_108331bec(param_1 + 0xb);
  FUN_108410074(param_1 + 9);
  return param_1;
}



/* Entry: 1083319e4; end: 108331aeb;  */

undefined8 FUN_1083319e4(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  func_0x000108331c60();
  plVar2 = *(long **)(unaff_x19 + 0x58);
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(unaff_x19 + 0x60);
    if (plVar2 == (long *)0x0) {
LAB_108331ab8:
      uVar4 = 0;
      goto LAB_108331abc;
    }
  }
  else {
    if (*(char *)(unaff_x19 + 0x90) != '\x01') {
      (**(code **)(*plVar2 + 0x10))();
      if (((ulong)plVar2 & 1) == 0) {
        lVar3 = *(long *)(unaff_x19 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x58) = 0;
        if (lVar3 != 0) {
          func_0x000108331c18();
        }
        goto LAB_108331ab8;
      }
      *(undefined1 *)(unaff_x19 + 0x90) = 1;
      plVar2 = *(long **)(unaff_x19 + 0x58);
      if (plVar2 == (long *)0x0) {
        plVar2 = *(long **)(unaff_x19 + 0x60);
        goto LAB_108331a60;
      }
    }
    (**(code **)(*plVar2 + 0x18))();
  }
LAB_108331a60:
  FUN_108330bac(param_2,unaff_x19 + 0x68,plVar2,*(undefined8 *)(unaff_x19 + 0x80),FUN_108331aec);
  lVar3 = *param_2;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x88);
  *(undefined1 *)(lVar3 + 0x59) = 2;
  *(undefined4 *)(lVar3 + 0x28) = uVar1;
  *(int *)(unaff_x19 + 0x8c) = *(int *)(unaff_x19 + 0x8c) + 1;
  uVar4 = 1;
LAB_108331abc:
  func_0x000108331c48();
  return uVar4;
}



/* Entry: 108331aec; end: 108331b53;  */

void FUN_108331aec(undefined8 param_1,long param_2)

{
  int iVar1;
  
  func_0x0001081efc58();
  iVar1 = *(int *)(param_2 + 0x8c) + -1;
  *(int *)(param_2 + 0x8c) = iVar1;
  if ((*(long **)(param_2 + 0x58) != (long *)0x0) && (iVar1 == 0)) {
    (**(code **)(**(long **)(param_2 + 0x58) + 0x20))();
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  func_0x000108331c48();
  return;
}



/* Entry: 108331b54; end: 108331b5b;  */

void FUN_108331b54(undefined8 param_1)

{
  func_0x00010833b7ec();
  FUN_10833b57c(param_1,1);
  func_0x00010833b7d0();
  return;
}



/* Entry: 108331b5c; end: 108331b8f;  */

undefined8 * FUN_108331b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3cdd0;
  func_0x000108331be4(param_1[9]);
  return param_1;
}



/* Entry: 108331b90; end: 108331ba3;  */

void FUN_108331b90(void)

{
  FUN_108331b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108331ba4; end: 108331beb;  */

long FUN_108331ba4(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 108331bec; end: 108331c17;  */

long * FUN_108331bec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_108331c18();
  }
  return param_1;
}



/* Entry: 108331c18; end: 108331c7b;  */

void FUN_108331c18(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108331c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 108331c7c; end: 108331d17;  */

undefined8 * FUN_108331c7c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_108346a28(param_1,param_2 + 0x18);
  *puVar1 = &PTR_DAT_110a3ce38;
  FUN_10833043c(puVar1 + 0x25,param_2);
  param_1[0x2c] = param_4;
  FUN_108332fc8(param_1 + 0x2d,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  FUN_1083542a0(param_1 + 199,param_1 + 5,*(undefined4 *)(param_2 + 0x20),
                *(undefined8 *)(param_2 + 0x18));
  return param_1;
}



/* Entry: 108331d18; end: 108331e9b;  */

void FUN_108331d18(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [8];
  uint uStack_48;
  int iStack_44;
  ulong uStack_38;
  
  uVar4 = 0;
  iVar3 = (int)&uStack_90;
  uVar5 = 0;
  if ((*(int *)(param_2 + 0x10) < 0) || (*(int *)(param_2 + 0x14) < 0)) {
LAB_108331de4:
    *param_1 = 0;
    return;
  }
  uVar1 = *(uint *)(param_2 + 8);
  if (0x1a < uVar1) goto LAB_108331e80;
  uVar6 = 1;
  if ((1 << (ulong)(uVar1 & 0x1f) & 0x355b1daU) == 0) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x4aa4e24U) == 0) goto LAB_108331de4;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0xc);
  }
  uStack_38 = 0;
  FUN_10814bd9c(auStack_50,param_2,uVar6);
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (uStack_48 == 0) {
    FUN_1083306e4(&uStack_90,auStack_50,0);
LAB_108331e60:
    param_4 = uVar4 & 1;
joined_r0x000108331e60:
    if (param_4 == 0) {
LAB_108331e64:
      *param_1 = 0;
      goto LAB_108331e68;
    }
  }
  else {
    if (param_4 != 0) {
      FUN_108341218(param_4,auStack_50,&uStack_90);
      uStack_38 = param_4;
      goto joined_r0x000108331e60;
    }
    if (iStack_44 == 1) {
LAB_108331e54:
      func_0x00010821afec(&uStack_90,auStack_50);
      uVar4 = uVar5;
      goto LAB_108331e60;
    }
    if (0x1a < uStack_48) {
LAB_108331e80:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108331e84);
      (*pcVar2)();
    }
    uVar1 = 1 << (ulong)(uStack_48 & 0x1f);
    if ((uVar1 & 0x355b1da) == 0) {
      if ((uVar1 & 0x4aa4e24) == 0) goto LAB_108331e80;
      goto LAB_108331e54;
    }
    FUN_108330a18(&uStack_90,auStack_50,1);
    if (iVar3 == 0) goto LAB_108331e64;
  }
  FUN_108331e9c(param_1,&uStack_90,param_3,&uStack_38);
LAB_108331e68:
  FUN_108330548(&uStack_90);
  FUN_10810a400(auStack_50);
  return;
}



/* Entry: 108331e9c; end: 108331f03;  */

void FUN_108331e9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x660;
  __Znwm();
  FUN_108331c7c();
  *param_1 = uVar1;
  return;
}



/* Entry: 108331f04; end: 108331fdf;  */

void FUN_108331f04(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 auStack_60 [3];
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x30);
  uStack_30 = CONCAT44(*(undefined4 *)(param_3 + 3),*(undefined4 *)(param_2 + 0x28));
  piStack_48 = (int *)*param_3;
  if (piStack_48 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_48,0x10);
      if (bVar2) {
        *piStack_48 = *piStack_48 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_38 = param_3[2];
  uStack_40 = param_3[1];
  if ((param_4 != 0) && (*(long *)(param_4 + 0x20) != 0)) {
    func_0x0001078bdd84(auStack_60,&piStack_48,4);
    func_0x0001078bddd4(&piStack_48,auStack_60);
    FUN_10810a400(auStack_60);
  }
  FUN_108331d18(auStack_60,&piStack_48,&uStack_30,param_3[4]);
  uVar3 = auStack_60[0];
  auStack_60[0] = 0;
  *param_1 = uVar3;
  FUN_108333638(auStack_60);
  FUN_10810a400(&piStack_48);
  return;
}



/* Entry: 108331fe0; end: 108332013;  */

long FUN_108331fe0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108332014();
  if ((int)lVar1 != 0) {
    func_0x000108330c90(param_1 + 0x128);
  }
  return lVar1;
}



/* Entry: 108332014; end: 10833209f;  */

bool FUN_108332014(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int *piStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  piStack_38 = *(int **)(param_1 + 0x140);
  if (piStack_38 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_38,0x10);
      if (bVar2) {
        *piStack_38 = *piStack_38 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_30 = *(undefined8 *)(param_1 + 0x148);
  uStack_28 = *(undefined8 *)(param_1 + 0x150);
  lVar3 = *(long *)(param_1 + 0x130);
  bVar2 = (int)uStack_30 != 0;
  if (lVar3 != 0 && bVar2) {
    lVar4 = *(long *)(param_1 + 0x138);
    *param_2 = lVar3;
    param_2[1] = lVar4;
    func_0x000108152830(param_2 + 2,param_1 + 0x140);
  }
  FUN_10810a400(&piStack_38);
  return lVar3 != 0 && bVar2;
}



/* Entry: 1083320a0; end: 1083320e3;  */

long FUN_1083320a0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    lVar1 = param_1 + 0x128;
    FUN_1083310a0();
    if ((int)lVar1 != 0) {
      func_0x000108330c90(param_1 + 0x128);
      lVar1 = 1;
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 1083320e4; end: 1083320eb;  */

undefined1 * FUN_1083320e4(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar3 = param_1 + 0x128;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar4 = &uStack_70;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_108330de8(uVar3,&uStack_70);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_108384180(&uStack_70,param_2 + 2,uVar1,uVar2,param_3,param_4);
  }
  func_0x0001083313bc();
  return (undefined1 *)puVar4;
}



/* Entry: 1083320ec; end: 108332137;  */

void FUN_1083320ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_70 [80];
  
  FUN_108333244(auStack_70,param_1);
  FUN_108349754(auStack_70,param_2);
  func_0x00010833374c();
  return;
}



/* Entry: 108332138; end: 10833213b;  */

undefined8 * FUN_108332138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e608;
  FUN_10810a400(param_1 + 3);
  return param_1;
}



/* Entry: 10833213c; end: 1083321b3;  */

void FUN_10833213c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_150 [272];
  
  FUN_1083332f4(auStack_150,param_1,0);
  while (puVar1 = auStack_150, FUN_1083321b4(), puVar1 != (undefined1 *)0x0) {
    FUN_10834890c();
  }
  func_0x000108333754();
  return;
}



/* Entry: 1083321b4; end: 108332363;  */

long * FUN_1083321b4(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
    if (*(char *)((long)param_1 + 0x109) == '\x01') {
      do {
        iVar1 = (int)param_1[7] + -0x1fff;
        uVar3 = *(uint *)((long)param_1 + 0x104);
        if ((int)param_1[0x20] < iVar1) {
          uVar2 = (int)param_1[0x20] + 0x1fff;
        }
        else {
          uVar2 = *(uint *)(param_1 + 6);
          uVar3 = uVar3 + 0x1fff;
          *(uint *)((long)param_1 + 0x104) = uVar3;
        }
        uVar7 = (ulong)uVar3;
        uVar5 = (ulong)uVar2;
        *(uint *)(param_1 + 0x20) = uVar2;
        if ((int)uVar2 < iVar1) {
          bVar8 = false;
        }
        else {
          bVar8 = *(int *)((long)param_1 + 0x3c) + -0x1fff <= (int)uVar3;
        }
        *(bool *)(param_1 + 0x21) = bVar8;
        FUN_108219ff8(uVar5,uVar7,0x1fff,0x1fff);
        plVar6 = param_1 + 1;
        uStack_40 = uVar5;
        uStack_38 = uVar7;
        FUN_1083840a4(plVar6,param_1 + 9,&uStack_40);
        if (((ulong)plVar6 & 1) == 0) {
          FUN_10841076c(&UNK_10f48135e);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x108332364);
          (*pcVar4)();
        }
        if ((char)param_1[0x17] == '\x01') {
          *(undefined1 *)(param_1 + 0x17) = 0;
        }
        lVar9 = *param_1;
        lVar11 = *(long *)(lVar9 + 0x100);
        lVar10 = *(long *)(lVar9 + 0xf8);
        lVar13 = *(long *)(lVar9 + 0x110);
        lVar12 = *(long *)(lVar9 + 0x108);
        param_1[0x16] = *(long *)(lVar9 + 0x118);
        param_1[0x13] = lVar11;
        param_1[0x12] = lVar10;
        param_1[0x15] = lVar13;
        param_1[0x14] = lVar12;
        *(undefined1 *)(param_1 + 0x17) = 1;
        func_0x000108333788();
        func_0x000108333788();
        FUN_108363ef4((float)-(int)param_1[0x20],(float)-*(int *)((long)param_1 + 0x104));
        func_0x000108333788();
        param_1[0xf] = (long)plVar6;
        FUN_108387644(*(long *)(*param_1 + 0x170) +
                      (long)*(int *)(*(long *)(*param_1 + 0x170) + 0x18),-(int)param_1[0x20],
                      -*(int *)((long)param_1 + 0x104),param_1 + 0x18);
        lStack_48 = param_1[0xd];
        uStack_50 = 0;
        func_0x000108386f78(param_1 + 0x18,&uStack_50,1);
        if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
          if ((*(byte *)((long)param_1 + 0xf1) & 1) != 0) goto LAB_1083321d0;
          break;
        }
      } while ((*(byte *)((long)param_1 + 0xf1) & 1) != 0);
    }
    else {
      *(undefined1 *)(param_1 + 0x21) = 1;
    }
    param_1 = param_1 + 8;
  }
  else {
LAB_1083321d0:
    param_1 = (long *)0x0;
  }
  return param_1;
}



/* Entry: 108332364; end: 1083323b3;  */

void FUN_108332364(long param_1)

{
  func_0x0001083336d0();
  func_0x0001083336b8();
  while (func_0x00010833379c(), param_1 != 0) {
    FUN_1082b0290();
  }
  func_0x0001083336b0();
  return;
}



/* Entry: 1083323b4; end: 10833240f;  */

void FUN_1083323b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_30 [2];
  
  FUN_10837bc48(auStack_30,param_2,0);
  FUN_108332410(param_1,auStack_30,param_3,1);
  FUN_10837ca5c(auStack_30[0]);
  return;
}



/* Entry: 108332410; end: 1083324e3;  */

void FUN_108332410(long param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_164 [16];
  char cStack_154;
  undefined1 auStack_150 [272];
  
  if (((*(int *)(param_1 + 0x20) < 0x2000) && (*(int *)(param_1 + 0x24) < 0x2000)) ||
     ((*(byte *)(param_2 + 0xe) >> 1 & 1) != 0)) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001083773e0(param_2);
    puVar2 = auStack_164;
    FUN_108333564(auStack_164,param_2,param_3);
    if (cStack_154 == '\0') {
      puVar2 = (undefined1 *)0x0;
    }
  }
  puVar1 = auStack_150;
  FUN_1083332f4(puVar1,param_1,puVar2);
  while (func_0x00010833379c(), puVar1 != (undefined1 *)0x0) {
    func_0x0001082b0438();
  }
  func_0x0001083336b0();
  return;
}



/* Entry: 1083324e4; end: 108332533;  */

void FUN_1083324e4(long param_1)

{
  func_0x0001083336d0();
  func_0x0001083336b8();
  while (func_0x00010833379c(), param_1 != 0) {
    FUN_108349d24();
  }
  func_0x0001083336b0();
  return;
}



/* Entry: 108332534; end: 108332893;  */

void FUN_108332534(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                  ulong param_5,long param_6,int param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStack_250;
  undefined1 auStack_248 [40];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  uint uStack_128;
  
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0xc0))(param_2);
  (**(code **)(*param_2 + 0xd0))(param_2,plVar4,&uStack_1b0,0);
  if (((ulong)param_2 & 1) == 0) goto LAB_108332810;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = NEON_scvtf(uStack_188,4);
  puVar5 = &uStack_1c0;
  if (param_3 != (undefined8 *)0x0) {
    puVar5 = param_3;
  }
  uStack_1c8 = puVar5[1];
  uStack_1d0 = *puVar5;
  FUN_10814c9e0(auStack_248,&uStack_1d0,param_4,0);
  if (param_3 == (undefined8 *)0x0) {
LAB_108332678:
    puVar5 = &uStack_1b0;
LAB_10833267c:
    if (*(long *)(param_6 + 0x10) != 0) {
      iVar3 = (int)auStack_248;
      func_0x0001081421e0();
      if (1 < iVar3) goto LAB_10833278c;
    }
    FUN_1083332f4(&uStack_170,param_1,param_4);
    while( true ) {
      plVar4 = &uStack_170;
      FUN_1083321b4();
      if (plVar4 == (long *)0x0) break;
      (**(code **)(*plVar4 + 0x18))();
    }
    FUN_108333530(&uStack_170);
  }
  else {
    puVar5 = &uStack_1c0;
    FUN_108281a6c(puVar5,param_3);
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = &uStack_1d0;
      FUN_10838ed10(puVar5,&uStack_1c0);
      if (((ulong)puVar5 & 1) != 0) {
        FUN_108364f90(auStack_248,&uStack_1e0,&uStack_1d0,1);
        if (!NAN(((float)uStack_1e0 - (float)uStack_1e0) * uStack_1e0._4_4_ * (float)uStack_1d8 *
                 uStack_1d8._4_4_)) {
          param_4 = &uStack_1e0;
          goto LAB_10833265c;
        }
      }
    }
    else {
LAB_10833265c:
      uVar6 = 0;
      puVar5 = &uStack_1c0;
      FUN_108281a6c();
      uVar2 = (uint)uVar6;
      if (param_7 != 1) {
        uVar2 = 1;
      }
      if ((uVar2 & 1) == 0) {
        uStack_170 = (undefined8 *)0x0;
        puStack_168 = (undefined8 *)0x0;
        uStack_160 = 0;
        puVar5 = &uStack_170;
        uVar6 = param_5;
        FUN_1081753ec();
        if ((uVar6 & 1) == 0) goto LAB_108332700;
        puVar5 = &uStack_1b0;
      }
      else {
        if ((uVar6 & 1) != 0) goto LAB_108332678;
LAB_108332700:
        puVar7 = &uStack_1d0;
        func_0x00010812f180();
        puVar8 = &uStack_1b0;
        uStack_170 = puVar7;
        puStack_168 = puVar5;
        FUN_108330e64(puVar8,&uStack_220,&uStack_170);
        if (((ulong)puVar8 & 1) == 0) goto LAB_108332808;
        if (0 < (int)(uint)uStack_170 || 0 < (int)uStack_170._4_4_) {
          FUN_108363df0((float)((uint)uStack_170 & ((int)(uint)uStack_170 >> 0x1f ^ 0xffffffffU)),
                        (float)(uStack_170._4_4_ & ((int)uStack_170._4_4_ >> 0x1f ^ 0xffffffffU)),
                        auStack_248);
        }
        if ((float)uStack_1d0 == 0.0) {
          bVar1 = false;
          if ((uStack_1d0._4_4_ == 0.0) &&
             (bVar1 = false, !NAN((float)uStack_1c8) && !NAN((float)(int)uStack_1f8))) {
            bVar1 = (float)uStack_1c8 == (float)(int)uStack_1f8;
          }
          if (bVar1) {
            if (uStack_1c8._4_4_ == (float)uStack_1f8._4_4_) {
              puVar5 = &uStack_220;
              goto LAB_10833267c;
            }
          }
        }
        puVar5 = &uStack_220;
      }
LAB_10833278c:
      FUN_1083bb728(&puStack_250,param_6,puVar5,0,0,param_5,auStack_248,2);
      if (puStack_250 != (undefined8 *)0x0) {
        FUN_108375f34(&uStack_170,param_6);
        puVar5 = puStack_168;
        puStack_168 = puStack_250;
        uStack_128 = uStack_128 & 0xffffff3f;
        puStack_250 = (undefined8 *)0x0;
        FUN_108114eec(puVar5);
        func_0x000108333764();
        FUN_108332364(param_1,param_4,&uStack_170);
        FUN_108375e94(&uStack_170);
      }
      func_0x000106f47224(&puStack_250);
    }
  }
LAB_108332808:
  FUN_108330548(&uStack_220);
LAB_108332810:
  FUN_108330548(&uStack_1b0);
  return;
}



/* Entry: 108332894; end: 108332907;  */

void FUN_108332894(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_150 [272];
  
  FUN_1083332f4(auStack_150,param_1,0);
  while (puVar1 = auStack_150, FUN_1083321b4(), puVar1 != (undefined1 *)0x0) {
    FUN_10834bec4();
  }
  func_0x000108333754();
  return;
}



/* Entry: 108332908; end: 108332973;  */

void FUN_108332908(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_88;
  undefined1 auStack_80 [80];
  
  func_0x0001083337a4();
  uStack_88 = *param_3;
  *param_3 = 0;
  FUN_10834bf14(auStack_80,param_2,&uStack_88,param_4,param_5);
  func_0x00010833376c();
  func_0x00010833375c();
  return;
}



/* Entry: 108332974; end: 108332977;  */

void FUN_108332974(void)

{
  return;
}



/* Entry: 108332978; end: 108332a07;  */

void FUN_108332978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uStack_98;
  undefined1 auStack_90 [80];
  
  func_0x0001083337a4();
  uStack_98 = *param_6;
  *param_6 = 0;
  FUN_10834b454(auStack_90,param_2,param_3,param_4,param_5,&uStack_98,param_7);
  func_0x00010833376c();
  func_0x00010833375c();
  return;
}



/* Entry: 108332a08; end: 108332b03;  */

void FUN_108332a08(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  FUN_10839f8e4(param_2,&uStack_70);
  if ((int)param_2 != 0) {
    uStack_98 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    ppuStack_c0 = &PTR_FUN_110a3e568;
    pcStack_90 = FUN_108335c48;
    uVar1 = param_1;
    FUN_108347858(param_1,&uStack_b8);
    if ((uVar1 & 1) != 0) {
      lStack_80 = *(long *)(param_1 + 0x170) + (long)*(int *)(*(long *)(param_1 + 0x170) + 0x18);
      uStack_88 = param_3;
      FUN_108348c58(&ppuStack_c0,&uStack_70,0x113254e20,0,param_4,param_5);
    }
    func_0x00010833374c();
  }
  FUN_108330548(&uStack_70);
  return;
}



/* Entry: 108332b04; end: 108332b4f;  */

void FUN_108332b04(undefined8 *param_1,long param_2,int *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int *piStack_88;
  undefined8 uStack_80;
  int *piStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar4 = (long *)(param_2 + 0x128);
  if (param_4 != 0) {
    if (*plVar4 == 0) {
      *param_1 = 0;
    }
    else {
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      lStack_70 = 0;
      piVar5 = param_3;
      func_0x00010821a0c0();
      piStack_88 = *(int **)(param_2 + 0x140);
      if (piStack_88 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piStack_88,0x10);
          if (bVar2) {
            *piStack_88 = *piStack_88 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_80 = *(undefined8 *)(param_2 + 0x148);
      piStack_78 = piVar5;
      if ((int)uStack_80 != 4) {
        func_0x0001078bdd84(&uStack_a0,&piStack_88,4);
        func_0x0001078bddd4(&piStack_88,&uStack_a0);
        FUN_10810a400(&uStack_a0);
      }
      plVar3 = &lStack_70;
      func_0x00010821afec(plVar3,&piStack_88);
      if ((((ulong)plVar3 & 1) == 0) ||
         (FUN_108330ff0(plVar4,&uStack_58,uStack_68,uStack_60,*param_3,param_3[1]),
         ((ulong)plVar4 & 1) == 0)) {
        *param_1 = 0;
      }
      else {
        uStack_98 = CONCAT44(param_3[3] - param_3[1],param_3[2] - *param_3);
        uStack_a0 = 0;
        FUN_10839f810(auStack_a8,&uStack_a0,&lStack_70,param_2 + 0x28);
        func_0x00010839fb8c();
      }
      FUN_10810a400(&piStack_88);
      FUN_108330548(&lStack_70);
    }
    return;
  }
  if (*plVar4 == 0) {
    *param_1 = 0;
    return;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  if (*(int *)(param_2 + 0x148) == 4) {
LAB_10839f5cc:
    FUN_10839f684(&piStack_88,param_3,plVar4,param_2 + 0x28);
    func_0x00010839fb8c();
  }
  else {
    func_0x0001078bdd84(&piStack_88,param_2 + 0x140,4);
    plVar3 = &lStack_70;
    func_0x00010821afec(plVar3,&piStack_88);
    if ((int)plVar3 == 0) {
      func_0x00010839fbe0();
    }
    else {
      FUN_108330ff0(plVar4,&uStack_58,uStack_68,uStack_60,0,0);
      func_0x00010839fbe0();
      if (((ulong)plVar4 & 1) != 0) {
        plVar4 = &lStack_70;
        goto LAB_10839f5cc;
      }
    }
    *param_1 = 0;
  }
  FUN_108330548(&lStack_70);
  return;
}



/* Entry: 108332b50; end: 108332c8b;  */

void FUN_108332b50(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x170);
  iVar2 = *(int *)(lVar3 + 0x18);
  iVar1 = *(int *)(lVar3 + iVar2 + 0x40);
  *(int *)(lVar3 + iVar2 + 0x40) = iVar1 + -1;
  if (iVar1 < 1) {
    FUN_108386ed4();
    if (iVar2 == 0x20) {
      FUN_10840fb44(param_1 + 0x170,lVar3);
    }
    else {
      if (*(int *)(lVar3 + 0x14) == iVar2 + 0x48) {
        *(int *)(lVar3 + 0x14) = iVar2;
      }
      *(int *)(lVar3 + 0x18) = iVar2 + -0x48;
    }
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
  }
  return;
}



/* Entry: 108332c8c; end: 108332ceb;  */

void FUN_108332c8c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_2;
  *param_2 = 0;
  uStack_30 = uVar1;
  FUN_1083335b8(param_1 + 0x168);
  uStack_30 = 0;
  uStack_28 = uVar1;
  FUN_108387554();
  func_0x000108333764();
  func_0x000106f47224(&uStack_30);
  return;
}



/* Entry: 108332cec; end: 108332d7f;  */

void FUN_108332cec(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  FUN_108346cac();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffffffffffff;
  iVar2 = (int)((ulong)lVar1 >> 0x20);
  if (iVar2 != 0 || (int)lVar1 != 0) {
    FUN_10838ffec(param_2,-(int)lVar1,-iVar2,&uStack_48);
  }
  FUN_1083335b8(param_1 + 0x168);
  FUN_1083870ac();
  FUN_10838f648(&uStack_48);
  return;
}



/* Entry: 108332d80; end: 108332dff;  */

void FUN_108332d80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  FUN_10817500c(param_6);
  uStack_30 = (undefined1 *)CONCAT44(param_2,param_1);
  uStack_28 = (undefined8 *)CONCAT44(param_4,param_3);
  puVar3 = &uStack_30;
  FUN_10835e94c(param_5 + 0xb8);
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  FUN_108277294();
  puVar2 = &uStack_30;
  uStack_30 = (undefined1 *)puVar1;
  uStack_28 = puVar3;
  func_0x00010821b838(puVar2,param_5 + 0x620);
  FUN_1083335b8(param_5 + 0x168);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000108386f04();
  }
  else {
    func_0x000108386f34();
  }
  return;
}



/* Entry: 108332e00; end: 108332e57;  */

long FUN_108332e00(long param_1)

{
  long lVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar1 = *(long *)(param_1 + 0x170) + (long)*(int *)(*(long *)(param_1 + 0x170) + 0x18);
  if ((*(char *)(lVar1 + 0x30) == '\x01') && (*(long *)(lVar1 + 0x10) == 0)) {
    uStack_20 = 0;
    uStack_18 = *(undefined8 *)(param_1 + 0x20);
    FUN_108279bb8(lVar1,&uStack_20);
    return lVar1;
  }
  return 0;
}



/* Entry: 108332e58; end: 108332e6b;  */

undefined1 FUN_108332e58(long param_1)

{
  return *(undefined1 *)
          (*(long *)(param_1 + 0x170) + (long)*(int *)(*(long *)(param_1 + 0x170) + 0x18) + 0x31);
}



/* Entry: 108332e6c; end: 108332ee3;  */

bool FUN_108332e6c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x170) + (long)*(int *)(*(long *)(param_1 + 0x170) + 0x18);
  if (((*(byte *)(lVar5 + 0x31) & 1) == 0) && (*(char *)(lVar5 + 0x32) == '\x01')) {
    lVar5 = *(long *)(lVar5 + 0x38);
    bVar4 = lVar5 == 0;
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
    }
    func_0x000108333764();
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



/* Entry: 108332ee4; end: 108332f67;  */

byte FUN_108332ee4(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = *(long *)(param_1 + 0x170) + (long)*(int *)(*(long *)(param_1 + 0x170) + 0x18);
  if ((*(byte *)(lVar1 + 0x31) & 1) == 0) {
    bVar2 = *(byte *)(lVar1 + 0x30) ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 108332f68; end: 108332f7b;  */

void FUN_108332f68(void)

{
  func_0x000108333608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108332f7c; end: 108332fab;  */

void FUN_108332f7c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (undefined4)param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar2;
  FUN_108347cac();
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[3] = 0;
  return;
}



/* Entry: 108332fac; end: 108332fc7;  */

undefined8 FUN_108332fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 108332fc8; end: 10833305b;  */

long FUN_108332fc8(long param_1,ulong param_2,long param_3)

{
  char cVar1;
  undefined1 auStack_70 [64];
  
  FUN_10833305c(param_1 + 8);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(ulong *)(param_1 + 0x4c0) = param_2 & 0xffffffff | param_3 << 0x20;
  cVar1 = (char)param_1 + -0x48;
  FUN_10839eca4();
  *(char *)(param_1 + 0x4c8) = cVar1;
  FUN_108386d74(auStack_70,param_1 + 0x4b8);
  FUN_108333064(param_1 + 8,auStack_70);
  FUN_108386ed4(auStack_70);
  return param_1;
}



/* Entry: 10833305c; end: 108333063;  */

/* WARNING: Removing unreachable block (ram,0x00010840faf8) */

void FUN_10833305c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = param_1 + 2;
  param_1[1] = 0x20000000094;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x4a0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x20;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}



/* Entry: 108333064; end: 108333087;  */

void FUN_108333064(long param_1)

{
  FUN_108333098();
  FUN_108386c68();
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 108333088; end: 108333097;  */

/* WARNING: Removing unreachable block (ram,0x00010840faf8) */

void FUN_108333088(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  
  param_1[2] = 0;
  uVar1 = 0x20000040000;
  if ((param_2 & 0xfffffffd) != 1) {
    uVar1 = 0x20000000000;
  }
  *param_1 = param_1 + 2;
  param_1[1] = uVar1 | ((param_2 & 3) << 0x10 | 0x94);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x4a0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x20;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}



/* Entry: 108333098; end: 1083330e3;  */

long FUN_108333098(long param_1)

{
  long lStack_38;
  int iStack_2c;
  
  FUN_108275a3c(&lStack_38,param_1,0x48);
  *(int *)(lStack_38 + 0x18) = iStack_2c;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return lStack_38 + iStack_2c;
}



/* Entry: 1083330e4; end: 1083330fb;  */

void FUN_1083330e4(long param_1)

{
  FUN_108386c68();
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1083330fc; end: 108333123;  */

undefined8 FUN_1083330fc(undefined8 param_1)

{
  FUN_108333124();
  FUN_10840fc40();
  return param_1;
}



/* Entry: 108333124; end: 108333243;  */

void FUN_108333124(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long alStack_58 [2];
  int iStack_48;
  long alStack_40 [2];
  int iStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  
  puVar1 = &uStack_28;
  uStack_28 = param_1;
  FUN_108270170(puVar1);
  func_0x0001083331d8(alStack_40,puVar1,param_2);
  func_0x0001083331d8(alStack_58,0,0);
  while ((alStack_58[0] != alStack_40[0] || ((alStack_58[0] != 0 && (iStack_48 != iStack_30))))) {
    FUN_108386ed4(alStack_40[0] + iStack_30);
    iStack_30 = iStack_30 + -0x48;
    if (iStack_30 < iStack_2c) {
      func_0x000108270228(alStack_40);
      func_0x0001083331fc(alStack_40);
    }
  }
  FUN_10840fc40(param_1);
  return;
}



/* Entry: 108333244; end: 1083332df;  */

undefined8 * FUN_108333244(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = param_1 + 1;
  param_1[2] = 0;
  *puVar4 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = FUN_108335c48;
  *param_1 = &PTR_FUN_110a3d068;
  uVar2 = param_2;
  FUN_108347858(param_2,puVar4);
  if ((uVar2 & 1) == 0) {
    *puVar4 = 0;
    param_1[2] = 0;
    func_0x000108152830(param_1 + 3,param_2 + 0x10);
  }
  lVar3 = *(long *)(param_2 + 0x170);
  iVar1 = *(int *)(lVar3 + 0x18);
  param_1[7] = param_2 + 0xf8;
  param_1[8] = lVar3 + iVar1;
  return param_1;
}



/* Entry: 1083332e0; end: 1083332f3;  */

void FUN_1083332e0(void)

{
  FUN_10814ca20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083332f4; end: 10833352f;  */

ulong * FUN_1083332f4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     ulong *param_5,ulong param_6,ulong param_7)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulong uStack_60;
  undefined8 uStack_58;
  
  puVar4 = &uStack_70;
  puVar8 = param_5 + 1;
  param_5[2] = 0;
  *puVar8 = 0;
  param_5[8] = (ulong)&PTR_FUN_110a3e568;
  *param_5 = param_6;
  param_5[10] = 0;
  param_5[9] = 0;
  param_5[0xe] = 0;
  param_5[0xd] = 0;
  param_5[0xc] = 0;
  param_5[0xb] = 0;
  param_5[0x10] = 0;
  param_5[0xf] = 0;
  param_5[0x11] = 0;
  param_5[4] = 0;
  param_5[3] = 0;
  param_5[6] = 0;
  param_5[5] = 0;
  param_5[7] = 0;
  param_5[0xe] = (ulong)FUN_108335c48;
  *(undefined1 *)(param_5 + 0x12) = 0;
  param_5[0x18] = 0;
  *(undefined1 *)(param_5 + 0x17) = 0;
  param_5[0x19] = 0;
  param_5[0x1a] = 0xffffffffffffffff;
  param_5[0x1b] = 0;
  param_5[0x1c] = 0;
  param_5[0x1d] = 0;
  param_5[0x1f] = 0;
  *(undefined2 *)(param_5 + 0x1e) = 0x101;
  *(undefined1 *)((long)param_5 + 0xf2) = 0;
  *(undefined1 *)(param_5 + 0x21) = 0;
  uVar9 = param_6;
  FUN_108347858(param_6,puVar8);
  if ((uVar9 & 1) == 0) {
    *puVar8 = 0;
    param_5[2] = 0;
    func_0x000108152830(param_5 + 3,param_6 + 0x10);
  }
  lVar7 = *(long *)(param_6 + 0x170) + (long)*(int *)(*(long *)(param_6 + 0x170) + 0x18);
  lVar2 = 0;
  if (*(char *)(lVar7 + 0x30) == '\0') {
    lVar2 = 0x18;
  }
  puVar5 = (ulong *)(lVar7 + lVar2);
  uVar10 = puVar5[1];
  uVar9 = *puVar5;
  uStack_58._0_4_ = (int)uVar10;
  uStack_60 = uVar9;
  uStack_58 = uVar10;
  if ((int)uStack_58 < 0x2000) {
    uStack_58._4_4_ = (int)(uVar10 >> 0x20);
    *(bool *)((long)param_5 + 0x109) = 0x1fff < uStack_58._4_4_;
    bVar1 = 0x1fff < uStack_58._4_4_;
    if (bVar1) goto joined_r0x000108333468;
LAB_108333494:
    FUN_1082b0634(param_5 + 9,puVar8);
    uVar6 = 0;
    lVar7 = *(long *)(param_6 + 0x170);
    iVar3 = *(int *)(lVar7 + 0x18);
    param_5[0xf] = param_6 + 0xf8;
    param_5[0x10] = lVar7 + iVar3;
    *(undefined4 *)(param_5 + 0x20) = 0;
  }
  else {
    *(undefined1 *)((long)param_5 + 0x109) = 1;
joined_r0x000108333468:
    if (param_7 == 0) {
      param_5[7] = uVar10;
      param_5[6] = uVar9;
    }
    else {
      func_0x000108142084(param_6 + 0xf8,param_7,1);
      uStack_70 = (undefined4)uVar9;
      uStack_6c = param_2;
      uStack_68 = param_3;
      uStack_64 = param_4;
      func_0x00010812f180();
      param_5[6] = (ulong)puVar4;
      param_5[7] = param_7;
      puVar5 = param_5 + 6;
      func_0x00010821b838(puVar5,&uStack_60);
      if ((int)puVar5 == 0) {
        *(undefined2 *)(param_5 + 0x21) = 1;
        goto LAB_108333494;
      }
      if ((int)param_5[7] < 0x2000) {
        *(bool *)((long)param_5 + 0x109) = 0x1fff < *(int *)((long)param_5 + 0x3c);
        if (*(int *)((long)param_5 + 0x3c) < 0x2000) goto LAB_108333494;
      }
      else {
        *(undefined1 *)((long)param_5 + 0x109) = 1;
      }
    }
    param_5[0x10] = (ulong)(param_5 + 0x18);
    uVar6 = *(undefined4 *)((long)param_5 + 0x34);
    *(int *)(param_5 + 0x20) = (int)param_5[6] + -0x1fff;
  }
  *(undefined4 *)((long)param_5 + 0x104) = uVar6;
  param_5[0x11] = *param_5 + 0x28;
  return param_5;
}



/* Entry: 108333530; end: 108333563;  */

long FUN_108333530(long param_1)

{
  FUN_108386ed4(param_1 + 0xc0);
  FUN_10814ca20(param_1 + 0x40);
  FUN_10810a400(param_1 + 0x18);
  return param_1;
}



/* Entry: 108333564; end: 1083335b7;  */

undefined8 * FUN_108333564(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = param_3;
  FUN_108376360();
  *(char *)(param_1 + 2) = (char)puVar1;
  if ((int)puVar1 != 0) {
    func_0x0001083763a8(param_3,param_2,param_1);
    uVar2 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar2;
  }
  return param_1;
}



/* Entry: 1083335b8; end: 108333637;  */

long FUN_1083335b8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  lVar2 = *plVar4;
  lVar3 = (long)*(int *)(lVar2 + 0x18);
  iVar1 = *(int *)(lVar2 + lVar3 + 0x40);
  if (0 < iVar1) {
    *(int *)(lVar2 + lVar3 + 0x40) = iVar1 + -1;
    FUN_108333098(plVar4);
    FUN_1083330e4();
    lVar2 = *plVar4;
    lVar3 = (long)*(int *)(lVar2 + 0x18);
  }
  return lVar2 + lVar3;
}



/* Entry: 108333638; end: 108333683;  */

long * FUN_108333638(long *param_1)

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



/* Entry: 108333684; end: 1083337af;  */

long FUN_108333684(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0x170);
  lVar2 = *plVar4;
  lVar3 = (long)*(int *)(lVar2 + 0x18);
  iVar1 = *(int *)(lVar2 + lVar3 + 0x40);
  if (0 < iVar1) {
    *(int *)(lVar2 + lVar3 + 0x40) = iVar1 + -1;
    FUN_108333098(plVar4);
    FUN_1083330e4();
    lVar2 = *plVar4;
    lVar3 = (long)*(int *)(lVar2 + 0x18);
  }
  return lVar2 + lVar3;
}



/* Entry: 1083337b0; end: 1083337eb;  */

void FUN_1083337b0(void)

{
  int iVar1;
  
  if ((bRam0000000113826c48 & 1) == 0) {
    iVar1 = 0x13826c48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113826c48);
      return;
    }
  }
  return;
}



/* Entry: 1083337ec; end: 1083338fb;  */

void FUN_1083337ec(undefined4 param_1,long *param_2)

{
  byte *pbVar1;
  long *plVar2;
  int iVar3;
  int unaff_w22;
  int iVar4;
  byte unaff_w23;
  byte bVar5;
  long *plVar6;
  long lVar7;
  
  iVar3 = 0x43;
  switch(param_1) {
  case 0:
    break;
  case 1:
    return;
  case 2:
    iVar3 = 1;
    break;
  default:
    iVar3 = 0x42;
    break;
  case 4:
    iVar3 = 0x3e;
    break;
  case 5:
    iVar3 = 0x40;
    break;
  case 6:
    iVar3 = 0x3c;
    break;
  case 7:
    iVar3 = 0x41;
    break;
  case 8:
    iVar3 = 0x3d;
    break;
  case 9:
    iVar3 = 0x3f;
    break;
  case 10:
    iVar3 = 0x3b;
    break;
  case 0xb:
    iVar3 = 0x48;
    break;
  case 0xc:
    iVar3 = 0x46;
    break;
  case 0xd:
    iVar3 = 0x44;
    break;
  case 0xe:
    iVar3 = 0x47;
    break;
  case 0xf:
    iVar3 = 0x4e;
    break;
  case 0x10:
    iVar3 = 0x49;
    break;
  case 0x11:
    iVar3 = 0x4d;
    break;
  case 0x12:
    iVar3 = 0xa5;
    break;
  case 0x13:
    iVar3 = 0xa4;
    break;
  case 0x14:
    iVar3 = 0x4c;
    break;
  case 0x15:
    iVar3 = 0xa6;
    break;
  case 0x16:
    iVar3 = 0x4a;
    break;
  case 0x17:
    iVar3 = 0x4b;
    break;
  case 0x18:
    iVar3 = 0x45;
    break;
  case 0x19:
    iVar3 = 0xa7;
    break;
  case 0x1a:
    iVar3 = 0xa8;
    break;
  case 0x1b:
    iVar3 = 0xa9;
    break;
  case 0x1c:
    iVar3 = 0xaa;
  }
  bVar5 = 0;
  iVar4 = 0;
  switch(iVar3) {
  case 0x12:
  case 0x13:
  case 0x33:
  case 0x37:
    bVar5 = 0;
    goto code_r0x000108387980;
  case 0x14:
    iVar4 = 0;
    bVar5 = 1;
    break;
  case 0x15:
  case 0x19:
  case 0x1d:
  case 0x21:
  case 0x25:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x35:
  case 0x36:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x62:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x78:
  case 0x7c:
  case 0x80:
  case 0x84:
  case 0x88:
  case 0x8c:
  case 0x90:
  case 0x94:
  case 0x98:
  case 0x9c:
  case 0x9d:
    break;
  case 0x16:
  case 0x17:
  case 0x34:
  case 0x38:
    func_0x000108388e04();
    break;
  case 0x18:
    func_0x000108388df8();
    break;
  case 0x1a:
  case 0x1b:
    func_0x000108388e04();
    break;
  case 0x1c:
    func_0x000108388df8();
    break;
  case 0x1e:
  case 0x1f:
    func_0x000108388e04();
    break;
  case 0x20:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
    func_0x000108388df8();
    break;
  case 0x22:
  case 0x23:
    func_0x000108388e04();
    break;
  case 0x24:
    func_0x000108388df8();
    break;
  case 0x26:
    func_0x000108388df8();
    break;
  case 0x4f:
    bVar5 = 1;
code_r0x000108387980:
    iVar4 = 1;
    break;
  case 0x61:
    func_0x000108388e58(param_2,0x10);
    func_0x000108388e58(param_2,0);
    func_0x000108388e68();
    break;
  case 0x75:
  case 0x76:
    func_0x000108388e04();
    break;
  case 0x77:
    func_0x000108388df8();
    break;
  case 0x79:
  case 0x7a:
    func_0x000108388e04();
    break;
  case 0x7b:
    func_0x000108388df8();
    break;
  case 0x7d:
  case 0x7e:
    func_0x000108388e04();
    break;
  case 0x7f:
    func_0x000108388df8();
    break;
  case 0x81:
  case 0x82:
    func_0x000108388e04();
    break;
  case 0x83:
    func_0x000108388df8();
    break;
  case 0x85:
  case 0x86:
    func_0x000108388e04();
    break;
  case 0x87:
    func_0x000108388df8();
    break;
  case 0x89:
  case 0x8a:
    func_0x000108388e04();
    break;
  case 0x8b:
    func_0x000108388df8();
    break;
  case 0x8d:
  case 0x8e:
    func_0x000108388e04();
    break;
  case 0x8f:
    func_0x000108388df8();
    break;
  case 0x91:
  case 0x92:
    func_0x000108388e04();
    break;
  case 0x93:
    func_0x000108388df8();
    break;
  case 0x95:
  case 0x96:
    func_0x000108388e04();
    break;
  case 0x97:
    func_0x000108388df8();
    break;
  case 0x99:
  case 0x9a:
    func_0x000108388e04();
    break;
  case 0x9b:
    func_0x000108388df8();
    break;
  case 0x9e:
  case 0x9f:
    func_0x000108388e04();
    break;
  case 0xa0:
    func_0x000108388df8();
    break;
  default:
    if (iVar3 == 0xe1) {
      plVar2 = param_2;
      FUN_108387ab4();
      func_0x000108388e68();
      plRam0000000000000000 = plVar2;
      iVar4 = unaff_w22;
      bVar5 = unaff_w23;
    }
    else {
      iVar4 = 0;
      bVar5 = 0;
      if (iVar3 == 0xf2) {
        plVar2 = param_2;
        FUN_108387ab4();
        func_0x000108388e68();
        plRam0000000000000008 = plVar2;
      }
    }
  }
  plVar6 = (long *)*param_2;
  lVar7 = param_2[2];
  plVar2 = plVar6;
  func_0x0001081865e0(plVar6,0x18,8);
  plVar6[1] = (long)(plVar2 + 3);
  *plVar2 = lVar7;
  *(int *)(plVar2 + 1) = iVar3;
  plVar2[2] = 0;
  param_2[2] = (long)plVar2;
  *(int *)(param_2 + 4) = (int)param_2[4] + 1;
  if (((bVar5 & 1) == 0) && (iVar4 == 0)) {
    return;
  }
  FUN_10835c58c();
  pbVar1 = (byte *)(param_2[9] + 0xd);
  lVar7 = (long)(int)param_2[10] << 4;
  while( true ) {
    if (lVar7 == 0) {
      func_0x000108388900(param_2 + 9,&stack0xffffffffffffffe0);
      return;
    }
    if (*(long *)(pbVar1 + -0xd) == 0) break;
    pbVar1 = pbVar1 + 0x10;
    lVar7 = lVar7 + -0x10;
  }
  pbVar1[-1] = (byte)iVar4 | pbVar1[-1];
  *pbVar1 = bVar5 | *pbVar1;
  return;
}



/* Entry: 1083338fc; end: 108333a83;  */

void FUN_1083338fc(undefined1 *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined8 *puStack_210;
  undefined4 uStack_208;
  ulong *puStack_200;
  undefined4 uStack_1f8;
  ulong *puStack_1f0;
  undefined4 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [376];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  switch((ulong)param_1 & 0xffffffff) {
  case 0:
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    break;
  case 1:
    uStack_1b8 = param_2[1];
    uStack_1c0 = *param_2;
    break;
  case 2:
    uStack_1b8 = param_3[1];
    uStack_1c0 = *param_3;
    break;
  case 3:
    fVar2 = (float)(param_2[1] >> 0x20);
    fVar3 = 1.0 - fVar2;
    uStack_1c0 = CONCAT44((float)(*param_2 >> 0x20) + (float)(*param_3 >> 0x20) * fVar3,
                          (float)*param_2 + (float)*param_3 * fVar3);
    uStack_1b8 = CONCAT44(fVar2 + (float)(param_3[1] >> 0x20) * fVar3,
                          (float)param_2[1] + (float)param_3[1] * fVar3);
    break;
  default:
    FUN_10821a8e4(auStack_1b0);
    uStack_1c8 = param_2[1];
    uStack_1d0 = *param_2;
    uStack_1d8 = param_3[1];
    uStack_1e0 = *param_3;
    puStack_1f0 = &uStack_1d0;
    uStack_1e8 = 0;
    puStack_200 = &uStack_1e0;
    uStack_1f8 = 0;
    puStack_210 = &uStack_1c0;
    uStack_208 = 0;
    FUN_108387820(auStack_1b0,0x8d,&puStack_200);
    FUN_108387820(auStack_1b0,0,0);
    FUN_108387820(auStack_1b0,0x8d,&puStack_1f0);
    FUN_1083337ec(param_1,auStack_1b0);
    FUN_108387820(auStack_1b0,0x8f,&puStack_210);
    param_2 = (ulong *)0x0;
    FUN_108388618(auStack_1b0,0,0,1,1);
    param_1 = auStack_1b0;
    func_0x00010821a970();
  }
  iVar1 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail(uStack_1c0 & 0xffffffff,uStack_1c0._4_4_,uStack_1b8 & 0xffffffff,
                      uStack_1b8._4_4_);
    __Unwind_Resume();
    FUN_10837626c();
    if (((ulong)param_1 >> 0x20 & 1) != 0) {
      switch((int)param_1) {
      case 1:
        FUN_108333b5c();
        break;
      case 2:
        break;
      case 4:
        break;
      case 5:
        if (iVar1 != 0) {
          FUN_108333b5c();
        }
        break;
      case 6:
        FUN_108333b5c();
      }
    }
    return;
  }
  return;
}



/* Entry: 108333a84; end: 108333b5b;  */

void FUN_108333a84(ulong param_1,int param_2)

{
  FUN_10837626c();
  if ((param_1 >> 0x20 & 1) != 0) {
    switch((int)param_1) {
    case 1:
      FUN_108333b5c();
      break;
    case 2:
      break;
    case 4:
      break;
    case 5:
      if (param_2 != 0) {
        FUN_108333b5c();
      }
      break;
    case 6:
      FUN_108333b5c();
    }
  }
  return;
}



/* Entry: 108333b5c; end: 108333b63;  */

bool FUN_108333b5c(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  
  lVar2 = unaff_x19;
  FUN_108188360();
  bVar1 = false;
  if (((int)lVar2 == 0xff) && (*(long *)(unaff_x19 + 0x18) == 0)) {
    bVar1 = *(long *)(unaff_x19 + 8) == 0;
  }
  return bVar1;
}


