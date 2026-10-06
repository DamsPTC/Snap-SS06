/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0dda18; end: 10a0dda27;  */

void FUN_10a0dda18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a0dda20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a0dda28; end: 10a0ddbf7;  */

void FUN_10a0dda28(void)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)lRam00000001137e9630;
  lVar1 = lRam00000001137e9620;
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    lRam00000001137e9620 = lVar1;
    __ZdlPv();
    lVar1 = lRam00000001137e9620;
  }
  lRam00000001137e9620 = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0ddbf8; end: 10a0dde83;  */

undefined8
FUN_10a0ddbf8(undefined8 *param_1,long param_2,ulong param_3,long *param_4,int param_5,long param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  long *plVar4;
  long alStack_98 [2];
  char cStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  char acStack_60 [32];
  
  acStack_60[0] = '\0';
  acStack_60[1] = '\0';
  acStack_60[2] = '\0';
  acStack_60[3] = '\0';
  acStack_60[4] = '\0';
  acStack_60[5] = '\0';
  acStack_60[6] = '\0';
  acStack_60[7] = '\0';
  acStack_60[8] = '\0';
  acStack_60[9] = '\0';
  acStack_60[10] = '\0';
  acStack_60[0xb] = '\0';
  acStack_60[0xc] = '\0';
  acStack_60[0xd] = '\0';
  acStack_60[0xe] = '\0';
  acStack_60[0xf] = '\0';
  acStack_60[0x10] = '\0';
  acStack_60[0x11] = '\0';
  acStack_60[0x12] = '\0';
  acStack_60[0x13] = '\0';
  acStack_60[0x14] = '\0';
  acStack_60[0x15] = '\0';
  acStack_60[0x16] = '\0';
  acStack_60[0x17] = '\0';
  acStack_60[0x18] = '\0';
  acStack_60[0x19] = '\0';
  acStack_60[0x1a] = '\0';
  acStack_60[0x1b] = '\0';
  acStack_60[0x1c] = '\0';
  acStack_60[0x1d] = '\0';
  acStack_60[0x1e] = '\0';
  acStack_60[0x1f] = -0x80;
  plVar4 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar4 = param_4;
  }
  FUN_10a0a87b8(param_3,plVar4,acStack_60);
  if ((param_3 & 1) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_5 == 0) {
      return 0;
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (alStack_98,&DAT_10f638984,param_4);
    plVar4 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar4,&UNK_10f6389a3,0x15);
    uStack_78 = plVar4[1];
    ppuStack_80 = (undefined8 **)*plVar4;
    uStack_70 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar1 = uStack_78;
    pppuVar2 = (undefined8 ***)ppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
      pppuVar2 = &ppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar2,uVar1);
    if ((long)uStack_70 < 0) {
      __ZdlPv(ppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
    uVar1 = *(ulong *)(param_6 + 8);
    if (-1 < (char)*(byte *)(param_6 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_6 + 0x17);
    }
    if (uVar1 != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppuStack_80,&UNK_10f5822ff,param_6);
      uVar1 = uStack_78;
      pppuVar2 = (undefined8 ***)ppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar1 = uStack_70 >> 0x38;
        pppuVar2 = &ppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppuVar2,uVar1);
      if ((long)uStack_70 < 0) {
        __ZdlPv(ppuStack_80);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&UNK_10f58b966,2);
  }
  else {
    pcVar3 = acStack_60;
    func_0x00010937c560();
    if (*pcVar3 == '\x06') {
      func_0x0001094e5754();
      *param_1 = ppuStack_80;
      return 1;
    }
    if (param_2 == 0) {
      return 0;
    }
    if (param_5 == 0) {
      return 0;
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (alStack_98,&DAT_10f638984,param_4);
    plVar4 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar4,&UNK_10f639ecd,0x26);
    uStack_78 = plVar4[1];
    ppuStack_80 = (undefined8 **)*plVar4;
    uStack_70 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar1 = uStack_78;
    pppuVar2 = (undefined8 ***)ppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
      pppuVar2 = &ppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar2,uVar1);
    if ((long)uStack_70 < 0) {
      __ZdlPv(ppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  }
  return 0;
}



/* Entry: 10a0dde84; end: 10a0de00b;  */

void FUN_10a0dde84(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    cVar7 = *(char *)((long)param_2 + 0x17);
    uVar10 = (ulong)cVar7;
    uVar2 = uVar10;
    if ((long)uVar10 < 0) {
      uVar2 = param_2[1];
    }
    if (uVar2 <= uVar12) {
      return;
    }
    plVar1 = (long *)*param_2;
    if (-1 < cVar7) {
      plVar1 = param_2;
    }
    if (*(char *)((long)plVar1 + uVar12) == '+') {
      cVar7 = ' ';
LAB_10a0ddf30:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(int)cVar7);
      uVar13 = uVar12;
    }
    else {
      uVar11 = param_2[1];
      uVar2 = uVar11;
      if (-1 < cVar7) {
        uVar2 = uVar10;
      }
      if (uVar2 < uVar12) goto LAB_10a0ddfe8;
      if (*(char *)((long)plVar1 + uVar12) != '%') {
        if (-1 < cVar7) {
LAB_10a0ddf20:
          uVar11 = uVar10;
        }
LAB_10a0ddf24:
        if (uVar12 <= uVar11) {
          cVar7 = *(char *)((long)plVar1 + uVar12);
          goto LAB_10a0ddf30;
        }
        goto LAB_10a0ddfe8;
      }
      uVar13 = uVar12 + 2;
      if (cVar7 < '\0') {
        uVar10 = uVar11;
        if (uVar11 <= uVar13) goto LAB_10a0ddf24;
      }
      else if (uVar10 <= uVar13) goto LAB_10a0ddf20;
      if (uVar10 < uVar12 + 1) {
LAB_10a0ddfe8:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0ddfec);
        (*pcVar6)();
      }
      bVar3 = *(byte *)((long)plVar1 + uVar12 + 1);
      uVar4 = bVar3 - 0x30;
      uVar9 = (uint)bVar3;
      uVar5 = uVar9 - 0x37;
      if (5 < uVar9 - 0x41) {
        uVar5 = 0;
      }
      if (bVar3 - 0x61 < 6) {
        uVar5 = uVar9 - 0x57;
      }
      if (9 < uVar4) {
        uVar4 = uVar5;
      }
      if (uVar2 < uVar13) goto LAB_10a0ddfe8;
      bVar3 = *(byte *)((long)plVar1 + uVar13);
      uVar9 = bVar3 - 0x30;
      uVar8 = (uint)bVar3;
      uVar5 = uVar8 - 0x37;
      if (5 < uVar8 - 0x41) {
        uVar5 = 0;
      }
      if (bVar3 - 0x61 < 6) {
        uVar5 = uVar8 - 0x57;
      }
      if (9 < uVar9) {
        uVar9 = uVar5;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(int)(char)((byte)uVar9 | (byte)(uVar4 << 4)));
    }
    uVar12 = uVar13 + 1;
  } while( true );
}



/* Entry: 10a0de00c; end: 10a0de7ef;  */

/* WARNING: Removing unreachable block (ram,0x00010a0de628) */
/* WARNING: Removing unreachable block (ram,0x00010a0de4b0) */
/* WARNING: Removing unreachable block (ram,0x00010a0de60c) */
/* WARNING: Removing unreachable block (ram,0x00010a0de1d8) */
/* WARNING: Removing unreachable block (ram,0x00010a0de2ec) */
/* WARNING: Removing unreachable block (ram,0x00010a0de544) */
/* WARNING: Removing unreachable block (ram,0x00010a0de4c0) */
/* WARNING: Removing unreachable block (ram,0x00010a0de300) */
/* WARNING: Removing unreachable block (ram,0x00010a0de208) */

undefined8
FUN_10a0de00c(long *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5,
             int param_6,long param_7,int param_8,long *param_9)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  int iVar3;
  long *plVar4;
  undefined8 *****pppppuVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 ****ppppuStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined1 auStack_228 [264];
  undefined8 auStack_120 [2];
  char cStack_109;
  undefined8 auStack_108 [3];
  undefined8 ****ppppuStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if ((((param_9 == (long *)0x0) || (*param_9 == 0)) || (param_9[1] == 0)) || (param_9[2] == 0)) {
    if (param_2 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,&UNK_10f639ef4,0x17);
    }
    uVar10 = 0;
  }
  else {
    if (param_6 == 0) {
      param_2 = param_3;
    }
    param_1[1] = *param_1;
    ppuStack_b8 = (undefined8 ***)0x0;
    ppuStack_b0 = (undefined8 ***)0x0;
    uStack_a8 = 0;
    FUN_10a0b4ec0(&ppuStack_b8,param_5);
    func_0x000107c2b054(&ppppuStack_240,&DAT_10f62a9de);
    FUN_10a059fa0(&ppuStack_b8,&ppppuStack_240);
    if ((long)uStack_230 < 0) {
      __ZdlPv(ppppuStack_240);
    }
    if (((param_9[1] != 0) && (*param_9 != 0)) && (ppuStack_b0 != ppuStack_b8)) {
      lVar11 = 0;
      uVar12 = 0;
      do {
        pcVar9 = (code *)param_9[1];
        puVar6 = (undefined8 *)((long)ppuStack_b8 + lVar11);
        lVar7 = (long)*(char *)((long)puVar6 + 0x17);
        if (lVar7 < 0) {
          lVar7 = puVar6[1];
          if (lVar7 == 0) goto LAB_10a0de120;
          puVar8 = (undefined8 *)*puVar6;
LAB_10a0de0fc:
          if (*(char *)((long)puVar8 + lVar7 + -1) == '/') {
            FUN_10a0b4df8(&ppppuStack_a0,puVar6,param_4);
          }
          else {
            plVar4 = &lStack_80;
            func_0x000107c2b054(plVar4,"/");
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm();
            uStack_238 = plVar4[1];
            ppppuStack_240 = (undefined8 ****)*plVar4;
            uStack_230 = plVar4[2];
            plVar4[1] = 0;
            plVar4[2] = 0;
            *plVar4 = 0;
            uVar1 = param_4[1];
            puVar6 = (undefined8 *)*param_4;
            if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
              uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
              puVar6 = param_4;
            }
            pppppuVar5 = &ppppuStack_240;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppuVar5,puVar6,uVar1);
            pppuStack_98 = pppppuVar5[1];
            ppppuStack_a0 = *pppppuVar5;
            pppuStack_90 = pppppuVar5[2];
            pppppuVar5[1] = (undefined8 ****)0x0;
            pppppuVar5[2] = (undefined8 ****)0x0;
            *pppppuVar5 = (undefined8 ****)0x0;
            if ((long)uStack_230 < 0) {
              __ZdlPv(ppppuStack_240);
            }
          }
        }
        else {
          puVar8 = puVar6;
          if (*(char *)((long)puVar6 + 0x17) != '\0') goto LAB_10a0de0fc;
LAB_10a0de120:
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            func_0x000107c3192c(&ppppuStack_a0,*param_4,param_4[1]);
          }
          else {
            pppuStack_98 = (undefined8 ***)param_4[1];
            ppppuStack_a0 = (undefined8 ****)*param_4;
            pppuStack_90 = (undefined8 ***)param_4[2];
          }
        }
        (*pcVar9)(&uStack_d0,&ppppuStack_a0,param_9[4]);
        puVar6 = &uStack_d0;
        (*(code *)*param_9)(puVar6,param_9[4]);
        iVar3 = (int)uStack_c0._7_1_;
        if (((ulong)puVar6 & 1) != 0) {
          lVar11 = lStack_c8;
          if (-1 < iVar3) {
            lVar11 = (long)iVar3;
          }
          if (lVar11 == 0) goto LAB_10a0de268;
          uVar12 = param_4[1];
          if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
            uVar12 = (ulong)*(byte *)((long)param_4 + 0x17);
          }
          if (uVar12 == 0) goto LAB_10a0de268;
          lStack_80 = 0;
          lStack_78 = 0;
          lStack_70 = 0;
          ppppuStack_a0 = (undefined8 *****)0x0;
          pppuStack_98 = (undefined8 ****)0x0;
          pppuStack_90 = (undefined8 ****)0x0;
          plVar4 = &lStack_80;
          (*(code *)param_9[2])(plVar4,&ppppuStack_a0,&uStack_d0,param_9[4]);
          if (((ulong)plVar4 & 1) == 0) {
            if (param_2 != 0) {
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_120,&UNK_10f639f1e,&uStack_d0);
              FUN_10a012db0(auStack_108,auStack_120,&UNK_10f48d213);
              ppppuVar2 = (undefined8 ****)pppuStack_98;
              pppppuVar5 = (undefined8 *****)ppppuStack_a0;
              if (-1 < (long)pppuStack_90) {
                ppppuVar2 = (undefined8 ****)((ulong)pppuStack_90 >> 0x38);
                pppppuVar5 = &ppppuStack_a0;
              }
              puVar6 = auStack_108;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (puVar6,pppppuVar5,ppppuVar2);
              uStack_e8 = puVar6[1];
              ppppuStack_f0 = (undefined8 ****)*puVar6;
              uStack_e0 = puVar6[2];
              puVar6[1] = 0;
              puVar6[2] = 0;
              *puVar6 = 0;
              FUN_10a012db0(&ppppuStack_240,&ppppuStack_f0,&DAT_10f68f57e);
              uVar12 = uStack_238;
              pppppuVar5 = (undefined8 *****)ppppuStack_240;
              if (-1 < (long)uStack_230) {
                uVar12 = uStack_230 >> 0x38;
                pppppuVar5 = &ppppuStack_240;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_2,pppppuVar5,uVar12);
              if ((long)uStack_230 < 0) {
                __ZdlPv(ppppuStack_240);
              }
              if (cStack_109 < '\0') {
                __ZdlPv(auStack_120[0]);
              }
            }
LAB_10a0de61c:
            uVar10 = 0;
          }
          else {
            if (lStack_78 == lStack_80) {
              if (param_2 != 0) {
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&ppppuStack_f0,&UNK_10f637077,&uStack_d0);
                FUN_10a012db0(&ppppuStack_240,&ppppuStack_f0,&DAT_10f68f57e);
                uVar12 = uStack_238;
                pppppuVar5 = (undefined8 *****)ppppuStack_240;
                if (-1 < (long)uStack_230) {
                  uVar12 = uStack_230 >> 0x38;
                  pppppuVar5 = &ppppuStack_240;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (param_2,pppppuVar5,uVar12);
                if ((long)uStack_230 < 0) {
                  __ZdlPv(ppppuStack_240);
                }
              }
              goto LAB_10a0de61c;
            }
            if ((param_8 != 0) && (lStack_78 - lStack_80 != param_7)) {
              FUN_109febc44(&ppppuStack_240);
              FUN_10a002568(&uStack_230,&UNK_10f639f35,0x15);
              FUN_10a002568();
              FUN_10a002568();
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
              FUN_10a002568();
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
              FUN_10a0b4ae4();
              if (param_2 != 0) {
                func_0x00010a002480(&ppppuStack_f0,auStack_228,auStack_108);
                uVar12 = uStack_e8;
                pppppuVar5 = (undefined8 *****)ppppuStack_f0;
                if (-1 < (long)uStack_e0) {
                  uVar12 = uStack_e0 >> 0x38;
                  pppppuVar5 = &ppppuStack_f0;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (param_2,pppppuVar5,uVar12);
              }
              func_0x000105673d7c(&ppppuStack_240);
              goto LAB_10a0de61c;
            }
            lVar13 = param_1[1];
            lVar7 = *param_1;
            *param_1 = lStack_80;
            param_1[1] = lStack_78;
            lVar11 = param_1[2];
            param_1[2] = lStack_70;
            uVar10 = 1;
            lStack_80 = lVar7;
            lStack_78 = lVar13;
            lStack_70 = lVar11;
          }
          if (lStack_80 != 0) {
            lStack_78 = lStack_80;
            __ZdlPv();
          }
          goto LAB_10a0de2f8;
        }
        if (iVar3 < 0) {
          __ZdlPv(uStack_d0);
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x18;
      } while (uVar12 < (ulong)(((long)ppuStack_b0 - (long)ppuStack_b8 >> 3) * -0x5555555555555555))
      ;
    }
    uStack_d0 = 0;
    lStack_c8 = 0;
    uStack_c0 = 0;
LAB_10a0de268:
    uVar10 = 0;
    if (param_2 != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&lStack_80,&UNK_10f639f0c,param_4);
      plVar4 = &lStack_80;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f57e,1);
      uStack_238 = plVar4[1];
      ppppuStack_240 = (undefined8 ****)*plVar4;
      uStack_230 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar12 = uStack_238;
      pppppuVar5 = (undefined8 *****)ppppuStack_240;
      if (-1 < (long)uStack_230) {
        uVar12 = uStack_230 >> 0x38;
        pppppuVar5 = &ppppuStack_240;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppppuVar5,uVar12);
      if ((long)uStack_230 < 0) {
        __ZdlPv(ppppuStack_240);
      }
      uVar10 = 0;
    }
LAB_10a0de2f8:
    ppppuStack_240 = (undefined8 ****)&ppuStack_b8;
    FUN_10a0426d8(&ppppuStack_240);
  }
  return uVar10;
}



/* Entry: 10a0de7f0; end: 10a0de957;  */

long * FUN_10a0de7f0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar10 = param_1[1] - *param_1;
  uVar7 = (lVar10 >> 3) * 0xf83e0f83e0f83e1 + 1;
  if (0xf83e0f83e0f83e < uVar7) {
    FUN_10a0dea40();
LAB_10a0de954:
    func_0x000109ffded8();
    lVar5 = param_2[1];
    lVar10 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar5;
    *param_1 = lVar10;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    lVar10 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar10;
    param_1[5] = param_2[5];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    lVar5 = param_2[7];
    lVar10 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = lVar5;
    param_1[6] = lVar10;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[6] = 0;
    FUN_10a0c9da0(param_1 + 9,param_2 + 9);
    param_1[0x18] = param_2[0x18];
    plVar4 = param_2 + 0x19;
    lVar10 = *plVar4;
    plVar6 = param_1 + 0x19;
    *plVar6 = lVar10;
    lVar5 = param_2[0x1a];
    param_1[0x1a] = lVar5;
    if (lVar5 == 0) {
      param_1[0x18] = (long)plVar6;
    }
    else {
      *(long **)(lVar10 + 0x10) = plVar6;
      param_2[0x18] = (long)plVar4;
      *plVar4 = 0;
      param_2[0x1a] = 0;
    }
    lVar5 = param_2[0x1c];
    lVar10 = param_2[0x1b];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = lVar5;
    param_1[0x1b] = lVar10;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1b] = 0;
    lVar5 = param_2[0x1f];
    lVar10 = param_2[0x1e];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = lVar5;
    param_1[0x1e] = lVar10;
    param_2[0x1f] = 0;
    param_2[0x20] = 0;
    param_2[0x1e] = 0;
    return param_1;
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar5 * 0x1f07c1f07c1f07c2;
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar8 = uVar7;
  }
  if (0x7c1f07c1f07c1e < (ulong)(lVar5 * 0xf83e0f83e0f83e1)) {
    uVar8 = 0xf83e0f83e0f83e;
  }
  plStack_58 = param_1;
  if (uVar8 == 0) {
    lVar5 = 0;
  }
  else {
    if (0xf83e0f83e0f83e < uVar8) goto LAB_10a0de954;
    lVar5 = uVar8 * 0x108;
    __Znwm();
  }
  lVar10 = lVar5 + lVar10;
  FUN_10a0de958(lVar10,param_2);
  lVar9 = *param_1;
  lVar2 = param_1[1];
  lVar1 = lVar10 + (lVar9 - lVar2);
  lVar3 = lVar1;
  lVar11 = lVar9;
  if (lVar2 != lVar9) {
    do {
      FUN_10a0de958(lVar3,lVar11);
      lVar11 = lVar11 + 0x108;
      lVar3 = lVar3 + 0x108;
    } while (lVar11 != lVar2);
    do {
      func_0x00010a0cd6bc(lVar9);
      lVar9 = lVar9 + 0x108;
    } while (lVar9 != lVar2);
    lVar9 = *param_1;
  }
  *param_1 = lVar1;
  param_1[1] = lVar10 + 0x108;
  lStack_60 = param_1[2];
  param_1[2] = lVar5 + uVar8 * 0x108;
  lStack_78 = lVar9;
  lStack_70 = lVar9;
  lStack_68 = lVar9;
  FUN_10a0dea54(&lStack_78);
  return (long *)(lVar10 + 0x108);
}



/* Entry: 10a0de958; end: 10a0dea3f;  */

undefined8 * FUN_10a0de958(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  FUN_10a0c9da0(param_1 + 9,param_2 + 9);
  param_1[0x18] = param_2[0x18];
  plVar1 = param_2 + 0x19;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x19;
  *plVar2 = lVar3;
  lVar4 = param_2[0x1a];
  param_1[0x1a] = lVar4;
  if (lVar4 == 0) {
    param_1[0x18] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x18] = plVar1;
    *plVar1 = 0;
    param_2[0x1a] = 0;
  }
  uVar6 = param_2[0x1c];
  uVar5 = param_2[0x1b];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar6;
  param_1[0x1b] = uVar5;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1b] = 0;
  uVar6 = param_2[0x1f];
  uVar5 = param_2[0x1e];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar6;
  param_1[0x1e] = uVar5;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1e] = 0;
  return param_1;
}



/* Entry: 10a0dea40; end: 10a0dea53;  */

