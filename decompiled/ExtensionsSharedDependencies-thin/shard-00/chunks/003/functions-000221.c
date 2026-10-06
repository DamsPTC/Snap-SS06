/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004bdf10; end: 004bdf13;  */

undefined8 * FUN_004bdf10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed1f8;
  func_0x004bd674(param_1 + 3);
  func_0x004bd698(param_1 + 1);
  return param_1;
}



/* Entry: 004bdf14; end: 004bdf43;  */

void FUN_004bdf14(void)

{
  FUN_004bdf44();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004bdf44; end: 004bdf7f;  */

undefined8 * FUN_004bdf44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed1f8;
  func_0x004bd674(param_1 + 3);
  func_0x004bd698(param_1 + 1);
  return param_1;
}



/* Entry: 004bdf80; end: 004bdfeb;  */

undefined8 * FUN_004bdf80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_004ba21c(param_1 + 2);
  }
  func_0x004ba240((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_00648ea0(uVar1);
  func_0x004ba240(param_1 + 2);
  return param_1;
}



/* Entry: 004bdfec; end: 004be01b;  */

undefined8 * FUN_004bdfec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined2 *)(param_1 + 2) = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00648ea0(uVar1);
  return param_1;
}



/* Entry: 004be01c; end: 004be0eb;  */

void FUN_004be01c(void)

{
  return;
}



/* Entry: 004be0ec; end: 004be177;  */

void FUN_004be0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  
  func_0x004be9f4();
  FUN_004be178();
  FUN_004b7b94(param_1,param_2,param_3);
  func_0x004be980();
  (*extraout_x8)(param_1,9);
  return;
}



/* Entry: 004be178; end: 004be193;  */

void FUN_004be178(void)

{
  FUN_004bceb0();
  return;
}



/* Entry: 004be194; end: 004be55f;  */

void FUN_004be194(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [32];
  char cStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [48];
  undefined8 uStack_170;
  undefined1 auStack_168 [32];
  undefined1 uStack_148;
  undefined1 auStack_140 [48];
  long alStack_110 [5];
  byte bStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte bStack_b8;
  long *plStack_b0;
  undefined1 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  FUN_004be178(*(undefined8 *)(param_2 + 8));
  FUN_004b7b44(auStack_208);
  (**(code **)(**(long **)(param_2 + 0x18) + 0x10))(*(long **)(param_2 + 0x18),10);
  uStack_170 = 0;
  auStack_168[0] = 0;
  uStack_148 = 0;
  if (cStack_1d8 == '\0') {
    uVar10 = 0;
  }
  else {
    FUN_004b8068(auStack_168,auStack_1f8);
    FUN_004b7f74(auStack_1f8);
    uVar10 = uStack_170;
  }
  uStack_170 = uStack_200;
  uStack_200 = uVar10;
  FUN_004be7c0(auStack_140,&uStack_170);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  FUN_004be7c0(auStack_1a0,&uStack_1d0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_004be8b0(&lStack_e0,auStack_140);
  FUN_004be8b0(alStack_110,auStack_1a0);
  uStack_a8 = 0;
  plStack_b0 = param_1;
  do {
    if ((((bStack_b8 & 1) == 0) && ((bStack_e8 & 1) == 0)) || (lStack_e0 == alStack_110[0])) {
      uStack_a8 = 1;
      FUN_004be854(&plStack_b0);
      func_0x004be978(alStack_110);
      FUN_004b8114(&uStack_d8);
      func_0x004be978(auStack_1a0);
      func_0x004be9d4();
      func_0x004be978(auStack_140);
      func_0x004be978(&uStack_170);
      FUN_004be754(auStack_208);
      return;
    }
    if ((bStack_b8 & 1) == 0) {
      uVar10 = *(undefined8 *)(lStack_e0 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_a0,lStack_e0 + 0x58);
      FUN_00461b38(auStack_88,"expected row but query reported done. sql:",auStack_a0);
      FUN_00641f40(uVar10,0x65,auStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    }
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 < (undefined8 *)param_1[2]) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[1] = uStack_d0;
      *puVar9 = uStack_d8;
      puVar9[2] = uStack_c8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_d8 = 0;
      puVar9[3] = uStack_c0;
      puVar9 = puVar9 + 4;
    }
    else {
      puVar11 = (undefined8 *)*param_1;
      lVar12 = (long)puVar9 - (long)puVar11 >> 5;
      uVar1 = lVar12 + 1;
      if (uVar1 >> 0x3b != 0) {
        FUN_004be840();
LAB_004be53c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x4be540);
        (*pcVar3)();
      }
      uVar7 = param_1[2] - (long)puVar11;
      uVar8 = (long)uVar7 >> 4;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar7) {
        uVar8 = 0x7ffffffffffffff;
      }
      if (uVar8 == 0) {
        lVar4 = 0;
      }
      else {
        if (uVar8 >> 0x3b != 0) {
          FUN_0040cee8();
          goto LAB_004be53c;
        }
        lVar4 = uVar8 << 5;
        __Znwm();
      }
      uVar10 = uStack_c8;
      puVar2 = (undefined8 *)(lVar4 + ((long)puVar9 - (long)puVar11));
      puVar2[1] = uStack_d0;
      *puVar2 = uStack_d8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_d8 = 0;
      puVar2[2] = uVar10;
      puVar2[3] = uStack_c0;
      puVar5 = puVar2 + lVar12 * -4;
      for (puVar13 = puVar11; puVar13 != puVar9; puVar13 = puVar13 + 4) {
        FUN_004b80ec(puVar5,puVar13);
        puVar5 = puVar5 + 4;
      }
      for (; puVar11 != puVar9; puVar11 = puVar11 + 4) {
        FUN_0040d974(puVar11);
      }
      puVar9 = puVar2 + 4;
      lVar6 = *param_1;
      *param_1 = (long)(puVar2 + lVar12 * -4);
      param_1[1] = (long)puVar9;
      param_1[2] = lVar4 + uVar8 * 0x20;
      if (lVar6 != 0) {
        __ZdlPv();
      }
    }
    param_1[1] = (long)puVar9;
    FUN_004b7ecc(&lStack_e0);
  } while( true );
}



/* Entry: 004be560; end: 004be617;  */

char FUN_004be560(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  char cVar3;
  code *extraout_x8;
  undefined1 auStack_50 [8];
  long lStack_48;
  char cStack_38;
  
  func_0x004be9f4();
  FUN_004be178();
  func_0x004b7b68(auStack_50,param_1 + 0x78,param_2);
  cVar3 = cStack_38;
  lVar2 = lStack_48;
  if (cStack_38 != '\0') {
    cStack_38 = '\0';
  }
  lStack_48 = 0;
  FUN_004be91c(auStack_50);
  func_0x004be980();
  (*extraout_x8)();
  cVar1 = '\0';
  if (lVar2 != 0) {
    cVar1 = cVar3;
  }
  return cVar1;
}



/* Entry: 004be618; end: 004be68f;  */

void FUN_004be618(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  
  func_0x004be9f4();
  FUN_004be178();
  FUN_004b7c30(param_1 + 0x178,param_2);
  func_0x004be980();
  (*extraout_x8)();
  return;
}



/* Entry: 004be690; end: 004be6ff;  */

void FUN_004be690(long param_1)

{
  code *extraout_x8;
  
  func_0x004be9f4();
  FUN_004be178();
  FUN_00456cd0(param_1 + 0x200);
  func_0x004be980();
  (*extraout_x8)();
  return;
}



/* Entry: 004be700; end: 004be703;  */

undefined8 * FUN_004be700(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed268;
  func_0x004bd674(param_1 + 3);
  func_0x004bd698(param_1 + 1);
  return param_1;
}



/* Entry: 004be704; end: 004be717;  */

void FUN_004be704(void)

{
  FUN_004be718();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004be718; end: 004be753;  */

undefined8 * FUN_004be718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed268;
  func_0x004bd674(param_1 + 3);
  func_0x004bd698(param_1 + 1);
  return param_1;
}



/* Entry: 004be754; end: 004be7bf;  */

undefined8 * FUN_004be754(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_004b7f74(param_1 + 2);
  }
  FUN_004b8114((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_00648ea0(uVar1);
  FUN_004b8114(param_1 + 2);
  return param_1;
}



/* Entry: 004be7c0; end: 004be803;  */

void FUN_004be7c0(undefined8 param_1)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [40];
  
  FUN_004be804(auStack_50);
  FUN_004be804(param_1,auStack_50);
  FUN_004b8114(auStack_48);
  return;
}



/* Entry: 004be804; end: 004be83f;  */

void FUN_004be804(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x004bea00();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_004b8068((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 004be840; end: 004be853;  */

long * FUN_004be840(void)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  pcVar1 = "vector";
  FUN_0040d774();
  if ((*(byte *)((long)pcVar1 + 8) & 1) == 0) {
    plVar3 = *(long **)pcVar1;
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      lVar2 = plVar3[1];
      while (lVar2 != lVar4) {
        lVar2 = lVar2 + -0x20;
        FUN_0040d974();
      }
      plVar3[1] = lVar4;
      __ZdlPv(**(undefined8 **)pcVar1);
    }
  }
  return (long *)pcVar1;
}



/* Entry: 004be854; end: 004be8af;  */

long * FUN_004be854(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    plVar2 = (long *)*param_1;
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar1 = plVar2[1];
      while (lVar1 != lVar3) {
        lVar1 = lVar1 + -0x20;
        FUN_0040d974();
      }
      plVar2[1] = lVar3;
      __ZdlPv(*(undefined8 *)*param_1);
    }
  }
  return param_1;
}



/* Entry: 004be8b0; end: 004be91b;  */

void FUN_004be8b0(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x004bea00();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_004bbc8c((undefined1 *)(param_1 + 8),param_2 + 8);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  return;
}



/* Entry: 004be91c; end: 004be94f;  */

undefined8 * FUN_004be91c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00648ea0(uVar1);
  return param_1;
}



/* Entry: 004be950; end: 004bea13;  */

void FUN_004be950(void)

{
  return;
}



/* Entry: 004bea14; end: 004bea8b;  */

undefined8 FUN_004bea14(char *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lStack_28;
  
  plVar1 = (long *)(param_1 + 8);
  lStack_28 = *plVar1;
  do {
    if (lStack_28 == 0) goto LAB_004bea70;
    plVar2 = plVar1;
    FUN_004bea8c(plVar1,&lStack_28,lStack_28 + 1,5);
  } while ((int)plVar2 == 0);
  if (*param_1 == '\x01') {
    func_0x004bea94(param_1);
LAB_004bea70:
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 004bea8c; end: 004beab7;  */

undefined8 FUN_004bea8c(long *param_1,long *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = 2;
  if (param_4 != 4) {
    iVar1 = param_4;
  }
  iVar2 = 0;
  if (param_4 != 3) {
    iVar2 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if ((iVar2 - 1U < 2) || (iVar2 != 5)) {
code_r0x004beb98:
      lVar6 = *param_2;
      lVar5 = *param_1;
      goto LAB_004beba0;
    }
    break;
  case 3:
    if ((iVar2 - 1U < 2) || (iVar2 == 5)) break;
    lVar6 = *param_2;
    lVar5 = *param_1;
    goto code_r0x004bebc0;
  case 4:
  case 5:
    break;
  default:
    if (iVar2 - 1U < 2) goto code_r0x004beb98;
    if (iVar2 == 5) break;
    lVar6 = *param_2;
    lVar5 = *param_1;
LAB_004beba0:
    if (lVar5 != lVar6) goto LAB_004bebe4;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = param_3;
      cVar3 = ExclusiveMonitorsStatus();
    }
    goto LAB_004bebcc;
  }
  lVar6 = *param_2;
  lVar5 = *param_1;
code_r0x004bebc0:
  if (lVar5 == lVar6) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = param_3;
      cVar3 = ExclusiveMonitorsStatus();
    }
LAB_004bebcc:
    if (cVar3 == '\0') {
      return 1;
    }
  }
  else {
LAB_004bebe4:
    ClearExclusiveLocal();
  }
  *param_2 = lVar5;
  return 0;
}



/* Entry: 004beab8; end: 004beaff;  */

long FUN_004beab8(long param_1)

{
  long lVar1;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  lVar1 = param_1;
  FUN_004beb00(param_1,&uStack_21,1,5);
  if ((int)lVar1 != 0) {
    func_0x004bea94(param_1);
  }
  return param_1 + 0x18;
}



/* Entry: 004beb00; end: 004bef13;  */

undefined8 FUN_004beb00(char *param_1,char *param_2,char param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  
  iVar1 = 2;
  if (param_4 != 4) {
    iVar1 = param_4;
  }
  iVar2 = 0;
  if (param_4 != 3) {
    iVar2 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 3:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 4:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 5:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  default:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      if (iVar2 != 5) {
        cVar3 = *param_2;
        do {
          cVar5 = *param_1;
          if (cVar5 != cVar3) {
            bVar6 = false;
            ClearExclusiveLocal();
            goto LAB_004bee6c;
          }
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar6) {
            *param_1 = param_3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar6 = true;
        goto LAB_004bee6c;
      }
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_004bee64;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  bVar6 = true;
LAB_004bee6c:
  if (!bVar6) {
    *param_2 = cVar5;
    return 0;
  }
  return 1;
LAB_004bee64:
  bVar6 = false;
  ClearExclusiveLocal();
  goto LAB_004bee6c;
}



/* Entry: 004bef14; end: 004befc7;  */

ulong FUN_004bef14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *extraout_x8;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_004befc8();
  if (lVar1 == 0) {
    uVar2 = 0x100000000;
    uVar3 = 10;
  }
  else {
    FUN_004b8668(lVar1 + 0x78,param_2,param_3);
    func_0x004bf3a0();
    (*extraout_x8)();
    uVar3 = 0;
    uVar2 = 0;
  }
  return uVar2 | uVar3;
}



/* Entry: 004befc8; end: 004befe3;  */

void FUN_004befc8(void)

{
  FUN_004bceb0();
  return;
}



/* Entry: 004befe4; end: 004bf20b;  */

void FUN_004befe4(undefined1 *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  code *extraout_x8;
  undefined8 uVar4;
  undefined1 auStack_1c0 [8];
  long lStack_1b8;
  undefined1 auStack_1b0 [72];
  char cStack_168;
  undefined1 auStack_160 [72];
  char cStack_118;
  undefined8 uStack_110;
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
  long lStack_b0;
  undefined1 auStack_a8 [72];
  byte bStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(param_2 + 8);
  FUN_004befc8();
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[0x48] = 0;
    return;
  }
  FUN_004b863c(auStack_1c0);
  lStack_b0 = 0;
  auStack_a8[0] = 0;
  bStack_60 = 0;
  if (cStack_168 == '\0') {
    lVar3 = 0;
  }
  else {
    func_0x004b8b14(auStack_a8,auStack_1b0);
    func_0x004b8af0(auStack_1b0);
    lVar3 = lStack_b0;
  }
  lVar1 = lStack_1b8;
  lStack_b0 = lStack_1b8;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_1b8 = lVar3;
  if ((bStack_60 & 1) == 0) {
    func_0x004bf3cc();
  }
  else {
    func_0x004bf3cc();
    if (lVar1 != 0) {
      if ((bStack_60 & 1) == 0) {
        uVar4 = *(undefined8 *)(lStack_b0 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_58,lStack_b0 + 0x58);
        FUN_00461b38(&uStack_110,"expected row but query reported done. sql:",auStack_58);
        FUN_00641f40(uVar4,0x65,&uStack_110);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
      }
      FUN_004b8b94(auStack_160,auStack_a8);
      cStack_118 = '\x01';
      goto LAB_004bf10c;
    }
  }
  cStack_118 = '\0';
  auStack_160[0] = 0;
LAB_004bf10c:
  FUN_004b8be4(auStack_a8);
  FUN_004bf304(auStack_1c0);
  func_0x004bf3a0();
  (*extraout_x8)();
  bVar2 = cStack_118 != '\x01';
  if (bVar2) {
    *param_1 = 0;
  }
  else {
    FUN_004d2b64(param_1,0,auStack_160);
  }
  param_1[0x48] = !bVar2;
  FUN_004b8be4(auStack_160);
  return;
}



/* Entry: 004bf20c; end: 004bf2ab;  */

bool FUN_004bf20c(long param_1,undefined8 param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_004befc8();
  if (lVar1 != 0) {
    FUN_004b7c30(lVar1 + 0x100,param_2);
    func_0x004bf3a0();
    (*extraout_x8)();
  }
  return lVar1 != 0;
}



/* Entry: 004bf2ac; end: 004bf2af;  */

undefined8 * FUN_004bf2ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed2d8;
  func_0x004bd674(param_1 + 3);
  func_0x004bd698(param_1 + 1);
  return param_1;
}



/* Entry: 004bf2b0; end: 004bf2c3;  */

void FUN_004bf2b0(void)

{
  FUN_004bf2c4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004bf2c4; end: 004bf303;  */

undefined8 * FUN_004bf2c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed2d8;
  func_0x004bd674(param_1 + 3);
  func_0x004bd698(param_1 + 1);
  return param_1;
}



/* Entry: 004bf304; end: 004bf377;  */

undefined8 * FUN_004bf304(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 0xb) != '\0') {
    FUN_004b8af0(param_1 + 2);
  }
  FUN_004b8be4((ulong)&uStack_80 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_00648ea0(uVar1);
  FUN_004b8be4(param_1 + 2);
  return param_1;
}



/* Entry: 004bf378; end: 004bf40f;  */

void FUN_004bf378(void)

{
  return;
}



/* Entry: 004bf410; end: 004bf507;  */

/* WARNING: Possible PIC construction at 0x004bf468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004bf47c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004bf46c) */
/* WARNING: Removing unreachable block (ram,0x004bf474) */
/* WARNING: Removing unreachable block (ram,0x004bf480) */
/* WARNING: Removing unreachable block (ram,0x004bf510) */