long * FUN_10a0dea40(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x108;
    func_0x00010a0cd6bc();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a0dea54; end: 10a0dea9f;  */

long * FUN_10a0dea54(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x108;
    func_0x00010a0cd6bc();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0deaa0; end: 10a0ded2f;  */

undefined8
FUN_10a0deaa0(undefined4 *param_1,long param_2,ulong param_3,long *param_4,int param_5,long param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  byte *pbVar3;
  long *plVar4;
  long alStack_98 [2];
  char cStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  byte abStack_60 [32];
  
  abStack_60[0] = 0;
  abStack_60[1] = 0;
  abStack_60[2] = 0;
  abStack_60[3] = 0;
  abStack_60[4] = 0;
  abStack_60[5] = 0;
  abStack_60[6] = 0;
  abStack_60[7] = 0;
  abStack_60[8] = 0;
  abStack_60[9] = 0;
  abStack_60[10] = 0;
  abStack_60[0xb] = 0;
  abStack_60[0xc] = 0;
  abStack_60[0xd] = 0;
  abStack_60[0xe] = 0;
  abStack_60[0xf] = 0;
  abStack_60[0x10] = 0;
  abStack_60[0x11] = 0;
  abStack_60[0x12] = 0;
  abStack_60[0x13] = 0;
  abStack_60[0x14] = 0;
  abStack_60[0x15] = 0;
  abStack_60[0x16] = 0;
  abStack_60[0x17] = 0;
  abStack_60[0x18] = 0;
  abStack_60[0x19] = 0;
  abStack_60[0x1a] = 0;
  abStack_60[0x1b] = 0;
  abStack_60[0x1c] = 0;
  abStack_60[0x1d] = 0;
  abStack_60[0x1e] = 0;
  abStack_60[0x1f] = 0x80;
  plVar4 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar4 = param_4;
  }
  FUN_10a0a87b8(param_3,plVar4,abStack_60);
  if ((param_3 & 1) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_5 == 0) {
      return 0;
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (alStack_98,&DAT_10f638984,param_4);
    plVar4 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar4,&UNK_10f6389a3,0x15);
    uStack_78 = plVar4[1];
    ppuStack_80 = (undefined8 **)*plVar4;
    uStack_70 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar1 = uStack_78;
    pppuVar2 = (undefined8 ***)ppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
      pppuVar2 = &ppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar2,uVar1);
    if ((long)uStack_70 < 0) {
      __ZdlPv(ppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
    uVar1 = *(ulong *)(param_6 + 8);
    if (-1 < (char)*(byte *)(param_6 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_6 + 0x17);
    }
    if (uVar1 != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppuStack_80,&UNK_10f5822ff,param_6);
      uVar1 = uStack_78;
      pppuVar2 = (undefined8 ***)ppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar1 = uStack_70 >> 0x38;
        pppuVar2 = &ppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppuVar2,uVar1);
      if ((long)uStack_70 < 0) {
        __ZdlPv(ppuStack_80);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&UNK_10f58b966,2);
  }
  else {
    pbVar3 = abStack_60;
    func_0x00010937c560();
    if (*pbVar3 - 5 < 2) {
      func_0x00010950694c();
      *param_1 = ppuStack_80._0_4_;
      return 1;
    }
    if (param_2 == 0) {
      return 0;
    }
    if (param_5 == 0) {
      return 0;
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (alStack_98,&DAT_10f638984,param_4);
    plVar4 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar4,&UNK_10f639fe0,0x23);
    uStack_78 = plVar4[1];
    ppuStack_80 = (undefined8 **)*plVar4;
    uStack_70 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar1 = uStack_78;
    pppuVar2 = (undefined8 ***)ppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
      pppuVar2 = &ppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar2,uVar1);
    if ((long)uStack_70 < 0) {
      __ZdlPv(ppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  }
  return 0;
}



/* Entry: 10a0ded30; end: 10a0dee97;  */

long * FUN_10a0ded30(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar10 = param_1[1] - *param_1;
  uVar7 = (lVar10 >> 3) * 0xf83e0f83e0f83e1 + 1;
  if (0xf83e0f83e0f83e < uVar7) {
    FUN_10a0def68();
LAB_10a0dee94:
    func_0x000109ffded8();
    lVar5 = param_2[1];
    lVar10 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar5;
    *param_1 = lVar10;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    lVar5 = param_2[4];
    lVar10 = param_2[3];
    lVar9 = param_2[6];
    lVar11 = param_2[5];
    *(int *)(param_1 + 7) = (int)param_2[7];
    param_1[6] = lVar9;
    param_1[5] = lVar11;
    param_1[4] = lVar5;
    param_1[3] = lVar10;
    FUN_10a0c9da0(param_1 + 8,param_2 + 8);
    param_1[0x17] = param_2[0x17];
    plVar4 = param_2 + 0x18;
    lVar10 = *plVar4;
    plVar6 = param_1 + 0x18;
    *plVar6 = lVar10;
    lVar5 = param_2[0x19];
    param_1[0x19] = lVar5;
    if (lVar5 == 0) {
      param_1[0x17] = (long)plVar6;
    }
    else {
      *(long **)(lVar10 + 0x10) = plVar6;
      param_2[0x17] = (long)plVar4;
      *plVar4 = 0;
      param_2[0x19] = 0;
    }
    lVar5 = param_2[0x1b];
    lVar10 = param_2[0x1a];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = lVar5;
    param_1[0x1a] = lVar10;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1a] = 0;
    lVar5 = param_2[0x1e];
    lVar10 = param_2[0x1d];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = lVar5;
    param_1[0x1d] = lVar10;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x1d] = 0;
    *(char *)(param_1 + 0x20) = (char)param_2[0x20];
    return param_1;
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar5 * 0x1f07c1f07c1f07c2;
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar8 = uVar7;
  }
  if (0x7c1f07c1f07c1e < (ulong)(lVar5 * 0xf83e0f83e0f83e1)) {
    uVar8 = 0xf83e0f83e0f83e;
  }
  plStack_58 = param_1;
  if (uVar8 == 0) {
    lVar5 = 0;
  }
  else {
    if (0xf83e0f83e0f83e < uVar8) goto LAB_10a0dee94;
    lVar5 = uVar8 * 0x108;
    __Znwm();
  }
  lVar10 = lVar5 + lVar10;
  FUN_10a0dee98(lVar10,param_2);
  lVar9 = *param_1;
  lVar2 = param_1[1];
  lVar1 = lVar10 + (lVar9 - lVar2);
  lVar3 = lVar1;
  lVar11 = lVar9;
  if (lVar2 != lVar9) {
    do {
      FUN_10a0dee98(lVar3,lVar11);
      lVar11 = lVar11 + 0x108;
      lVar3 = lVar3 + 0x108;
    } while (lVar11 != lVar2);
    do {
      func_0x00010a0cd73c(lVar9);
      lVar9 = lVar9 + 0x108;
    } while (lVar9 != lVar2);
    lVar9 = *param_1;
  }
  *param_1 = lVar1;
  param_1[1] = lVar10 + 0x108;
  lStack_60 = param_1[2];
  param_1[2] = lVar5 + uVar8 * 0x108;
  lStack_78 = lVar9;
  lStack_70 = lVar9;
  lStack_68 = lVar9;
  FUN_10a0def7c(&lStack_78);
  return (long *)(lVar10 + 0x108);
}



/* Entry: 10a0dee98; end: 10a0def67;  */

undefined8 * FUN_10a0dee98(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  uVar8 = param_2[6];
  uVar7 = param_2[5];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[6] = uVar8;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  FUN_10a0c9da0(param_1 + 8,param_2 + 8);
  param_1[0x17] = param_2[0x17];
  plVar1 = param_2 + 0x18;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x18;
  *plVar2 = lVar3;
  lVar4 = param_2[0x19];
  param_1[0x19] = lVar4;
  if (lVar4 == 0) {
    param_1[0x17] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x17] = plVar1;
    *plVar1 = 0;
    param_2[0x19] = 0;
  }
  uVar6 = param_2[0x1b];
  uVar5 = param_2[0x1a];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar6;
  param_1[0x1a] = uVar5;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1a] = 0;
  uVar6 = param_2[0x1e];
  uVar5 = param_2[0x1d];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar6;
  param_1[0x1d] = uVar5;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 10a0def68; end: 10a0def7b;  */

long * FUN_10a0def68(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x108;
    func_0x00010a0cd73c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a0def7c; end: 10a0df16b;  */

long * FUN_10a0def7c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x108;
    func_0x00010a0cd73c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0df16c; end: 10a0df193;  */

undefined8 * FUN_10a0df16c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_109ffde64(&UNK_10f63805b);
  puVar1 = &UNK_10f63805b;
  FUN_109ffde64();
  puVar3 = (undefined8 *)(puVar1 + 8);
  puVar5 = (undefined8 *)*puVar3;
  puVar4 = puVar3;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      puVar2 = puVar5 + 4;
      FUN_10a003e3c(puVar2,param_2);
      if (-1 < (char)puVar2) {
        puVar4 = puVar5;
      }
      puVar5 = *(undefined8 **)((long)puVar5 + ((ulong)puVar2 >> 4 & 8));
    } while (puVar5 != (undefined8 *)0x0);
    if ((puVar4 != puVar3) && (FUN_10a003e3c(param_2,puVar4 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return puVar4;
    }
  }
  return puVar3;
}



/* Entry: 10a0df194; end: 10a0df20f;  */

long * FUN_10a0df194(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a0df210; end: 10a0df2c7;  */

undefined4 * FUN_10a0df210(long *param_1,uint param_2,uint param_3,long param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  double dVar13;
  undefined4 uStack_44;
  
  if (param_4 != 0) {
    switch(*(undefined4 *)((long)param_1 + 0x1c)) {
    case 1:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        uVar8 = 0;
        lVar10 = *(long *)*param_1;
        lVar9 = param_1[5];
        lVar3 = param_1[6];
        do {
          pcVar1 = (char *)(lVar10 + lVar9 * (ulong)param_2 + lVar3 + uVar8);
          if ((*(char **)(*param_1 + 8) <= pcVar1) || (cVar6 = *pcVar1, cVar6 < '\0')) {
            return (undefined4 *)0x0;
          }
          *(char *)(param_4 + uVar8) = cVar6;
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    case 2:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        uVar8 = 0;
        lVar10 = *(long *)*param_1;
        lVar9 = param_1[5];
        lVar3 = param_1[6];
        do {
          puVar2 = (undefined1 *)(lVar10 + lVar9 * (ulong)param_2 + lVar3 + uVar8);
          if (*(undefined1 **)(*param_1 + 8) <= puVar2) {
            return (undefined4 *)0x0;
          }
          *(undefined1 *)(param_4 + uVar8) = *puVar2;
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    case 3:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar8 = 0;
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar3 + lVar9)) ||
             (uVar5 = *(ushort *)(lVar3 + uVar8 * 2), 0xff < uVar5)) {
            return (undefined4 *)0x0;
          }
          *(char *)(param_4 + uVar8) = (char)uVar5;
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 2;
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    case 4:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar8 = 0;
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar3 + lVar9)) ||
             (uVar5 = *(ushort *)(lVar3 + uVar8 * 2), 0xff < uVar5)) {
            return (undefined4 *)0x0;
          }
          *(char *)(param_4 + uVar8) = (char)uVar5;
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 2;
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    case 5:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar8 = 0;
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar3 + lVar9)) ||
             (uVar11 = *(uint *)(lVar3 + uVar8 * 4), 0xff < uVar11)) {
            return (undefined4 *)0x0;
          }
          *(char *)(param_4 + uVar8) = (char)uVar11;
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 4;
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    case 6:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar8 = 0;
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar3 + lVar9)) ||
             (uVar11 = *(uint *)(lVar3 + uVar8 * 4), 0xff < uVar11)) {
            return (undefined4 *)0x0;
          }
          *(char *)(param_4 + uVar8) = (char)uVar11;
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 4;
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    case 7:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar8 = 0;
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar3 + lVar9)) ||
             (uVar12 = *(ulong *)(lVar3 + uVar8 * 8), 0xff < uVar12)) {
            return (undefined4 *)0x0;
          }
          *(char *)(param_4 + uVar8) = (char)uVar12;
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 8;
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    case 8:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar8 = 0;
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((*(ulong *)(*param_1 + 8) <= (ulong)(lVar3 + lVar9)) ||
             (uVar12 = *(ulong *)(lVar3 + uVar8 * 8), 0xff < uVar12)) {
            return (undefined4 *)0x0;
          }
          *(char *)(param_4 + uVar8) = (char)uVar12;
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 8;
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    case 9:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar8 = 0;
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar3 + lVar9)) {
            return (undefined4 *)0x0;
          }
          uStack_44 = *(undefined4 *)(lVar3 + uVar8 * 4);
          puVar7 = &uStack_44;
          FUN_10a0dfa78(puVar7,(char)param_1[4],param_4 + uVar8);
          if ((int)puVar7 == 0) {
            return puVar7;
          }
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 4;
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    case 10:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar8 = 0;
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar3 + lVar9)) {
            return (undefined4 *)0x0;
          }
          dVar13 = *(double *)(lVar3 + uVar8 * 8);
          if (((0x7fffffffffffffff < (ulong)dVar13 ||
               0x3fe < (long)ABS(dVar13) + 0xfff0000000000000U >> 0x35) &&
              0xffffffffffffe < (long)dVar13 - 1U) && ABS(dVar13) != 0.0) {
            return (undefined4 *)0x0;
          }
          if (255.0 <= dVar13) {
            return (undefined4 *)0x0;
          }
          if ((char)param_1[4] == '\x01') {
            if (1.0 < dVar13) {
              return (undefined4 *)0x0;
            }
            dVar13 = (double)(long)(dVar13 * 255.0 + 0.5);
          }
          *(char *)(param_4 + uVar8) = (char)(int)dVar13;
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 8;
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    case 0xb:
      param_3 = param_3 & 0xff;
      bVar4 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        uVar8 = 0;
        lVar10 = *(long *)*param_1;
        lVar9 = param_1[5];
        lVar3 = param_1[6];
        do {
          puVar2 = (undefined1 *)(lVar10 + lVar9 * (ulong)param_2 + lVar3 + uVar8);
          if (*(undefined1 **)(*param_1 + 8) <= puVar2) {
            return (undefined4 *)0x0;
          }
          *(undefined1 *)(param_4 + uVar8) = *puVar2;
          uVar8 = uVar8 + 1;
          bVar4 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar4;
          if (param_3 <= bVar4) {
            uVar11 = param_3;
          }
        } while (uVar8 < uVar11);
      }
      uVar11 = (uint)bVar4;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11,(ulong)(~uVar11 + param_3) + 1);
      }
      return (undefined4 *)0x1;
    }
  }
  return (undefined4 *)0x0;
}



/* Entry: 10a0df2c8; end: 10a0df7eb;  */

undefined8 FUN_10a0df2c8(long *param_1,ulong param_2,uint param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  bVar4 = *(byte *)(param_1 + 3);
  uVar8 = (uint)bVar4;
  if (param_3 <= bVar4) {
    uVar8 = param_3;
  }
  if (uVar8 != 0) {
    uVar6 = 0;
    lVar7 = *(long *)*param_1;
    lVar2 = param_1[5];
    lVar3 = param_1[6];
    do {
      pcVar1 = (char *)(lVar7 + lVar2 * (param_2 & 0xffffffff) + lVar3 + uVar6);
      if ((*(char **)(*param_1 + 8) <= pcVar1) || (cVar5 = *pcVar1, cVar5 < '\0')) {
        return 0;
      }
      *(char *)(param_4 + uVar6) = cVar5;
      uVar6 = uVar6 + 1;
      bVar4 = *(byte *)(param_1 + 3);
      uVar8 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar8 = param_3;
      }
    } while (uVar6 < uVar8);
  }
  uVar8 = (uint)bVar4;
  if (uVar8 < param_3) {
    _bzero(param_4 + (ulong)uVar8,(ulong)(~uVar8 + param_3) + 1);
  }
  return 1;
}



/* Entry: 10a0df7ec; end: 10a0df8cb;  */

void FUN_10a0df7ec(long *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uStack_44;
  
  bVar2 = *(byte *)(param_1 + 3);
  uVar4 = (uint)bVar2;
  if (param_3 <= bVar2) {
    uVar4 = param_3;
  }
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    lVar1 = *(long *)*param_1 + param_1[5] * (param_2 & 0xffffffff) + param_1[6];
    do {
      if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar1 + lVar5)) {
        return;
      }
      uStack_44 = *(undefined4 *)(lVar1 + uVar6 * 4);
      puVar3 = &uStack_44;
      FUN_10a0dfa78(puVar3,(char)param_1[4],param_4 + uVar6);
      if ((int)puVar3 == 0) {
        return;
      }
      uVar6 = uVar6 + 1;
      bVar2 = *(byte *)(param_1 + 3);
      uVar4 = (uint)bVar2;
      if (param_3 <= bVar2) {
        uVar4 = param_3;
      }
      lVar5 = lVar5 + 4;
    } while (uVar6 < uVar4);
  }
  uVar4 = (uint)bVar2;
  if (uVar4 < param_3) {
    _bzero(param_4 + (ulong)uVar4,(ulong)(~uVar4 + param_3) + 1);
  }
  return;
}



/* Entry: 10a0df8cc; end: 10a0dfa77;  */

undefined8 FUN_10a0df8cc(long *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  
  bVar2 = *(byte *)(param_1 + 3);
  uVar3 = (uint)bVar2;
  if (param_3 <= bVar2) {
    uVar3 = param_3;
  }
  if (uVar3 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    lVar1 = *(long *)*param_1 + param_1[5] * (param_2 & 0xffffffff) + param_1[6];
    do {
      if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar1 + lVar4)) {
        return 0;
      }
      dVar6 = *(double *)(lVar1 + uVar5 * 8);
      if (((0x7fffffffffffffff < (ulong)dVar6 ||
           0x3fe < (long)ABS(dVar6) + 0xfff0000000000000U >> 0x35) &&
          0xffffffffffffe < (long)dVar6 - 1U) && ABS(dVar6) != 0.0) {
        return 0;
      }
      if (255.0 <= dVar6) {
        return 0;
      }
      if ((char)param_1[4] == '\x01') {
        if (1.0 < dVar6) {
          return 0;
        }
        dVar6 = (double)(long)(dVar6 * 255.0 + 0.5);
      }
      *(char *)(param_4 + uVar5) = (char)(int)dVar6;
      uVar5 = uVar5 + 1;
      bVar2 = *(byte *)(param_1 + 3);
      uVar3 = (uint)bVar2;
      if (param_3 <= bVar2) {
        uVar3 = param_3;
      }
      lVar4 = lVar4 + 8;
    } while (uVar5 < uVar3);
  }
  uVar3 = (uint)bVar2;
  if (uVar3 < param_3) {
    _bzero(param_4 + (ulong)uVar3,(ulong)(~uVar3 + param_3) + 1);
  }
  return 1;
}



/* Entry: 10a0dfa78; end: 10a0dfbb3;  */

undefined8 FUN_10a0dfa78(float *param_1,int param_2,undefined1 *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  float fVar4;
  
  fVar4 = *param_1;
  bVar1 = false;
  bVar2 = false;
  if (((uint)fVar4 < 0x80000000 && (int)ABS(fVar4) - 0x800000U >> 0x18 < 0x7f ||
      (int)fVar4 - 1U < 0x7fffff) || ABS(fVar4) == 0.0) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < 255.0;
      bVar2 = false;
    }
  }
  if (bVar1 != bVar2) {
    if (param_2 == 0) {
      uVar3 = (undefined1)(int)fVar4;
    }
    else {
      if (1.0 < fVar4) {
        return 0;
      }
      uVar3 = (undefined1)(int)(fVar4 * 255.0 + 0.5);
    }
    *param_3 = uVar3;
    return 1;
  }
  return 0;
}



/* Entry: 10a0dfbb4; end: 10a0e00db;  */

undefined8 FUN_10a0dfbb4(long *param_1,ulong param_2,uint param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  bVar4 = *(byte *)(param_1 + 3);
  uVar7 = (uint)bVar4;
  if (param_3 <= bVar4) {
    uVar7 = param_3;
  }
  if (uVar7 != 0) {
    uVar5 = 0;
    lVar6 = *(long *)*param_1;
    lVar2 = param_1[5];
    lVar3 = param_1[6];
    do {
      puVar1 = (undefined1 *)(lVar6 + lVar2 * (param_2 & 0xffffffff) + lVar3 + uVar5);
      if (*(undefined1 **)(*param_1 + 8) <= puVar1) {
        return 0;
      }
      *(undefined1 *)(param_4 + uVar5) = *puVar1;
      uVar5 = uVar5 + 1;
      bVar4 = *(byte *)(param_1 + 3);
      uVar7 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar7 = param_3;
      }
    } while (uVar5 < uVar7);
  }
  uVar7 = (uint)bVar4;
  if (uVar7 < param_3) {
    _bzero(param_4 + (ulong)uVar7,(ulong)(~uVar7 + param_3) + 1);
  }
  return 1;
}



/* Entry: 10a0e00dc; end: 10a0e029b;  */

void FUN_10a0e00dc(long *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uStack_44;
  
  bVar2 = *(byte *)(param_1 + 3);
  uVar4 = (uint)bVar2;
  if (param_3 <= bVar2) {
    uVar4 = param_3;
  }
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    lVar1 = *(long *)*param_1 + param_1[5] * (param_2 & 0xffffffff) + param_1[6];
    do {
      if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar1 + lVar5)) {
        return;
      }
      uStack_44 = *(undefined4 *)(lVar1 + uVar6 * 4);
      puVar3 = &uStack_44;
      FUN_10a0e0334(puVar3,(char)param_1[4],param_4 + uVar6);
      if ((int)puVar3 == 0) {
        return;
      }
      uVar6 = uVar6 + 1;
      bVar2 = *(byte *)(param_1 + 3);
      uVar4 = (uint)bVar2;
      if (param_3 <= bVar2) {
        uVar4 = param_3;
      }
      lVar5 = lVar5 + 4;
    } while (uVar6 < uVar4);
  }
  uVar4 = (uint)bVar2;
  if (uVar4 < param_3) {
    _bzero(param_4 + (ulong)uVar4,(ulong)(~uVar4 + param_3) + 1);
  }
  return;
}



/* Entry: 10a0e029c; end: 10a0e0333;  */

undefined8 FUN_10a0e029c(long *param_1,ulong param_2,uint param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  bVar4 = *(byte *)(param_1 + 3);
  uVar7 = (uint)bVar4;
  if (param_3 <= bVar4) {
    uVar7 = param_3;
  }
  if (uVar7 != 0) {
    uVar5 = 0;
    lVar6 = *(long *)*param_1;
    lVar2 = param_1[5];
    lVar3 = param_1[6];
    do {
      puVar1 = (undefined1 *)(lVar6 + lVar2 * (param_2 & 0xffffffff) + lVar3 + uVar5);
      if (*(undefined1 **)(*param_1 + 8) <= puVar1) {
        return 0;
      }
      *(undefined1 *)(param_4 + uVar5) = *puVar1;
      uVar5 = uVar5 + 1;
      bVar4 = *(byte *)(param_1 + 3);
      uVar7 = (uint)bVar4;
      if (param_3 <= bVar4) {
        uVar7 = param_3;
      }
    } while (uVar5 < uVar7);
  }
  uVar7 = (uint)bVar4;
  if (uVar7 < param_3) {
    _bzero(param_4 + (ulong)uVar7,(ulong)(~uVar7 + param_3) + 1);
  }
  return 1;
}



/* Entry: 10a0e0334; end: 10a0e04e7;  */

undefined8 FUN_10a0e0334(float *param_1,int param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  float fVar3;
  
  fVar3 = *param_1;
  bVar1 = true;
  if ((fVar3 < 127.0) && (bVar1 = false, !NAN(fVar3))) {
    bVar1 = fVar3 < -128.0;
  }
  if (bVar1 || 0x7f7fffff < (uint)ABS(fVar3)) {
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = (undefined1)(int)fVar3;
  }
  else {
    if (1.0 < fVar3) {
      return 0;
    }
    if (fVar3 < 0.0) {
      return 0;
    }
    uVar2 = (undefined1)(int)(fVar3 * 127.0 + 0.5);
  }
  *param_3 = uVar2;
  return 1;
}



/* Entry: 10a0e04e8; end: 10a0e09df;  */

undefined8 FUN_10a0e04e8(undefined8 *param_1,ulong param_2,uint param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  byte bVar6;
  char cVar7;
  ulong uVar8;
  uint uVar9;
  
  bVar6 = *(byte *)(param_1 + 3);
  uVar9 = (uint)bVar6;
  if (param_3 <= bVar6) {
    uVar9 = param_3;
  }
  if (uVar9 != 0) {
    uVar8 = 0;
    lVar2 = param_1[5];
    lVar4 = param_1[6];
    lVar3 = *(long *)*param_1;
    pcVar5 = (char *)((long *)*param_1)[1];
    do {
      pcVar1 = (char *)(lVar3 + lVar2 * (param_2 & 0xffffffff) + lVar4 + uVar8);
      if ((pcVar5 <= pcVar1) || (cVar7 = *pcVar1, cVar7 < '\0')) {
        return 0;
      }
      *(short *)(param_4 + uVar8 * 2) = (short)cVar7;
      uVar8 = uVar8 + 1;
      bVar6 = *(byte *)(param_1 + 3);
      uVar9 = (uint)bVar6;
      if (param_3 <= bVar6) {
        uVar9 = param_3;
      }
    } while (uVar8 < uVar9);
  }
  uVar9 = (uint)bVar6;
  if (uVar9 < param_3) {
    _bzero(param_4 + (ulong)uVar9 * 2,(ulong)(~uVar9 + param_3) * 2 + 2);
  }
  return 1;
}



/* Entry: 10a0e09e0; end: 10a0e0ad3;  */

void FUN_10a0e09e0(long *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uStack_54;
  
  bVar2 = *(byte *)(param_1 + 3);
  uVar4 = (uint)bVar2;
  if (param_3 <= bVar2) {
    uVar4 = param_3;
  }
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    lVar1 = *(long *)*param_1 + param_1[5] * (param_2 & 0xffffffff) + param_1[6];
    lVar5 = param_4;
    do {
      if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar1 + lVar6)) {
        return;
      }
      uStack_54 = *(undefined4 *)(lVar1 + uVar7 * 4);
      puVar3 = &uStack_54;
      FUN_10a0e0c78(puVar3,(char)param_1[4],lVar5);
      if ((int)puVar3 == 0) {
        return;
      }
      uVar7 = uVar7 + 1;
      bVar2 = *(byte *)(param_1 + 3);
      uVar4 = (uint)bVar2;
      if (param_3 <= bVar2) {
        uVar4 = param_3;
      }
      lVar5 = lVar5 + 2;
      lVar6 = lVar6 + 4;
    } while (uVar7 < uVar4);
  }
  uVar4 = (uint)bVar2;
  if (uVar4 < param_3) {
    _bzero(param_4 + (ulong)uVar4 * 2,(ulong)(~uVar4 + param_3) * 2 + 2);
  }
  return;
}



/* Entry: 10a0e0ad4; end: 10a0e0c77;  */