void FUN_004bf410(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = param_1;
  func_0x004bf984(param_1,9);
  *puVar1 = &PTR_DAT_009ed338;
  if (param_4 < 6) {
    uVar2 = *(undefined8 *)(&UNK_00807688 + (ulong)param_4 * 8);
  }
  else {
    uVar2 = 0xd;
  }
  lVar3 = param_1[8];
  if (lVar3 != 3) {
    param_1[8] = lVar3 + 1;
    *(undefined1 *)((long)param_1 + lVar3 * 0x10 + 0xc) = 0;
    param_1[lVar3 * 2 + 2] = uVar2;
    if ((*(byte *)(param_1 + lVar3 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar3 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 004bf508; end: 004bf5af;  */

void FUN_004bf508(void)

{
  return;
}



/* Entry: 004bf5b0; end: 004bf5f7;  */

void FUN_004bf5b0(long param_1)

{
  long *plVar1;
  undefined1 auStack_80 [96];
  
  plVar1 = *(long **)(param_1 + 8);
  FUN_004bf5f8(auStack_80);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_80,1);
  func_0x004bf954();
  return;
}



/* Entry: 004bf5f8; end: 004bf7b7;  */

void FUN_004bf5f8(undefined8 param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 *apuStack_98 [3];
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  uint uStack_58;
  
  FUN_00425cb4(auStack_b0,"scn_messaging_ext");
  puVar2 = param_2;
  (**(code **)*param_2)(param_2);
  func_0x004bf530();
  FUN_00425cb4(auStack_c8,puVar2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0x3f800000;
  (**(code **)(*param_2 + 8))();
  lVar4 = 3;
  do {
    if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) break;
    uStack_60 = *param_2;
    uStack_58 = (uint)param_2[1];
    if (uStack_58 == 0xffffffff) {
      func_0x004bf890();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x4bf768);
      (*pcVar1)();
    }
    apuStack_98[0] = &uStack_79;
    (*(code *)(&PTR_FUN_009ed678)[uStack_58])(auStack_78,apuStack_98,(long)&uStack_60 + 4);
    uVar3 = uStack_60 & 0xff;
    func_0x004bf558(uVar3);
    FUN_00425cb4(apuStack_98,uVar3);
    FUN_00481acc(&uStack_120,apuStack_98);
    FUN_004575b8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    param_2 = param_2 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_00465ac8(auStack_f8,&uStack_120);
  FUN_004771f4(param_1,auStack_b0,auStack_c8,auStack_f8);
  FUN_00459de4(auStack_f8);
  func_0x00459d84(&uStack_120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  return;
}



/* Entry: 004bf7b8; end: 004bf7f7;  */

void FUN_004bf7b8(void)

{
  long *unaff_x19;
  
  FUN_004bf92c();
  func_0x004bf970((double)*unaff_x19,0x412e848000000000);
  func_0x004bf964();
  func_0x004bf954();
  return;
}



/* Entry: 004bf7f8; end: 004bf837;  */

void FUN_004bf7f8(void)

{
  long *unaff_x19;
  
  FUN_004bf92c();
  func_0x004bf970((double)*unaff_x19,0x408f400000000000);
  func_0x004bf964();
  func_0x004bf954();
  return;
}



/* Entry: 004bf838; end: 004bf877;  */

void FUN_004bf838(void)

{
  long *unaff_x20;
  
  FUN_004bf92c();
  (**(code **)(*unaff_x20 + 0x20))();
  func_0x004bf954();
  return;
}



/* Entry: 004bf878; end: 004bf87b;  */

undefined8 * FUN_004bf878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed620;
  func_0x0045eb8c(param_1 + 1);
  return param_1;
}



/* Entry: 004bf87c; end: 004bf8c3;  */

void FUN_004bf87c(void)

{
  FUN_004bf8fc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004bf8c4; end: 004bf8c7;  */

void FUN_004bf8c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)();
  return;
}



/* Entry: 004bf8c8; end: 004bf8f3;  */

ulong * FUN_004bf8c8(ulong *param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  
  puVar7 = (ulong *)(ulong)*param_3;
  func_0x004bf580();
  puVar5 = puVar7;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar9 = (long *)puVar5[1];
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    return puVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar5;
    puVar6 = param_1;
    if (puVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,puVar7,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return param_1;
}



/* Entry: 004bf8f4; end: 004bf8fb;  */

void FUN_004bf8f4(undefined8 param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00779fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__19to_stringEi_00998cb0)(*param_2);
  return;
}



/* Entry: 004bf8fc; end: 004bf92b;  */

undefined8 * FUN_004bf8fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed620;
  func_0x0045eb8c(param_1 + 1);
  return param_1;
}



/* Entry: 004bf92c; end: 004bf9fb;  */

void FUN_004bf92c(undefined8 param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 *apuStack_98 [3];
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  uint uStack_58;
  
  FUN_00425cb4(auStack_b0,"scn_messaging_ext");
  puVar2 = param_2;
  (**(code **)*param_2)(param_2);
  func_0x004bf530();
  FUN_00425cb4(auStack_c8,puVar2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0x3f800000;
  (**(code **)(*param_2 + 8))();
  lVar4 = 3;
  do {
    if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) break;
    uStack_60 = *param_2;
    uStack_58 = (uint)param_2[1];
    if (uStack_58 == 0xffffffff) {
      func_0x004bf890();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x4bf768);
      (*pcVar1)();
    }
    apuStack_98[0] = &uStack_79;
    (*(code *)(&PTR_FUN_009ed678)[uStack_58])(auStack_78,apuStack_98,(long)&uStack_60 + 4);
    uVar3 = uStack_60 & 0xff;
    func_0x004bf558(uVar3);
    FUN_00425cb4(apuStack_98,uVar3);
    FUN_00481acc(&uStack_120,apuStack_98);
    FUN_004575b8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    param_2 = param_2 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_00465ac8(auStack_f8,&uStack_120);
  FUN_004771f4();
  FUN_00459de4(auStack_f8);
  func_0x00459d84(&uStack_120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  return;
}



/* Entry: 004bf9fc; end: 004bfa7b;  */

/* WARNING: Possible PIC construction at 0x004bfa40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004bfa44) */
/* WARNING: Removing unreachable block (ram,0x004bfa60) */
/* WARNING: Removing unreachable block (ram,0x004bfa50) */
/* WARNING: Removing unreachable block (ram,0x004bfa64) */

void FUN_004bf9fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = param_1;
  func_0x004bf984(param_1,5);
  *puVar1 = &PTR_DAT_009ed6e0;
  uVar2 = (ulong)*(byte *)(param_3 + 8);
  FUN_004bfa7c();
  lVar3 = param_1[8];
  if (lVar3 != 3) {
    param_1[8] = lVar3 + 1;
    *(undefined1 *)((long)param_1 + lVar3 * 0x10 + 0xc) = 3;
    param_1[lVar3 * 2 + 2] = uVar2 & 0xffffffff;
    if ((*(byte *)(param_1 + lVar3 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar3 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 004bfa7c; end: 004bfa9f;  */

undefined1 FUN_004bfa7c(int param_1)

{
  if (param_1 - 5U < 10) {
    return (&UNK_008078c0)[param_1 - 5U];
  }
  return 0x14;
}



/* Entry: 004bfaa0; end: 004bfbc7;  */

void FUN_004bfaa0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = param_1;
  func_0x004bf984(param_1,6);
  *puVar1 = &PTR_DAT_009ed700;
  uVar2 = (ulong)*(byte *)(param_2 + 8);
  FUN_004bfa7c();
  lVar3 = param_1[8];
  if (lVar3 != 3) {
    param_1[8] = lVar3 + 1;
    *(undefined1 *)((long)param_1 + lVar3 * 0x10 + 0xc) = 3;
    param_1[lVar3 * 2 + 2] = uVar2 & 0xffffffff;
    if ((*(byte *)(param_1 + lVar3 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar3 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 004bfbc8; end: 004bfbcb;  */

undefined8 * FUN_004bfbc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed788;
  func_0x004bfc10(param_1 + 1);
  return param_1;
}



/* Entry: 004bfbcc; end: 004bfbdf;  */

void FUN_004bfbcc(void)

{
  FUN_004bfbe0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004bfbe0; end: 004bfc3b;  */

undefined8 * FUN_004bfbe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed788;
  func_0x004bfc10(param_1 + 1);
  return param_1;
}



/* Entry: 004bfc3c; end: 004bfc7f;  */

void FUN_004bfc3c(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x004bfc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x10))();
  return;
}



/* Entry: 004bfc80; end: 004c0dbb;  */

void FUN_004bfc80(long *param_1,char **param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  dword *pdVar8;
  dword *pdVar9;
  qword *pqVar10;
  dword *pdVar11;
  section *psVar12;
  undefined4 uVar13;
  char *extraout_x8;
  dword *extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w11;
  int extraout_w11_00;
  char *pcVar14;
  char **ppcVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  char *pcVar19;
  qword **ppqVar20;
  qword *pqVar21;
  uint uVar22;
  char **ppcVar23;
  undefined1 uStack_328;
  dword dStack_324;
  undefined1 uStack_320;
  char *pcStack_308;
  dword *pdStack_300;
  char **ppcStack_2f8;
  qword **ppqStack_2f0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  dword *pdStack_2c0;
  dword *pdStack_2b8;
  char *pcStack_2b0;
  section *psStack_2a8;
  qword *pqStack_2a0;
  char **ppcStack_298;
  char cStack_289;
  char cStack_288;
  char **ppcStack_280;
  qword **ppqStack_278;
  qword **ppqStack_270;
  char **ppcStack_268;
  qword *pqStack_260;
  qword *pqStack_258;
  char *pcStack_250;
  dword *pdStack_248;
  char *pcStack_240;
  dword *pdStack_238;
  char *pcStack_230;
  dword *pdStack_228;
  char **ppcStack_218;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  long lStack_1f8;
  char *pcStack_1f0;
  dword *pdStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined4 uStack_1d0;
  char **ppcStack_1c0;
  char **ppcStack_1b8;
  undefined4 uStack_1a4;
  char *pcStack_1a0;
  section *psStack_198;
  char cStack_188;
  uint auStack_180 [62];
  qword **ppqStack_88;
  dword *pdStack_80;
  qword **ppqStack_78;
  char **ppcStack_70;
  
  if (*(char *)(param_2 + 0x13) == '\x01') {
    ppcVar15 = &pcStack_1f0;
    FUN_004c3fcc(ppcVar15,param_2 + 0xe);
    ppcStack_1b8 = ppcVar15;
  }
  else {
    pdStack_1e8 = (dword *)0x0;
    pcStack_1f0 = (char *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x3f800000;
    ppcStack_1b8 = param_2;
  }
  func_0x004c6020();
  ppcStack_1b8[1] = (char *)0x0;
  ppcStack_1b8[2] = (char *)0x0;
  *ppcStack_1b8 = (char *)&PTR_FUN_009edae0;
  FUN_004c3fcc(&pcStack_1a0,&pcStack_1f0);
  ppcVar15 = ppcStack_1b8 + 3;
  func_0x004c4528(ppcVar15,&pcStack_1a0);
  func_0x004c3f30(&pcStack_1a0);
  ppcStack_1c0 = ppcVar15;
  func_0x004c3f30(&pcStack_1f0);
  pcStack_1a0 = (char *)CONCAT44(pcStack_1a0._4_4_,100);
  if ((ppcStack_1c0 != (char **)0x0) &&
     (ppcVar23 = ppcStack_1c0, func_0x004c6308(), ppcVar23 != (char **)0x0)) {
    ppcVar23 = ppcStack_1c0;
    func_0x004c6308();
    ppcVar23 = ppcVar23 + 3;
    FUN_004636dc(ppcVar23,"USER_INITIATED");
    if (((ulong)ppcVar23 & 1) != 0) {
      uVar13 = 1;
      goto LAB_004bfdb0;
    }
  }
  pcStack_1a0 = (char *)CONCAT44(pcStack_1a0._4_4_,100);
  if ((ppcStack_1c0 == (char **)0x0) ||
     (ppcVar23 = ppcStack_1c0, func_0x004c6308(), ppcVar23 == (char **)0x0)) {
    uVar13 = 4;
  }
  else {
    ppcVar23 = ppcStack_1c0;
    func_0x004c6308();
    ppcVar23 = ppcVar23 + 3;
    FUN_004636dc(ppcVar23,"FAVORED_BACKGROUND");
    uVar13 = 2;
    if (((ulong)ppcVar23 & 1) == 0) {
      uVar13 = 4;
    }
  }
LAB_004bfdb0:
  FUN_00425cb4(&pcStack_1a0,"messaging_notification_extension_grpc");
  FUN_0064c66c(&uStack_200,&pcStack_1a0,8,uVar13,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_1a0);
  func_0x00465960(auStack_210,param_3);
  FUN_00465980(&ppcStack_218);
  FUN_00465298(&ppqStack_78);
  ppqStack_78[0x12] = (qword *)&UNK_00002710;
  ppqStack_78[0xd] = (qword *)&UNK_00004e20;
  *(undefined1 *)(ppqStack_78 + 0xe) = 1;
  FUN_0046083c(ppqStack_78 + 1,param_2 + 10);
  *(undefined4 *)((long)ppqStack_78 + 0x8c) = 3;
  *(undefined1 *)(ppqStack_78 + 0x11) = 1;
  *(undefined1 *)(ppqStack_78 + 0x16) = 1;
  iVar6 = (int)&ppcStack_1c0;
  FUN_004c7320();
  if (iVar6 != 0) {
    *(undefined4 *)((long)ppqStack_78 + 0x8c) = 2;
  }
  if ((ppcStack_1c0 != (char **)0x0) &&
     (ppcVar23 = ppcStack_1c0, FUN_004c70d8(ppcStack_1c0,0x2f), (int)ppcVar23 != 0)) {
    *(undefined4 *)((long)ppqStack_78 + 0x8c) = 1;
  }
  pcStack_1f0 = (char *)((ulong)pcStack_1f0 & 0xffffffffffffff00);
  uStack_1d8 = uStack_1d8 & 0xffffffffffffff00;
  FUN_004c35cc(&pcStack_1a0,&ppcStack_1c0,0x35,&pcStack_1f0);
  func_0x004c61f0();
  if (cStack_188 == '\x01') {
    FUN_0046083c(ppqStack_78 + 5,&pcStack_1a0);
  }
  ppqVar20 = ppqStack_78;
  FUN_004c71b4(&pqStack_2a0,&ppcStack_1c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppqVar20 + 0x13,&pqStack_2a0);
  func_0x004c62b4();
  iVar6 = (int)&ppcStack_1c0;
  func_0x004c7334();
  if (iVar6 != 0) {
    ppcVar23 = ppcStack_1c0;
    FUN_004c352c(ppcStack_1c0,&UNK_00807c24);
    ppcVar23 = ppcVar23 + 3;
    __ZNSt3__15stollERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(ppcVar23,0,10);
    ppqStack_78[0xd] = (qword *)ppcVar23;
    *(undefined1 *)(ppqStack_78 + 0xe) = 1;
  }
  uVar7 = 0;
  func_0x004c7348();
  if ((uVar7 & 1) != 0) {
    ppcVar23 = ppcStack_1c0;
    func_0x004c3530(ppcStack_1c0,&UNK_00807c28);
    ppcVar23 = ppcVar23 + 3;
    __ZNSt3__16stoullERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
              (ppcVar23,0,0x10);
    ppqStack_78[0xf] = (qword *)ppcVar23;
    *(undefined1 *)(ppqStack_78 + 0x10) = 1;
  }
  ppcStack_298 = ppcStack_70;
  pqStack_2a0 = (qword *)ppqStack_78;
  if (ppcStack_70 != (char **)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10 != 0);
  }
  FUN_005b8a00();
  FUN_0046fae0(&pqStack_2a0);
  if (ppcStack_1c0 != (char **)0x0) {
    ppcVar23 = ppcStack_1c0;
    func_0x004c63e8();
    if (ppcVar23 != (char **)0x0) {
      ppcVar23 = ppcStack_1c0;
      func_0x004c63e8(ppcStack_1c0);
      func_0x004c640c(ppcVar23);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&pqStack_2a0,PTR_DAT_00b1ef90);
      FUN_005b8994(ppcStack_218,&pqStack_2a0);
      func_0x004c62b4();
    }
    ppcVar23 = ppcStack_1c0;
    func_0x004c63dc();
    if (ppcVar23 == (char **)0x0) {
      _unsetenv("http_proxy");
    }
    else {
      ppcVar23 = ppcStack_1c0;
      func_0x004c63dc(ppcStack_1c0);
      func_0x004c640c(ppcVar23);
      if (-1 < cStack_289) {
        pqStack_2a0 = (qword *)&pqStack_2a0;
      }
      _setenv("http_proxy",pqStack_2a0,1);
      func_0x004c62b4();
    }
  }
  FUN_0040b16c(ppcStack_218 + 8,0x1000000);
  FUN_00457530(&pcStack_1a0);
  pdVar8 = (dword *)&ppqStack_78;
  FUN_00465f1c();
  func_0x004c60f8();
  *(undefined8 *)(pdVar8 + 2) = 0;
  *(undefined8 *)(pdVar8 + 4) = 0;
  *(undefined ***)pdVar8 = &PTR_FUN_009edb30;
  pcVar14 = (char *)(pdVar8 + 6);
  *(undefined ***)pcVar14 = &PTR_DAT_009edb80;
  lVar17 = *param_5;
  pcStack_230 = pcVar14;
  pdStack_228 = pdVar8;
  if (lVar17 != 0) {
    ppcVar15 = (char **)param_5[1];
    pdVar9 = pdVar8;
    func_0x004c6034();
    *(undefined8 *)(pdVar9 + 2) = 0;
    *(undefined8 *)(pdVar9 + 4) = 0;
    *(undefined ***)pdVar9 = &PTR_DAT_009edbd8;
    pcVar19 = (char *)(pdVar9 + 6);
    *(undefined ***)pcVar19 = &PTR_FUN_009ed620;
    *(long *)(pdVar9 + 8) = lVar17;
    *(char ***)(pdVar9 + 10) = ppcVar15;
    psStack_198 = (section *)pdVar8;
    if (ppcVar15 != (char **)0x0) {
      do {
        func_0x004c60e0();
        pcVar19 = extraout_x8;
        psStack_198 = (section *)pdStack_228;
      } while (extraout_w11 != 0);
    }
    pdVar8 = (dword *)&pcStack_1a0;
    pcStack_230 = pcVar19;
    pdStack_228 = pdVar9;
    pcStack_1a0 = pcVar14;
    func_0x004bfc10();
  }
  func_0x004c60f8();
  *(undefined8 *)(pdVar8 + 2) = 0;
  *(undefined8 *)(pdVar8 + 4) = 0;
  *(undefined ***)pdVar8 = &PTR_DAT_009edc28;
  ppqVar20 = (qword **)(pdVar8 + 6);
  *ppqVar20 = (qword *)&PTR_DAT_009edc78;
  pdVar9 = pdVar8;
  ppqStack_88 = ppqVar20;
  pdStack_80 = pdVar8;
  func_0x004c60f8();
  *(undefined8 *)(pdVar9 + 2) = 0;
  *(undefined8 *)(pdVar9 + 4) = 0;
  *(undefined ***)pdVar9 = &PTR_FUN_009edcc8;
  pcVar19 = (char *)(pdVar9 + 6);
  *(undefined ***)pcVar19 = &PTR_DAT_009edd18;
  pqVar10 = &segment_command_00000020.vmaddr;
  pcStack_250 = pcVar19;
  pdStack_248 = pdVar9;
  __Znwm();
  func_0x004c6378();
  pqVar21 = pqVar10 + 3;
  *pqVar21 = (qword)&PTR_DAT_009edde0;
  *pqVar10 = (qword)&PTR_FUN_009edd90;
  pqVar10[5] = 0;
  pqVar10[6] = 0;
  pqVar10[4] = 0;
  pdVar11 = &section_00000068.reserved2;
  pqStack_260 = pqVar21;
  pqStack_258 = pqVar10;
  __Znwm();
  ppqStack_270 = (qword **)ppcStack_218;
  plVar16 = (long *)(pdVar11 + 2);
  *plVar16 = 0;
  *(undefined8 *)(pdVar11 + 4) = 0;
  *(undefined ***)pdVar11 = &PTR_FUN_009ede48;
  pcVar14 = (char *)(pdVar11 + 6);
  ppcStack_218 = (char **)0x0;
  ppqStack_88 = (qword **)0x0;
  pdStack_80 = (dword *)0x0;
  pcStack_250 = (char *)0x0;
  pdStack_248 = (dword *)0x0;
  pqStack_260 = (qword *)0x0;
  pqStack_258 = (qword *)0x0;
  ppqStack_78 = (qword **)0x0;
  ppcStack_70 = (char **)0x0;
  pqStack_2a0 = pqVar21;
  ppcStack_298 = ppcVar15;
  pcStack_1f0 = pcVar19;
  pdStack_1e8 = pdVar9;
  pcStack_1a0 = (char *)ppqVar20;
  psStack_198 = (section *)pdVar8;
  FUN_004c7ec8(pcVar14,&ppqStack_270,&uStack_200,&ppcStack_1c0,auStack_210,&pcStack_1a0,&pcStack_1f0
               ,&pqStack_2a0,&ppqStack_78);
  FUN_004c47b8(&ppqStack_78);
  func_0x004c47dc(&pqStack_2a0);
  func_0x004c4800(&pcStack_1f0);
  func_0x004c4824(&pcStack_1a0);
  func_0x00465c64(&ppqStack_270);
  pcStack_240 = pcVar14;
  pdStack_238 = pdVar11;
  if ((*(long *)(pdVar11 + 10) == 0) || (*(long *)(*(long *)(pdVar11 + 10) + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      pcStack_1f0 = pcVar14;
      pdStack_1e8 = pdVar11;
    } while (cVar2 != '\0');
    do {
      func_0x004c60e0();
    } while (extraout_w11_00 != 0);
    pcStack_1a0 = *(char **)(pdVar11 + 8);
    *(char **)(pdVar11 + 8) = pcVar14;
    *(dword **)(pdVar11 + 10) = pdVar11;
    psStack_198 = (section *)extraout_x8_00;
    FUN_004c4854(&pcStack_1a0);
    func_0x004c4878(&pcStack_1f0);
  }
  FUN_004c4774(&pqStack_260);
  FUN_004c46f0(&pcStack_250);
  FUN_004c4670(&ppqStack_88);
  pcStack_250 = (char *)0x0;
  pdStack_248 = (dword *)0x0;
  pqStack_260 = (qword *)0x0;
  pqStack_258 = (qword *)0x0;
  ppqStack_270 = (qword **)0x0;
  ppcStack_268 = (char **)0x0;
  ppcStack_280 = (char **)0x0;
  ppqStack_278 = (qword **)0x0;
  pcStack_1a0 = (char *)((ulong)pcStack_1a0 & 0xffffffffffffff00);
  cStack_188 = 0;
  FUN_004c35cc(&pqStack_2a0,&ppcStack_1c0,0x70,&pcStack_1a0);
  ppcVar15 = &pcStack_1a0;
  FUN_00457530();
  pdVar8 = pdStack_228;
  pcVar3 = pcStack_230;
  ppcStack_2f8 = (char **)0x0;
  ppqStack_2f0 = (qword **)0x0;
  ppcVar23 = (char **)0x0;
  pcStack_308 = (char *)0x0;
  pdStack_300 = (dword *)0x0;
  puVar18 = (undefined8 *)0x0;
  pcVar19 = (char *)0x0;
  pcStack_2b0 = (char *)0x0;
  psStack_2a8 = (section *)0x0;
  if (cStack_288 == '\x01') {
    func_0x004c6034();
    ppcVar15[1] = (char *)0x0;
    ppcVar15[2] = (char *)0x0;
    *ppcVar15 = (char *)&PTR_FUN_009ede98;
    ppqVar20 = (qword **)(ppcVar15 + 3);
    *ppqVar20 = (qword *)&PTR_FUN_009ed788;
    ppcVar15[5] = (char *)pdVar8;
    ppcVar15[4] = pcVar3;
    if (pdVar8 != (dword *)0x0) {
      do {
        func_0x004c5ef4();
      } while (extraout_w10_00 != 0);
    }
    pdVar8 = &section_00000068.offset;
    ppqStack_88 = ppqVar20;
    pdStack_80 = (dword *)ppcVar15;
    __Znwm();
    *(undefined8 *)(pdVar8 + 2) = 0;
    *(undefined8 *)(pdVar8 + 4) = 0;
    *(undefined ***)pdVar8 = &PTR_FUN_009edee8;
    pcStack_1a0 = (char *)ppqVar20;
    psStack_198 = (section *)ppcVar15;
    do {
      func_0x004c6108();
    } while (extraout_w9 != 0);
    do {
      func_0x004c6108();
    } while (extraout_w9_00 != 0);
    *(undefined ***)(pdVar8 + 6) = &PTR_DAT_009edf38;
    *(qword ***)(pdVar8 + 8) = ppqVar20;
    *(char ***)(pdVar8 + 10) = ppcVar15;
    *(undefined8 *)(pdVar8 + 0xe) = 0;
    *(undefined8 *)(pdVar8 + 0xc) = 0;
    *(undefined8 *)(pdVar8 + 0x12) = 0;
    *(undefined8 *)(pdVar8 + 0x10) = 0;
    pdVar8[0x14] = 0x3f800000;
    *(undefined8 *)(pdVar8 + 0x16) = 0x32aaaba7;
    *(undefined8 *)(pdVar8 + 0x1a) = 0;
    *(undefined8 *)(pdVar8 + 0x18) = 0;
    *(undefined8 *)(pdVar8 + 0x1e) = 0;
    *(undefined8 *)(pdVar8 + 0x1c) = 0;
    *(undefined8 *)(pdVar8 + 0x22) = 0;
    *(undefined8 *)(pdVar8 + 0x20) = 0;
    *(undefined8 *)(pdVar8 + 0x24) = 0;
    FUN_004c5128(&pcStack_1a0);
    psVar12 = &section_000000b8;
    pdStack_2c0 = pdVar8 + 6;
    pdStack_2b8 = pdVar8;
    __Znwm();
    psVar12->sectname[8] = '\0';
    psVar12->sectname[9] = '\0';
    psVar12->sectname[10] = '\0';
    psVar12->sectname[0xb] = '\0';
    psVar12->sectname[0xc] = '\0';
    psVar12->sectname[0xd] = '\0';
    psVar12->sectname[0xe] = '\0';
    psVar12->sectname[0xf] = '\0';
    psVar12->segname[0] = '\0';
    psVar12->segname[1] = '\0';
    psVar12->segname[2] = '\0';
    psVar12->segname[3] = '\0';
    psVar12->segname[4] = '\0';
    psVar12->segname[5] = '\0';
    psVar12->segname[6] = '\0';
    psVar12->segname[7] = '\0';
    *(undefined ***)psVar12->sectname = &PTR_FUN_009edf90;
    pcStack_308 = psVar12->segname + 8;
    ppqStack_78 = ppqVar20;
    ppcStack_70 = ppcVar15;
    do {
      func_0x004c6108();
    } while (extraout_w9_01 != 0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (pcStack_308,&pqStack_2a0);
    *(undefined2 *)&psVar12->reloff = 0;
    psVar12->reserved1 = 0x1010001;
    *(undefined2 *)&psVar12->reserved2 = 0x100;
    *(undefined1 *)((long)&psVar12->reserved2 + 2) = 0;
    psVar12->reserved3 = 0;
    psVar12[1].sectname[0] = '\0';
    psVar12[1].sectname[1] = '\0';
    psVar12[1].sectname[2] = '\0';
    psVar12[1].sectname[3] = '\0';
    psVar12[1].sectname[4] = '\x01';
    psVar12[1].sectname[5] = '\x01';
    psVar12[1].sectname[6] = '\x01';
    psVar12->offset = 0x10001;
    psVar12->align = 5;
    psVar12->nrelocs = 2;
    psVar12->flags = 100;
    FUN_004c735c(&pcStack_1f0,&ppcStack_1c0,0x71);
    uVar4 = (char)uStack_1d8 == '\x01';
    if ((bool)uVar4) {
      func_0x004c6318();
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(&pcStack_1a0,&uStack_1a4);
      func_0x004c6290();
      if ((bool)uVar4) {
        FUN_004c372c(&pcStack_1a0);
        uVar22 = *(uint *)((long)auStack_180 + (long)*(qword **)((long)pcStack_1a0 + -0x18)) >> 1 &
                 1;
        uVar13 = uStack_1a4;
      }
      else {
        uVar22 = 0;
        uVar13 = 0;
      }
      func_0x004c6310();
      bVar5 = uVar22 != 0;
      if (!bVar5) {
        uVar13 = 0;
      }
    }
    else {
      bVar5 = false;
      uVar13 = 0;
    }
    func_0x004c61f0();
    uVar1 = 0x19;
    if (bVar5) {
      uVar1 = uVar13;
    }
    *(qword ***)(psVar12[2].sectname + 8) = ppqVar20;
    uVar13 = *(undefined4 *)(psVar12[1].sectname + 4);
    *(undefined4 *)psVar12[1].sectname = uVar1;
    *(short *)(psVar12[1].sectname + 4) = (short)uVar13;
    psVar12[1].sectname[6] = (char)((uint)uVar13 >> 0x10);
    psVar12[1].sectname[8] = -0x59;
    psVar12[1].sectname[9] = -0x55;
    psVar12[1].sectname[10] = -0x56;
    psVar12[1].sectname[0xb] = '2';
    psVar12[1].sectname[0xc] = '\0';
    psVar12[1].sectname[0xd] = '\0';
    psVar12[1].sectname[0xe] = '\0';
    psVar12[1].sectname[0xf] = '\0';
    psVar12[2].sectname[0] = '\0';
    psVar12[2].sectname[1] = '\0';
    psVar12[2].sectname[2] = '\0';
    psVar12[2].sectname[3] = '\0';
    psVar12[2].sectname[4] = '\0';
    psVar12[2].sectname[5] = '\0';
    psVar12[2].sectname[6] = '\0';
    psVar12[2].sectname[7] = '\0';
    psVar12[1].segname[8] = '\0';
    psVar12[1].segname[9] = '\0';
    psVar12[1].segname[10] = '\0';
    psVar12[1].segname[0xb] = '\0';
    psVar12[1].segname[0xc] = '\0';
    psVar12[1].segname[0xd] = '\0';
    psVar12[1].segname[0xe] = '\0';
    psVar12[1].segname[0xf] = '\0';
    psVar12[1].segname[0] = '\0';
    psVar12[1].segname[1] = '\0';
    psVar12[1].segname[2] = '\0';
    psVar12[1].segname[3] = '\0';
    psVar12[1].segname[4] = '\0';
    psVar12[1].segname[5] = '\0';
    psVar12[1].segname[6] = '\0';
    psVar12[1].segname[7] = '\0';
    psVar12[1].size = 0;
    psVar12[1].addr = 0;
    psVar12[1].reloff = 0;
    psVar12[1].nrelocs = 0;
    psVar12[1].offset = 0;
    psVar12[1].align = 0;
    psVar12[1].reserved2 = 0;
    psVar12[1].reserved3 = 0;
    psVar12[1].flags = 0;
    psVar12[1].reserved1 = 0;
    *(char ***)psVar12[2].segname = ppcVar15;
    do {
      func_0x004c6108();
    } while (extraout_w9_02 != 0);
    FUN_004bceb0(pcStack_308);
    FUN_004c5128(&ppqStack_78);
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    psStack_198 = psStack_2a8;
    pcStack_1a0 = pcStack_2b0;
    pcStack_2b0 = pcStack_308;
    psStack_2a8 = psVar12;
    func_0x004bd698(&pcStack_1a0);
    puVar18 = &uStack_2d0;
    func_0x004bd698();
    func_0x004c6020();
    puVar18[1] = 0;
    puVar18[2] = 0;
    func_0x004c6164(&PTR_DAT_009edfe0);
    do {
      func_0x004c5fc0();
    } while (extraout_w9_03 != 0);
    pcVar19 = (char *)(puVar18 + 3);
    func_0x004c649c();
    FUN_004bc604(pcVar19);
    func_0x004c6328();
    pcStack_1f0 = (char *)0x0;
    pdStack_1e8 = (dword *)0x0;
    pcStack_1a0 = (char *)0x0;
    psStack_198 = (section *)0x0;
    pcStack_250 = pcVar19;
    pdStack_248 = (dword *)puVar18;
    func_0x004c489c(&pcStack_1a0);
    func_0x004c489c(&pcStack_1f0);
    func_0x004c6020();
    func_0x004c6378();
    func_0x004c6164(&PTR_DAT_009ee030);
    do {
      func_0x004c5fc0();
    } while (extraout_w9_04 != 0);
    pdStack_300 = &psVar12->offset;
    func_0x004c649c();
    func_0x004beebc(pdStack_300);
    func_0x004c6328();
    pcStack_1a0 = (char *)0x0;
    psStack_198 = (section *)0x0;
    ppcVar23 = &pcStack_1a0;
    pqStack_260 = (qword *)pdStack_300;
    pqStack_258 = (qword *)pcStack_308;
    func_0x004c48c0();
    func_0x004c6020();
    ppcVar23[1] = (char *)0x0;
    ppcVar23[2] = (char *)0x0;
    func_0x004c6164(&PTR_DAT_009ee080);
    do {
      func_0x004c5fc0();
    } while (extraout_w9_05 != 0);
    ppqStack_2f0 = (qword **)(ppcVar23 + 3);
    func_0x004c649c();
    func_0x004be094(ppqStack_2f0);
    func_0x004c6328();
    pcStack_1f0 = (char *)0x0;
    pdStack_1e8 = (dword *)0x0;
    pcStack_1a0 = (char *)0x0;
    psStack_198 = (section *)0x0;
    ppqStack_270 = ppqStack_2f0;
    ppcStack_268 = ppcVar23;
    func_0x004c48e4(&pcStack_1a0);
    func_0x004c48e4(&pcStack_1f0);
    func_0x004c6020();
    func_0x004c6378();
    func_0x004c6164(&PTR_DAT_009ee0d0);
    do {
      func_0x004c5fc0();
    } while (extraout_w9_06 != 0);
    ppcStack_2f8 = ppcVar23 + 6;
    func_0x004c649c();
    func_0x004bd8b8(ppcStack_2f8);
    func_0x004c6328();
    pcStack_1f0 = (char *)0x0;
    pdStack_1e8 = (dword *)0x0;
    pcStack_1a0 = (char *)0x0;
    psStack_198 = (section *)0x0;
    ppcStack_280 = ppcStack_2f8;
    ppqStack_278 = ppqStack_2f0;
    func_0x004c4908(&pcStack_1a0);
    func_0x004c4908(&pcStack_1f0);
    FUN_004c5158(&pdStack_2c0);
    FUN_004c4958(&ppqStack_88);
  }
  if (ppcStack_1c0 == (char **)0x0) {
    uStack_320 = 0;
  }
  else {
    ppcVar15 = ppcStack_1c0;
    FUN_004c70d8(ppcStack_1c0,0x61);
    uStack_320 = SUB81(ppcVar15,0);
  }
  FUN_004c735c(&pcStack_1f0,&ppcStack_1c0,0x62);
  uVar4 = (char)uStack_1d8 == '\x01';
  if ((bool)uVar4) {
    func_0x004c6318();
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(&pcStack_1a0,&ppqStack_78);
    func_0x004c6290();
    if ((bool)uVar4) {
      FUN_004c372c(&pcStack_1a0);
      dStack_324 = (dword)ppqStack_78;
      if ((*(byte *)((long)auStack_180 + *(long *)(pcStack_1a0 + -0x18)) & 2) == 0) {
        dStack_324 = 0xffffffff;
      }
    }
    else {
      dStack_324 = 0xffffffff;
    }
    func_0x004c6310();
  }
  else {
    dStack_324 = 0xffffffff;
  }
  func_0x004c61f0();
  if (ppcStack_1c0 == (char **)0x0) {
    uStack_328 = 0;
  }
  else {
    ppcVar15 = ppcStack_1c0;
    FUN_004c70d8(ppcStack_1c0,0xb0);
    uStack_328 = SUB81(ppcVar15,0);
  }
  pdVar8 = &section_00000158.offset;
  __Znwm();
  *(undefined8 *)(pdVar8 + 2) = 0;
  *(undefined8 *)(pdVar8 + 4) = 0;
  *(undefined ***)pdVar8 = &PTR_DAT_009ee120;
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = *plVar16 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pcStack_1f0 = pcVar19;
  pdStack_1e8 = (dword *)puVar18;
  pcStack_1a0 = pcVar14;
  psStack_198 = (section *)pdVar11;
  if (puVar18 != (undefined8 *)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_01 != 0);
  }
  ppqStack_78 = ppqStack_2f0;
  ppcStack_70 = ppcVar23;
  if (ppcVar23 != (char **)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_02 != 0);
  }
  ppqStack_88 = (qword **)ppcStack_2f8;
  pdStack_80 = (dword *)ppqStack_2f0;
  if (ppqStack_2f0 != (qword **)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_03 != 0);
  }
  *(undefined ***)(pdVar8 + 6) = &PTR_FUN_009ed7e8;
  FUN_004bbc8c(pdVar8 + 8,param_2);
  *(undefined1 *)(pdVar8 + 0xe) = 0;
  *(undefined1 *)(pdVar8 + 0x1a) = 0;
  if (*(char *)(param_2 + 9) == '\x01') {
    FUN_004bbc8c(pdVar8 + 0xe,param_2 + 3);
    FUN_004bbc8c(pdVar8 + 0x14,param_2 + 6);
    *(undefined1 *)(pdVar8 + 0x1a) = 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (pdVar8 + 0x1c,param_2 + 10);
  uVar4 = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(pdVar8 + 0x24) = 0;
  *(undefined1 *)(pdVar8 + 0x22) = uVar4;
  *(undefined1 *)(pdVar8 + 0x2e) = 0;
  if (*(char *)(param_2 + 0x13) == '\x01') {
    FUN_004c3fcc(pdVar8 + 0x24,param_2 + 0xe);
    *(undefined1 *)(pdVar8 + 0x2e) = 1;
  }
  *(char ***)(pdVar8 + 0x32) = ppcStack_1b8;
  *(char ***)(pdVar8 + 0x30) = ppcStack_1c0;
  if (ppcStack_1b8 != (char **)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_04 != 0);
  }
  *(long *)(pdVar8 + 0x36) = lStack_1f8;
  *(undefined8 *)(pdVar8 + 0x34) = uStack_200;
  if (lStack_1f8 != 0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_05 != 0);
  }
  FUN_0045dc34(pdVar8 + 0x38,param_4);
  *(char **)(pdVar8 + 0x3c) = pcVar14;
  *(dword **)(pdVar8 + 0x3e) = pdVar11;
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = *plVar16 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(char **)(pdVar8 + 0x40) = pcVar19;
  *(undefined8 **)(pdVar8 + 0x42) = puVar18;
  if (puVar18 != (undefined8 *)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_06 != 0);
  }
  *(dword **)(pdVar8 + 0x44) = pdStack_300;
  *(char **)(pdVar8 + 0x46) = pcStack_308;
  if (pcStack_308 != (char *)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_07 != 0);
  }
  *(qword ***)(pdVar8 + 0x48) = ppqStack_2f0;
  *(char ***)(pdVar8 + 0x4a) = ppcVar23;
  if (ppcVar23 != (char **)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_08 != 0);
  }
  *(char ***)(pdVar8 + 0x4c) = ppcStack_2f8;
  *(qword ***)(pdVar8 + 0x4e) = ppqStack_2f0;
  if (ppqStack_2f0 != (qword **)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_09 != 0);
  }
  *(dword **)(pdVar8 + 0x52) = pdStack_228;
  *(char **)(pdVar8 + 0x50) = pcStack_230;
  if (pdStack_228 != (dword *)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_10 != 0);
  }
  *(undefined ***)(pdVar8 + 0x54) = &PTR_FUN_009ee840;
  *(undefined1 *)(pdVar8 + 0x56) = uStack_320;
  pdVar8[0x57] = dStack_324;
  *(undefined1 *)(pdVar8 + 0x58) = uStack_328;
  *(undefined8 *)(pdVar8 + 0x5c) = 0;
  *(undefined8 *)(pdVar8 + 0x5a) = 0;
  *(undefined8 *)(pdVar8 + 0x60) = 0;
  *(undefined8 *)(pdVar8 + 0x5e) = 0;
  *(undefined8 *)(pdVar8 + 0x5c) = 1;
  __ZNSt3__17promiseIvEC1Ev(pdVar8 + 0x5e);
  __ZNSt3__17promiseIvE10get_futureEv(pdVar8 + 0x60,pdVar8 + 0x5e);
  func_0x004c5448(&ppqStack_88);
  func_0x004c5424(&ppqStack_78);
  func_0x004c5400(&pcStack_1f0);
  func_0x004c53dc(&pcStack_1a0);
  *param_1 = (long)(pdVar8 + 6);
  param_1[1] = (long)pdVar8;
  func_0x004bd698(&pcStack_2b0);
  FUN_00457530(&pqStack_2a0);
  func_0x004c4908(&ppcStack_280);
  func_0x004c48e4(&ppqStack_270);
  func_0x004c48c0(&pqStack_260);
  func_0x004c489c(&pcStack_250);
  func_0x004c4878(&pcStack_240);
  func_0x004bfc10(&pcStack_230);
  func_0x00465c64(&ppcStack_218);
  FUN_00466dc4(auStack_210);
  func_0x0045a078(&uStack_200);
  FUN_004c45a4(&ppcStack_1c0);
  return;
}