undefined8 FUN_10a0e0ad4(undefined8 *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  
  bVar3 = *(byte *)(param_1 + 3);
  uVar4 = (uint)bVar3;
  if (param_3 <= bVar3) {
    uVar4 = param_3;
  }
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    uVar2 = ((long *)*param_1)[1];
    lVar1 = *(long *)*param_1 + param_1[5] * (param_2 & 0xffffffff) + param_1[6];
    do {
      if (uVar2 <= (ulong)(lVar1 + lVar5)) {
        return 0;
      }
      dVar7 = *(double *)(lVar1 + uVar6 * 8);
      if (((0x7fffffffffffffff < (ulong)dVar7 ||
           0x3fe < (long)ABS(dVar7) + 0xfff0000000000000U >> 0x35) &&
          0xffffffffffffe < (long)dVar7 - 1U) && ABS(dVar7) != 0.0) {
        return 0;
      }
      if (65535.0 <= dVar7) {
        return 0;
      }
      if (*(char *)(param_1 + 4) == '\x01') {
        if (1.0 < dVar7) {
          return 0;
        }
        dVar7 = (double)(long)(dVar7 * 65535.0 + 0.5);
      }
      *(short *)(param_4 + uVar6 * 2) = (short)(int)dVar7;
      uVar6 = uVar6 + 1;
      bVar3 = *(byte *)(param_1 + 3);
      uVar4 = (uint)bVar3;
      if (param_3 <= bVar3) {
        uVar4 = param_3;
      }
      lVar5 = lVar5 + 8;
    } while (uVar6 < uVar4);
  }
  uVar4 = (uint)bVar3;
  if (uVar4 < param_3) {
    _bzero(param_4 + (ulong)uVar4 * 2,(ulong)(~uVar4 + param_3) * 2 + 2);
  }
  return 1;
}



/* Entry: 10a0e0c78; end: 10a0e0dbf;  */

undefined8 FUN_10a0e0c78(float *param_1,int param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  float fVar3;
  
  uVar1 = 0;
  fVar3 = *param_1;
  if ((((uint)fVar3 < 0x80000000 && (int)ABS(fVar3) - 0x800000U >> 0x18 < 0x7f ||
       (int)fVar3 - 1U < 0x7fffff) || ABS(fVar3) == 0.0) && (fVar3 < 65535.0)) {
    if (param_2 == 0) {
      uVar2 = (undefined2)(int)fVar3;
    }
    else {
      if (1.0 < fVar3) {
        return 0;
      }
      uVar2 = (undefined2)(int)(fVar3 * 65535.0 + 0.5);
    }
    *param_3 = uVar2;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10a0e0dc0; end: 10a0e12b3;  */

undefined8 FUN_10a0e0dc0(undefined8 *param_1,ulong param_2,uint param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  
  bVar6 = *(byte *)(param_1 + 3);
  uVar8 = (uint)bVar6;
  if (param_3 <= bVar6) {
    uVar8 = param_3;
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    lVar2 = param_1[5];
    lVar4 = param_1[6];
    lVar3 = *(long *)*param_1;
    pcVar5 = (char *)((long *)*param_1)[1];
    do {
      pcVar1 = (char *)(lVar3 + lVar2 * (param_2 & 0xffffffff) + lVar4 + uVar7);
      if (pcVar5 <= pcVar1) {
        return 0;
      }
      *(short *)(param_4 + uVar7 * 2) = (short)*pcVar1;
      uVar7 = uVar7 + 1;
      bVar6 = *(byte *)(param_1 + 3);
      uVar8 = (uint)bVar6;
      if (param_3 <= bVar6) {
        uVar8 = param_3;
      }
    } while (uVar7 < uVar8);
  }
  uVar8 = (uint)bVar6;
  if (uVar8 < param_3) {
    _bzero(param_4 + (ulong)uVar8 * 2,(ulong)(~uVar8 + param_3) * 2 + 2);
  }
  return 1;
}



/* Entry: 10a0e12b4; end: 10a0e149b;  */

void FUN_10a0e12b4(long *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uStack_54;
  
  bVar2 = *(byte *)(param_1 + 3);
  uVar4 = (uint)bVar2;
  if (param_3 <= bVar2) {
    uVar4 = param_3;
  }
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    lVar1 = *(long *)*param_1 + param_1[5] * (param_2 & 0xffffffff) + param_1[6];
    lVar5 = param_4;
    do {
      if (*(ulong *)(*param_1 + 8) <= (ulong)(lVar1 + lVar6)) {
        return;
      }
      uStack_54 = *(undefined4 *)(lVar1 + uVar7 * 4);
      puVar3 = &uStack_54;
      FUN_10a0e1530(puVar3,(char)param_1[4],lVar5);
      if ((int)puVar3 == 0) {
        return;
      }
      uVar7 = uVar7 + 1;
      bVar2 = *(byte *)(param_1 + 3);
      uVar4 = (uint)bVar2;
      if (param_3 <= bVar2) {
        uVar4 = param_3;
      }
      lVar5 = lVar5 + 2;
      lVar6 = lVar6 + 4;
    } while (uVar7 < uVar4);
  }
  uVar4 = (uint)bVar2;
  if (uVar4 < param_3) {
    _bzero(param_4 + (ulong)uVar4 * 2,(ulong)(~uVar4 + param_3) * 2 + 2);
  }
  return;
}



/* Entry: 10a0e149c; end: 10a0e152f;  */

undefined8 FUN_10a0e149c(undefined8 *param_1,ulong param_2,uint param_3,long param_4)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  
  bVar6 = *(byte *)(param_1 + 3);
  uVar8 = (uint)bVar6;
  if (param_3 <= bVar6) {
    uVar8 = param_3;
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    lVar2 = param_1[5];
    lVar4 = param_1[6];
    lVar3 = *(long *)*param_1;
    pbVar5 = (byte *)((long *)*param_1)[1];
    do {
      pbVar1 = (byte *)(lVar3 + lVar2 * (param_2 & 0xffffffff) + lVar4 + uVar7);
      if (pbVar5 <= pbVar1) {
        return 0;
      }
      *(ushort *)(param_4 + uVar7 * 2) = (ushort)*pbVar1;
      uVar7 = uVar7 + 1;
      bVar6 = *(byte *)(param_1 + 3);
      uVar8 = (uint)bVar6;
      if (param_3 <= bVar6) {
        uVar8 = param_3;
      }
    } while (uVar7 < uVar8);
  }
  uVar8 = (uint)bVar6;
  if (uVar8 < param_3) {
    _bzero(param_4 + (ulong)uVar8 * 2,(ulong)(~uVar8 + param_3) * 2 + 2);
  }
  return 1;
}



/* Entry: 10a0e1530; end: 10a0e162b;  */

undefined8 FUN_10a0e1530(float *param_1,int param_2,undefined2 *param_3)

{
  bool bVar1;
  undefined2 uVar2;
  float fVar3;
  
  fVar3 = *param_1;
  bVar1 = true;
  if ((fVar3 < 32767.0) && (bVar1 = false, !NAN(fVar3))) {
    bVar1 = fVar3 < -32768.0;
  }
  if (bVar1 || 0x7f7fffff < (uint)ABS(fVar3)) {
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = (undefined2)(int)fVar3;
  }
  else {
    if (1.0 < fVar3) {
      return 0;
    }
    if (fVar3 < 0.0) {
      return 0;
    }
    uVar2 = (undefined2)(int)(fVar3 * 32767.0 + 0.5);
  }
  *param_3 = uVar2;
  return 1;
}



/* Entry: 10a0e162c; end: 10a0e172b;  */

undefined8 * FUN_10a0e162c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  lVar4 = *plVar1;
  plVar3 = param_1 + 1;
  *plVar3 = lVar4;
  lVar5 = param_2[2];
  param_1[2] = lVar5;
  if (lVar5 == 0) {
    *param_1 = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
  }
  uVar2 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[7] = param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  param_1[8] = param_2[8];
  plVar1 = param_2 + 9;
  lVar4 = *plVar1;
  plVar3 = param_1 + 9;
  *plVar3 = lVar4;
  lVar5 = param_2[10];
  param_1[10] = lVar5;
  if (lVar5 == 0) {
    param_1[8] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[8] = plVar1;
    *plVar1 = 0;
    param_2[10] = 0;
  }
  FUN_10a0c9da0(param_1 + 0xb,param_2 + 0xb);
  uVar6 = param_2[0x1b];
  uVar2 = param_2[0x1a];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar6;
  param_1[0x1a] = uVar2;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  uVar6 = param_2[0x1e];
  uVar2 = param_2[0x1d];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar6;
  param_1[0x1d] = uVar2;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1d] = 0;
  return param_1;
}



/* Entry: 10a0e172c; end: 10a0e173f;  */

undefined8 * FUN_10a0e172c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar6 = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[3] = uVar6;
  puVar1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uVar6 = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[6] = uVar6;
  puVar1[8] = param_2[8];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  puVar1[9] = param_2[9];
  plVar2 = param_2 + 10;
  lVar4 = *plVar2;
  plVar3 = puVar1 + 10;
  *plVar3 = lVar4;
  lVar5 = param_2[0xb];
  puVar1[0xb] = lVar5;
  if (lVar5 == 0) {
    puVar1[9] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[9] = plVar2;
    *plVar2 = 0;
    param_2[0xb] = 0;
  }
  FUN_10a0c9da0(puVar1 + 0xc,param_2 + 0xc);
  uVar7 = param_2[0x1c];
  uVar6 = param_2[0x1b];
  puVar1[0x1d] = param_2[0x1d];
  puVar1[0x1c] = uVar7;
  puVar1[0x1b] = uVar6;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  uVar7 = param_2[0x1f];
  uVar6 = param_2[0x1e];
  puVar1[0x20] = param_2[0x20];
  puVar1[0x1f] = uVar7;
  puVar1[0x1e] = uVar6;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1e] = 0;
  return puVar1;
}



/* Entry: 10a0e1740; end: 10a0e182f;  */

undefined8 * FUN_10a0e1740(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[8] = param_2[8];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  param_1[9] = param_2[9];
  plVar1 = param_2 + 10;
  lVar3 = *plVar1;
  plVar2 = param_1 + 10;
  *plVar2 = lVar3;
  lVar4 = param_2[0xb];
  param_1[0xb] = lVar4;
  if (lVar4 == 0) {
    param_1[9] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[9] = plVar1;
    *plVar1 = 0;
    param_2[0xb] = 0;
  }
  FUN_10a0c9da0(param_1 + 0xc,param_2 + 0xc);
  uVar6 = param_2[0x1c];
  uVar5 = param_2[0x1b];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar6;
  param_1[0x1b] = uVar5;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  uVar6 = param_2[0x1f];
  uVar5 = param_2[0x1e];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar6;
  param_1[0x1e] = uVar5;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1e] = 0;
  return param_1;
}



/* Entry: 10a0e1830; end: 10a0e1843;  */

long * FUN_10a0e1830(undefined8 param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  plVar4 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar5 = (long *)plVar4[2];
      bVar2 = (long *)*plVar5 != plVar4;
      plVar4 = plVar5;
    } while (bVar2);
  }
  else {
    do {
      plVar5 = plVar1;
      plVar1 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if ((long *)*plVar3 == param_2) {
    *plVar3 = (long)plVar5;
  }
  plVar3[2] = plVar3[2] + -1;
  FUN_10a04815c(plVar3[1],param_2);
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    __ZdlPv(param_2[4]);
  }
  __ZdlPv(param_2);
  return plVar5;
}



/* Entry: 10a0e1844; end: 10a0e1bcf;  */

long * FUN_10a0e1844(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10a04815c(param_1[1],param_2);
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    __ZdlPv(param_2[4]);
  }
  __ZdlPv(param_2);
  return plVar4;
}



/* Entry: 10a0e1bd0; end: 10a0e1be3;  */

undefined8 * FUN_10a0e1bd0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar6 = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[3] = uVar6;
  puVar1[5] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  puVar1[6] = param_2[6];
  plVar2 = param_2 + 7;
  lVar4 = *plVar2;
  plVar3 = puVar1 + 7;
  *plVar3 = lVar4;
  lVar5 = param_2[8];
  puVar1[8] = lVar5;
  if (lVar5 == 0) {
    puVar1[6] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[6] = plVar2;
    *plVar2 = 0;
    param_2[8] = 0;
  }
  FUN_10a0c9da0(puVar1 + 9,param_2 + 9);
  uVar7 = param_2[0x19];
  uVar6 = param_2[0x18];
  puVar1[0x1a] = param_2[0x1a];
  puVar1[0x19] = uVar7;
  puVar1[0x18] = uVar6;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  uVar7 = param_2[0x1c];
  uVar6 = param_2[0x1b];
  puVar1[0x1d] = param_2[0x1d];
  puVar1[0x1c] = uVar7;
  puVar1[0x1b] = uVar6;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1b] = 0;
  return puVar1;
}



/* Entry: 10a0e1be4; end: 10a0e1cb3;  */

undefined8 * FUN_10a0e1be4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  param_1[5] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  param_1[6] = param_2[6];
  plVar1 = param_2 + 7;
  lVar3 = *plVar1;
  plVar2 = param_1 + 7;
  *plVar2 = lVar3;
  lVar4 = param_2[8];
  param_1[8] = lVar4;
  if (lVar4 == 0) {
    param_1[6] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[6] = plVar1;
    *plVar1 = 0;
    param_2[8] = 0;
  }
  FUN_10a0c9da0(param_1 + 9,param_2 + 9);
  uVar6 = param_2[0x19];
  uVar5 = param_2[0x18];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar6;
  param_1[0x18] = uVar5;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  uVar6 = param_2[0x1c];
  uVar5 = param_2[0x1b];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar6;
  param_1[0x1b] = uVar5;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1b] = 0;
  return param_1;
}



/* Entry: 10a0e1cb4; end: 10a0e1cc7;  */

void FUN_10a0e1cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  char cStack_51;
  
  puVar1 = &UNK_10f63805b;
  FUN_109ffde64();
  func_0x000107c2b054(&uStack_88,&DAT_10f2c4679);
  func_0x000107c2b054(&uStack_68,&UNK_10f63a2ee);
  puVar2 = puVar1;
  FUN_10a0deaa0(puVar1,param_2,param_3,&uStack_88,1,&uStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(uStack_68);
  }
  if (uStack_78 < 0) {
    __ZdlPv(uStack_88);
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b054(&uStack_88,&UNK_10f41520a);
    func_0x000107c2b054(&uStack_68,"");
    FUN_10a0deaa0(puVar1 + 4,param_2,param_3,&uStack_88,0,&uStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(uStack_68);
    }
    if (uStack_78._7_1_ < '\0') {
      __ZdlPv(uStack_88);
    }
    FUN_10a0b3de4(puVar1 + 0x80,param_3);
    FUN_10a0b4a84(puVar1 + 8,param_3);
    if (param_4 != 0) {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0x8000000000000000;
      uVar3 = param_3;
      FUN_10a0a87b8(param_3,&DAT_10f6372be,&uStack_88);
      if ((int)uVar3 != 0) {
        func_0x00010937c560(&uStack_88);
        FUN_10a0c32e4(&uStack_68);
        if ((char)puVar1[199] < '\0') {
          __ZdlPv(*(undefined8 *)(puVar1 + 0xb0));
        }
        *(undefined8 *)(puVar1 + 0xb8) = uStack_60;
        *(undefined8 *)(puVar1 + 0xb0) = uStack_68;
        *(ulong *)(puVar1 + 0xc0) = CONCAT17(cStack_51,uStack_58);
      }
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0x8000000000000000;
      FUN_10a0a87b8(param_3,&DAT_10f6372cc,&uStack_88);
      if ((int)param_3 != 0) {
        func_0x00010937c560(&uStack_88);
        FUN_10a0c32e4(&uStack_68);
        if ((char)puVar1[0xaf] < '\0') {
          __ZdlPv(*(undefined8 *)(puVar1 + 0x98));
        }
        *(undefined8 *)(puVar1 + 0xa0) = uStack_60;
        *(undefined8 *)(puVar1 + 0x98) = uStack_68;
        *(ulong *)(puVar1 + 0xa8) = CONCAT17(cStack_51,uStack_58);
      }
    }
  }
  return;
}



/* Entry: 10a0e1cc8; end: 10a0e1eeb;  */

void FUN_10a0e1cc8(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined7 uStack_48;
  char cStack_41;
  
  func_0x000107c2b054(&uStack_78,&DAT_10f2c4679);
  func_0x000107c2b054(&uStack_58,&UNK_10f63a2ee);
  uVar1 = param_1;
  FUN_10a0deaa0(param_1,param_2,param_3,&uStack_78,1,&uStack_58);
  if (cStack_41 < '\0') {
    __ZdlPv(uStack_58);
  }
  if (uStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  if ((uVar1 & 1) != 0) {
    func_0x000107c2b054(&uStack_78,&UNK_10f41520a);
    func_0x000107c2b054(&uStack_58,"");
    FUN_10a0deaa0(param_1 + 4,param_2,param_3,&uStack_78,0,&uStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(uStack_58);
    }
    if (uStack_68._7_1_ < '\0') {
      __ZdlPv(uStack_78);
    }
    FUN_10a0b3de4(param_1 + 0x80,param_3);
    FUN_10a0b4a84(param_1 + 8,param_3);
    if (param_4 != 0) {
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0x8000000000000000;
      uVar2 = param_3;
      FUN_10a0a87b8(param_3,&DAT_10f6372be,&uStack_78);
      if ((int)uVar2 != 0) {
        func_0x00010937c560(&uStack_78);
        FUN_10a0c32e4(&uStack_58);
        if (*(char *)(param_1 + 199) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
        }
        *(undefined8 *)(param_1 + 0xb8) = uStack_50;
        *(undefined8 *)(param_1 + 0xb0) = uStack_58;
        *(ulong *)(param_1 + 0xc0) = CONCAT17(cStack_41,uStack_48);
      }
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0x8000000000000000;
      FUN_10a0a87b8(param_3,&DAT_10f6372cc,&uStack_78);
      if ((int)param_3 != 0) {
        func_0x00010937c560(&uStack_78);
        FUN_10a0c32e4(&uStack_58);
        if (*(char *)(param_1 + 0xaf) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 0x98));
        }
        *(undefined8 *)(param_1 + 0xa0) = uStack_50;
        *(undefined8 *)(param_1 + 0x98) = uStack_58;
        *(ulong *)(param_1 + 0xa8) = CONCAT17(cStack_41,uStack_48);
      }
    }
  }
  return;
}



/* Entry: 10a0e1eec; end: 10a0e222f;  */

long FUN_10a0e1eec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char **ppcVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char **ppcVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  char *pcStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  uVar3 = param_1 + 8;
  FUN_10a0cdaf8();
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  func_0x000107c2b054(&uStack_78,"");
  uVar3 = param_1 + 0x20;
  FUN_10a0ce878(uVar3,param_3,param_4);
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  func_0x000107c2b054(&uStack_78,"");
  lVar8 = param_1 + 0x50;
  FUN_10a0ce9f0(lVar8,param_2,param_3,param_4,0,&uStack_78);
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  if ((int)lVar8 != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    return 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0x8000000000000000;
  plVar7 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar7 = param_4;
  }
  uVar4 = param_3;
  FUN_10a0a87b8(param_3,plVar7,&uStack_78);
  if ((int)uVar4 == 0) {
LAB_10a0e20a8:
    func_0x000107c2b054(&uStack_78,"");
    func_0x00010a0defc8(param_1,param_3,param_4);
    if (lStack_68 < 0) {
      __ZdlPv(uStack_78);
      return param_1;
    }
    return param_1;
  }
  pcVar5 = (char *)&uStack_78;
  func_0x00010937c560();
  if (*pcVar5 != '\x01') goto LAB_10a0e20a8;
  puVar9 = (undefined8 *)(param_1 + 0x40);
  func_0x00010959d330(param_1 + 0x38,*puVar9);
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 **)(param_1 + 0x38) = puVar9;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0x8000000000000000;
  cVar2 = *pcVar5;
  if (cVar2 == '\0') {
    uStack_80 = 1;
  }
  else {
    if (cVar2 == '\x02') {
      uStack_88 = **(undefined8 **)(pcVar5 + 8);
      puStack_b0 = (undefined8 *)0x0;
      uStack_a0 = 0x8000000000000000;
      uStack_a8 = (*(undefined8 **)(pcVar5 + 8))[1];
      goto LAB_10a0e2120;
    }
    if (cVar2 == '\x01') {
      puStack_b0 = *(undefined8 **)(pcVar5 + 8) + 1;
      uStack_90 = **(undefined8 **)(pcVar5 + 8);
      uStack_a0 = 0x8000000000000000;
      uStack_a8 = 0;
      goto LAB_10a0e2120;
    }
    uStack_80 = 0;
  }
  puStack_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  uStack_a0 = 1;
LAB_10a0e2120:
  ppcVar6 = &pcStack_98;
  pcStack_b8 = pcVar5;
  pcStack_98 = pcVar5;
  func_0x00010937c708(ppcVar6,&pcStack_b8);
  if (((ulong)ppcVar6 & 1) == 0) {
    do {
      ppcVar6 = &pcStack_98;
      func_0x00010937c560();
      if (*(byte *)ppcVar6 - 5 < 3) {
        func_0x00010949aadc();
        uVar4 = uStack_d0;
        ppcVar6 = &pcStack_98;
        func_0x0001095a27d4();
        ppcVar1 = (char **)*ppcVar6;
        if (-1 < *(char *)((long)ppcVar6 + 0x17)) {
          ppcVar1 = ppcVar6;
        }
        func_0x000107c2b054(&uStack_d0,ppcVar1);
        plVar7 = (long *)(param_1 + 0x38);
        func_0x00010959d2ac(plVar7,&uStack_58,&uStack_d0);
        if (*plVar7 == 0) {
          lVar8 = 0x40;
          __Znwm();
          *(undefined8 *)(lVar8 + 0x28) = uStack_c8;
          *(undefined8 *)(lVar8 + 0x20) = uStack_d0;
          *(long *)(lVar8 + 0x30) = lStack_c0;
          uStack_c8 = 0;
          lStack_c0 = 0;
          uStack_d0 = 0;
          *(undefined8 *)(lVar8 + 0x38) = uVar4;
          func_0x00010959d258(param_1 + 0x38,uStack_58,plVar7,lVar8);
        }
        if (lStack_c0 < 0) {
          __ZdlPv(uStack_d0);
        }
      }
      func_0x00010937c698(&pcStack_98);
      ppcVar6 = &pcStack_98;
      func_0x00010937c708(ppcVar6,&pcStack_b8);
    } while ((int)ppcVar6 == 0);
  }
  return 1;
}



/* Entry: 10a0e2230; end: 10a0e2487;  */

void FUN_10a0e2230(long *param_1,long *param_2,long *param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uStack_b8;
  
  uVar8 = param_1[2];
  plVar12 = (long *)*param_1;
  if ((undefined2 *)((long)(uVar8 - (long)plVar12) >> 3) < param_4) {
    plVar9 = param_1;
    plVar3 = param_2;
    plVar4 = param_3;
    puVar6 = param_4;
    if (plVar12 != (long *)0x0) {
      param_1[1] = (long)plVar12;
      __ZdlPv();
      uVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar9 = plVar12;
    }
    if ((ulong)param_4 >> 0x3d != 0) {
      FUN_10a0ced44();
      uVar8 = plVar9[2];
      plVar12 = (long *)*plVar9;
      if ((undefined2 *)((long)(uVar8 - (long)plVar12) >> 3) < puVar6) {
        plVar13 = plVar9;
        plVar5 = plVar4;
        puVar7 = puVar6;
        if (plVar12 != (long *)0x0) {
          plVar9[1] = (long)plVar12;
          __ZdlPv();
          uVar8 = 0;
          *plVar9 = 0;
          plVar9[1] = 0;
          plVar9[2] = 0;
          plVar13 = plVar12;
        }
        if ((ulong)puVar6 >> 0x3d != 0) {
          FUN_10a0ced44();
          plVar12 = plVar13;
          FUN_10a0da208();
          if (*plVar12 == 0) {
            puVar2 = (undefined8 *)0x90;
            __Znwm();
            lVar11 = *plVar5;
            puVar2[5] = plVar5[1];
            puVar2[4] = lVar11;
            puVar2[6] = plVar5[2];
            plVar5[1] = 0;
            plVar5[2] = 0;
            *plVar5 = 0;
            *(undefined2 *)(puVar2 + 7) = *puVar7;
            uVar14 = *(undefined8 *)(puVar7 + 4);
            puVar2[9] = *(undefined8 *)(puVar7 + 8);
            puVar2[8] = uVar14;
            puVar2[10] = *(undefined8 *)(puVar7 + 0xc);
            *(undefined8 *)(puVar7 + 4) = 0;
            *(undefined8 *)(puVar7 + 8) = 0;
            uVar14 = *(undefined8 *)(puVar7 + 0x10);
            puVar2[0xc] = *(undefined8 *)(puVar7 + 0x14);
            puVar2[0xb] = uVar14;
            *(undefined8 *)(puVar7 + 0xc) = 0;
            *(undefined8 *)(puVar7 + 0x10) = 0;
            uVar14 = *(undefined8 *)(puVar7 + 0x18);
            uVar1 = *(undefined8 *)(puVar7 + 0x1c);
            *(undefined8 *)(puVar7 + 0x14) = 0;
            *(undefined8 *)(puVar7 + 0x18) = 0;
            plVar9 = (long *)(puVar7 + 0x20);
            lVar11 = *plVar9;
            puVar2[0xd] = uVar14;
            puVar2[0xe] = uVar1;
            plVar3 = puVar2 + 0xf;
            *plVar3 = lVar11;
            lVar10 = *(long *)(puVar7 + 0x24);
            puVar2[0x10] = lVar10;
            if (lVar10 == 0) {
              puVar2[0xe] = plVar3;
            }
            else {
              *(long **)(lVar11 + 0x10) = plVar3;
              *(long **)(puVar7 + 0x1c) = plVar9;
              *plVar9 = 0;
              *(undefined8 *)(puVar7 + 0x24) = 0;
            }
            puVar2[0x11] = *(undefined8 *)(puVar7 + 0x28);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = uStack_b8;
            *plVar12 = (long)puVar2;
            if (*(long *)*plVar13 != 0) {
              *plVar13 = *(long *)*plVar13;
              puVar2 = (undefined8 *)*plVar12;
            }
            func_0x000107c2b058(plVar13[1],puVar2);
            plVar13[2] = plVar13[2] + 1;
          }
          return;
        }
        puVar7 = (undefined2 *)((long)uVar8 >> 2);
        if ((undefined2 *)((long)uVar8 >> 2) <= puVar6) {
          puVar7 = puVar6;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          puVar7 = (undefined2 *)0x1fffffffffffffff;
        }
        FUN_10a0cf094(plVar9,puVar7);
        lVar11 = plVar9[1];
        lVar10 = (long)plVar4 - (long)plVar3;
        if (lVar10 != 0) {
          _memmove(lVar11,plVar3,lVar10);
        }
        lVar11 = lVar11 + lVar10;
      }
      else {
        plVar13 = (long *)plVar9[1];
        if ((undefined2 *)((long)plVar13 - (long)plVar12 >> 3) < puVar6) {
          lVar10 = (long)plVar3 + ((long)plVar13 - (long)plVar12);
          if (plVar13 != plVar12) {
            _memmove(plVar12,plVar3);
            plVar13 = (long *)plVar9[1];
          }
          lVar11 = (long)plVar4 - lVar10;
          if (lVar11 != 0) {
            _memmove(plVar13,lVar10,lVar11);
          }
          lVar11 = (long)plVar13 + lVar11;
        }
        else {
          lVar11 = (long)plVar4 - (long)plVar3;
          if (lVar11 != 0) {
            _memmove(plVar12,plVar3,lVar11);
          }
          lVar11 = (long)plVar12 + lVar11;
        }
      }
      plVar9[1] = lVar11;
      return;
    }
    puVar6 = (undefined2 *)((long)uVar8 >> 2);
    if ((undefined2 *)((long)uVar8 >> 2) <= param_4) {
      puVar6 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      puVar6 = (undefined2 *)0x1fffffffffffffff;
    }
    FUN_10a0cf094(param_1,puVar6);
    plVar3 = (long *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *plVar3 = *param_2;
      plVar3 = plVar3 + 1;
    }
  }
  else {
    plVar9 = (long *)param_1[1];
    if ((undefined2 *)((long)plVar9 - (long)plVar12 >> 3) < param_4) {
      plVar4 = (long *)((long)param_2 + ((long)plVar9 - (long)plVar12));
      plVar3 = plVar9;
      if (plVar9 != plVar12) {
        _memmove(plVar12,param_2);
        plVar9 = (long *)param_1[1];
        plVar3 = plVar9;
      }
      for (; plVar4 != param_3; plVar4 = plVar4 + 1) {
        *plVar9 = *plVar4;
        plVar9 = plVar9 + 1;
        plVar3 = plVar3 + 1;
      }
    }
    else {
      lVar11 = (long)param_3 - (long)param_2;
      if (lVar11 != 0) {
        _memmove(plVar12,param_2,lVar11);
      }
      plVar3 = (long *)((long)plVar12 + lVar11);
    }
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 10a0e2488; end: 10a0e259b;  */

void FUN_10a0e2488(long *param_1,undefined8 param_2,undefined8 *param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_10a0da208(param_1,&uStack_38,param_2);
  if (*plVar2 == 0) {
    puVar3 = (undefined8 *)0x90;
    __Znwm();
    uVar8 = *param_3;
    puVar3[5] = param_3[1];
    puVar3[4] = uVar8;
    puVar3[6] = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined2 *)(puVar3 + 7) = *param_4;
    uVar8 = *(undefined8 *)(param_4 + 4);
    puVar3[9] = *(undefined8 *)(param_4 + 8);
    puVar3[8] = uVar8;
    puVar3[10] = *(undefined8 *)(param_4 + 0xc);
    *(undefined8 *)(param_4 + 4) = 0;
    *(undefined8 *)(param_4 + 8) = 0;
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    puVar3[0xc] = *(undefined8 *)(param_4 + 0x14);
    puVar3[0xb] = uVar8;
    *(undefined8 *)(param_4 + 0xc) = 0;
    *(undefined8 *)(param_4 + 0x10) = 0;
    uVar8 = *(undefined8 *)(param_4 + 0x18);
    uVar1 = *(undefined8 *)(param_4 + 0x1c);
    *(undefined8 *)(param_4 + 0x14) = 0;
    *(undefined8 *)(param_4 + 0x18) = 0;
    plVar4 = (long *)(param_4 + 0x20);
    lVar5 = *plVar4;
    puVar3[0xd] = uVar8;
    puVar3[0xe] = uVar1;
    plVar6 = puVar3 + 0xf;
    *plVar6 = lVar5;
    lVar7 = *(long *)(param_4 + 0x24);
    puVar3[0x10] = lVar7;
    if (lVar7 == 0) {
      puVar3[0xe] = plVar6;
    }
    else {
      *(long **)(lVar5 + 0x10) = plVar6;
      *(long **)(param_4 + 0x1c) = plVar4;
      *plVar4 = 0;
      *(undefined8 *)(param_4 + 0x24) = 0;
    }
    puVar3[0x11] = *(undefined8 *)(param_4 + 0x28);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = uStack_38;
    *plVar2 = (long)puVar3;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*plVar2;
    }
    func_0x000107c2b058(param_1[1],puVar3);
    param_1[2] = param_1[2] + 1;
  }
  return;
}



/* Entry: 10a0e259c; end: 10a0e299b;  */

undefined8 * FUN_10a0e259c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar4 = param_2[7];
  uVar1 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
  param_1[6] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  uVar1 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  param_1[0xd] = param_2[0xd];
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  func_0x00010a0e2904(param_1 + 0xe,param_2 + 0xe);
  uVar1 = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar1;
  func_0x00010a0e2904(param_1 + 0x29,param_2 + 0x29);
  FUN_10a0c9da0(param_1 + 0x42,param_2 + 0x42);
  param_1[0x51] = param_2[0x51];
  lVar2 = param_2[0x52];
  param_1[0x52] = lVar2;
  lVar3 = param_2[0x53];
  param_1[0x53] = lVar3;
  if (lVar3 == 0) {
    param_1[0x51] = param_1 + 0x52;
  }
  else {
    *(undefined8 **)(lVar2 + 0x10) = param_1 + 0x52;
    param_2[0x51] = param_2 + 0x52;
    param_2[0x52] = 0;
    param_2[0x53] = 0;
  }
  uVar4 = param_2[0x55];
  uVar1 = param_2[0x54];
  param_1[0x56] = param_2[0x56];
  param_1[0x55] = uVar4;
  param_1[0x54] = uVar1;
  param_2[0x56] = 0;
  param_2[0x55] = 0;
  param_2[0x54] = 0;
  uVar4 = param_2[0x58];
  uVar1 = param_2[0x57];
  param_1[0x59] = param_2[0x59];
  param_1[0x58] = uVar4;
  param_1[0x57] = uVar1;
  param_2[0x59] = 0;
  param_2[0x58] = 0;
  param_2[0x57] = 0;
  uVar1 = param_2[0x5a];
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5a] = uVar1;
  FUN_10a0c9da0(param_1 + 0x5c,param_2 + 0x5c);
  param_1[0x6b] = param_2[0x6b];
  lVar2 = param_2[0x6c];
  param_1[0x6c] = lVar2;
  lVar3 = param_2[0x6d];
  param_1[0x6d] = lVar3;
  if (lVar3 == 0) {
    param_1[0x6b] = param_1 + 0x6c;
  }
  else {
    *(undefined8 **)(lVar2 + 0x10) = param_1 + 0x6c;
    param_2[0x6b] = param_2 + 0x6c;
    param_2[0x6c] = 0;
    param_2[0x6d] = 0;
  }
  uVar4 = param_2[0x6f];
  uVar1 = param_2[0x6e];
  param_1[0x70] = param_2[0x70];
  param_1[0x6f] = uVar4;
  param_1[0x6e] = uVar1;
  param_2[0x70] = 0;
  param_2[0x6f] = 0;
  param_2[0x6e] = 0;
  uVar4 = param_2[0x72];
  uVar1 = param_2[0x71];
  param_1[0x73] = param_2[0x73];
  param_1[0x72] = uVar4;
  param_1[0x71] = uVar1;
  param_2[0x73] = 0;
  param_2[0x72] = 0;
  param_2[0x71] = 0;
  uVar1 = param_2[0x74];
  param_1[0x75] = param_2[0x75];
  param_1[0x74] = uVar1;
  FUN_10a0c9da0(param_1 + 0x76,param_2 + 0x76);
  param_1[0x85] = param_2[0x85];
  lVar2 = param_2[0x86];
  param_1[0x86] = lVar2;
  lVar3 = param_2[0x87];
  param_1[0x87] = lVar3;
  if (lVar3 == 0) {
    param_1[0x85] = param_1 + 0x86;
  }
  else {
    *(undefined8 **)(lVar2 + 0x10) = param_1 + 0x86;
    param_2[0x85] = param_2 + 0x86;
    param_2[0x86] = 0;
    param_2[0x87] = 0;
  }
  uVar4 = param_2[0x89];
  uVar1 = param_2[0x88];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x89] = uVar4;
  param_1[0x88] = uVar1;
  param_2[0x8a] = 0;
  param_2[0x89] = 0;
  param_2[0x88] = 0;
  uVar4 = param_2[0x8c];
  uVar1 = param_2[0x8b];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8c] = uVar4;
  param_1[0x8b] = uVar1;
  param_2[0x8d] = 0;
  param_2[0x8c] = 0;
  param_2[0x8b] = 0;
  func_0x00010a0e2904(param_1 + 0x8e,param_2 + 0x8e);
  param_1[0xa7] = param_2[0xa7];
  lVar2 = param_2[0xa8];
  param_1[0xa8] = lVar2;
  lVar3 = param_2[0xa9];
  param_1[0xa9] = lVar3;
  if (lVar3 == 0) {
    param_1[0xa7] = param_1 + 0xa8;
  }
  else {
    *(undefined8 **)(lVar2 + 0x10) = param_1 + 0xa8;
    param_2[0xa7] = param_2 + 0xa8;
    param_2[0xa8] = 0;
    param_2[0xa9] = 0;
  }
  param_1[0xaa] = param_2[0xaa];
  lVar2 = param_2[0xab];
  param_1[0xab] = lVar2;
  lVar3 = param_2[0xac];
  param_1[0xac] = lVar3;
  if (lVar3 == 0) {
    param_1[0xaa] = param_1 + 0xab;
  }
  else {
    *(undefined8 **)(lVar2 + 0x10) = param_1 + 0xab;
    param_2[0xaa] = param_2 + 0xab;
    param_2[0xab] = 0;
    param_2[0xac] = 0;
  }
  param_1[0xad] = param_2[0xad];
  lVar2 = param_2[0xae];
  param_1[0xae] = lVar2;
  lVar3 = param_2[0xaf];
  param_1[0xaf] = lVar3;
  if (lVar3 == 0) {
    param_1[0xad] = param_1 + 0xae;
  }
  else {
    *(undefined8 **)(lVar2 + 0x10) = param_1 + 0xae;
    param_2[0xad] = param_2 + 0xae;
    param_2[0xae] = 0;
    param_2[0xaf] = 0;
  }
  FUN_10a0c9da0(param_1 + 0xb0,param_2 + 0xb0);
  uVar4 = param_2[0xc0];
  uVar1 = param_2[0xbf];
  param_1[0xc1] = param_2[0xc1];
  param_1[0xc0] = uVar4;
  param_1[0xbf] = uVar1;
  param_2[0xc0] = 0;
  param_2[0xbf] = 0;
  param_2[0xc1] = 0;
  uVar4 = param_2[0xc3];
  uVar1 = param_2[0xc2];
  param_1[0xc4] = param_2[0xc4];
  param_1[0xc3] = uVar4;
  param_1[0xc2] = uVar1;
  param_2[0xc4] = 0;
  param_2[0xc3] = 0;
  param_2[0xc2] = 0;
  return param_1;
}



/* Entry: 10a0e299c; end: 10a0e29af;  */

undefined8 * FUN_10a0e299c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  uVar5 = param_2[1];
  uVar4 = *param_2;
  puVar3[2] = param_2[2];
  puVar3[1] = uVar5;
  *puVar3 = uVar4;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar5 = param_2[4];
  uVar4 = param_2[3];
  *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(param_2 + 5);
  puVar3[4] = uVar5;
  puVar3[3] = uVar4;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[6] = 0;
  uVar4 = param_2[6];
  puVar3[7] = param_2[7];
  puVar3[6] = uVar4;
  puVar3[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(puVar3 + 9) = *(undefined4 *)(param_2 + 9);
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  puVar3[0xc] = param_2[0xc];
  puVar3[0xb] = uVar5;
  puVar3[10] = uVar4;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[10] = 0;
  uVar5 = param_2[0xe];
  uVar4 = param_2[0xd];
  puVar3[0xf] = param_2[0xf];
  puVar3[0xe] = uVar5;
  puVar3[0xd] = uVar4;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xd] = 0;
  FUN_10a0c9da0(puVar3 + 0x10,param_2 + 0x10);
  puVar3[0x1f] = param_2[0x1f];
  lVar1 = param_2[0x20];
  lVar2 = param_2[0x21];
  puVar3[0x20] = lVar1;
  puVar3[0x21] = lVar2;
  if (lVar2 == 0) {
    puVar3[0x1f] = puVar3 + 0x20;
  }
  else {
    *(undefined8 **)(lVar1 + 0x10) = puVar3 + 0x20;
    param_2[0x1f] = param_2 + 0x20;
    param_2[0x20] = 0;
    param_2[0x21] = 0;
  }
  uVar5 = param_2[0x23];
  uVar4 = param_2[0x22];
  puVar3[0x24] = param_2[0x24];
  puVar3[0x23] = uVar5;
  puVar3[0x22] = uVar4;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x22] = 0;
  uVar5 = param_2[0x26];
  uVar4 = param_2[0x25];
  puVar3[0x27] = param_2[0x27];
  puVar3[0x26] = uVar5;
  puVar3[0x25] = uVar4;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x25] = 0;
  *(undefined1 *)(puVar3 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  return puVar3;
}



/* Entry: 10a0e29b0; end: 10a0e2acf;  */

undefined8 * FUN_10a0e29b0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = uVar4;
  param_1[3] = uVar3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[10] = 0;
  uVar4 = param_2[0xe];
  uVar3 = param_2[0xd];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar4;
  param_1[0xd] = uVar3;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xd] = 0;
  FUN_10a0c9da0(param_1 + 0x10,param_2 + 0x10);
  param_1[0x1f] = param_2[0x1f];
  lVar1 = param_2[0x20];
  lVar2 = param_2[0x21];
  param_1[0x20] = lVar1;
  param_1[0x21] = lVar2;
  if (lVar2 == 0) {
    param_1[0x1f] = param_1 + 0x20;
  }
  else {
    *(undefined8 **)(lVar1 + 0x10) = param_1 + 0x20;
    param_2[0x1f] = param_2 + 0x20;
    param_2[0x20] = 0;
    param_2[0x21] = 0;
  }
  uVar4 = param_2[0x23];
  uVar3 = param_2[0x22];
  param_1[0x24] = param_2[0x24];
  param_1[0x23] = uVar4;
  param_1[0x22] = uVar3;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x22] = 0;
  uVar4 = param_2[0x26];
  uVar3 = param_2[0x25];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar4;
  param_1[0x25] = uVar3;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x25] = 0;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  return param_1;
}



/* Entry: 10a0e2ad0; end: 10a0e2ae3;  */

undefined8 * FUN_10a0e2ad0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar1[3] = param_2[3];
  FUN_10a0c9da0(puVar1 + 4,param_2 + 4);
  puVar1[0x13] = param_2[0x13];
  plVar2 = param_2 + 0x14;
  lVar4 = *plVar2;
  plVar3 = puVar1 + 0x14;
  *plVar3 = lVar4;
  lVar5 = param_2[0x15];
  puVar1[0x15] = lVar5;
  if (lVar5 == 0) {
    puVar1[0x13] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[0x13] = plVar2;
    *plVar2 = 0;
    param_2[0x15] = 0;
  }
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  puVar1[0x18] = param_2[0x18];
  puVar1[0x17] = uVar7;
  puVar1[0x16] = uVar6;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x16] = 0;
  uVar7 = param_2[0x1a];
  uVar6 = param_2[0x19];
  puVar1[0x1b] = param_2[0x1b];
  puVar1[0x1a] = uVar7;
  puVar1[0x19] = uVar6;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x19] = 0;
  return puVar1;
}



/* Entry: 10a0e2ae4; end: 10a0e2b9b;  */

undefined8 * FUN_10a0e2ae4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = param_2[3];
  FUN_10a0c9da0(param_1 + 4,param_2 + 4);
  param_1[0x13] = param_2[0x13];
  plVar1 = param_2 + 0x14;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x14;
  *plVar2 = lVar3;
  lVar4 = param_2[0x15];
  param_1[0x15] = lVar4;
  if (lVar4 == 0) {
    param_1[0x13] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x13] = plVar1;
    *plVar1 = 0;
    param_2[0x15] = 0;
  }
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x16] = 0;
  uVar6 = param_2[0x1a];
  uVar5 = param_2[0x19];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar6;
  param_1[0x19] = uVar5;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x19] = 0;
  return param_1;
}



/* Entry: 10a0e2b9c; end: 10a0e2baf;  */

undefined8 * FUN_10a0e2b9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  *puVar1 = *param_2;
  uVar7 = param_2[2];
  uVar6 = param_2[1];
  puVar1[3] = param_2[3];
  puVar1[2] = uVar7;
  puVar1[1] = uVar6;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  FUN_10a0c9da0(puVar1 + 4,param_2 + 4);
  puVar1[0x13] = param_2[0x13];
  plVar2 = param_2 + 0x14;
  lVar4 = *plVar2;
  plVar3 = puVar1 + 0x14;
  *plVar3 = lVar4;
  lVar5 = param_2[0x15];
  puVar1[0x15] = lVar5;
  if (lVar5 == 0) {
    puVar1[0x13] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[0x13] = plVar2;
    *plVar2 = 0;
    param_2[0x15] = 0;
  }
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  puVar1[0x18] = param_2[0x18];
  puVar1[0x17] = uVar7;
  puVar1[0x16] = uVar6;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x16] = 0;
  uVar7 = param_2[0x1a];
  uVar6 = param_2[0x19];
  puVar1[0x1b] = param_2[0x1b];
  puVar1[0x1a] = uVar7;
  puVar1[0x19] = uVar6;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x19] = 0;
  return puVar1;
}



/* Entry: 10a0e2bb0; end: 10a0e2c67;  */

undefined8 * FUN_10a0e2bb0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  param_1[1] = uVar5;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  FUN_10a0c9da0(param_1 + 4,param_2 + 4);
  param_1[0x13] = param_2[0x13];
  plVar1 = param_2 + 0x14;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x14;
  *plVar2 = lVar3;
  lVar4 = param_2[0x15];
  param_1[0x15] = lVar4;
  if (lVar4 == 0) {
    param_1[0x13] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x13] = plVar1;
    *plVar1 = 0;
    param_2[0x15] = 0;
  }
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x16] = 0;
  uVar6 = param_2[0x1a];
  uVar5 = param_2[0x19];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar6;
  param_1[0x19] = uVar5;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x19] = 0;
  return param_1;
}



/* Entry: 10a0e2c68; end: 10a0e2c7b;  */

undefined8 * FUN_10a0e2c68(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar6 = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[3] = uVar6;
  puVar1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uVar6 = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[6] = uVar6;
  puVar1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_10a0c9da0(puVar1 + 9,param_2 + 9);
  puVar1[0x18] = param_2[0x18];
  plVar2 = param_2 + 0x19;
  lVar4 = *plVar2;
  plVar3 = puVar1 + 0x19;
  *plVar3 = lVar4;
  lVar5 = param_2[0x1a];
  puVar1[0x1a] = lVar5;
  if (lVar5 == 0) {
    puVar1[0x18] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[0x18] = plVar2;
    *plVar2 = 0;
    param_2[0x1a] = 0;
  }
  uVar7 = param_2[0x1c];
  uVar6 = param_2[0x1b];
  puVar1[0x1d] = param_2[0x1d];
  puVar1[0x1c] = uVar7;
  puVar1[0x1b] = uVar6;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1b] = 0;
  uVar7 = param_2[0x1f];
  uVar6 = param_2[0x1e];
  puVar1[0x20] = param_2[0x20];
  puVar1[0x1f] = uVar7;
  puVar1[0x1e] = uVar6;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1e] = 0;
  return puVar1;
}



/* Entry: 10a0e2c7c; end: 10a0e2d6b;  */

undefined8 * FUN_10a0e2c7c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_10a0c9da0(param_1 + 9,param_2 + 9);
  param_1[0x18] = param_2[0x18];
  plVar1 = param_2 + 0x19;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x19;
  *plVar2 = lVar3;
  lVar4 = param_2[0x1a];
  param_1[0x1a] = lVar4;
  if (lVar4 == 0) {
    param_1[0x18] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x18] = plVar1;
    *plVar1 = 0;
    param_2[0x1a] = 0;
  }
  uVar6 = param_2[0x1c];
  uVar5 = param_2[0x1b];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar6;
  param_1[0x1b] = uVar5;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1b] = 0;
  uVar6 = param_2[0x1f];
  uVar5 = param_2[0x1e];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar6;
  param_1[0x1e] = uVar5;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1e] = 0;
  return param_1;
}



/* Entry: 10a0e2d6c; end: 10a0e2d7f;  */

undefined8 * FUN_10a0e2d6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  uVar7 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar7;
  *puVar1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[3];
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = uVar2;
  puVar1[4] = 0;
  uVar2 = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar2;
  puVar1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_10a0c9da0(puVar1 + 7,param_2 + 7);
  puVar1[0x16] = param_2[0x16];
  plVar3 = param_2 + 0x17;
  lVar5 = *plVar3;
  plVar4 = puVar1 + 0x17;
  *plVar4 = lVar5;
  lVar6 = param_2[0x18];
  puVar1[0x18] = lVar6;
  if (lVar6 == 0) {
    puVar1[0x16] = plVar4;
  }
  else {
    *(long **)(lVar5 + 0x10) = plVar4;
    param_2[0x16] = plVar3;
    *plVar3 = 0;
    param_2[0x18] = 0;
  }
  uVar7 = param_2[0x1a];
  uVar2 = param_2[0x19];
  puVar1[0x1b] = param_2[0x1b];
  puVar1[0x1a] = uVar7;
  puVar1[0x19] = uVar2;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x19] = 0;
  uVar7 = param_2[0x1d];
  uVar2 = param_2[0x1c];
  puVar1[0x1e] = param_2[0x1e];
  puVar1[0x1d] = uVar7;
  puVar1[0x1c] = uVar2;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1c] = 0;
  return puVar1;
}