/* Entry: 004c0dbc; end: 004c1457;  */

/* WARNING: Removing unreachable block (ram,0x004c1008) */
/* WARNING: Removing unreachable block (ram,0x004c0f88) */
/* WARNING: Removing unreachable block (ram,0x004c1010) */
/* WARNING: Removing unreachable block (ram,0x004c1018) */
/* WARNING: Removing unreachable block (ram,0x004c10a8) */
/* WARNING: Removing unreachable block (ram,0x004c10ac) */
/* WARNING: Removing unreachable block (ram,0x004c10bc) */
/* WARNING: Removing unreachable block (ram,0x004c1024) */
/* WARNING: Removing unreachable block (ram,0x004c10f0) */
/* WARNING: Removing unreachable block (ram,0x004c1030) */
/* WARNING: Removing unreachable block (ram,0x004c0f90) */
/* WARNING: Removing unreachable block (ram,0x004c0f98) */

void FUN_004c0dbc(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  code *extraout_x8;
  long *plVar4;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  int iVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined4 auStack_d8 [2];
  ulong uStack_d0;
  ulong uStack_c8;
  int iStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_90;
  char cStack_70;
  
  func_0x004c5fd8();
  lVar6 = param_1[0x1a];
  uVar11 = param_1[0x1a];
  uVar9 = param_1[0x19];
  func_0x004c6020();
  func_0x004c6378();
  *param_1 = &PTR_DAT_009ee170;
  param_1 = param_1 + 3;
  if (lVar6 != 0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10 != 0);
  }
  *(undefined ***)(unaff_x21 + 0x18) = &PTR_FUN_009ed830;
  lVar6 = param_5[1];
  uVar10 = *param_5;
  *(undefined8 *)(unaff_x21 + 0x28) = param_5[1];
  *(undefined8 *)(unaff_x21 + 0x20) = uVar10;
  if (lVar6 != 0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_00 != 0);
  }
  *(undefined8 *)(unaff_x21 + 0x38) = uVar11;
  *(undefined8 *)(unaff_x21 + 0x30) = uVar9;
  uStack_b8 = 0;
  uStack_b0 = 0;
  func_0x0045cbec(&uStack_b8);
  uStack_100 = 0;
  uStack_f8 = 0;
  uVar2 = *(ulong *)(unaff_x19 + 0xe8);
  puStack_f0 = param_1;
  if (uVar2 == 0) {
    auStack_d8[0] = 0;
  }
  else {
    plVar4 = *(long **)(unaff_x19 + 0xf8);
    if (plVar4 == (long *)0x0) {
      uVar8 = 0;
      cVar7 = '\0';
    }
    else {
      (**(code **)(*plVar4 + 0x18))(&uStack_b8,plVar4);
      FUN_004c3b60(&uStack_b8);
      if (cStack_70 == '\0') {
        uStack_90 = 0;
      }
      if (cStack_70 == '\x01' && param_3 <= uStack_90) {
        func_0x004c5eb0(puStack_f0);
        auStack_d8[0] = 1;
        goto LAB_004c1214;
      }
      uVar2 = *(ulong *)(unaff_x19 + 0xe8);
      uVar8 = uStack_90;
      cVar7 = cStack_70;
    }
    func_0x004c6508();
    (*extraout_x8)();
    if ((unaff_x20 & 0xff) == 0) {
      uVar2 = uVar8;
      if (cVar7 == '\0') {
        uVar2 = 0;
      }
    }
    else if (param_3 <= uVar2) {
      func_0x004c5eb0(puStack_f0);
      auStack_d8[0] = 2;
      goto LAB_004c1214;
    }
    if (((int)*(uint *)(unaff_x19 + 0x144) < 0) ||
       (param_3 - uVar2 <= (ulong)*(uint *)(unaff_x19 + 0x144))) {
      (**(code **)(**(long **)(unaff_x19 + 0x108) + 0x28))();
      puVar3 = &stack0xfffffffffffffeb0;
      FUN_00549e84(puVar3,*param_4,*(int *)(param_4 + 1) - (int)*param_4);
      func_0x004c6534();
      FUN_004c2238();
      iVar5 = 1;
      lVar6 = 2;
      iStack_c0 = 2;
      auStack_d8[0] = (int)puVar3;
      uStack_d0 = uVar2;
      uStack_c8 = param_3;
      func_0x004c6348();
      goto LAB_004c1218;
    }
    (**(code **)(**(long **)(unaff_x19 + 0x108) + 0x10))();
    if (*(char *)(unaff_x19 + 0x148) == '\x01') {
      FUN_00549e84(&stack0xfffffffffffffeb0,*param_4,*(int *)(param_4 + 1) - (int)*param_4);
      func_0x004c6348();
    }
    func_0x004c5eb0(puStack_f0);
    auStack_d8[0] = 3;
    if (cVar7 != '\0') {
      auStack_d8[0] = 4;
    }
  }