/* Entry: 10a0e2d80; end: 10a0e2e53;  */

undefined8 * FUN_10a0e2d80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_2[3];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = uVar1;
  param_1[4] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_10a0c9da0(param_1 + 7,param_2 + 7);
  param_1[0x16] = param_2[0x16];
  plVar2 = param_2 + 0x17;
  lVar4 = *plVar2;
  plVar3 = param_1 + 0x17;
  *plVar3 = lVar4;
  lVar5 = param_2[0x18];
  param_1[0x18] = lVar5;
  if (lVar5 == 0) {
    param_1[0x16] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[0x16] = plVar2;
    *plVar2 = 0;
    param_2[0x18] = 0;
  }
  uVar6 = param_2[0x1a];
  uVar1 = param_2[0x19];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar6;
  param_1[0x19] = uVar1;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x19] = 0;
  uVar6 = param_2[0x1d];
  uVar1 = param_2[0x1c];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar6;
  param_1[0x1c] = uVar1;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1c] = 0;
  return param_1;
}



/* Entry: 10a0e2e54; end: 10a0e2e67;  */

undefined8 * FUN_10a0e2e54(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar7 = param_2[4];
  uVar6 = param_2[3];
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 5);
  puVar1[4] = uVar7;
  puVar1[3] = uVar6;
  FUN_10a0c9da0(puVar1 + 6,param_2 + 6);
  puVar1[0x15] = param_2[0x15];
  plVar2 = param_2 + 0x16;
  lVar4 = *plVar2;
  plVar3 = puVar1 + 0x16;
  *plVar3 = lVar4;
  lVar5 = param_2[0x17];
  puVar1[0x17] = lVar5;
  if (lVar5 == 0) {
    puVar1[0x15] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[0x15] = plVar2;
    *plVar2 = 0;
    param_2[0x17] = 0;
  }
  uVar7 = param_2[0x19];
  uVar6 = param_2[0x18];
  puVar1[0x1a] = param_2[0x1a];
  puVar1[0x19] = uVar7;
  puVar1[0x18] = uVar6;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x18] = 0;
  uVar7 = param_2[0x1c];
  uVar6 = param_2[0x1b];
  puVar1[0x1d] = param_2[0x1d];
  puVar1[0x1c] = uVar7;
  puVar1[0x1b] = uVar6;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1b] = 0;
  return puVar1;
}



/* Entry: 10a0e2e68; end: 10a0e2f27;  */

undefined8 * FUN_10a0e2e68(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  FUN_10a0c9da0(param_1 + 6,param_2 + 6);
  param_1[0x15] = param_2[0x15];
  plVar1 = param_2 + 0x16;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x16;
  *plVar2 = lVar3;
  lVar4 = param_2[0x17];
  param_1[0x17] = lVar4;
  if (lVar4 == 0) {
    param_1[0x15] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x15] = plVar1;
    *plVar1 = 0;
    param_2[0x17] = 0;
  }
  uVar6 = param_2[0x19];
  uVar5 = param_2[0x18];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar6;
  param_1[0x18] = uVar5;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x18] = 0;
  uVar6 = param_2[0x1c];
  uVar5 = param_2[0x1b];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar6;
  param_1[0x1b] = uVar5;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1b] = 0;
  return param_1;
}



/* Entry: 10a0e2f28; end: 10a0e2f3b;  */

undefined8 * FUN_10a0e2f28(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar7 = param_2[4];
  uVar6 = param_2[3];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar7;
  puVar1[3] = uVar6;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  uVar6 = param_2[6];
  uVar8 = param_2[9];
  uVar7 = param_2[8];
  puVar1[7] = param_2[7];
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[10] = param_2[10];
  plVar2 = param_2 + 0xb;
  lVar4 = *plVar2;
  plVar3 = puVar1 + 0xb;
  *plVar3 = lVar4;
  lVar5 = param_2[0xc];
  puVar1[0xc] = lVar5;
  if (lVar5 == 0) {
    puVar1[10] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[10] = plVar2;
    *plVar2 = 0;
    param_2[0xc] = 0;
  }
  FUN_10a0c9da0(puVar1 + 0xd,param_2 + 0xd);
  uVar7 = param_2[0x1d];
  uVar6 = param_2[0x1c];
  puVar1[0x1e] = param_2[0x1e];
  puVar1[0x1d] = uVar7;
  puVar1[0x1c] = uVar6;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  uVar7 = param_2[0x20];
  uVar6 = param_2[0x1f];
  puVar1[0x21] = param_2[0x21];
  puVar1[0x20] = uVar7;
  puVar1[0x1f] = uVar6;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1f] = 0;
  uVar6 = param_2[0x22];
  uVar8 = param_2[0x25];
  uVar7 = param_2[0x24];
  puVar1[0x23] = param_2[0x23];
  puVar1[0x22] = uVar6;
  puVar1[0x25] = uVar8;
  puVar1[0x24] = uVar7;
  puVar1[0x26] = param_2[0x26];
  lVar4 = param_2[0x27];
  lVar5 = param_2[0x28];
  puVar1[0x27] = lVar4;
  puVar1[0x28] = lVar5;
  if (lVar5 == 0) {
    puVar1[0x26] = puVar1 + 0x27;
  }
  else {
    *(undefined8 **)(lVar4 + 0x10) = puVar1 + 0x27;
    param_2[0x26] = param_2 + 0x27;
    param_2[0x27] = 0;
    param_2[0x28] = 0;
  }
  FUN_10a0c9da0(puVar1 + 0x29,param_2 + 0x29);
  uVar7 = param_2[0x39];
  uVar6 = param_2[0x38];
  puVar1[0x3a] = param_2[0x3a];
  puVar1[0x39] = uVar7;
  puVar1[0x38] = uVar6;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  uVar7 = param_2[0x3c];
  uVar6 = param_2[0x3b];
  puVar1[0x3d] = param_2[0x3d];
  puVar1[0x3c] = uVar7;
  puVar1[0x3b] = uVar6;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3b] = 0;
  puVar1[0x3e] = param_2[0x3e];
  lVar4 = param_2[0x3f];
  lVar5 = param_2[0x40];
  puVar1[0x3f] = lVar4;
  puVar1[0x40] = lVar5;
  if (lVar5 == 0) {
    puVar1[0x3e] = puVar1 + 0x3f;
  }
  else {
    *(undefined8 **)(lVar4 + 0x10) = puVar1 + 0x3f;
    param_2[0x3e] = param_2 + 0x3f;
    param_2[0x3f] = 0;
    param_2[0x40] = 0;
  }
  FUN_10a0c9da0(puVar1 + 0x41,param_2 + 0x41);
  uVar7 = param_2[0x51];
  uVar6 = param_2[0x50];
  puVar1[0x52] = param_2[0x52];
  puVar1[0x51] = uVar7;
  puVar1[0x50] = uVar6;
  param_2[0x51] = 0;
  param_2[0x50] = 0;
  param_2[0x52] = 0;
  uVar7 = param_2[0x54];
  uVar6 = param_2[0x53];
  puVar1[0x55] = param_2[0x55];
  puVar1[0x54] = uVar7;
  puVar1[0x53] = uVar6;
  param_2[0x55] = 0;
  param_2[0x54] = 0;
  param_2[0x53] = 0;
  return puVar1;
}



/* Entry: 10a0e2f3c; end: 10a0e3103;  */

undefined8 * FUN_10a0e2f3c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[10] = param_2[10];
  plVar1 = param_2 + 0xb;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0xb;
  *plVar2 = lVar3;
  lVar4 = param_2[0xc];
  param_1[0xc] = lVar4;
  if (lVar4 == 0) {
    param_1[10] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[10] = plVar1;
    *plVar1 = 0;
    param_2[0xc] = 0;
  }
  FUN_10a0c9da0(param_1 + 0xd,param_2 + 0xd);
  uVar6 = param_2[0x1d];
  uVar5 = param_2[0x1c];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar6;
  param_1[0x1c] = uVar5;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  uVar6 = param_2[0x20];
  uVar5 = param_2[0x1f];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar6;
  param_1[0x1f] = uVar5;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1f] = 0;
  uVar5 = param_2[0x22];
  uVar7 = param_2[0x25];
  uVar6 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = uVar5;
  param_1[0x25] = uVar7;
  param_1[0x24] = uVar6;
  param_1[0x26] = param_2[0x26];
  lVar3 = param_2[0x27];
  lVar4 = param_2[0x28];
  param_1[0x27] = lVar3;
  param_1[0x28] = lVar4;
  if (lVar4 == 0) {
    param_1[0x26] = param_1 + 0x27;
  }
  else {
    *(undefined8 **)(lVar3 + 0x10) = param_1 + 0x27;
    param_2[0x26] = param_2 + 0x27;
    param_2[0x27] = 0;
    param_2[0x28] = 0;
  }
  FUN_10a0c9da0(param_1 + 0x29,param_2 + 0x29);
  uVar6 = param_2[0x39];
  uVar5 = param_2[0x38];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x39] = uVar6;
  param_1[0x38] = uVar5;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  uVar6 = param_2[0x3c];
  uVar5 = param_2[0x3b];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3c] = uVar6;
  param_1[0x3b] = uVar5;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3b] = 0;
  param_1[0x3e] = param_2[0x3e];
  lVar3 = param_2[0x3f];
  lVar4 = param_2[0x40];
  param_1[0x3f] = lVar3;
  param_1[0x40] = lVar4;
  if (lVar4 == 0) {
    param_1[0x3e] = param_1 + 0x3f;
  }
  else {
    *(undefined8 **)(lVar3 + 0x10) = param_1 + 0x3f;
    param_2[0x3e] = param_2 + 0x3f;
    param_2[0x3f] = 0;
    param_2[0x40] = 0;
  }
  FUN_10a0c9da0(param_1 + 0x41,param_2 + 0x41);
  uVar6 = param_2[0x51];
  uVar5 = param_2[0x50];
  param_1[0x52] = param_2[0x52];
  param_1[0x51] = uVar6;
  param_1[0x50] = uVar5;
  param_2[0x51] = 0;
  param_2[0x50] = 0;
  param_2[0x52] = 0;
  uVar6 = param_2[0x54];
  uVar5 = param_2[0x53];
  param_1[0x55] = param_2[0x55];
  param_1[0x54] = uVar6;
  param_1[0x53] = uVar5;
  param_2[0x55] = 0;
  param_2[0x54] = 0;
  param_2[0x53] = 0;
  return param_1;
}



/* Entry: 10a0e3104; end: 10a0e3117;  */

undefined8 * FUN_10a0e3104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = &UNK_10f63805b;
  FUN_109ffde64();
  puVar3 = (undefined8 *)(puVar1 + 8);
  puVar5 = (undefined8 *)*puVar3;
  puVar4 = puVar3;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      puVar2 = puVar5 + 4;
      FUN_10a003e3c(puVar2,param_2);
      if (-1 < (char)puVar2) {
        puVar4 = puVar5;
      }
      puVar5 = *(undefined8 **)((long)puVar5 + ((ulong)puVar2 >> 4 & 8));
    } while (puVar5 != (undefined8 *)0x0);
    if ((puVar4 != puVar3) && (FUN_10a003e3c(param_2,puVar4 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return puVar4;
    }
  }
  return puVar3;
}



/* Entry: 10a0e3118; end: 10a0e3193;  */

long * FUN_10a0e3118(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a0e3194; end: 10a0e3223;  */

long FUN_10a0e3194(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0e3224; end: 10a0e3233;  */

void FUN_10a0e3224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1ef8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0e3234; end: 10a0e3253;  */

void FUN_10a0e3234(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1ef8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0e3254; end: 10a0e3263;  */

void FUN_10a0e3254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a0e325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a0e3264; end: 10a0e334f;  */

long FUN_10a0e3264(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0e3350; end: 10a0e3357;  */

void FUN_10a0e3350(void)

{
  return;
}



/* Entry: 10a0e3358; end: 10a0e33d3;  */

long * FUN_10a0e3358(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a0e33d4; end: 10a0e341b;  */

void FUN_10a0e33d4(void)

{
  return;
}



/* Entry: 10a0e341c; end: 10a0e34ff;  */

long FUN_10a0e341c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a0e3500; end: 10a0e3553;  */

undefined8 * FUN_10a0e3500(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10a0e3554(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 10a0e3554; end: 10a0e36bf;  */

void FUN_10a0e3554(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    FUN_10a0d9f90(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a0e36c0; end: 10a0e38cb;  */

void FUN_10a0e36c0(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x30))();
  puVar2 = (undefined8 *)plVar1[3];
  func_0x00010a08f1bc();
  puVar2 = (undefined8 *)*puVar2;
  FUN_10a155834(puVar2,0);
  uVar3 = *puVar2;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  (**(code **)(*param_1 + 0x38))(param_1);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2);
  FUN_10a0e5058(uVar3,param_1,plVar1,&uStack_60,param_4);
  *(undefined4 *)(param_2 + 10) = 5;
  return;
}



/* Entry: 10a0e38cc; end: 10a0e3927;  */

void FUN_10a0e38cc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = *(undefined8 **)(*param_2 + 0x18);
  func_0x00010a08f1bc();
  plVar5 = (long *)*puVar4;
  FUN_10a155834(plVar5,0);
  puVar4 = (undefined8 *)*plVar5;
  if (puVar4[0x17f] == 0) {
    uStack_58 = 0xbf8000003f800000;
    uStack_60 = 0xbf800000bf800000;
    uStack_48 = 0x3f8000003f800000;
    uStack_50 = 0x3f800000bf800000;
    FUN_10a0e652c(auStack_70,*puVar4,&uStack_60,4);
    FUN_10a0e65b0(puVar4 + 0x17f,auStack_70);
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (puVar4[0x181] == 0) {
    uStack_58 = 0x3f800000;
    uStack_60 = 0;
    uStack_48 = 0x3f8000003f800000;
    uStack_50 = 0x3f80000000000000;
    FUN_10a0e652c(auStack_70,*puVar4,&uStack_60,4);
    FUN_10a0e65b0(puVar4 + 0x181,auStack_70);
    if (plStack_68 != (long *)0x0) {
      plVar5 = plStack_68 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  FUN_10a0e53b0(puVar4,param_1,param_2,1,puVar4 + 0x17f,0,puVar4 + 0x181,0,4);
  return;
}



/* Entry: 10a0e3928; end: 10a0e3b27;  */

void FUN_10a0e3928(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1[0x17f] == 0) {
    uStack_58 = 0xbf8000003f800000;
    uStack_60 = 0xbf800000bf800000;
    uStack_48 = 0x3f8000003f800000;
    uStack_50 = 0x3f800000bf800000;
    FUN_10a0e652c(auStack_70,*param_1,&uStack_60,4);
    FUN_10a0e65b0(param_1 + 0x17f,auStack_70);
    plVar2 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  if (param_1[0x181] == 0) {
    uStack_58 = 0x3f800000;
    uStack_60 = 0;
    uStack_48 = 0x3f8000003f800000;
    uStack_50 = 0x3f80000000000000;
    FUN_10a0e652c(auStack_70,*param_1,&uStack_60,4);
    FUN_10a0e65b0(param_1 + 0x181,auStack_70);
    if (plStack_68 != (long *)0x0) {
      plVar2 = plStack_68 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  FUN_10a0e53b0(param_1,param_2,param_3,1,param_1 + 0x17f,0,param_1 + 0x181,0,4);
  return;
}



/* Entry: 10a0e3b28; end: 10a0e3cdf;  */

void FUN_10a0e3b28(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x30))();
  puVar2 = (undefined8 *)plVar1[3];
  func_0x00010a08f1bc();
  puVar2 = (undefined8 *)*puVar2;
  FUN_10a155834(puVar2,0);
  uVar3 = *puVar2;
  (**(code **)(*param_1 + 0x38))(param_1);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2);
  FUN_10a0e3ce0(uVar3,param_1,plVar1,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(param_2 + 10) = 5;
  return;
}



/* Entry: 10a0e3ce0; end: 10a0e3e2b;  */

void FUN_10a0e3ce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined4 uStack_48;
  
  FUN_10a0e52cc(auStack_58,*param_1,param_4,param_5);
  FUN_10a0e52cc(auStack_70,*param_1,param_6,param_7);
  FUN_10a0e53b0(param_1,param_2,param_3,param_8,auStack_70,uStack_60,auStack_58,uStack_48,
                (int)param_7);
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  return;
}



/* Entry: 10a0e3e2c; end: 10a0e3e63;  */

long FUN_10a0e3e2c(long param_1)

{
  long lVar1;
  
  lVar1 = 0x198;
  do {
    func_0x00010923ff08(param_1 + lVar1);
    lVar1 = lVar1 + -0x198;
  } while (lVar1 != -0x198);
  return param_1;
}



/* Entry: 10a0e3e64; end: 10a0e3f8b;  */

undefined4 * FUN_10a0e3e64(undefined4 *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar2 + 0x20) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x2c) = 0x100000000;
    *(undefined8 *)((long)param_1 + lVar2 + 0x24) = 1;
    *(undefined8 *)((long)param_1 + lVar2 + 0x38) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x34) = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x100);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(long **)(param_1 + 100) = param_2;
  func_0x00010a08f1bc();
  if ((*(byte *)(*param_2 + 0x440) & 1) != 0) {
    lVar2 = *param_2 + 0xe0;
    func_0x00010a155a18(lVar2);
    FUN_10a0e3f8c(param_1 + 2,lVar2);
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 8) = 0x100000000;
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0xc) = 1;
    }
    *(undefined8 *)(param_1 + 0x48) = 1;
    param_1[0xf] = 0xf;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0e3f54);
  (*pcVar1)();
}



/* Entry: 10a0e3f8c; end: 10a0e40a3;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e4574) */
/* WARNING: Removing unreachable block (ram,0x00010a0e4680) */

long * FUN_10a0e3f8c(long *param_1,undefined8 **param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long *plStack_7e8;
  long lStack_7e0;
  long *plStack_7d8;
  undefined1 **ppuStack_7d0;
  code *pcStack_7c8;
  undefined1 auStack_7b8 [512];
  undefined8 uStack_5b8;
  undefined1 auStack_5b0 [128];
  undefined8 uStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  long lStack_508;
  undefined8 uStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 uStack_4e0;
  undefined1 auStack_4d8 [8];
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_390;
  undefined8 auStack_388 [2];
  char cStack_371;
  undefined8 uStack_370;
  char cStack_359;
  long lStack_348;
  long lStack_340;
  undefined8 uStack_330;
  char cStack_319;
  undefined8 uStack_318;
  undefined8 ***pppuStack_310;
  long lStack_308;
  long lStack_300;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *apuStack_2e0 [3];
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined1 auStack_290 [400];
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 uStack_e5;
  undefined4 uStack_e4;
  undefined8 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    puVar8 = param_2[1];
    puVar14 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = puVar14;
    if (puVar8 != (undefined8 *)0x0) {
      plVar6 = puVar8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar10 = puVar10 + 2;
    plVar6 = param_1;
LAB_10a0e4088:
    param_1[1] = (long)puVar10;
    return plVar6;
  }
  lVar12 = (long)puVar10 - *param_1;
  uVar1 = (lVar12 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar9 = param_1[2] - *param_1;
    uVar11 = (long)uVar9 >> 3;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar11 = 0xfffffffffffffff;
    }
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_10a0e900c();
    puVar8 = (undefined8 *)((long)plVar6 + lVar12);
    puVar10 = param_2[1];
    puVar14 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = puVar14;
    if (puVar10 != (undefined8 *)0x0) {
      plVar7 = puVar10 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar10 = puVar8 + 2;
    lVar12 = (long)puVar8 - (param_1[1] - *param_1);
    _memcpy(lVar12);
    lStack_58 = *param_1;
    *param_1 = lVar12;
    param_1[1] = (long)puVar10;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar11 * 2);
    plVar6 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a0e9040(plVar6);
    goto LAB_10a0e4088;
  }
  FUN_10a0e8ff8();
  pcStack_68 = FUN_10a0e40a4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = &stack0xfffffffffffffff0;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    if (param_4[1] == 0) goto LAB_10a0e4124;
    func_0x000107c3192c(&lStack_100,*param_4);
  }
  else if (*(char *)((long)param_4 + 0x17) == '\0') {
LAB_10a0e4124:
    func_0x000107c2b054(&lStack_100,&UNK_10f63a7c9);
  }
  else {
    lStack_f8 = param_4[1];
    lStack_100 = *param_4;
    lStack_f0 = param_4[2];
  }
  if (*(int *)((long)param_1 + 0x734) == 2) goto LAB_10a0e4140;
  bVar2 = *(byte *)((long)param_4 + 0x17);
  uVar1 = param_4[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 == 0) {
LAB_10a0e41c4:
    FUN_10a0e908c(&lStack_298,(param_3 & 0xffffffff) * 0x198 + 0x1137ea1f8);
  }
  else {
    if ((char)bVar2 < '\0') {
      if (param_4[1] == 0x12) {
        param_4 = (long *)*param_4;
        goto LAB_10a0e4188;
      }
    }
    else if (bVar2 == 0x12) {
LAB_10a0e4188:
      if ((*param_4 == 0x642f6e6f6d6d6f63 && param_4[1] == 0x7574786554776172) &&
          (short)param_4[2] == 0x6572) goto LAB_10a0e41c4;
    }
LAB_10a0e4140:
    FUN_10a156e3c(&lStack_298,param_1,&lStack_100);
  }
  if ((int)param_3 != 0) {
    pbVar5 = (byte *)0x113836510;
    FUN_10ad0621c();
    if ((*pbVar5 >> 1 & 1) != 0) {
      func_0x00010925ec38(auStack_7b8,&UNK_10e495bc0);
      func_0x00010925ecf4(auStack_5b0,&UNK_10e495dc8);
      func_0x00010923aaa8(apuStack_2e0,&lStack_298);
      uStack_518 = apuStack_2e0[2];
      lStack_508 = lStack_2c0;
      lStack_510 = lStack_2c8;
      uStack_520 = apuStack_2e0[1];
      puStack_528 = apuStack_2e0[0];
      apuStack_2e0[1] = (undefined8 *)0x0;
      apuStack_2e0[0] = (undefined8 *)0x0;
      uStack_500 = uStack_2b8;
      apuStack_2e0[2] = (undefined8 *)0x0;
      lStack_2c8 = 0;
      lStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_4f0 = uStack_2a8;
      puStack_4f8 = puStack_2b0;
      uStack_4e8 = uStack_2a0;
      uStack_2a0 = 0;
      puStack_2b0 = (undefined8 *)0x0;
      uStack_2a8 = 0;
      uStack_4e0 = 1;
      func_0x000109235564(auStack_4d8,param_1,auStack_290,0);
      ppuStack_e0 = &puStack_2b0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4c8 = 0;
      func_0x00010a09ad80(&ppuStack_e0);
      if (lStack_2c8 != 0) {
        lStack_2c0 = lStack_2c8;
        __ZdlPv();
      }
      ppuStack_e0 = apuStack_2e0;
      FUN_10a09ae0c(&ppuStack_e0);
      ppuStack_e0 = (undefined8 **)&UNK_10f63a976;
      uStack_d8 = 0x215;
      uStack_e4 = 0;
      uStack_e5 = 0;
      plStack_2f0 = param_1;
      func_0x00010924e19c(apuStack_2e0,param_1,&plStack_2f0,&uStack_e4,&ppuStack_e0,&uStack_e5);
      ppuStack_e0 = (undefined8 **)&UNK_10f63ab8c;
      uStack_d8 = 0x159;
      uStack_e4 = 1;
      uStack_e5 = 0;
      plStack_2f0 = param_1;
      func_0x00010924e19c(apuStack_2e0 + 2,param_1,&plStack_2f0,&uStack_e4,&ppuStack_e0,&uStack_e5);
      param_2 = apuStack_2e0;
      uStack_d8 = 2;
      uStack_2e8 = 0;
      plStack_2f0 = (long *)0x0;
      ppuStack_e0 = param_2;
      func_0x000109293548(extraout_x8,param_1,&ppuStack_e0,auStack_7b8,&plStack_2f0);
      lVar12 = 0x10;
      do {
        func_0x00010a0eb17c((long)param_2 + lVar12);
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != -0x10);
      apuStack_2e0[0] = &uStack_4c8;
      FUN_10a0e9b7c(apuStack_2e0);
      if (plStack_4d0 != (long *)0x0) {
        plVar6 = plStack_4d0 + 1;
        do {
          lVar12 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_4d0 + 0x10))(plStack_4d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4d0);
        }
      }
      func_0x00010a09ad20(&puStack_528);
      goto LAB_10a0e4564;
    }
  }
  FUN_10a0e68b8(auStack_7b8,*(undefined4 *)((long)param_1 + 0x734));
  uStack_390 = 0x100000001;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_388,&lStack_100);
  uStack_5b8 = 0;
  puVar13 = &UNK_10e495bc0;
  lVar12 = 0x20;
  do {
    func_0x00010925ed60(auStack_7b8,puVar13);
    puVar13 = puVar13 + 0x10;
    lVar12 = lVar12 + -0x10;
  } while (lVar12 != 0);
  uStack_530 = 0;
  puVar13 = &UNK_10e495dc8;
  lVar12 = 0x20;
  do {
    func_0x00010925ede0(auStack_5b0,puVar13);
    puVar13 = puVar13 + 0x10;
    lVar12 = lVar12 + -0x10;
  } while (lVar12 != 0);
  FUN_10a0e46d8(&puStack_528,&lStack_298);
  uStack_d8 = 0x400000001;
  ppuStack_e0 = (undefined8 **)0x1;
  apuStack_2e0[2] = (undefined8 *)0x0;
  apuStack_2e0[0] = (undefined8 *)0x0;
  apuStack_2e0[1] = (undefined8 *)0x0;
  FUN_10a0ea6f0(apuStack_2e0,&ppuStack_e0,auStack_d0,2);
  FUN_10a0ea7e0(&lStack_308,apuStack_2e0[0],apuStack_2e0[1],
                (long)apuStack_2e0[1] - (long)apuStack_2e0[0] >> 3);
  ppuStack_e0 = (undefined8 **)CONCAT44((int)param_3,(int)param_2);
  uStack_318 = 8;
  pppuStack_310 = &ppuStack_e0;
  FUN_10a0e47e8(extraout_x8,param_1,auStack_7b8);
  if (apuStack_2e0[0] != (undefined8 *)0x0) {
    apuStack_2e0[1] = apuStack_2e0[0];
    __ZdlPv();
  }
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  if (cStack_319 < '\0') {
    __ZdlPv(uStack_330);
  }
  if (lStack_348 != 0) {
    lStack_340 = lStack_348;
    __ZdlPv();
  }
  if (cStack_359 < '\0') {
    __ZdlPv(uStack_370);
  }
  if (cStack_371 < '\0') {
    __ZdlPv(auStack_388[0]);
  }
  func_0x00010923ff08(&puStack_528);