LAB_004c1214:
  iVar5 = 0;
  lVar6 = 1;
  iStack_c0 = 1;
LAB_004c1218:
  func_0x004c5344(&puStack_f0);
  func_0x004c5320(&uStack_100);
  func_0x004bf984(&stack0xfffffffffffffeb0,0);
  uVar1 = 2;
  if (iVar5 != 1) {
    uVar1 = iVar5 == 2;
  }
  func_0x004bf9b8(&stack0xfffffffffffffeb0,0,uVar1);
  func_0x004c654c();
  func_0x004c6300();
  puStack_f0 = (undefined8 *)&stack0xfffffffffffffeb0;
  (*(code *)(&PTR_DAT_009eda48)[lVar6])(&puStack_f0,auStack_d8);
  uVar2 = uStack_d0;
  if ((iStack_c0 == 2) && (uStack_d0 != 0)) {
    plVar4 = *(long **)(unaff_x19 + 0x128);
    func_0x004bf984(&stack0xfffffffffffffeb0,4);
    (**(code **)(*plVar4 + 0x28))(plVar4,&stack0xfffffffffffffeb0,uStack_c8 - uVar2);
  }
  return;
}



/* Entry: 004c1458; end: 004c1e77;  */

void FUN_004c1458(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  dword **ppdVar8;
  undefined8 *puVar9;
  qword *pqVar10;
  dword *pdVar11;
  undefined **ppuVar12;
  undefined8 extraout_x8;
  undefined **extraout_x8_00;
  undefined **extraout_x8_01;
  undefined **extraout_x8_02;
  undefined **extraout_x8_03;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **extraout_x8_04;
  undefined **extraout_x8_05;
  undefined ***pppuVar15;
  undefined ***extraout_x8_06;
  undefined ***extraout_x8_07;
  int extraout_w9;
  int extraout_w9_00;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  dword *pdVar16;
  undefined **extraout_x9_01;
  undefined **ppuVar17;
  undefined ***extraout_x9_02;
  undefined ***pppuVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined **ppuVar19;
  dword *pdVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_280;
  undefined8 uStack_278;
  dword *pdStack_270;
  undefined8 *puStack_268;
  dword *pdStack_260;
  undefined **ppuStack_258;
  undefined1 auStack_248 [8];
  undefined ***pppuStack_240;
  uint uStack_238;
  undefined1 auStack_230 [48];
  undefined **appuStack_200 [3];
  long lStack_1e8;
  undefined ***pppuStack_1e0;
  undefined8 *puStack_1d0;
  dword *pdStack_1c0;
  undefined8 *puStack_1b8;
  dword *pdStack_1b0;
  undefined8 *puStack_1a8;
  undefined **ppuStack_1a0;
  dword **ppdStack_198;
  dword *pdStack_190;
  undefined8 *puStack_188;
  dword **ppdStack_180;
  undefined4 uStack_178;
  dword *pdStack_170;
  undefined ***pppuStack_168;
  dword *pdStack_160;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  undefined4 uStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  dword *pdStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  int iStack_118;
  undefined **appuStack_110 [6];
  undefined1 auStack_e0 [72];
  undefined4 uStack_98;
  int iStack_94;
  undefined8 uStack_70;
  
  func_0x004c5f20();
  lVar21 = param_1[0x1a];
  uVar24 = param_1[0x1a];
  uVar22 = param_1[0x19];
  puVar6 = param_1;
  uStack_70 = extraout_x8;
  func_0x004c6020();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_009ee1c0;
  pdVar16 = (dword *)(puVar6 + 3);
  if (lVar21 != 0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10 != 0);
  }
  puVar6[3] = &PTR_FUN_009ed860;
  lVar21 = param_4[1];
  uVar23 = *param_4;
  puVar6[5] = param_4[1];
  puVar6[4] = uVar23;
  if (lVar21 != 0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_00 != 0);
  }
  puVar6[7] = uVar24;
  puVar6[6] = uVar22;
  ppuStack_140 = (undefined **)0x0;
  ppuStack_138 = (undefined **)0x0;
  func_0x0045cbec(&ppuStack_140);
  uStack_280 = 0;
  uStack_278 = 0;
  pdStack_270 = pdVar16;
  puStack_268 = puVar6;
  pdStack_1b0 = pdVar16;
  puStack_1a8 = puVar6;
  do {
    func_0x004c5fc0();
    pdStack_1c0 = pdVar16;
    puStack_1b8 = puVar6;
  } while (extraout_w9 != 0);
  do {
    func_0x004c5fc0();
  } while (extraout_w9_00 != 0);
  FUN_004c2958(auStack_248);
  FUN_004c7618(&ppuStack_140,param_1 + 1);
  uStack_238 = uStack_238 | 1;
  if (lStack_1e8 == 0) {
    if (((ulong)pppuStack_240 & 1) != 0) {
      func_0x004c6044();
    }
    FUN_004c3b80();
  }
  FUN_004c2120();
  func_0x004c62ac();
  puVar6 = param_1 + 0x27;
  FUN_004c7024();
  puStack_1d0 = puVar6;
  func_0x004f77ec(&ppuStack_140,0);
  func_0x004c75a4(&pdStack_170,param_3);
  ppuVar12 = ppuStack_138;
  if (((ulong)ppuStack_138 & 1) != 0) {
    ppuVar12 = *(undefined ***)((ulong)ppuStack_138 & 0xfffffffffffffffe);
  }
  FUN_00532f00(auStack_e0,ppuVar12);
  FUN_004575b8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pdStack_170);
  uStack_98 = *(undefined4 *)(param_3 + 0x18);
  FUN_004c76d4();
  iStack_94 = 1;
  if (*(int *)(param_3 + 0x1c) - 1U < 3) {
    iStack_94 = *(int *)(param_3 + 0x1c) + 1;
  }
  if (*(char *)(param_3 + 0x50) == '\x01') {
    lVar1 = *(long *)(param_3 + 0x40);
    for (lVar21 = *(long *)(param_3 + 0x38); lVar21 != lVar1; lVar21 = lVar21 + 0x18) {
      FUN_004c78d0(&pdStack_170,lVar21);
      pppuVar15 = appuStack_110;
      func_0x0054d014(pppuVar15,0x4c3c38);
      if (pppuVar15 != (undefined ***)&pdStack_170) {
        ppuVar12 = pppuVar15[1];
        if (((ulong)ppuVar12 & 1) != 0) {
          func_0x004c6284();
          ppuVar12 = extraout_x8_00;
        }
        pppuVar15 = pppuStack_168;
        if (((ulong)pppuStack_168 & 1) != 0) {
          func_0x004c6278();
          ppuVar12 = extraout_x8_01;
          pppuVar15 = (undefined ***)extraout_x9;
        }
        if ((undefined ***)ppuVar12 == pppuVar15) {
          FUN_004f6598();
        }
        else {
          func_0x004f6564();
        }
      }
      FUN_004f63f0(&pdStack_170);
    }
  }
  uStack_238 = uStack_238 | 2;
  if (pppuStack_1e0 == (undefined ***)0x0) {
    pppuStack_1e0 = pppuStack_240;
    if (((ulong)pppuStack_240 & 1) != 0) {
      func_0x004c6044();
      pppuStack_1e0 = pppuStack_240;
    }
    func_0x004bb738();
  }
  if (pppuStack_1e0 != &ppuStack_140) {
    ppuVar12 = pppuStack_1e0[1];
    if (((ulong)ppuVar12 & 1) != 0) {
      func_0x004c6284();
      ppuVar12 = extraout_x8_02;
    }
    ppuVar13 = ppuStack_138;
    if (((ulong)ppuStack_138 & 1) != 0) {
      func_0x004c6278();
      ppuVar12 = extraout_x8_03;
      ppuVar13 = extraout_x9_00;
    }
    if (ppuVar12 == ppuVar13) {
      func_0x004f8880();
    }
    else {
      func_0x004f884c();
    }
  }
  FUN_004f7a60(&ppuStack_140);
  puVar2 = *(undefined8 **)(param_3 + 0x28);
  for (puVar6 = *(undefined8 **)(param_3 + 0x20); puVar6 != puVar2; puVar6 = puVar6 + 3) {
    ppuStack_140 = &PTR_DAT_009f8eb0;
    ppuStack_138 = (undefined **)0x0;
    uStack_128 = (undefined8 *)0x0;
    FUN_00549e84(&ppuStack_140,*puVar6,*(int *)(puVar6 + 1) - (int)*puVar6);
    pppuVar15 = appuStack_200;
    func_0x0054d014(pppuVar15,0x4c3c78);
    if (pppuVar15 != &ppuStack_140) {
      ppuVar13 = pppuVar15[1];
      ppuVar12 = ppuVar13;
      if (((ulong)ppuVar13 & 1) != 0) {
        ppuVar12 = *(undefined ***)((ulong)ppuVar13 & 0xfffffffffffffffe);
      }
      ppuVar19 = ppuStack_138;
      if (((ulong)ppuStack_138 & 1) != 0) {
        ppuVar19 = *(undefined ***)((ulong)ppuStack_138 & 0xfffffffffffffffe);
      }
      if (ppuVar12 == ppuVar19) {
        pppuVar15[1] = ppuStack_138;
        pdVar16 = (dword *)pppuVar15[2];
        pppuVar15[2] = (undefined **)pdStack_130;
        uVar3 = *(undefined4 *)((long)pppuVar15 + 0x1c);
        ppuStack_138 = ppuVar13;
        pdStack_130 = pdVar16;
        *(undefined4 *)((long)pppuVar15 + 0x1c) = uStack_128._4_4_;
        uStack_128 = (undefined8 *)CONCAT44(uVar3,(undefined4)uStack_128);
      }
      else {
        FUN_004ff7a0();
      }
    }
    FUN_004fec7c(&ppuStack_140);
  }
  lVar1 = param_2[1];
  for (lVar21 = *param_2; lVar21 != lVar1; lVar21 = lVar21 + 0x18) {
    ppuStack_140 = &PTR_FUN_009f5fe8;
    ppuStack_138 = (undefined **)0x0;
    iStack_118 = 0;
    pdStack_130 = (dword *)0x0;
    uStack_128 = (undefined8 *)0x0;
    FUN_004c7618(&pdStack_170,lVar21);
    if (iStack_118 != 1) {
      FUN_004f2054(&ppuStack_140);
      iStack_118 = 1;
      ppuVar12 = ppuStack_138;
      if (((ulong)ppuStack_138 & 1) != 0) {
        func_0x004c6044();
      }
      func_0x004c3cb0();
      ppuStack_120 = ppuVar12;
    }
    ppuVar12 = ppuStack_120;
    *(uint *)(ppuStack_120 + 2) = *(uint *)(ppuStack_120 + 2) | 1;
    if (ppuStack_120[3] == (undefined *)0x0) {
      puVar7 = ppuStack_120[1];
      if (((ulong)puVar7 & 1) != 0) {
        func_0x004c6044();
      }
      FUN_004c3b80();
      ppuVar12[3] = puVar7;
    }
    FUN_004c2120();
    FUN_004d9ba0(&pdStack_170);
    FUN_004c3cf8(auStack_230);
    FUN_004c2960();
    FUN_004f222c(&ppuStack_140);
  }
  ppuVar19 = (undefined **)param_2[4];
  ppuVar12 = (undefined **)param_2[3];
  ppuVar13 = ppuVar12;
  for (; puVar6 = puStack_1a8, pdVar16 = pdStack_1b0, uVar5 = ppuVar12 == ppuVar19, !(bool)uVar5;
      ppuVar12 = ppuVar12 + 0xb) {
    pdStack_170 = (dword *)&PTR_DAT_009f5f98;
    pppuStack_168 = (undefined ***)0x0;
    pppuStack_158 = (undefined ***)0x0;
    pppuStack_150 = (undefined ***)0x0;
    pdStack_160 = (dword *)0x0;
    uStack_148 = 0;
    FUN_004c7618(&ppuStack_140,ppuVar12);
    pdStack_160 = (dword *)((ulong)pdStack_160 | 1);
    if (pppuStack_158 == (undefined ***)0x0) {
      pppuVar15 = pppuStack_168;
      if (((ulong)pppuStack_168 & 1) != 0) {
        func_0x004c6044();
      }
      FUN_004c3b80();
      pppuStack_158 = pppuVar15;
    }
    FUN_004c2120();
    func_0x004c62ac();
    if (*(uint *)(ppuVar12 + 6) < 0xd) {
      uStack_148 = *(undefined4 *)(&UNK_00808b40 + (ulong)*(uint *)(ppuVar12 + 6) * 4);
    }
    else {
      uStack_148 = 0;
    }
    ppuStack_140 = &PTR_FUN_00a00110;
    ppuStack_138 = (undefined **)0x0;
    pdStack_130 = (dword *)&DAT_00b69408;
    uStack_128 = (undefined8 *)&DAT_00b69408;
    appuStack_110[0] = (undefined **)0x0;
    ppuStack_120 = (undefined **)((ulong)ppuStack_120 & 0xffffffff00000000);
    pppuVar15 = &ppuStack_140;
    FUN_00549e84(pppuVar15,ppuVar12[3],*(int *)(ppuVar12 + 4) - (int)ppuVar12[3]);
    if (((ulong)pppuVar15 & 1) == 0) {
      pdStack_190 = (dword *)((long)ppuVar12[4] - (long)ppuVar12[3]);
      ppdStack_198 = (dword **)FUN_004c597c;
      puStack_188 = (undefined8 *)0x0;
      ppuStack_1a0 = ppuVar13;
      func_0x00461914("Failed to parse data for story destination: {}, story data size: {}");
      FUN_00721c60(&pdStack_260);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pdStack_260);
    }
    else {
      pdStack_160 = (dword *)((ulong)pdStack_160 | 2);
      if (pppuStack_150 == (undefined ***)0x0) {
        pppuVar15 = pppuStack_168;
        if (((ulong)pppuStack_168 & 1) != 0) {
          func_0x004c6044();
        }
        FUN_004c3d04();
        pppuStack_150 = pppuVar15;
      }
      if (pppuStack_150 != &ppuStack_140) {
        ppuVar14 = pppuStack_150[1];
        if (((ulong)ppuVar14 & 1) != 0) {
          func_0x004c6284();
          ppuVar14 = extraout_x8_04;
        }
        ppuVar17 = ppuStack_138;
        if (((ulong)ppuStack_138 & 1) != 0) {
          func_0x004c6278();
          ppuVar14 = extraout_x8_05;
          ppuVar17 = extraout_x9_01;
        }
        if (ppuVar14 == ppuVar17) {
          FUN_0051ff84();
        }
        else {
          FUN_0051ff50();
        }
      }
      ppuStack_1a0 = &PTR_FUN_009f5fe8;
      ppdStack_198 = (dword **)0x0;
      uStack_178 = 0;
      pdStack_190 = (dword *)0x0;
      puStack_188 = (undefined8 *)0x0;
      FUN_004f2054(&ppuStack_1a0);
      uStack_178 = 2;
      ppdVar8 = ppdStack_198;
      if (((ulong)ppdStack_198 & 1) != 0) {
        func_0x004c6044();
      }
      func_0x004c3d58();
      ppdStack_180 = ppdVar8;
      if (ppdVar8 != &pdStack_170) {
        pppuVar15 = (undefined ***)ppdVar8[1];
        if (((ulong)pppuVar15 & 1) != 0) {
          func_0x004c6284();
          pppuVar15 = extraout_x8_06;
        }
        pppuVar18 = pppuStack_168;
        if (((ulong)pppuStack_168 & 1) != 0) {
          func_0x004c6278();
          pppuVar15 = extraout_x8_07;
          pppuVar18 = extraout_x9_02;
        }
        if (pppuVar15 == pppuVar18) {
          FUN_004f2e14();
        }
        else {
          FUN_004f2de0();
        }
      }
      FUN_004c3cf8(auStack_230);
      FUN_004c2960();
      FUN_004f222c(&ppuStack_1a0);
    }
    FUN_0051f6a4(&ppuStack_140);
    FUN_004f2bc4(&pdStack_170);
    ppuVar13 = ppuVar13 + 0xb;
  }
  puVar2 = param_1 + 0x2a;
  pdStack_170 = (dword *)0x4c5b2c;
  pppuStack_168 = (undefined ***)&PTR_DAT_009ee570;
  pdStack_160 = pdStack_1b0;
  pppuStack_158 = (undefined ***)puStack_1a8;
  if (puStack_1a8 != (undefined8 *)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_01 != 0);
  }
  puVar4 = puStack_1b8;
  pdVar11 = pdStack_1c0;
  ppuStack_1a0 = (undefined **)FUN_004c5b6c;
  ppdStack_198 = (dword **)&PTR_FUN_009ee588;
  pdStack_190 = pdStack_1c0;
  puStack_188 = puStack_1b8;
  if (puStack_1b8 != (undefined8 *)0x0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10_02 != 0);
  }
  puVar9 = puVar2;
  FUN_004bea14();
  if (((ulong)puVar9 & 1) == 0) {
    pdStack_260 = (dword *)0x0;
    ppuStack_258 = (undefined **)0x0;
    ppuVar13 = &PTR_FUN_009ee588;
  }
  else {
    pqVar10 = &section_00000068.addr;
    __Znwm();
    func_0x004c6378();
    *pqVar10 = (qword)&PTR_FUN_009ee428;
    pdVar20 = (dword *)(pqVar10 + 3);
    *(undefined ***)pdVar20 = &PTR_DAT_009ee520;
    pqVar10[4] = 0x4c5b2c;
    pqVar10[5] = (qword)&PTR_DAT_009ee570;
    pqVar10[6] = (qword)pdVar16;
    pqVar10[7] = (qword)puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        func_0x004c5ef4();
      } while (extraout_w10_03 != 0);
    }
    ppuStack_140 = (undefined **)FUN_004c5b6c;
    ppuStack_138 = &PTR_FUN_009ee588;
    pdStack_130 = pdVar11;
    uStack_128 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        func_0x004c5ef4();
      } while (extraout_w10_04 != 0);
    }
    ppuVar12[10] = FUN_004c5a70;
    ppuVar12[0xb] = (undefined *)&PTR_FUN_009ee558;
    func_0x004c6034();
    *pqVar10 = (qword)FUN_004c5b6c;
    pqVar10[1] = (qword)&PTR_FUN_009ee588;
    pqVar10[2] = (qword)pdVar11;
    pqVar10[3] = (qword)puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        func_0x004c5ef4();
      } while (extraout_w10_05 != 0);
    }
    ppuVar12[0xc] = (undefined *)pqVar10;
    func_0x004c53b8(&pdStack_130);
    ppuVar12[3] = (undefined *)&PTR_DAT_009ee478;
    ppuVar12[0x10] = (undefined *)puVar2;
    ppuVar13 = (undefined **)ppdStack_198;
    pdStack_260 = pdVar20;
    ppuStack_258 = ppuVar12;
  }
  ppuVar12 = ppuStack_258;
  pdVar16 = pdStack_260;
  func_0x004c62bc(ppuVar13);
  func_0x004c61b8();
  if (pdVar16 != (dword *)0x0) {
    pdStack_260 = (dword *)0x0;
    ppuStack_258 = (undefined **)0x0;
    ppuStack_140 = (undefined **)((ulong)ppuStack_140 & 0xffffffffffffff00);
    appuStack_110[0] = (undefined **)((ulong)appuStack_110[0] & 0xffffffffffffff00);
    pdStack_170 = pdVar16;
    pppuStack_168 = (undefined ***)ppuVar12;
    (**(code **)(*(long *)param_1[0x1b] + 0x20))
              ((long *)param_1[0x1b],auStack_248,&pdStack_170,&ppuStack_140);
    func_0x004c3bc4(&ppuStack_140);
    func_0x004c5bf8(&pdStack_170);
  }
  func_0x004c5bd4(&pdStack_260);
  FUN_004ecea8(auStack_248);
  func_0x004c53b8(&pdStack_1c0);
  func_0x004c53b8(&pdStack_1b0);
  func_0x004c53b8(&pdStack_270);
  func_0x004c5394(&uStack_280);