LAB_10a0e4564:
  plVar6 = &lStack_298;
  func_0x00010923ff08();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    FUN_10a09da04(&plStack_2f0);
    param_2 = param_2 + 2;
    lVar12 = -0x20;
    do {
      func_0x00010a0eb17c(param_2);
      param_2 = param_2 + -2;
      lVar12 = lVar12 + 0x10;
    } while (lVar12 != 0);
    FUN_10a0e4690(auStack_7b8);
    func_0x00010923ff08(&lStack_298);
    plVar7 = plVar6;
    __Unwind_Resume();
    pcStack_7c8 = FUN_10a0e4690;
    plStack_7e8 = plVar7 + 0x5e;
    lStack_7e0 = lVar12;
    plStack_7d8 = plVar6;
    ppuStack_7d0 = &puStack_70;
    FUN_10a0e9b7c(&plStack_7e8);
    func_0x00010a0eb0cc(plVar7 + 0x5c);
    func_0x00010a09ad20(plVar7 + 0x52);
    return plVar7;
  }
  return plVar6;
}



/* Entry: 10a0e40a4; end: 10a0e468f;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e4574) */
/* WARNING: Removing unreachable block (ram,0x00010a0e4680) */

undefined1 *
FUN_10a0e40a4(undefined8 param_1,long param_2,undefined8 **param_3,uint param_4,long *param_5)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puStack_788;
  long lStack_780;
  undefined1 *puStack_778;
  undefined1 *puStack_770;
  code *pcStack_768;
  undefined1 auStack_758 [512];
  undefined8 uStack_558;
  undefined1 auStack_550 [128];
  undefined8 uStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined1 auStack_478 [8];
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_330;
  undefined8 auStack_328 [2];
  char cStack_311;
  undefined8 uStack_310;
  char cStack_2f9;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d0;
  char cStack_2b9;
  undefined8 uStack_2b8;
  undefined8 ***pppuStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long alStack_290 [2];
  undefined8 *apuStack_280 [3];
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [400];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    if (param_5[1] == 0) goto LAB_10a0e4124;
    func_0x000107c3192c(&lStack_a0,*param_5);
  }
  else if (*(char *)((long)param_5 + 0x17) == '\0') {
LAB_10a0e4124:
    func_0x000107c2b054(&lStack_a0,&UNK_10f63a7c9);
  }
  else {
    lStack_98 = param_5[1];
    lStack_a0 = *param_5;
    lStack_90 = param_5[2];
  }
  if (*(int *)(param_2 + 0x734) == 2) goto LAB_10a0e4140;
  bVar3 = *(byte *)((long)param_5 + 0x17);
  uVar2 = param_5[1];
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  if (uVar2 == 0) {
LAB_10a0e41c4:
    FUN_10a0e908c(auStack_238,(ulong)param_4 * 0x198 + 0x1137ea1f8);
  }
  else {
    if ((char)bVar3 < '\0') {
      if (param_5[1] == 0x12) {
        param_5 = (long *)*param_5;
        goto LAB_10a0e4188;
      }
    }
    else if (bVar3 == 0x12) {
LAB_10a0e4188:
      if ((*param_5 == 0x642f6e6f6d6d6f63 && param_5[1] == 0x7574786554776172) &&
          (short)param_5[2] == 0x6572) goto LAB_10a0e41c4;
    }
LAB_10a0e4140:
    FUN_10a156e3c(auStack_238,param_2,&lStack_a0);
  }
  if (param_4 != 0) {
    pbVar6 = (byte *)0x113836510;
    FUN_10ad0621c();
    if ((*pbVar6 >> 1 & 1) != 0) {
      func_0x00010925ec38(auStack_758,&UNK_10e495bc0);
      func_0x00010925ecf4(auStack_550,&UNK_10e495dc8);
      func_0x00010923aaa8(apuStack_280,auStack_238);
      uStack_4b8 = apuStack_280[2];
      lStack_4a8 = lStack_260;
      lStack_4b0 = lStack_268;
      uStack_4c0 = apuStack_280[1];
      puStack_4c8 = apuStack_280[0];
      apuStack_280[1] = (undefined8 *)0x0;
      apuStack_280[0] = (undefined8 *)0x0;
      uStack_4a0 = uStack_258;
      apuStack_280[2] = (undefined8 *)0x0;
      lStack_268 = 0;
      lStack_260 = 0;
      uStack_258 = 0;
      uStack_490 = uStack_248;
      puStack_498 = puStack_250;
      uStack_488 = uStack_240;
      uStack_240 = 0;
      puStack_250 = (undefined8 *)0x0;
      uStack_248 = 0;
      uStack_480 = 1;
      func_0x000109235564(auStack_478,param_2,auStack_230,0);
      ppuStack_80 = &puStack_250;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_468 = 0;
      func_0x00010a09ad80(&ppuStack_80);
      if (lStack_268 != 0) {
        lStack_260 = lStack_268;
        __ZdlPv();
      }
      ppuStack_80 = apuStack_280;
      FUN_10a09ae0c(&ppuStack_80);
      ppuStack_80 = (undefined8 **)&UNK_10f63a976;
      uStack_78 = 0x215;
      uStack_84 = 0;
      uStack_85 = 0;
      alStack_290[0] = param_2;
      func_0x00010924e19c(apuStack_280,param_2,alStack_290,&uStack_84,&ppuStack_80,&uStack_85);
      ppuStack_80 = (undefined8 **)&UNK_10f63ab8c;
      uStack_78 = 0x159;
      uStack_84 = 1;
      uStack_85 = 0;
      alStack_290[0] = param_2;
      func_0x00010924e19c(apuStack_280 + 2,param_2,alStack_290,&uStack_84,&ppuStack_80,&uStack_85);
      param_3 = apuStack_280;
      uStack_78 = 2;
      alStack_290[1] = 0;
      alStack_290[0] = 0;
      ppuStack_80 = param_3;
      func_0x000109293548(param_1,param_2,&ppuStack_80,auStack_758,alStack_290);
      lVar10 = 0x10;
      do {
        func_0x00010a0eb17c((long)param_3 + lVar10);
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != -0x10);
      apuStack_280[0] = &uStack_468;
      FUN_10a0e9b7c(apuStack_280);
      if (plStack_470 != (long *)0x0) {
        plVar1 = plStack_470 + 1;
        do {
          lVar10 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_470 + 0x10))(plStack_470);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_470);
        }
      }
      func_0x00010a09ad20(&puStack_4c8);
      goto LAB_10a0e4564;
    }
  }
  FUN_10a0e68b8(auStack_758,*(undefined4 *)(param_2 + 0x734));
  uStack_330 = 0x100000001;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_328,&lStack_a0);
  uStack_558 = 0;
  puVar9 = &UNK_10e495bc0;
  lVar10 = 0x20;
  do {
    func_0x00010925ed60(auStack_758,puVar9);
    puVar9 = puVar9 + 0x10;
    lVar10 = lVar10 + -0x10;
  } while (lVar10 != 0);
  uStack_4d0 = 0;
  puVar9 = &UNK_10e495dc8;
  lVar10 = 0x20;
  do {
    func_0x00010925ede0(auStack_550,puVar9);
    puVar9 = puVar9 + 0x10;
    lVar10 = lVar10 + -0x10;
  } while (lVar10 != 0);
  FUN_10a0e46d8(&puStack_4c8,auStack_238);
  uStack_78 = 0x400000001;
  ppuStack_80 = (undefined8 **)0x1;
  apuStack_280[2] = (undefined8 *)0x0;
  apuStack_280[0] = (undefined8 *)0x0;
  apuStack_280[1] = (undefined8 *)0x0;
  FUN_10a0ea6f0(apuStack_280,&ppuStack_80,auStack_70,2);
  FUN_10a0ea7e0(&lStack_2a8,apuStack_280[0],apuStack_280[1],
                (long)apuStack_280[1] - (long)apuStack_280[0] >> 3);
  ppuStack_80 = (undefined8 **)CONCAT44(param_4,(int)param_3);
  uStack_2b8 = 8;
  pppuStack_2b0 = &ppuStack_80;
  FUN_10a0e47e8(param_1,param_2,auStack_758);
  if (apuStack_280[0] != (undefined8 *)0x0) {
    apuStack_280[1] = apuStack_280[0];
    __ZdlPv();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  if (cStack_2b9 < '\0') {
    __ZdlPv(uStack_2d0);
  }
  if (lStack_2e8 != 0) {
    lStack_2e0 = lStack_2e8;
    __ZdlPv();
  }
  if (cStack_2f9 < '\0') {
    __ZdlPv(uStack_310);
  }
  if (cStack_311 < '\0') {
    __ZdlPv(auStack_328[0]);
  }
  func_0x00010923ff08(&puStack_4c8);
LAB_10a0e4564:
  puVar7 = auStack_238;
  func_0x00010923ff08();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a09da04(alStack_290);
    param_3 = param_3 + 2;
    lVar10 = -0x20;
    do {
      func_0x00010a0eb17c(param_3);
      param_3 = param_3 + -2;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0);
    FUN_10a0e4690(auStack_758);
    func_0x00010923ff08(auStack_238);
    puVar8 = puVar7;
    __Unwind_Resume();
    pcStack_768 = FUN_10a0e4690;
    puStack_788 = puVar8 + 0x2f0;
    lStack_780 = lVar10;
    puStack_778 = puVar7;
    puStack_770 = &stack0xfffffffffffffff0;
    FUN_10a0e9b7c(&puStack_788);
    func_0x00010a0eb0cc(puVar8 + 0x2e0);
    func_0x00010a09ad20(puVar8 + 0x290);
    return puVar8;
  }
  return puVar7;
}



/* Entry: 10a0e4690; end: 10a0e46d7;  */

long FUN_10a0e4690(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x2f0;
  FUN_10a0e9b7c(&lStack_28);
  FUN_10a0eb0cc(param_1 + 0x2e0);
  func_0x00010a09ad20(param_1 + 0x290);
  return param_1;
}



/* Entry: 10a0e46d8; end: 10a0e47e7;  */

undefined4 * FUN_10a0e46d8(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    FUN_10a0e9bec(param_1 + 2,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                  *(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 7);
    FUN_10a0e9f7c(param_1 + 8,*(long *)(param_2 + 8),*(long *)(param_2 + 10),
                  *(long *)(param_2 + 10) - *(long *)(param_2 + 8) >> 5);
  }
  lVar1 = 0;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              ((long)param_1 + lVar1 + 0x38,(long)param_2 + lVar1 + 0x38);
    *(undefined8 *)((long)param_1 + lVar1 + 0x50) = *(undefined8 *)((long)param_2 + lVar1 + 0x50);
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x100);
  if (param_1 != param_2) {
    FUN_10a0ea0ec(param_1 + 0x4e,*(long *)(param_2 + 0x4e),*(long *)(param_2 + 0x50),
                  (*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x4e) >> 3) * 0x6db6db6db6db6db7)
    ;
    FUN_10a0ea2f0(param_1 + 0x54,*(long *)(param_2 + 0x54),*(long *)(param_2 + 0x56),
                  (*(long *)(param_2 + 0x56) - *(long *)(param_2 + 0x54) >> 3) * -0x3333333333333333
                 );
    FUN_10a0ea4a0(param_1 + 0x5a,*(long *)(param_2 + 0x5a),*(long *)(param_2 + 0x5c),
                  *(long *)(param_2 + 0x5c) - *(long *)(param_2 + 0x5a) >> 2);
    func_0x00010a0ea5c8(param_1 + 0x60,*(long *)(param_2 + 0x60),*(long *)(param_2 + 0x62),
                        *(long *)(param_2 + 0x62) - *(long *)(param_2 + 0x60) >> 4);
  }
  return param_1;
}



/* Entry: 10a0e47e8; end: 10a0e4cdf;  */

undefined1 * FUN_10a0e47e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long **pplVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long **pplStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 auStack_3b0 [82];
  undefined1 auStack_120 [72];
  undefined1 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long alStack_c0 [4];
  long *aplStack_a0 [4];
  long *aplStack_80 [2];
  long *aplStack_70 [3];
  long lStack_58;
  
  lVar7 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_3b0[0x3d] = 0;
  auStack_3b0[0x3c] = 0;
  auStack_3b0[0x3f] = 0;
  auStack_3b0[0x3e] = 0;
  auStack_3b0[0x39] = 0;
  auStack_3b0[0x38] = 0;
  auStack_3b0[0x3b] = 0;
  auStack_3b0[0x3a] = 0;
  auStack_3b0[0x35] = 0;
  auStack_3b0[0x34] = 0;
  auStack_3b0[0x37] = 0;
  auStack_3b0[0x36] = 0;
  auStack_3b0[0x31] = 0;
  auStack_3b0[0x30] = 0;
  auStack_3b0[0x33] = 0;
  auStack_3b0[0x32] = 0;
  auStack_3b0[0x2d] = 0;
  auStack_3b0[0x2c] = 0;
  auStack_3b0[0x2f] = 0;
  auStack_3b0[0x2e] = 0;
  auStack_3b0[0x29] = 0;
  auStack_3b0[0x28] = 0;
  auStack_3b0[0x2b] = 0;
  auStack_3b0[0x2a] = 0;
  auStack_3b0[0x25] = 0;
  auStack_3b0[0x24] = 0;
  auStack_3b0[0x27] = 0;
  auStack_3b0[0x26] = 0;
  auStack_3b0[0x21] = 0;
  auStack_3b0[0x20] = 0;
  auStack_3b0[0x23] = 0;
  auStack_3b0[0x22] = 0;
  auStack_3b0[0x1d] = 0;
  auStack_3b0[0x1c] = 0;
  auStack_3b0[0x1f] = 0;
  auStack_3b0[0x1e] = 0;
  auStack_3b0[0x19] = 0;
  auStack_3b0[0x18] = 0;
  auStack_3b0[0x1b] = 0;
  auStack_3b0[0x1a] = 0;
  auStack_3b0[0x15] = 0;
  auStack_3b0[0x14] = 0;
  auStack_3b0[0x17] = 0;
  auStack_3b0[0x16] = 0;
  auStack_3b0[0x11] = 0;
  auStack_3b0[0x10] = 0;
  auStack_3b0[0x13] = 0;
  auStack_3b0[0x12] = 0;
  auStack_3b0[0xd] = 0;
  auStack_3b0[0xc] = 0;
  auStack_3b0[0xf] = 0;
  auStack_3b0[0xe] = 0;
  auStack_3b0[9] = 0;
  auStack_3b0[8] = 0;
  auStack_3b0[0xb] = 0;
  auStack_3b0[10] = 0;
  auStack_3b0[5] = 0;
  auStack_3b0[4] = 0;
  auStack_3b0[7] = 0;
  auStack_3b0[6] = 0;
  auStack_3b0[1] = 0;
  auStack_3b0[0] = 0;
  auStack_3b0[3] = 0;
  auStack_3b0[2] = 0;
  do {
    *(undefined8 *)((long)auStack_3b0 + lVar7 + 0x28) = 0;
    *(undefined8 *)((long)auStack_3b0 + lVar7 + 0x20) = 0xffffffff;
    *(undefined8 *)((long)auStack_3b0 + lVar7 + 0x38) = 0;
    *(undefined8 *)((long)auStack_3b0 + lVar7 + 0x30) = 0xffffffff;
    *(undefined8 *)((long)auStack_3b0 + lVar7 + 8) = 0;
    *(undefined8 *)((long)auStack_3b0 + lVar7) = 0xffffffff;
    *(undefined8 *)((long)auStack_3b0 + lVar7 + 0x18) = 0;
    *(undefined8 *)((long)auStack_3b0 + lVar7 + 0x10) = 0xffffffff;
    lVar7 = lVar7 + 0x40;
  } while (lVar7 != 0x200);
  auStack_3b0[0x51] = 0;
  auStack_3b0[0x40] = 0;
  auStack_3b0[0x46] = 0xffffffff;
  auStack_3b0[0x45] = 0x100000000;
  auStack_3b0[0x48] = 0xffffffff;
  auStack_3b0[0x47] = 0x100000000;
  auStack_3b0[0x42] = 0xffffffff;
  auStack_3b0[0x41] = 0x100000000;
  auStack_3b0[0x44] = 0xffffffff;
  auStack_3b0[0x43] = 0x100000000;
  auStack_3b0[0x4e] = 0xffffffff;
  auStack_3b0[0x4d] = 0x100000000;
  auStack_3b0[0x50] = 0xffffffff;
  auStack_3b0[0x4f] = 0x100000000;
  auStack_3b0[0x4a] = 0xffffffff;
  auStack_3b0[0x49] = 0x100000000;
  auStack_3b0[0x4c] = 0xffffffff;
  auStack_3b0[0x4b] = 0x100000000;
  auStack_120[0] = 0;
  uStack_d8 = 0;
  plStack_c8 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  alStack_c0[1] = 0;
  alStack_c0[0] = 0;
  alStack_c0[2] = 0;
  if (auStack_3b0 != param_3) {
    auStack_3b0[0x40] = 0;
    if (param_3[0x40] != 0) {
      lVar7 = param_3[0x40] << 4;
      puVar8 = param_3;
      do {
        func_0x00010925ed60(auStack_3b0,puVar8);
        puVar8 = puVar8 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
    auStack_3b0[0x51] = 0;
    if (param_3[0x51] != 0) {
      puVar8 = param_3 + 0x41;
      lVar7 = param_3[0x51] << 4;
      do {
        func_0x00010925ede0(auStack_3b0 + 0x41,puVar8);
        puVar8 = puVar8 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
  }
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  lStack_3b8 = 0;
  FUN_10a156298(&plStack_3f0,param_2,param_3 + 0x86,&uStack_3c8);
  aplStack_a0[1] = plStack_3e8;
  aplStack_a0[0] = plStack_3f0;
  if (plStack_3e8 != (long *)0x0) {
    plVar1 = plStack_3e8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  aplStack_a0[3] = plStack_3d8;
  aplStack_a0[2] = (long *)uStack_3e0;
  if (plStack_3d8 != (long *)0x0) {
    plVar1 = plStack_3d8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a0eaba8(alStack_c0,aplStack_a0,aplStack_80,2);
  lVar7 = 0x10;
  do {
    func_0x00010a0eb124((long)aplStack_a0 + lVar7);
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != -0x10);
  func_0x00010923aaa8(aplStack_a0,param_3 + 0x52);
  FUN_10a0e6cd0(auStack_120,aplStack_a0);
  pplStack_400 = aplStack_70;
  func_0x00010a09ad80(&pplStack_400);
  if (aplStack_a0[3] != (long *)0x0) {
    aplStack_80[0] = aplStack_a0[3];
    __ZdlPv();
  }
  pplStack_400 = aplStack_a0;
  FUN_10a09ae0c(&pplStack_400);
  func_0x000109235564(aplStack_a0,param_2,param_3 + 0x53,0);
  plVar2 = aplStack_a0[1];
  plStack_d0 = aplStack_a0[0];
  plVar1 = plStack_c8;
  aplStack_a0[0] = (long *)0x0;
  aplStack_a0[1] = (long *)0x0;
  plStack_c8 = plVar2;
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = aplStack_a0[1];
  if (aplStack_a0[1] != (long *)0x0) {
    plVar2 = aplStack_a0[1] + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*aplStack_a0[1] + 0x10))(aplStack_a0[1]);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10a0e6abc(aplStack_a0,param_2,0,param_3 + 0x89,plStack_3f0);
  FUN_10a0e6abc(aplStack_a0 + 2,param_2,1,param_3 + 0x91,uStack_3e0);
  uStack_3f8 = 2;
  uStack_410 = 0;
  uStack_408 = 0;
  pplStack_400 = aplStack_a0;
  func_0x000109293548(param_1,param_2,&pplStack_400,auStack_3b0,&uStack_410);
  lVar7 = 0x10;
  do {
    func_0x00010a0eb17c((long)aplStack_a0 + lVar7);
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != -0x10);
  if (plStack_3d8 != (long *)0x0) {
    plVar1 = plStack_3d8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3d8);
    }
  }
  if (plStack_3e8 != (long *)0x0) {
    plVar1 = plStack_3e8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_3e8 + 0x10))(plStack_3e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3e8);
    }
  }
  if (lStack_3b8 < 0) {
    __ZdlPv(uStack_3c8);
  }
  aplStack_a0[0] = alStack_c0;
  FUN_10a0e9b7c(aplStack_a0);
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar2 = plStack_c8 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5 = auStack_120;
  func_0x00010a09ad20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  FUN_10a09da04(&uStack_410);
  pplVar6 = aplStack_a0 + 2;
  lVar7 = -0x20;
  do {
    func_0x00010a0eb17c(pplVar6);
    pplVar6 = pplVar6 + -2;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0);
  func_0x00010a0eb124(&uStack_3e0);
  func_0x00010a0eb124(&plStack_3f0);
  if (lStack_3b8 < 0) {
    __ZdlPv(uStack_3c8);
  }
  FUN_10a0e4690(auStack_3b0);
  __Unwind_Resume();
  if (*(long *)(puVar5 + 0x4b0) != 0) {
    *(long *)(puVar5 + 0x4b8) = *(long *)(puVar5 + 0x4b0);
    __ZdlPv();
  }
  if ((char)puVar5[0x49f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar5 + 0x488));
  }
  if (*(long *)(puVar5 + 0x470) != 0) {
    *(long *)(puVar5 + 0x478) = *(long *)(puVar5 + 0x470);
    __ZdlPv();
  }
  if ((char)puVar5[0x45f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar5 + 0x448));
  }
  if ((char)puVar5[0x447] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar5 + 0x430));
  }
  func_0x00010923ff08(puVar5 + 0x290);
  return puVar5;
}



/* Entry: 10a0e4ce0; end: 10a0e4d57;  */

long FUN_10a0e4ce0(long param_1)

{
  if (*(long *)(param_1 + 0x4b0) != 0) {
    *(long *)(param_1 + 0x4b8) = *(long *)(param_1 + 0x4b0);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x49f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x488));
  }
  if (*(long *)(param_1 + 0x470) != 0) {
    *(long *)(param_1 + 0x478) = *(long *)(param_1 + 0x470);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x45f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x448));
  }
  if (*(char *)(param_1 + 0x447) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x430));
  }
  func_0x00010923ff08(param_1 + 0x290);
  return param_1;
}



/* Entry: 10a0e4d58; end: 10a0e4e6b;  */

undefined8 *
FUN_10a0e4d58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  FUN_10a0e40a4(param_1 + 1,param_2,param_3,0);
  FUN_10a0e40a4(param_1 + 0xc0,param_2,param_3,1,param_4);
  param_1[0x184] = 0;
  param_1[0x183] = 0;
  param_1[0x186] = 0;
  param_1[0x185] = 0;
  param_1[0x180] = 0;
  param_1[0x17f] = 0;
  param_1[0x182] = 0;
  param_1[0x181] = 0;
  *(undefined4 *)(param_1 + 0x187) = 0x3f800000;
  param_1[0x189] = 0;
  param_1[0x188] = 0;
  param_1[0x18b] = 0;
  param_1[0x18a] = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  FUN_10a0e4e6c(param_1 + 1);
  FUN_10a0e4e6c(param_1 + 0xc0);
  *(undefined1 *)((long)param_1 + 0x33c) = 1;
  param_1[0x68] = 0x200000000;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)((long)param_1 + 0x934) = 1;
  param_1[0x127] = 0x200000000;
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  return param_1;
}



/* Entry: 10a0e4e6c; end: 10a0e4ef7;  */

void FUN_10a0e4e6c(long param_1)

{
  long lVar1;
  undefined1 auStack_130 [4];
  undefined1 auStack_12c [8];
  undefined1 auStack_124 [8];
  undefined4 uStack_11c;
  undefined8 auStack_118 [31];
  
  lVar1 = 0;
  do {
    auStack_130[lVar1] = 0;
    *(undefined8 *)(auStack_124 + lVar1) = 0x100000000;
    *(undefined8 *)(auStack_130 + lVar1 + 4) = 1;
    *(undefined8 *)((long)auStack_118 + lVar1) = 0;
    *(undefined4 *)((long)auStack_118 + lVar1 + -4) = 0;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x100);
  auStack_118[0x1d] = 1;
  stack0xfffffffffffffed8 = 0;
  _auStack_130 = 0x100000000;
  auStack_118[0] = 0xf00000000;
  stack0xfffffffffffffee0 = 1;
  if ((undefined1 *)(param_1 + 0x398) != auStack_130) {
    *(undefined8 *)(param_1 + 0x498) = 0;
    func_0x00010928bc78((undefined1 *)(param_1 + 0x398),auStack_130);
  }
  return;
}



/* Entry: 10a0e4ef8; end: 10a0e4ff3;  */

undefined8 *
FUN_10a0e4ef8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  FUN_10a0e47e8(param_1 + 1,param_2,param_3);
  FUN_10a0e47e8(param_1 + 0xc0,param_2,param_4);
  param_1[0x184] = 0;
  param_1[0x183] = 0;
  param_1[0x186] = 0;
  param_1[0x185] = 0;
  param_1[0x180] = 0;
  param_1[0x17f] = 0;
  param_1[0x182] = 0;
  param_1[0x181] = 0;
  *(undefined4 *)(param_1 + 0x187) = 0x3f800000;
  param_1[0x189] = 0;
  param_1[0x188] = 0;
  param_1[0x18b] = 0;
  param_1[0x18a] = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  FUN_10a0e4e6c(param_1 + 1);
  FUN_10a0e4e6c(param_1 + 0xc0);
  *(undefined1 *)((long)param_1 + 0x33c) = 1;
  param_1[0x68] = 0x200000000;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)((long)param_1 + 0x934) = 1;
  param_1[0x127] = 0x200000000;
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  return param_1;
}



/* Entry: 10a0e4ff4; end: 10a0e5057;  */

undefined8 * FUN_10a0e4ff4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0e5058; end: 10a0e52cb;  */

void FUN_10a0e5058(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long lVar9;
  long lVar10;
  long *plStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  undefined4 uStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0xbf8000003f800000;
  uStack_60 = 0xbf800000bf800000;
  uStack_48 = 0x3f8000003f800000;
  uStack_50 = 0x3f800000bf800000;
  auVar8 = NEON_ext(*(undefined1 (*) [16])(param_4 + 2),*(undefined1 (*) [16])(param_4 + 2),8,1);
  param_4[3] = auVar8._8_8_;
  param_4[2] = auVar8._0_8_;
  plVar5 = (long *)*param_1;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  func_0x00010a08f1bc();
  if ((*(byte *)(*plVar5 + 0x440) & 1) != 0) {
    puVar6 = (undefined8 *)(*plVar5 + 0x368);
    FUN_10a15566c();
    func_0x00010928e530(&plStack_c0,*puVar6,0x20);
    plVar5 = plStack_78;
    plStack_78 = plStack_b8;
    plStack_80 = plStack_c0;
    plStack_c0 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_b8;
    uStack_70 = uStack_b0;
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_80;
    (**(code **)(*plStack_80 + 0x30))(plStack_80,2,uStack_70 & 0xffffffff,0);
    if (plVar5 != (long *)0x0) {
      lVar7 = *param_4;
      lVar10 = param_4[3];
      lVar9 = param_4[2];
      plVar5[1] = param_4[1];
      *plVar5 = lVar7;
      plVar5[3] = lVar10;
      plVar5[2] = lVar9;
      (**(code **)(*plStack_80 + 0x38))();
      FUN_10a0e52cc(auStack_98,*param_1,&uStack_60,4);
      plStack_b8 = (long *)0x0;
      plStack_c0 = (long *)0x3f800000;
      uStack_a8 = 0;
      uStack_b0 = 0x3f800000;
      uStack_a0 = 0x3f800000;
      FUN_10a0e53b0(param_1,param_2,param_3,1,auStack_98,uStack_88,&plStack_80,
                    uStack_70 & 0xffffffff,4);
      if (plStack_90 != (long *)0x0) {
        plVar5 = plStack_90 + 1;
        do {
          lVar7 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
        }
      }
      plVar5 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return;
    }
    func_0x000105688514(&UNK_10f63b222);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0e5280);
  (*pcVar4)();
}



/* Entry: 10a0e52cc; end: 10a0e53af;  */

void FUN_10a0e52cc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010a08f1bc();
  if ((*(byte *)(*param_2 + 0x440) & 1) != 0) {
    puVar5 = (undefined8 *)(*param_2 + 0x368);
    FUN_10a15566c();
    func_0x00010928e530(auStack_48,*puVar5,(int)param_4 << 3);
    FUN_10a0e65b0(param_1,auStack_48);
    param_1[2] = uStack_38;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    FUN_10a0eb884(param_1,*(undefined4 *)(param_1 + 2),param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0e5394);
  (*pcVar4)();
}



/* Entry: 10a0e53b0; end: 10a0e652b;  */

void FUN_10a0e53b0(long *param_1,long *param_2,ulong *param_3,undefined4 param_4,undefined8 *param_5
                  ,undefined4 param_6,undefined8 *param_7,undefined8 param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 *param_11,int *param_12)