LAB_004c1c64:
  do {
    func_0x004c5e9c(uStack_70);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    while( true ) {
      func_0x004c5fd8();
      FUN_004f7a60(&ppuStack_140);
      FUN_004ecea8(auStack_248);
      func_0x004c53b8(&pdStack_1c0);
      func_0x004c53b8(&pdStack_1b0);
      func_0x004c53b8(&pdStack_270);
      func_0x004c5394(&uStack_280);
      uVar5 = (int)puVar2 == 2;
      if ((bool)uVar5) break;
      uVar5 = (int)puVar2 == 1;
      if ((bool)uVar5) {
        pdVar11 = pdVar16;
        ___cxa_begin_catch();
        func_0x004c5f78();
        ppuStack_140 = (undefined **)0x8e1d97;
        ppuStack_138 = (undefined **)0x0;
        uStack_128 = (undefined8 *)0x0;
        pdStack_130 = pdVar11;
        func_0x004c5fe4();
        func_0x004c62cc(auStack_248);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_248);
        ___cxa_end_catch();
        goto LAB_004c1c64;
      }
      func_0x004c5fd0();
      func_0x004c61e0();
    }
    ___cxa_begin_catch(pdVar16);
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 004c1e78; end: 004c2107;  */

undefined8 * FUN_004c1e78(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar3;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar1 = param_1;
    func_0x004c5f20();
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    *puVar1 = &PTR_FUN_009ed7e8;
    puVar1 = puVar1 + 0x2a;
    FUN_004beab8();
    unaff_x20 = param_1 + 0x17;
    plVar3 = (long *)*unaff_x20;
    __ZNSt3__17promiseIvEC1Ev((undefined1 *)((long)register0x00000008 + -0xf0));
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -0xc0),
               (undefined1 *)((long)register0x00000008 + -0xf0));
    uVar2 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x4c5d10;
    *(undefined ***)((long)register0x00000008 + -0xb0) = &PTR_FUN_009ee630;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 **)((long)register0x00000008 + -0xd8) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar2;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = param_1;
    func_0x004c63c0(*(undefined8 *)(*plVar3 + 0x10));
    func_0x004c5ee8(*(undefined8 *)((long)register0x00000008 + -0xb0));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xe0));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -0xc0));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0xc0));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xf0));
    __ZNSt3__117__assoc_sub_state4waitEv(*puVar1);
    unaff_x21 = param_1 + 0x1b;
    unaff_x23 = *unaff_x21;
    unaff_x24 = param_1[0x1c];
    unaff_x22 = (long *)param_1[0x17];
    *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = unaff_x24;
    *unaff_x21 = 0;
    param_1[0x1c] = 0;
    __ZNSt3__17promiseIvEC1Ev((undefined1 *)((long)register0x00000008 + -0xc0));
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -200),
               (undefined1 *)((long)register0x00000008 + -0xc0));
    uVar2 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xb8);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x4c5d8c;
    *(undefined ***)((long)register0x00000008 + -0xb0) = &PTR_FUN_009ee648;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar2;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    func_0x004c63c0(*(undefined8 *)(*unaff_x22 + 0x10));
    func_0x004c5f58(*(undefined8 *)((long)register0x00000008 + -0xb0));
    FUN_004c5d64((undefined1 *)((long)register0x00000008 + -0xe0));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -200));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -200));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xc0));
    func_0x004c63cc();
    FUN_0064c54c(*unaff_x20);
    __ZNSt3__16futureIvED1Ev(param_1 + 0x2d);
    __ZNSt3__17promiseIvED1Ev(param_1 + 0x2c);
    func_0x004bfc10(param_1 + 0x25);
    func_0x004c5448(param_1 + 0x23);
    func_0x004c5424(param_1 + 0x21);
    func_0x004c48c0(param_1 + 0x1f);
    func_0x004c5400(param_1 + 0x1d);
    func_0x004c53dc(unaff_x21);
    func_0x0045cbec(param_1 + 0x19);
    func_0x0045a078(unaff_x20);
    FUN_004c45a4(param_1 + 0x15);
    unaff_x19 = param_1 + 1;
    FUN_004c3b2c();
    func_0x004c5e9c(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (param_2 == 0) {
      param_1 = unaff_x19;
      func_0x004c5fd0();
    }
    else {
      __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -200));
      param_1 = (undefined8 *)((long)register0x00000008 + -0xc0);
      __ZNSt3__17promiseIvED1Ev();
      func_0x004c63cc();
    }
    unaff_x30 = FUN_004c2108;
    func_0x004c61e0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  return param_1;
}



/* Entry: 004c2108; end: 004c210b;  */

undefined8 * FUN_004c2108(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *plVar3;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar1 = param_1;
    func_0x004c5f20();
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    *puVar1 = &PTR_FUN_009ed7e8;
    puVar1 = puVar1 + 0x2a;
    FUN_004beab8();
    unaff_x20 = param_1 + 0x17;
    plVar3 = (long *)*unaff_x20;
    __ZNSt3__17promiseIvEC1Ev((undefined1 *)((long)register0x00000008 + -0xf0));
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -0xc0),
               (undefined1 *)((long)register0x00000008 + -0xf0));
    uVar2 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x4c5d10;
    *(undefined ***)((long)register0x00000008 + -0xb0) = &PTR_FUN_009ee630;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 **)((long)register0x00000008 + -0xd8) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar2;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = param_1;
    func_0x004c63c0(*(undefined8 *)(*plVar3 + 0x10));
    func_0x004c5ee8(*(undefined8 *)((long)register0x00000008 + -0xb0));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xe0));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -0xc0));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -0xc0));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xf0));
    __ZNSt3__117__assoc_sub_state4waitEv(*puVar1);
    unaff_x21 = param_1 + 0x1b;
    unaff_x23 = *unaff_x21;
    unaff_x24 = param_1[0x1c];
    unaff_x22 = (long *)param_1[0x17];
    *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = unaff_x24;
    *unaff_x21 = 0;
    param_1[0x1c] = 0;
    __ZNSt3__17promiseIvEC1Ev((undefined1 *)((long)register0x00000008 + -0xc0));
    __ZNSt3__17promiseIvE10get_futureEv
              ((undefined1 *)((long)register0x00000008 + -200),
               (undefined1 *)((long)register0x00000008 + -0xc0));
    uVar2 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xb8);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x4c5d8c;
    *(undefined ***)((long)register0x00000008 + -0xb0) = &PTR_FUN_009ee648;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar2;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    func_0x004c63c0(*(undefined8 *)(*unaff_x22 + 0x10));
    func_0x004c5f58(*(undefined8 *)((long)register0x00000008 + -0xb0));
    FUN_004c5d64((undefined1 *)((long)register0x00000008 + -0xe0));
    __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)((long)register0x00000008 + -200));
    __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -200));
    __ZNSt3__17promiseIvED1Ev((undefined1 *)((long)register0x00000008 + -0xc0));
    func_0x004c63cc();
    FUN_0064c54c(*unaff_x20);
    __ZNSt3__16futureIvED1Ev(param_1 + 0x2d);
    __ZNSt3__17promiseIvED1Ev(param_1 + 0x2c);
    func_0x004bfc10(param_1 + 0x25);
    func_0x004c5448(param_1 + 0x23);
    func_0x004c5424(param_1 + 0x21);
    func_0x004c48c0(param_1 + 0x1f);
    func_0x004c5400(param_1 + 0x1d);
    func_0x004c53dc(unaff_x21);
    func_0x0045cbec(param_1 + 0x19);
    func_0x0045a078(unaff_x20);
    FUN_004c45a4(param_1 + 0x15);
    unaff_x19 = param_1 + 1;
    FUN_004c3b2c();
    func_0x004c5e9c(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (param_2 == 0) {
      param_1 = unaff_x19;
      func_0x004c5fd0();
    }
    else {
      __ZNSt3__16futureIvED1Ev((undefined1 *)((long)register0x00000008 + -200));
      param_1 = (undefined8 *)((long)register0x00000008 + -0xc0);
      __ZNSt3__17promiseIvED1Ev();
      func_0x004c63cc();
    }
    unaff_x30 = FUN_004c2108;
    func_0x004c61e0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  return param_1;
}



/* Entry: 004c210c; end: 004c211f;  */

void FUN_004c210c(void)

{
  FUN_004c1e78();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c2120; end: 004c21a3;  */

long FUN_004c2120(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    uVar3 = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    uVar5 = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar5) {
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(ulong *)(param_1 + 8) = uVar2;
      *(ulong *)(param_2 + 8) = uVar1;
      *(undefined8 *)(param_1 + 0x10) = uVar4;
    }
    else {
      func_0x004d9d88(param_1);
    }
  }
  return param_1;
}



/* Entry: 004c21a4; end: 004c2203;  */

long FUN_004c21a4(long param_1)

{
  long lStack_28;
  
  func_0x004bfc10(param_1 + 0x30);
  func_0x004c5344(param_1 + 0x20);
  lStack_28 = param_1;
  FUN_0040d95c(&lStack_28);
  return param_1;
}



/* Entry: 004c2204; end: 004c2237;  */

void FUN_004c2204(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *extraout_x8;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  auStack_28[0] = param_2;
  uStack_24 = param_3;
  uStack_20 = param_4;
  uStack_1c = param_5;
  func_0x004c6028();
  (*extraout_x8)(param_1,auStack_28);
  return;
}



/* Entry: 004c2238; end: 004c2777;  */

void FUN_004c2238(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  qword *pqVar9;
  ulong *puVar10;
  long *plVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined **ppuVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  dword *pdStack_218;
  qword *pqStack_210;
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined6 uStack_1a0;
  undefined2 uStack_19a;
  undefined6 uStack_198;
  undefined2 uStack_192;
  undefined6 uStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  long lStack_178;
  undefined ***pppuStack_170;
  code *pcStack_168;
  ulong auStack_160 [5];
  undefined1 uStack_138;
  code *pcStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  dword *pdStack_100;
  qword *pqStack_f8;
  long lStack_f0;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [32];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x004c5f20();
  uVar4 = *(char *)(param_1 + 0x140) == '\x01';
  if ((bool)uVar4) {
    param_5 = (long *)*param_5;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_5 + 0x18);
    func_0x004c5e9c(extraout_x8);
    if ((bool)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x004c22a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    lStack_228 = *(long *)(param_1 + 0xe8);
    lStack_220 = *(long *)(param_1 + 0xf0);
    if (lStack_220 != 0) {
      plVar11 = (long *)(lStack_220 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = *plVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = *plVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_188 = &PTR_SUB_009ee398;
    uStack_238 = 0;
    uStack_230 = 0;
    pppuStack_170 = &ppuStack_188;
    ppuStack_1c8 = &PTR_FUN_009f59a0;
    uStack_1c0 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_19a = 0;
    uStack_198 = 0;
    lStack_180 = lStack_228;
    lStack_178 = lStack_220;
    uStack_68 = extraout_x8;
    FUN_004c7618(auStack_d0,param_2);
    uStack_1b8 = uStack_1b8 | 1;
    if (uStack_1b0 == 0) {
      uVar5 = uStack_1c0;
      if ((uStack_1c0 & 1) != 0) {
        func_0x004c6044();
      }
      FUN_004c3b80();
      uStack_1b0 = uVar5;
    }
    FUN_004c2120();
    puVar6 = auStack_d0;
    FUN_004d9ba0();
    uStack_198 = (undefined6)param_3;
    uStack_192 = (undefined2)((ulong)param_3 >> 0x30);
    FUN_006ad008();
    FUN_004bbc8c(auStack_d0,param_2);
    uStack_b8 = param_4;
    puStack_b0 = puVar6;
    func_0x004c546c(auStack_a8,&ppuStack_188);
    lStack_80 = param_5[1];
    lStack_88 = *param_5;
    if (param_5[1] != 0) {
      do {
        func_0x004c5ef4();
      } while (extraout_w10 != 0);
    }
    uStack_70 = *(undefined8 *)(param_1 + 0x130);
    uStack_78 = *(undefined8 *)(param_1 + 0x128);
    if (*(long *)(param_1 + 0x130) != 0) {
      do {
        func_0x004c5ef4();
      } while (extraout_w10_00 != 0);
    }
    FUN_004bbc8c(auStack_208,param_2);
    lStack_1e0 = param_5[1];
    lStack_1e8 = *param_5;
    uStack_1f0 = param_4;
    if (param_5[1] != 0) {
      do {
        func_0x004c5ef4();
      } while (extraout_w10_01 != 0);
    }
    uStack_1d0 = *(undefined8 *)(param_1 + 0x130);
    uStack_1d8 = *(undefined8 *)(param_1 + 0x128);
    if (*(long *)(param_1 + 0x130) != 0) {
      do {
        func_0x004c5ef4();
      } while (extraout_w10_02 != 0);
    }
    pdStack_100 = (dword *)FUN_004c561c;
    pqStack_f8 = (qword *)&PTR_FUN_009ee358;
    lVar7 = 0x68;
    __Znwm();
    FUN_004bbc8c();
    *(undefined1 **)(lVar7 + 0x20) = puStack_b0;
    *(undefined8 *)(lVar7 + 0x18) = uStack_b8;
    lVar8 = lVar7 + 0x28;
    func_0x004c546c(lVar8,auStack_a8);
    puVar6 = auStack_d0;
    *(long *)(lVar7 + 0x50) = lStack_80;
    *(long *)(lVar7 + 0x48) = lStack_88;
    if (lStack_80 != 0) {
      do {
        func_0x004c60e0();
        puVar6 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    *(undefined8 *)(lVar7 + 0x60) = uStack_70;
    *(undefined8 *)(lVar7 + 0x58) = uStack_78;
    *(undefined8 *)(puVar6 + 0x58) = 0;
    *(undefined8 *)(puVar6 + 0x60) = 0;
    pcStack_130 = FUN_004c5798;
    ppuStack_128 = &PTR_FUN_009ee370;
    lStack_f0 = lVar7;
    func_0x004c6020();
    FUN_004bbc8c();
    puVar6 = auStack_208;
    *(undefined8 *)(lVar8 + 0x18) = uStack_1f0;
    *(long *)(lVar8 + 0x28) = lStack_1e0;
    *(long *)(lVar8 + 0x20) = lStack_1e8;
    if (lStack_1e0 != 0) {
      do {
        func_0x004c60e0();
        puVar6 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    *(undefined8 *)(lVar8 + 0x38) = uStack_1d0;
    *(undefined8 *)(lVar8 + 0x30) = uStack_1d8;
    *(undefined8 *)(puVar6 + 0x30) = 0;
    *(undefined8 *)(puVar6 + 0x38) = 0;
    uVar5 = param_1 + 0x150U;
    lStack_120 = lVar8;
    FUN_004bea14();
    if ((uVar5 & 1) == 0) {
      pdStack_218 = (dword *)0x0;
      pqStack_210 = (qword *)0x0;
      ppuVar12 = &PTR_FUN_009ee370;
    }
    else {
      pqVar9 = &section_00000068.addr;
      __Znwm();
      pqVar9[1] = 0;
      pqVar9[2] = 0;
      *pqVar9 = (qword)&PTR_FUN_009ee210;
      pqVar9[3] = (qword)&PTR_DAT_009ee308;
      pqVar9[4] = (qword)pdStack_100;
      (*(code *)pqStack_f8[2])(pqVar9 + 5,&pqStack_f8);
      pcStack_168 = pcStack_130;
      puVar10 = auStack_160;
      (*(code *)ppuStack_128[2])(puVar10,&ppuStack_128);
      pqVar9[10] = (qword)FUN_004c5560;
      pqVar9[0xb] = (qword)&PTR_FUN_009ee340;
      func_0x004c6034();
      *puVar10 = (ulong)pcStack_168;
      (**(code **)(auStack_160[0] + 0x10))(puVar10 + 1,auStack_160);
      pqVar9[0xc] = (qword)puVar10;
      func_0x004c6268();
      pqVar9[3] = (qword)&PTR_DAT_009ee260;
      pqVar9[0x10] = param_1 + 0x150U;
      ppuVar12 = ppuStack_128;
      pdStack_218 = (dword *)(pqVar9 + 3);
      pqStack_210 = pqVar9;
    }
    pqVar9 = pqStack_210;
    pdVar3 = pdStack_218;
    func_0x004c6418(ppuVar12);
    func_0x004c5ee8(pqStack_f8);
    if (pdVar3 != (dword *)0x0) {
      plVar11 = *(long **)(param_1 + 0xd8);
      pdStack_100 = pdVar3;
      pqStack_f8 = pqVar9;
      if (pqVar9 != (qword *)0x0) {
        do {
          func_0x004c5ef4();
        } while (extraout_w10_03 != 0);
      }
      pcStack_168 = (code *)((ulong)pcStack_168 & 0xffffffffffffff00);
      uStack_138 = 0;
      (**(code **)(*plVar11 + 0x40))();
      func_0x004c3bc4(&pcStack_168);
      func_0x004c5838(&pdStack_100);
    }
    func_0x004c5814(&pdStack_218);
    FUN_004c21a4(auStack_208);
    func_0x004c21d0(auStack_d0);
    FUN_004eff40(&ppuStack_1c8);
    func_0x004c54c0(&ppuStack_188);
    func_0x004c5400(&uStack_238);
    param_5 = &lStack_228;
    func_0x004c5400();
    func_0x004c5e9c(uStack_68);
    if ((bool)uVar4) {
      return;
    }
  }
  ___stack_chk_fail();
  FUN_004d9ba0(auStack_d0);
  FUN_004eff40(&ppuStack_1c8);
  func_0x004c54c0(&ppuStack_188);
  func_0x004c5400(&uStack_238);
  plVar11 = &lStack_228;
  func_0x004c5400();
  func_0x004c5fd0();
  func_0x004c5fd8();
  *plVar11 = (long)&PTR_FUN_009efec0;
  plVar11[1] = 0;
  plVar11[3] = 0;
  plVar11[2] = 0;
  plVar11[5] = 0;
  plVar11[4] = 0;
  FUN_004c29bc();
  FUN_004f0bd4();
  FUN_006ad008();
  param_5[4] = (long)plVar11;
  param_5[5] = (long)plVar11;
  return;
}



/* Entry: 004c2778; end: 004c27cb;  */

void FUN_004c2778(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x004c5fd8();
  *param_1 = &PTR_FUN_009efec0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_004c29bc();
  FUN_004f0bd4();
  FUN_006ad008();
  *(undefined8 **)(unaff_x19 + 0x20) = param_1;
  *(undefined8 **)(unaff_x19 + 0x28) = param_1;
  return;
}



/* Entry: 004c27cc; end: 004c2957;  */

void FUN_004c27cc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  byte bStack_70;
  long lStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  
  if (*(long **)(param_2 + 0xf8) == (long *)0x0) {
    func_0x004c6564();
    return;
  }
  (**(code **)(**(long **)(param_2 + 0xf8) + 0x18))(auStack_80);
  if ((bStack_38 & 1) != 0) {
    if ((bStack_70 & 1) != 0) {
      uVar5 = *(ulong *)(lStack_68 + 0x10) & 0xfffffffffffffffc;
      cVar1 = *(char *)(uVar5 + 0x17);
      if (cVar1 < '\0') {
        if (*(long *)(uVar5 + 8) == 0) goto LAB_004c289c;
      }
      else if (cVar1 == '\0') goto LAB_004c289c;
      FUN_004bbc8c(&uStack_d0,param_3);
      uVar4 = uStack_c0;
      uVar3 = uStack_c8;
      uVar2 = uStack_d0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = 0;
      uStack_98 = uStack_50;
      uStack_a0 = uStack_58;
      uStack_88 = uStack_40;
      uStack_90 = uStack_48;
      param_1[1] = uVar3;
      *param_1 = uVar2;
      param_1[2] = uVar4;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_b8 = 0;
      param_1[4] = uStack_50;
      param_1[3] = uStack_58;
      param_1[6] = uStack_40;
      param_1[5] = uStack_48;
      *(undefined1 *)(param_1 + 7) = 1;
      FUN_0040d974(&uStack_b8);
      FUN_0040d974(&uStack_d0);
      goto LAB_004c28b4;
    }
LAB_004c289c:
    (**(code **)(**(long **)(param_2 + 0xf8) + 0x20))(*(long **)(param_2 + 0xf8),param_3);
  }
  func_0x004c6564();
LAB_004c28b4:
  FUN_004c3b60(auStack_80);
  return;
}



/* Entry: 004c2958; end: 004c295f;  */

undefined8 * FUN_004c2958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009f54f8;
  param_1[1] = 0;
  FUN_004ece80();
  return param_1;
}



/* Entry: 004c2960; end: 004c29bb;  */

long FUN_004c2960(long param_1,long param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004c6284();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x004c6278();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_004f28f8(param_1);
    }
    else {
      FUN_004f28c4(param_1);
    }
  }
  return param_1;
}



/* Entry: 004c29bc; end: 004c29fb;  */

void FUN_004c29bc(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004c6044();
    }
    func_0x004c3d98();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 004c29fc; end: 004c2e8b;  */

void FUN_004c29fc(undefined8 *param_1,long param_2,undefined8 *param_3,undefined **param_4,
                 long param_5,ulong param_6)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  uint uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined **extraout_x8_00;
  undefined **extraout_x8_01;
  undefined **ppuVar13;
  undefined **extraout_x9;
  undefined8 *puVar14;
  long unaff_x21;
  long lVar15;
  undefined1 auStack_1e8 [24];
  undefined1 uStack_1d0;
  undefined1 auStack_1c8 [72];
  undefined **ppuStack_180;
  long lStack_178;
  long lStack_170;
  undefined ***pppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_58;
  
  func_0x004c5f20();
  ppuStack_118 = &PTR_FUN_009fb2e0;
  ppuStack_110 = (undefined **)0x0;
  uStack_100 = 0;
  uStack_108 = 0;
  ppuStack_f0 = (undefined **)0x0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  ppuStack_b8 = (undefined **)0x0;
  uStack_a8 = 0;
  ppuStack_a0 = &PTR_DAT_009f9a18;
  lStack_98 = 0;
  uStack_88 = (undefined ***)0x0;
  uVar7 = *(int *)(param_3 + 1) - (int)*param_3;
  pppuVar3 = &ppuStack_a0;
  uStack_58 = extraout_x8;
  FUN_00549e84(pppuVar3,*param_3,uVar7);
  if (((ulong)pppuVar3 & 1) == 0) {
    uVar7 = 0;
    param_5 = 0;
    param_6 = 4;
    FUN_004c2e8c(param_1,*(undefined8 *)(param_2 + 0x128),0,0);
    goto LAB_004c2af0;
  }
  if (uStack_88._4_4_ == 0xd) {
    func_0x004c64a8();
    uVar4 = *(ulong *)(unaff_x21 + 0x18);
    if (uVar4 == 0) {
      uVar4 = *(ulong *)(unaff_x21 + 8);
      if ((uVar4 & 1) != 0) {
        func_0x004c6044();
      }
      func_0x004c3d98();
      *(ulong *)(unaff_x21 + 0x18) = uVar4;
    }
    uVar10 = *(ulong *)(uVar4 + 0x18);
    in_ZR = (uVar10 & 1) == 0;
    puVar11 = (ulong *)(uVar4 + 0x18);
    if (!(bool)in_ZR) {
      puVar11 = (ulong *)(uVar10 + 7);
    }
    lVar15 = (long)*(int *)(uVar4 + 0x20) << 3;
    do {
      if (lVar15 == 0) {
        lVar15 = 2;
        goto LAB_004c2af4;
      }
      puVar12 = puVar11 + 1;
      pppuVar6 = (undefined ***)*puVar11;
      lVar15 = lVar15 + -8;
      puVar11 = puVar12;
    } while (((long)param_4 < 0) || (in_ZR = pppuVar6[0xc] == param_4, !(bool)in_ZR));
    lVar15 = 2;
LAB_004c2be8:
    in_ZR = &ppuStack_118 == pppuVar6;
    if (!(bool)in_ZR) {
      ppuVar9 = ppuStack_110;
      if (((ulong)ppuStack_110 & 1) != 0) {
        func_0x004c6284();
        ppuVar9 = extraout_x8_00;
      }
      ppuVar13 = pppuVar6[1];
      if (((ulong)ppuVar13 & 1) != 0) {
        func_0x004c6278();
        ppuVar9 = extraout_x8_01;
        ppuVar13 = extraout_x9;
      }
      in_ZR = ppuVar9 == ppuVar13;
      if ((bool)in_ZR) {
        FUN_005058e0(&ppuStack_118);
      }
      else {
        FUN_005058ac(&ppuStack_118);
      }
    }
  }
  else {
    if (uStack_88._4_4_ == 6) {
      in_ZR = 1;
      if ((*(byte *)(lStack_90 + 0x10) >> 1 & 1) != 0) {
        pppuVar6 = *(undefined ****)(lStack_90 + 0x20);
        lVar15 = 3;
        goto LAB_004c2be8;
      }
    }
    else {
      in_ZR = 0;
      if (uStack_88._4_4_ == 1) {
        func_0x004c64a8();
        pppuVar6 = *(undefined ****)(unaff_x21 + 0x18);
        if (pppuVar6 == (undefined ***)0x0) {
          pppuVar6 = *(undefined ****)(unaff_x21 + 8);
          if (((ulong)pppuVar6 & 1) != 0) {
            func_0x004c6044();
          }
          func_0x004c3e70();
          *(undefined ****)(unaff_x21 + 0x18) = pppuVar6;
        }
        lVar15 = 1;
        goto LAB_004c2be8;
      }
    }
LAB_004c2af0:
    lVar15 = 0;
  }
LAB_004c2af4:
  FUN_0050282c(&ppuStack_a0);
  if ((int)pppuVar3 == 0) goto LAB_004c2df0;
  if (((long)param_4 < 0) || (in_ZR = ppuStack_b8 == param_4, !(bool)in_ZR)) {
    uVar7 = 0;
    param_6 = 5;
    param_5 = lVar15;
    FUN_004c2e8c(param_1,*(undefined8 *)(param_2 + 0x128),0,lVar15);
    goto LAB_004c2df0;
  }
  ppuVar9 = &PTR_PTR_00b12d08;
  if (ppuStack_f0 != (undefined **)0x0) {
    ppuVar9 = ppuStack_f0;
  }
  ppuVar13 = &PTR_PTR_00b12cc8;
  if ((undefined **)ppuVar9[0xd] != (undefined **)0x0) {
    ppuVar13 = (undefined **)ppuVar9[0xd];
  }
  uVar1 = *(uint *)((long)ppuVar13 + 0x1c);
  if (uVar1 < 2) {
    param_4 = (undefined **)0x1;
LAB_004c2c48:
    if (uVar1 - 2 < 5) {
LAB_004c2c50:
      if (*(char *)(param_2 + 0x50) == '\x01') {
        lVar8 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
        param_5 = *(long *)(param_2 + 0x20);
        pppuVar3 = &ppuStack_118;
        FUN_004bb0d8(pppuVar3,*(long *)(param_2 + 8),lVar8,param_5,
                     *(long *)(param_2 + 0x28) - param_5,*(long *)(param_2 + 0x38),
                     *(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38));
        uVar7 = (uint)lVar8;
        iVar2 = (int)pppuVar3;
        goto LAB_004c2cf4;
      }
      param_6 = 0;
    }
    else {
      in_ZR = uVar1 == 2;
      if (uVar1 < 2) {
LAB_004c2d2c:
        puVar14 = (undefined8 *)((ulong)ppuVar9[0xc] & 0xfffffffffffffffc);
        lVar8 = (long)*(char *)((long)puVar14 + 0x17);
        if (lVar8 < 0) {
          lVar8 = puVar14[1];
          puVar14 = (undefined8 *)*puVar14;
        }
        FUN_0047bcd0(&uStack_130,puVar14,(long)puVar14 + lVar8);
        uStack_148 = uStack_128;
        uStack_150 = uStack_130;
        uStack_140 = uStack_120;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_130 = 0;
        uStack_138 = 1;
        param_2 = *(long *)(param_2 + 0x128);
        ppuVar9 = param_4;
        func_0x004bf49c(&ppuStack_a0,lVar15,param_4);
        uVar7 = (uint)ppuVar9;
        func_0x004c654c();
        func_0x004c6300();
        FUN_004c3de8(&ppuStack_a0,&uStack_150);
        *param_1 = 0;
        FUN_004c3de8(param_1 + 1,&ppuStack_a0);
        FUN_004bb774(&ppuStack_a0);
        FUN_004bb774(&uStack_150);
        FUN_0040d974(&uStack_130);
        goto LAB_004c2df0;
      }
      if (uVar1 == 7) goto LAB_004c2cac;
      param_6 = 4;
    }
    in_ZR = 0;
    func_0x004c62d4();
    goto LAB_004c2df0;
  }
  if (uVar1 == 5) {
    param_4 = (undefined **)0x2;
    goto LAB_004c2c50;
  }
  if (uVar1 != 7) {
    param_4 = (undefined **)0x4;
    goto LAB_004c2c48;
  }
  param_4 = (undefined **)0x3;
LAB_004c2cac:
  in_ZR = uVar1 == 7;
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  FUN_004c70d8(uVar5,0xb4);
  if (((int)uVar5 == 0) || (*(long *)(param_2 + 0x118) == 0)) {
LAB_004c2d44:
    param_6 = 3;
  }
  else {
    ppuStack_a0 = &PTR_FUN_009ee5b0;
    uStack_88 = &ppuStack_a0;
    uVar5 = *(undefined8 *)(param_2 + 0x128);
    pppuVar3 = &ppuStack_118;
    lStack_98 = param_2;
    FUN_004bbcd8(pppuVar3,&ppuStack_a0,uVar5);
    uVar7 = (uint)uVar5;
    iVar2 = (int)pppuVar3;
    FUN_004c5cd4(&ppuStack_a0);
LAB_004c2cf4:
    ppuVar9 = &PTR_PTR_00b12d08;
    if (ppuStack_f0 != (undefined **)0x0) {
      ppuVar9 = ppuStack_f0;
    }
    in_ZR = iVar2 == 5;
    param_6 = 1;
    switch(iVar2) {
    case 0:
    case 1:
      goto LAB_004c2d2c;
    case 2:
      break;
    case 3:
      goto LAB_004c2d44;
    case 4:
    case 5:
      param_6 = 2;
      break;
    default:
      param_6 = 4;
    }
  }
  func_0x004c62d4();
LAB_004c2df0:
  pppuVar3 = &ppuStack_118;
  FUN_00504c30();
  func_0x004c5e9c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_004c5cd4(&ppuStack_a0);
    pppuVar6 = &ppuStack_118;
    FUN_00504c30();
    func_0x004c5fd0();
    pcStack_158 = FUN_004c2e8c;
    ppuStack_180 = param_4;
    lStack_178 = lVar15;
    lStack_170 = param_2;
    pppuStack_168 = pppuVar3;
    puStack_160 = &stack0xfffffffffffffff0;
    FUN_004bf410(auStack_1c8,param_5,uVar7 & 0xff,param_6);
    func_0x004c654c();
    func_0x004c6300();
    auStack_1e8[0] = 0;
    uStack_1d0 = 0;
    *pppuVar6 = (undefined **)(param_6 & 0xffffffff | 0x100000000);
    FUN_004c3de8(pppuVar6 + 1,auStack_1e8);
    FUN_004bb774(auStack_1e8);
    return;
  }
  return;
}