{
  long *******ppppppplVar1;
  long *plVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  long *******ppppppplVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long *******ppppppplVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long *******ppppppplVar27;
  int iVar28;
  long ******pppppplVar29;
  undefined4 uVar30;
  long ******pppppplVar31;
  undefined4 uVar32;
  int iVar33;
  long ******pppppplVar34;
  undefined4 uVar35;
  int iStack_634;
  long *****ppppplStack_630;
  long *****ppppplStack_628;
  undefined8 uStack_620;
  long ******pppppplStack_618;
  long *****ppppplStack_5f8;
  long ******pppppplStack_5d0;
  long *plStack_5c8;
  ulong uStack_5c0;
  long ******pppppplStack_5b0;
  long ******pppppplStack_5a8;
  undefined8 uStack_5a0;
  long ******pppppplStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long ******pppppplStack_570;
  long *plStack_568;
  undefined1 auStack_560 [408];
  undefined1 uStack_3c8;
  long ******pppppplStack_3c0;
  undefined1 uStack_3b1;
  long ******pppppplStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  long lStack_398;
  long lStack_390;
  int iStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_168;
  undefined1 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_1;
  func_0x00010a08f140();
  auStack_560[0] = 0;
  uStack_3c8 = 0;
  if ((*(byte *)(param_12 + 0x66) & 1) == 0) {
    FUN_10a0e3e64(auStack_560,*param_1);
    uStack_3c8 = 1;
    if ((char)param_12[0x66] == '\0') {
      param_12 = (int *)auStack_560;
    }
  }
  lVar25 = *plVar8;
  pppppplStack_570 = (long ******)0x0;
  plStack_568 = (long *)0x0;
  pbVar9 = (byte *)0x113836510;
  FUN_10ad0621c();
  if (((*pbVar9 >> 5 & 1) == 0) || ((*(byte *)(param_12 + 0x62) & 1) != 0)) {
    pppppplStack_618 = (long ******)0x0;
LAB_10a0e5478:
    ppppppplVar22 = (long *******)0x0;
LAB_10a0e547c:
    uVar26 = *(undefined8 *)(lVar25 + 0x10);
    uStack_620 = *(undefined8 *)(lVar25 + 0x18);
    __ZNSt3__115recursive_mutex4lockEv();
    FUN_10a012fec(&pppppplStack_3b0,*param_1,uVar26);
    plVar12 = (long *)uStack_3a8;
    pppppplStack_570 = pppppplStack_3b0;
    plVar8 = plStack_568;
    uStack_3a8 = (long *******)0x0;
    pppppplStack_3b0 = (long ******)0x0;
    plStack_568 = plVar12;
    if (plVar8 != (long *)0x0) {
      plVar12 = plVar8 + 1;
      do {
        lVar25 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar25 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = (long *)uStack_3a8;
    if (uStack_3a8 != (long *******)0x0) {
      plVar12 = (long *)(uStack_3a8 + 1);
      do {
        lVar25 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar25 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar25 == 0) {
        (**(code **)((long)*uStack_3a8 + 0x10))(uStack_3a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    ppppppplVar11 = (long *******)pppppplStack_570;
    (*(code *)(*pppppplStack_570)[8])();
    bVar5 = true;
  }
  else {
    ppuVar10 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar23 = *ppuVar10;
    if (puVar23 == (undefined *)0x0) {
      pppppplStack_618 = (long ******)0x0;
      ppppppplVar22 = (long *******)0x0;
      goto LAB_10a0e547c;
    }
    ppppppplVar22 = (long *******)(puVar23 + 0x18);
    pppppplStack_618 = (long ******)ppppppplVar22;
    if (puVar23[0x139] != '\x01') goto LAB_10a0e5478;
    FUN_10a08d3ec(ppppppplVar22,lVar25 + 0x10);
    ppppppplVar11 = ppppppplVar22;
    func_0x00010a08dfb4();
    if ((puVar23[0xc0] & 1) == 0) goto LAB_10a0e63e0;
    if (ppppppplVar11 == (long *******)0x0) goto LAB_10a0e547c;
    bVar5 = false;
  }
  uStack_588 = 0;
  uStack_580 = *(undefined8 *)(*param_3 + 0x24);
  uStack_578 = 0x3f80000000000000;
  lVar25 = *param_1;
  if ((*(byte *)(lVar25 + 0x5c) & 1) == 0) {
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    iStack_388 = 0;
    uStack_384 = 0;
    lStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_37c = 0;
    uStack_3a8 = (long *******)0x0;
    pppppplStack_3b0 = (long ******)0x0;
    lStack_398 = 0;
    uStack_3a0 = 0;
    uStack_270 = 0xffffffffffffffff;
    uStack_260 = 0;
    uStack_268 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
    uStack_220 = 0;
    uStack_228 = 0;
    uStack_210 = 0;
    uStack_218 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d8 = 0;
    iVar28 = *param_12;
    uVar18 = *(undefined4 *)(*param_3 + 0x40);
    ppppppplVar27 = (long *******)CONCAT44(iVar28,uVar18);
    plVar8 = param_1 + 0x188;
    pppppplStack_5b0 = (long ******)ppppppplVar27;
    FUN_10a0eb2bc(plVar8,&pppppplStack_5b0);
    if (plVar8 == (long *)0x0) {
      uVar15 = 5;
      if (iVar28 != 1) {
        uVar15 = 0;
      }
      func_0x000109296b10(&pppppplStack_5b0,*param_1,uVar18,1,iVar28,1,0,0,uVar15,0x500000002);
      pppppplStack_598 = (long ******)&pppppplStack_3c0;
      plVar8 = param_1 + 0x188;
      pppppplStack_3c0 = (long ******)ppppppplVar27;
      FUN_10a0eb384(plVar8,&pppppplStack_3c0,&UNK_10dd5b8f9,&pppppplStack_598,&uStack_3b1);
      FUN_10a0e4ff4(plVar8 + 3,&pppppplStack_5b0);
      pppppplVar29 = pppppplStack_5a8;
      if ((long *******)pppppplStack_5a8 != (long *******)0x0) {
        ppppppplVar1 = (long *******)(pppppplStack_5a8 + 1);
        do {
          pppppplVar31 = *ppppppplVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
          if (bVar6) {
            *ppppppplVar1 = (long ******)((long)pppppplVar31 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppplVar31 == (long ******)0x0) {
          (*(code *)(*pppppplStack_5a8)[2])(pppppplStack_5a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar29);
        }
      }
      pppppplStack_5b0 = (long ******)&pppppplStack_598;
      plVar8 = param_1 + 0x188;
      pppppplStack_598 = (long ******)ppppppplVar27;
      FUN_10a0eb384(plVar8,&pppppplStack_598,&UNK_10dd5b8f9,&pppppplStack_5b0,&pppppplStack_3c0);
    }
    ppppppplVar27 = (long *******)plVar8[3];
    plStack_5c8 = (long *)plVar8[4];
    if (plStack_5c8 != (long *)0x0) {
      plVar8 = plStack_5c8 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppppplStack_5d0 = (long ******)ppppppplVar27;
    func_0x000109296cdc(&pppppplStack_5b0,*param_1,ppppppplVar27,*param_3);
    uStack_280 = 1;
    uStack_3a0 = 0;
    lStack_398 = 0;
    uStack_3a8 = (long *******)pppppplStack_5b0;
    pppppplStack_3b0 = (long ******)ppppppplVar27;
    (*(code *)(*ppppppplVar11)[9])(ppppppplVar11,&pppppplStack_3b0);
    if (ppppppplVar22 != (long *******)0x0) {
      FUN_10a097500(ppppppplVar22,&pppppplStack_5b0);
      FUN_10a097468(ppppppplVar22,&pppppplStack_5d0);
    }
    pppppplVar29 = pppppplStack_5a8;
    if ((long *******)pppppplStack_5a8 != (long *******)0x0) {
      ppppppplVar27 = (long *******)(pppppplStack_5a8 + 1);
      do {
        pppppplVar31 = *ppppppplVar27;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
        if (bVar6) {
          *ppppppplVar27 = (long ******)((long)pppppplVar31 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pppppplVar31 == (long ******)0x0) {
        (*(code *)(*pppppplStack_5a8)[2])(pppppplStack_5a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar29);
      }
    }
    plVar8 = plStack_5c8;
    if (plStack_5c8 != (long *)0x0) {
      plVar12 = plStack_5c8 + 1;
      do {
        lVar17 = *plVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_5c8 + 0x10))(plStack_5c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  else {
    if ((long *******)pppppplStack_570 == (long *******)0x0) {
      ppppppplVar27 = (long *******)pppppplStack_618;
      FUN_10a08e0bc();
    }
    else {
      ppppppplVar27 = (long *******)pppppplStack_570;
      (*(code *)(*pppppplStack_570)[9])();
    }
    (*(code *)(*ppppppplVar27)[9])();
    uVar16 = *param_3;
    uVar18 = 5;
    if (*param_12 != 1) {
      uVar18 = 0;
    }
    if (uVar16 != 0) {
      if (*(int *)(uVar16 + 0x34) == 3) {
        uVar19 = *(int *)(uVar16 + 0x2c) * 6;
      }
      else if (*(int *)(uVar16 + 0x34) == 2) {
        uVar19 = *(uint *)(uVar16 + 0x2c);
      }
      else {
        uVar19 = 1;
      }
      pppppplStack_3b0 = (long ******)0x6000000048;
      uStack_3a8 = (long *******)CONCAT44(2,uVar18);
      lStack_398 = (ulong)*(uint *)(uVar16 + 0x30) << 0x20;
      lStack_390 = (ulong)uVar19 << 0x20;
      uStack_3a0 = uVar16;
      (*(code *)(*ppppppplVar27)[7])(ppppppplVar27,0x48,0x40,0,0,0,0,0,&pppppplStack_3b0,1);
    }
    (*(code *)(*ppppppplVar27)[8])(ppppppplVar27);
    pppppplStack_3b0 = (long ******)CONCAT44(pppppplStack_3b0._4_4_,1);
    uStack_11c = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    _bzero((ulong)&pppppplStack_3b0 | 4,0x28d);
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_d8 = 0;
    uStack_c8 = 0xffffffffffffffff;
    uStack_380 = 0;
    uStack_37c = 0;
    iStack_388 = 0;
    uStack_384 = 0;
    uStack_370 = 0;
    uStack_378 = 0;
    lStack_390 = 0;
    lStack_398 = 0;
    uStack_368 = 0;
    uStack_168 = 1;
    uStack_3a8 = (long *******)*param_3;
    iStack_388 = *param_12;
    uStack_3a0 = uStack_3a0 & 0xffffffff;
    uStack_384 = 1;
    uStack_380 = 2;
    uStack_378 = 0;
    uStack_370 = 0;
    (*(code *)(*ppppppplVar11)[10])(ppppppplVar11,&pppppplStack_3b0);
  }
  plVar8 = (long *)(param_12 + 8);
  if ((*(int *)(*param_1 + 0x734) == 1) && (*(int *)(*param_2 + 0xb0) == 0x8d65)) {
    lVar17 = 0x600;
  }
  else {
    lVar17 = 8;
  }
  plVar12 = (long *)((long)param_1 + lVar17);
  *(undefined4 *)(plVar12 + 0x66) = param_4;
  if (plVar12 + 0x73 != plVar8) {
    plVar12[0x93] = 0;
    if (*(long *)(param_12 + 0x48) != 0) {
      lVar17 = *(long *)(param_12 + 0x48) << 5;
      do {
        func_0x00010928bc78(plVar12 + 0x73,plVar8);
        plVar8 = plVar8 + 4;
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
    }
  }
  func_0x000109293c4c(plVar12,*(undefined4 *)(*param_3 + 0x40),2,2,2);
  func_0x000109294420();
  (*(code *)(*ppppppplVar11)[0xf])(ppppppplVar11,*plVar12);
  (*(code *)(*ppppppplVar11)[0xe])(ppppppplVar11,&uStack_588);
  plVar8 = (long *)plVar12[2];
  pppppplStack_3b0 = (long ******)&UNK_10f63a7dc;
  uStack_3a8 = (long *******)0x30;
  if (plVar12[3] - (long)plVar8 == 0x10) {
    pppppplStack_5b0 = (long ******)*plVar8;
    pppppplStack_3b0 = (long ******)&pppppplStack_5b0;
    plVar13 = param_1 + 0x183;
    FUN_10a0eb970(plVar13,&pppppplStack_5b0,&UNK_10dd5b8f9,&pppppplStack_3b0,&pppppplStack_5d0);
    plVar13 = plVar13 + 3;
    lVar17 = *plVar13;
    if (lVar17 == 0) {
      FUN_10a0ebe20(&pppppplStack_3b0,&pppppplStack_5b0,param_1,plVar8);
      func_0x00010a0e6614(plVar13,&pppppplStack_3b0);
      plVar8 = (long *)uStack_3a8;
      if (uStack_3a8 != (long *******)0x0) {
        plVar2 = (long *)(uStack_3a8 + 1);
        do {
          lVar17 = *plVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)((long)*uStack_3a8 + 0x10))(uStack_3a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      lVar17 = *plVar13;
    }
    func_0x00010928ea98(&pppppplStack_598,lVar17);
    plVar8 = (long *)*plVar12;
    (**(code **)(*plVar8 + 0x30))();
    if (((*(byte *)(plVar8 + 6) & 1) != 0) &&
       (puVar3 = (undefined4 *)*plVar8, (undefined4 *)plVar8[1] != puVar3)) {
      uVar18 = *puVar3;
      pppppplStack_5b0 = (long ******)0x0;
      pppppplStack_5a8 = (long ******)0x0;
      uStack_5a0 = 0;
      pppppplStack_5d0 = (long ******)0x0;
      plStack_5c8 = (long *)0x0;
      uStack_5c0 = 0;
      uVar26 = *(undefined8 *)(*plVar12 + 0x500);
      (*(code *)(*ppppppplVar11)[0x13])(ppppppplVar11,0,uVar26,*param_5,param_6);
      (*(code *)(*ppppppplVar11)[0x13])(ppppppplVar11,1,uVar26,*param_7,param_8);
      if (*(long *)(param_12 + 0x4c) == *(long *)(param_12 + 0x4e)) {
        uVar15 = 0;
        if ((char)param_12[0x61] == '\x01') {
          ppppplStack_630 = *(long ******)(param_12 + 0x58);
          iVar33 = param_12[0x5a];
          ppppplStack_5f8 = *(long ******)(param_12 + 0x5b);
          iStack_634 = param_12[0x5d];
          ppppplStack_628 = *(long ******)(param_12 + 0x5e);
          iVar28 = param_12[0x60];
        }
        else {
          ppppplStack_5f8 = (long *****)0x3f80000000000000;
          ppppplStack_630 = (long *****)0x3f800000;
          ppppplStack_628 = (long *****)0x0;
          iStack_634 = 0;
          iVar33 = 0;
          iVar28 = 0x3f800000;
        }
        pppppplVar31 = (long ******)*param_11;
        uVar32 = *(undefined4 *)(param_11 + 1);
        pppppplVar29 = *(long *******)((long)param_11 + 0xc);
        uVar30 = *(undefined4 *)((long)param_11 + 0x14);
        pppppplVar34 = (long ******)param_11[3];
        uVar35 = *(undefined4 *)(param_11 + 4);
        if ((char)param_12[0x4a] == '\0') {
          uVar15 = 0x3f800000;
        }
        param_1 = (long *)*param_1;
        func_0x00010a08f1bc();
        if ((*(byte *)(*param_1 + 0x440) & 1) == 0) goto LAB_10a0e63e0;
        puVar14 = (undefined8 *)(*param_1 + 0x3b0);
        FUN_10a15566c();
        func_0x00010928e530(&pppppplStack_3b0,*puVar14,0x70);
        ppppppplVar27 = (long *******)pppppplStack_3b0;
        (*(code *)(*pppppplStack_3b0)[6])(pppppplStack_3b0,2,uStack_3a0 & 0xffffffff,0);
        if (ppppppplVar27 == (long *******)0x0) {
LAB_10a0e63d4:
          func_0x000105688514(&UNK_10f63b222);
          goto LAB_10a0e63e0;
        }
        *ppppppplVar27 = (long ******)ppppplStack_630;
        *(int *)(ppppppplVar27 + 1) = iVar33;
        *(undefined4 *)((long)ppppppplVar27 + 0xc) = 0;
        ppppppplVar27[2] = (long ******)ppppplStack_5f8;
        *(int *)(ppppppplVar27 + 3) = iStack_634;
        *(undefined4 *)((long)ppppppplVar27 + 0x1c) = 0;
        ppppppplVar27[4] = (long ******)ppppplStack_628;
        *(int *)(ppppppplVar27 + 5) = iVar28;
        *(undefined4 *)((long)ppppppplVar27 + 0x2c) = 0;
        ppppppplVar27[6] = pppppplVar31;
        *(undefined4 *)(ppppppplVar27 + 7) = uVar32;
        *(undefined4 *)((long)ppppppplVar27 + 0x3c) = 0;
        ppppppplVar27[8] = pppppplVar29;
        *(undefined4 *)(ppppppplVar27 + 9) = uVar30;
        *(undefined4 *)((long)ppppppplVar27 + 0x4c) = 0;
        ppppppplVar27[10] = pppppplVar34;
        *(undefined4 *)(ppppppplVar27 + 0xb) = uVar35;
        *(undefined4 *)((long)ppppppplVar27 + 0x5c) = 0;
        *(undefined4 *)(ppppppplVar27 + 0xc) = uVar15;
        (*(code *)(*pppppplStack_3b0)[7])();
        plStack_5c8 = (long *)uStack_3a8;
        pppppplStack_5d0 = pppppplStack_3b0;
        uStack_5c0 = uStack_3a0;
        if (*(long *)(puVar3 + 4) == *(long *)(puVar3 + 2)) goto LAB_10a0e63e0;
        (*(code *)(*pppppplStack_598)[7])
                  (pppppplStack_598,*(undefined4 *)(*(long *)(puVar3 + 2) + 0x18),pppppplStack_3b0,
                   uStack_3a0 & 0xffffffff,uStack_3a0 >> 0x20,0);
      }
      else {
        pppppplStack_5a8 = pppppplStack_5b0;
        lVar17 = *(long *)(puVar3 + 2);
        if (*(long *)(puVar3 + 4) != lVar17) {
          uVar16 = 0;
          lVar24 = 0x18;
          do {
            FUN_10a0e6678(&pppppplStack_5b0,lVar17 + lVar24);
            uVar16 = uVar16 + 1;
            lVar17 = *(long *)(puVar3 + 2);
            lVar24 = lVar24 + 0x40;
          } while (uVar16 < (ulong)(*(long *)(puVar3 + 4) - lVar17 >> 6));
        }
        __ZNSt3__16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_
                  (pppppplStack_5b0,pppppplStack_5a8,&pppppplStack_3b0);
        uVar20 = (long)pppppplStack_5a8 - (long)pppppplStack_5b0 >> 2;
        lVar17 = *(long *)(param_12 + 0x4c);
        uVar16 = *(long *)(param_12 + 0x4e) - lVar17 >> 4;
        if (uVar20 <= uVar16) {
          uVar16 = uVar20;
        }
        if (uVar16 != 0) {
          lVar24 = 0;
          uVar16 = 0;
          do {
            (*(code *)(*pppppplStack_598)[7])
                      (pppppplStack_598,*(undefined4 *)((long)pppppplStack_5b0 + uVar16 * 4),
                       *(undefined8 *)(lVar17 + lVar24),0,0,0);
            uVar16 = uVar16 + 1;
            uVar21 = (long)pppppplStack_5a8 - (long)pppppplStack_5b0 >> 2;
            lVar17 = *(long *)(param_12 + 0x4c);
            uVar20 = *(long *)(param_12 + 0x4e) - lVar17 >> 4;
            if (uVar21 <= uVar20) {
              uVar20 = uVar21;
            }
            lVar24 = lVar24 + 0x10;
          } while (uVar16 < uVar20);
        }
      }
      lVar17 = *(long *)(puVar3 + 0xe);
      pppppplStack_5a8 = pppppplStack_5b0;
      if (*(long *)(puVar3 + 0x10) != lVar17) {
        uVar16 = 0;
        lVar24 = 0x18;
        do {
          FUN_10a0e6678(&pppppplStack_5b0,lVar17 + lVar24);
          uVar16 = uVar16 + 1;
          lVar17 = *(long *)(puVar3 + 0xe);
          lVar24 = lVar24 + 0x28;
        } while (uVar16 < (ulong)((*(long *)(puVar3 + 0x10) - lVar17 >> 3) * -0x3333333333333333));
      }
      __ZNSt3__16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_
                (pppppplStack_5b0,pppppplStack_5a8,&pppppplStack_3b0);
      if (pppppplStack_5a8 != pppppplStack_5b0) {
        (*(code *)(*pppppplStack_598)[9])
                  (pppppplStack_598,*(undefined4 *)pppppplStack_5b0,*param_2,5,0);
        lVar17 = 0;
        uVar16 = 1;
        while( true ) {
          uVar21 = (long)pppppplStack_5a8 - (long)pppppplStack_5b0 >> 2;
          uVar20 = *(long *)(param_12 + 0x54) - *(long *)(param_12 + 0x52) >> 4;
          if (uVar21 <= uVar20) {
            uVar20 = uVar21;
          }
          if (uVar20 <= uVar16 - 1) {
            pppppplStack_5a8 = pppppplStack_5b0;
            lVar17 = *(long *)(puVar3 + 0x1a);
            if (*(long *)(puVar3 + 0x1c) != lVar17) {
              uVar16 = 0;
              lVar24 = 0x18;
              do {
                FUN_10a0e6678(&pppppplStack_5b0,lVar17 + lVar24);
                uVar16 = uVar16 + 1;
                lVar17 = *(long *)(puVar3 + 0x1a);
                lVar24 = lVar24 + 0x28;
              } while (uVar16 < (ulong)((*(long *)(puVar3 + 0x1c) - lVar17 >> 3) *
                                       -0x3333333333333333));
            }
            __ZNSt3__16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_
                      (pppppplStack_5b0,pppppplStack_5a8,&pppppplStack_3b0);
            uVar20 = (long)pppppplStack_5a8 - (long)pppppplStack_5b0 >> 2;
            lVar17 = *(long *)(param_12 + 2);
            uVar16 = *(long *)(param_12 + 4) - lVar17 >> 4;
            if (uVar20 <= uVar16) {
              uVar16 = uVar20;
            }
            if (uVar16 != 0) {
              lVar24 = 0;
              uVar16 = 0;
              do {
                (*(code *)(*pppppplStack_598)[0xc])
                          (pppppplStack_598,*(undefined4 *)((long)pppppplStack_5b0 + uVar16 * 4),
                           *(undefined8 *)(lVar17 + lVar24),0);
                uVar16 = uVar16 + 1;
                uVar21 = (long)pppppplStack_5a8 - (long)pppppplStack_5b0 >> 2;
                lVar17 = *(long *)(param_12 + 2);
                uVar20 = *(long *)(param_12 + 4) - lVar17 >> 4;
                if (uVar21 <= uVar20) {
                  uVar20 = uVar21;
                }
                lVar24 = lVar24 + 0x10;
              } while (uVar16 < uVar20);
            }
            (*(code *)(*ppppppplVar11)[0x10])(ppppppplVar11,uVar18,uVar26,pppppplStack_598,0,0);
            (*(code *)(*ppppppplVar11)[0x15])(ppppppplVar11,param_9,0,1,0);
            (*(code *)(*ppppppplVar11)[8])(ppppppplVar11);
            if (*(char *)(lVar25 + 0x5c) == '\x01') {
              if ((long *******)pppppplStack_570 == (long *******)0x0) {
                FUN_10a08e0bc();
              }
              else {
                pppppplStack_618 = pppppplStack_570;
                (*(code *)(*pppppplStack_570)[9])();
              }
              (*(code *)(*pppppplStack_618)[9])();
              uVar16 = *param_3;
              if (uVar16 != 0) {
                if (*(int *)(uVar16 + 0x34) == 3) {
                  uVar19 = *(int *)(uVar16 + 0x2c) * 6;
                }
                else if (*(int *)(uVar16 + 0x34) == 2) {
                  uVar19 = *(uint *)(uVar16 + 0x2c);
                }
                else {
                  uVar19 = 1;
                }
                uStack_3a8 = (long *******)0x500000002;
                pppppplStack_3b0 = (long ******)0x800000040;
                lStack_398 = (ulong)*(uint *)(uVar16 + 0x30) << 0x20;
                lStack_390 = (ulong)uVar19 << 0x20;
                uStack_3a0 = uVar16;
                (*(code *)(*pppppplStack_618)[7])
                          (pppppplStack_618,0x40,8,0,0,0,0,0,&pppppplStack_3b0,1);
              }
              (*(code *)(*pppppplStack_618)[8])(pppppplStack_618);
            }
            if (ppppppplVar22 != (long *******)0x0) {
              FUN_10a097598(ppppppplVar22,plVar12);
              FUN_10a0973d0(ppppppplVar22,&pppppplStack_598);
              FUN_10a097630(ppppppplVar22,param_5);
              FUN_10a097630(ppppppplVar22,param_7);
              FUN_10a097928(ppppppplVar22,&pppppplStack_5d0);
              uVar20 = (long)pppppplStack_5a8 - (long)pppppplStack_5b0 >> 2;
              lVar25 = *(long *)(param_12 + 0x4c);
              uVar16 = *(long *)(param_12 + 0x4e) - lVar25 >> 4;
              if (uVar20 <= uVar16) {
                uVar16 = uVar20;
              }
              if (uVar16 != 0) {
                lVar17 = 0;
                uVar16 = 0;
                do {
                  FUN_10a097928(ppppppplVar22,lVar25 + lVar17);
                  uVar16 = uVar16 + 1;
                  uVar21 = (long)pppppplStack_5a8 - (long)pppppplStack_5b0 >> 2;
                  lVar25 = *(long *)(param_12 + 0x4c);
                  uVar20 = *(long *)(param_12 + 0x4e) - lVar25 >> 4;
                  if (uVar21 <= uVar20) {
                    uVar20 = uVar21;
                  }
                  lVar17 = lVar17 + 0x10;
                } while (uVar16 < uVar20);
              }
              FUN_10a0977f8(ppppppplVar22,param_2);
              uVar20 = (long)pppppplStack_5a8 - (long)pppppplStack_5b0 >> 2;
              lVar25 = *(long *)(param_12 + 0x52);
              uVar16 = *(long *)(param_12 + 0x54) - lVar25 >> 4;
              if (uVar20 <= uVar16) {
                uVar16 = uVar20;
              }
              if (uVar16 != 0) {
                lVar17 = 0;
                uVar16 = 0;
                do {
                  FUN_10a0977f8(ppppppplVar22,lVar25 + lVar17);
                  uVar16 = uVar16 + 1;
                  uVar20 = (long)pppppplStack_5a8 - (long)pppppplStack_5b0 >> 2;
                  lVar25 = *(long *)(param_12 + 0x52);
                  uVar21 = *(long *)(param_12 + 0x54) - lVar25 >> 4;
                  if (uVar20 <= uVar21) {
                    uVar21 = uVar20;
                  }
                  lVar17 = lVar17 + 0x10;
                } while (uVar16 < uVar21);
              }
              lVar25 = *(long *)(param_12 + 2);
              uVar16 = *(long *)(param_12 + 4) - lVar25 >> 4;
              if (uVar20 <= uVar16) {
                uVar16 = uVar20;
              }
              if (uVar16 != 0) {
                lVar17 = 0;
                uVar16 = 0;
                do {
                  FUN_10a097890(ppppppplVar22,lVar25 + lVar17);
                  uVar16 = uVar16 + 1;
                  uVar21 = (long)pppppplStack_5a8 - (long)pppppplStack_5b0 >> 2;
                  lVar25 = *(long *)(param_12 + 2);
                  uVar20 = *(long *)(param_12 + 4) - lVar25 >> 4;
                  if (uVar21 <= uVar20) {
                    uVar20 = uVar21;
                  }
                  lVar17 = lVar17 + 0x10;
                } while (uVar16 < uVar20);
              }
            }
            if ((long *******)pppppplStack_570 != (long *******)0x0) {
              FUN_10a08e2f4();
            }
            plVar8 = plStack_5c8;
            if (plStack_5c8 != (long *)0x0) {
              plVar12 = plStack_5c8 + 1;
              do {
                lVar25 = *plVar12;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar6) {
                  *plVar12 = lVar25 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar25 == 0) {
                (**(code **)(*plStack_5c8 + 0x10))(plStack_5c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            if ((long *******)pppppplStack_5b0 != (long *******)0x0) {
              pppppplStack_5a8 = pppppplStack_5b0;
              __ZdlPv();
            }
            if (plStack_590 != (long *)0x0) {
              plVar8 = plStack_590 + 1;
              do {
                lVar25 = *plVar8;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar6) {
                  *plVar8 = lVar25 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar25 == 0) {
                (**(code **)(*plStack_590 + 0x10))(plStack_590);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_590);
              }
            }
            plVar8 = plStack_568;
            if (plStack_568 != (long *)0x0) {
              plVar12 = plStack_568 + 1;
              do {
                lVar25 = *plVar12;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar6) {
                  *plVar12 = lVar25 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar25 == 0) {
                (**(code **)(*plStack_568 + 0x10))(plStack_568);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            if (bVar5) {
              __ZNSt3__115recursive_mutex6unlockEv(uStack_620);
            }
            FUN_10a09d158(auStack_560);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
              return;
            }
            ___stack_chk_fail();
            goto LAB_10a0e63d4;
          }
          if (uVar21 <= uVar16) break;
          lVar24 = uVar16 * 4;
          puVar14 = (undefined8 *)(*(long *)(param_12 + 0x52) + lVar17);
          uVar16 = uVar16 + 1;
          lVar17 = lVar17 + 0x10;
          (*(code *)(*pppppplStack_598)[9])
                    (pppppplStack_598,*(undefined4 *)((long)pppppplStack_5b0 + lVar24),*puVar14,5,0)
          ;
        }
      }
    }
  }
  else {
    FUN_10a0edfc4(&pppppplStack_3b0);
  }
LAB_10a0e63e0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a0e63e4);
  (*pcVar7)();
}



/* Entry: 10a0e652c; end: 10a0e65af;  */

void FUN_10a0e652c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong auStack_40 [2];
  
  auStack_40[1] = 0x600000001;
  auStack_40[0] = (ulong)(uint)((int)param_4 << 3);
  (**(code **)(*param_2 + 0x70))(param_1,param_2,auStack_40);
  FUN_10a0eb884(param_1,0,param_3,param_4);
  return;
}



/* Entry: 10a0e65b0; end: 10a0e6677;  */

undefined8 * FUN_10a0e65b0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0e6678; end: 10a0e673b;  */

long * FUN_10a0e6678(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar10 = puVar2 + 1;
    *puVar2 = (int)*param_2;
    plVar5 = param_1;
  }
  else {
    lVar9 = (long)puVar2 - *param_1;
    uVar1 = (lVar9 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_109ffe1ac();
      lVar11 = param_2[1];
      lVar9 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      plVar8 = (long *)param_1[1];
      param_1[1] = lVar11;
      *param_1 = lVar9;
      if (plVar8 != (long *)0x0) {
        plVar5 = plVar8 + 1;
        do {
          lVar9 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 1;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar7 = 0x3fffffffffffffff;
    }
    plVar8 = param_1;
    FUN_109ffe1c0();
    lVar11 = *param_1;
    puVar2 = (undefined4 *)((long)plVar8 + lVar9);
    lVar9 = (long)puVar2 - (param_1[1] - lVar11);
    puVar10 = puVar2 + 1;
    *puVar2 = (int)*param_2;
    _memcpy(lVar9,lVar11);
    plVar5 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)plVar8 + uVar7 * 4;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return plVar5;
}



/* Entry: 10a0e673c; end: 10a0e679f;  */

undefined8 * FUN_10a0e673c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0e67a0; end: 10a0e68b7;  */

long * FUN_10a0e67a0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    lVar9 = param_2[1];
    uVar14 = *param_2;
    puVar13[1] = param_2[1];
    *puVar13 = uVar14;
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar7) {
          *plVar8 = *plVar8 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar13 = puVar13 + 2;
    plVar8 = param_1;
  }
  else {
    lVar9 = (long)puVar13 - *param_1;
    uVar1 = (lVar9 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a0eaa30();
      _bzero();
      lVar9 = 0;
      do {
        puVar13 = (undefined8 *)((long)param_1 + lVar9);
        puVar13[5] = 0;
        puVar13[4] = 0xffffffff;
        puVar13[7] = 0;
        puVar13[6] = 0xffffffff;
        puVar13[1] = 0;
        *puVar13 = 0xffffffff;
        puVar13[3] = 0;
        puVar13[2] = 0xffffffff;
        lVar9 = lVar9 + 0x40;
      } while (lVar9 != 0x200);
      lVar9 = 0;
      param_1[0x4f] = 0;
      param_1[0x4e] = 0;
      param_1[0x51] = 0;
      param_1[0x50] = 0;
      param_1[0x4b] = 0;
      param_1[0x4a] = 0;
      param_1[0x4d] = 0;
      param_1[0x4c] = 0;
      param_1[0x47] = 0;
      param_1[0x46] = 0;
      param_1[0x49] = 0;
      param_1[0x48] = 0;
      param_1[0x43] = 0;
      param_1[0x42] = 0;
      param_1[0x45] = 0;
      param_1[0x44] = 0;
      param_1[0x41] = 0;
      param_1[0x40] = 0;
      param_1[0x46] = 0xffffffff;
      param_1[0x45] = 0x100000000;
      param_1[0x48] = 0xffffffff;
      param_1[0x47] = 0x100000000;
      param_1[0x42] = 0xffffffff;
      param_1[0x41] = 0x100000000;
      param_1[0x44] = 0xffffffff;
      param_1[0x43] = 0x100000000;
      param_1[0x4e] = 0xffffffff;
      param_1[0x4d] = 0x100000000;
      param_1[0x50] = 0xffffffff;
      param_1[0x4f] = 0x100000000;
      param_1[0x4a] = 0xffffffff;
      param_1[0x49] = 0x100000000;
      param_1[0x4c] = 0xffffffff;
      param_1[0x4b] = 0x100000000;
      param_1[0x51] = 0;
      *(undefined4 *)(param_1 + 0x52) = 0;
      param_1[0x54] = 0;
      param_1[0x53] = 0;
      param_1[0x56] = 0;
      param_1[0x55] = 0;
      param_1[0x58] = 0;
      param_1[0x57] = 0;
      param_1[0x5a] = 0;
      param_1[0x59] = 0;
      param_1[0x5c] = 0;
      param_1[0x5b] = 0;
      param_1[0x5e] = 0;
      param_1[0x5d] = 0;
      param_1[0x60] = 0;
      param_1[0x5f] = 0;
      param_1[0x62] = 0;
      param_1[0x61] = 0;
      param_1[100] = 0;
      param_1[99] = 0;
      param_1[0x66] = 0;
      param_1[0x65] = 0;
      param_1[0x68] = 0;
      param_1[0x67] = 0;
      param_1[0x6a] = 0;
      param_1[0x69] = 0;
      param_1[0x6c] = 0;
      param_1[0x6b] = 0;
      param_1[0x6e] = 0;
      param_1[0x6d] = 0;
      param_1[0x70] = 0;
      param_1[0x6f] = 0;
      param_1[0x72] = 0;
      param_1[0x71] = 0;
      param_1[0x74] = 0;
      param_1[0x73] = 0;
      param_1[0x76] = 0;
      param_1[0x75] = 0;
      param_1[0x78] = 0;
      param_1[0x77] = 0;
      do {
        *(undefined8 *)((long)param_1 + lVar9 + 0x2d8) = 0;
        *(undefined8 *)((long)param_1 + lVar9 + 0x2d0) = 0;
        *(undefined8 *)((long)param_1 + lVar9 + 0x2c8) = 0;
        *(undefined8 *)((long)param_1 + lVar9 + 0x2e0) = 0xffffffff;
        lVar9 = lVar9 + 0x20;
      } while (lVar9 != 0x100);
      param_1[0x96] = 0;
      param_1[0x95] = 0;
      param_1[0x98] = 0;
      param_1[0x97] = 0;
      uVar12 = (uint)param_2;
      param_1[0x92] = 0;
      param_1[0x91] = 0;
      param_1[0x94] = 0;
      param_1[0x93] = 0;
      puVar5 = &UNK_10e495ea8;
      if (uVar12 != 2) {
        puVar5 = &UNK_10e495ec0;
      }
      param_1[0x8e] = 0;
      param_1[0x8d] = 0;
      param_1[0x90] = 0;
      param_1[0x8f] = 0;
      puVar4 = &UNK_10e495f20;
      if (uVar12 != 3) {
        puVar4 = puVar5;
      }
      param_1[0x8a] = 0;
      param_1[0x89] = 0;
      param_1[0x8c] = 0;
      param_1[0x8b] = 0;
      puVar5 = &UNK_10e495e90;
      if (1 < uVar12) {
        puVar5 = puVar4;
      }
      param_1[0x86] = 0;
      param_1[0x85] = 0;
      param_1[0x88] = 0;
      param_1[0x87] = 0;
      param_1[0x82] = 0;
      param_1[0x81] = 0;
      param_1[0x84] = 0;
      param_1[0x83] = 0;
      param_1[0x7e] = 0;
      param_1[0x7d] = 0;
      param_1[0x80] = 0;
      param_1[0x7f] = 0;
      param_1[0x7a] = 0;
      param_1[0x79] = 0;
      param_1[0x7c] = 0;
      param_1[0x7b] = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 0x89,puVar5);
      puVar5 = &UNK_10e495ef0;
      if (uVar12 != 2) {
        puVar5 = &UNK_10e495f08;
      }
      puVar4 = &UNK_10e495f20;
      if (uVar12 != 3) {
        puVar4 = puVar5;
      }
      puVar5 = &UNK_10e495ed8;
      if (1 < uVar12) {
        puVar5 = puVar4;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 0x91,puVar5);
      return param_1;
    }
    uVar10 = param_1[2] - *param_1;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    plVar8 = param_1;
    plStack_38 = param_1;
    FUN_10a0eaa44();
    puVar3 = (undefined8 *)((long)plVar8 + lVar9);
    lVar9 = param_2[1];
    uVar14 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar14;
    if (lVar9 != 0) {
      plVar2 = (long *)(lVar9 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = *plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar13 = puVar3 + 2;
    lVar9 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lStack_58 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar13;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar8 + uVar11 * 2);
    plVar8 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a0eaa78(plVar8);
  }
  param_1[1] = (long)puVar13;
  return plVar8;
}



/* Entry: 10a0e68b8; end: 10a0e6a7b;  */

long FUN_10a0e68b8(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _bzero(param_1,0x208);
  lVar5 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar5);
    puVar1[5] = 0;
    puVar1[4] = 0xffffffff;
    puVar1[7] = 0;
    puVar1[6] = 0xffffffff;
    puVar1[1] = 0;
    *puVar1 = 0xffffffff;
    puVar1[3] = 0;
    puVar1[2] = 0xffffffff;
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x200);
  lVar5 = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x228) = 0x100000000;
  *(undefined8 *)(param_1 + 0x240) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x238) = 0x100000000;
  *(undefined8 *)(param_1 + 0x210) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x208) = 0x100000000;
  *(undefined8 *)(param_1 + 0x220) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x218) = 0x100000000;
  *(undefined8 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x268) = 0x100000000;
  *(undefined8 *)(param_1 + 0x280) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x278) = 0x100000000;
  *(undefined8 *)(param_1 + 0x250) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x248) = 0x100000000;
  *(undefined8 *)(param_1 + 0x260) = 0xffffffff;
  *(undefined8 *)(param_1 + 600) = 0x100000000;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  do {
    lVar2 = param_1 + lVar5;
    *(undefined8 *)(lVar2 + 0x2d8) = 0;
    *(undefined8 *)(lVar2 + 0x2d0) = 0;
    *(undefined8 *)(lVar2 + 0x2c8) = 0;
    *(undefined8 *)(lVar2 + 0x2e0) = 0xffffffff;
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != 0x100);
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  puVar4 = &UNK_10e495ea8;
  if (param_2 != 2) {
    puVar4 = &UNK_10e495ec0;
  }
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  puVar3 = &UNK_10e495f20;
  if (param_2 != 3) {
    puVar3 = puVar4;
  }
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  puVar4 = &UNK_10e495e90;
  if (1 < param_2) {
    puVar4 = puVar3;
  }
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x448,puVar4);
  puVar4 = &UNK_10e495ef0;
  if (param_2 != 2) {
    puVar4 = &UNK_10e495f08;
  }
  puVar3 = &UNK_10e495f20;
  if (param_2 != 3) {
    puVar3 = puVar4;
  }
  puVar4 = &UNK_10e495ed8;
  if (1 < param_2) {
    puVar4 = puVar3;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x488,puVar4);
  return param_1;
}



/* Entry: 10a0e6a7c; end: 10a0e6abb;  */

undefined8 * FUN_10a0e6a7c(undefined8 *param_1)

{
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}