/* Entry: 004c2e8c; end: 004c2f07;  */

void FUN_004c2e8c(ulong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 ulong param_5)

{
  undefined1 auStack_98 [24];
  undefined1 uStack_80;
  undefined1 auStack_78 [72];
  
  FUN_004bf410(auStack_78,param_4,param_3,param_5);
  func_0x004c654c();
  func_0x004c6300();
  auStack_98[0] = 0;
  uStack_80 = 0;
  *param_1 = param_5 & 0xffffffff | 0x100000000;
  FUN_004c3de8(param_1 + 1,auStack_98);
  FUN_004bb774(auStack_98);
  return;
}



/* Entry: 004c2f08; end: 004c301b;  */

long * FUN_004c2f08(long *param_1,int param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar1 = param_1;
    func_0x004c5f20();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *plVar1 = (long)&PTR_FUN_009ed830;
    unaff_x20 = plVar1 + 1;
    unaff_x24 = *unaff_x20;
    if (unaff_x24 != 0) {
      unaff_x26 = param_1[2];
      unaff_x22 = param_1[3];
      *unaff_x20 = 0;
      plVar1[2] = 0;
      FUN_0045cc3c();
      unaff_x23 = *(long *)(unaff_x22 + 0x10);
      __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
      unaff_x27 = *(long *)(unaff_x23 + 0x70);
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x004c6488(0x4c5df4);
      func_0x004c639c(unaff_x23 + 0x48);
      func_0x004c5f30();
      func_0x004c6260();
      if (unaff_x27 == 0) {
        func_0x004c6584();
        if (extraout_x8_00 != 0) {
          do {
            func_0x004c5ef4();
          } while (extraout_w10 != 0);
        }
        func_0x004c6028();
        func_0x004c63a4();
        func_0x004c60c4();
      }
      func_0x004c6194();
      unaff_x21 = plVar1;
    }
    func_0x0045cbec(param_1 + 3);
    unaff_x19 = unaff_x20;
    func_0x004c5344();
    func_0x004c5e9c(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    if (param_2 == 0) {
      func_0x004c5fd0();
    }
    else {
      func_0x004c60c4();
    }
    unaff_x30 = FUN_004c301c;
    func_0x004c61e0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  return param_1;
}



/* Entry: 004c301c; end: 004c301f;  */

long * FUN_004c301c(long *param_1,int param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar1 = param_1;
    func_0x004c5f20();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *plVar1 = (long)&PTR_FUN_009ed830;
    unaff_x20 = plVar1 + 1;
    unaff_x24 = *unaff_x20;
    if (unaff_x24 != 0) {
      unaff_x26 = param_1[2];
      unaff_x22 = param_1[3];
      *unaff_x20 = 0;
      plVar1[2] = 0;
      FUN_0045cc3c();
      unaff_x23 = *(long *)(unaff_x22 + 0x10);
      __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
      unaff_x27 = *(long *)(unaff_x23 + 0x70);
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x004c6488(0x4c5df4);
      func_0x004c639c(unaff_x23 + 0x48);
      func_0x004c5f30();
      func_0x004c6260();
      if (unaff_x27 == 0) {
        func_0x004c6584();
        if (extraout_x8_00 != 0) {
          do {
            func_0x004c5ef4();
          } while (extraout_w10 != 0);
        }
        func_0x004c6028();
        func_0x004c63a4();
        func_0x004c60c4();
      }
      func_0x004c6194();
      unaff_x21 = plVar1;
    }
    func_0x0045cbec(param_1 + 3);
    unaff_x19 = unaff_x20;
    func_0x004c5344();
    func_0x004c5e9c(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    if (param_2 == 0) {
      func_0x004c5fd0();
    }
    else {
      func_0x004c60c4();
    }
    unaff_x30 = FUN_004c301c;
    func_0x004c61e0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  return param_1;
}



/* Entry: 004c3020; end: 004c3033;  */

void FUN_004c3020(void)

{
  FUN_004c2f08();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c3034; end: 004c3167;  */

qword * FUN_004c3034(qword param_1,qword *param_2,qword *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  char *pcVar2;
  qword *pqVar3;
  qword *pqVar4;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  qword *unaff_x20;
  qword *unaff_x21;
  qword unaff_x22;
  qword *unaff_x23;
  qword unaff_x24;
  undefined1 *unaff_x25;
  qword unaff_x26;
  qword unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined1 auStack_150 [16];
  undefined4 uStack_140;
  qword qStack_130;
  undefined8 uStack_128;
  undefined8 uStack_f8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  qword qStack_b0;
  undefined **ppuStack_a8;
  qword qStack_a0;
  qword qStack_98;
  qword qStack_90;
  qword qStack_80;
  undefined **ppuStack_78;
  char *pcStack_70;
  undefined8 uStack_48;
  
  func_0x004c5f04();
  if (extraout_x9 != 0) {
    func_0x004c6174();
    qStack_98 = param_3[1];
    qStack_a0 = *param_3;
    qStack_90 = param_3[2];
    FUN_0045cc3c();
    func_0x004c64d4();
    func_0x004c6330();
    unaff_x22 = unaff_x21[0xe];
    qStack_80 = 0x4c5e0c;
    ppuStack_78 = &PTR_FUN_009ee678;
    pcVar2 = segment_command_00000020.segname;
    __Znwm();
    ppuVar7 = ppuStack_a8;
    param_1 = qStack_b0;
    unaff_x23 = &qStack_80;
    qStack_b0 = 0;
    ppuStack_a8 = (undefined **)0x0;
    *(undefined ***)(pcVar2 + 8) = ppuVar7;
    *(qword *)pcVar2 = param_1;
    *(qword *)(pcVar2 + 0x18) = qStack_98;
    *(qword *)(pcVar2 + 0x10) = qStack_a0;
    *(qword *)(pcVar2 + 0x20) = qStack_90;
    param_2 = unaff_x21 + 9;
    param_3 = &qStack_80;
    pcStack_70 = pcVar2;
    FUN_0045cc5c();
    func_0x004c5ee8(ppuStack_78);
    func_0x004c603c();
    if (unaff_x22 == 0) {
      func_0x004c6184();
      qStack_80 = param_1;
      ppuStack_78 = ppuVar7;
      if (extraout_x8 != 0) {
        do {
          func_0x004c5ef4();
        } while (extraout_w10 != 0);
      }
      func_0x004c6028();
      param_3 = &qStack_80;
      (*extraout_x8_00)();
      param_2 = &qStack_80;
      FUN_0045d30c();
    }
    func_0x004c6194();
  }
  func_0x004c5e9c(uStack_48);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  pqVar3 = &qStack_80;
  FUN_0045d30c();
  func_0x004c6194();
  func_0x004c5fd0();
  pcStack_b8 = FUN_004c3168;
  ppuVar5 = &puStack_c0;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x004c5f04();
  if (extraout_x9_00 != 0) {
    func_0x004c6174();
    uStack_140 = SUB84(param_3,0);
    FUN_0045cc3c();
    func_0x004c64d4();
    func_0x004c6330();
    unaff_x22 = unaff_x21[0xe];
    unaff_x23 = &qStack_130;
    func_0x004c6238(0x4c5e44);
    func_0x004c6450();
    func_0x004c5ee8(uStack_128);
    func_0x004c603c();
    if (unaff_x22 == 0) {
      func_0x004c6184();
      qStack_130 = param_1;
      if (extraout_x8_01 != 0) {
        do {
          func_0x004c5ef4();
        } while (extraout_w10_00 != 0);
      }
      func_0x004c6028();
      param_3 = &qStack_130;
      (*extraout_x8_02)();
      func_0x004c6350();
    }
    func_0x004c6194();
  }
  func_0x004c5e9c(uStack_f8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pqVar4 = pqVar3;
    func_0x004c6350();
    func_0x004c6194();
    pcVar6 = FUN_004c323c;
    func_0x004c5fd0();
    puVar1 = auStack_150;
    while( true ) {
      *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
      *(qword *)(puVar1 + -0x58) = unaff_x27;
      *(qword *)(puVar1 + -0x50) = unaff_x26;
      *(undefined1 **)(puVar1 + -0x48) = unaff_x25;
      *(qword *)(puVar1 + -0x40) = unaff_x24;
      *(qword **)(puVar1 + -0x38) = unaff_x23;
      *(qword *)(puVar1 + -0x30) = unaff_x22;
      *(qword **)(puVar1 + -0x28) = unaff_x21;
      *(qword **)(puVar1 + -0x20) = unaff_x20;
      *(qword **)(puVar1 + -0x18) = pqVar3;
      *(undefined1 ***)(puVar1 + -0x10) = ppuVar5;
      *(code **)(puVar1 + -8) = pcVar6;
      ppuVar5 = (undefined1 **)(puVar1 + -0x10);
      pqVar3 = pqVar4;
      func_0x004c5f20();
      *(undefined8 *)(puVar1 + -0x68) = extraout_x8_03;
      *pqVar3 = (qword)&PTR_FUN_009ed860;
      unaff_x20 = pqVar3 + 1;
      unaff_x24 = *unaff_x20;
      if (unaff_x24 != 0) {
        unaff_x26 = pqVar4[2];
        unaff_x22 = pqVar4[3];
        *unaff_x20 = 0;
        pqVar3[2] = 0;
        FUN_0045cc3c();
        unaff_x23 = *(qword **)(unaff_x22 + 0x10);
        __ZNSt3__15mutex4lockEv(unaff_x23 + 1);
        unaff_x27 = unaff_x23[0xe];
        unaff_x25 = puVar1 + -0xa0;
        func_0x004c6488(0x4c5e5c);
        func_0x004c639c(unaff_x23 + 9);
        func_0x004c5f30();
        func_0x004c6260();
        if (unaff_x27 == 0) {
          func_0x004c6584();
          if (extraout_x8_04 != 0) {
            do {
              func_0x004c5ef4();
            } while (extraout_w10_01 != 0);
          }
          func_0x004c6028();
          func_0x004c63a4();
          func_0x004c60c4();
        }
        func_0x004c619c();
        unaff_x21 = pqVar3;
      }
      func_0x0045cbec(pqVar4 + 3);
      pqVar3 = unaff_x20;
      func_0x004c53b8();
      func_0x004c5e9c(*(undefined8 *)(puVar1 + -0x68));
      if ((bool)in_ZR) break;
      ___stack_chk_fail();
      pqVar4 = pqVar3;
      if ((int)param_3 == 0) {
        func_0x004c5fd0();
      }
      else {
        func_0x004c60c4();
      }
      pcVar6 = FUN_004c3350;
      func_0x004c61e0();
      puVar1 = puVar1 + -0xb0;
    }
    return pqVar4;
  }
  return pqVar3;
}



/* Entry: 004c3168; end: 004c323b;  */

long * FUN_004c3168(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  long extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  code *pcVar6;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  undefined1 *puVar3;
  
  func_0x004c5f04();
  if (extraout_x9 != 0) {
    func_0x004c6174();
    uStack_90 = SUB84(param_3,0);
    FUN_0045cc3c();
    func_0x004c64d4();
    func_0x004c6330();
    unaff_x22 = unaff_x21[0xe];
    unaff_x23 = &uStack_80;
    func_0x004c6238(0x4c5e44);
    func_0x004c6450();
    func_0x004c5ee8(uStack_78);
    func_0x004c603c();
    if (unaff_x22 == 0) {
      func_0x004c6184();
      uStack_80 = param_1;
      if (extraout_x8 != 0) {
        do {
          func_0x004c5ef4();
        } while (extraout_w10 != 0);
      }
      func_0x004c6028();
      param_3 = &uStack_80;
      (*extraout_x8_00)();
      func_0x004c6350();
    }
    func_0x004c6194();
  }
  func_0x004c5e9c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar4 = param_2;
    func_0x004c6350();
    func_0x004c6194();
    pcVar6 = FUN_004c323c;
    func_0x004c5fd0();
    puVar1 = auStack_a0;
    puVar2 = (undefined1 *)register0x00000008;
    while( true ) {
      puVar3 = puVar1;
      *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
      *(long *)(puVar3 + -0x58) = unaff_x27;
      *(long *)(puVar3 + -0x50) = unaff_x26;
      *(undefined1 **)(puVar3 + -0x48) = unaff_x25;
      *(long *)(puVar3 + -0x40) = unaff_x24;
      *(undefined8 **)(puVar3 + -0x38) = unaff_x23;
      *(long *)(puVar3 + -0x30) = unaff_x22;
      *(long **)(puVar3 + -0x28) = unaff_x21;
      *(long **)(puVar3 + -0x20) = unaff_x20;
      *(long **)(puVar3 + -0x18) = param_2;
      *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
      *(code **)(puVar3 + -8) = pcVar6;
      plVar5 = plVar4;
      func_0x004c5f20();
      *(undefined8 *)(puVar3 + -0x68) = extraout_x8_01;
      *plVar5 = (long)&PTR_FUN_009ed860;
      unaff_x20 = plVar5 + 1;
      unaff_x24 = *unaff_x20;
      if (unaff_x24 != 0) {
        unaff_x26 = plVar4[2];
        unaff_x22 = plVar4[3];
        *unaff_x20 = 0;
        plVar5[2] = 0;
        FUN_0045cc3c();
        unaff_x23 = *(undefined8 **)(unaff_x22 + 0x10);
        __ZNSt3__15mutex4lockEv(unaff_x23 + 1);
        unaff_x27 = unaff_x23[0xe];
        unaff_x25 = puVar3 + -0xa0;
        func_0x004c6488(0x4c5e5c);
        func_0x004c639c(unaff_x23 + 9);
        func_0x004c5f30();
        func_0x004c6260();
        if (unaff_x27 == 0) {
          func_0x004c6584();
          if (extraout_x8_02 != 0) {
            do {
              func_0x004c5ef4();
            } while (extraout_w10_00 != 0);
          }
          func_0x004c6028();
          func_0x004c63a4();
          func_0x004c60c4();
        }
        func_0x004c619c();
        unaff_x21 = plVar5;
      }
      func_0x0045cbec(plVar4 + 3);
      param_2 = unaff_x20;
      func_0x004c53b8();
      func_0x004c5e9c(*(undefined8 *)(puVar3 + -0x68));
      if ((bool)in_ZR) break;
      ___stack_chk_fail();
      plVar4 = param_2;
      if ((int)param_3 == 0) {
        func_0x004c5fd0();
      }
      else {
        func_0x004c60c4();
      }
      pcVar6 = FUN_004c3350;
      func_0x004c61e0();
      puVar1 = puVar3 + -0xb0;
      puVar2 = puVar3;
    }
    return plVar4;
  }
  return param_2;
}



/* Entry: 004c323c; end: 004c334f;  */

long * FUN_004c323c(long *param_1,int param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar1 = param_1;
    func_0x004c5f20();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *plVar1 = (long)&PTR_FUN_009ed860;
    unaff_x20 = plVar1 + 1;
    unaff_x24 = *unaff_x20;
    if (unaff_x24 != 0) {
      unaff_x26 = param_1[2];
      unaff_x22 = param_1[3];
      *unaff_x20 = 0;
      plVar1[2] = 0;
      FUN_0045cc3c();
      unaff_x23 = *(long *)(unaff_x22 + 0x10);
      __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
      unaff_x27 = *(long *)(unaff_x23 + 0x70);
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x004c6488(0x4c5e5c);
      func_0x004c639c(unaff_x23 + 0x48);
      func_0x004c5f30();
      func_0x004c6260();
      if (unaff_x27 == 0) {
        func_0x004c6584();
        if (extraout_x8_00 != 0) {
          do {
            func_0x004c5ef4();
          } while (extraout_w10 != 0);
        }
        func_0x004c6028();
        func_0x004c63a4();
        func_0x004c60c4();
      }
      func_0x004c619c();
      unaff_x21 = plVar1;
    }
    func_0x0045cbec(param_1 + 3);
    unaff_x19 = unaff_x20;
    func_0x004c53b8();
    func_0x004c5e9c(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    if (param_2 == 0) {
      func_0x004c5fd0();
    }
    else {
      func_0x004c60c4();
    }
    unaff_x30 = FUN_004c3350;
    func_0x004c61e0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  return param_1;
}



/* Entry: 004c3350; end: 004c3353;  */

long * FUN_004c3350(long *param_1,int param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar1 = param_1;
    func_0x004c5f20();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *plVar1 = (long)&PTR_FUN_009ed860;
    unaff_x20 = plVar1 + 1;
    unaff_x24 = *unaff_x20;
    if (unaff_x24 != 0) {
      unaff_x26 = param_1[2];
      unaff_x22 = param_1[3];
      *unaff_x20 = 0;
      plVar1[2] = 0;
      FUN_0045cc3c();
      unaff_x23 = *(long *)(unaff_x22 + 0x10);
      __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
      unaff_x27 = *(long *)(unaff_x23 + 0x70);
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x004c6488(0x4c5e5c);
      func_0x004c639c(unaff_x23 + 0x48);
      func_0x004c5f30();
      func_0x004c6260();
      if (unaff_x27 == 0) {
        func_0x004c6584();
        if (extraout_x8_00 != 0) {
          do {
            func_0x004c5ef4();
          } while (extraout_w10 != 0);
        }
        func_0x004c6028();
        func_0x004c63a4();
        func_0x004c60c4();
      }
      func_0x004c619c();
      unaff_x21 = plVar1;
    }
    func_0x0045cbec(param_1 + 3);
    unaff_x19 = unaff_x20;
    func_0x004c53b8();
    func_0x004c5e9c(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    if (param_2 == 0) {
      func_0x004c5fd0();
    }
    else {
      func_0x004c60c4();
    }
    unaff_x30 = FUN_004c3350;
    func_0x004c61e0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  return param_1;
}



/* Entry: 004c3354; end: 004c3367;  */

void FUN_004c3354(void)

{
  FUN_004c323c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c3368; end: 004c3457;  */

void FUN_004c3368(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar1;
  undefined8 uStack_108;
  undefined8 uStack_d8;
  undefined8 uStack_48;
  
  func_0x004c5f04();
  if (extraout_x9 != 0) {
    func_0x004c6174();
    FUN_0045cc3c();
    func_0x004c64d4();
    func_0x004c6330();
    lVar1 = *(long *)(unaff_x21 + 0x70);
    func_0x004c639c();
    func_0x004c5ee8(&PTR_DAT_009ee6c0);
    func_0x004c603c();
    if (lVar1 == 0) {
      func_0x004c6184();
      if (extraout_x8 != 0) {
        do {
          func_0x004c5ef4();
        } while (extraout_w10 != 0);
      }
      func_0x004c6028();
      func_0x004c63a4();
      func_0x004c60c4();
    }
    func_0x004c619c();
  }
  func_0x004c5e9c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x004c60c4();
  func_0x004c619c();
  func_0x004c5fd0();
  func_0x004c5f04();
  if (extraout_x9_00 != 0) {
    func_0x004c6174();
    FUN_0045cc3c();
    func_0x004c64d4();
    func_0x004c6330();
    lVar1 = *(long *)(unaff_x21 + 0x70);
    func_0x004c6238(0x4c5e88);
    func_0x004c6450();
    func_0x004c5ee8(uStack_108);
    func_0x004c603c();
    if (lVar1 == 0) {
      func_0x004c6184();
      if (extraout_x8_00 != 0) {
        do {
          func_0x004c5ef4();
        } while (extraout_w10_00 != 0);
      }
      func_0x004c6028();
      (*extraout_x8_01)();
      func_0x004c6350();
    }
    func_0x004c619c();
  }
  func_0x004c5e9c(uStack_d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004c6350();
    func_0x004c619c();
    func_0x004c5fd0();
    return;
  }
  return;
}



/* Entry: 004c3458; end: 004c352b;  */

void FUN_004c3458(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  long unaff_x21;
  long lVar1;
  undefined8 uStack_78;
  undefined8 uStack_48;
  
  func_0x004c5f04();
  if (extraout_x9 != 0) {
    func_0x004c6174();
    FUN_0045cc3c();
    func_0x004c64d4();
    func_0x004c6330();
    lVar1 = *(long *)(unaff_x21 + 0x70);
    func_0x004c6238(0x4c5e88);
    func_0x004c6450();
    func_0x004c5ee8(uStack_78);
    func_0x004c603c();
    if (lVar1 == 0) {
      func_0x004c6184();
      if (extraout_x8 != 0) {
        do {
          func_0x004c5ef4();
        } while (extraout_w10 != 0);
      }
      func_0x004c6028();
      (*extraout_x8_00)();
      func_0x004c6350();
    }
    func_0x004c619c();
  }
  func_0x004c5e9c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004c6350();
    func_0x004c619c();
    func_0x004c5fd0();
    return;
  }
  return;
}



/* Entry: 004c352c; end: 004c35cb;  */

void FUN_004c352c(void)

{
  return;
}



/* Entry: 004c35cc; end: 004c367b;  */

void FUN_004c35cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  byte bStack_28;
  
  FUN_004c735c(auStack_40);
  if ((bStack_28 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if (*(char *)(param_4 + 3) == '\x01') {
      uVar1 = *param_4;
      param_1[1] = param_4[1];
      *param_1 = uVar1;
      param_1[2] = param_4[2];
      param_4[1] = 0;
      param_4[2] = 0;
      *param_4 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_004575b8(&uStack_58,auStack_40);
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[2] = uStack_48;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x004c63ac();
  }
  FUN_00457530(auStack_40);
  return;
}



/* Entry: 004c367c; end: 004c372b;  */

undefined8 * FUN_004c367c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  param_1[0xf] = &PTR_FUN_009ed978;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_009ed950;
  FUN_0046211c(param_1,&PTR_PTR_009ed990,param_1 + 2);
  *param_1 = &PTR_FUN_009ed950;
  param_1[0xf] = &PTR_FUN_009ed978;
  FUN_004c38bc(param_1 + 2,param_2,param_3 | 8);
  return param_1;
}



/* Entry: 004c372c; end: 004c3857;  */

long * FUN_004c372c(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_40 [15];
  char cStack_31;
  
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b(&cStack_31,param_1,1);
  if (cStack_31 == '\x01') {
    __ZNKSt3__18ios_base6getlocEv(auStack_40,(long)param_1 + *(long *)(*param_1 + -0x18));
    FUN_00462954(auStack_40);
    func_0x004c645c();
    while( true ) {
      uVar1 = (uint)*(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
      FUN_004c3934();
      if (uVar1 == 0xffffffff) break;
      if (((uVar1 >> 7 & 1) != 0) ||
         ((*(uint *)(*(long *)(unaff_x20 + 0x10) + (ulong)(uVar1 & 0x7f) * 4) >> 0xe & 1) == 0)) {
        uVar2 = 0;
        goto LAB_004c37d0;
      }
      func_0x004c3954(*(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28));
    }
    uVar2 = 2;
LAB_004c37d0:
    func_0x00462960((long)param_1 + *(long *)(*param_1 + -0x18),uVar2);
  }
  return param_1;
}



/* Entry: 004c3858; end: 004c3887;  */

long FUN_004c3858(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_004c397c(param_1,&PTR_PTR_009ed988);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(lVar1 + 0x78);
  return param_1;
}



/* Entry: 004c3888; end: 004c389b;  */

void FUN_004c3888(void)

{
  FUN_004c3858();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c389c; end: 004c38bb;  */

long FUN_004c389c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar2 = lVar1;
  FUN_004c397c(lVar1,&PTR_PTR_009ed988);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(lVar2 + 0x78);
  return lVar1;
}



/* Entry: 004c38bc; end: 004c3933;  */

undefined8 * FUN_004c38bc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev();
  *puVar1 = &PTR_FUN_009e5de0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_3;
  func_0x00479c88();
  return param_1;
}



/* Entry: 004c3934; end: 004c397b;  */

long * FUN_004c3934(long *param_1)

{
  if ((byte *)param_1[3] != (byte *)param_1[4]) {
    return (long *)(ulong)*(byte *)param_1[3];
  }
                    /* WARNING: Could not recover jumptable at 0x004c3950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return param_1;
}



/* Entry: 004c397c; end: 004c3a57;  */

void FUN_004c397c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_00462628(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00779c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev_00998a58)(param_1,param_2 + 1);
  return;
}



/* Entry: 004c3a58; end: 004c3ac7;  */

void FUN_004c3a58(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_78 [72];
  
  lVar2 = *(long *)(param_2 + 8);
  func_0x004c6368(*param_1);
  func_0x004bf984();
  func_0x004c6358();
  func_0x004c60b8();
  uVar1 = 0x12;
  if (lVar2 != 0) {
    uVar1 = 0x13;
  }
  func_0x004bf9b8(auStack_78,2,uVar1);
  func_0x004c5f84();
  return;
}



/* Entry: 004c3ac8; end: 004c3ae7;  */

void FUN_004c3ac8(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_004c3ae8();
  }
  return;
}



/* Entry: 004c3ae8; end: 004c3b0b;  */

long FUN_004c3ae8(long param_1)

{
  long lStack_28;
  
  FUN_0040d974(param_1 + 0x18);
  lStack_28 = param_1;
  FUN_0040d95c(&lStack_28);
  return param_1;
}



/* Entry: 004c3b0c; end: 004c3b2b;  */

void FUN_004c3b0c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x004c3f30();
  }
  return;
}



/* Entry: 004c3b2c; end: 004c3b5f;  */

long FUN_004c3b2c(long param_1)

{
  long lStack_28;
  
  FUN_004c3b0c(param_1 + 0x70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x50);
  FUN_004c3ac8(param_1 + 0x18);
  lStack_28 = param_1;
  FUN_0040d95c(&lStack_28);
  return param_1;
}



/* Entry: 004c3b60; end: 004c3b7f;  */

void FUN_004c3b60(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_004d2bec();
  }
  return;
}


