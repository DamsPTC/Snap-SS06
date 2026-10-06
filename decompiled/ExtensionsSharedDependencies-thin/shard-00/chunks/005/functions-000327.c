/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0065b04c; end: 0065b0c3;  */

void FUN_0065b04c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar3 = (long)*(char *)((long)puVar1 + 0x17);
  puVar2 = puVar1;
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)*puVar1;
    lVar3 = puVar1[1];
  }
  FUN_0065b0c4(puVar2,lVar3,param_2,param_3);
  return;
}



/* Entry: 0065b0c4; end: 0065b0fb;  */

bool FUN_0065b0c4(int param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if (param_4 == 0) {
    return true;
  }
  if (param_2 < param_4) {
    return false;
  }
  func_0x00676350();
  _memcmp();
  return param_1 == 0;
}



/* Entry: 0065b0fc; end: 0065b17b;  */

void FUN_0065b0fc(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [16];
  char cStack_38;
  
  if (param_2 != 0) {
    func_0x00674c64();
    FUN_0066ead0(auStack_48,unaff_x20 + 0xb8);
    if (cStack_38 == '\x01') {
      for (lVar1 = 0; lVar1 < *(int *)(unaff_x19 + 0x34); lVar1 = lVar1 + 1) {
        FUN_006571a0();
        FUN_0065b0fc();
      }
    }
  }
  return;
}



/* Entry: 0065b17c; end: 0065b273;  */

undefined8 FUN_0065b17c(void)

{
  bool bVar1;
  long lVar2;
  int in_w3;
  int extraout_w8;
  int extraout_w8_00;
  long unaff_x20;
  undefined8 unaff_x23;
  
  func_0x00674b00();
  func_0x00675b2c();
  func_0x006748a8(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_00654614();
  func_0x00675c54();
  if (extraout_w8 == 0) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0065b17c();
      func_0x00675c54();
      bVar1 = extraout_w8_00 == 0;
    }
    if ((in_w3 != 0) && (bVar1)) {
      func_0x006748a8();
      lVar2 = unaff_x20;
      FUN_00654708();
      if ((int)lVar2 != 0) {
        unaff_x23 = *(undefined8 *)(unaff_x20 + 0x28);
        func_0x006748a8(unaff_x23);
        FUN_00654614();
      }
    }
  }
  func_0x00675210();
  return unaff_x23;
}



/* Entry: 0065b274; end: 0065b363;  */

byte * FUN_0065b274(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbStack_28;
  
  pbVar1 = param_1;
  FUN_0065b17c(param_1,*(undefined8 *)param_1,param_2,param_3);
  pbVar2 = pbVar1;
  FUN_00655c04();
  pbStack_28 = pbVar2;
  if (pbVar2 != *(byte **)(param_1 + 0xa8)) {
    pbVar3 = param_1 + 0xb8;
    func_0x0065b2e8(pbVar3,pbVar2);
    if ((int)pbVar3 == 0) {
      return pbVar1;
    }
  }
  if (1 < *pbVar1 - 9) {
    func_0x0065b318(param_1 + 0xf8,&pbStack_28);
  }
  return pbVar1;
}



/* Entry: 0065b364; end: 0065b457;  */

byte * FUN_0065b364(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x21;
  long lStack_40;
  long *plStack_38;
  
  func_0x00675410();
  FUN_0065b274();
  if (((*param_1 != 0) && (*(char *)(*unaff_x21 + 0x30) == '\x01')) &&
     (pbVar2 = param_1, FUN_00655c04(), pbVar2 != (byte *)unaff_x21[0x15])) {
    plVar3 = unaff_x21 + 0x17;
    func_0x0065b2e8(plVar3,pbVar2);
    if (((ulong)plVar3 & 1) == 0) {
      if (*param_1 - 9 < 2) {
        uVar4 = unaff_x21[0x15];
        func_0x006746d8();
        FUN_0065b04c();
        if ((uVar4 & 1) != 0) {
          return param_1;
        }
        lVar5 = unaff_x21[0x17];
        plVar3 = (long *)unaff_x21[0x18];
        FUN_0065b458();
        lStack_40 = lVar5;
        plStack_38 = plVar3;
        while (lStack_40 != 0) {
          lVar5 = *plStack_38;
          if (lVar5 != 0) {
            func_0x006746d8();
            iVar1 = (int)lVar5;
            FUN_0065b04c();
            if (iVar1 != 0) {
              return param_1;
            }
          }
          FUN_0065b480(&lStack_40);
        }
      }
      unaff_x21[0x23] = (long)pbVar2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(unaff_x21 + 0x24);
      param_1 = &UNK_0082398c;
    }
  }
  return param_1;
}



/* Entry: 0065b458; end: 0065b47f;  */

undefined1  [16] FUN_0065b458(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x0066ecd8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 0065b480; end: 0065b4b3;  */

long * FUN_0065b480(long *param_1)

{
  param_1[1] = param_1[1] + 8;
  *param_1 = *param_1 + 1;
  func_0x0066ecd8();
  return param_1;
}



/* Entry: 0065b4b4; end: 0065b6cb;  */

undefined1 * FUN_0065b4b4(long param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint extraout_w8;
  int extraout_w8_00;
  char *pcVar5;
  undefined1 *unaff_x19;
  char *unaff_x21;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  byte bStack_69;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  func_0x00676464();
  func_0x006751dc();
  *(undefined8 *)(param_1 + 0x118) = 0;
  func_0x0048d000(param_1 + 0x138);
  if (unaff_x21[0x17] < '\0') {
    if (*(long *)(unaff_x21 + 8) != 0) {
      pcVar5 = *(char **)unaff_x21;
      goto LAB_0065b508;
    }
  }
  else {
    pcVar5 = unaff_x21;
    if (unaff_x21[0x17] != '\0') {
LAB_0065b508:
      if (*pcVar5 == '.') {
        func_0x0067568c(&uStack_68);
        func_0x00675d84();
        goto LAB_0065b68c;
      }
    }
  }
  pcVar5 = unaff_x21;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm();
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (pcVar5 == (char *)0xffffffffffffffff) {
    func_0x00676680(&uStack_68);
  }
  else {
    func_0x0067657c(auStack_80);
    func_0x00675fa0(&uStack_68);
    func_0x00674d64();
  }
  func_0x00675e60(auStack_80);
  while (puVar4 = auStack_80, func_0x00675024(), puVar4 != (undefined1 *)0xffffffffffffffff) {
    func_0x0067659c(auStack_80,puVar4);
    uVar1 = uStack_78;
    if (-1 < (char)bStack_69) {
      uVar1 = (ulong)bStack_69;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(auStack_80,1,0x2e);
    FUN_004bab3c(auStack_80,&uStack_68);
    func_0x00675218();
    func_0x00675d84();
    func_0x00675c54();
    if (extraout_w8 != 0) {
      uVar2 = uStack_60;
      if (-1 < (long)uStack_58) {
        uVar2 = uStack_58 >> 0x38;
      }
      uVar3 = *(ulong *)(unaff_x21 + 8);
      if (-1 < unaff_x21[0x17]) {
        uVar3 = (ulong)(byte)unaff_x21[0x17];
      }
      puVar4 = param_3;
      if (uVar2 < uVar3) {
        if ((extraout_w8 < 0xb) && ((1 << (ulong)(extraout_w8 & 0x1f) & 0x692U) != 0)) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
                    (auStack_80);
          func_0x00675218();
          func_0x00675d84();
          func_0x00675c54();
          if (extraout_w8_00 == 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (unaff_x19 + 0x138,auStack_80);
          }
          goto LAB_0065b688;
        }
      }
      else if ((param_4 == 0) || (extraout_w8 == 1 || extraout_w8 == 4)) goto LAB_0065b688;
    }
    func_0x0067659c(auStack_80,uVar1);
  }
  func_0x00674f10();
  func_0x00675d84();
LAB_0065b688:
  func_0x00674d64();
  unaff_x19 = puVar4;
LAB_0065b68c:
  func_0x00674d80();
  return unaff_x19;
}



/* Entry: 0065b6cc; end: 0065bb5b;  */

dword ** FUN_0065b6cc(dword **param_1,dword *param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  undefined1 in_ZR;
  dword **ppdVar2;
  dword *pdVar3;
  dword *pdVar4;
  dword **ppdVar5;
  char *pcVar6;
  byte extraout_w8;
  byte extraout_w8_00;
  char cVar7;
  undefined8 extraout_x8;
  char *pcVar8;
  byte extraout_w9;
  byte extraout_w9_00;
  uint uVar9;
  dword *pdVar10;
  dword **ppdVar11;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long alStack_1f0 [14];
  undefined1 auStack_180 [112];
  dword *pdStack_110;
  char *pcStack_108;
  dword *pdStack_100;
  char *pcStack_f8;
  dword *pdStack_f0;
  char *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  char *pcStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  dword *pdStack_b0;
  char *pcStack_a8;
  dword *pdStack_80;
  char *pcStack_78;
  undefined8 uStack_48;
  
  ppdVar2 = param_1;
  pdVar3 = param_2;
  func_0x006743c8();
  uStack_48 = extraout_x8;
  FUN_0065b4b4();
  ppdVar11 = ppdVar2;
  if (*(char *)ppdVar2 == '\0') {
    pdVar10 = *param_1;
    in_ZR = 0;
    if (*(char *)((long)pdVar10 + 0x32) == '\x01') {
      bVar1 = *(byte *)((long)param_2 + 0x17);
      in_ZR = bVar1 == 0;
      pcStack_e8 = *(char **)(param_2 + 2);
      pdVar4 = *(dword **)param_2;
      if (-1 < (char)bVar1) {
        pcStack_e8 = (char *)(ulong)bVar1;
        pdVar4 = param_2;
      }
      ppdVar2 = *(dword ***)pdVar10;
      pdStack_f0 = pdVar4;
      if (ppdVar2 != (dword **)0x0) {
        FUN_005685a0();
      }
      pdStack_110 = (dword *)0x0;
      pcStack_108 = (char *)0x0;
      func_0x00675824();
      FUN_0065bb5c();
      if ((int)ppdVar2 != 0) {
        if ((char)*pdVar4 == '.') {
          pdVar3 = (dword *)&pdStack_f0;
          pcVar6 = (char *)((long)&MACH_HEADER.magic + 1);
          FUN_00485b24(pdVar3,1,0xffffffffffffffff);
          pdStack_100 = pdVar3;
          pcStack_f8 = pcVar6;
        }
        else {
          pcStack_f8 = pcStack_e8;
          pdStack_100 = pdStack_f0;
        }
        func_0x00675de8(alStack_1f0);
        FUN_0065bbd0(alStack_1f0);
        func_0x00675040();
        if (param_4 == 1) {
          func_0x006756e8();
          func_0x0065bc2c();
          func_0x006756e8();
          func_0x0065bc54();
          func_0x00675040();
          func_0x00675040();
        }
        else {
          func_0x006756e8();
          func_0x0065bc7c();
          func_0x00675040();
          if (param_4 == 2) {
            func_0x006756e8();
            func_0x0065bca4();
          }
        }
        if (alStack_1f0[0] == 0) {
          pdVar3 = *(dword **)(pdVar10 + 10);
          FUN_0066cda8(pdVar3,auStack_180);
          FUN_0066d15c(alStack_1f0);
          if (alStack_1f0[0] != 0) {
            ppdVar2 = &pdStack_100;
            pcVar6 = segment_command_00000020.segname + 6;
            FUN_00532cac(ppdVar2,0x2e,0xffffffffffffffff);
            if (ppdVar2 == (dword **)0xffffffffffffffff) {
              pdVar3 = (dword *)alStack_1f0;
              FUN_0065bccc();
              pcStack_108 = pcStack_f8;
              pdStack_110 = pdStack_100;
            }
            else {
              pdVar3 = (dword *)&pdStack_100;
              pcVar6 = (char *)0x0;
              FUN_00485b24(pdVar3,0,ppdVar2);
              pdStack_b0 = pdVar3;
              pcStack_a8 = pcVar6;
              func_0x006756e8();
              func_0x006671cc();
              FUN_00456d78(&pdStack_80,&pdStack_b0);
              FUN_004575b8(pdVar3,&pdStack_80);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pdStack_80);
              pdVar4 = (dword *)&pdStack_100;
              pcVar6 = (char *)((long)ppdVar2 + 1);
              FUN_00485b24(pdVar4,pcVar6,0xffffffffffffffff);
              pdStack_110 = pdVar4;
              pcStack_108 = pcVar6;
            }
            pcStack_78 = pcStack_f8;
            pdStack_80 = pdStack_100;
            pdVar4 = (dword *)&UNK_0091064d;
            FUN_00532c74();
            pdStack_b0 = pdVar4;
            pcStack_a8 = pcVar6;
            func_0x0067654c(&pcStack_c8);
            pcVar6 = pcStack_c8;
            if (-1 < (char)bStack_b1) {
              uStack_c0 = (ulong)bStack_b1;
              pcVar6 = (char *)&pcStack_c8;
            }
            FUN_0065bd0c(pdVar10,pcVar6,uStack_c0,alStack_1f0);
            ppdVar11 = (dword **)&pcStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            *(dword **)(pdVar10 + 4) = pdVar3;
            in_ZR = param_4 == 1;
            if ((bool)in_ZR) {
              pdVar10[0x10] = 1;
              func_0x006756e8();
              FUN_0065be28();
              *(dword ***)(pdVar10 + 0x1a) = ppdVar11;
              ppdVar11[10] = (dword *)0x0;
              ppdVar11[7] = (dword *)0x0;
              ppdVar11[6] = (dword *)0x0;
              ppdVar11[9] = (dword *)0x0;
              ppdVar11[8] = (dword *)0x0;
              ppdVar11[3] = (dword *)0x0;
              ppdVar11[2] = (dword *)0x0;
              ppdVar11[5] = (dword *)0x0;
              ppdVar11[4] = (dword *)0x0;
              ppdVar11[1] = (dword *)0x0;
              *ppdVar11 = (dword *)0x0;
              ppdVar5 = ppdVar11;
              func_0x00675e14();
              ppdVar11[1] = (dword *)ppdVar5;
              ppdVar11[2] = pdVar10;
              ppdVar11[4] = (dword *)&PTR_PTR_00b25f68;
              ppdVar11[5] = (dword *)&PTR_PTR_00b25a18;
              ppdVar11[6] = (dword *)&PTR_PTR_00b25a18;
              func_0x00675bb8();
              bVar1 = 0;
              if (!(bool)in_ZR) {
                bVar1 = extraout_w9;
              }
              *(byte *)((long)ppdVar11 + 1) = bVar1 | extraout_w8 & 0xfd;
              pcVar8 = (char *)((long)ppdVar11 + 4);
              pcVar8[0] = '\x01';
              pcVar8[1] = '\0';
              pcVar8[2] = '\0';
              pcVar8[3] = '\0';
              func_0x006756e8();
              FUN_0065bee4();
              ppdVar11[7] = (dword *)ppdVar5;
              ((char *)((long)ppdVar11 + 2))[0] = -1;
              ((char *)((long)ppdVar11 + 2))[1] = -1;
              ppdVar5[3] = (dword *)0x0;
              ppdVar5[2] = (dword *)0x0;
              ppdVar5[5] = (dword *)0x0;
              ppdVar5[4] = (dword *)0x0;
              ppdVar5[1] = (dword *)0x0;
              *ppdVar5 = (dword *)0x0;
              cVar7 = *(char *)((long)pdVar3 + 0x17);
              pcVar8 = (char *)(long)cVar7;
              if ((long)pcVar8 < 0) {
                if (*(long *)(pdVar3 + 2) != 0) goto LAB_0065b994;
LAB_0065ba54:
                FUN_00425cb4(&uStack_208,&UNK_00910660);
              }
              else {
                if (pcVar8 == (char *)0x0) goto LAB_0065ba54;
LAB_0065b994:
                in_ZR = cVar7 == '\0';
                pcStack_78 = *(char **)(pdVar3 + 2);
                pdStack_80 = *(dword **)pdVar3;
                if (-1 < cVar7) {
                  pcStack_78 = pcVar8;
                  pdStack_80 = pdVar3;
                }
                pdVar3 = (dword *)&UNK_00910672;
                FUN_00532c74();
                pdStack_b0 = pdVar3;
                pcStack_a8 = pcVar6;
                func_0x0067654c(&uStack_208);
              }
              pdVar10 = (dword *)alStack_1f0;
              func_0x00675a18();
              FUN_00425cb4(&pcStack_c8,&UNK_00910660);
              func_0x006766c0();
              uStack_d8 = uStack_200;
              uStack_e0 = uStack_208;
              uStack_d0 = uStack_1f8;
              func_0x00676bc0();
              pdVar3 = (dword *)&uStack_e0;
              FUN_004575b8(pdVar10 + 6);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
              ppdVar2 = (dword **)&pcStack_c8;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              ppdVar5[1] = pdVar10;
              func_0x00674d6c();
              pcVar6 = (char *)((long)ppdVar5 + 4);
              pcVar6[0] = '\0';
              pcVar6[1] = '\0';
              pcVar6[2] = '\0';
              pcVar6[3] = '\0';
              ppdVar5[2] = (dword *)ppdVar11;
              ppdVar5[3] = (dword *)&PTR_PTR_00b25f08;
              cVar7 = '\x04';
            }
            else {
              pdVar10[0xf] = 1;
              func_0x006756e8();
              func_0x0065bf3c();
              *(dword ***)(pdVar10 + 0x18) = ppdVar11;
              pdVar3 = &section_00000068.offset;
              ppdVar2 = ppdVar11;
              _bzero();
              func_0x00675e14();
              ppdVar11[1] = (dword *)ppdVar2;
              ppdVar11[2] = pdVar10;
              ppdVar11[4] = (dword *)&PTR_PTR_00b25cc0;
              ppdVar11[5] = (dword *)&PTR_PTR_00b25a18;
              ppdVar11[6] = (dword *)&PTR_PTR_00b25a18;
              func_0x00675bb8();
              bVar1 = 0;
              if (!(bool)in_ZR) {
                bVar1 = extraout_w9_00;
              }
              *(byte *)((long)ppdVar11 + 1) = bVar1 | extraout_w8_00 & 0xfd;
              in_ZR = param_4 == 2;
              if ((bool)in_ZR) {
                *(undefined4 *)(ppdVar11 + 0x11) = 1;
                func_0x006756e8();
                func_0x0065bf94();
                ppdVar11[0xb] = (dword *)ppdVar2;
                *ppdVar2 = (dword *)0x2000000000000001;
                ppdVar2[1] = (dword *)0x0;
                ppdVar2[3] = (dword *)&PTR_PTR_00b25a18;
                ppdVar2[4] = (dword *)&PTR_PTR_00b25a18;
              }
              cVar7 = '\x01';
            }
            *(char *)ppdVar11 = cVar7;
            goto LAB_0065bad8;
          }
          func_0x00675198();
          func_0x006764c0();
          func_0x00674bbc();
          ppdVar2 = &pdStack_80;
          FUN_00776794();
        }
        else {
          pdVar3 = (dword *)&UNK_00911b87;
          func_0x006764c0();
          func_0x00674bbc();
          ppdVar2 = &pdStack_80;
          FUN_00776794();
        }
        FUN_005558a0();
        goto LAB_0065bb38;
      }
      ppdVar11 = (dword **)&UNK_0082398c;
    }
  }
LAB_0065bad8:
  func_0x00674120(uStack_48);
  if ((bool)in_ZR) {
    return ppdVar11;
  }
LAB_0065bb38:
  ___stack_chk_fail();
  func_0x00674f88();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00674bc8();
  pcVar6 = (char *)0x0;
  uVar9 = 0;
  do {
    if (pdVar3 == (dword *)pcVar6) {
      return (dword **)(ulong)((uint)(pdVar3 != (dword *)0x0) & (uVar9 ^ 1));
    }
    bVar1 = *(byte *)((long)ppdVar2 + (long)pcVar6);
    if (((bVar1 & 0xffffffdf) - 0x41 < 0x1a) || (bVar1 == 0x5f || bVar1 - 0x30 < 10)) {
      uVar9 = 0;
    }
    else {
      if (bVar1 != 0x2e || uVar9 != 0) {
        return (dword **)0x0;
      }
      uVar9 = bVar1 == 0x2e | uVar9;
    }
    pcVar6 = pcVar6 + 1;
  } while( true );
}



/* Entry: 0065bb5c; end: 0065bbcf;  */

byte FUN_0065bb5c(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  
  lVar2 = 0;
  bVar3 = 0;
  do {
    if (param_2 == lVar2) {
      return param_2 != 0 & (bVar3 ^ 1);
    }
    bVar1 = *(byte *)(param_1 + lVar2);
    if (((bVar1 & 0xffffffdf) - 0x41 < 0x1a) || (bVar1 == 0x5f || bVar1 - 0x30 < 10)) {
      bVar3 = 0;
    }
    else {
      if (bVar1 != 0x2e || bVar3 != 0) {
        return 0;
      }
      bVar3 = bVar1 == 0x2e | bVar3;
    }
    lVar2 = lVar2 + 1;
  } while( true );
}



/* Entry: 0065bbd0; end: 0065bccb;  */

long * FUN_0065bbd0(long *param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_158 [24];
  
  if (*param_1 == 0) {
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 0xa8;
    return param_1;
  }
  func_0x006743d8();
  func_0x00674134();
  func_0x00674d28();
  if (*param_1 == 0) {
    *(int *)((long)param_1 + 0x74) = *(int *)((long)param_1 + 0x74) + param_2;
    return param_1;
  }
  func_0x006743d8();
  func_0x00674134();
  func_0x00674d28();
  if (*param_1 == 0) {
    iVar1 = 0x58;
  }
  else {
    func_0x006743d8();
    func_0x00674134();
    func_0x00674d28();
    if (*param_1 == 0) {
      iVar1 = 0x30;
    }
    else {
      func_0x006743d8();
      func_0x00674134();
      func_0x00674d28();
      if (*param_1 == 0) {
        iVar1 = 0x98;
      }
      else {
        func_0x006743d8();
        func_0x00674134();
        func_0x00674d28();
        if (*param_1 != 0) {
          func_0x006743d8();
          func_0x00674134();
          func_0x00674d28();
          func_0x00675a20();
          func_0x006759a0();
          FUN_00425cb4(auStack_158);
          FUN_004575b8(param_1,auStack_158);
          func_0x00674d6c();
          return param_1;
        }
        iVar1 = 0x28;
      }
    }
  }
  *(int *)(param_1 + 0xe) = (int)param_1[0xe] + param_2 * iVar1;
  return param_1;
}



/* Entry: 0065bccc; end: 0065bd0b;  */

undefined8 FUN_0065bccc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x00675a20();
  func_0x006759a0();
  FUN_00425cb4(auStack_38);
  FUN_004575b8(param_1,auStack_38);
  func_0x00674d6c();
  return param_1;
}



/* Entry: 0065bd0c; end: 0065be27;  */

long FUN_0065bd0c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uStack_58 = param_2;
  uStack_50 = param_3;
  if (*param_1 != 0) {
    FUN_005685a0();
  }
  lVar2 = param_4;
  func_0x0065bfec();
  _bzero();
  func_0x00675a20();
  FUN_00456d78(auStack_48,&uStack_58);
  func_0x006766ac();
  func_0x00674d80();
  *(long *)(lVar2 + 8) = param_4;
  func_0x0048afa0();
  *(undefined **)(lVar2 + 0x10) = &DAT_00b69408;
  *(long **)(lVar2 + 0x18) = param_1;
  *(undefined ***)(lVar2 + 0x80) = &PTR_PTR_00b25d18;
  *(undefined ***)(lVar2 + 0x88) = &PTR_PTR_00b25a18;
  *(undefined ***)(lVar2 + 0x90) = &PTR_PTR_00b25a18;
  if ((bRam0000000000b63ca8 & 1) == 0) {
    iVar1 = 0xb63ca8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar3 = 200;
      __Znwm();
      FUN_00654384();
      FUN_0054a414(0x6686bc,uVar3);
      uRam0000000000b63ca0 = uVar3;
      ___cxa_guard_release(0xb63ca8);
    }
  }
  *(undefined8 *)(lVar2 + 0x98) = uRam0000000000b63ca0;
  *(undefined ***)(lVar2 + 0xa0) = &PTR_PTR_00b25b30;
  *(undefined2 *)(lVar2 + 1) = 0x101;
  return lVar2;
}



/* Entry: 0065be28; end: 0065be7f;  */

long FUN_0065be28(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x006743f8();
    func_0x0067424c();
    goto LAB_0065be6c;
  }
  lVar1 = param_1[0x15];
  func_0x00674200((int)lVar1 + param_2 * 0x58);
  if (param_1 == (long *)0x0) {
    return lVar2 + (int)lVar1;
  }
  do {
    func_0x00533528();
    func_0x0067427c();
LAB_0065be6c:
    FUN_00776794();
    func_0x00674d28();
  } while( true );
}



/* Entry: 0065be80; end: 0065bee3;  */

void FUN_0065be80(void)

{
  long unaff_x19;
  undefined1 auStack_60 [48];
  
  func_0x006753bc();
  func_0x00675a18();
  func_0x00675498();
  FUN_00456d78();
  FUN_004575b8();
  FUN_00456d78(auStack_60);
  func_0x00675fa0(unaff_x19 + 0x18);
  func_0x00674d64();
  func_0x00674d80();
  return;
}



/* Entry: 0065bee4; end: 0065c03f;  */

long FUN_0065bee4(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x006743f8();
    func_0x0067424c();
    goto LAB_0065bf28;
  }
  lVar1 = param_1[0x15];
  func_0x00674200((int)lVar1 + param_2 * 0x30);
  if (param_1 == (long *)0x0) {
    return lVar2 + (int)lVar1;
  }
  do {
    func_0x00533528();
    func_0x0067427c();
LAB_0065bf28:
    FUN_00776794();
    func_0x00674d28();
  } while( true );
}



/* Entry: 0065c040; end: 0065c13b;  */

bool FUN_0065c040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char in_NG;
  char in_OV;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  undefined8 unaff_x19;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  
  func_0x00674b00();
  func_0x00675304();
  uVar3 = extraout_x11;
  uVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar3 = extraout_x8_03;
    uVar2 = param_2;
  }
  FUN_0065c13c(uVar2,uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = *(undefined8 *)(unaff_x21 + 8);
    func_0x00654c60(uVar3,param_4);
    if ((int)uVar3 != 0) {
      puVar4 = *(undefined8 **)(unaff_x21 + 0xb0);
      func_0x00674c64();
      Hint_Prefetch(*puVar4,0,2,0);
      puVar1 = &uStack_a8;
      uStack_a8 = param_4;
      FUN_0066d480(*puVar4);
      lVar5 = 0;
      uVar6 = unaff_x20[2];
      func_0x00674f64(*unaff_x20 >> 0xc ^ (ulong)puVar1 >> 7);
      uVar7 = extraout_x8;
      while( true ) {
        uVar7 = uVar7 & uVar6;
        func_0x00674f7c();
        while ((extraout_x8_00 & 0x8080808080808080) != 0) {
          func_0x006763d4();
          FUN_00667014(auStack_88,unaff_x20[1] + (uVar7 + (extraout_x8_01 >> 3) & uVar6) * 8);
          puVar1 = auStack_a0;
          FUN_00667014(puVar1,&uStack_a8);
          func_0x0067650c();
          if (((ulong)puVar1 & 1) != 0) goto LAB_00654e68;
          func_0x006763c8();
        }
        func_0x006745a8();
        if ((extraout_x8_02 & 1) != 0) break;
        lVar5 = lVar5 + 8;
        uVar7 = lVar5 + uVar7;
      }
      func_0x00675e8c();
      FUN_0066d4ac();
      *(undefined8 *)(unaff_x20[1] + (long)puVar1 * 8) = unaff_x19;
LAB_00654e68:
      return (extraout_x8_00 & 0x8080808080808080) == 0;
    }
    lVar5 = *(long *)(unaff_x21 + 8);
    func_0x006746d8();
    FUN_00654614();
    FUN_00655c04();
    if (lVar5 == *(long *)(unaff_x21 + 0xa8)) {
      func_0x00675024();
    }
  }
  func_0x00674b10();
  func_0x00675478();
  return false;
}



/* Entry: 0065c13c; end: 0065c15f;  */

bool FUN_0065c13c(long param_1,undefined8 param_2)

{
  FUN_005bb780(param_1,param_2,0,0);
  return param_1 != -1;
}



/* Entry: 0065c160; end: 0065c31f;  */

void FUN_0065c160(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  char in_NG;
  char in_OV;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  long *unaff_x20;
  long unaff_x21;
  
  func_0x00674b00();
  func_0x00675304();
  uVar6 = extraout_x11;
  uVar4 = extraout_x10;
  if (in_NG == in_OV) {
    uVar6 = extraout_x8;
    uVar4 = param_2;
  }
  FUN_0065c13c(uVar4,uVar6);
  if ((int)uVar4 == 0) {
    pbVar5 = *(byte **)(unaff_x21 + 8);
    func_0x006746d8();
    FUN_00654614();
    if (*pbVar5 == 0) {
      plVar2 = (long *)*unaff_x20;
      if (-1 < *(char *)((long)unaff_x20 + 0x17)) {
        plVar2 = unaff_x20;
      }
      puVar8 = *(undefined8 **)(param_4 + 0x10);
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        puVar8 = (undefined8 *)*puVar8;
      }
      if (plVar2 == puVar8) {
        uVar6 = *(undefined8 *)(unaff_x21 + 8);
        *param_4 = 9;
      }
      else {
        pbVar5 = *(byte **)(unaff_x21 + 8);
        FUN_006554ac(pbVar5,0x10);
        *pbVar5 = 0;
        pbVar5[4] = 0;
        pbVar5[5] = 0;
        pbVar5[6] = 0;
        pbVar5[7] = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        uVar1 = (uint)unaff_x20[1];
        if (-1 < (char)*(byte *)((long)unaff_x20 + 0x17)) {
          uVar1 = (uint)*(byte *)((long)unaff_x20 + 0x17);
        }
        *(uint *)(pbVar5 + 4) = uVar1;
        *(byte **)(pbVar5 + 8) = param_4;
        uVar6 = *(undefined8 *)(unaff_x21 + 8);
        *pbVar5 = 10;
        param_4 = pbVar5;
      }
      func_0x00654c60(uVar6);
      func_0x00675024();
      if (unaff_x20 != (long *)0xffffffffffffffff) {
        FUN_00479db4(&stack0xffffffffffffffa8);
        FUN_0065c160();
        func_0x00674d6c();
        FUN_00479db4(&stack0xffffffffffffffa8);
        func_0x00676338();
        FUN_0065c320();
        func_0x00674d6c();
        return;
      }
      func_0x006753c8();
      func_0x00676338();
      lVar7 = (long)(char)param_4[0x17];
      if (lVar7 < 0) {
        lVar7 = *(long *)(param_4 + 8);
        if (lVar7 == 0) goto LAB_0065c384;
        param_4 = *(byte **)param_4;
      }
      else if (param_4[0x17] == 0) {
LAB_0065c384:
        func_0x00676350();
        FUN_0065ad28();
        return;
      }
      while( true ) {
        if (lVar7 == 0) {
          return;
        }
        bVar3 = *param_4;
        if (((bVar3 & 0xffffffdf) - 0x5b < 0xffffffe6) &&
           (bVar3 != 0x5f && bVar3 - 0x3a < 0xfffffff6)) break;
        param_4 = param_4 + 1;
        lVar7 = lVar7 + -1;
      }
      func_0x00676350();
      func_0x00675478();
      return;
    }
    if (*pbVar5 - 9 < 2) {
      return;
    }
    FUN_00655c04();
  }
  func_0x00674b10();
  func_0x00675478();
  return;
}



/* Entry: 0065c320; end: 0065c3bf;  */

void FUN_0065c320(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = (long)(char)param_2[0x17];
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_2 + 8);
    if (lVar2 == 0) goto LAB_0065c384;
    param_2 = *(byte **)param_2;
  }
  else if (param_2[0x17] == 0) {
LAB_0065c384:
    func_0x00676350();
    FUN_0065ad28();
    return;
  }
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    bVar1 = *param_2;
    if (((bVar1 & 0xffffffdf) - 0x5b < 0xffffffe6) && (bVar1 != 0x5f && bVar1 - 0x3a < 0xfffffff6))
    break;
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  }
  func_0x00676350();
  func_0x00675478();
  return;
}



/* Entry: 0065c3c0; end: 0065c463;  */

void FUN_0065c3c0(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(*(long *)(param_2 + 0x48) + 0x30) == 3) && ((*(byte *)(param_2 + 1) & 0xc0) == 0x40)
     ) {
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0x3f | 0x80;
  }
  if (((*(char *)(param_2 + 2) == '\v') &&
      ((*(byte *)(*(long *)(*(long *)(param_2 + 0x20) + 0x20) + 0x53) & 1) == 0)) &&
     (uVar1 = *(int *)(*(long *)(param_2 + 0x48) + 0x40) == 2, (bool)uVar1)) {
    func_0x00675e74(*(undefined8 *)(param_3 + 0x28));
    FUN_0065b6cc();
    func_0x00675120();
    if ((!(bool)uVar1) || ((*(byte *)(*(long *)(param_1 + 0x20) + 0x53) & 1) == 0)) {
      *(undefined1 *)(param_2 + 2) = 10;
    }
  }
  return;
}



/* Entry: 0065c464; end: 0065c4d3;  */

void FUN_0065c464(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  int *piStack_30;
  long lStack_28;
  long lStack_20;
  int iStack_14;
  
  piStack_30 = &iStack_14;
  lVar2 = **(long **)(param_1 + 8);
  uVar1 = lVar2 + (long)param_3 * 0x18 + 0x18;
  if (((*(long **)(param_1 + 8))[1] - lVar2) / 0x18 - 1U <= (ulong)(long)param_3) {
    uVar1 = *(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc;
  }
  lStack_28 = param_1;
  lStack_20 = param_2;
  iStack_14 = param_3;
  FUN_0065ad28(param_1,uVar1,param_2,9,&piStack_30,FUN_0066f384);
  return;
}



/* Entry: 0065c4d4; end: 0065c5b3;  */

undefined1 * FUN_0065c4d4(int param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [8];
  ulong uStack_108;
  uint uStack_100;
  undefined1 auStack_50 [32];
  
  FUN_006686d4(auStack_110);
  FUN_00656cd8(param_2,auStack_110);
  if ((param_1 == 0x3e6) && ((*(byte *)(param_3 + 0x10) >> 2 & 1) != 0)) {
    uStack_100 = uStack_100 | 4;
    if ((uStack_108 & 1) != 0) {
      uStack_108 = *(ulong *)(uStack_108 & 0xfffffffffffffffe);
    }
    FUN_0066e51c(auStack_50,&UNK_009106b3,uStack_108);
  }
  FUN_0054a274(auStack_128,auStack_110);
  FUN_0054a274(auStack_140,param_3);
  puVar1 = auStack_128;
  FUN_00459c38(puVar1,auStack_140);
  func_0x00674d64();
  func_0x00674d80();
  FUN_0067709c(auStack_110);
  return puVar1;
}



/* Entry: 0065c5b4; end: 0065c653;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0065cd18 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

qword * FUN_0065c5b4(long *param_1,qword *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  code cVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  qword **ppqVar8;
  qword qVar9;
  long *plVar10;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar11;
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  qword *pqVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  qword **ppqVar20;
  qword *pqVar21;
  qword *pqVar22;
  long lVar23;
  char *pcVar24;
  qword **ppqVar25;
  qword *pqVar26;
  code *pcVar27;
  dword dVar28;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined **ppuVar29;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  qword *extraout_x8_04;
  long extraout_x8_05;
  undefined *extraout_x8_06;
  long *extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  long extraout_x8_12;
  undefined8 extraout_x8_13;
  qword *extraout_x8_14;
  qword *extraout_x8_15;
  long extraout_x8_16;
  undefined *extraout_x8_17;
  long *extraout_x8_18;
  undefined **ppuVar30;
  qword *extraout_x8_19;
  qword **extraout_x8_20;
  undefined *extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  undefined8 *extraout_x8_24;
  ulong extraout_x8_25;
  ulong extraout_x8_26;
  ulong extraout_x8_27;
  ulong extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  qword *extraout_x8_33;
  long *extraout_x8_34;
  undefined8 *extraout_x8_35;
  qword *extraout_x8_36;
  long *extraout_x8_37;
  long *extraout_x8_38;
  long extraout_x9;
  qword **extraout_x9_00;
  qword *extraout_x9_01;
  long extraout_x9_02;
  qword *extraout_x9_03;
  qword *extraout_x9_04;
  long extraout_x9_05;
  qword *extraout_x9_06;
  long extraout_x9_07;
  undefined8 *extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  undefined8 *extraout_x9_11;
  dword *extraout_x9_12;
  ulong extraout_x9_13;
  ulong extraout_x9_14;
  ulong extraout_x9_15;
  ulong extraout_x10;
  ulong extraout_x10_00;
  qword **extraout_x10_01;
  qword **extraout_x10_02;
  qword **extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  undefined8 *extraout_x10_06;
  long extraout_x10_07;
  dword *extraout_x10_08;
  dword *extraout_x10_09;
  undefined8 *extraout_x10_10;
  long extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  qword *extraout_x11_02;
  long extraout_x11_03;
  long extraout_x11_04;
  ulong extraout_x11_05;
  ulong extraout_x11_06;
  undefined8 *extraout_x11_07;
  long extraout_x12;
  qword *extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  long extraout_x13_00;
  ulong extraout_x13_01;
  ulong extraout_x13_02;
  ulong extraout_x13_03;
  ulong extraout_x14;
  ulong uVar31;
  ulong extraout_x14_00;
  ulong extraout_x15;
  undefined **ppuVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  long lVar35;
  byte bVar36;
  undefined *puVar37;
  long lVar38;
  dword *pdVar39;
  qword *pqVar40;
  qword *pqVar41;
  uint *puVar42;
  dword *pdVar43;
  long lVar44;
  ulong uVar45;
  undefined1 *puVar46;
  qword *pqVar47;
  dword *pdVar48;
  qword *pqVar49;
  byte in_b0;
  byte in_register_00005001;
  byte bVar50;
  byte in_register_00005002;
  byte bVar51;
  byte in_register_00005003;
  byte bVar52;
  byte in_register_00005004;
  byte bVar53;
  byte in_register_00005005;
  byte bVar54;
  byte in_register_00005006;
  byte bVar55;
  byte in_register_00005007;
  byte bVar56;
  byte bVar57;
  undefined8 uVar58;
  undefined **ppuStack_3b0;
  qword *pqStack_3a0;
  qword *pqStack_398;
  qword *pqStack_378;
  undefined *puStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  undefined1 auStack_320 [72];
  qword *pqStack_2d8;
  qword *pqStack_2d0;
  qword *pqStack_2c8;
  byte bStack_2b9;
  ulong uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  ulong auStack_2a0 [3];
  qword *pqStack_288;
  qword *pqStack_280;
  qword *pqStack_278;
  qword **ppqStack_270;
  long *plStack_268;
  ulong uStack_260;
  long lStack_258;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  qword **ppqStack_1a8;
  qword **ppqStack_1a0;
  qword *pqStack_178;
  qword *pqStack_170;
  qword *pqStack_148;
  qword *pqStack_140;
  undefined *puStack_138;
  qword *pqStack_f8;
  qword *pqStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_b0;
  qword aqStack_a0 [14];
  undefined1 *puStack_30;
  code *pcStack_28;
  
  pqVar26 = aqStack_a0;
  pqVar16 = aqStack_a0;
  if (*param_1 == 0) {
    FUN_0066cda8(param_2,param_1 + 0xe);
    FUN_0066d15c(aqStack_a0);
    func_0x00675218();
    _memcpy();
    if (*param_1 != 0) {
      return pqVar26;
    }
    func_0x00675198();
    FUN_00533884(&puStack_30);
    func_0x00674bbc();
    pqStack_378 = (qword *)(section_000001f8.segname + 0xb);
  }
  else {
    param_2 = (qword *)&UNK_00911b87;
    FUN_00533884(&puStack_30);
    func_0x00674bbc();
    pqStack_378 = (qword *)(section_000001f8.segname + 7);
  }
  FUN_00776794(aqStack_a0);
  FUN_005558a0();
  pcVar27 = FUN_0065c654;
  func_0x00674e30();
  pqVar22 = pqStack_378;
  puStack_30 = &stack0xfffffffffffffff0;
  pcStack_28 = pcVar27;
  func_0x006743c8();
  pqVar26 = pqVar22;
  uStack_b0 = extraout_x8;
  func_0x0065bfec();
  pqStack_2d8 = pqVar22;
  pqVar16[0x15] = (qword)pqVar22;
  if (((byte)*(code *)(param_2 + 2) >> 5 & 1) == 0) {
    func_0x00675584((undefined *)param_2[0x18]);
    if (extraout_x9 < 0) {
      if (*(long *)(extraout_x8_00 + 8) != 0) goto LAB_0065c6bc;
LAB_0065c6d4:
      dVar28 = 0x3e6;
      goto LAB_0065c6d8;
    }
    if (extraout_x9 == 0) goto LAB_0065c6d4;
LAB_0065c6bc:
    lVar23 = extraout_x8_00;
    FUN_004636dc(extraout_x8_00,&UNK_009106b3);
    iVar15 = (int)lVar23;
    if (iVar15 != 0) {
      pqVar22 = (qword *)pqVar16[0x15];
      goto LAB_0065c6d4;
    }
    func_0x006752bc((undefined *)param_2[0x18]);
    if (iVar15 == 0) {
      *(undefined4 *)((undefined *)pqVar16[0x15] + 0x20) = 0;
      pqStack_288 = param_2;
      func_0x0067556c();
      FUN_0065ad28();
    }
    else {
      *(undefined4 *)((undefined *)pqVar16[0x15] + 0x20) = 999;
    }
  }
  else {
    dVar28 = *(dword *)(param_2 + 0x1b);
LAB_0065c6d8:
    *(dword *)(pqVar22 + 4) = dVar28;
  }
  pqVar22 = *(qword **)((undefined *)*pqVar16 + 0x58);
  if ((*(qword **)((undefined *)*pqVar16 + 0x58) == (qword *)0x0) &&
     (pqVar22 = pqRam0000000000b63cb0, (bRam0000000000b63cb8 & 1) == 0)) {
    iVar15 = 0xb63cb8;
    ___cxa_guard_acquire();
    pqVar22 = pqRam0000000000b63cb0;
    if (iVar15 != 0) {
      pqVar22 = &segment_command_00000020.vmaddr;
      __Znwm();
      func_0x00676938();
      pqVar26 = pqVar22;
      func_0x006656a4(&UNK_008239b4,0x82);
      func_0x006768e4(FUN_0066968c);
      pqRam0000000000b63cb0 = pqVar22;
      ___cxa_guard_release(&bRam0000000000b63cb8);
      pqVar22 = pqRam0000000000b63cb0;
    }
  }
  FUN_006886b4(&uStack_328,*(undefined4 *)((undefined *)pqVar16[0x15] + 0x20),pqVar22);
  if (uStack_328 == 0) {
    cVar5 = *(code *)(pqVar16 + 0xd);
    in_OV = SBORROW4((uint)(byte)cVar5,1);
    in_NG = (int)((byte)cVar5 - 1) < 0;
    in_ZR = (byte)cVar5 == 1;
    if ((bool)in_ZR) {
      FUN_0067d448(pqVar16 + 4);
      *(code *)(pqVar16 + 0xd) = (code)0x0;
    }
    FUN_006696a4(pqVar16 + 4,auStack_320);
    *(code *)(pqVar16 + 0xd) = (code)0x1;
  }
  else {
    pqStack_288 = &uStack_328;
    func_0x0067556c();
    FUN_0065ad28();
  }
  pqVar22 = pqStack_2d8;
  *(undefined2 *)((long)pqStack_2d8 + 1) = 0;
  if (((byte)*(code *)(param_2 + 2) >> 4 & 1) == 0) {
    ppuVar32 = &PTR_PTR_00b25b30;
    ppuVar30 = (undefined **)0x0;
  }
  else {
    if ((undefined *)*pqStack_378 == (undefined *)0x0) goto LAB_0065e634;
    puVar33 = (undefined *)pqStack_378[2];
    iVar15 = *(int *)(pqStack_378 + 0x16);
    uVar1 = iVar15 + 1;
    uVar17 = (ulong)uVar1;
    *(uint *)(pqStack_378 + 0x16) = uVar1;
    func_0x00674520(uVar17,*(undefined4 *)(pqStack_378 + 0xf));
    if (uVar17 != 0) {
      func_0x00674310();
      goto LAB_0065ec1c;
    }
    ppuVar32 = (undefined **)(puVar33 + (long)iVar15 * 0x30);
    ppuVar29 = (undefined **)param_2[0x1a];
    in_OV = '\0';
    in_NG = (long)ppuVar29 < 0;
    in_ZR = ppuVar29 == (undefined **)0x0;
    ppuVar30 = &PTR_PTR_00b25b30;
    if (!(bool)in_ZR) {
      ppuVar30 = ppuVar29;
    }
    FUN_0067e2a4(ppuVar32,ppuVar30);
    ppuVar30 = ppuVar32;
  }
  pqVar22[0x14] = (qword)ppuVar32;
  if ((undefined *)*pqStack_378 == (undefined *)0x0) {
    func_0x006740e8();
    goto LAB_0065ec1c;
  }
  puVar33 = (undefined *)pqStack_378[3];
  iVar15 = *(int *)((long)pqStack_378 + 0xb4);
  uVar1 = iVar15 + 1;
  uVar17 = (ulong)uVar1;
  *(uint *)((long)pqStack_378 + 0xb4) = uVar1;
  func_0x00674520(uVar17,*(undefined4 *)((long)pqStack_378 + 0x7c));
  if (uVar17 != 0) {
    func_0x00674310();
    goto LAB_0065ec1c;
  }
  pqVar16[0x16] = (qword)(puVar33 + (long)iVar15 * 200);
  *(undefined **)((undefined *)pqVar16[0x15] + 0x98) = puVar33 + (long)iVar15 * 200;
  pqVar41 = (qword *)0x0;
  if ((param_2[2] & 1) == 0) {
    func_0x006759a0();
    pqVar41 = (qword *)&pqStack_288;
    FUN_00425cb4();
    func_0x0067556c();
    FUN_0065ae94();
    func_0x00675540();
  }
  func_0x00676688((undefined *)param_2[0x16]);
  pqVar22[1] = (qword)pqVar41;
  if (((byte)*(code *)(param_2 + 2) >> 1 & 1) == 0) {
    pqVar41 = pqStack_378;
    FUN_0065bccc();
  }
  else {
    func_0x00676688((undefined *)param_2[0x17]);
  }
  pqVar22[2] = (qword)pqVar41;
  pqVar22[3] = (qword)*pqVar16;
  puVar18 = (undefined8 *)pqVar22[1];
  lVar23 = (long)*(char *)((long)puVar18 + 0x17);
  puVar34 = puVar18;
  if (lVar23 < 0) {
    puVar34 = (undefined8 *)*puVar18;
    lVar23 = puVar18[1];
  }
  FUN_0065c13c(puVar34,lVar23);
  if ((int)puVar34 == 0) {
    puVar37 = (undefined *)pqVar16[1];
    puVar34 = (undefined8 *)(puVar37 + 0xe8);
    Hint_Prefetch(*puVar34,0,2,0);
    puVar33 = (undefined *)pqVar22[1];
    func_0x0066c3a4(*puVar34,puVar33);
    lVar23 = 0;
    uVar45 = *(ulong *)(puVar37 + 0xf8);
    func_0x00674f64(*(ulong *)(puVar37 + 0xe8) >> 0xc ^ (ulong)puVar33 >> 7);
    uVar17 = extraout_x8_01;
    while( true ) {
      uVar17 = uVar17 & uVar45;
      func_0x00674f7c();
      while (ppuStack_3b0 = ppuVar30, (extraout_x8_02 & 0x8080808080808080) != 0) {
        uVar31 = (extraout_x8_02 & 0x8080808080808080) >> 7;
        uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
        uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        pqVar41 = pqVar22;
        func_0x0066c384(pqVar22,*(undefined8 *)
                                 (*(long *)(puVar37 + 0xf0) +
                                 (uVar17 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3) &
                                 uVar45) * 8));
        if (((ulong)pqVar41 & 1) != 0) {
          pcVar24 = (char *)((ulong)param_2[0x16] & 0xfffffffffffffffc);
          goto LAB_0065c974;
        }
        func_0x00675f08();
      }
      func_0x006745a8();
      if ((extraout_x8_03 & 1) != 0) break;
      lVar23 = lVar23 + 8;
      uVar17 = lVar23 + uVar17;
    }
    FUN_0066d5a4(puVar34,puVar33);
    *(qword **)(*(long *)(puVar37 + 0xf0) + (long)puVar34 * 8) = pqVar22;
    puVar34 = *(undefined8 **)(puVar37 + 0x178);
    if (puVar34 < *(undefined8 **)(puVar37 + 0x180)) {
      puVar18 = puVar34 + 1;
      *puVar34 = pqVar22;
    }
    else {
      puVar33 = puVar37 + 0x170;
      FUN_006661d8(puVar33,((long)puVar34 - *(long *)(puVar37 + 0x170) >> 3) + 1);
      plStack_268 = (long *)(puVar37 + 0x180);
      lVar23 = *(long *)(puVar37 + 0x170);
      lVar38 = *(long *)(puVar37 + 0x178);
      if (puVar33 != (undefined *)0x0) {
        FUN_0066622c();
      }
      func_0x00676a2c(lVar38 - lVar23);
      pqStack_278 = extraout_x8_04 + 1;
      *extraout_x8_04 = (qword)pqVar22;
      pqStack_280 = extraout_x8_04;
      ppqStack_270 = extraout_x9_00;
      FUN_00666200(puVar37 + 0x170,&pqStack_288);
      puVar18 = *(undefined8 **)(puVar37 + 0x178);
      func_0x00666254(&pqStack_288);
    }
    *(undefined8 **)(puVar37 + 0x178) = puVar18;
    pcVar24 = (char *)pqVar22[2];
    puVar33 = (undefined *)(long)(char)*(code *)((long)pcVar24 + 0x17);
    if ((long)puVar33 < 0) {
      puVar33 = *(undefined **)((long)pcVar24 + 8);
      if (puVar33 == (undefined *)0x0) goto LAB_0065caf0;
      pqVar41 = *(qword **)pcVar24;
    }
    else {
      pqVar41 = (qword *)pcVar24;
      if (*(code *)((long)pcVar24 + 0x17) == (code)0x0) goto LAB_0065caf0;
    }
    uVar17 = 0;
    for (; puVar33 != (undefined *)0x0; puVar33 = puVar33 + -1) {
      if (*(code *)pqVar41 == (code)0x2e) {
        uVar17 = uVar17 + 1;
      }
      pqVar41 = (qword *)((long)pqVar41 + 1);
    }
    in_OV = SBORROW8(uVar17,0x65);
    in_NG = (long)(uVar17 - 0x65) < 0;
    in_ZR = uVar17 == 0x65;
    if (uVar17 < 0x65) {
      func_0x0067556c();
      FUN_0065c160();
LAB_0065caf0:
      puStack_348 = &UNK_00811030;
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      dVar28 = *(dword *)(param_2 + 4);
      *(dword *)(pqVar22 + 6) = dVar28;
      puVar33 = (undefined *)*pqStack_378;
      if (puVar33 == (undefined *)0x0) {
        func_0x006740e8();
        goto LAB_0065ec1c;
      }
      iVar15 = *(int *)(pqStack_378 + 0x15);
      uVar1 = iVar15 + dVar28 * 8;
      uVar17 = (ulong)uVar1;
      *(uint *)(pqStack_378 + 0x15) = uVar1;
      func_0x00674520(uVar17,*(undefined4 *)(pqStack_378 + 0xe));
      if (uVar17 != 0) {
        func_0x00674310();
        goto LAB_0065ec1c;
      }
      pqVar22[9] = (qword)(puVar33 + iVar15);
      pqVar22[5] = 0;
      FUN_0065f00c(pqVar16 + 0x1f);
      puStack_368 = &UNK_00811030;
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      for (lVar23 = 0; lVar23 < *(int *)(param_2 + 0x14); lVar23 = lVar23 + 1) {
        pqStack_148 = (qword *)CONCAT44(pqStack_148._4_4_,
                                        *(undefined4 *)((undefined *)param_2[0x15] + lVar23 * 4));
        pqVar26 = (qword *)&pqStack_148;
        FUN_0066f648(&pqStack_288,&puStack_368);
      }
      uVar17 = 0;
      bVar36 = 0;
      pqVar41 = param_2 + 3;
      pcVar27 = FUN_0066f42c;
      do {
        uVar1 = *(uint *)(param_2 + 4);
        uVar45 = (ulong)(int)uVar1;
        in_OV = SBORROW8(uVar17,uVar45);
        in_NG = (long)(uVar17 - uVar45) < 0;
        in_ZR = uVar17 == uVar45;
        if ((long)uVar45 <= (long)uVar17) {
          if (bVar36 != 0) {
            iVar15 = 0;
            pqVar49 = (qword *)((undefined *)*pqVar41 + 7);
            for (uVar17 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar17;
                uVar17 = uVar17 + 1) {
              if (*(long *)((undefined *)pqVar22[9] + uVar17 * 8) == 0) {
                pqVar47 = pqVar41;
                if (((ulong)*pqVar41 & 1) != 0) {
                  pqVar47 = pqVar49;
                }
                lVar23 = (long)(char)((undefined *)*pqVar47)[0x17];
                if (lVar23 < 0) {
                  lVar23 = *(long *)((undefined *)*pqVar47 + 8);
                }
                iVar15 = iVar15 + (int)lVar23;
              }
              iVar15 = iVar15 + 1;
              pqVar49 = pqVar49 + 1;
            }
            puVar19 = (undefined4 *)pqVar16[1];
            FUN_006554ac(puVar19,iVar15 + 4);
            *puVar19 = 0;
            pqVar22[5] = (qword)puVar19;
            puVar19 = puVar19 + 1;
            while (uVar14 = *(dword *)(param_2 + 4) == 0, 0 < (int)*(dword *)(param_2 + 4)) {
              if (*(long *)pqStack_2d8[9] == 0) {
                func_0x00675108((undefined *)*pqVar41);
                pqVar26 = pqVar41;
                if (!(bool)uVar14) {
                  pqVar26 = extraout_x9_03;
                }
                puVar18 = (undefined8 *)*pqVar26;
                pqVar26 = (qword *)(long)*(char *)((long)puVar18 + 0x17);
                puVar34 = puVar18;
                if ((long)pqVar26 < 0) {
                  puVar34 = (undefined8 *)*puVar18;
                  pqVar26 = (qword *)puVar18[1];
                }
                _memcpy(puVar19,puVar34);
                func_0x00675108((undefined *)*pqVar41);
                pqVar22 = pqVar41;
                if (!(bool)uVar14) {
                  pqVar22 = extraout_x9_04;
                }
                lVar23 = (long)(char)((undefined *)*pqVar22)[0x17];
                if (lVar23 < 0) {
                  lVar23 = *(long *)((undefined *)*pqVar22 + 8);
                }
                puVar19 = (undefined4 *)((long)puVar19 + lVar23);
              }
              *(undefined1 *)puVar19 = 0;
              func_0x006760ac();
              puVar19 = (undefined4 *)((long)puVar19 + 1);
            }
          }
          pqVar41 = pqStack_378;
          FUN_0065f0ec(pqStack_378,*(undefined4 *)(param_2 + 0x12));
          pqVar22 = pqStack_2d8;
          iVar15 = 0;
          pqStack_2d8[10] = (qword)pqVar41;
          pqStack_3a0 = pqStack_2d8;
          for (lVar23 = 0; lVar23 < *(int *)(param_2 + 0x12); lVar23 = lVar23 + 1) {
            iVar4 = *(int *)((undefined *)param_2[0x13] + lVar23 * 4);
            if ((iVar4 < 0) || ((int)*(dword *)(param_2 + 4) <= iVar4)) {
              func_0x006755fc();
              func_0x00676720();
            }
            else {
              iVar2 = iVar15 + 1;
              *(int *)((undefined *)pqVar22[10] + (long)iVar15 * 4) = iVar4;
              iVar15 = iVar2;
              if ((((undefined *)*pqVar16)[0x31] & 1) == 0) {
                pqVar41 = pqVar22;
                FUN_006571a0();
                pqStack_288 = pqVar41;
                func_0x00675f64(pqVar16 + 0x1f);
              }
            }
          }
          *(int *)((long)pqVar22 + 0x34) = iVar15;
          pqVar41 = pqVar16 + 0x17;
          FUN_0065f00c(pqVar41);
          if ((((undefined *)*pqVar16)[0x31] & 1) == 0) {
            for (iVar15 = 0; iVar15 < *(int *)(pqVar22 + 6); iVar15 = iVar15 + 1) {
              func_0x006757d4();
              pqVar49 = pqVar16;
              FUN_0065b0fc(pqVar16,pqVar41);
              pqVar41 = pqVar49;
            }
          }
          pqVar41 = pqStack_378;
          FUN_0065f0ec(pqStack_378,*(undefined4 *)(param_2 + 0x14));
          iVar15 = 0;
          pqVar22[0xb] = (qword)pqVar41;
          for (lVar23 = 0; lVar23 < *(int *)(param_2 + 0x14); lVar23 = lVar23 + 1) {
            iVar4 = *(int *)((undefined *)param_2[0x15] + lVar23 * 4);
            if ((iVar4 < 0) || ((int)*(dword *)(param_2 + 4) <= iVar4)) {
              func_0x006755fc();
              func_0x00676720();
            }
            else {
              *(int *)((undefined *)pqVar22[0xb] + (long)iVar15 * 4) = iVar4;
              iVar15 = iVar15 + 1;
            }
          }
          *(int *)(pqVar22 + 7) = iVar15;
          *(undefined4 *)((long)pqVar22 + 0x3c) = *(undefined4 *)(param_2 + 7);
          pqVar41 = pqStack_378;
          func_0x0065bf3c();
          func_0x00674f58();
          pqVar22[0xc] = (qword)pqVar41;
          while (lVar23 < *(int *)(param_2 + 7)) {
            func_0x00675108((undefined *)param_2[6]);
            func_0x006757c0((undefined *)pqVar22[0xc]);
            FUN_0065f14c();
            func_0x006760ac();
          }
          *(undefined4 *)(pqVar22 + 8) = *(undefined4 *)(param_2 + 10);
          pqVar41 = pqStack_378;
          FUN_0065be28();
          func_0x00674f58();
          pqVar22[0xd] = (qword)pqVar41;
          while (lVar23 < *(int *)(param_2 + 10)) {
            func_0x00675108((undefined *)param_2[9]);
            func_0x006757c0((undefined *)pqVar22[0xd]);
            FUN_006603cc();
            func_0x006760ac();
          }
          iVar15 = *(int *)(param_2 + 0xd);
          *(int *)((long)pqVar22 + 0x44) = iVar15;
          puVar33 = (undefined *)*pqStack_378;
          if (puVar33 == (undefined *)0x0) {
            func_0x006740e8();
            goto LAB_0065ec1c;
          }
          lVar23 = (long)*(int *)(pqStack_378 + 0x15);
          uVar1 = *(int *)(pqStack_378 + 0x15) + iVar15 * 0x40;
          uVar17 = (ulong)uVar1;
          *(uint *)(pqStack_378 + 0x15) = uVar1;
          func_0x00674520(uVar17,*(undefined4 *)(pqStack_378 + 0xe));
          if (uVar17 != 0) {
            func_0x00674310();
            goto LAB_0065ec1c;
          }
          pqVar22[0xe] = (qword)(puVar33 + lVar23);
          lVar38 = 0;
          while (lVar38 < *(int *)(param_2 + 0xd)) {
            func_0x00676bb4();
            func_0x00674de8();
            lVar23 = *extraout_x8_07;
            puVar33 = (undefined *)pqVar22[0xe];
            uVar58 = *(undefined8 *)((undefined *)pqVar16[0x15] + 0x10);
            pqVar26 = pqStack_378;
            FUN_00661344(uVar58,*(ulong *)(lVar23 + 0x30) & 0xfffffffffffffffc);
            puVar3 = puVar33 + extraout_x9_05 * 0x40;
            *(undefined8 *)(puVar3 + 8) = uVar58;
            *(undefined **)(puVar3 + 0x10) = (undefined *)pqVar16[0x15];
            func_0x00675e80(*(undefined8 *)(lVar23 + 0x30));
            FUN_0065c320(pqVar16);
            iVar15 = *(int *)(lVar23 + 0x20);
            *(int *)(puVar3 + 0x38) = iVar15;
            puVar33 = (undefined *)*pqStack_378;
            if (puVar33 == (undefined *)0x0) {
              func_0x006740e8();
              goto LAB_0065ec1c;
            }
            iVar4 = *(int *)(pqStack_378 + 0x15);
            uVar1 = iVar4 + iVar15 * 0x50;
            uVar17 = (ulong)uVar1;
            *(uint *)(pqStack_378 + 0x15) = uVar1;
            func_0x00674520(uVar17,*(undefined4 *)(pqStack_378 + 0xe));
            if (uVar17 != 0) {
              func_0x00674310();
              goto LAB_0065ec1c;
            }
            lVar38 = 0;
            *(undefined **)(puVar3 + 0x30) = puVar33 + iVar4;
            pqVar41 = (qword *)0x0;
            while( true ) {
              lVar35 = (long)*(int *)(lVar23 + 0x20);
              cVar11 = SBORROW8(lVar38,lVar35);
              cVar12 = lVar38 - lVar35 < 0;
              if (lVar35 <= lVar38) break;
              func_0x00674de8(*(undefined8 *)(lVar23 + 0x18));
              pqVar26 = (qword *)*extraout_x8_08;
              puVar46 = (undefined1 *)(*(long *)(puVar3 + 0x30) + lVar38 * 0x50);
              *(undefined1 **)(puVar46 + 0x10) = puVar3;
              func_0x00675fa8(*(undefined8 *)(puVar3 + 8));
              *(qword **)(puVar46 + 8) = pqVar41;
              func_0x00675e80((undefined *)pqVar26[3]);
              FUN_0065c320(pqVar16);
              in_b0 = 0;
              in_register_00005001 = 0;
              in_register_00005002 = 0;
              in_register_00005003 = 0;
              in_register_00005004 = 0;
              in_register_00005005 = 0;
              in_register_00005006 = 0;
              in_register_00005007 = 0;
              *(undefined8 *)(puVar46 + 0x30) = 0;
              *(undefined8 *)(puVar46 + 0x28) = 0;
              *(undefined8 *)(puVar46 + 0x20) = 0;
              *(undefined8 *)(puVar46 + 0x18) = 0;
              func_0x00676b94(4);
              func_0x00659b64(*(undefined8 *)(puVar46 + 0x10),&ppqStack_1a8);
              pqStack_288._0_4_ = 2;
              func_0x006766a0();
              pqStack_288 = (qword *)CONCAT44(pqStack_288._4_4_,
                                              (int)(((long)puVar46 -
                                                    *(long *)(*(long *)(puVar46 + 0x10) + 0x30)) /
                                                   0x50));
              func_0x006766a0();
              func_0x00676694();
              ppqVar20 = ppqStack_1a0;
              ppqVar25 = ppqStack_1a8;
              lVar35 = *(long *)(puVar46 + 8);
              pqVar41 = (qword *)(long)*(char *)(lVar35 + 0x2f);
              if ((long)pqVar41 < 0) {
                pqVar49 = *(qword **)(lVar35 + 0x18);
                pqVar41 = *(qword **)(lVar35 + 0x20);
              }
              else {
                pqVar49 = (qword *)(lVar35 + 0x18);
              }
              ppuVar30 = &PTR_PTR_00b25c68;
              if (((byte)*(code *)(pqVar26 + 2) >> 3 & 1) != 0) {
                if ((undefined *)*pqStack_378 == (undefined *)0x0) {
                  func_0x006740e8();
                  goto LAB_0065ec1c;
                }
                pqVar40 = (qword *)pqVar26[6];
                puVar33 = (undefined *)pqStack_378[0xc];
                iVar15 = *(int *)(pqStack_378 + 0x1b);
                uVar1 = iVar15 + 1;
                uVar17 = (ulong)uVar1;
                *(uint *)(pqStack_378 + 0x1b) = uVar1;
                pqVar47 = (qword *)(ulong)*(uint *)(pqStack_378 + 0x14);
                func_0x00674520();
                if (uVar17 != 0) {
                  func_0x00674310();
                  goto LAB_0065ec1c;
                }
                pqVar21 = pqVar40;
                FUN_0067cc0c();
                if (((ulong)pqVar21 & 1) == 0) {
                  pqStack_288 = pqVar49;
                  pqStack_280 = pqVar41;
                  func_0x00674500();
                  pqStack_148 = pqVar21;
                  pqStack_140 = pqVar47;
                  pqStack_f8 = pqVar49;
                  pqStack_f0 = pqVar41;
                  func_0x00675080(&pqStack_178);
                  func_0x00674814(pqVar16,&pqStack_178,pqVar40);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pqStack_178)
                  ;
                  ppuVar30 = &PTR_PTR_00b25c68;
                }
                else {
                  FUN_0054a274(&pqStack_288,pqVar40);
                  ppuVar30 = (undefined **)(puVar33 + (long)iVar15 * 0x58);
                  func_0x00674424();
                  uVar58 = extraout_x11_00;
                  ppqVar8 = extraout_x10_01;
                  if (cVar12 == cVar11) {
                    uVar58 = extraout_x8_09;
                    ppqVar8 = &pqStack_288;
                  }
                  func_0x006656a4(ppqVar8,uVar58,ppuVar30);
                  func_0x00675540();
                  uVar14 = *(int *)(ppuVar30 + 7) == 1;
                  if (0 < *(int *)(ppuVar30 + 7)) {
                    FUN_0066f1a4(&pqStack_288,pqVar49,pqVar41,pqVar49,pqVar41,ppqVar25,
                                 (long)ppqVar20 - (long)ppqVar25 >> 2,pqVar40);
                    func_0x00675098();
                    func_0x00675b1c();
                  }
                  if (((ulong)pqVar40[1] & 1) == 0) {
                    FUN_006a480c();
                  }
                  func_0x00676b4c();
                  if (!(bool)uVar14) {
                    FUN_00654614((undefined *)pqVar16[1],"google.protobuf.MethodOptions",0x1d);
                    func_0x00675120();
                    if ((bool)uVar14) {
                      for (lVar35 = 0; func_0x00676138(), lVar35 < extraout_w8; lVar35 = lVar35 + 1)
                      {
                        func_0x00675970();
                        FUN_0066bfcc();
                        puVar33 = (undefined *)*pqVar16;
                        func_0x006756d4();
                        FUN_00655ef4();
                        if (puVar33 != (undefined *)0x0) {
                          pqStack_288 = *(qword **)(puVar33 + 0x10);
                          func_0x00675f64(pqVar16 + 0x1f);
                        }
                      }
                    }
                  }
                }
              }
              *(undefined ***)(puVar46 + 0x38) = ppuVar30;
              func_0x00674eec();
              *(undefined8 *)(puVar46 + 0x40) = extraout_x8_10;
              *(undefined8 *)(puVar46 + 0x48) = extraout_x8_10;
              func_0x0053b048(&ppqStack_1a8);
              puVar46[1] = *(code *)(pqVar26 + 7);
              puVar46[2] = *(code *)((long)pqVar26 + 0x39);
              *puVar46 = 8;
              pqVar41 = pqVar16;
              FUN_0065c040(pqVar16,*(long *)(puVar46 + 8) + 0x18,pqVar26,puVar46);
              lVar38 = lVar38 + 1;
            }
            func_0x00676b94(3);
            func_0x00659b64(puVar3,&ppqStack_1a8);
            func_0x00676694();
            ppqVar20 = ppqStack_1a0;
            ppqVar25 = ppqStack_1a8;
            lVar38 = *(long *)(puVar3 + 8);
            pqVar41 = (qword *)(long)*(char *)(lVar38 + 0x2f);
            if ((long)pqVar41 < 0) {
              pqVar49 = *(qword **)(lVar38 + 0x18);
              pqVar41 = *(qword **)(lVar38 + 0x20);
            }
            else {
              pqVar49 = (qword *)(lVar38 + 0x18);
            }
            ppuVar30 = &PTR_PTR_00b25bc0;
            if ((*(byte *)(lVar23 + 0x10) >> 1 & 1) != 0) {
              if ((undefined *)*pqStack_378 == (undefined *)0x0) {
                func_0x006740e8();
                goto LAB_0065ec1c;
              }
              pqVar47 = *(qword **)(lVar23 + 0x38);
              puVar33 = (undefined *)pqStack_378[0xb];
              iVar15 = *(int *)((long)pqStack_378 + 0xd4);
              uVar1 = iVar15 + 1;
              uVar17 = (ulong)uVar1;
              *(uint *)((long)pqStack_378 + 0xd4) = uVar1;
              pqVar26 = (qword *)(ulong)*(uint *)((long)pqStack_378 + 0x9c);
              func_0x00674520();
              if (uVar17 != 0) {
                func_0x00674310();
                goto LAB_0065ec1c;
              }
              pqVar40 = pqVar47;
              FUN_0067c958();
              if (((ulong)pqVar40 & 1) == 0) {
                pqStack_288 = pqVar49;
                pqStack_280 = pqVar41;
                func_0x00674500();
                pqStack_148 = pqVar40;
                pqStack_140 = pqVar26;
                pqStack_f8 = pqVar49;
                pqStack_f0 = pqVar41;
                func_0x00675080(&pqStack_178);
                func_0x00674814(pqVar16,&pqStack_178);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pqStack_178);
                ppuVar30 = &PTR_PTR_00b25bc0;
                pqVar26 = pqVar47;
              }
              else {
                FUN_0054a274(&pqStack_288,pqVar47);
                ppuVar30 = (undefined **)(puVar33 + (long)iVar15 * 0x58);
                func_0x00674424();
                uVar58 = extraout_x11_01;
                ppqVar8 = extraout_x10_02;
                if (cVar12 == cVar11) {
                  uVar58 = extraout_x8_11;
                  ppqVar8 = &pqStack_288;
                }
                pqVar26 = (qword *)ppuVar30;
                func_0x006656a4(ppqVar8,uVar58);
                func_0x00675540();
                uVar14 = *(int *)(ppuVar30 + 7) == 1;
                if (0 < *(int *)(ppuVar30 + 7)) {
                  FUN_0066f1a4(&pqStack_288,pqVar49,pqVar41,pqVar49,pqVar41,ppqVar25,
                               (long)ppqVar20 - (long)ppqVar25 >> 2,pqVar47);
                  func_0x00675098();
                  func_0x00675b1c();
                  pqVar26 = pqVar41;
                }
                if (((ulong)pqVar47[1] & 1) == 0) {
                  FUN_006a480c();
                }
                func_0x00676b4c();
                if (!(bool)uVar14) {
                  pqVar26 = (qword *)((long)&MACH_HEADER.reserved + 2);
                  FUN_00654614((undefined *)pqVar16[1],"google.protobuf.ServiceOptions");
                  func_0x00675120();
                  if ((bool)uVar14) {
                    lVar35 = 0;
                    for (lVar38 = 0; func_0x00676138(), lVar38 < extraout_w8_00; lVar38 = lVar38 + 1
                        ) {
                      FUN_0066bfcc(*(undefined8 *)*pqVar16);
                      puVar33 = (undefined *)*pqVar16;
                      func_0x006756d4();
                      pqVar26 = (qword *)(ulong)*(uint *)(extraout_x8_12 + lVar35);
                      FUN_00655ef4();
                      if (puVar33 != (undefined *)0x0) {
                        pqStack_288 = *(qword **)(puVar33 + 0x10);
                        func_0x00675f64(pqVar16 + 0x1f);
                      }
                      lVar35 = lVar35 + 0x10;
                    }
                  }
                }
              }
            }
            *(undefined ***)(puVar3 + 0x18) = ppuVar30;
            func_0x00674eec();
            *(undefined8 *)(puVar3 + 0x20) = extraout_x8_13;
            *(undefined8 *)(puVar3 + 0x28) = extraout_x8_13;
            func_0x0053b048(&ppqStack_1a8);
            *puVar3 = 7;
            func_0x00676338(pqVar16,*(long *)(puVar3 + 8) + 0x18);
            FUN_0065c040();
            lVar38 = extraout_x9_05 + 1;
          }
          *(dword *)((long)pqVar22 + 4) = *(dword *)(param_2 + 0x10);
          pqVar41 = pqStack_378;
          FUN_00660fdc();
          func_0x00674f58();
          pqVar22[0xf] = (qword)pqVar41;
          pqStack_398 = param_2 + 0xf;
          while( true ) {
            lVar38 = (long)*(int *)(param_2 + 0x10);
            cVar11 = SBORROW8(lVar23,lVar38);
            cVar12 = lVar23 - lVar38 < 0;
            if (lVar38 <= lVar23) break;
            func_0x00675108((undefined *)*pqStack_398);
            func_0x006757c0((undefined *)pqVar22[0xf]);
            FUN_00661034();
            func_0x006760ac();
          }
          uStack_2b8 = 0;
          lStack_2b0 = 0;
          uStack_2a8 = 0;
          pqStack_288 = (qword *)CONCAT44(pqStack_288._4_4_,8);
          ppqVar25 = &pqStack_288;
          func_0x0063cd38(&uStack_2b8);
          func_0x00673fe0((undefined *)pqVar22[2]);
          pqStack_170 = extraout_x12_00;
          if (cVar12 == cVar11) {
            pqStack_170 = extraout_x9_06;
          }
          ppqVar20 = (qword **)&UNK_00910693;
          pqStack_178 = extraout_x8_14;
          FUN_00532c74();
          pcVar24 = (char *)&ppqStack_1a8;
          ppqStack_1a8 = ppqVar20;
          ppqStack_1a0 = ppqVar25;
          FUN_00575d30(&pqStack_2d0,&pqStack_178);
          lVar23 = lStack_2b0;
          uVar17 = uStack_2b8;
          in_NG = (char)bStack_2b9 < '\0';
          in_OV = '\0';
          pqVar41 = pqStack_2c8;
          pqVar49 = pqStack_2d0;
          if (!(bool)in_NG) {
            pqVar41 = (qword *)(ulong)bStack_2b9;
            pqVar49 = (qword *)&pqStack_2d0;
          }
          pqVar40 = (qword *)pqVar22[1];
          pqVar22 = (qword *)(long)(char)*(code *)((long)pqVar40 + 0x17);
          pqVar47 = pqVar40;
          if ((long)pqVar22 < 0) {
            pqVar47 = (qword *)*pqVar40;
            pqVar22 = (qword *)pqVar40[1];
          }
          ppuVar30 = &PTR_PTR_00b25d18;
          if (((byte)*(code *)(param_2 + 2) >> 3 & 1) == 0) goto LAB_0065d9ac;
          if ((undefined *)*pqStack_378 == (undefined *)0x0) {
            func_0x006740e8();
            goto LAB_0065ec1c;
          }
          pqVar40 = (qword *)param_2[0x19];
          puVar33 = (undefined *)pqStack_378[0xd];
          iVar15 = *(int *)((long)pqStack_378 + 0xdc);
          uVar1 = iVar15 + 1;
          uVar45 = (ulong)uVar1;
          *(uint *)((long)pqStack_378 + 0xdc) = uVar1;
          pqVar26 = (qword *)(ulong)*(uint *)((long)pqStack_378 + 0xa4);
          func_0x00674520();
          if (uVar45 != 0) {
            func_0x00674310();
            goto LAB_0065ec1c;
          }
          pqVar21 = pqVar40;
          FUN_0067a758();
          if (((ulong)pqVar21 & 1) != 0) {
            FUN_0054a274(&pqStack_288,pqVar40);
            ppuVar30 = (undefined **)(puVar33 + (long)iVar15 * 0xb0);
            func_0x00674424();
            pcVar24 = (char *)extraout_x11_02;
            ppqVar25 = extraout_x10_03;
            if (in_NG == in_OV) {
              pcVar24 = (char *)extraout_x8_15;
              ppqVar25 = &pqStack_288;
            }
            pqVar26 = (qword *)ppuVar30;
            func_0x006656a4(ppqVar25);
            func_0x00675540();
            iVar15 = *(int *)(ppuVar30 + 7);
            in_OV = SBORROW4(iVar15,1);
            in_NG = iVar15 + -1 < 0;
            in_ZR = iVar15 == 1;
            if (0 < iVar15) {
              FUN_0066f1a4(&pqStack_288,pqVar49,pqVar41,pqVar47,pqVar22,uVar17,
                           (long)(lVar23 - uVar17) >> 2,pqVar40);
              func_0x00675098();
              func_0x00675b1c();
              pcVar24 = (char *)pqVar49;
              pqVar26 = pqVar41;
            }
            if (((ulong)pqVar40[1] & 1) != 0) goto LAB_0065d8a0;
            FUN_006a480c();
            goto LAB_0065d8a0;
          }
          pqStack_288 = pqVar49;
          pqStack_280 = pqVar41;
          func_0x00674500();
          pqStack_148 = pqVar21;
          pqStack_140 = pqVar26;
          pqStack_f8 = pqVar47;
          pqStack_f0 = pqVar22;
          func_0x00675080(auStack_2a0);
          func_0x0067573c();
          pcVar24 = (char *)auStack_2a0;
          func_0x00675748(pqVar16);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a0);
          ppuVar30 = &PTR_PTR_00b25d18;
          pqVar26 = pqVar40;
          goto LAB_0065d9ac;
        }
        func_0x00674f70((undefined *)*pqVar41);
        pqVar26 = pqVar41;
        if (!(bool)in_ZR) {
          pqVar26 = extraout_x9_01;
        }
        pqVar49 = (qword *)&puStack_348;
        FUN_0066f694(&pqStack_288,pqVar49,(undefined *)*pqVar26);
        if (((ulong)pqStack_278 & 1) == 0) {
          pqStack_148 = (qword *)CONCAT44(pqStack_148._4_4_,(int)uVar17);
          pqVar26 = param_2;
          func_0x006747b4((undefined *)param_2[3]);
          pqStack_288 = pqVar26;
          pqStack_280 = (qword *)&pqStack_148;
          FUN_0065ad28(pqVar16);
        }
        func_0x006747b4((undefined *)*pqVar41);
        pqVar26 = (qword *)(long)(char)*(code *)((long)pqVar49 + 0x17);
        pcVar24 = (char *)pqVar49;
        if ((long)pqVar26 < 0) {
          pcVar24 = (char *)*pqVar49;
          pqVar26 = (qword *)pqVar49[1];
        }
        pqVar49 = (qword *)pqVar16[1];
        FUN_006557c4();
        if (pqVar49 == (qword *)0x0) {
          puVar33 = (undefined *)*pqVar16;
          pqVar49 = *(qword **)(puVar33 + 0x18);
          if (pqVar49 != (qword *)0x0) {
            func_0x006747b4((undefined *)*pqVar41);
            pqVar26 = (qword *)(long)(char)*(code *)((long)pcVar24 + 0x17);
            if ((long)pqVar26 < 0) {
              pqVar26 = *(qword **)((long)pcVar24 + 8);
              pcVar24 = (char *)*(qword **)pcVar24;
            }
            FUN_00655a68();
            goto LAB_0065cc74;
          }
          if (pqVar22 == (qword *)0x0) goto LAB_0065e69c;
LAB_0065ccc8:
          if ((puVar33[0x31] & 1) == 0) {
            if ((puVar33[0x32] & 1) != 0) {
LAB_0065cd54:
              func_0x00675de8(&pqStack_288);
              FUN_0065bbd0(&pqStack_288);
              func_0x0065bbfc(&pqStack_288,1);
              puVar33 = (undefined *)pqVar16[1];
              FUN_0065c5b4(&pqStack_288);
              func_0x006747b4((undefined *)*pqVar41);
              pqVar26 = (qword *)(long)(char)puVar33[0x17];
              if ((long)pqVar26 < 0) {
                pqVar26 = *(qword **)(puVar33 + 8);
              }
              pqVar49 = (qword *)*pqVar16;
              FUN_0065bd0c();
              goto LAB_0065cdd8;
            }
            if ((puVar33[0x33] & 1) == 0) {
              Hint_Prefetch(puStack_368,0,2,0);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (long)&PTR_LOOP_00a01490 + uVar17;
              uVar31 = SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^
                       ((long)&PTR_LOOP_00a01490 + uVar17) * -0x622015f714c7d297;
              uVar45 = (ulong)puStack_368 >> 0xc ^ uVar31 >> 7;
              in_b0 = (byte)uVar31 & 0x7f;
              puVar33 = puStack_368;
              uVar31 = uStack_358;
              in_register_00005001 = in_b0;
              in_register_00005002 = in_b0;
              in_register_00005003 = in_b0;
              in_register_00005004 = in_b0;
              in_register_00005005 = in_b0;
              in_register_00005006 = in_b0;
              in_register_00005007 = in_b0;
              while( true ) {
                func_0x00676178(CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar54,CONCAT14(bVar53,
                                                  CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar50,
                                                  bVar57))))))),
                                *(undefined8 *)(puVar33 + (uVar45 & uVar31)));
                bVar56 = in_register_00005007;
                bVar55 = in_register_00005006;
                bVar54 = in_register_00005005;
                bVar53 = in_register_00005004;
                bVar52 = in_register_00005003;
                bVar51 = in_register_00005002;
                bVar50 = in_register_00005001;
                bVar57 = in_b0;
                in_b0 = bVar57;
                in_register_00005001 = bVar50;
                in_register_00005002 = bVar51;
                in_register_00005003 = bVar52;
                in_register_00005004 = bVar53;
                in_register_00005005 = bVar54;
                in_register_00005006 = bVar55;
                in_register_00005007 = bVar56;
                lVar23 = extraout_x13;
                while (lVar23 != 0) {
                  func_0x00676784();
                  if (uVar17 == *(uint *)(extraout_x11 + (extraout_x14 & extraout_x10) * 4)) {
                    if (extraout_x8_05 != 0) goto LAB_0065cd54;
                    goto LAB_0065cdac;
                  }
                  func_0x0067692c();
                  lVar23 = extraout_x13_00;
                }
                func_0x00676168();
                if ((extraout_x13_01 & 1) != 0) break;
                uVar45 = extraout_x9_02 + 8 + extraout_x12;
                puVar33 = extraout_x8_06;
                uVar31 = extraout_x10_00;
              }
            }
LAB_0065cdac:
            pqStack_148 = (qword *)CONCAT44(pqStack_148._4_4_,(int)uVar17);
            pqVar26 = param_2;
            pqStack_288 = pqVar16;
            pqStack_280 = param_2;
            pqStack_278 = (qword *)&pqStack_148;
            func_0x006747b4((undefined *)param_2[3]);
            func_0x00676764();
          }
          pqVar49 = (qword *)0x0;
        }
        else {
LAB_0065cc74:
          in_OV = SBORROW8((long)pqVar49,(long)pqVar22);
          in_NG = (long)pqVar49 - (long)pqVar22 < 0;
          in_ZR = 1;
          if (pqVar49 == pqVar22) goto LAB_0065e69c;
          puVar33 = (undefined *)*pqVar16;
          if (pqVar49 == (qword *)0x0) goto LAB_0065ccc8;
          if (((puVar33[0x30] == '\x01') &&
              (pqVar47 = pqVar49, func_0x006766d0(), pqVar47 != (qword *)0x0)) &&
             (*(int *)((long)pqVar49 + 0x34) == 0)) {
            pqVar26 = pqVar49;
            FUN_0066ead0(&pqStack_288,pqVar16 + 0x1f);
          }
        }
LAB_0065cdd8:
        *(qword **)((undefined *)pqVar22[9] + uVar17 * 8) = pqVar49;
        bVar36 = pqVar49 == (qword *)0x0 & ((undefined *)*pqVar16)[0x31] | bVar36;
        uVar17 = uVar17 + 1;
      } while( true );
    }
LAB_0065c974:
    func_0x0067556c();
    FUN_0065ae94();
  }
  else {
    pcVar24 = (char *)pqVar22[1];
    pqStack_288 = (qword *)&pqStack_2d8;
    func_0x00675178();
    FUN_0065ad28();
  }
  pqVar41 = (qword *)0x0;
  ppuVar30 = (undefined **)param_2;
  do {
    func_0x006697ac(&uStack_328);
    func_0x00674120(uStack_b0);
    if ((bool)in_ZR) {
      return pqVar41;
    }
    ___stack_chk_fail();
LAB_0065d8a0:
    func_0x00676b4c();
    if (!(bool)in_ZR) {
      pqVar22 = (qword *)pqVar16[1];
      pcVar24 = "google.protobuf.FileOptions";
      pqVar26 = (qword *)((long)&MACH_HEADER.flags + 3);
      FUN_00654614();
      func_0x00675120();
      if ((bool)in_ZR) {
        lVar38 = 0;
        lVar23 = 0;
        while( true ) {
          func_0x00676138();
          lVar35 = (long)extraout_w8_01;
          in_OV = SBORROW8(lVar23,lVar35);
          in_NG = lVar23 - lVar35 < 0;
          if (lVar35 <= lVar23) break;
          FUN_0066bfcc(*(undefined8 *)*pqVar16);
          puVar33 = (undefined *)*pqVar16;
          func_0x006756d4();
          pqVar26 = (qword *)(ulong)*(uint *)(extraout_x8_16 + lVar38);
          FUN_00655ef4();
          if (puVar33 != (undefined *)0x0) {
            pqStack_288 = *(qword **)(puVar33 + 0x10);
            func_0x00675f64(pqVar16 + 0x1f);
          }
          lVar23 = lVar23 + 1;
          lVar38 = lVar38 + 0x10;
        }
      }
    }
LAB_0065d9ac:
    func_0x00675df0();
    pqStack_3a0[0x10] = (qword)ppuVar30;
    func_0x00674eec();
    pqStack_3a0[0x11] = (qword)extraout_x8_17;
    pqStack_3a0[0x12] = (qword)extraout_x8_17;
    pqVar41 = &uStack_2b8;
    func_0x0053b048();
    func_0x00674764();
    while (func_0x00676284(), in_NG != in_OV) {
      func_0x00674260((undefined *)pqStack_3a0[0xc]);
      func_0x00675bac();
      FUN_00662708();
      func_0x006760ac();
    }
    func_0x00674764();
    while (func_0x00676278(), in_NG != in_OV) {
      func_0x0067448c();
      func_0x00675bac();
      FUN_00662b70();
      func_0x006760ac();
    }
    pdVar39 = (dword *)((long)&MACH_HEADER.magic + 1);
    lVar23 = 0;
    while (lVar23 < *(int *)((long)pqStack_3a0 + 0x44)) {
      func_0x00675480();
      lVar23 = *(long *)(extraout_x9_07 + 0x70) + extraout_x11_03 * 0x40;
      func_0x00676bb4();
      func_0x00674de8();
      lVar38 = *extraout_x8_18;
      for (pqVar49 = pqStack_3a0; ppuVar30 = (undefined **)(long)*(int *)(lVar23 + 0x38),
          bVar13 = (undefined **)pqVar49 == ppuVar30, (long)pqVar49 < (long)ppuVar30;
          pqVar49 = (qword *)((long)pqVar49 + 1)) {
        lVar35 = *(long *)(lVar23 + 0x30);
        func_0x00675108(*(undefined8 *)(lVar38 + 0x18));
        puVar34 = (undefined8 *)(lVar38 + 0x18);
        if (!bVar13) {
          puVar34 = extraout_x9_08;
        }
        pqVar47 = (qword *)*puVar34;
        func_0x00676a98((undefined *)pqVar47[4]);
        func_0x00675760();
        if (*(code *)pqVar41 == (code)0x1) {
          pqVar41 = (qword *)((long)pqVar22 + lVar35 + 0x18);
          FUN_00663450();
        }
        else if (*(code *)pqVar41 == (code)0x0) {
          if ((((undefined *)*pqVar16)[0x31] & 1) == 0) {
            pqVar41 = pqVar16;
            func_0x00676bfc(*(undefined8 *)((long)pqVar22 + lVar35 + 8));
            pqVar26 = pqVar47;
            FUN_0065aebc();
          }
          else {
            func_0x00675bf8((undefined *)pqVar47[4]);
            if ((long)pqVar26 < 0) {
              pqVar26 = (qword *)pqVar41[1];
            }
            pqVar41 = (qword *)((long)pqVar22 + lVar35 + 0x18);
            FUN_00663358();
          }
        }
        else {
          pqStack_288 = pqVar47;
          func_0x00676c08(*(undefined8 *)((long)pqVar22 + lVar35 + 8));
          FUN_0065ad28();
        }
        func_0x00676a98((undefined *)pqVar47[5]);
        func_0x00675760();
        if (*(code *)pqVar41 == (code)0x1) {
          pqVar40 = (qword *)((long)pqVar22 + lVar35 + 0x28);
          FUN_00663450();
          pcVar24 = (char *)pqVar41;
        }
        else if (*(code *)pqVar41 == (code)0x0) {
          if ((((undefined *)*pqVar16)[0x31] & 1) == 0) {
            pqVar40 = pqVar16;
            func_0x00676bfc(*(undefined8 *)((long)pqVar22 + lVar35 + 8));
            FUN_0065aebc();
            pcVar24 = (char *)pqVar41;
            pqVar26 = pqVar47;
          }
          else {
            func_0x00675bf8((undefined *)pqVar47[5]);
            pcVar24 = (char *)pqVar41;
            if ((long)pqVar26 < 0) {
              pcVar24 = (char *)*pqVar41;
              pqVar26 = (qword *)pqVar41[1];
            }
            pqVar40 = (qword *)((long)pqVar22 + lVar35 + 0x28);
            FUN_00663358();
          }
        }
        else {
          pcVar24 = (char *)pqVar41;
          pqStack_288 = pqVar47;
          func_0x00676c08(*(undefined8 *)((long)pqVar22 + lVar35 + 8));
          func_0x00676764();
          pqVar40 = pqVar41;
        }
        pqVar22 = pqVar22 + 10;
        pqVar41 = pqVar40;
      }
      lVar23 = extraout_x11_04 + 1;
    }
    if ((undefined *)pqVar16[0x1e] != (undefined *)0x0) {
      pdVar39 = &section_00000068.offset;
      for (lVar23 = 0; lVar23 < *(int *)((long)pqStack_3a0 + 0x3c); lVar23 = lVar23 + 1) {
        pqStack_f8 = (qword *)((undefined *)pqStack_3a0[0xc] + lVar23 * 0x98);
        Hint_Prefetch((undefined *)pqVar16[0x1b],0,2,0);
        pqVar41 = pqVar16 + 0x1b;
        pcVar24 = (char *)&pqStack_f8;
        FUN_0066e1a4((undefined *)pqVar16[0x1b]);
        func_0x00676a38(pqStack_f8);
        lVar38 = extraout_x9_09;
        lVar35 = extraout_x10_04;
        uVar45 = extraout_x11_05;
        uVar17 = extraout_x13_02;
        while( true ) {
          uVar17 = uVar17 & uVar45;
          uVar58 = *(undefined8 *)(lVar35 + uVar17);
          uVar31 = CONCAT17(-((byte)((ulong)uVar58 >> 0x38) == in_register_00005007),
                            CONCAT16(-((byte)((ulong)uVar58 >> 0x30) == in_register_00005006),
                                     CONCAT15(-((byte)((ulong)uVar58 >> 0x28) ==
                                               in_register_00005005),
                                              CONCAT14(-((byte)((ulong)uVar58 >> 0x20) ==
                                                        in_register_00005004),
                                                       CONCAT13(-((byte)((ulong)uVar58 >> 0x18) ==
                                                                 in_register_00005003),
                                                                CONCAT12(-((byte)((ulong)uVar58 >>
                                                                                 0x10) ==
                                                                          in_register_00005002),
                                                                         CONCAT11(-((byte)((ulong)
                                                  uVar58 >> 8) == in_register_00005001),
                                                  -((byte)uVar58 == in_b0)))))))) &
                   0x8080808080808080;
          while (uVar31 != 0) {
            func_0x00676128();
            if (*(undefined ***)(extraout_x12_01 + (extraout_x15 & extraout_x11_06) * 0x20) ==
                (undefined **)extraout_x8_19) {
              if (extraout_x10_05 != 0) {
                lVar38 = extraout_x12_01 + (extraout_x15 & extraout_x11_06) * 0x20;
                iVar4 = *(int *)(lVar38 + 8);
                iVar15 = iVar4;
                if (2 < iVar4) {
                  iVar15 = 3;
                }
                pqStack_178 = (qword *)CONCAT44(pqStack_178._4_4_,iVar15);
                if (0 < iVar4) {
                  pqStack_140 = (qword *)0x0;
                  pqStack_148 = (qword *)0x0;
                  lVar44 = 4;
                  puStack_138 = (undefined *)0x0;
                  pqVar26 = extraout_x8_19;
                  for (lVar35 = 0; lVar35 < (int)*(dword *)((long)pqVar26 + 4); lVar35 = lVar35 + 1)
                  {
                    FUN_00663488(&pqStack_148,*(undefined4 *)((undefined *)pqVar26[7] + lVar44));
                    lVar44 = lVar44 + 0x58;
                    pqVar26 = pqStack_f8;
                  }
                  lVar44 = 4;
                  for (lVar35 = 0; lVar35 < *(int *)((long)pqVar26 + 0x8c); lVar35 = lVar35 + 1) {
                    FUN_00663488(&pqStack_148,*(undefined4 *)((undefined *)pqVar26[0xc] + lVar44));
                    lVar44 = lVar44 + 0x58;
                    pqVar26 = pqStack_f8;
                  }
                  lVar44 = 0;
                  for (lVar35 = 0; lVar35 < *(int *)(pqVar26 + 0x12); lVar35 = lVar35 + 1) {
                    func_0x006634d0(&pqStack_148,*(undefined4 *)((undefined *)pqVar26[0xd] + lVar44)
                                    ,*(undefined4 *)((long)((undefined *)pqVar26[0xd] + lVar44) + 4)
                                   );
                    lVar44 = lVar44 + 8;
                    pqVar26 = pqStack_f8;
                  }
                  pqVar22 = (qword *)0x0;
                  for (lVar35 = 0; lVar35 < *(int *)(pqVar26 + 0x11); lVar35 = lVar35 + 1) {
                    func_0x006634d0(&pqStack_148,
                                    *(undefined4 *)((undefined *)pqVar26[0xb] + (long)pqVar22),
                                    *(undefined4 *)
                                     ((long)((undefined *)pqVar26[0xb] + (long)pqVar22) + 4));
                    pqVar22 = pqVar22 + 5;
                    pqVar26 = pqStack_f8;
                  }
                  FUN_006634f8(&pqStack_148,0x200000001fffffff);
                  FUN_006634f8(&pqStack_148,0x4e1f00004a38);
                  pcVar24 = (char *)pqStack_140;
                  if (pqStack_148 != pqStack_140) {
                    FUN_006699bc(pqStack_148,pqStack_140,
                                 LZCOUNT((long)pqStack_140 - (long)pqStack_148 >> 3) << 1 ^ 0x7e,1);
                  }
                  ppqStack_1a8 = (qword **)CONCAT44(ppqStack_1a8._4_4_,1);
                  pqVar26 = *(qword **)(lVar38 + 0x10);
                  if (pqVar26 != (qword *)0x0) {
                    pqStack_288 = (qword *)&pqStack_f8;
                    pqStack_280 = (qword *)&pqStack_148;
                    pcVar24 = (undefined *)pqStack_f8[1] + 0x18;
                    pqStack_278 = (qword *)&ppqStack_1a8;
                    ppqStack_270 = &pqStack_178;
                    FUN_0065ad28(pqVar16,pcVar24,pqVar26,*(undefined4 *)(lVar38 + 0x18),&pqStack_288
                                 ,FUN_006722c4);
                  }
                  pqVar41 = (qword *)&pqStack_148;
                  FUN_006635b0();
                }
              }
              goto LAB_0065de48;
            }
            uVar17 = extraout_x13_03;
            lVar38 = extraout_x9_10;
            lVar35 = extraout_x10_05;
            uVar45 = extraout_x11_06;
            uVar31 = extraout_x14_00 - 1 & extraout_x14_00;
          }
          bVar57 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar58 >> 0x38) == -0x80),
                                       CONCAT16(-((char)((ulong)uVar58 >> 0x30) == -0x80),
                                                CONCAT15(-((char)((ulong)uVar58 >> 0x28) == -0x80),
                                                         CONCAT14(-((char)((ulong)uVar58 >> 0x20) ==
                                                                   -0x80),CONCAT13(-((char)((ulong)
                                                  uVar58 >> 0x18) == -0x80),
                                                  CONCAT12(-((char)((ulong)uVar58 >> 0x10) == -0x80)
                                                           ,CONCAT11(-((char)((ulong)uVar58 >> 8) ==
                                                                      -0x80),-((char)uVar58 == -0x80
                                                                              )))))))),1);
          if ((bVar57 & 1) != 0) break;
          lVar38 = lVar38 + 8;
          uVar17 = lVar38 + uVar17;
        }
LAB_0065de48:
      }
    }
    pcVar27 = (code *)pqStack_398;
    if (((ulong)pqVar16[0x11] & 1) == 0) {
      func_0x00674868();
      plStack_268 = (long *)0x0;
      uStack_260 = 0;
      lStack_258 = 0;
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      ppuStack_230 = &PTR_FUN_00a0ef08;
      uStack_228 = 0;
      uStack_220 = 0;
      in_b0 = 0;
      in_register_00005001 = 0;
      in_register_00005002 = 0;
      in_register_00005003 = 0;
      in_register_00005004 = 0;
      in_register_00005005 = 0;
      in_register_00005006 = 0;
      in_register_00005007 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      pqStack_288 = pqVar16;
      ppqStack_270 = extraout_x8_20;
      for (puVar33 = (undefined *)pqVar16[0xe]; puVar33 != (undefined *)pqVar16[0xf];
          puVar33 = puVar33 + 0x58) {
        FUN_0066a6ac(&pqStack_288,puVar33,1);
      }
      pqStack_170 = pqStack_378;
      pqVar22 = (qword *)pqStack_3a0[0x10];
      uVar1 = *(uint *)(pqStack_3a0 + 4);
      pdVar39 = (dword *)(ulong)uVar1;
      pqStack_178 = pqVar16;
      func_0x00674eec();
      pqStack_3a0[0x11] = (qword)extraout_x8_21;
      pqStack_3a0[0x12] = (qword)extraout_x8_21;
      if (((ulong)pqVar16[0xd] & 1) == 0) {
        func_0x006748dc();
LAB_0065e62c:
        do {
          FUN_005558a0(&pqStack_148);
LAB_0065e634:
          func_0x006740e8();
LAB_0065ec1c:
          FUN_005558a0(&pqStack_288);
LAB_0065ec24:
          func_0x006748dc();
        } while( true );
      }
      if (((byte)*(code *)((long)pqVar22 + 0x29) >> 2 & 1) != 0) {
        puVar33 = (undefined *)pqVar16[1];
        pqVar26 = pqVar22;
        FUN_0066e554(pqVar22,&PTR_PTR_00b25a18);
        FUN_00655344(puVar33,pqVar26);
        pqStack_3a0[0x11] = (qword)puVar33;
        if ((undefined *)pqVar22[0x13] != (undefined *)0x0) {
          FUN_00678b18();
        }
        *(uint *)(pqVar22 + 5) = *(uint *)(pqVar22 + 5) & 0xfffffbff;
      }
      func_0x006764c8();
      cVar11 = SBORROW4(uVar1,999);
      cVar12 = (int)(uVar1 - 999) < 0;
      if ((int)uVar1 < 1000) {
        ppuVar30 = (undefined **)pqStack_3a0[0x11];
        cVar11 = SBORROW8((long)ppuVar30,0xb25a18);
        cVar12 = (long)(ppuVar30 + -0x164b43) < 0;
        if (ppuVar30 != &PTR_PTR_00b25a18) {
          func_0x00675658();
          func_0x00674f94();
        }
      }
      func_0x006764d0();
      func_0x006769c4();
      pqVar41 = pqVar16 + 4;
      pqVar26 = (qword *)&pqStack_f8;
      FUN_00688c50(&pqStack_148);
      if (pqStack_148 == (qword *)0x0) {
        pqVar22 = (qword *)pqVar16[1];
        pdVar39 = (dword *)&pqStack_148;
        func_0x00676558();
        pcVar24 = (char *)&pqStack_140;
        pqVar41 = pqVar22;
        FUN_00655344();
        pqStack_3a0[0x12] = (qword)pqVar41;
      }
      else {
        pcVar24 = (char *)pqStack_3a0[1];
        ppqStack_1a8 = &pqStack_148;
        func_0x006755fc();
        FUN_0065ad28();
      }
      func_0x00675d6c();
      func_0x00675d24();
      func_0x00674764();
      while (func_0x00676284(), cVar12 != cVar11) {
        func_0x00674260((undefined *)pqStack_3a0[0xc]);
        pqVar41 = (qword *)&pqStack_178;
        pcVar24 = (char *)(extraout_x8_22 + (long)pqVar22);
        FUN_0066f7b0();
        func_0x006752f4();
      }
      func_0x00674764();
      while( true ) {
        lVar23 = (long)*(int *)(pqStack_3a0 + 8);
        cVar11 = SBORROW8((long)pdVar39,lVar23);
        cVar12 = (long)pdVar39 - lVar23 < 0;
        if (lVar23 <= (long)pdVar39) break;
        func_0x00674260((undefined *)pqStack_3a0[0xd]);
        pqVar41 = (qword *)&pqStack_178;
        pcVar24 = (char *)(extraout_x8_23 + (long)pqVar22);
        FUN_0066fcd0();
        func_0x00674c40();
      }
      func_0x00674764();
      while (func_0x00676278(), cVar12 != cVar11) {
        func_0x0067448c();
        func_0x00675bac();
        FUN_0066ff9c();
        func_0x00674c40();
      }
      lVar23 = 0;
      while( true ) {
        lVar38 = (long)*(int *)((long)pqStack_3a0 + 0x44);
        cVar11 = SBORROW8(lVar23,lVar38);
        cVar12 = lVar23 - lVar38 < 0;
        if (lVar38 <= lVar23) break;
        puVar33 = (undefined *)pqStack_3a0[0xe];
        func_0x00676bb4();
        func_0x00674de8();
        pqVar49 = (qword *)*extraout_x8_24;
        pqVar22 = *(qword **)(puVar33 + lVar23 * 0x40 + 0x18);
        iVar15 = *(int *)(*(long *)(puVar33 + lVar23 * 0x40 + 0x10) + 0x20);
        uVar58 = *(undefined8 *)(*(long *)(puVar33 + lVar23 * 0x40 + 0x10) + 0x90);
        func_0x006769c4();
        *(char **)(puVar33 + lVar23 * 0x40 + 0x20) = pcVar24;
        *(char **)(puVar33 + lVar23 * 0x40 + 0x28) = pcVar24;
        if (((ulong)pqVar16[0xd] & 1) == 0) goto LAB_0065ec24;
        if ((*(dword *)(pqVar22 + 5) & 1) != 0) {
          pcVar24 = (char *)pqVar22;
          func_0x0066e688();
          func_0x00676090();
          *(char **)(puVar33 + lVar23 * 0x40 + 0x20) = pcVar24;
          pqVar41 = (qword *)pqVar22[9];
          if (pqVar41 != (qword *)0x0) {
            FUN_00678b18();
            pcVar24 = *(char **)(puVar33 + lVar23 * 0x40 + 0x20);
          }
          *(uint *)(pqVar22 + 5) = *(uint *)(pqVar22 + 5) & 0xfffffffe;
        }
        func_0x006764c8();
        bVar13 = iVar15 == 999;
        if ((iVar15 < 1000) &&
           (func_0x006751b4(*(undefined8 *)(puVar33 + lVar23 * 0x40 + 0x20)), !bVar13)) {
          pcVar24 = *(char **)(puVar33 + lVar23 * 0x40 + 8);
          pqVar41 = pqVar16;
          pqVar26 = pqVar49;
          func_0x00674858();
        }
        func_0x006764d0();
        if (pqVar41 == (qword *)0x0) {
          *(undefined8 *)(puVar33 + lVar23 * 0x40 + 0x28) = uVar58;
        }
        else {
          func_0x006759e0();
          if (pqStack_148 == (qword *)0x0) {
            func_0x00676558();
            func_0x00675d4c();
            *(qword **)(puVar33 + lVar23 * 0x40 + 0x28) = pqVar41;
          }
          else {
            pcVar24 = *(char **)(puVar33 + lVar23 * 0x40 + 8);
            ppqStack_1a8 = &pqStack_148;
            pqVar41 = pqVar16;
            pqVar26 = pqVar49;
            FUN_0065ad28();
          }
          func_0x00675d6c();
        }
        func_0x00675d24();
        pqStack_378 = (qword *)0x0;
        for (pdVar39 = (dword *)0x0;
            bVar13 = (undefined **)pdVar39 ==
                     (undefined **)(long)*(int *)(puVar33 + lVar23 * 0x40 + 0x38),
            (long)pdVar39 < (long)*(int *)(puVar33 + lVar23 * 0x40 + 0x38);
            pdVar39 = (dword *)((long)pdVar39 + 1)) {
          lVar38 = *(long *)(puVar33 + lVar23 * 0x40 + 0x30);
          func_0x00675108((undefined *)pqVar49[3]);
          puVar34 = extraout_x10_06;
          if (!bVar13) {
            puVar34 = extraout_x9_11;
          }
          pqVar22 = (qword *)*puVar34;
          pqVar47 = *(qword **)((long)pqStack_378 + lVar38 + 0x38);
          lVar35 = *(long *)((long)pqStack_378 + lVar38 + 0x10);
          iVar15 = *(int *)(*(long *)(lVar35 + 0x10) + 0x20);
          uVar58 = *(undefined8 *)(lVar35 + 0x28);
          func_0x006769c4();
          *(char **)((long)pqStack_378 + lVar38 + 0x40) = pcVar24;
          *(char **)((long)pqStack_378 + lVar38 + 0x48) = pcVar24;
          if ((*(byte *)(extraout_x10_07 + 0x68) & 1) == 0) {
            func_0x006748dc();
            goto LAB_0065e62c;
          }
          if ((*(dword *)(pqVar47 + 5) & 1) != 0) {
            pcVar24 = (char *)pqVar47;
            func_0x0066e6b8();
            func_0x00676090();
            *(char **)((long)pqStack_378 + lVar38 + 0x40) = pcVar24;
            pqVar41 = (qword *)pqVar47[9];
            if (pqVar41 != (qword *)0x0) {
              FUN_00678b18();
              pcVar24 = *(char **)((long)pqStack_378 + lVar38 + 0x40);
            }
            func_0x006760b8();
          }
          func_0x006764c8();
          bVar13 = iVar15 == 999;
          if ((iVar15 < 1000) &&
             (func_0x006751b4(*(undefined8 *)((long)pqStack_378 + lVar38 + 0x40)), !bVar13)) {
            pcVar24 = *(char **)((long)pqStack_378 + lVar38 + 8);
            pqVar41 = pqVar16;
            pqVar26 = pqVar22;
            func_0x00674858();
          }
          func_0x006764d0();
          if (pqVar41 == (qword *)0x0) {
            *(undefined8 *)((long)pqStack_378 + lVar38 + 0x48) = uVar58;
          }
          else {
            func_0x006759e0();
            if (pqStack_148 == (qword *)0x0) {
              func_0x00676558();
              func_0x00675d4c();
              *(qword **)((long)pqStack_378 + lVar38 + 0x48) = pqVar41;
            }
            else {
              pcVar24 = *(char **)((long)pqStack_378 + lVar38 + 8);
              ppqStack_1a8 = &pqStack_148;
              pqVar41 = pqVar16;
              FUN_0065ad28();
              pqVar26 = pqVar22;
            }
            func_0x00675d6c();
          }
          func_0x00675d24();
          pqStack_378 = pqStack_378 + 10;
        }
        lVar23 = lVar23 + 1;
      }
      func_0x00674f58();
      pqVar22 = (qword *)&MACH_HEADER.cpusubtype;
      pqStack_148 = pqVar16;
      while (func_0x00676284(), cVar12 != cVar11) {
        func_0x00674260((undefined *)pqStack_3a0[0xc]);
        func_0x00676a0c();
        FUN_00670354();
        func_0x006752f4();
      }
      func_0x00674764();
      while (func_0x00676278(), cVar12 != cVar11) {
        func_0x0067448c();
        func_0x00675bac();
        FUN_0065c3c0();
        func_0x00674c40();
      }
      pqVar41 = (qword *)pqVar16[0xe];
      while( true ) {
        ppuVar30 = (undefined **)pqVar16[0xf];
        in_OV = SBORROW8((long)pqVar41,(long)ppuVar30);
        in_NG = (long)pqVar41 - (long)ppuVar30 < 0;
        in_ZR = (undefined **)pqVar41 == ppuVar30;
        if ((bool)in_ZR) break;
        pqVar26 = (qword *)0x0;
        pcVar24 = (char *)pqVar41;
        FUN_0066a6ac(&pqStack_288);
        pqVar41 = pqVar41 + 0xb;
      }
      FUN_00661040(pqVar16 + 0xe);
      if ((ppuStack_3b0 != (undefined **)0x0) && (lStack_258 != 0)) {
        pqVar22 = (qword *)0x0;
        pqStack_140 = (qword *)0x0;
        pqStack_148 = (qword *)0x0;
        puStack_138 = (undefined *)0x0;
        pqStack_f0 = (qword *)0x0;
        uStack_e8 = 0;
        pdVar48 = (dword *)(ppuStack_3b0 + 2);
        pqStack_f8 = (qword *)0x0;
        func_0x00675578(0);
        pdVar39 = pdVar48;
        if (!(bool)in_ZR) {
          pdVar39 = extraout_x10_08;
        }
LAB_0065e3c0:
        func_0x00675578();
        pdVar43 = pdVar48;
        if (!(bool)in_ZR) {
          pdVar43 = extraout_x10_09;
        }
        if (pdVar39 != pdVar43 + (long)*(int *)(ppuStack_3b0 + 3) * 2) {
          if ((extraout_x8_25 & 1) != 0) {
            lVar38 = (long)*(int *)(*(undefined **)pdVar39 + 0x18);
            lVar23 = (long)pqStack_f0 - (long)pqStack_f8 >> 2;
            in_ZR = lVar23 == lVar38;
            if (lVar23 <= lVar38) {
              lVar38 = 0;
              pqVar41 = pqStack_f8;
              do {
                if (lVar23 == 0) goto LAB_0065e5d4;
                lVar35 = lVar38 >> 0x1e;
                qVar9 = *pqVar41;
                lVar38 = lVar38 + 0x100000000;
                lVar23 = lVar23 + -1;
                in_ZR = true;
                pqVar41 = (qword *)((long)pqVar41 + 4);
              } while (*(dword *)(*(long *)(*(undefined **)pdVar39 + 0x20) + lVar35) == (dword)qVar9
                      );
            }
          }
          lVar23 = 0;
          pqStack_f0 = pqStack_f8;
          while( true ) {
            lVar38 = (long)*(int *)(*(undefined **)pdVar39 + 0x18);
            in_ZR = lVar23 == lVar38;
            if (lVar38 <= lVar23) break;
            pqStack_178 = (qword *)CONCAT44(pqStack_178._4_4_,
                                            *(undefined4 *)
                                             (*(long *)(*(undefined **)pdVar39 + 0x20) + lVar23 * 4)
                                           );
            pcVar24 = (char *)&pqStack_178;
            func_0x0063cd38(&pqStack_f8);
            lVar23 = lVar23 + 1;
          }
          pqStack_378 = (qword *)CONCAT44(pqStack_378._4_4_,(uint)pqVar22);
          Hint_Prefetch(ppqStack_270,0,2,0);
          func_0x0067328c(ppqStack_270,&pqStack_f8);
          uVar45 = uStack_260;
          plVar10 = plStack_268;
          ppqVar25 = ppqStack_270;
          lVar23 = 0;
          func_0x00676198((ulong)ppqStack_270 >> 0xc);
          pqVar49 = pqStack_f0;
          pqVar41 = pqStack_f8;
          uVar17 = extraout_x8_26;
          do {
            uVar17 = uVar17 & uVar45;
            func_0x006753d4();
            uVar31 = extraout_x8_27 & 0x8080808080808080;
            if (uVar31 != 0) {
LAB_0065e4a4:
              uVar6 = (uVar31 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar31 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              pqVar40 = (qword *)(plVar10 +
                                 (uVar17 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) &
                                 uVar45) * 6);
              pqVar47 = pqVar41;
              pcVar24 = (char *)pqVar49;
              pqVar26 = pqVar40;
              FUN_00673408();
              if (((ulong)pqVar47 & 1) == 0) goto code_r0x0065e4d0;
              if (ppqVar25 != (qword **)0x0) {
                if (pqVar22 == (qword *)0x0) {
                  pqVar47 = (qword *)&pqStack_148;
                  FUN_0054cf78(pqVar47,*(undefined4 *)(ppuStack_3b0 + 3));
                  func_0x00675590(*(undefined **)pdVar48);
                  pdVar43 = pdVar48;
                  if (!(bool)in_ZR) {
                    pdVar43 = extraout_x9_12;
                  }
                  for (; pdVar43 != pdVar39; pdVar43 = pdVar43 + 2) {
                    func_0x00676560();
                    FUN_0067e144();
                  }
                }
                func_0x00676560();
                pcVar24 = *(char **)pdVar39;
                FUN_0067e144();
                *(undefined4 *)(pqVar47 + 3) = 0;
                for (puVar42 = (uint *)pqVar40[3]; puVar42 != (uint *)pqVar40[4];
                    puVar42 = puVar42 + 1) {
                  pcVar24 = (char *)(ulong)*puVar42;
                  FUN_00533cb4(pqVar47 + 3);
                }
                pqVar22 = (qword *)((long)&MACH_HEADER.magic + 1);
                in_ZR = 1;
                goto LAB_0065e5d4;
              }
              goto LAB_0065e54c;
            }
LAB_0065e4d8:
            func_0x00674774();
            if ((extraout_x8_28 & 1) != 0) goto LAB_0065e54c;
            lVar23 = lVar23 + 8;
            uVar17 = lVar23 + uVar17;
          } while( true );
        }
        in_OV = SBORROW8((long)pdVar48,(long)&pqStack_148);
        in_NG = (long)pdVar48 - (long)&pqStack_148 < 0;
        in_ZR = (qword **)pdVar48 == &pqStack_148;
        if (((uint)!(bool)in_ZR & (uint)pqVar22) != 0) {
          puVar33 = ppuStack_3b0[4];
          in_OV = SBORROW8((long)puVar33,(long)puStack_138);
          in_NG = (long)puVar33 - (long)puStack_138 < 0;
          in_ZR = puVar33 == puStack_138;
          if ((bool)in_ZR) {
            pcVar24 = (char *)&pqStack_148;
            func_0x0054cde4(pdVar48);
          }
          else {
            FUN_0067350c(pdVar48);
            if ((int)pqStack_140 != 0) {
              pcVar24 = (char *)&pqStack_148;
              func_0x00673520(pdVar48);
            }
          }
        }
        func_0x0053b048(&pqStack_f8);
        FUN_006734dc(&pqStack_148);
      }
      pqVar41 = (qword *)&pqStack_288;
      func_0x00664ef0();
      if (((ulong)pqVar16[0x11] & 1) != 0) goto LAB_0065e668;
      if ((((undefined *)*pqVar16)[0x31] & 1) == 0) {
        bVar13 = *(dword *)(pqStack_3a0 + 4) == 1000;
        pqStack_148 = pqStack_3a0;
        pqStack_f8 = pqVar16;
        if ((int)*(dword *)(pqStack_3a0 + 4) < 1000) {
LAB_0065e70c:
          ppuVar30 = (undefined **)pqStack_3a0[0x10];
        }
        else {
          func_0x00676dac((undefined *)pqStack_3a0[0x12]);
          if (bVar13) {
            pcVar24 = (char *)pqStack_3a0[1];
            func_0x00674f94();
          }
          ppuVar30 = (undefined **)pqStack_3a0[0x10];
          if (*(char *)((long)ppuVar30 + 0xa2) == '\x01') {
            pcVar24 = (char *)pqStack_3a0[1];
            func_0x00674f94();
            goto LAB_0065e70c;
          }
        }
        pqVar49 = pqStack_3a0;
        if ((ppuVar30 == &PTR_PTR_00b25d18) || (*(int *)(ppuVar30 + 0x15) != 3)) {
          for (iVar15 = 0; iVar15 < *(int *)(pqStack_3a0 + 6); iVar15 = iVar15 + 1) {
            func_0x006757d4();
            if (((pqVar41 != (qword *)0x0) && ((undefined **)pqVar41[0x10] != &PTR_PTR_00b25d18)) &&
               (*(int *)((undefined **)pqVar41[0x10] + 0x15) == 3)) {
              pqStack_178 = (qword *)CONCAT44(pqStack_178._4_4_,iVar15);
              func_0x006757d4();
              pcVar24 = (char *)pqVar41[1];
              pqStack_288 = (qword *)&pqStack_148;
              pqStack_280 = (qword *)&pqStack_178;
              func_0x006755fc();
              FUN_0065ad28();
              pqVar49 = pqStack_148;
              break;
            }
          }
        }
        dVar28 = *(dword *)(pqVar49 + 4);
        cVar11 = SBORROW4(dVar28,999);
        cVar12 = (int)(dVar28 - 999) < 0;
        if (dVar28 == 999) {
          func_0x00675154();
          for (; (long)pqVar22 < (long)(int)*(dword *)((long)pqVar49 + 4);
              pqVar22 = (qword *)((long)pqVar22 + 1)) {
            func_0x006746ec((undefined *)pqVar49[0xf]);
            pcVar24 = (char *)(extraout_x8_29 + (long)pdVar39);
            pqVar41 = pqVar16;
            FUN_006635d4();
            pdVar39 = pdVar39 + 0x16;
          }
          func_0x00675154();
          while( true ) {
            lVar23 = (long)*(int *)((long)pqVar49 + 0x3c);
            cVar11 = SBORROW8((long)pqVar22,lVar23);
            cVar12 = (long)pqVar22 - lVar23 < 0;
            if (lVar23 <= (long)pqVar22) break;
            func_0x0067461c((undefined *)pqVar49[0xc]);
            pcVar24 = (char *)(extraout_x8_30 + (long)pdVar39);
            pqVar41 = pqVar16;
            FUN_00663824();
            pqVar22 = (qword *)((long)pqVar22 + 1);
            pdVar39 = pdVar39 + 0x26;
          }
        }
        func_0x00674764();
        while (func_0x00676284(), cVar12 != cVar11) {
          func_0x00674260((undefined *)pqStack_3a0[0xc]);
          pqVar41 = (qword *)&pqStack_f8;
          pcVar24 = (char *)(extraout_x8_31 + (long)pqVar49);
          FUN_00670428();
          func_0x006752f4();
        }
        func_0x00674764();
        while( true ) {
          lVar23 = (long)*(int *)(pqStack_3a0 + 8);
          cVar11 = SBORROW8((long)pdVar39,lVar23);
          cVar12 = (long)pdVar39 - lVar23 < 0;
          if (lVar23 <= (long)pdVar39) break;
          func_0x00674260((undefined *)pqStack_3a0[0xd]);
          func_0x00675bac();
          FUN_00664688();
          func_0x00674c40();
        }
        func_0x00674764();
        while (func_0x00676278(), cVar12 != cVar11) {
          func_0x0067448c();
          func_0x00675bac();
          FUN_00663940();
          func_0x00674c40();
        }
        func_0x00675154();
        for (; bVar13 = (undefined **)pqVar22 ==
                        (undefined **)(long)*(int *)((long)pqStack_3a0 + 0x44),
            (long)pqVar22 < (long)*(int *)((long)pqStack_3a0 + 0x44);
            pqVar22 = (qword *)((long)pqVar22 + 1)) {
          func_0x006753e0((undefined *)pqStack_3a0[0xe]);
          puVar34 = extraout_x11_07;
          if (!bVar13) {
            puVar34 = extraout_x10_10;
          }
          lVar23 = extraout_x8_32 + (long)pdVar39 * 8;
          lVar38 = *(long *)(lVar23 + 0x10);
          if (((lVar38 != 0) &&
              (ppuVar30 = *(undefined ***)(lVar38 + 0x80), ppuVar30 != &PTR_PTR_00b25d18)) &&
             ((*(int *)(ppuVar30 + 0x15) == 3 &&
              ((pqVar26 = (qword *)*puVar34, (*(byte *)((long)ppuVar30 + 0xa3) & 1) != 0 ||
               (*(char *)((long)ppuVar30 + 0xa4) == '\x01')))))) {
            pcVar24 = (char *)(*(long *)(lVar23 + 8) + 0x18);
            pqVar41 = pqVar16;
            func_0x00676720();
          }
          pdVar39 = pdVar39 + 2;
        }
        cVar5 = *(code *)(pqVar16 + 0x11);
        in_OV = SBORROW4((uint)(byte)cVar5,1);
        in_NG = (int)((byte)cVar5 - 1) < 0;
        in_ZR = 0;
        if ((byte)cVar5 == 1) goto LAB_0065e668;
      }
LAB_0065e95c:
      puVar33 = (undefined *)*pqVar16;
      if (((undefined *)pqVar16[0x22] != (undefined *)0x0) && ((puVar33[0x31] & 1) == 0)) {
        func_0x006766d0();
        if (pqVar41 == (qword *)0x0) {
          pdVar39 = (dword *)0x0;
        }
        else {
          pdVar39 = (dword *)(ulong)(byte)*(code *)((long)pcVar24 + 0x18);
        }
        pqVar41 = (qword *)pqVar16[0x1f];
        pcVar24 = (char *)pqVar16[0x20];
        FUN_0065b458();
        pqVar22 = (qword *)&pqStack_148;
        pqStack_288 = pqVar41;
        pqStack_280 = (qword *)pcVar24;
        while (pqStack_288 != (qword *)0x0) {
          pqStack_148 = (qword *)*pqStack_280;
          pcVar24 = (char *)pqStack_148[1];
          pqStack_f8 = pqVar22;
          if (((ulong)pdVar39 & 1) == 0) {
            func_0x006755fc();
            FUN_0065af68();
          }
          else {
            func_0x006755fc();
            FUN_0065ad28();
          }
          FUN_0065b480(&pqStack_288);
        }
        pqStack_288 = (qword *)0x0;
        if (((ulong)pqVar16[0x11] & 1) != 0) goto LAB_0065e69c;
        puVar33 = (undefined *)*pqVar16;
      }
      pqVar41 = pqStack_3a0;
      ppuVar30 = (undefined **)pqStack_398;
      if ((puVar33[0x31] & 1) == 0) {
        pqStack_148 = pqVar16;
        pqStack_140 = param_2;
        func_0x006751b4((undefined *)pqStack_3a0[0x11]);
        if (!(bool)in_ZR) {
          pqVar26 = (qword *)pqStack_3a0[1];
          ppqStack_270 = (qword **)(long)(char)*(code *)((long)pqVar26 + 0x17);
          pqStack_278 = pqVar26;
          if ((long)ppqStack_270 < 0) {
            pqStack_278 = (qword *)*pqVar26;
            ppqStack_270 = (qword **)pqVar26[1];
          }
          pqStack_288 = extraout_x8_33;
          pqStack_280 = param_2;
          func_0x00675584((undefined *)param_2[0x16],(undefined *)pqVar16[2]);
          plStack_268 = extraout_x8_34;
          uStack_260 = extraout_x9_13;
          if ((long)extraout_x9_13 < 0) {
            plStack_268 = (long *)*extraout_x8_34;
            uStack_260 = extraout_x8_34[1];
          }
          pqVar26 = (qword *)&pqStack_288;
          pcVar24 = (char *)pqStack_3a0;
          FUN_00670ce0();
        }
        func_0x00674764();
        while (func_0x00676284(), in_NG != in_OV) {
          func_0x00674260((undefined *)pqStack_3a0[0xc]);
          func_0x00676a0c();
          FUN_0067098c();
          func_0x006752f4();
        }
        func_0x00674764();
        while( true ) {
          lVar23 = (long)*(int *)(pqStack_3a0 + 8);
          cVar11 = SBORROW8((long)pdVar39,lVar23);
          cVar12 = (long)pdVar39 - lVar23 < 0;
          if (lVar23 <= (long)pdVar39) break;
          func_0x00674260((undefined *)pqStack_3a0[0xd]);
          func_0x00676a0c();
          func_0x00670ba4();
          func_0x00674c40();
        }
        func_0x00674764();
        while (func_0x00676278(), cVar12 != cVar11) {
          func_0x0067448c();
          func_0x00676a0c();
          FUN_00670c68();
          func_0x00674c40();
        }
        for (lVar23 = 0; uVar14 = lVar23 == *(int *)((long)pqStack_3a0 + 0x44),
            lVar23 < *(int *)((long)pqStack_3a0 + 0x44); lVar23 = lVar23 + 1) {
          puVar33 = (undefined *)pqStack_3a0[0xe];
          func_0x00676bb4();
          func_0x00674de8();
          pqVar41 = (qword *)*extraout_x8_35;
          func_0x006751b4(*(undefined8 *)(puVar33 + lVar23 * 0x40 + 0x20));
          if (!(bool)uVar14) {
            pcVar24 = *(char **)(puVar33 + lVar23 * 0x40 + 0x10);
            lVar38 = *(long *)(puVar33 + lVar23 * 0x40 + 8);
            ppqStack_270 = (qword **)(long)*(char *)(lVar38 + 0x2f);
            if ((long)ppqStack_270 < 0) {
              pqStack_278 = *(qword **)(lVar38 + 0x18);
              ppqStack_270 = *(qword ***)(lVar38 + 0x20);
            }
            else {
              pqStack_278 = (qword *)(lVar38 + 0x18);
            }
            pqStack_288 = extraout_x8_36;
            pqStack_280 = pqVar41;
            func_0x00675584((undefined *)param_2[0x16],(undefined *)pqVar16[2]);
            plStack_268 = extraout_x8_37;
            uStack_260 = extraout_x9_14;
            if ((long)extraout_x9_14 < 0) {
              plStack_268 = (long *)*extraout_x8_37;
              uStack_260 = extraout_x8_37[1];
            }
            pqVar26 = (qword *)&pqStack_288;
            FUN_00670ce0();
          }
          func_0x00675480();
          ppuVar30 = (undefined **)(pqVar41 + 3);
          lVar38 = 8;
          for (pqVar41 = pqStack_3a0; (long)pqVar41 < (long)*(int *)(puVar33 + lVar23 * 0x40 + 0x38)
              ; pqVar41 = (qword *)((long)pqVar41 + 1)) {
            lVar35 = *(long *)(puVar33 + lVar23 * 0x40 + 0x30);
            pqVar49 = *(qword **)((long)pqVar22 + lVar35 + 0x40);
            if ((undefined **)pqVar49 != &PTR_PTR_00b25a18) {
              pqVar26 = (qword *)ppuVar30;
              if (((ulong)*ppuVar30 & 1) != 0) {
                pqVar26 = (qword *)(*ppuVar30 + lVar38 + -1);
              }
              pcVar24 = *(char **)(*(long *)((long)pqVar22 + lVar35 + 0x10) + 0x10);
              pqStack_288 = pqVar49;
              pqStack_280 = (qword *)*pqVar26;
              lVar35 = *(long *)((long)pqVar22 + lVar35 + 8);
              ppqStack_270 = (qword **)(long)*(char *)(lVar35 + 0x2f);
              if ((long)ppqStack_270 < 0) {
                pqStack_278 = *(qword **)(lVar35 + 0x18);
                ppqStack_270 = *(qword ***)(lVar35 + 0x20);
              }
              else {
                pqStack_278 = (qword *)(lVar35 + 0x18);
              }
              func_0x00675584((undefined *)param_2[0x16],(undefined *)pqVar16[2]);
              plStack_268 = extraout_x8_38;
              uStack_260 = extraout_x9_15;
              if ((long)extraout_x9_15 < 0) {
                plStack_268 = (long *)*extraout_x8_38;
                uStack_260 = extraout_x8_38[1];
              }
              pqVar26 = (qword *)&pqStack_288;
              FUN_00670ce0();
            }
            pqVar22 = pqVar22 + 10;
            lVar38 = lVar38 + 8;
          }
        }
        in_OV = '\0';
        in_NG = '\0';
        in_ZR = *(code *)(pqVar16 + 0x11) == (code)0x0;
        pqVar41 = (qword *)0x0;
        if ((bool)in_ZR) {
          pqVar41 = pqStack_3a0;
        }
      }
    }
    else {
LAB_0065e668:
      func_0x00674764();
      while( true ) {
        ppuVar30 = (undefined **)(long)*(int *)(param_2 + 7);
        in_OV = SBORROW8((long)pdVar39,(long)ppuVar30);
        in_NG = (long)pdVar39 - (long)ppuVar30 < 0;
        in_ZR = (undefined **)pdVar39 == ppuVar30;
        if ((long)ppuVar30 <= (long)pdVar39) break;
        func_0x00674260((undefined *)pqStack_3a0[0xc]);
        func_0x00675bac();
        FUN_00661078();
        func_0x006752f4();
      }
      if (((ulong)pqVar16[0x11] & 1) == 0) goto LAB_0065e95c;
LAB_0065e69c:
      pqVar41 = (qword *)0x0;
      ppuVar30 = (undefined **)pcVar27;
    }
    func_0x00667c38(&puStack_368);
    func_0x00676078();
  } while( true );
code_r0x0065e4d0:
  func_0x00676458();
  if (uVar31 == 0) goto LAB_0065e4d8;
  goto LAB_0065e4a4;
LAB_0065e54c:
  if (pqVar22 == (qword *)0x0) {
    pqVar22 = (qword *)0x0;
  }
  else {
    pcVar24 = *(char **)pdVar39;
    func_0x00676560();
    FUN_0067e144();
    pqVar22 = (qword *)((long)&MACH_HEADER.magic + 1);
  }
LAB_0065e5d4:
  pdVar39 = pdVar39 + 2;
  goto LAB_0065e3c0;
}



/* Entry: 0065c654; end: 0065efcf;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0065cd18 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

qword * FUN_0065c654(qword *param_1,qword *param_2,qword *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  code cVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  qword **ppqVar8;
  qword qVar9;
  long *plVar10;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar11;
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  qword **ppqVar19;
  qword *pqVar20;
  qword *pqVar21;
  long lVar22;
  char *pcVar23;
  qword **ppqVar24;
  qword *pqVar25;
  dword dVar26;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined **ppuVar27;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  qword *extraout_x8_04;
  long extraout_x8_05;
  undefined *extraout_x8_06;
  long *extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  long extraout_x8_12;
  undefined8 extraout_x8_13;
  qword *extraout_x8_14;
  qword *extraout_x8_15;
  long extraout_x8_16;
  undefined *extraout_x8_17;
  long *extraout_x8_18;
  undefined **ppuVar28;
  qword *extraout_x8_19;
  qword **extraout_x8_20;
  undefined *extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  undefined8 *extraout_x8_24;
  ulong extraout_x8_25;
  ulong extraout_x8_26;
  ulong extraout_x8_27;
  ulong extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  qword *extraout_x8_33;
  long *extraout_x8_34;
  undefined8 *extraout_x8_35;
  qword *extraout_x8_36;
  long *extraout_x8_37;
  long *extraout_x8_38;
  long extraout_x9;
  qword **extraout_x9_00;
  qword *extraout_x9_01;
  long extraout_x9_02;
  qword *extraout_x9_03;
  qword *extraout_x9_04;
  long extraout_x9_05;
  qword *extraout_x9_06;
  long extraout_x9_07;
  undefined8 *extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  undefined8 *extraout_x9_11;
  dword *extraout_x9_12;
  ulong extraout_x9_13;
  ulong extraout_x9_14;
  ulong extraout_x9_15;
  ulong extraout_x10;
  ulong extraout_x10_00;
  qword **extraout_x10_01;
  qword **extraout_x10_02;
  qword **extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  undefined8 *extraout_x10_06;
  long extraout_x10_07;
  dword *extraout_x10_08;
  dword *extraout_x10_09;
  undefined8 *extraout_x10_10;
  long extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  qword *extraout_x11_02;
  long extraout_x11_03;
  long extraout_x11_04;
  ulong extraout_x11_05;
  ulong extraout_x11_06;
  undefined8 *extraout_x11_07;
  long extraout_x12;
  qword *extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  long extraout_x13_00;
  ulong extraout_x13_01;
  ulong extraout_x13_02;
  ulong extraout_x13_03;
  ulong extraout_x14;
  ulong uVar29;
  ulong extraout_x14_00;
  ulong extraout_x15;
  undefined **ppuVar30;
  undefined *puVar31;
  undefined8 *puVar32;
  long lVar33;
  byte bVar34;
  undefined *puVar35;
  long lVar36;
  dword *pdVar37;
  qword *pqVar38;
  qword *pqVar39;
  uint *puVar40;
  dword *pdVar41;
  code *pcVar42;
  long lVar43;
  ulong uVar44;
  undefined1 *puVar45;
  qword *pqVar46;
  dword *pdVar47;
  qword *pqVar48;
  byte in_b0;
  byte in_register_00005001;
  byte bVar49;
  byte in_register_00005002;
  byte bVar50;
  byte in_register_00005003;
  byte bVar51;
  byte in_register_00005004;
  byte bVar52;
  byte in_register_00005005;
  byte bVar53;
  byte in_register_00005006;
  byte bVar54;
  byte in_register_00005007;
  byte bVar55;
  byte bVar56;
  undefined8 uVar57;
  undefined **ppuStack_310;
  qword *pqStack_300;
  qword *pqStack_2f8;
  qword *pqStack_2d8;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined1 auStack_280 [72];
  qword *pqStack_238;
  qword *pqStack_230;
  qword *pqStack_228;
  byte bStack_219;
  ulong uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  ulong auStack_200 [3];
  qword *pqStack_1e8;
  qword *pqStack_1e0;
  qword *pqStack_1d8;
  qword **ppqStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  qword **ppqStack_108;
  qword **ppqStack_100;
  qword *pqStack_d8;
  qword *pqStack_d0;
  qword *pqStack_a8;
  qword *pqStack_a0;
  undefined *puStack_98;
  qword *pqStack_58;
  qword *pqStack_50;
  undefined8 uStack_48;
  undefined8 uStack_10;
  
  func_0x00674e30();
  pqVar21 = param_3;
  func_0x006743c8();
  pqVar25 = pqVar21;
  uStack_10 = extraout_x8;
  func_0x0065bfec();
  param_1[0x15] = (qword)pqVar21;
  pqStack_238 = pqVar21;
  if (((byte)*(code *)(param_2 + 2) >> 5 & 1) == 0) {
    func_0x00675584((undefined *)param_2[0x18]);
    if (extraout_x9 < 0) {
      if (*(long *)(extraout_x8_00 + 8) != 0) goto LAB_0065c6bc;
LAB_0065c6d4:
      dVar26 = 0x3e6;
      goto LAB_0065c6d8;
    }
    if (extraout_x9 == 0) goto LAB_0065c6d4;
LAB_0065c6bc:
    lVar22 = extraout_x8_00;
    FUN_004636dc(extraout_x8_00,&UNK_009106b3);
    iVar15 = (int)lVar22;
    if (iVar15 != 0) {
      pqVar21 = (qword *)param_1[0x15];
      goto LAB_0065c6d4;
    }
    func_0x006752bc((undefined *)param_2[0x18]);
    if (iVar15 == 0) {
      *(undefined4 *)((undefined *)param_1[0x15] + 0x20) = 0;
      pqStack_1e8 = param_2;
      func_0x0067556c();
      FUN_0065ad28();
    }
    else {
      *(undefined4 *)((undefined *)param_1[0x15] + 0x20) = 999;
    }
  }
  else {
    dVar26 = *(dword *)(param_2 + 0x1b);
LAB_0065c6d8:
    *(dword *)(pqVar21 + 4) = dVar26;
  }
  pqVar21 = *(qword **)((undefined *)*param_1 + 0x58);
  if ((*(qword **)((undefined *)*param_1 + 0x58) == (qword *)0x0) &&
     (pqVar21 = pqRam0000000000b63cb0, (bRam0000000000b63cb8 & 1) == 0)) {
    iVar15 = 0xb63cb8;
    ___cxa_guard_acquire();
    pqVar21 = pqRam0000000000b63cb0;
    if (iVar15 != 0) {
      pqVar21 = &segment_command_00000020.vmaddr;
      __Znwm();
      func_0x00676938();
      pqVar25 = pqVar21;
      func_0x006656a4(&UNK_008239b4,0x82);
      func_0x006768e4(FUN_0066968c);
      pqRam0000000000b63cb0 = pqVar21;
      ___cxa_guard_release(&bRam0000000000b63cb8);
      pqVar21 = pqRam0000000000b63cb0;
    }
  }
  FUN_006886b4(&uStack_288,*(undefined4 *)((undefined *)param_1[0x15] + 0x20),pqVar21);
  if (uStack_288 == 0) {
    cVar5 = *(code *)(param_1 + 0xd);
    in_OV = SBORROW4((uint)(byte)cVar5,1);
    in_NG = (int)((byte)cVar5 - 1) < 0;
    in_ZR = (byte)cVar5 == 1;
    if ((bool)in_ZR) {
      FUN_0067d448(param_1 + 4);
      *(code *)(param_1 + 0xd) = (code)0x0;
    }
    FUN_006696a4(param_1 + 4,auStack_280);
    *(code *)(param_1 + 0xd) = (code)0x1;
  }
  else {
    pqStack_1e8 = &uStack_288;
    func_0x0067556c();
    FUN_0065ad28();
  }
  pqVar21 = pqStack_238;
  *(undefined2 *)((long)pqStack_238 + 1) = 0;
  if (((byte)*(code *)(param_2 + 2) >> 4 & 1) == 0) {
    ppuVar30 = &PTR_PTR_00b25b30;
    ppuVar28 = (undefined **)0x0;
  }
  else {
    if ((undefined *)*param_3 == (undefined *)0x0) goto LAB_0065e634;
    puVar31 = (undefined *)param_3[2];
    iVar15 = *(int *)(param_3 + 0x16);
    uVar1 = iVar15 + 1;
    uVar16 = (ulong)uVar1;
    *(uint *)(param_3 + 0x16) = uVar1;
    func_0x00674520(uVar16,*(undefined4 *)(param_3 + 0xf));
    if (uVar16 != 0) {
      func_0x00674310();
      goto LAB_0065ec1c;
    }
    ppuVar30 = (undefined **)(puVar31 + (long)iVar15 * 0x30);
    ppuVar27 = (undefined **)param_2[0x1a];
    in_OV = '\0';
    in_NG = (long)ppuVar27 < 0;
    in_ZR = ppuVar27 == (undefined **)0x0;
    ppuVar28 = &PTR_PTR_00b25b30;
    if (!(bool)in_ZR) {
      ppuVar28 = ppuVar27;
    }
    FUN_0067e2a4(ppuVar30,ppuVar28);
    ppuVar28 = ppuVar30;
  }
  pqVar21[0x14] = (qword)ppuVar30;
  if ((undefined *)*param_3 == (undefined *)0x0) {
    func_0x006740e8();
    goto LAB_0065ec1c;
  }
  puVar31 = (undefined *)param_3[3];
  iVar15 = *(int *)((long)param_3 + 0xb4);
  uVar1 = iVar15 + 1;
  uVar16 = (ulong)uVar1;
  *(uint *)((long)param_3 + 0xb4) = uVar1;
  func_0x00674520(uVar16,*(undefined4 *)((long)param_3 + 0x7c));
  if (uVar16 != 0) {
    func_0x00674310();
    goto LAB_0065ec1c;
  }
  param_1[0x16] = (qword)(puVar31 + (long)iVar15 * 200);
  *(undefined **)((undefined *)param_1[0x15] + 0x98) = puVar31 + (long)iVar15 * 200;
  pqVar39 = (qword *)0x0;
  if ((param_2[2] & 1) == 0) {
    func_0x006759a0();
    pqVar39 = (qword *)&pqStack_1e8;
    FUN_00425cb4();
    func_0x0067556c();
    FUN_0065ae94();
    func_0x00675540();
  }
  func_0x00676688((undefined *)param_2[0x16]);
  pqVar21[1] = (qword)pqVar39;
  if (((byte)*(code *)(param_2 + 2) >> 1 & 1) == 0) {
    pqVar39 = param_3;
    FUN_0065bccc();
  }
  else {
    func_0x00676688((undefined *)param_2[0x17]);
  }
  pqVar21[2] = (qword)pqVar39;
  pqVar21[3] = (qword)*param_1;
  puVar17 = (undefined8 *)pqVar21[1];
  lVar22 = (long)*(char *)((long)puVar17 + 0x17);
  puVar32 = puVar17;
  if (lVar22 < 0) {
    puVar32 = (undefined8 *)*puVar17;
    lVar22 = puVar17[1];
  }
  FUN_0065c13c(puVar32,lVar22);
  pqStack_2d8 = param_3;
  if ((int)puVar32 == 0) {
    puVar35 = (undefined *)param_1[1];
    puVar32 = (undefined8 *)(puVar35 + 0xe8);
    Hint_Prefetch(*puVar32,0,2,0);
    puVar31 = (undefined *)pqVar21[1];
    func_0x0066c3a4(*puVar32,puVar31);
    lVar22 = 0;
    uVar44 = *(ulong *)(puVar35 + 0xf8);
    func_0x00674f64(*(ulong *)(puVar35 + 0xe8) >> 0xc ^ (ulong)puVar31 >> 7);
    uVar16 = extraout_x8_01;
    while( true ) {
      uVar16 = uVar16 & uVar44;
      func_0x00674f7c();
      while (ppuStack_310 = ppuVar28, (extraout_x8_02 & 0x8080808080808080) != 0) {
        uVar29 = (extraout_x8_02 & 0x8080808080808080) >> 7;
        uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
        uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
        pqVar39 = pqVar21;
        func_0x0066c384(pqVar21,*(undefined8 *)
                                 (*(long *)(puVar35 + 0xf0) +
                                 (uVar16 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) &
                                 uVar44) * 8));
        if (((ulong)pqVar39 & 1) != 0) {
          pcVar23 = (char *)((ulong)param_2[0x16] & 0xfffffffffffffffc);
          goto LAB_0065c974;
        }
        func_0x00675f08();
      }
      func_0x006745a8();
      if ((extraout_x8_03 & 1) != 0) break;
      lVar22 = lVar22 + 8;
      uVar16 = lVar22 + uVar16;
    }
    FUN_0066d5a4(puVar32,puVar31);
    *(qword **)(*(long *)(puVar35 + 0xf0) + (long)puVar32 * 8) = pqVar21;
    puVar32 = *(undefined8 **)(puVar35 + 0x178);
    if (puVar32 < *(undefined8 **)(puVar35 + 0x180)) {
      puVar17 = puVar32 + 1;
      *puVar32 = pqVar21;
    }
    else {
      puVar31 = puVar35 + 0x170;
      FUN_006661d8(puVar31,((long)puVar32 - *(long *)(puVar35 + 0x170) >> 3) + 1);
      plStack_1c8 = (long *)(puVar35 + 0x180);
      lVar22 = *(long *)(puVar35 + 0x170);
      lVar36 = *(long *)(puVar35 + 0x178);
      if (puVar31 != (undefined *)0x0) {
        FUN_0066622c();
      }
      func_0x00676a2c(lVar36 - lVar22);
      pqStack_1d8 = extraout_x8_04 + 1;
      *extraout_x8_04 = (qword)pqVar21;
      pqStack_1e0 = extraout_x8_04;
      ppqStack_1d0 = extraout_x9_00;
      FUN_00666200(puVar35 + 0x170,&pqStack_1e8);
      puVar17 = *(undefined8 **)(puVar35 + 0x178);
      func_0x00666254(&pqStack_1e8);
    }
    *(undefined8 **)(puVar35 + 0x178) = puVar17;
    pcVar23 = (char *)pqVar21[2];
    puVar31 = (undefined *)(long)(char)*(code *)((long)pcVar23 + 0x17);
    if ((long)puVar31 < 0) {
      puVar31 = *(undefined **)((long)pcVar23 + 8);
      if (puVar31 == (undefined *)0x0) goto LAB_0065caf0;
      pqVar39 = *(qword **)pcVar23;
    }
    else {
      pqVar39 = (qword *)pcVar23;
      if (*(code *)((long)pcVar23 + 0x17) == (code)0x0) goto LAB_0065caf0;
    }
    uVar16 = 0;
    for (; puVar31 != (undefined *)0x0; puVar31 = puVar31 + -1) {
      if (*(code *)pqVar39 == (code)0x2e) {
        uVar16 = uVar16 + 1;
      }
      pqVar39 = (qword *)((long)pqVar39 + 1);
    }
    in_OV = SBORROW8(uVar16,0x65);
    in_NG = (long)(uVar16 - 0x65) < 0;
    in_ZR = uVar16 == 0x65;
    if (uVar16 < 0x65) {
      func_0x0067556c();
      FUN_0065c160();
LAB_0065caf0:
      puStack_2a8 = &UNK_00811030;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      dVar26 = *(dword *)(param_2 + 4);
      *(dword *)(pqVar21 + 6) = dVar26;
      puVar31 = (undefined *)*param_3;
      if (puVar31 == (undefined *)0x0) {
        func_0x006740e8();
        goto LAB_0065ec1c;
      }
      iVar15 = *(int *)(param_3 + 0x15);
      uVar1 = iVar15 + dVar26 * 8;
      uVar16 = (ulong)uVar1;
      *(uint *)(param_3 + 0x15) = uVar1;
      func_0x00674520(uVar16,*(undefined4 *)(param_3 + 0xe));
      if (uVar16 != 0) {
        func_0x00674310();
        goto LAB_0065ec1c;
      }
      pqVar21[9] = (qword)(puVar31 + iVar15);
      pqVar21[5] = 0;
      FUN_0065f00c(param_1 + 0x1f);
      puStack_2c8 = &UNK_00811030;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      for (lVar22 = 0; lVar22 < *(int *)(param_2 + 0x14); lVar22 = lVar22 + 1) {
        pqStack_a8 = (qword *)CONCAT44(pqStack_a8._4_4_,
                                       *(undefined4 *)((undefined *)param_2[0x15] + lVar22 * 4));
        pqVar25 = (qword *)&pqStack_a8;
        FUN_0066f648(&pqStack_1e8,&puStack_2c8);
      }
      uVar16 = 0;
      bVar34 = 0;
      pqVar39 = param_2 + 3;
      pcVar42 = FUN_0066f42c;
      do {
        uVar1 = *(uint *)(param_2 + 4);
        uVar44 = (ulong)(int)uVar1;
        in_OV = SBORROW8(uVar16,uVar44);
        in_NG = (long)(uVar16 - uVar44) < 0;
        in_ZR = uVar16 == uVar44;
        if ((long)uVar44 <= (long)uVar16) {
          if (bVar34 != 0) {
            iVar15 = 0;
            pqVar48 = (qword *)((undefined *)*pqVar39 + 7);
            for (uVar16 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar16;
                uVar16 = uVar16 + 1) {
              if (*(long *)((undefined *)pqVar21[9] + uVar16 * 8) == 0) {
                pqVar46 = pqVar39;
                if (((ulong)*pqVar39 & 1) != 0) {
                  pqVar46 = pqVar48;
                }
                lVar22 = (long)(char)((undefined *)*pqVar46)[0x17];
                if (lVar22 < 0) {
                  lVar22 = *(long *)((undefined *)*pqVar46 + 8);
                }
                iVar15 = iVar15 + (int)lVar22;
              }
              iVar15 = iVar15 + 1;
              pqVar48 = pqVar48 + 1;
            }
            puVar18 = (undefined4 *)param_1[1];
            FUN_006554ac(puVar18,iVar15 + 4);
            *puVar18 = 0;
            pqVar21[5] = (qword)puVar18;
            puVar18 = puVar18 + 1;
            while (uVar14 = *(dword *)(param_2 + 4) == 0, 0 < (int)*(dword *)(param_2 + 4)) {
              if (*(long *)pqStack_238[9] == 0) {
                func_0x00675108((undefined *)*pqVar39);
                pqVar25 = pqVar39;
                if (!(bool)uVar14) {
                  pqVar25 = extraout_x9_03;
                }
                puVar17 = (undefined8 *)*pqVar25;
                pqVar25 = (qword *)(long)*(char *)((long)puVar17 + 0x17);
                puVar32 = puVar17;
                if ((long)pqVar25 < 0) {
                  puVar32 = (undefined8 *)*puVar17;
                  pqVar25 = (qword *)puVar17[1];
                }
                _memcpy(puVar18,puVar32);
                func_0x00675108((undefined *)*pqVar39);
                pqVar21 = pqVar39;
                if (!(bool)uVar14) {
                  pqVar21 = extraout_x9_04;
                }
                lVar22 = (long)(char)((undefined *)*pqVar21)[0x17];
                if (lVar22 < 0) {
                  lVar22 = *(long *)((undefined *)*pqVar21 + 8);
                }
                puVar18 = (undefined4 *)((long)puVar18 + lVar22);
              }
              *(undefined1 *)puVar18 = 0;
              func_0x006760ac();
              puVar18 = (undefined4 *)((long)puVar18 + 1);
            }
          }
          pqVar39 = param_3;
          FUN_0065f0ec(param_3,*(undefined4 *)(param_2 + 0x12));
          pqVar21 = pqStack_238;
          iVar15 = 0;
          pqStack_238[10] = (qword)pqVar39;
          pqStack_300 = pqStack_238;
          for (lVar22 = 0; lVar22 < *(int *)(param_2 + 0x12); lVar22 = lVar22 + 1) {
            iVar4 = *(int *)((undefined *)param_2[0x13] + lVar22 * 4);
            if ((iVar4 < 0) || ((int)*(dword *)(param_2 + 4) <= iVar4)) {
              func_0x006755fc();
              func_0x00676720();
            }
            else {
              iVar2 = iVar15 + 1;
              *(int *)((undefined *)pqVar21[10] + (long)iVar15 * 4) = iVar4;
              iVar15 = iVar2;
              if ((((undefined *)*param_1)[0x31] & 1) == 0) {
                pqVar39 = pqVar21;
                FUN_006571a0();
                pqStack_1e8 = pqVar39;
                func_0x00675f64(param_1 + 0x1f);
              }
            }
          }
          *(int *)((long)pqVar21 + 0x34) = iVar15;
          pqVar39 = param_1 + 0x17;
          FUN_0065f00c(pqVar39);
          if ((((undefined *)*param_1)[0x31] & 1) == 0) {
            for (iVar15 = 0; iVar15 < *(int *)(pqVar21 + 6); iVar15 = iVar15 + 1) {
              func_0x006757d4();
              pqVar48 = param_1;
              FUN_0065b0fc(param_1,pqVar39);
              pqVar39 = pqVar48;
            }
          }
          pqVar39 = param_3;
          FUN_0065f0ec(param_3,*(undefined4 *)(param_2 + 0x14));
          iVar15 = 0;
          pqVar21[0xb] = (qword)pqVar39;
          for (lVar22 = 0; lVar22 < *(int *)(param_2 + 0x14); lVar22 = lVar22 + 1) {
            iVar4 = *(int *)((undefined *)param_2[0x15] + lVar22 * 4);
            if ((iVar4 < 0) || ((int)*(dword *)(param_2 + 4) <= iVar4)) {
              func_0x006755fc();
              func_0x00676720();
            }
            else {
              *(int *)((undefined *)pqVar21[0xb] + (long)iVar15 * 4) = iVar4;
              iVar15 = iVar15 + 1;
            }
          }
          *(int *)(pqVar21 + 7) = iVar15;
          *(undefined4 *)((long)pqVar21 + 0x3c) = *(undefined4 *)(param_2 + 7);
          pqVar39 = param_3;
          func_0x0065bf3c();
          func_0x00674f58();
          pqVar21[0xc] = (qword)pqVar39;
          while (lVar22 < *(int *)(param_2 + 7)) {
            func_0x00675108((undefined *)param_2[6]);
            func_0x006757c0((undefined *)pqVar21[0xc]);
            FUN_0065f14c();
            func_0x006760ac();
          }
          *(undefined4 *)(pqVar21 + 8) = *(undefined4 *)(param_2 + 10);
          pqVar39 = param_3;
          FUN_0065be28();
          func_0x00674f58();
          pqVar21[0xd] = (qword)pqVar39;
          while (lVar22 < *(int *)(param_2 + 10)) {
            func_0x00675108((undefined *)param_2[9]);
            func_0x006757c0((undefined *)pqVar21[0xd]);
            FUN_006603cc();
            func_0x006760ac();
          }
          iVar15 = *(int *)(param_2 + 0xd);
          *(int *)((long)pqVar21 + 0x44) = iVar15;
          puVar31 = (undefined *)*param_3;
          if (puVar31 == (undefined *)0x0) {
            func_0x006740e8();
            goto LAB_0065ec1c;
          }
          lVar22 = (long)*(int *)(param_3 + 0x15);
          uVar1 = *(int *)(param_3 + 0x15) + iVar15 * 0x40;
          uVar16 = (ulong)uVar1;
          *(uint *)(param_3 + 0x15) = uVar1;
          func_0x00674520(uVar16,*(undefined4 *)(param_3 + 0xe));
          if (uVar16 != 0) {
            func_0x00674310();
            goto LAB_0065ec1c;
          }
          pqVar21[0xe] = (qword)(puVar31 + lVar22);
          lVar36 = 0;
          while (lVar36 < *(int *)(param_2 + 0xd)) {
            func_0x00676bb4();
            func_0x00674de8();
            lVar22 = *extraout_x8_07;
            puVar31 = (undefined *)pqVar21[0xe];
            uVar57 = *(undefined8 *)((undefined *)param_1[0x15] + 0x10);
            pqVar25 = param_3;
            FUN_00661344(uVar57,*(ulong *)(lVar22 + 0x30) & 0xfffffffffffffffc);
            puVar3 = puVar31 + extraout_x9_05 * 0x40;
            *(undefined8 *)(puVar3 + 8) = uVar57;
            *(undefined **)(puVar3 + 0x10) = (undefined *)param_1[0x15];
            func_0x00675e80(*(undefined8 *)(lVar22 + 0x30));
            FUN_0065c320(param_1);
            iVar15 = *(int *)(lVar22 + 0x20);
            *(int *)(puVar3 + 0x38) = iVar15;
            puVar31 = (undefined *)*param_3;
            if (puVar31 == (undefined *)0x0) {
              func_0x006740e8();
              goto LAB_0065ec1c;
            }
            iVar4 = *(int *)(param_3 + 0x15);
            uVar1 = iVar4 + iVar15 * 0x50;
            uVar16 = (ulong)uVar1;
            *(uint *)(param_3 + 0x15) = uVar1;
            func_0x00674520(uVar16,*(undefined4 *)(param_3 + 0xe));
            if (uVar16 != 0) {
              func_0x00674310();
              goto LAB_0065ec1c;
            }
            lVar36 = 0;
            *(undefined **)(puVar3 + 0x30) = puVar31 + iVar4;
            pqVar39 = (qword *)0x0;
            while( true ) {
              lVar33 = (long)*(int *)(lVar22 + 0x20);
              cVar11 = SBORROW8(lVar36,lVar33);
              cVar12 = lVar36 - lVar33 < 0;
              if (lVar33 <= lVar36) break;
              func_0x00674de8(*(undefined8 *)(lVar22 + 0x18));
              pqVar25 = (qword *)*extraout_x8_08;
              puVar45 = (undefined1 *)(*(long *)(puVar3 + 0x30) + lVar36 * 0x50);
              *(undefined1 **)(puVar45 + 0x10) = puVar3;
              func_0x00675fa8(*(undefined8 *)(puVar3 + 8));
              *(qword **)(puVar45 + 8) = pqVar39;
              func_0x00675e80((undefined *)pqVar25[3]);
              FUN_0065c320(param_1);
              in_b0 = 0;
              in_register_00005001 = 0;
              in_register_00005002 = 0;
              in_register_00005003 = 0;
              in_register_00005004 = 0;
              in_register_00005005 = 0;
              in_register_00005006 = 0;
              in_register_00005007 = 0;
              *(undefined8 *)(puVar45 + 0x30) = 0;
              *(undefined8 *)(puVar45 + 0x28) = 0;
              *(undefined8 *)(puVar45 + 0x20) = 0;
              *(undefined8 *)(puVar45 + 0x18) = 0;
              func_0x00676b94(4);
              func_0x00659b64(*(undefined8 *)(puVar45 + 0x10),&ppqStack_108);
              pqStack_1e8._0_4_ = 2;
              func_0x006766a0();
              pqStack_1e8 = (qword *)CONCAT44(pqStack_1e8._4_4_,
                                              (int)(((long)puVar45 -
                                                    *(long *)(*(long *)(puVar45 + 0x10) + 0x30)) /
                                                   0x50));
              func_0x006766a0();
              func_0x00676694();
              ppqVar19 = ppqStack_100;
              ppqVar24 = ppqStack_108;
              lVar33 = *(long *)(puVar45 + 8);
              pqVar39 = (qword *)(long)*(char *)(lVar33 + 0x2f);
              if ((long)pqVar39 < 0) {
                pqVar48 = *(qword **)(lVar33 + 0x18);
                pqVar39 = *(qword **)(lVar33 + 0x20);
              }
              else {
                pqVar48 = (qword *)(lVar33 + 0x18);
              }
              ppuVar28 = &PTR_PTR_00b25c68;
              if (((byte)*(code *)(pqVar25 + 2) >> 3 & 1) != 0) {
                if ((undefined *)*param_3 == (undefined *)0x0) {
                  func_0x006740e8();
                  goto LAB_0065ec1c;
                }
                pqVar38 = (qword *)pqVar25[6];
                puVar31 = (undefined *)param_3[0xc];
                iVar15 = *(int *)(param_3 + 0x1b);
                uVar1 = iVar15 + 1;
                uVar16 = (ulong)uVar1;
                *(uint *)(param_3 + 0x1b) = uVar1;
                pqVar46 = (qword *)(ulong)*(uint *)(param_3 + 0x14);
                func_0x00674520();
                if (uVar16 != 0) {
                  func_0x00674310();
                  goto LAB_0065ec1c;
                }
                pqVar20 = pqVar38;
                FUN_0067cc0c();
                if (((ulong)pqVar20 & 1) == 0) {
                  pqStack_1e8 = pqVar48;
                  pqStack_1e0 = pqVar39;
                  func_0x00674500();
                  pqStack_a8 = pqVar20;
                  pqStack_a0 = pqVar46;
                  pqStack_58 = pqVar48;
                  pqStack_50 = pqVar39;
                  func_0x00675080(&pqStack_d8);
                  func_0x00674814(param_1,&pqStack_d8,pqVar38);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pqStack_d8);
                  ppuVar28 = &PTR_PTR_00b25c68;
                }
                else {
                  FUN_0054a274(&pqStack_1e8,pqVar38);
                  ppuVar28 = (undefined **)(puVar31 + (long)iVar15 * 0x58);
                  func_0x00674424();
                  uVar57 = extraout_x11_00;
                  ppqVar8 = extraout_x10_01;
                  if (cVar12 == cVar11) {
                    uVar57 = extraout_x8_09;
                    ppqVar8 = &pqStack_1e8;
                  }
                  func_0x006656a4(ppqVar8,uVar57,ppuVar28);
                  func_0x00675540();
                  uVar14 = *(int *)(ppuVar28 + 7) == 1;
                  if (0 < *(int *)(ppuVar28 + 7)) {
                    FUN_0066f1a4(&pqStack_1e8,pqVar48,pqVar39,pqVar48,pqVar39,ppqVar24,
                                 (long)ppqVar19 - (long)ppqVar24 >> 2,pqVar38);
                    func_0x00675098();
                    func_0x00675b1c();
                  }
                  if (((ulong)pqVar38[1] & 1) == 0) {
                    FUN_006a480c();
                  }
                  func_0x00676b4c();
                  if (!(bool)uVar14) {
                    FUN_00654614((undefined *)param_1[1],"google.protobuf.MethodOptions",0x1d);
                    func_0x00675120();
                    if ((bool)uVar14) {
                      for (lVar33 = 0; func_0x00676138(), lVar33 < extraout_w8; lVar33 = lVar33 + 1)
                      {
                        func_0x00675970();
                        FUN_0066bfcc();
                        puVar31 = (undefined *)*param_1;
                        func_0x006756d4();
                        FUN_00655ef4();
                        if (puVar31 != (undefined *)0x0) {
                          pqStack_1e8 = *(qword **)(puVar31 + 0x10);
                          func_0x00675f64(param_1 + 0x1f);
                        }
                      }
                    }
                  }
                }
              }
              *(undefined ***)(puVar45 + 0x38) = ppuVar28;
              func_0x00674eec();
              *(undefined8 *)(puVar45 + 0x40) = extraout_x8_10;
              *(undefined8 *)(puVar45 + 0x48) = extraout_x8_10;
              func_0x0053b048(&ppqStack_108);
              puVar45[1] = *(code *)(pqVar25 + 7);
              puVar45[2] = *(code *)((long)pqVar25 + 0x39);
              *puVar45 = 8;
              pqVar39 = param_1;
              FUN_0065c040(param_1,*(long *)(puVar45 + 8) + 0x18,pqVar25,puVar45);
              lVar36 = lVar36 + 1;
            }
            func_0x00676b94(3);
            func_0x00659b64(puVar3,&ppqStack_108);
            func_0x00676694();
            ppqVar19 = ppqStack_100;
            ppqVar24 = ppqStack_108;
            lVar36 = *(long *)(puVar3 + 8);
            pqVar39 = (qword *)(long)*(char *)(lVar36 + 0x2f);
            if ((long)pqVar39 < 0) {
              pqVar48 = *(qword **)(lVar36 + 0x18);
              pqVar39 = *(qword **)(lVar36 + 0x20);
            }
            else {
              pqVar48 = (qword *)(lVar36 + 0x18);
            }
            ppuVar28 = &PTR_PTR_00b25bc0;
            if ((*(byte *)(lVar22 + 0x10) >> 1 & 1) != 0) {
              if ((undefined *)*param_3 == (undefined *)0x0) {
                func_0x006740e8();
                goto LAB_0065ec1c;
              }
              pqVar46 = *(qword **)(lVar22 + 0x38);
              puVar31 = (undefined *)param_3[0xb];
              iVar15 = *(int *)((long)param_3 + 0xd4);
              uVar1 = iVar15 + 1;
              uVar16 = (ulong)uVar1;
              *(uint *)((long)param_3 + 0xd4) = uVar1;
              pqVar25 = (qword *)(ulong)*(uint *)((long)param_3 + 0x9c);
              func_0x00674520();
              if (uVar16 != 0) {
                func_0x00674310();
                goto LAB_0065ec1c;
              }
              pqVar38 = pqVar46;
              FUN_0067c958();
              if (((ulong)pqVar38 & 1) == 0) {
                pqStack_1e8 = pqVar48;
                pqStack_1e0 = pqVar39;
                func_0x00674500();
                pqStack_a8 = pqVar38;
                pqStack_a0 = pqVar25;
                pqStack_58 = pqVar48;
                pqStack_50 = pqVar39;
                func_0x00675080(&pqStack_d8);
                func_0x00674814(param_1,&pqStack_d8);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pqStack_d8);
                ppuVar28 = &PTR_PTR_00b25bc0;
                pqVar25 = pqVar46;
              }
              else {
                FUN_0054a274(&pqStack_1e8,pqVar46);
                ppuVar28 = (undefined **)(puVar31 + (long)iVar15 * 0x58);
                func_0x00674424();
                uVar57 = extraout_x11_01;
                ppqVar8 = extraout_x10_02;
                if (cVar12 == cVar11) {
                  uVar57 = extraout_x8_11;
                  ppqVar8 = &pqStack_1e8;
                }
                pqVar25 = (qword *)ppuVar28;
                func_0x006656a4(ppqVar8,uVar57);
                func_0x00675540();
                uVar14 = *(int *)(ppuVar28 + 7) == 1;
                if (0 < *(int *)(ppuVar28 + 7)) {
                  FUN_0066f1a4(&pqStack_1e8,pqVar48,pqVar39,pqVar48,pqVar39,ppqVar24,
                               (long)ppqVar19 - (long)ppqVar24 >> 2,pqVar46);
                  func_0x00675098();
                  func_0x00675b1c();
                  pqVar25 = pqVar39;
                }
                if (((ulong)pqVar46[1] & 1) == 0) {
                  FUN_006a480c();
                }
                func_0x00676b4c();
                if (!(bool)uVar14) {
                  pqVar25 = (qword *)((long)&MACH_HEADER.reserved + 2);
                  FUN_00654614((undefined *)param_1[1],"google.protobuf.ServiceOptions");
                  func_0x00675120();
                  if ((bool)uVar14) {
                    lVar33 = 0;
                    for (lVar36 = 0; func_0x00676138(), lVar36 < extraout_w8_00; lVar36 = lVar36 + 1
                        ) {
                      FUN_0066bfcc(*(undefined8 *)*param_1);
                      puVar31 = (undefined *)*param_1;
                      func_0x006756d4();
                      pqVar25 = (qword *)(ulong)*(uint *)(extraout_x8_12 + lVar33);
                      FUN_00655ef4();
                      if (puVar31 != (undefined *)0x0) {
                        pqStack_1e8 = *(qword **)(puVar31 + 0x10);
                        func_0x00675f64(param_1 + 0x1f);
                      }
                      lVar33 = lVar33 + 0x10;
                    }
                  }
                }
              }
            }
            *(undefined ***)(puVar3 + 0x18) = ppuVar28;
            func_0x00674eec();
            *(undefined8 *)(puVar3 + 0x20) = extraout_x8_13;
            *(undefined8 *)(puVar3 + 0x28) = extraout_x8_13;
            func_0x0053b048(&ppqStack_108);
            *puVar3 = 7;
            func_0x00676338(param_1,*(long *)(puVar3 + 8) + 0x18);
            FUN_0065c040();
            lVar36 = extraout_x9_05 + 1;
          }
          *(dword *)((long)pqVar21 + 4) = *(dword *)(param_2 + 0x10);
          pqVar39 = param_3;
          FUN_00660fdc();
          func_0x00674f58();
          pqVar21[0xf] = (qword)pqVar39;
          pqStack_2f8 = param_2 + 0xf;
          while( true ) {
            lVar36 = (long)*(int *)(param_2 + 0x10);
            cVar11 = SBORROW8(lVar22,lVar36);
            cVar12 = lVar22 - lVar36 < 0;
            if (lVar36 <= lVar22) break;
            func_0x00675108((undefined *)*pqStack_2f8);
            func_0x006757c0((undefined *)pqVar21[0xf]);
            FUN_00661034();
            func_0x006760ac();
          }
          uStack_218 = 0;
          lStack_210 = 0;
          uStack_208 = 0;
          pqStack_1e8 = (qword *)CONCAT44(pqStack_1e8._4_4_,8);
          ppqVar24 = &pqStack_1e8;
          func_0x0063cd38(&uStack_218);
          func_0x00673fe0((undefined *)pqVar21[2]);
          pqStack_d0 = extraout_x12_00;
          if (cVar12 == cVar11) {
            pqStack_d0 = extraout_x9_06;
          }
          ppqVar19 = (qword **)&UNK_00910693;
          pqStack_d8 = extraout_x8_14;
          FUN_00532c74();
          pcVar23 = (char *)&ppqStack_108;
          ppqStack_108 = ppqVar19;
          ppqStack_100 = ppqVar24;
          FUN_00575d30(&pqStack_230,&pqStack_d8);
          lVar22 = lStack_210;
          uVar16 = uStack_218;
          in_NG = (char)bStack_219 < '\0';
          in_OV = '\0';
          pqVar39 = pqStack_228;
          pqVar48 = pqStack_230;
          if (!(bool)in_NG) {
            pqVar39 = (qword *)(ulong)bStack_219;
            pqVar48 = (qword *)&pqStack_230;
          }
          pqVar38 = (qword *)pqVar21[1];
          pqVar21 = (qword *)(long)(char)*(code *)((long)pqVar38 + 0x17);
          pqVar46 = pqVar38;
          if ((long)pqVar21 < 0) {
            pqVar46 = (qword *)*pqVar38;
            pqVar21 = (qword *)pqVar38[1];
          }
          ppuVar28 = &PTR_PTR_00b25d18;
          if (((byte)*(code *)(param_2 + 2) >> 3 & 1) == 0) goto LAB_0065d9ac;
          if ((undefined *)*param_3 == (undefined *)0x0) {
            func_0x006740e8();
            goto LAB_0065ec1c;
          }
          pqVar38 = (qword *)param_2[0x19];
          puVar31 = (undefined *)param_3[0xd];
          iVar15 = *(int *)((long)param_3 + 0xdc);
          uVar1 = iVar15 + 1;
          uVar44 = (ulong)uVar1;
          *(uint *)((long)param_3 + 0xdc) = uVar1;
          pqVar25 = (qword *)(ulong)*(uint *)((long)param_3 + 0xa4);
          func_0x00674520();
          if (uVar44 != 0) {
            func_0x00674310();
            goto LAB_0065ec1c;
          }
          pqVar20 = pqVar38;
          FUN_0067a758();
          if (((ulong)pqVar20 & 1) != 0) {
            FUN_0054a274(&pqStack_1e8,pqVar38);
            ppuVar28 = (undefined **)(puVar31 + (long)iVar15 * 0xb0);
            func_0x00674424();
            pcVar23 = (char *)extraout_x11_02;
            ppqVar24 = extraout_x10_03;
            if (in_NG == in_OV) {
              pcVar23 = (char *)extraout_x8_15;
              ppqVar24 = &pqStack_1e8;
            }
            pqVar25 = (qword *)ppuVar28;
            func_0x006656a4(ppqVar24);
            func_0x00675540();
            iVar15 = *(int *)(ppuVar28 + 7);
            in_OV = SBORROW4(iVar15,1);
            in_NG = iVar15 + -1 < 0;
            in_ZR = iVar15 == 1;
            if (0 < iVar15) {
              FUN_0066f1a4(&pqStack_1e8,pqVar48,pqVar39,pqVar46,pqVar21,uVar16,
                           (long)(lVar22 - uVar16) >> 2,pqVar38);
              func_0x00675098();
              func_0x00675b1c();
              pcVar23 = (char *)pqVar48;
              pqVar25 = pqVar39;
            }
            if (((ulong)pqVar38[1] & 1) != 0) goto LAB_0065d8a0;
            FUN_006a480c();
            goto LAB_0065d8a0;
          }
          pqStack_1e8 = pqVar48;
          pqStack_1e0 = pqVar39;
          func_0x00674500();
          pqStack_a8 = pqVar20;
          pqStack_a0 = pqVar25;
          pqStack_58 = pqVar46;
          pqStack_50 = pqVar21;
          func_0x00675080(auStack_200);
          func_0x0067573c();
          pcVar23 = (char *)auStack_200;
          func_0x00675748(param_1);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
          ppuVar28 = &PTR_PTR_00b25d18;
          pqVar25 = pqVar38;
          goto LAB_0065d9ac;
        }
        func_0x00674f70((undefined *)*pqVar39);
        pqVar25 = pqVar39;
        if (!(bool)in_ZR) {
          pqVar25 = extraout_x9_01;
        }
        pqVar48 = (qword *)&puStack_2a8;
        FUN_0066f694(&pqStack_1e8,pqVar48,(undefined *)*pqVar25);
        if (((ulong)pqStack_1d8 & 1) == 0) {
          pqStack_a8 = (qword *)CONCAT44(pqStack_a8._4_4_,(int)uVar16);
          pqVar25 = param_2;
          func_0x006747b4((undefined *)param_2[3]);
          pqStack_1e8 = pqVar25;
          pqStack_1e0 = (qword *)&pqStack_a8;
          FUN_0065ad28(param_1);
        }
        func_0x006747b4((undefined *)*pqVar39);
        pqVar25 = (qword *)(long)(char)*(code *)((long)pqVar48 + 0x17);
        pcVar23 = (char *)pqVar48;
        if ((long)pqVar25 < 0) {
          pcVar23 = (char *)*pqVar48;
          pqVar25 = (qword *)pqVar48[1];
        }
        pqVar48 = (qword *)param_1[1];
        FUN_006557c4();
        if (pqVar48 == (qword *)0x0) {
          puVar31 = (undefined *)*param_1;
          pqVar48 = *(qword **)(puVar31 + 0x18);
          if (pqVar48 != (qword *)0x0) {
            func_0x006747b4((undefined *)*pqVar39);
            pqVar25 = (qword *)(long)(char)*(code *)((long)pcVar23 + 0x17);
            if ((long)pqVar25 < 0) {
              pqVar25 = *(qword **)((long)pcVar23 + 8);
              pcVar23 = (char *)*(qword **)pcVar23;
            }
            FUN_00655a68();
            goto LAB_0065cc74;
          }
          if (pqVar21 == (qword *)0x0) goto LAB_0065e69c;
LAB_0065ccc8:
          if ((puVar31[0x31] & 1) == 0) {
            if ((puVar31[0x32] & 1) != 0) {
LAB_0065cd54:
              func_0x00675de8(&pqStack_1e8);
              FUN_0065bbd0(&pqStack_1e8);
              func_0x0065bbfc(&pqStack_1e8,1);
              puVar31 = (undefined *)param_1[1];
              FUN_0065c5b4(&pqStack_1e8);
              func_0x006747b4((undefined *)*pqVar39);
              pqVar25 = (qword *)(long)(char)puVar31[0x17];
              if ((long)pqVar25 < 0) {
                pqVar25 = *(qword **)(puVar31 + 8);
              }
              pqVar48 = (qword *)*param_1;
              FUN_0065bd0c();
              goto LAB_0065cdd8;
            }
            if ((puVar31[0x33] & 1) == 0) {
              Hint_Prefetch(puStack_2c8,0,2,0);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (long)&PTR_LOOP_00a01490 + uVar16;
              uVar29 = SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^
                       ((long)&PTR_LOOP_00a01490 + uVar16) * -0x622015f714c7d297;
              uVar44 = (ulong)puStack_2c8 >> 0xc ^ uVar29 >> 7;
              in_b0 = (byte)uVar29 & 0x7f;
              puVar31 = puStack_2c8;
              uVar29 = uStack_2b8;
              in_register_00005001 = in_b0;
              in_register_00005002 = in_b0;
              in_register_00005003 = in_b0;
              in_register_00005004 = in_b0;
              in_register_00005005 = in_b0;
              in_register_00005006 = in_b0;
              in_register_00005007 = in_b0;
              while( true ) {
                func_0x00676178(CONCAT17(bVar55,CONCAT16(bVar54,CONCAT15(bVar53,CONCAT14(bVar52,
                                                  CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,
                                                  bVar56))))))),
                                *(undefined8 *)(puVar31 + (uVar44 & uVar29)));
                bVar55 = in_register_00005007;
                bVar54 = in_register_00005006;
                bVar53 = in_register_00005005;
                bVar52 = in_register_00005004;
                bVar51 = in_register_00005003;
                bVar50 = in_register_00005002;
                bVar49 = in_register_00005001;
                bVar56 = in_b0;
                in_b0 = bVar56;
                in_register_00005001 = bVar49;
                in_register_00005002 = bVar50;
                in_register_00005003 = bVar51;
                in_register_00005004 = bVar52;
                in_register_00005005 = bVar53;
                in_register_00005006 = bVar54;
                in_register_00005007 = bVar55;
                lVar22 = extraout_x13;
                while (lVar22 != 0) {
                  func_0x00676784();
                  if (uVar16 == *(uint *)(extraout_x11 + (extraout_x14 & extraout_x10) * 4)) {
                    if (extraout_x8_05 != 0) goto LAB_0065cd54;
                    goto LAB_0065cdac;
                  }
                  func_0x0067692c();
                  lVar22 = extraout_x13_00;
                }
                func_0x00676168();
                if ((extraout_x13_01 & 1) != 0) break;
                uVar44 = extraout_x9_02 + 8 + extraout_x12;
                puVar31 = extraout_x8_06;
                uVar29 = extraout_x10_00;
              }
            }
LAB_0065cdac:
            pqStack_a8 = (qword *)CONCAT44(pqStack_a8._4_4_,(int)uVar16);
            pqVar25 = param_2;
            pqStack_1e8 = param_1;
            pqStack_1e0 = param_2;
            pqStack_1d8 = (qword *)&pqStack_a8;
            func_0x006747b4((undefined *)param_2[3]);
            func_0x00676764();
          }
          pqVar48 = (qword *)0x0;
        }
        else {
LAB_0065cc74:
          in_OV = SBORROW8((long)pqVar48,(long)pqVar21);
          in_NG = (long)pqVar48 - (long)pqVar21 < 0;
          in_ZR = 1;
          if (pqVar48 == pqVar21) goto LAB_0065e69c;
          puVar31 = (undefined *)*param_1;
          if (pqVar48 == (qword *)0x0) goto LAB_0065ccc8;
          if (((puVar31[0x30] == '\x01') &&
              (pqVar46 = pqVar48, func_0x006766d0(), pqVar46 != (qword *)0x0)) &&
             (*(int *)((long)pqVar48 + 0x34) == 0)) {
            pqVar25 = pqVar48;
            FUN_0066ead0(&pqStack_1e8,param_1 + 0x1f);
          }
        }
LAB_0065cdd8:
        *(qword **)((undefined *)pqVar21[9] + uVar16 * 8) = pqVar48;
        bVar34 = pqVar48 == (qword *)0x0 & ((undefined *)*param_1)[0x31] | bVar34;
        uVar16 = uVar16 + 1;
      } while( true );
    }
LAB_0065c974:
    func_0x0067556c();
    FUN_0065ae94();
  }
  else {
    pcVar23 = (char *)pqVar21[1];
    pqStack_1e8 = (qword *)&pqStack_238;
    func_0x00675178();
    FUN_0065ad28();
  }
  pqVar39 = (qword *)0x0;
  ppuVar28 = (undefined **)param_2;
  do {
    func_0x006697ac(&uStack_288);
    func_0x00674120(uStack_10);
    if ((bool)in_ZR) {
      return pqVar39;
    }
    ___stack_chk_fail();
LAB_0065d8a0:
    func_0x00676b4c();
    if (!(bool)in_ZR) {
      pqVar21 = (qword *)param_1[1];
      pcVar23 = "google.protobuf.FileOptions";
      pqVar25 = (qword *)((long)&MACH_HEADER.flags + 3);
      FUN_00654614();
      func_0x00675120();
      if ((bool)in_ZR) {
        lVar36 = 0;
        lVar22 = 0;
        while( true ) {
          func_0x00676138();
          lVar33 = (long)extraout_w8_01;
          in_OV = SBORROW8(lVar22,lVar33);
          in_NG = lVar22 - lVar33 < 0;
          if (lVar33 <= lVar22) break;
          FUN_0066bfcc(*(undefined8 *)*param_1);
          puVar31 = (undefined *)*param_1;
          func_0x006756d4();
          pqVar25 = (qword *)(ulong)*(uint *)(extraout_x8_16 + lVar36);
          FUN_00655ef4();
          if (puVar31 != (undefined *)0x0) {
            pqStack_1e8 = *(qword **)(puVar31 + 0x10);
            func_0x00675f64(param_1 + 0x1f);
          }
          lVar22 = lVar22 + 1;
          lVar36 = lVar36 + 0x10;
        }
      }
    }
LAB_0065d9ac:
    func_0x00675df0();
    pqStack_300[0x10] = (qword)ppuVar28;
    func_0x00674eec();
    pqStack_300[0x11] = (qword)extraout_x8_17;
    pqStack_300[0x12] = (qword)extraout_x8_17;
    pqVar39 = &uStack_218;
    func_0x0053b048();
    func_0x00674764();
    while (func_0x00676284(), in_NG != in_OV) {
      func_0x00674260((undefined *)pqStack_300[0xc]);
      func_0x00675bac();
      FUN_00662708();
      func_0x006760ac();
    }
    func_0x00674764();
    while (func_0x00676278(), in_NG != in_OV) {
      func_0x0067448c();
      func_0x00675bac();
      FUN_00662b70();
      func_0x006760ac();
    }
    pdVar37 = (dword *)((long)&MACH_HEADER.magic + 1);
    lVar22 = 0;
    while (lVar22 < *(int *)((long)pqStack_300 + 0x44)) {
      func_0x00675480();
      lVar22 = *(long *)(extraout_x9_07 + 0x70) + extraout_x11_03 * 0x40;
      func_0x00676bb4();
      func_0x00674de8();
      lVar36 = *extraout_x8_18;
      for (pqVar48 = pqStack_300; ppuVar28 = (undefined **)(long)*(int *)(lVar22 + 0x38),
          bVar13 = (undefined **)pqVar48 == ppuVar28, (long)pqVar48 < (long)ppuVar28;
          pqVar48 = (qword *)((long)pqVar48 + 1)) {
        lVar33 = *(long *)(lVar22 + 0x30);
        func_0x00675108(*(undefined8 *)(lVar36 + 0x18));
        puVar32 = (undefined8 *)(lVar36 + 0x18);
        if (!bVar13) {
          puVar32 = extraout_x9_08;
        }
        pqVar46 = (qword *)*puVar32;
        func_0x00676a98((undefined *)pqVar46[4]);
        func_0x00675760();
        if (*(code *)pqVar39 == (code)0x1) {
          pqVar39 = (qword *)((long)pqVar21 + lVar33 + 0x18);
          FUN_00663450();
        }
        else if (*(code *)pqVar39 == (code)0x0) {
          if ((((undefined *)*param_1)[0x31] & 1) == 0) {
            pqVar39 = param_1;
            func_0x00676bfc(*(undefined8 *)((long)pqVar21 + lVar33 + 8));
            pqVar25 = pqVar46;
            FUN_0065aebc();
          }
          else {
            func_0x00675bf8((undefined *)pqVar46[4]);
            if ((long)pqVar25 < 0) {
              pqVar25 = (qword *)pqVar39[1];
            }
            pqVar39 = (qword *)((long)pqVar21 + lVar33 + 0x18);
            FUN_00663358();
          }
        }
        else {
          pqStack_1e8 = pqVar46;
          func_0x00676c08(*(undefined8 *)((long)pqVar21 + lVar33 + 8));
          FUN_0065ad28();
        }
        func_0x00676a98((undefined *)pqVar46[5]);
        func_0x00675760();
        if (*(code *)pqVar39 == (code)0x1) {
          pqVar38 = (qword *)((long)pqVar21 + lVar33 + 0x28);
          FUN_00663450();
          pcVar23 = (char *)pqVar39;
        }
        else if (*(code *)pqVar39 == (code)0x0) {
          if ((((undefined *)*param_1)[0x31] & 1) == 0) {
            pqVar38 = param_1;
            func_0x00676bfc(*(undefined8 *)((long)pqVar21 + lVar33 + 8));
            FUN_0065aebc();
            pcVar23 = (char *)pqVar39;
            pqVar25 = pqVar46;
          }
          else {
            func_0x00675bf8((undefined *)pqVar46[5]);
            pcVar23 = (char *)pqVar39;
            if ((long)pqVar25 < 0) {
              pcVar23 = (char *)*pqVar39;
              pqVar25 = (qword *)pqVar39[1];
            }
            pqVar38 = (qword *)((long)pqVar21 + lVar33 + 0x28);
            FUN_00663358();
          }
        }
        else {
          pcVar23 = (char *)pqVar39;
          pqStack_1e8 = pqVar46;
          func_0x00676c08(*(undefined8 *)((long)pqVar21 + lVar33 + 8));
          func_0x00676764();
          pqVar38 = pqVar39;
        }
        pqVar21 = pqVar21 + 10;
        pqVar39 = pqVar38;
      }
      lVar22 = extraout_x11_04 + 1;
    }
    if ((undefined *)param_1[0x1e] != (undefined *)0x0) {
      pdVar37 = &section_00000068.offset;
      for (lVar22 = 0; lVar22 < *(int *)((long)pqStack_300 + 0x3c); lVar22 = lVar22 + 1) {
        pqStack_58 = (qword *)((undefined *)pqStack_300[0xc] + lVar22 * 0x98);
        Hint_Prefetch((undefined *)param_1[0x1b],0,2,0);
        pqVar39 = param_1 + 0x1b;
        pcVar23 = (char *)&pqStack_58;
        FUN_0066e1a4((undefined *)param_1[0x1b]);
        func_0x00676a38(pqStack_58);
        lVar36 = extraout_x9_09;
        lVar33 = extraout_x10_04;
        uVar44 = extraout_x11_05;
        uVar16 = extraout_x13_02;
        while( true ) {
          uVar16 = uVar16 & uVar44;
          uVar57 = *(undefined8 *)(lVar33 + uVar16);
          uVar29 = CONCAT17(-((byte)((ulong)uVar57 >> 0x38) == in_register_00005007),
                            CONCAT16(-((byte)((ulong)uVar57 >> 0x30) == in_register_00005006),
                                     CONCAT15(-((byte)((ulong)uVar57 >> 0x28) ==
                                               in_register_00005005),
                                              CONCAT14(-((byte)((ulong)uVar57 >> 0x20) ==
                                                        in_register_00005004),
                                                       CONCAT13(-((byte)((ulong)uVar57 >> 0x18) ==
                                                                 in_register_00005003),
                                                                CONCAT12(-((byte)((ulong)uVar57 >>
                                                                                 0x10) ==
                                                                          in_register_00005002),
                                                                         CONCAT11(-((byte)((ulong)
                                                  uVar57 >> 8) == in_register_00005001),
                                                  -((byte)uVar57 == in_b0)))))))) &
                   0x8080808080808080;
          while (uVar29 != 0) {
            func_0x00676128();
            if (*(undefined ***)(extraout_x12_01 + (extraout_x15 & extraout_x11_06) * 0x20) ==
                (undefined **)extraout_x8_19) {
              if (extraout_x10_05 != 0) {
                lVar36 = extraout_x12_01 + (extraout_x15 & extraout_x11_06) * 0x20;
                iVar4 = *(int *)(lVar36 + 8);
                iVar15 = iVar4;
                if (2 < iVar4) {
                  iVar15 = 3;
                }
                pqStack_d8 = (qword *)CONCAT44(pqStack_d8._4_4_,iVar15);
                if (0 < iVar4) {
                  pqStack_a0 = (qword *)0x0;
                  pqStack_a8 = (qword *)0x0;
                  lVar43 = 4;
                  puStack_98 = (undefined *)0x0;
                  pqVar25 = extraout_x8_19;
                  for (lVar33 = 0; lVar33 < (int)*(dword *)((long)pqVar25 + 4); lVar33 = lVar33 + 1)
                  {
                    FUN_00663488(&pqStack_a8,*(undefined4 *)((undefined *)pqVar25[7] + lVar43));
                    lVar43 = lVar43 + 0x58;
                    pqVar25 = pqStack_58;
                  }
                  lVar43 = 4;
                  for (lVar33 = 0; lVar33 < *(int *)((long)pqVar25 + 0x8c); lVar33 = lVar33 + 1) {
                    FUN_00663488(&pqStack_a8,*(undefined4 *)((undefined *)pqVar25[0xc] + lVar43));
                    lVar43 = lVar43 + 0x58;
                    pqVar25 = pqStack_58;
                  }
                  lVar43 = 0;
                  for (lVar33 = 0; lVar33 < *(int *)(pqVar25 + 0x12); lVar33 = lVar33 + 1) {
                    func_0x006634d0(&pqStack_a8,*(undefined4 *)((undefined *)pqVar25[0xd] + lVar43),
                                    *(undefined4 *)((long)((undefined *)pqVar25[0xd] + lVar43) + 4))
                    ;
                    lVar43 = lVar43 + 8;
                    pqVar25 = pqStack_58;
                  }
                  pqVar21 = (qword *)0x0;
                  for (lVar33 = 0; lVar33 < *(int *)(pqVar25 + 0x11); lVar33 = lVar33 + 1) {
                    func_0x006634d0(&pqStack_a8,
                                    *(undefined4 *)((undefined *)pqVar25[0xb] + (long)pqVar21),
                                    *(undefined4 *)
                                     ((long)((undefined *)pqVar25[0xb] + (long)pqVar21) + 4));
                    pqVar21 = pqVar21 + 5;
                    pqVar25 = pqStack_58;
                  }
                  FUN_006634f8(&pqStack_a8,0x200000001fffffff);
                  FUN_006634f8(&pqStack_a8,0x4e1f00004a38);
                  pcVar23 = (char *)pqStack_a0;
                  if (pqStack_a8 != pqStack_a0) {
                    FUN_006699bc(pqStack_a8,pqStack_a0,
                                 LZCOUNT((long)pqStack_a0 - (long)pqStack_a8 >> 3) << 1 ^ 0x7e,1);
                  }
                  ppqStack_108 = (qword **)CONCAT44(ppqStack_108._4_4_,1);
                  pqVar25 = *(qword **)(lVar36 + 0x10);
                  if (pqVar25 != (qword *)0x0) {
                    pqStack_1e8 = (qword *)&pqStack_58;
                    pqStack_1e0 = (qword *)&pqStack_a8;
                    pcVar23 = (undefined *)pqStack_58[1] + 0x18;
                    pqStack_1d8 = (qword *)&ppqStack_108;
                    ppqStack_1d0 = &pqStack_d8;
                    FUN_0065ad28(param_1,pcVar23,pqVar25,*(undefined4 *)(lVar36 + 0x18),&pqStack_1e8
                                 ,FUN_006722c4);
                  }
                  pqVar39 = (qword *)&pqStack_a8;
                  FUN_006635b0();
                }
              }
              goto LAB_0065de48;
            }
            uVar16 = extraout_x13_03;
            lVar36 = extraout_x9_10;
            lVar33 = extraout_x10_05;
            uVar44 = extraout_x11_06;
            uVar29 = extraout_x14_00 - 1 & extraout_x14_00;
          }
          bVar56 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar57 >> 0x38) == -0x80),
                                       CONCAT16(-((char)((ulong)uVar57 >> 0x30) == -0x80),
                                                CONCAT15(-((char)((ulong)uVar57 >> 0x28) == -0x80),
                                                         CONCAT14(-((char)((ulong)uVar57 >> 0x20) ==
                                                                   -0x80),CONCAT13(-((char)((ulong)
                                                  uVar57 >> 0x18) == -0x80),
                                                  CONCAT12(-((char)((ulong)uVar57 >> 0x10) == -0x80)
                                                           ,CONCAT11(-((char)((ulong)uVar57 >> 8) ==
                                                                      -0x80),-((char)uVar57 == -0x80
                                                                              )))))))),1);
          if ((bVar56 & 1) != 0) break;
          lVar36 = lVar36 + 8;
          uVar16 = lVar36 + uVar16;
        }
LAB_0065de48:
      }
    }
    pcVar42 = (code *)pqStack_2f8;
    if (((ulong)param_1[0x11] & 1) == 0) {
      func_0x00674868();
      plStack_1c8 = (long *)0x0;
      uStack_1c0 = 0;
      lStack_1b8 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      ppuStack_190 = &PTR_FUN_00a0ef08;
      uStack_188 = 0;
      uStack_180 = 0;
      in_b0 = 0;
      in_register_00005001 = 0;
      in_register_00005002 = 0;
      in_register_00005003 = 0;
      in_register_00005004 = 0;
      in_register_00005005 = 0;
      in_register_00005006 = 0;
      in_register_00005007 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      pqStack_1e8 = param_1;
      ppqStack_1d0 = extraout_x8_20;
      for (puVar31 = (undefined *)param_1[0xe]; puVar31 != (undefined *)param_1[0xf];
          puVar31 = puVar31 + 0x58) {
        FUN_0066a6ac(&pqStack_1e8,puVar31,1);
      }
      pqStack_d0 = pqStack_2d8;
      pqVar21 = (qword *)pqStack_300[0x10];
      uVar1 = *(uint *)(pqStack_300 + 4);
      pdVar37 = (dword *)(ulong)uVar1;
      pqStack_d8 = param_1;
      func_0x00674eec();
      pqStack_300[0x11] = (qword)extraout_x8_21;
      pqStack_300[0x12] = (qword)extraout_x8_21;
      if (((ulong)param_1[0xd] & 1) == 0) {
        func_0x006748dc();
LAB_0065e62c:
        do {
          FUN_005558a0(&pqStack_a8);
LAB_0065e634:
          func_0x006740e8();
LAB_0065ec1c:
          FUN_005558a0(&pqStack_1e8);
LAB_0065ec24:
          func_0x006748dc();
        } while( true );
      }
      if (((byte)*(code *)((long)pqVar21 + 0x29) >> 2 & 1) != 0) {
        puVar31 = (undefined *)param_1[1];
        pqVar25 = pqVar21;
        FUN_0066e554(pqVar21,&PTR_PTR_00b25a18);
        FUN_00655344(puVar31,pqVar25);
        pqStack_300[0x11] = (qword)puVar31;
        if ((undefined *)pqVar21[0x13] != (undefined *)0x0) {
          FUN_00678b18();
        }
        *(uint *)(pqVar21 + 5) = *(uint *)(pqVar21 + 5) & 0xfffffbff;
      }
      func_0x006764c8();
      cVar11 = SBORROW4(uVar1,999);
      cVar12 = (int)(uVar1 - 999) < 0;
      if ((int)uVar1 < 1000) {
        ppuVar28 = (undefined **)pqStack_300[0x11];
        cVar11 = SBORROW8((long)ppuVar28,0xb25a18);
        cVar12 = (long)(ppuVar28 + -0x164b43) < 0;
        if (ppuVar28 != &PTR_PTR_00b25a18) {
          func_0x00675658();
          func_0x00674f94();
        }
      }
      func_0x006764d0();
      func_0x006769c4();
      pqVar39 = param_1 + 4;
      pqVar25 = (qword *)&pqStack_58;
      FUN_00688c50(&pqStack_a8);
      if (pqStack_a8 == (qword *)0x0) {
        pqVar21 = (qword *)param_1[1];
        pdVar37 = (dword *)&pqStack_a8;
        func_0x00676558();
        pcVar23 = (char *)&pqStack_a0;
        pqVar39 = pqVar21;
        FUN_00655344();
        pqStack_300[0x12] = (qword)pqVar39;
      }
      else {
        pcVar23 = (char *)pqStack_300[1];
        ppqStack_108 = &pqStack_a8;
        func_0x006755fc();
        FUN_0065ad28();
      }
      func_0x00675d6c();
      func_0x00675d24();
      func_0x00674764();
      while (func_0x00676284(), cVar12 != cVar11) {
        func_0x00674260((undefined *)pqStack_300[0xc]);
        pqVar39 = (qword *)&pqStack_d8;
        pcVar23 = (char *)(extraout_x8_22 + (long)pqVar21);
        FUN_0066f7b0();
        func_0x006752f4();
      }
      func_0x00674764();
      while( true ) {
        lVar22 = (long)*(int *)(pqStack_300 + 8);
        cVar11 = SBORROW8((long)pdVar37,lVar22);
        cVar12 = (long)pdVar37 - lVar22 < 0;
        if (lVar22 <= (long)pdVar37) break;
        func_0x00674260((undefined *)pqStack_300[0xd]);
        pqVar39 = (qword *)&pqStack_d8;
        pcVar23 = (char *)(extraout_x8_23 + (long)pqVar21);
        FUN_0066fcd0();
        func_0x00674c40();
      }
      func_0x00674764();
      while (func_0x00676278(), cVar12 != cVar11) {
        func_0x0067448c();
        func_0x00675bac();
        FUN_0066ff9c();
        func_0x00674c40();
      }
      lVar22 = 0;
      while( true ) {
        lVar36 = (long)*(int *)((long)pqStack_300 + 0x44);
        cVar11 = SBORROW8(lVar22,lVar36);
        cVar12 = lVar22 - lVar36 < 0;
        if (lVar36 <= lVar22) break;
        puVar31 = (undefined *)pqStack_300[0xe];
        func_0x00676bb4();
        func_0x00674de8();
        pqVar48 = (qword *)*extraout_x8_24;
        pqVar21 = *(qword **)(puVar31 + lVar22 * 0x40 + 0x18);
        iVar15 = *(int *)(*(long *)(puVar31 + lVar22 * 0x40 + 0x10) + 0x20);
        uVar57 = *(undefined8 *)(*(long *)(puVar31 + lVar22 * 0x40 + 0x10) + 0x90);
        func_0x006769c4();
        *(char **)(puVar31 + lVar22 * 0x40 + 0x20) = pcVar23;
        *(char **)(puVar31 + lVar22 * 0x40 + 0x28) = pcVar23;
        if (((ulong)param_1[0xd] & 1) == 0) goto LAB_0065ec24;
        if ((*(dword *)(pqVar21 + 5) & 1) != 0) {
          pcVar23 = (char *)pqVar21;
          func_0x0066e688();
          func_0x00676090();
          *(char **)(puVar31 + lVar22 * 0x40 + 0x20) = pcVar23;
          pqVar39 = (qword *)pqVar21[9];
          if (pqVar39 != (qword *)0x0) {
            FUN_00678b18();
            pcVar23 = *(char **)(puVar31 + lVar22 * 0x40 + 0x20);
          }
          *(uint *)(pqVar21 + 5) = *(uint *)(pqVar21 + 5) & 0xfffffffe;
        }
        func_0x006764c8();
        bVar13 = iVar15 == 999;
        if ((iVar15 < 1000) &&
           (func_0x006751b4(*(undefined8 *)(puVar31 + lVar22 * 0x40 + 0x20)), !bVar13)) {
          pcVar23 = *(char **)(puVar31 + lVar22 * 0x40 + 8);
          pqVar39 = param_1;
          pqVar25 = pqVar48;
          func_0x00674858();
        }
        func_0x006764d0();
        if (pqVar39 == (qword *)0x0) {
          *(undefined8 *)(puVar31 + lVar22 * 0x40 + 0x28) = uVar57;
        }
        else {
          func_0x006759e0();
          if (pqStack_a8 == (qword *)0x0) {
            func_0x00676558();
            func_0x00675d4c();
            *(qword **)(puVar31 + lVar22 * 0x40 + 0x28) = pqVar39;
          }
          else {
            pcVar23 = *(char **)(puVar31 + lVar22 * 0x40 + 8);
            ppqStack_108 = &pqStack_a8;
            pqVar39 = param_1;
            pqVar25 = pqVar48;
            FUN_0065ad28();
          }
          func_0x00675d6c();
        }
        func_0x00675d24();
        pqStack_2d8 = (qword *)0x0;
        for (pdVar37 = (dword *)0x0;
            bVar13 = (undefined **)pdVar37 ==
                     (undefined **)(long)*(int *)(puVar31 + lVar22 * 0x40 + 0x38),
            (long)pdVar37 < (long)*(int *)(puVar31 + lVar22 * 0x40 + 0x38);
            pdVar37 = (dword *)((long)pdVar37 + 1)) {
          lVar36 = *(long *)(puVar31 + lVar22 * 0x40 + 0x30);
          func_0x00675108((undefined *)pqVar48[3]);
          puVar32 = extraout_x10_06;
          if (!bVar13) {
            puVar32 = extraout_x9_11;
          }
          pqVar21 = (qword *)*puVar32;
          pqVar46 = *(qword **)((long)pqStack_2d8 + lVar36 + 0x38);
          lVar33 = *(long *)((long)pqStack_2d8 + lVar36 + 0x10);
          iVar15 = *(int *)(*(long *)(lVar33 + 0x10) + 0x20);
          uVar57 = *(undefined8 *)(lVar33 + 0x28);
          func_0x006769c4();
          *(char **)((long)pqStack_2d8 + lVar36 + 0x40) = pcVar23;
          *(char **)((long)pqStack_2d8 + lVar36 + 0x48) = pcVar23;
          if ((*(byte *)(extraout_x10_07 + 0x68) & 1) == 0) {
            func_0x006748dc();
            goto LAB_0065e62c;
          }
          if ((*(dword *)(pqVar46 + 5) & 1) != 0) {
            pcVar23 = (char *)pqVar46;
            func_0x0066e6b8();
            func_0x00676090();
            *(char **)((long)pqStack_2d8 + lVar36 + 0x40) = pcVar23;
            pqVar39 = (qword *)pqVar46[9];
            if (pqVar39 != (qword *)0x0) {
              FUN_00678b18();
              pcVar23 = *(char **)((long)pqStack_2d8 + lVar36 + 0x40);
            }
            func_0x006760b8();
          }
          func_0x006764c8();
          bVar13 = iVar15 == 999;
          if ((iVar15 < 1000) &&
             (func_0x006751b4(*(undefined8 *)((long)pqStack_2d8 + lVar36 + 0x40)), !bVar13)) {
            pcVar23 = *(char **)((long)pqStack_2d8 + lVar36 + 8);
            pqVar39 = param_1;
            pqVar25 = pqVar21;
            func_0x00674858();
          }
          func_0x006764d0();
          if (pqVar39 == (qword *)0x0) {
            *(undefined8 *)((long)pqStack_2d8 + lVar36 + 0x48) = uVar57;
          }
          else {
            func_0x006759e0();
            if (pqStack_a8 == (qword *)0x0) {
              func_0x00676558();
              func_0x00675d4c();
              *(qword **)((long)pqStack_2d8 + lVar36 + 0x48) = pqVar39;
            }
            else {
              pcVar23 = *(char **)((long)pqStack_2d8 + lVar36 + 8);
              ppqStack_108 = &pqStack_a8;
              pqVar39 = param_1;
              FUN_0065ad28();
              pqVar25 = pqVar21;
            }
            func_0x00675d6c();
          }
          func_0x00675d24();
          pqStack_2d8 = pqStack_2d8 + 10;
        }
        lVar22 = lVar22 + 1;
      }
      func_0x00674f58();
      pqVar21 = (qword *)&MACH_HEADER.cpusubtype;
      pqStack_a8 = param_1;
      while (func_0x00676284(), cVar12 != cVar11) {
        func_0x00674260((undefined *)pqStack_300[0xc]);
        func_0x00676a0c();
        FUN_00670354();
        func_0x006752f4();
      }
      func_0x00674764();
      while (func_0x00676278(), cVar12 != cVar11) {
        func_0x0067448c();
        func_0x00675bac();
        FUN_0065c3c0();
        func_0x00674c40();
      }
      pqVar39 = (qword *)param_1[0xe];
      while( true ) {
        ppuVar28 = (undefined **)param_1[0xf];
        in_OV = SBORROW8((long)pqVar39,(long)ppuVar28);
        in_NG = (long)pqVar39 - (long)ppuVar28 < 0;
        in_ZR = (undefined **)pqVar39 == ppuVar28;
        if ((bool)in_ZR) break;
        pqVar25 = (qword *)0x0;
        pcVar23 = (char *)pqVar39;
        FUN_0066a6ac(&pqStack_1e8);
        pqVar39 = pqVar39 + 0xb;
      }
      FUN_00661040(param_1 + 0xe);
      if ((ppuStack_310 != (undefined **)0x0) && (lStack_1b8 != 0)) {
        pqVar21 = (qword *)0x0;
        pqStack_a0 = (qword *)0x0;
        pqStack_a8 = (qword *)0x0;
        puStack_98 = (undefined *)0x0;
        pqStack_50 = (qword *)0x0;
        uStack_48 = 0;
        pdVar47 = (dword *)(ppuStack_310 + 2);
        pqStack_58 = (qword *)0x0;
        func_0x00675578(0);
        pdVar37 = pdVar47;
        if (!(bool)in_ZR) {
          pdVar37 = extraout_x10_08;
        }
LAB_0065e3c0:
        func_0x00675578();
        pdVar41 = pdVar47;
        if (!(bool)in_ZR) {
          pdVar41 = extraout_x10_09;
        }
        if (pdVar37 != pdVar41 + (long)*(int *)(ppuStack_310 + 3) * 2) {
          if ((extraout_x8_25 & 1) != 0) {
            lVar36 = (long)*(int *)(*(undefined **)pdVar37 + 0x18);
            lVar22 = (long)pqStack_50 - (long)pqStack_58 >> 2;
            in_ZR = lVar22 == lVar36;
            if (lVar22 <= lVar36) {
              lVar36 = 0;
              pqVar39 = pqStack_58;
              do {
                if (lVar22 == 0) goto LAB_0065e5d4;
                lVar33 = lVar36 >> 0x1e;
                qVar9 = *pqVar39;
                lVar36 = lVar36 + 0x100000000;
                lVar22 = lVar22 + -1;
                in_ZR = true;
                pqVar39 = (qword *)((long)pqVar39 + 4);
              } while (*(dword *)(*(long *)(*(undefined **)pdVar37 + 0x20) + lVar33) == (dword)qVar9
                      );
            }
          }
          lVar22 = 0;
          pqStack_50 = pqStack_58;
          while( true ) {
            lVar36 = (long)*(int *)(*(undefined **)pdVar37 + 0x18);
            in_ZR = lVar22 == lVar36;
            if (lVar36 <= lVar22) break;
            pqStack_d8 = (qword *)CONCAT44(pqStack_d8._4_4_,
                                           *(undefined4 *)
                                            (*(long *)(*(undefined **)pdVar37 + 0x20) + lVar22 * 4))
            ;
            pcVar23 = (char *)&pqStack_d8;
            func_0x0063cd38(&pqStack_58);
            lVar22 = lVar22 + 1;
          }
          pqStack_2d8 = (qword *)CONCAT44(pqStack_2d8._4_4_,(uint)pqVar21);
          Hint_Prefetch(ppqStack_1d0,0,2,0);
          func_0x0067328c(ppqStack_1d0,&pqStack_58);
          uVar44 = uStack_1c0;
          plVar10 = plStack_1c8;
          ppqVar24 = ppqStack_1d0;
          lVar22 = 0;
          func_0x00676198((ulong)ppqStack_1d0 >> 0xc);
          pqVar48 = pqStack_50;
          pqVar39 = pqStack_58;
          uVar16 = extraout_x8_26;
          do {
            uVar16 = uVar16 & uVar44;
            func_0x006753d4();
            uVar29 = extraout_x8_27 & 0x8080808080808080;
            if (uVar29 != 0) {
LAB_0065e4a4:
              uVar6 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar29 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              pqVar38 = (qword *)(plVar10 +
                                 (uVar16 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) &
                                 uVar44) * 6);
              pqVar46 = pqVar39;
              pcVar23 = (char *)pqVar48;
              pqVar25 = pqVar38;
              FUN_00673408();
              if (((ulong)pqVar46 & 1) == 0) goto code_r0x0065e4d0;
              if (ppqVar24 != (qword **)0x0) {
                if (pqVar21 == (qword *)0x0) {
                  pqVar46 = (qword *)&pqStack_a8;
                  FUN_0054cf78(pqVar46,*(undefined4 *)(ppuStack_310 + 3));
                  func_0x00675590(*(undefined **)pdVar47);
                  pdVar41 = pdVar47;
                  if (!(bool)in_ZR) {
                    pdVar41 = extraout_x9_12;
                  }
                  for (; pdVar41 != pdVar37; pdVar41 = pdVar41 + 2) {
                    func_0x00676560();
                    FUN_0067e144();
                  }
                }
                func_0x00676560();
                pcVar23 = *(char **)pdVar37;
                FUN_0067e144();
                *(undefined4 *)(pqVar46 + 3) = 0;
                for (puVar40 = (uint *)pqVar38[3]; puVar40 != (uint *)pqVar38[4];
                    puVar40 = puVar40 + 1) {
                  pcVar23 = (char *)(ulong)*puVar40;
                  FUN_00533cb4(pqVar46 + 3);
                }
                pqVar21 = (qword *)((long)&MACH_HEADER.magic + 1);
                in_ZR = 1;
                goto LAB_0065e5d4;
              }
              goto LAB_0065e54c;
            }
LAB_0065e4d8:
            func_0x00674774();
            if ((extraout_x8_28 & 1) != 0) goto LAB_0065e54c;
            lVar22 = lVar22 + 8;
            uVar16 = lVar22 + uVar16;
          } while( true );
        }
        in_OV = SBORROW8((long)pdVar47,(long)&pqStack_a8);
        in_NG = (long)pdVar47 - (long)&pqStack_a8 < 0;
        in_ZR = (qword **)pdVar47 == &pqStack_a8;
        if (((uint)!(bool)in_ZR & (uint)pqVar21) != 0) {
          puVar31 = ppuStack_310[4];
          in_OV = SBORROW8((long)puVar31,(long)puStack_98);
          in_NG = (long)puVar31 - (long)puStack_98 < 0;
          in_ZR = puVar31 == puStack_98;
          if ((bool)in_ZR) {
            pcVar23 = (char *)&pqStack_a8;
            func_0x0054cde4(pdVar47);
          }
          else {
            FUN_0067350c(pdVar47);
            if ((int)pqStack_a0 != 0) {
              pcVar23 = (char *)&pqStack_a8;
              func_0x00673520(pdVar47);
            }
          }
        }
        func_0x0053b048(&pqStack_58);
        FUN_006734dc(&pqStack_a8);
      }
      pqVar39 = (qword *)&pqStack_1e8;
      func_0x00664ef0();
      if (((ulong)param_1[0x11] & 1) != 0) goto LAB_0065e668;
      if ((((undefined *)*param_1)[0x31] & 1) == 0) {
        bVar13 = *(dword *)(pqStack_300 + 4) == 1000;
        pqStack_a8 = pqStack_300;
        pqStack_58 = param_1;
        if ((int)*(dword *)(pqStack_300 + 4) < 1000) {
LAB_0065e70c:
          ppuVar28 = (undefined **)pqStack_300[0x10];
        }
        else {
          func_0x00676dac((undefined *)pqStack_300[0x12]);
          if (bVar13) {
            pcVar23 = (char *)pqStack_300[1];
            func_0x00674f94();
          }
          ppuVar28 = (undefined **)pqStack_300[0x10];
          if (*(char *)((long)ppuVar28 + 0xa2) == '\x01') {
            pcVar23 = (char *)pqStack_300[1];
            func_0x00674f94();
            goto LAB_0065e70c;
          }
        }
        pqVar48 = pqStack_300;
        if ((ppuVar28 == &PTR_PTR_00b25d18) || (*(int *)(ppuVar28 + 0x15) != 3)) {
          for (iVar15 = 0; iVar15 < *(int *)(pqStack_300 + 6); iVar15 = iVar15 + 1) {
            func_0x006757d4();
            if (((pqVar39 != (qword *)0x0) && ((undefined **)pqVar39[0x10] != &PTR_PTR_00b25d18)) &&
               (*(int *)((undefined **)pqVar39[0x10] + 0x15) == 3)) {
              pqStack_d8 = (qword *)CONCAT44(pqStack_d8._4_4_,iVar15);
              func_0x006757d4();
              pcVar23 = (char *)pqVar39[1];
              pqStack_1e8 = (qword *)&pqStack_a8;
              pqStack_1e0 = (qword *)&pqStack_d8;
              func_0x006755fc();
              FUN_0065ad28();
              pqVar48 = pqStack_a8;
              break;
            }
          }
        }
        dVar26 = *(dword *)(pqVar48 + 4);
        cVar11 = SBORROW4(dVar26,999);
        cVar12 = (int)(dVar26 - 999) < 0;
        if (dVar26 == 999) {
          func_0x00675154();
          for (; (long)pqVar21 < (long)(int)*(dword *)((long)pqVar48 + 4);
              pqVar21 = (qword *)((long)pqVar21 + 1)) {
            func_0x006746ec((undefined *)pqVar48[0xf]);
            pcVar23 = (char *)(extraout_x8_29 + (long)pdVar37);
            pqVar39 = param_1;
            FUN_006635d4();
            pdVar37 = pdVar37 + 0x16;
          }
          func_0x00675154();
          while( true ) {
            lVar22 = (long)*(int *)((long)pqVar48 + 0x3c);
            cVar11 = SBORROW8((long)pqVar21,lVar22);
            cVar12 = (long)pqVar21 - lVar22 < 0;
            if (lVar22 <= (long)pqVar21) break;
            func_0x0067461c((undefined *)pqVar48[0xc]);
            pcVar23 = (char *)(extraout_x8_30 + (long)pdVar37);
            pqVar39 = param_1;
            FUN_00663824();
            pqVar21 = (qword *)((long)pqVar21 + 1);
            pdVar37 = pdVar37 + 0x26;
          }
        }
        func_0x00674764();
        while (func_0x00676284(), cVar12 != cVar11) {
          func_0x00674260((undefined *)pqStack_300[0xc]);
          pqVar39 = (qword *)&pqStack_58;
          pcVar23 = (char *)(extraout_x8_31 + (long)pqVar48);
          FUN_00670428();
          func_0x006752f4();
        }
        func_0x00674764();
        while( true ) {
          lVar22 = (long)*(int *)(pqStack_300 + 8);
          cVar11 = SBORROW8((long)pdVar37,lVar22);
          cVar12 = (long)pdVar37 - lVar22 < 0;
          if (lVar22 <= (long)pdVar37) break;
          func_0x00674260((undefined *)pqStack_300[0xd]);
          func_0x00675bac();
          FUN_00664688();
          func_0x00674c40();
        }
        func_0x00674764();
        while (func_0x00676278(), cVar12 != cVar11) {
          func_0x0067448c();
          func_0x00675bac();
          FUN_00663940();
          func_0x00674c40();
        }
        func_0x00675154();
        for (; bVar13 = (undefined **)pqVar21 ==
                        (undefined **)(long)*(int *)((long)pqStack_300 + 0x44),
            (long)pqVar21 < (long)*(int *)((long)pqStack_300 + 0x44);
            pqVar21 = (qword *)((long)pqVar21 + 1)) {
          func_0x006753e0((undefined *)pqStack_300[0xe]);
          puVar32 = extraout_x11_07;
          if (!bVar13) {
            puVar32 = extraout_x10_10;
          }
          lVar22 = extraout_x8_32 + (long)pdVar37 * 8;
          lVar36 = *(long *)(lVar22 + 0x10);
          if (((lVar36 != 0) &&
              (ppuVar28 = *(undefined ***)(lVar36 + 0x80), ppuVar28 != &PTR_PTR_00b25d18)) &&
             ((*(int *)(ppuVar28 + 0x15) == 3 &&
              ((pqVar25 = (qword *)*puVar32, (*(byte *)((long)ppuVar28 + 0xa3) & 1) != 0 ||
               (*(char *)((long)ppuVar28 + 0xa4) == '\x01')))))) {
            pcVar23 = (char *)(*(long *)(lVar22 + 8) + 0x18);
            pqVar39 = param_1;
            func_0x00676720();
          }
          pdVar37 = pdVar37 + 2;
        }
        cVar5 = *(code *)(param_1 + 0x11);
        in_OV = SBORROW4((uint)(byte)cVar5,1);
        in_NG = (int)((byte)cVar5 - 1) < 0;
        in_ZR = 0;
        if ((byte)cVar5 == 1) goto LAB_0065e668;
      }
LAB_0065e95c:
      puVar31 = (undefined *)*param_1;
      if (((undefined *)param_1[0x22] != (undefined *)0x0) && ((puVar31[0x31] & 1) == 0)) {
        func_0x006766d0();
        if (pqVar39 == (qword *)0x0) {
          pdVar37 = (dword *)0x0;
        }
        else {
          pdVar37 = (dword *)(ulong)(byte)*(code *)((long)pcVar23 + 0x18);
        }
        pqVar39 = (qword *)param_1[0x1f];
        pcVar23 = (char *)param_1[0x20];
        FUN_0065b458();
        pqVar21 = (qword *)&pqStack_a8;
        pqStack_1e8 = pqVar39;
        pqStack_1e0 = (qword *)pcVar23;
        while (pqStack_1e8 != (qword *)0x0) {
          pqStack_a8 = (qword *)*pqStack_1e0;
          pcVar23 = (char *)pqStack_a8[1];
          pqStack_58 = pqVar21;
          if (((ulong)pdVar37 & 1) == 0) {
            func_0x006755fc();
            FUN_0065af68();
          }
          else {
            func_0x006755fc();
            FUN_0065ad28();
          }
          FUN_0065b480(&pqStack_1e8);
        }
        pqStack_1e8 = (qword *)0x0;
        if (((ulong)param_1[0x11] & 1) != 0) goto LAB_0065e69c;
        puVar31 = (undefined *)*param_1;
      }
      pqVar39 = pqStack_300;
      ppuVar28 = (undefined **)pqStack_2f8;
      if ((puVar31[0x31] & 1) == 0) {
        pqStack_a8 = param_1;
        pqStack_a0 = param_2;
        func_0x006751b4((undefined *)pqStack_300[0x11]);
        if (!(bool)in_ZR) {
          pqVar25 = (qword *)pqStack_300[1];
          ppqStack_1d0 = (qword **)(long)(char)*(code *)((long)pqVar25 + 0x17);
          pqStack_1d8 = pqVar25;
          if ((long)ppqStack_1d0 < 0) {
            pqStack_1d8 = (qword *)*pqVar25;
            ppqStack_1d0 = (qword **)pqVar25[1];
          }
          pqStack_1e8 = extraout_x8_33;
          pqStack_1e0 = param_2;
          func_0x00675584((undefined *)param_2[0x16],(undefined *)param_1[2]);
          plStack_1c8 = extraout_x8_34;
          uStack_1c0 = extraout_x9_13;
          if ((long)extraout_x9_13 < 0) {
            plStack_1c8 = (long *)*extraout_x8_34;
            uStack_1c0 = extraout_x8_34[1];
          }
          pqVar25 = (qword *)&pqStack_1e8;
          pcVar23 = (char *)pqStack_300;
          FUN_00670ce0();
        }
        func_0x00674764();
        while (func_0x00676284(), in_NG != in_OV) {
          func_0x00674260((undefined *)pqStack_300[0xc]);
          func_0x00676a0c();
          FUN_0067098c();
          func_0x006752f4();
        }
        func_0x00674764();
        while( true ) {
          lVar22 = (long)*(int *)(pqStack_300 + 8);
          cVar11 = SBORROW8((long)pdVar37,lVar22);
          cVar12 = (long)pdVar37 - lVar22 < 0;
          if (lVar22 <= (long)pdVar37) break;
          func_0x00674260((undefined *)pqStack_300[0xd]);
          func_0x00676a0c();
          func_0x00670ba4();
          func_0x00674c40();
        }
        func_0x00674764();
        while (func_0x00676278(), cVar12 != cVar11) {
          func_0x0067448c();
          func_0x00676a0c();
          FUN_00670c68();
          func_0x00674c40();
        }
        for (lVar22 = 0; uVar14 = lVar22 == *(int *)((long)pqStack_300 + 0x44),
            lVar22 < *(int *)((long)pqStack_300 + 0x44); lVar22 = lVar22 + 1) {
          puVar31 = (undefined *)pqStack_300[0xe];
          func_0x00676bb4();
          func_0x00674de8();
          pqVar39 = (qword *)*extraout_x8_35;
          func_0x006751b4(*(undefined8 *)(puVar31 + lVar22 * 0x40 + 0x20));
          if (!(bool)uVar14) {
            pcVar23 = *(char **)(puVar31 + lVar22 * 0x40 + 0x10);
            lVar36 = *(long *)(puVar31 + lVar22 * 0x40 + 8);
            ppqStack_1d0 = (qword **)(long)*(char *)(lVar36 + 0x2f);
            if ((long)ppqStack_1d0 < 0) {
              pqStack_1d8 = *(qword **)(lVar36 + 0x18);
              ppqStack_1d0 = *(qword ***)(lVar36 + 0x20);
            }
            else {
              pqStack_1d8 = (qword *)(lVar36 + 0x18);
            }
            pqStack_1e8 = extraout_x8_36;
            pqStack_1e0 = pqVar39;
            func_0x00675584((undefined *)param_2[0x16],(undefined *)param_1[2]);
            plStack_1c8 = extraout_x8_37;
            uStack_1c0 = extraout_x9_14;
            if ((long)extraout_x9_14 < 0) {
              plStack_1c8 = (long *)*extraout_x8_37;
              uStack_1c0 = extraout_x8_37[1];
            }
            pqVar25 = (qword *)&pqStack_1e8;
            FUN_00670ce0();
          }
          func_0x00675480();
          ppuVar28 = (undefined **)(pqVar39 + 3);
          lVar36 = 8;
          for (pqVar39 = pqStack_300; (long)pqVar39 < (long)*(int *)(puVar31 + lVar22 * 0x40 + 0x38)
              ; pqVar39 = (qword *)((long)pqVar39 + 1)) {
            lVar33 = *(long *)(puVar31 + lVar22 * 0x40 + 0x30);
            pqVar48 = *(qword **)((long)pqVar21 + lVar33 + 0x40);
            if ((undefined **)pqVar48 != &PTR_PTR_00b25a18) {
              pqVar25 = (qword *)ppuVar28;
              if (((ulong)*ppuVar28 & 1) != 0) {
                pqVar25 = (qword *)(*ppuVar28 + lVar36 + -1);
              }
              pcVar23 = *(char **)(*(long *)((long)pqVar21 + lVar33 + 0x10) + 0x10);
              pqStack_1e8 = pqVar48;
              pqStack_1e0 = (qword *)*pqVar25;
              lVar33 = *(long *)((long)pqVar21 + lVar33 + 8);
              ppqStack_1d0 = (qword **)(long)*(char *)(lVar33 + 0x2f);
              if ((long)ppqStack_1d0 < 0) {
                pqStack_1d8 = *(qword **)(lVar33 + 0x18);
                ppqStack_1d0 = *(qword ***)(lVar33 + 0x20);
              }
              else {
                pqStack_1d8 = (qword *)(lVar33 + 0x18);
              }
              func_0x00675584((undefined *)param_2[0x16],(undefined *)param_1[2]);
              plStack_1c8 = extraout_x8_38;
              uStack_1c0 = extraout_x9_15;
              if ((long)extraout_x9_15 < 0) {
                plStack_1c8 = (long *)*extraout_x8_38;
                uStack_1c0 = extraout_x8_38[1];
              }
              pqVar25 = (qword *)&pqStack_1e8;
              FUN_00670ce0();
            }
            pqVar21 = pqVar21 + 10;
            lVar36 = lVar36 + 8;
          }
        }
        in_OV = '\0';
        in_NG = '\0';
        in_ZR = *(code *)(param_1 + 0x11) == (code)0x0;
        pqVar39 = (qword *)0x0;
        if ((bool)in_ZR) {
          pqVar39 = pqStack_300;
        }
      }
    }
    else {
LAB_0065e668:
      func_0x00674764();
      while( true ) {
        ppuVar28 = (undefined **)(long)*(int *)(param_2 + 7);
        in_OV = SBORROW8((long)pdVar37,(long)ppuVar28);
        in_NG = (long)pdVar37 - (long)ppuVar28 < 0;
        in_ZR = (undefined **)pdVar37 == ppuVar28;
        if ((long)ppuVar28 <= (long)pdVar37) break;
        func_0x00674260((undefined *)pqStack_300[0xc]);
        func_0x00675bac();
        FUN_00661078();
        func_0x006752f4();
      }
      if (((ulong)param_1[0x11] & 1) == 0) goto LAB_0065e95c;
LAB_0065e69c:
      pqVar39 = (qword *)0x0;
      ppuVar28 = (undefined **)pcVar42;
    }
    func_0x00667c38(&puStack_2c8);
    func_0x00676078();
  } while( true );
code_r0x0065e4d0:
  func_0x00676458();
  if (uVar29 == 0) goto LAB_0065e4d8;
  goto LAB_0065e4a4;
LAB_0065e54c:
  if (pqVar21 == (qword *)0x0) {
    pqVar21 = (qword *)0x0;
  }
  else {
    pcVar23 = *(char **)pdVar37;
    func_0x00676560();
    FUN_0067e144();
    pqVar21 = (qword *)((long)&MACH_HEADER.magic + 1);
  }
LAB_0065e5d4:
  pdVar37 = pdVar37 + 2;
  goto LAB_0065e3c0;
}



/* Entry: 0065efd0; end: 0065f00b;  */

undefined8 FUN_0065efd0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x00675a20();
  func_0x0067587c(auStack_38);
  func_0x006766c0();
  func_0x00674d6c();
  return param_1;
}



/* Entry: 0065f00c; end: 0065f02b;  */

void FUN_0065f00c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[2] == 0) {
    return;
  }
  param_1[3] = 0;
  if ((ulong)param_1[2] < 0x80) {
    lVar3 = param_1[2];
    lVar2 = *param_1;
    _memset(lVar2,0x80,lVar3 + 8);
    *(undefined1 *)(lVar2 + lVar3) = 0xff;
    uVar1 = param_1[2];
    lVar2 = 6;
    if (uVar1 != 7) {
      lVar2 = uVar1 - (uVar1 >> 3);
    }
    *(long *)(*param_1 + -8) = lVar2 - param_1[3];
    return;
  }
  (*(code *)(undefined *)0x537dcc)(param_1);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)&UNK_00811030;
  return;
}



/* Entry: 0065f02c; end: 0065f0eb;  */

long FUN_0065f02c(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x9;
  undefined8 extraout_x10;
  long extraout_x11;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00674e30();
  func_0x006746c4();
  func_0x00675160();
  FUN_0066696c();
  uVar3 = unaff_x19[1];
  uVar4 = unaff_x19[2];
  func_0x006745f4(*unaff_x19 >> 0xc);
  do {
    func_0x00674f7c();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x0067590c();
      func_0x00676d28(uVar3 + (extraout_x8_00 & uVar4) * 0x20);
      uVar1 = unaff_x20[1];
      puVar5 = (undefined8 *)*unaff_x20;
      if (-1 < (char)*(byte *)((long)unaff_x20 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)unaff_x20 + 0x17);
        puVar5 = unaff_x20;
      }
      uVar6 = extraout_x10;
      if (-1 < extraout_x9) {
        uVar6 = extraout_x8_01;
      }
      lVar2 = extraout_x11;
      if (-1 < (int)extraout_x9) {
        lVar2 = extraout_x9;
      }
      func_0x00465a14(uVar6,lVar2,puVar5,uVar1);
      if ((int)uVar6 != 0) {
        return *unaff_x19 + (extraout_x8_00 & uVar4);
      }
      func_0x00676458();
    }
    func_0x006745a8();
    if ((extraout_x8_02 & 1) != 0) {
      return 0;
    }
    func_0x00676bf0();
  } while( true );
}



/* Entry: 0065f0ec; end: 0065f14b;  */

long FUN_0065f0ec(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x006743f8();
    func_0x0067424c();
    goto LAB_0065f138;
  }
  lVar1 = param_1[0x15];
  func_0x00674200((int)lVar1 + (param_2 * 4 + 7U & 0xfffffff8));
  if (param_1 == (long *)0x0) {
    return lVar2 + (int)lVar1;
  }
  do {
    func_0x00533528();
    func_0x0067427c();
LAB_0065f138:
    FUN_00776794();
    func_0x00674d28();
  } while( true );
}



/* Entry: 0065f14c; end: 006603cb;  */

void FUN_0065f14c(undefined8 param_1,undefined **param_2,long param_3,int *param_4,long *param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  qword *pqVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  int **ppiVar12;
  long *plVar13;
  int *piVar14;
  int **ppiVar15;
  int extraout_w8;
  int iVar16;
  int extraout_w8_00;
  int iVar17;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar18;
  int *piVar19;
  undefined8 extraout_x8_04;
  int *extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined *extraout_x8_07;
  undefined **ppuVar20;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  int *extraout_x8_12;
  int iVar21;
  undefined *puVar22;
  undefined **extraout_x9;
  int **extraout_x9_00;
  undefined **extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined **extraout_x9_03;
  int **extraout_x9_04;
  undefined **extraout_x9_05;
  undefined **extraout_x9_06;
  long extraout_x9_07;
  undefined **extraout_x9_08;
  long extraout_x9_09;
  undefined **extraout_x9_10;
  long extraout_x9_11;
  undefined **ppuVar23;
  int *piVar24;
  int **extraout_x10;
  undefined8 extraout_x10_00;
  int **extraout_x10_01;
  undefined **extraout_x10_02;
  int *extraout_x10_03;
  long extraout_x10_04;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  ulong extraout_x13;
  ulong uVar25;
  ulong extraout_x13_00;
  ulong extraout_x13_01;
  ulong uVar26;
  int **unaff_x19;
  long lVar27;
  undefined **ppuVar28;
  qword *pqVar29;
  code *pcVar30;
  ulong *puVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  undefined **ppuVar35;
  long lVar36;
  ulong *puVar37;
  int **ppiVar38;
  undefined *puVar39;
  int **ppiVar40;
  int *piStack_1b0;
  int *piStack_188;
  undefined4 uStack_17c;
  int *piStack_178;
  qword *pqStack_170;
  int *apiStack_160 [3];
  int *piStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  int *piStack_f0;
  undefined *puStack_e8;
  int **ppiStack_c0;
  int **ppiStack_b8;
  byte bStack_b0;
  undefined8 uStack_90;
  
  lVar27 = param_3;
  func_0x00674238();
  if (lVar27 == 0) {
    lVar27 = *(long *)(unaff_x19[0x15] + 4);
  }
  else {
    lVar27 = *(long *)(param_3 + 8) + 0x18;
  }
  uStack_90 = extraout_x8;
  FUN_00661344(lVar27,(ulong)param_2[0x1b] & 0xfffffffffffffffc,param_5);
  *(long *)(param_4 + 2) = lVar27;
  func_0x00675e80(param_2[0x1b]);
  FUN_0065c320();
  *(int **)(param_4 + 4) = unaff_x19[0x15];
  *(long *)(param_4 + 6) = param_3;
  *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) & 0x80;
  param_4[8] = 0;
  param_4[9] = 0;
  lVar27 = *(long *)(*unaff_x19 + 10);
  lVar36 = *(long *)(param_4 + 2);
  puVar31 = (ulong *)(lVar27 + 0x78);
  Hint_Prefetch(*puVar31,0,2,0);
  puVar37 = (ulong *)(lVar36 + 0x18);
  uVar18 = *(ulong *)(lVar36 + 0x20);
  puVar11 = (ulong *)*puVar37;
  if (-1 < (char)*(byte *)(lVar36 + 0x2f)) {
    uVar18 = (ulong)*(byte *)(lVar36 + 0x2f);
    puVar11 = puVar37;
  }
  puVar10 = puVar31;
  FUN_0066696c(puVar31,puVar11,uVar18);
  lVar36 = 0;
  lVar32 = *(long *)(lVar27 + 0x80);
  func_0x00674f64(*puVar31 >> 0xc ^ (ulong)puVar10 >> 7);
  uVar18 = extraout_x8_00;
  uVar25 = extraout_x13;
  while( true ) {
    func_0x00674f7c();
    for (uVar26 = extraout_x8_01 & 0x8080808080808080; uVar26 != 0; uVar26 = uVar26 - 1 & uVar26) {
      func_0x00675f14();
      uVar34 = (uVar18 & uVar25) + (extraout_x8_02 >> 3) & extraout_x13_00;
      puVar11 = puVar37;
      FUN_0066c218(puVar37,lVar32 + uVar34 * 0x20);
      if (((ulong)puVar11 & 1) != 0) {
        *(byte *)((long)param_4 + 1) =
             (*(byte *)(*(long *)(lVar27 + 0x80) + uVar34 * 0x20 + 0x18) & 0x1f) << 2 |
             *(byte *)((long)param_4 + 1) & 0x83;
        goto LAB_0065f2c8;
      }
    }
    func_0x006745a8();
    if ((extraout_x8_03 & 1) != 0) break;
    lVar36 = lVar36 + 8;
    uVar18 = lVar36 + (uVar18 & uVar25);
    uVar25 = extraout_x13_01;
  }
LAB_0065f2c8:
  uVar18 = 0;
  ppuVar23 = param_2 + 3;
  puVar22 = *ppuVar23;
  ppuVar28 = (undefined **)(puVar22 + 7);
  do {
    *(short *)((long)param_4 + 2) = (short)uVar18;
    if (0xfffe < uVar18 || (long)*(int *)(param_2 + 4) <= (long)uVar18) break;
    ppuVar35 = ppuVar23;
    if (((ulong)puVar22 & 1) != 0) {
      ppuVar35 = ppuVar28;
    }
    uVar18 = uVar18 + 1;
    ppuVar28 = ppuVar28 + 1;
  } while (uVar18 == *(uint *)(*ppuVar35 + 0x48));
  iVar16 = *(int *)(param_2 + 0x13);
  param_4[0x1e] = iVar16;
  lVar27 = *param_5;
  if (lVar27 == 0) goto LAB_00660240;
  lVar36 = param_5[0x15];
  uVar3 = (int)lVar36 + iVar16 * 0x38;
  uVar18 = (ulong)uVar3;
  *(uint *)(param_5 + 0x15) = uVar3;
  func_0x00674520(uVar18,(int)param_5[0xe]);
  if (uVar18 != 0) {
    func_0x00533528();
    func_0x006753b0();
    func_0x00674560();
    goto LAB_00660238;
  }
  lVar32 = 0;
  ppuVar28 = param_2 + 0x12;
  *(long *)(param_4 + 0x10) = lVar27 + (int)lVar36;
  ppiVar15 = (int **)0x0;
  while( true ) {
    pqVar29 = &segment_command_00000020.vmaddr;
    lVar27 = (long)*(int *)(param_2 + 0x13);
    cVar6 = SBORROW8(lVar32,lVar27);
    cVar7 = lVar32 - lVar27 < 0;
    bVar8 = lVar32 == lVar27;
    if (lVar27 <= lVar32) break;
    func_0x00674f70(*ppuVar28);
    ppuVar35 = ppuVar28;
    if (!bVar8) {
      ppuVar35 = extraout_x9;
    }
    puVar39 = *ppuVar35;
    ppiVar40 = (int **)(*(long *)(param_4 + 0x10) + lVar32 * 0x38);
    func_0x00675fa8(*(undefined8 *)(param_4 + 2));
    ppiVar40[1] = (int *)ppiVar15;
    func_0x00675e80(*(undefined8 *)(puVar39 + 0x18));
    FUN_0065c320();
    ppiVar40[2] = param_4;
    *(undefined4 *)((long)ppiVar40 + 4) = 0;
    ppiVar40[6] = (int *)0x0;
    piStack_188 = (int *)CONCAT44(piStack_188._4_4_,2);
    func_0x006769b8();
    ppiVar15 = ppiVar40;
    func_0x00659ab8(ppiVar40,&piStack_178);
    func_0x00676518();
    pqVar29 = pqStack_170;
    piVar14 = piStack_178;
    piVar19 = ppiVar40[1];
    puVar22 = (undefined *)(long)*(char *)((long)piVar19 + 0x2f);
    if ((long)puVar22 < 0) {
      piVar24 = *(int **)(piVar19 + 6);
      puVar22 = *(undefined **)(piVar19 + 8);
    }
    else {
      piVar24 = piVar19 + 6;
    }
    ppuVar35 = &PTR_PTR_00b25c18;
    if (((byte)puVar39[0x10] >> 1 & 1) != 0) {
      if (*param_5 == 0) {
        func_0x00674350();
        func_0x006745b8(&piStack_148);
        goto LAB_00660238;
      }
      ppiVar38 = *(int ***)(puVar39 + 0x20);
      lVar36 = param_5[10];
      lVar27 = param_5[0x1a];
      uVar3 = (int)lVar27 + 1;
      uVar18 = (ulong)uVar3;
      *(uint *)(param_5 + 0x1a) = uVar3;
      ppiVar15 = (int **)(ulong)*(uint *)(param_5 + 0x13);
      func_0x00674520();
      if (uVar18 != 0) {
        func_0x00674560();
        goto LAB_00660238;
      }
      ppiVar12 = ppiVar38;
      FUN_0067c00c();
      if (((ulong)ppiVar12 & 1) == 0) {
        piStack_148 = piVar24;
        puStack_140 = puVar22;
        func_0x00674500();
        piStack_f0 = piVar24;
        puStack_e8 = puVar22;
        ppiStack_c0 = ppiVar12;
        ppiStack_b8 = ppiVar15;
        func_0x00674ca4();
        ppiVar15 = unaff_x19;
        func_0x00674814();
        func_0x00675db0();
        ppuVar35 = &PTR_PTR_00b25c18;
      }
      else {
        FUN_0054a274(&piStack_148,ppiVar38);
        ppuVar35 = (undefined **)(lVar36 + (long)(int)lVar27 * 0x50);
        func_0x00675264();
        uVar2 = extraout_x11;
        ppiVar15 = extraout_x10;
        if (cVar7 == cVar6) {
          uVar2 = extraout_x8_04;
          ppiVar15 = extraout_x9_00;
        }
        func_0x006656a4(ppiVar15,uVar2,ppuVar35);
        func_0x00676904();
        uVar9 = *(int *)(ppuVar35 + 7) == 1;
        if (0 < *(int *)(ppuVar35 + 7)) {
          ppiVar15 = &piStack_148;
          FUN_0066f1a4(ppiVar15,piVar24,puVar22,piVar24,puVar22,piVar14,
                       (long)pqVar29 - (long)piVar14 >> 2,ppiVar38,ppuVar35);
          func_0x00675810();
          func_0x00676080();
        }
        if (((ulong)ppiVar38[1] & 1) == 0) {
          FUN_006a480c();
        }
        else {
          func_0x006762e4();
        }
        func_0x00676398();
        if (!(bool)uVar9) {
          ppiVar15 = (int **)unaff_x19[1];
          FUN_00654614(ppiVar15,"google.protobuf.OneofOptions",0x1c);
          func_0x00675120();
          if ((bool)uVar9) {
            func_0x006763ec();
            while (func_0x00675234(), (long)ppiVar38 < (long)extraout_w8) {
              FUN_0066bfcc(*(undefined8 *)*unaff_x19);
              ppiVar15 = (int **)*unaff_x19;
              func_0x006757f4();
              FUN_00655ef4();
              if (ppiVar15 != (int **)0x0) {
                piStack_148 = ppiVar15[2];
                func_0x006756a4();
              }
              func_0x00676b2c();
            }
          }
        }
      }
    }
    ppiVar40[3] = (int *)ppuVar35;
    func_0x00674eec();
    ppiVar40[4] = extraout_x8_05;
    ppiVar40[5] = extraout_x8_05;
    func_0x00675670();
    *(undefined1 *)ppiVar40 = 3;
    func_0x0067541c(ppiVar40[1]);
    FUN_0065c040();
    lVar32 = lVar32 + 1;
  }
  param_4[1] = *(int *)(param_2 + 4);
  plVar13 = param_5;
  FUN_00660fdc();
  func_0x00675480();
  *(long **)(param_4 + 0xe) = plVar13;
  for (; (long)pqVar29 < (long)*(int *)(param_2 + 4); pqVar29 = (qword *)((long)pqVar29 + 1)) {
    func_0x00675108(*ppuVar23);
    func_0x00675148();
    FUN_00661a38();
    ppuVar28 = ppuVar28 + 0xb;
  }
  param_4[0x21] = *(int *)(param_2 + 10);
  plVar13 = param_5;
  FUN_0065be28();
  func_0x00675480();
  *(long **)(param_4 + 0x14) = plVar13;
  for (; (long)pqVar29 < (long)*(int *)(param_2 + 10); pqVar29 = (qword *)((long)pqVar29 + 1)) {
    func_0x00674df8();
    func_0x00675148();
    FUN_006603cc();
    ppuVar28 = ppuVar28 + 0xb;
  }
  param_4[0x22] = *(int *)(param_2 + 0xd);
  plVar13 = param_5;
  func_0x0065bf94();
  *(long **)(param_4 + 0x16) = plVar13;
  ppuVar23 = param_2 + 0xc;
  ppuVar35 = param_2;
  for (lVar27 = 0; bVar8 = lVar27 == *(int *)(param_2 + 0xd), lVar27 < *(int *)(param_2 + 0xd);
      lVar27 = lVar27 + 1) {
    func_0x00674f70(*ppuVar23);
    ppuVar28 = ppuVar23;
    if (!bVar8) {
      ppuVar28 = extraout_x9_01;
    }
    puVar22 = *ppuVar28;
    ppuVar28 = (undefined **)(*(long *)(param_4 + 0x16) + lVar27 * 0x28);
    iVar16 = *(int *)(puVar22 + 0x20);
    *(int *)ppuVar28 = iVar16;
    iVar21 = *(int *)(puVar22 + 0x24);
    *(int *)((long)ppuVar28 + 4) = iVar21;
    ppuVar28[2] = (undefined *)param_4;
    piStack_188 = param_4;
    if (iVar16 < 1) {
      FUN_006626a4(unaff_x19 + 0x1b,&piStack_188);
      pqVar29 = (qword *)((long)ppuVar28 + 4);
      FUN_0066155c();
      func_0x0067541c(*(undefined8 *)(piStack_188 + 2));
      FUN_0065ae94();
      iVar16 = *(int *)ppuVar28;
      iVar21 = *(int *)pqVar29;
    }
    cVar6 = SBORROW4(iVar16,iVar21);
    cVar7 = iVar16 - iVar21 < 0;
    if (iVar21 <= iVar16) {
      func_0x0067541c(*(undefined8 *)(piStack_188 + 2));
      FUN_0065ae94();
    }
    uStack_17c = 3;
    func_0x006769b8();
    func_0x006599ec(ppuVar28[2],&piStack_178);
    piStack_148._0_4_ = 5;
    func_0x00676524();
    piStack_148 = (int *)CONCAT44(piStack_148._4_4_,
                                  (int)(((long)ppuVar28 - *(long *)(ppuVar28[2] + 0x58)) / 0x28));
    func_0x00676524();
    FUN_0053ad70(&piStack_178,&uStack_17c);
    pqVar5 = pqStack_170;
    piVar14 = piStack_178;
    lVar36 = *(long *)(ppuVar28[2] + 8);
    puVar39 = (undefined *)(long)*(char *)(lVar36 + 0x2f);
    if ((long)puVar39 < 0) {
      piStack_1b0 = *(int **)(lVar36 + 0x18);
      puVar39 = *(undefined **)(lVar36 + 0x20);
    }
    else {
      piStack_1b0 = (int *)(lVar36 + 0x18);
    }
    ppuVar35 = &PTR_PTR_00b25e98;
    if ((puVar22[0x10] & 1) != 0) {
      if (*param_5 == 0) {
        func_0x00674350();
        func_0x006745b8(&piStack_148);
        goto LAB_00660238;
      }
      ppiVar40 = *(int ***)(puVar22 + 0x18);
      lVar36 = param_5[9];
      iVar16 = *(int *)((long)param_5 + 0xcc);
      uVar3 = iVar16 + 1;
      uVar18 = (ulong)uVar3;
      *(uint *)((long)param_5 + 0xcc) = uVar3;
      ppiVar15 = (int **)(ulong)*(uint *)((long)param_5 + 0x94);
      func_0x00674520();
      if (uVar18 != 0) {
        func_0x00674560();
        goto LAB_00660238;
      }
      ppiVar38 = ppiVar40;
      FUN_00678a34();
      pqVar29 = pqVar5;
      if (((ulong)ppiVar38 & 1) == 0) {
        piStack_148 = piStack_1b0;
        puStack_140 = puVar39;
        func_0x00674500();
        piStack_f0 = piStack_1b0;
        puStack_e8 = puVar39;
        ppiStack_c0 = ppiVar38;
        ppiStack_b8 = ppiVar15;
        func_0x00674ca4();
        func_0x00674814();
        func_0x00675db0();
        ppuVar35 = &PTR_PTR_00b25e98;
      }
      else {
        FUN_0054a274(&piStack_148,ppiVar40);
        ppuVar35 = (undefined **)(lVar36 + (long)iVar16 * 0x70);
        func_0x00675264();
        uVar2 = extraout_x11_00;
        uVar4 = extraout_x10_00;
        if (cVar7 == cVar6) {
          uVar2 = extraout_x8_06;
          uVar4 = extraout_x9_02;
        }
        func_0x006656a4(uVar4,uVar2,ppuVar35);
        func_0x00676904();
        uVar9 = *(int *)(ppuVar35 + 10) == 1;
        if (0 < *(int *)(ppuVar35 + 10)) {
          FUN_0066f1a4(&piStack_148,piStack_1b0,puVar39,piStack_1b0,puVar39,piVar14,
                       (long)pqVar5 - (long)piVar14 >> 2,ppiVar40,ppuVar35);
          func_0x00675810();
          func_0x00676080();
        }
        if (((ulong)ppiVar40[1] & 1) == 0) {
          FUN_006a480c();
        }
        else {
          func_0x006762e4();
        }
        func_0x00676398();
        if (!(bool)uVar9) {
          pqVar29 = (qword *)unaff_x19[1];
          FUN_00654614(pqVar29,"google.protobuf.ExtensionRangeOptions",0x25);
          func_0x00675120();
          if ((bool)uVar9) {
            for (lVar36 = 0; func_0x00675234(), lVar36 < extraout_w8_00; lVar36 = lVar36 + 1) {
              FUN_0066bfcc(*(undefined8 *)*unaff_x19);
              piVar14 = *unaff_x19;
              func_0x006757f4();
              FUN_00655ef4();
              if (piVar14 != (int *)0x0) {
                piStack_148 = *(int **)(piVar14 + 4);
                func_0x006756a4();
              }
            }
          }
        }
      }
    }
    ppuVar28[1] = (undefined *)ppuVar35;
    func_0x00674eec();
    ppuVar28[3] = extraout_x8_07;
    ppuVar28[4] = extraout_x8_07;
    func_0x00675670();
  }
  param_4[0x23] = *(int *)(param_2 + 0x10);
  plVar13 = param_5;
  FUN_00660fdc();
  func_0x00675480();
  *(long **)(param_4 + 0x18) = plVar13;
  for (; (long)pqVar29 < (long)*(int *)(param_2 + 0x10); pqVar29 = (qword *)((long)pqVar29 + 1)) {
    func_0x00674df8();
    func_0x00675148();
    FUN_00661034();
    ppuVar28 = ppuVar28 + 0xb;
  }
  iVar16 = *(int *)(param_2 + 0x16);
  param_4[0x24] = iVar16;
  piVar14 = (int *)*param_5;
  if (piVar14 == (int *)0x0) {
    func_0x00675198();
    FUN_00533884(&ppiStack_c0);
    func_0x00674bbc();
    func_0x00676490(&piStack_148);
    goto LAB_00660238;
  }
  lVar27 = param_5[0x15];
  uVar3 = (int)lVar27 + iVar16 * 8;
  uVar18 = (ulong)uVar3;
  *(uint *)(param_5 + 0x15) = uVar3;
  func_0x00674520(uVar18,(int)param_5[0xe]);
  if (uVar18 != 0) {
    func_0x00533528();
    func_0x006753b0();
    func_0x00674560();
    goto LAB_00660238;
  }
  func_0x006763ec();
  *(undefined **)(param_4 + 0x1a) = (undefined *)((long)piVar14 + (long)(int)lVar27);
  ppuVar1 = param_2 + 0x15;
  while( true ) {
    ppuVar20 = (undefined **)(long)*(int *)(param_2 + 0x16);
    cVar6 = SBORROW8((long)ppuVar35,(long)ppuVar20);
    cVar7 = (long)ppuVar35 - (long)ppuVar20 < 0;
    bVar8 = ppuVar35 == ppuVar20;
    if ((long)ppuVar20 <= (long)ppuVar35) break;
    func_0x00674f70(*ppuVar1);
    ppuVar20 = ppuVar1;
    if (!bVar8) {
      ppuVar20 = extraout_x9_03;
    }
    piVar14 = (int *)*ppuVar20;
    lVar27 = *(long *)(param_4 + 0x1a);
    piVar19 = (int *)(lVar27 + (long)ppuVar28);
    iVar16 = piVar14[6];
    *piVar19 = iVar16;
    iVar21 = piVar14[7];
    piVar19[1] = iVar21;
    piStack_148 = param_4;
    if (iVar16 < 1) {
      FUN_006626a4(unaff_x19 + 0x1b,&piStack_148);
      FUN_0066155c();
      func_0x0067541c(*(undefined8 *)(piStack_148 + 2));
      FUN_0065ae94();
      iVar16 = *(int *)(lVar27 + (long)ppuVar28);
      iVar21 = piVar19[1];
    }
    if (iVar21 <= iVar16) {
      func_0x0067541c(*(undefined8 *)(piStack_148 + 2));
      FUN_0065ae94();
    }
    ppuVar35 = (undefined **)((long)ppuVar35 + 1);
    ppuVar28 = ppuVar28 + 1;
  }
  piStack_188 = (int *)CONCAT44(piStack_188._4_4_,7);
  func_0x006769b8();
  func_0x006599ec(param_4,&piStack_178);
  func_0x00676518();
  lVar27 = *(long *)(param_4 + 2);
  puVar22 = (undefined *)(long)*(char *)(lVar27 + 0x2f);
  if ((long)puVar22 < 0) {
    piVar19 = *(int **)(lVar27 + 0x18);
    puVar22 = *(undefined **)(lVar27 + 0x20);
  }
  else {
    piVar19 = (int *)(lVar27 + 0x18);
  }
  if ((*(byte *)(param_2 + 2) >> 1 & 1) == 0) {
LAB_0065fc84:
    ppuVar28 = &PTR_PTR_00b25cc0;
LAB_0065fc8c:
    *(undefined ***)(param_4 + 8) = ppuVar28;
    func_0x00674eec();
    *(undefined8 *)(param_4 + 10) = extraout_x8_09;
    *(undefined8 *)(param_4 + 0xc) = extraout_x8_09;
    func_0x00675670();
    iVar16 = *(int *)(unaff_x19 + 0x2a);
    *(int *)(unaff_x19 + 0x2a) = iVar16 + -1;
    uVar9 = iVar16 == 2;
    if (iVar16 < 2) {
      func_0x0067541c(*(undefined8 *)(param_4 + 2));
      FUN_0065ae94();
      param_4[0x12] = 0;
      param_4[0x13] = 0;
      param_4[0x20] = 0;
    }
    else {
      param_4[0x20] = *(int *)(param_2 + 7);
      plVar13 = param_5;
      func_0x0065bf3c();
      func_0x00675480();
      *(long **)(param_4 + 0x12) = plVar13;
      for (; (long)piVar14 < (long)*(int *)(param_2 + 7); piVar14 = (int *)((long)piVar14 + 1)) {
        func_0x00674df8();
        func_0x00675148();
        FUN_0065f14c();
      }
      uVar3 = *(uint *)(param_2 + 0x19);
      param_4[0x25] = uVar3;
      plVar13 = param_5;
      FUN_006614a0(param_5,uVar3);
      *(long **)(param_4 + 0x1c) = plVar13;
      ppuVar28 = param_2 + 0x18;
      for (lVar27 = 0; bVar8 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) << 3 == lVar27,
          !bVar8; lVar27 = lVar27 + 8) {
        func_0x00674f70(*ppuVar28);
        ppuVar35 = ppuVar28;
        if (!bVar8) {
          ppuVar35 = extraout_x9_05;
        }
        plVar13 = param_5;
        FUN_0065efd0(param_5,*ppuVar35);
        *(long **)(*(long *)(param_4 + 0x1c) + lVar27) = plVar13;
      }
      *(undefined1 *)param_4 = 1;
      func_0x0067541c(*(undefined8 *)(param_4 + 2));
      FUN_0065c040();
      lVar27 = 0;
      uVar18 = (ulong)*(uint *)(param_2 + 0x16);
      iVar16 = 1;
      while (uVar9 = lVar27 == (int)uVar18, lVar27 < (int)uVar18) {
        func_0x006753e0();
        ppuVar35 = ppuVar1;
        if (!(bool)uVar9) {
          ppuVar35 = extraout_x10_02;
        }
        puVar22 = *ppuVar35;
        lVar27 = lVar27 + 1;
        uVar18 = extraout_x8_10;
        iVar21 = iVar16;
        while( true ) {
          iVar17 = (int)uVar18;
          cVar6 = SBORROW4(iVar17,iVar21);
          cVar7 = iVar17 - iVar21 < 0;
          uVar9 = iVar17 == iVar21;
          if (iVar17 <= iVar21) break;
          func_0x00674d10();
          func_0x00676320();
          uVar18 = extraout_x8_11;
          if ((!(bool)uVar9 && cVar7 == cVar6) && (*(int *)(puVar22 + 0x18) < extraout_x10_03[7])) {
            piStack_148 = extraout_x10_03;
            puStack_140 = puVar22;
            func_0x00675360();
            uVar18 = (ulong)*(uint *)(param_2 + 0x16);
          }
          iVar21 = iVar21 + 1;
        }
        iVar16 = iVar16 + 1;
      }
      func_0x00674868();
      puStack_140 = (undefined *)0x0;
      uStack_138 = 0;
      uStack_130 = 0;
      piStack_148 = extraout_x8_12;
      func_0x00675590(param_2[0x18]);
      if (!(bool)uVar9) {
        ppuVar28 = extraout_x9_06;
      }
      pcVar30 = FUN_00671024;
      for (lVar27 = (long)*(int *)(extraout_x10_04 + 200) << 3; lVar27 != 0; lVar27 = lVar27 + -8) {
        ppiVar15 = (int **)*ppuVar28;
        FUN_0066f694(&ppiStack_c0,&piStack_148,ppiVar15);
        if ((bStack_b0 & 1) == 0) {
          ppiStack_c0 = ppiVar15;
          func_0x00674b38();
        }
        ppuVar28 = ppuVar28 + 1;
      }
      lVar27 = 0;
      while (lVar27 < param_4[1]) {
        func_0x00675480();
        piStack_f0 = (int *)(*(long *)(param_4 + 0xe) + extraout_x9_07 * 0x58);
        for (; (long)pcVar30 < (long)param_4[0x22]; pcVar30 = pcVar30 + 1) {
          apiStack_160[0] = (int *)(*(long *)(param_4 + 0x16) + lVar27);
          iVar16 = piStack_f0[1];
          if ((*(int *)(*(long *)(param_4 + 0x16) + lVar27) <= iVar16) &&
             (uVar9 = iVar16 == apiStack_160[0][1], iVar16 < apiStack_160[0][1])) {
            func_0x006768ec();
            func_0x00675108(*ppuVar23);
            ppuVar28 = ppuVar23;
            if (!(bool)uVar9) {
              ppuVar28 = extraout_x9_08;
            }
            func_0x00675614(ppuVar28);
            if (extraout_x9_09 == 0) {
              func_0x00676b18();
            }
            ppiStack_c0 = apiStack_160;
            ppiStack_b8 = &piStack_f0;
            func_0x00674e94(*(undefined8 *)(piStack_f0 + 2));
            FUN_0065ad28();
          }
          lVar27 = lVar27 + 0x28;
        }
        func_0x00675480();
        for (; (long)pcVar30 < (long)param_4[0x24]; pcVar30 = pcVar30 + 1) {
          iVar16 = piStack_f0[1];
          if ((*(int *)(*(long *)(param_4 + 0x1a) + lVar27) <= iVar16) &&
             (iVar21 = *(int *)(*(long *)(param_4 + 0x1a) + lVar27 + 4), uVar9 = iVar16 == iVar21,
             iVar16 < iVar21)) {
            func_0x006768ec();
            func_0x00674f70(*ppuVar1);
            ppuVar28 = ppuVar1;
            if (!(bool)uVar9) {
              ppuVar28 = extraout_x9_10;
            }
            func_0x00675614(ppuVar28);
            if (extraout_x9_11 == 0) {
              func_0x00676b18();
            }
            ppiStack_c0 = &piStack_f0;
            func_0x00674e94(*(undefined8 *)(piStack_f0 + 2));
            func_0x00676764();
          }
          lVar27 = lVar27 + 8;
        }
        ppiVar15 = &piStack_148;
        FUN_006615b4(ppiVar15,*(undefined8 *)(piStack_f0 + 2));
        if ((int)ppiVar15 != 0) {
          func_0x0067461c(*(undefined8 *)(piStack_f0 + 2));
          ppiStack_c0 = &piStack_f0;
          FUN_0065ad28();
        }
        lVar27 = extraout_x9_07 + 1;
      }
      lVar36 = 0;
      lVar27 = 0;
      iVar21 = param_4[0x22];
      iVar16 = 1;
      while (uVar9 = lVar27 == iVar21, lVar27 < iVar21) {
        lVar33 = 0;
        piStack_f0 = (int *)(*(long *)(param_4 + 0x16) + lVar27 * 0x28);
        for (lVar32 = 0; lVar32 < param_4[0x24]; lVar32 = lVar32 + 1) {
          apiStack_160[0] = (int *)(*(long *)(param_4 + 0x1a) + lVar33);
          if ((*(int *)(*(long *)(param_4 + 0x1a) + lVar33) < piStack_f0[1]) &&
             (*piStack_f0 < apiStack_160[0][1])) {
            func_0x006753e0(*(undefined8 *)(param_4 + 2));
            ppiStack_c0 = &piStack_f0;
            ppiStack_b8 = apiStack_160;
            func_0x00674e94();
            FUN_0065ad28();
          }
          lVar33 = lVar33 + 8;
        }
        lVar27 = lVar27 + 1;
        lVar32 = lVar36;
        for (iVar17 = iVar16; iVar21 = param_4[0x22], iVar17 < iVar21; iVar17 = iVar17 + 1) {
          apiStack_160[0] = (int *)(*(long *)(param_4 + 0x16) + lVar32 + 0x28);
          if ((*apiStack_160[0] < piStack_f0[1]) &&
             (*piStack_f0 < *(int *)(*(long *)(param_4 + 0x16) + lVar32 + 0x2c))) {
            func_0x006753e0(*(undefined8 *)(param_4 + 2));
            ppiStack_c0 = apiStack_160;
            ppiStack_b8 = &piStack_f0;
            func_0x00674e94();
            func_0x00675360();
          }
          lVar32 = lVar32 + 0x28;
        }
        lVar36 = lVar36 + 0x28;
        iVar16 = iVar16 + 1;
      }
      func_0x00676078();
    }
    *(int *)(unaff_x19 + 0x2a) = *(int *)(unaff_x19 + 0x2a) + 1;
    func_0x00674120(uStack_90);
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*param_5 == 0) {
      func_0x00674350();
      func_0x006745b8(&piStack_148);
      goto LAB_00660238;
    }
    ppiVar40 = (int **)param_2[0x1c];
    lVar27 = param_5[5];
    iVar16 = *(int *)((long)param_5 + 0xbc);
    uVar3 = iVar16 + 1;
    uVar18 = (ulong)uVar3;
    *(uint *)((long)param_5 + 0xbc) = uVar3;
    ppiVar15 = (int **)(ulong)*(uint *)((long)param_5 + 0x84);
    func_0x00674520();
    if (uVar18 == 0) {
      ppiVar38 = ppiVar40;
      FUN_0067b018();
      piVar14 = piStack_178;
      if (((ulong)ppiVar38 & 1) == 0) {
        piStack_148 = piVar19;
        puStack_140 = puVar22;
        func_0x00674500();
        piStack_f0 = piVar19;
        puStack_e8 = puVar22;
        ppiStack_c0 = ppiVar38;
        ppiStack_b8 = ppiVar15;
        func_0x00674ca4();
        func_0x0067573c();
        func_0x00675748();
        func_0x00675db0();
        goto LAB_0065fc84;
      }
      FUN_0054a274(&piStack_148,ppiVar40);
      ppuVar28 = (undefined **)(lVar27 + (long)iVar16 * 0x58);
      func_0x00675264();
      uVar2 = extraout_x11_01;
      ppiVar15 = extraout_x10_01;
      if (cVar7 == cVar6) {
        uVar2 = extraout_x8_08;
        ppiVar15 = extraout_x9_04;
      }
      func_0x006656a4(ppiVar15,uVar2,ppuVar28);
      func_0x00676904();
      if (0 < *(int *)(ppuVar28 + 7)) {
        ppiVar15 = &piStack_148;
        FUN_0066f1a4(ppiVar15,piVar19,puVar22,piVar19,puVar22,piStack_178,
                     (long)pqStack_170 - (long)piStack_178 >> 2,ppiVar40,ppuVar28);
        func_0x00675810();
        func_0x00676080();
      }
      if (((ulong)ppiVar40[1] & 1) == 0) {
        FUN_006a480c();
      }
      else {
        ppiVar15 = (int **)(((ulong)ppiVar40[1] & 0xfffffffffffffffe) + 8);
      }
      uVar9 = *ppiVar15 == ppiVar15[1];
      if (!(bool)uVar9) {
        piVar14 = unaff_x19[1];
        FUN_00654614(piVar14,"google.protobuf.MessageOptions",0x1e);
        func_0x00675120();
        if ((bool)uVar9) {
          func_0x006763ec();
          while ((long)puVar22 < (long)(int)((ulong)((long)ppiVar15[1] - (long)*ppiVar15) >> 4)) {
            FUN_0066bfcc(*(undefined8 *)*unaff_x19);
            piVar19 = *unaff_x19;
            func_0x006757f4();
            FUN_00655ef4();
            if (piVar19 != (int *)0x0) {
              piStack_148 = *(int **)(piVar19 + 4);
              func_0x006756a4();
            }
            func_0x00676b2c();
          }
        }
      }
      goto LAB_0065fc8c;
    }
  }
  func_0x00674560();
LAB_00660238:
  do {
    FUN_005558a0(&piStack_148);
LAB_00660240:
    func_0x00675198();
    FUN_00533884(&ppiStack_c0);
    func_0x00674bbc();
    func_0x00676490(&piStack_148);
  } while( true );
}



/* Entry: 006603cc; end: 00660fdb;  */

void FUN_006603cc(long *param_1,long param_2,undefined8 ****param_3,undefined8 *****param_4,
                 undefined8 *****param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 in_ZR;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  ulong uVar14;
  int extraout_w8;
  int extraout_w8_00;
  int iVar15;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long lVar16;
  undefined8 ***pppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 extraout_x8_01;
  undefined8 *****extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 ****extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  undefined8 *******extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  ulong extraout_x9;
  long *extraout_x9_00;
  undefined8 ***pppuVar19;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x9_04;
  long *extraout_x10;
  undefined8 ****ppppuVar20;
  long lVar21;
  undefined8 *******extraout_x10_00;
  undefined8 *******extraout_x10_01;
  long *extraout_x10_02;
  undefined8 *******extraout_x10_03;
  long *extraout_x10_04;
  ulong uVar22;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long *plVar23;
  undefined **ppuVar24;
  long lVar25;
  undefined8 *******pppppppuVar26;
  int iVar27;
  undefined8 ******ppppppuVar28;
  int iVar29;
  undefined8 *******pppppppuVar30;
  undefined4 auStack_188 [6];
  undefined8 *****pppppuStack_170;
  undefined8 ****ppppuStack_168;
  undefined4 uStack_15c;
  long lStack_158;
  long lStack_150;
  undefined8 ******ppppppuStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 ******ppppppuStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 uStack_110;
  undefined8 ******ppppppuStack_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 ******ppppppuStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_70;
  
  ppppuVar20 = param_3;
  func_0x006743c8();
  if (ppppuVar20 == (undefined8 ****)0x0) {
    ppppuVar20 = *(undefined8 *****)(param_1[0x15] + 0x10);
  }
  else {
    ppppuVar20 = (undefined8 ****)(param_3[1] + 3);
  }
  uStack_70 = extraout_x8;
  FUN_00661344(ppppuVar20,*(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc,param_5);
  param_4[1] = ppppuVar20;
  func_0x00675e80(*(undefined8 *)(param_2 + 0x60));
  FUN_0065c320(param_1);
  param_4[2] = (undefined8 ****)param_1[0x15];
  param_4[3] = param_3;
  *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) & 0xfc;
  if (*(int *)(param_2 + 0x20) == 0) {
    func_0x00674d1c(param_4[1]);
    func_0x00674d90();
  }
  plVar23 = (long *)(param_2 + 0x18);
  func_0x00675578(0);
  uVar22 = extraout_x8_00;
  plVar11 = extraout_x10;
  plVar1 = plVar23;
  if (!(bool)in_ZR) {
    plVar1 = extraout_x10;
  }
  for (; uVar22 < 0xffff && (long)uVar22 < (long)*(int *)(param_2 + 0x20); uVar22 = uVar22 + 1) {
    plVar2 = plVar23;
    if ((extraout_x9 & 1) != 0) {
      plVar2 = plVar11;
    }
    if (uVar22 + (long)*(int *)(*plVar1 + 0x28) != (long)*(int *)(*plVar2 + 0x28)) break;
    *(short *)((long)param_4 + 2) = (short)uVar22;
    plVar11 = plVar11 + 1;
  }
  *(int *)((long)param_4 + 4) = *(int *)(param_2 + 0x20);
  pppppuVar18 = param_5;
  FUN_0065bee4();
  lVar25 = 0;
  param_4[7] = pppppuVar18;
  while( true ) {
    lVar16 = (long)*(int *)(param_2 + 0x20);
    cVar5 = SBORROW8(lVar25,lVar16);
    cVar6 = lVar25 - lVar16 < 0;
    bVar7 = lVar25 == lVar16;
    if (lVar16 <= lVar25) break;
    func_0x00674f70(*plVar23);
    plVar11 = plVar23;
    if (!bVar7) {
      plVar11 = extraout_x9_00;
    }
    lVar16 = *plVar11;
    ppppppuVar28 = (undefined8 ******)(param_4[7] + lVar25 * 6);
    pppppuStack_170 = ppppppuVar28;
    ppppuStack_168 = param_4;
    func_0x00676ad8();
    ppppuVar20 = param_4[1];
    pppuVar17 = (undefined8 ***)(long)*(char *)((long)ppppuVar20 + 0x2f);
    if ((long)pppuVar17 < 0) {
      pppuVar17 = ppppuVar20[4];
    }
    pppuVar19 = (undefined8 ***)(long)*(char *)((long)ppppuVar20 + 0x17);
    if ((long)pppuVar19 < 0) {
      pppuVar19 = ppppuVar20[1];
    }
    uVar22 = *(ulong *)(lVar16 + 0x18) & 0xfffffffffffffffc;
    lVar21 = (long)*(char *)(uVar22 + 0x17);
    if (lVar21 < 0) {
      lVar21 = *(long *)(uVar22 + 8);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (auStack_188,lVar21 + ((long)pppuVar17 - (long)pppuVar19));
    ppppuVar20 = param_4[1] + 3;
    if (*(char *)((long)param_4[1] + 0x2f) < '\0') {
      ppppuVar20 = (undefined8 ****)*ppppuVar20;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_188,ppppuVar20,(long)pppuVar17 - (long)pppuVar19);
    FUN_004bab3c(auStack_188,*(ulong *)(lVar16 + 0x18) & 0xfffffffffffffffc);
    pppppuVar18 = param_5;
    FUN_0066143c(param_5,*(ulong *)(lVar16 + 0x18) & 0xfffffffffffffffc,auStack_188);
    ppppppuVar28[1] = pppppuVar18;
    *(undefined4 *)((long)ppppppuVar28 + 4) = *(undefined4 *)(lVar16 + 0x28);
    ppppppuVar28[2] = param_4;
    func_0x00675e80(*(undefined8 *)(lVar16 + 0x18));
    FUN_0065c320(param_1);
    uStack_15c = 3;
    func_0x00676aac();
    func_0x00659b9c(ppppppuVar28,&lStack_158);
    plVar11 = &lStack_158;
    FUN_0053ad70(plVar11,&uStack_15c);
    lVar4 = lStack_150;
    lVar21 = lStack_158;
    uVar9 = (uint)plVar11;
    pppppuVar18 = ppppppuVar28[1];
    pppppppuVar30 = (undefined8 *******)(long)*(char *)((long)pppppuVar18 + 0x2f);
    if ((long)pppppppuVar30 < 0) {
      pppppppuVar12 = (undefined8 *******)pppppuVar18[3];
      pppppppuVar30 = (undefined8 *******)pppppuVar18[4];
    }
    else {
      pppppppuVar12 = (undefined8 *******)(pppppuVar18 + 3);
    }
    ppuVar24 = &PTR_PTR_00b25f08;
    if ((*(byte *)(lVar16 + 0x10) >> 1 & 1) != 0) {
      if (*param_5 == (undefined8 ****)0x0) {
        func_0x00674350();
        func_0x006745b8(&ppppppuStack_128);
        goto LAB_00660e78;
      }
      pppppppuVar26 = *(undefined8 ********)(lVar16 + 0x20);
      ppppuVar20 = param_5[8];
      iVar27 = *(int *)(param_5 + 0x19);
      uVar22 = (ulong)(iVar27 + 1U);
      *(uint *)(param_5 + 0x19) = iVar27 + 1U;
      uVar14 = (ulong)*(uint *)(param_5 + 0x12);
      func_0x00674520();
      if (uVar22 != 0) {
        func_0x00674bbc();
        func_0x00674e50(&ppppppuStack_128);
        goto LAB_00660e78;
      }
      pppppppuVar13 = pppppppuVar26;
      FUN_0067c5f4();
      if (((ulong)pppppppuVar13 & 1) == 0) {
        ppppppuStack_128 = pppppppuVar12;
        ppppppuStack_120 = pppppppuVar30;
        func_0x00674500();
        ppppppuStack_d0 = pppppppuVar12;
        ppppppuStack_c8 = pppppppuVar30;
        ppppppuStack_a0 = pppppppuVar13;
        uStack_98 = uVar14;
        func_0x00675030(&ppppppuStack_140);
        plVar11 = param_1;
        func_0x00674814(param_1,&ppppppuStack_140,pppppppuVar26);
        uVar9 = (uint)plVar11;
        func_0x00675684();
        ppuVar24 = &PTR_PTR_00b25f08;
      }
      else {
        func_0x006765ac();
        ppuVar24 = (undefined **)(ppppuVar20 + (long)iVar27 * 0xc);
        func_0x00676a78();
        uVar3 = extraout_x11;
        pppppppuVar13 = extraout_x10_00;
        if (cVar6 == cVar5) {
          uVar3 = extraout_x8_01;
          pppppppuVar13 = &ppppppuStack_128;
        }
        func_0x006656a4(pppppppuVar13,uVar3,ppuVar24);
        uVar9 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        uVar8 = *(int *)(ppuVar24 + 7) == 1;
        if (0 < *(int *)(ppuVar24 + 7)) {
          pppppppuVar13 = &ppppppuStack_128;
          FUN_0066f1a4(pppppppuVar13,pppppppuVar12,pppppppuVar30,pppppppuVar12,pppppppuVar30,lVar21,
                       lVar4 - lVar21 >> 2,pppppppuVar26,ppuVar24);
          uVar9 = (uint)pppppppuVar13;
          func_0x00676590();
          func_0x00675da8();
        }
        if (((ulong)pppppppuVar26[1] & 1) == 0) {
          FUN_006a480c();
        }
        else {
          func_0x006762e4();
        }
        func_0x00676398();
        if (!(bool)uVar8) {
          lVar21 = param_1[1];
          FUN_00654614(lVar21,"google.protobuf.EnumValueOptions",0x20);
          func_0x00675120();
          uVar9 = (uint)lVar21;
          if ((bool)uVar8) {
            func_0x006763ec();
            while( true ) {
              uVar9 = (uint)lVar21;
              func_0x00675234();
              if (extraout_w8 <= iVar27) break;
              func_0x00675970();
              FUN_0066bfcc();
              lVar21 = *param_1;
              func_0x006757f4();
              FUN_00655ef4();
              if (lVar21 != 0) {
                ppppppuStack_128 = *(undefined8 *******)(lVar21 + 0x10);
                func_0x00676584();
              }
              func_0x00676b2c();
            }
          }
        }
      }
    }
    ppppppuVar28[3] = (undefined8 *****)ppuVar24;
    func_0x00674eec();
    ppppppuVar28[4] = extraout_x8_02;
    ppppppuVar28[5] = extraout_x8_02;
    func_0x00676088();
    *(undefined1 *)ppppppuVar28 = 5;
    func_0x00674d1c(ppppppuVar28[1]);
    FUN_0065c040();
    uVar10 = (uint)param_1[0x16];
    *(undefined1 *)((long)ppppppuVar28 + 1) = 6;
    FUN_00654d9c();
    if (((uVar9 | uVar10 ^ 1) & 1) == 0) {
      ppppppuStack_140 = (undefined8 *******)0x0;
      uStack_138 = 0;
      uStack_130 = 0;
      if (param_4[3] == (undefined8 ****)0x0) {
        pppppppuVar30 = *(undefined8 ********)(param_1[0x15] + 0x10);
      }
      else {
        pppppppuVar30 = (undefined8 *******)(param_4[3][1] + 3);
      }
      pppppppuVar12 = &ppppppuStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      uVar22 = uStack_138;
      if (-1 < (long)uStack_130) {
        uVar22 = uStack_130 >> 0x38;
      }
      if (uVar22 == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                  (&ppppppuStack_140,&UNK_00910a1f);
      }
      else {
        func_0x0067690c();
        uStack_98 = uStack_138;
        ppppppuStack_a0 = ppppppuStack_140;
        if (-1 < (long)uStack_130) {
          uStack_98 = uStack_130 >> 0x38;
          ppppppuStack_a0 = &ppppppuStack_140;
        }
        ppppppuStack_128 = pppppppuVar12;
        ppppppuStack_120 = pppppppuVar30;
        func_0x0067690c();
        ppppppuStack_d0 = pppppppuVar12;
        ppppppuStack_c8 = pppppppuVar30;
        func_0x00675030(&lStack_158);
        FUN_004575b8(&ppppppuStack_140,&lStack_158);
        func_0x006758a0();
      }
      ppppppuStack_128 = &pppppuStack_170;
      ppppppuStack_120 = &ppppppuStack_140;
      ppppuStack_118 = &ppppuStack_168;
      FUN_0065ad28(param_1,ppppppuVar28[1] + 3,lVar16,0,&ppppppuStack_128,FUN_00671b08);
      func_0x00675684();
      ppppppuVar28 = (undefined8 ******)pppppuStack_170;
    }
    iVar27 = *(int *)((long)ppppppuVar28[2][7] + 4);
    if ((*(int *)((long)ppppppuVar28 + 4) < iVar27) ||
       ((long)*(short *)((long)ppppppuVar28[2] + 2) + (long)iVar27 <
        (long)*(int *)((long)ppppppuVar28 + 4))) {
      func_0x00654fac(&ppppppuStack_128,param_1[0x16] + 0x58,ppppppuVar28);
    }
    func_0x00675408();
    lVar25 = lVar25 + 1;
  }
  iVar27 = *(int *)(param_2 + 0x38);
  *(int *)(param_4 + 8) = iVar27;
  ppppuVar20 = *param_5;
  if (ppppuVar20 == (undefined8 ****)0x0) goto LAB_00660e80;
  iVar29 = *(int *)(param_5 + 0x15);
  uVar9 = iVar29 + iVar27 * 8;
  uVar22 = (ulong)uVar9;
  *(uint *)(param_5 + 0x15) = uVar9;
  func_0x00674520(uVar22,*(undefined4 *)(param_5 + 0xe));
  if (uVar22 != 0) {
    func_0x00533528();
    func_0x006753b0();
    func_0x00674bbc();
    func_0x00674e50(&ppppppuStack_128);
    goto LAB_00660e78;
  }
  lVar16 = 0;
  param_4[9] = (undefined8 ****)((long)ppppuVar20 + (long)iVar29);
  plVar11 = (long *)(param_2 + 0x30);
  for (lVar25 = 0; bVar7 = lVar25 == *(int *)(param_2 + 0x38), lVar25 < *(int *)(param_2 + 0x38);
      lVar25 = lVar25 + 1) {
    func_0x00674f70(*plVar11);
    plVar1 = plVar11;
    if (!bVar7) {
      plVar1 = extraout_x9_01;
    }
    lVar21 = *plVar1;
    ppppuVar20 = param_4[9];
    iVar27 = *(int *)(lVar21 + 0x18);
    *(int *)((long)ppppuVar20 + lVar16) = iVar27;
    iVar29 = *(int *)(lVar21 + 0x1c);
    ((int *)((long)ppppuVar20 + lVar16))[1] = iVar29;
    if (iVar29 < iVar27) {
      func_0x00674d1c(param_4[1]);
      FUN_0065ae94();
    }
    lVar16 = lVar16 + 8;
  }
  uVar9 = *(uint *)(param_2 + 0x50);
  *(uint *)((long)param_4 + 0x44) = uVar9;
  pppppuVar18 = param_5;
  FUN_006614a0(param_5,uVar9);
  param_4[10] = pppppuVar18;
  plVar1 = (long *)(param_2 + 0x48);
  lVar25 = (ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) * 8;
  lVar16 = 0;
  while( true ) {
    cVar5 = SBORROW8(lVar25,lVar16);
    cVar6 = lVar25 - lVar16 < 0;
    bVar7 = lVar25 == lVar16;
    if (bVar7) break;
    func_0x00675108(*plVar1);
    plVar23 = plVar1;
    if (!bVar7) {
      plVar23 = extraout_x9_02;
    }
    pppppuVar18 = param_5;
    FUN_0065efd0(param_5,*plVar23);
    *(undefined8 ******)((long)param_4[10] + lVar16) = pppppuVar18;
    lVar16 = lVar16 + 8;
  }
  auStack_188[0] = 3;
  func_0x00676aac();
  func_0x00659afc(param_4,&lStack_158);
  FUN_0053ad70(&lStack_158,auStack_188);
  ppppuVar20 = param_4[1];
  pppppppuVar30 = (undefined8 *******)(long)*(char *)((long)ppppuVar20 + 0x2f);
  if ((long)pppppppuVar30 < 0) {
    pppppppuVar12 = (undefined8 *******)ppppuVar20[3];
    pppppppuVar30 = (undefined8 *******)ppppuVar20[4];
  }
  else {
    pppppppuVar12 = (undefined8 *******)(ppppuVar20 + 3);
  }
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
LAB_00660bd4:
    ppuVar24 = &PTR_PTR_00b25f68;
LAB_00660bdc:
    param_4[4] = (undefined8 ****)ppuVar24;
    func_0x00674eec();
    param_4[5] = extraout_x8_04;
    param_4[6] = extraout_x8_04;
    func_0x00676088();
    *(undefined1 *)param_4 = 4;
    func_0x00674d1c(param_4[1]);
    FUN_0065c040();
    uVar22 = (ulong)*(uint *)(param_2 + 0x38);
    iVar27 = 1;
    for (lVar25 = 0; uVar8 = lVar25 == (int)uVar22, lVar25 < (int)uVar22; lVar25 = lVar25 + 1) {
      func_0x006753e0();
      plVar23 = plVar11;
      if (!(bool)uVar8) {
        plVar23 = extraout_x10_02;
      }
      pppppppuVar30 = (undefined8 *******)*plVar23;
      uVar22 = extraout_x8_05;
      iVar29 = iVar27;
      while( true ) {
        iVar15 = (int)uVar22;
        cVar5 = SBORROW4(iVar15,iVar29);
        cVar6 = iVar15 - iVar29 < 0;
        if (iVar15 <= iVar29) break;
        func_0x00674d10();
        func_0x00676320();
        uVar22 = extraout_x8_06;
        if ((cVar6 == cVar5) &&
           (*(int *)(pppppppuVar30 + 3) <= *(int *)((long)extraout_x10_03 + 0x1c))) {
          plVar23 = plVar11;
          if ((extraout_x9_03 & 1) != 0) {
            plVar23 = (long *)(extraout_x9_03 + 7 + lVar25 * 8);
          }
          ppppppuStack_128 = extraout_x10_03;
          ppppppuStack_120 = pppppppuVar30;
          func_0x00675360(param_1,param_4[1] + 3,*plVar23,1,&ppppppuStack_128);
          uVar22 = (ulong)*(uint *)(param_2 + 0x38);
        }
        iVar29 = iVar29 + 1;
      }
      iVar27 = iVar27 + 1;
    }
    func_0x00674868();
    ppppppuStack_120 = (undefined8 *******)0x0;
    ppppuStack_118 = (undefined8 *****)0x0;
    uStack_110 = 0;
    ppppppuStack_128 = extraout_x8_07;
    func_0x00675590(*(undefined8 *)(param_2 + 0x48));
    if (!(bool)uVar8) {
      plVar1 = extraout_x9_04;
    }
    for (lVar25 = (long)*(int *)(param_2 + 0x50) << 3; lVar25 != 0; lVar25 = lVar25 + -8) {
      pppppppuVar30 = (undefined8 *******)*plVar1;
      FUN_0066f694(&ppppppuStack_a0,&ppppppuStack_128,pppppppuVar30);
      if ((bStack_90 & 1) == 0) {
        ppppppuStack_a0 = pppppppuVar30;
        func_0x00674b38(param_1,pppppppuVar30,param_2);
      }
      plVar1 = plVar1 + 1;
    }
    for (lVar25 = 0; uVar8 = lVar25 == *(int *)((long)param_4 + 4),
        lVar25 < *(int *)((long)param_4 + 4); lVar25 = lVar25 + 1) {
      lVar21 = 0;
      ppppppuStack_a0 = (undefined8 ******)(param_4[7] + lVar25 * 6);
      for (lVar16 = 0; lVar16 < *(int *)(param_4 + 8); lVar16 = lVar16 + 1) {
        iVar27 = *(int *)((long)ppppppuStack_a0 + 4);
        if ((*(int *)((long)param_4[9] + lVar21) <= iVar27) &&
           (iVar29 = *(int *)((long)param_4[9] + lVar21 + 4), bVar7 = iVar27 == iVar29,
           iVar27 <= iVar29)) {
          func_0x006753e0(ppppppuStack_a0[1]);
          plVar1 = plVar11;
          if (!bVar7) {
            plVar1 = extraout_x10_04;
          }
          ppppppuStack_d0 = &ppppppuStack_a0;
          FUN_0065ad28(param_1,extraout_x8_08 + 0x18,*plVar1,1,&ppppppuStack_d0,FUN_00671a84);
        }
        lVar21 = lVar21 + 8;
      }
      pppppppuVar30 = &ppppppuStack_128;
      FUN_006615b4(pppppppuVar30,ppppppuStack_a0[1]);
      if ((int)pppppppuVar30 != 0) {
        func_0x0067461c(ppppppuStack_a0[1]);
        ppppppuStack_d0 = &ppppppuStack_a0;
        func_0x00674b38(param_1,extraout_x8_09 + 0x18);
      }
    }
    func_0x00669788(&ppppppuStack_128);
    func_0x00674120(uStack_70);
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*param_5 == (undefined8 ****)0x0) {
      func_0x00674350();
      func_0x006745b8(&ppppppuStack_128);
      goto LAB_00660e78;
    }
    pppppppuVar26 = *(undefined8 ********)(param_2 + 0x68);
    ppppuVar20 = param_5[7];
    iVar27 = *(int *)((long)param_5 + 0xc4);
    uVar9 = iVar27 + 1;
    uVar22 = (ulong)uVar9;
    *(uint *)((long)param_5 + 0xc4) = uVar9;
    uVar14 = (ulong)*(uint *)((long)param_5 + 0x8c);
    func_0x00674520();
    if (uVar22 == 0) {
      pppppppuVar13 = pppppppuVar26;
      FUN_0067c298();
      if (((ulong)pppppppuVar13 & 1) == 0) {
        ppppppuStack_128 = pppppppuVar12;
        ppppppuStack_120 = pppppppuVar30;
        func_0x00674500();
        ppppppuStack_d0 = pppppppuVar12;
        ppppppuStack_c8 = pppppppuVar30;
        ppppppuStack_a0 = pppppppuVar13;
        uStack_98 = uVar14;
        func_0x00675030(&ppppppuStack_140);
        func_0x0067573c();
        func_0x00675748(param_1,&ppppppuStack_140,pppppppuVar26);
        func_0x00675684();
        goto LAB_00660bd4;
      }
      func_0x006765ac();
      ppuVar24 = (undefined **)(ppppuVar20 + (long)iVar27 * 0xb);
      func_0x00676a78();
      uVar3 = extraout_x11_00;
      pppppppuVar30 = extraout_x10_01;
      if (cVar6 == cVar5) {
        uVar3 = extraout_x8_03;
        pppppppuVar30 = &ppppppuStack_128;
      }
      func_0x006656a4(pppppppuVar30,uVar3,ppuVar24);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_128);
      uVar8 = *(int *)(ppuVar24 + 7) == 1;
      if (0 < *(int *)(ppuVar24 + 7)) {
        func_0x00675550(&ppppppuStack_128);
        func_0x00676590();
        func_0x00675da8();
      }
      if (((ulong)pppppppuVar26[1] & 1) == 0) {
        FUN_006a480c();
      }
      else {
        func_0x006762e4();
      }
      func_0x00676398();
      if (!(bool)uVar8) {
        lVar25 = param_1[1];
        FUN_00654614(lVar25,"google.protobuf.EnumOptions",0x1b);
        func_0x00675120();
        if ((bool)uVar8) {
          func_0x006763ec();
          while (func_0x00675234(), (long)pppppppuVar12 < (long)extraout_w8_00) {
            func_0x00675970();
            FUN_0066bfcc();
            func_0x006763f8();
            FUN_00655ef4();
            if (lVar25 != 0) {
              ppppppuStack_128 = *(undefined8 *******)(lVar25 + 0x10);
              func_0x00676584();
            }
            func_0x00676b2c();
          }
        }
      }
      goto LAB_00660bdc;
    }
  }
  func_0x00674bbc();
  func_0x00674e50(&ppppppuStack_128);
LAB_00660e78:
  do {
    FUN_005558a0(&ppppppuStack_128);
LAB_00660e80:
    func_0x00675198();
    FUN_00533884(&ppppppuStack_a0);
    func_0x00674bbc();
    func_0x00676490(&ppppppuStack_128);
  } while( true );
}



/* Entry: 00660fdc; end: 00661033;  */

long FUN_00660fdc(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x006743f8();
    func_0x0067424c();
    goto LAB_00661020;
  }
  lVar1 = param_1[0x15];
  func_0x00674200((int)lVar1 + param_2 * 0x58);
  if (param_1 == (long *)0x0) {
    return lVar2 + (int)lVar1;
  }
  do {
    func_0x00533528();
    func_0x0067427c();
LAB_00661020:
    FUN_00776794();
    func_0x00674d28();
  } while( true );
}



/* Entry: 00661034; end: 0066103f;  */

/* WARNING: Removing unreachable block (ram,0x00661d38) */
/* WARNING: Removing unreachable block (ram,0x00661e98) */
/* WARNING: Removing unreachable block (ram,0x00661ea0) */
/* WARNING: Removing unreachable block (ram,0x00661eac) */
/* WARNING: Removing unreachable block (ram,0x00661eb8) */
/* WARNING: Removing unreachable block (ram,0x00661f8c) */
/* WARNING: Removing unreachable block (ram,0x00661f94) */
/* WARNING: Removing unreachable block (ram,0x00661fb0) */
/* WARNING: Removing unreachable block (ram,0x00661fbc) */
/* WARNING: Removing unreachable block (ram,0x00661fc4) */
/* WARNING: Removing unreachable block (ram,0x00661fd0) */
/* WARNING: Removing unreachable block (ram,0x00662044) */

void FUN_00661034(char *param_1,char *param_2,ulong param_3,long param_4,long *param_5,long *param_6
                 )

{
  undefined8 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar14;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  byte extraout_w9;
  byte extraout_w9_00;
  byte extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  undefined4 uVar15;
  byte bVar16;
  char *extraout_x10;
  undefined1 *extraout_x10_00;
  ulong extraout_x11;
  undefined8 extraout_x11_00;
  long unaff_x19;
  long *unaff_x20;
  undefined **unaff_x21;
  char *pcVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  char *unaff_x26;
  undefined4 auStack_188 [7];
  undefined1 uStack_169;
  char *pcStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long *in_stack_fffffffffffffec8;
  ulong uStack_130;
  char *pcStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  char *pcStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_78;
  
  plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
  func_0x00674c64();
  func_0x006743c8();
  if (param_4 == 0) {
    plVar10 = *(long **)(unaff_x20[0x15] + 0x10);
  }
  else {
    plVar10 = (long *)(*(long *)(param_4 + 8) + 0x18);
  }
  uStack_78 = extraout_x8;
  if (*param_6 == 0) {
    func_0x00675198();
    func_0x006764c0();
    func_0x00674bbc();
    FUN_00776794(&stack0xfffffffffffffec8);
    goto LAB_006625b0;
  }
  pcVar17 = (char *)(*(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc);
  uVar13 = *(uint *)(unaff_x19 + 0x10);
  unaff_x26 = (char *)(ulong)uVar13;
  uVar19 = *(ulong *)(unaff_x19 + 0x38);
  bVar16 = *(byte *)((long)plVar10 + 0x17);
  uVar20 = plVar10[1];
  if (-1 < (char)bVar16) {
    uVar20 = (ulong)bVar16;
  }
  if (uVar20 == 0) {
    func_0x00675e60(&pcStack_150);
  }
  else {
    cVar5 = (char)bVar16 < '\0';
    cVar4 = '\0';
    in_stack_fffffffffffffec8 = (long *)*plVar10;
    if (!(bool)cVar5) {
      in_stack_fffffffffffffec8 = plVar10;
    }
    func_0x00674500();
    pcStack_b0 = param_2;
    uStack_a8 = param_3;
    func_0x006769f8();
    pcStack_e0 = extraout_x10;
    uStack_d8 = extraout_x11;
    if (cVar5 == cVar4) {
      pcStack_e0 = pcVar17;
      uStack_d8 = extraout_x8_00;
    }
    func_0x00675b70();
    uStack_130 = uVar20;
  }
  uVar19 = uVar19 & 0xfffffffffffffffc;
  bVar6 = (uVar13 & 0x10) != 0;
  plVar11 = param_6;
  if (bVar6 && uVar19 != 0) {
LAB_00661bac:
    func_0x00676aac();
    FUN_00479520(&stack0xfffffffffffffec8,pcVar17);
    func_0x0045a4f0(&stack0xfffffffffffffec8,&pcStack_150);
    func_0x00675e60(&pcStack_b0);
    func_0x00570864();
    param_1 = pcStack_b0;
    uStack_d8 = uStack_a8;
    pcStack_e0 = pcStack_b0;
    uStack_d0 = uStack_a0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    pcStack_b0 = (char *)0x0;
    puVar7 = &stack0xfffffffffffffec8;
    FUN_006716b4(puVar7,&pcStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_e0);
    func_0x00675d74();
    unaff_x26 = &stack0xfffffffffffffec8;
    FUN_006716b4(unaff_x26,&pcStack_168);
    func_0x00675408();
    if (bVar6 && uVar19 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_188,uVar19);
    }
    else {
      FUN_0066460c(auStack_188,pcVar17);
    }
    puVar8 = &stack0xfffffffffffffec8;
    FUN_006716b4(puVar8,auStack_188);
    func_0x00674d80();
    func_0x006671cc(param_6,(long)(uStack_130 - (long)in_stack_fffffffffffffec8) / 0x18);
    FUN_00644958(&uStack_169,in_stack_fffffffffffffec8,uStack_130,plVar11);
    func_0x00675d1c();
    func_0x00459128(&stack0xfffffffffffffec8);
    bVar16 = (byte)puVar7 & 3;
    bVar21 = (byte)(((uint)unaff_x26 & 3) << 2);
    unaff_x21 = (undefined **)(ulong)(((uint)puVar8 & 7) << 4);
  }
  else {
    pcVar18 = pcVar17;
    FUN_00668cb8();
    if ((int)pcVar18 == 0) {
      FUN_0066143c(param_6,pcVar17,&pcStack_150);
      unaff_x21 = (undefined **)0x0;
      bVar21 = 0;
      bVar16 = 0;
    }
    else {
      if ((int)pcVar18 != 1) goto LAB_00661bac;
      func_0x00675d74();
      func_0x006671cc(param_6,3);
      func_0x00675e60(&stack0xfffffffffffffec8);
      FUN_004575b8(plVar11,&stack0xfffffffffffffec8);
      uStack_a8 = uStack_148;
      pcStack_b0 = pcStack_150;
      uStack_a0 = uStack_140;
      pcStack_150 = (char *)0x0;
      uStack_148 = 0;
      uStack_140 = 0;
      FUN_004575b8(plVar11 + 3,&pcStack_b0);
      uStack_d8 = uStack_160;
      pcStack_e0 = pcStack_168;
      uStack_d0 = uStack_158;
      param_1 = pcStack_168;
      func_0x00676ad8();
      FUN_004575b8(plVar11 + 6,&pcStack_e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_e0);
      func_0x00675d1c();
      func_0x006758a0();
      func_0x00675408();
      bVar16 = 0;
      bVar21 = 8;
      unaff_x21 = (undefined **)0x20;
    }
  }
  func_0x00675adc();
  param_5[1] = (long)plVar11;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0xfc | bVar16;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0xf3 | bVar21;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0x8f | (byte)unaff_x21;
  func_0x00675e74(*(undefined8 *)(unaff_x19 + 0x18));
  plVar11 = unaff_x20;
  FUN_0065c320();
  param_5[2] = unaff_x20[0x15];
  *(undefined4 *)((long)param_5 + 4) = *(undefined4 *)(unaff_x19 + 0x48);
  *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) & 0xf7 | 8;
  func_0x006763e0();
  *(byte *)(extraout_x8_01 + 1) = extraout_w9 & 0xef;
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0xfd | *(char *)(unaff_x19 + 0x50) << 1;
  if ((*(char *)(unaff_x19 + 0x50) == '\x01') && (*(int *)(unaff_x20[0x15] + 0x20) != 999)) {
    func_0x00676034();
    func_0x00674658();
    FUN_0065ad28();
  }
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0xfb | *(byte *)(unaff_x19 + 0x10) >> 2 & 4;
  *(char *)((long)param_5 + 2) = (char)*(undefined4 *)(unaff_x19 + 0x58);
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0x3f | *(char *)(unaff_x19 + 0x54) << 6;
  func_0x006763e0();
  bVar16 = 0x20;
  if (extraout_w9_02 < 0xc0) {
    bVar16 = 0;
  }
  *(byte *)(extraout_x8_02 + 1) = bVar16 | (byte)extraout_w9_02 & 0xdf;
  func_0x006763e0();
  bVar16 = (byte)extraout_w9_03;
  lVar14 = extraout_x8_03;
  if ((extraout_w9_03 & 200) == 0x88) {
    func_0x00674658();
    FUN_0065ad28();
    func_0x006763e0();
    lVar14 = extraout_x8_04;
    bVar16 = extraout_w9_00;
  }
  *(undefined8 *)(lVar14 + 0x50) = 0;
  *(undefined8 *)(lVar14 + 0x18) = 0;
  *(undefined8 *)(lVar14 + 0x20) = 0;
  *(byte *)(lVar14 + 1) = bVar16 & 0xfe | (byte)(*(uint *)(unaff_x19 + 0x10) >> 3) & 1;
  uVar13 = *(uint *)(unaff_x19 + 0x10);
  if (((uVar13 >> 3 & 1) != 0) && ((*(byte *)((long)param_5 + 1) >> 5 & 1) != 0)) {
    func_0x0067447c(param_5[1]);
    func_0x00675b3c();
    uVar13 = *(uint *)(unaff_x19 + 0x10);
  }
  if ((uVar13 >> 10 & 1) == 0) goto LAB_00661e84;
  plVar11 = param_5;
  if ((uVar13 >> 3 & 1) == 0) {
    FUN_00656c60();
    switch((int)plVar11) {
    case 1:
    case 3:
    case 6:
      *(undefined4 *)(param_5 + 10) = 0;
      break;
    case 2:
    case 4:
    case 5:
    case 8:
      param_5[10] = 0;
      break;
    case 7:
      *(undefined1 *)(param_5 + 10) = 0;
      break;
    case 9:
      func_0x0048afa0();
      param_5[10] = (long)&DAT_00b69408;
      break;
    case 10:
      param_5[10] = 0;
    }
    goto LAB_00661e84;
  }
  pcStack_e0 = (char *)0x0;
  FUN_00656c60();
  switch((int)plVar11) {
  case 1:
    func_0x00674d98();
    if (extraout_w8 < 0) {
      plVar11 = (long *)*plVar11;
    }
    func_0x00676cc8();
    _strtol();
    goto code_r0x006622e0;
  case 2:
    func_0x00674d98();
    if (extraout_w8_03 < 0) {
      plVar11 = (long *)*plVar11;
    }
    func_0x00676cc8();
    _strtoll();
    goto code_r0x0066246c;
  case 3:
    func_0x00674d98();
    if (extraout_w8_01 < 0) {
      plVar11 = (long *)*plVar11;
    }
    func_0x00676cc8();
    _strtoul();
code_r0x006622e0:
    *(int *)(param_5 + 10) = (int)plVar11;
    break;
  case 4:
    func_0x00674d98();
    if (extraout_w8_02 < 0) {
      plVar11 = (long *)*plVar11;
    }
    func_0x00676cc8();
    _strtoull();
code_r0x0066246c:
    param_5[10] = (long)plVar11;
    break;
  case 5:
    func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
    if ((int)plVar11 == 0) {
      func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
      if ((int)plVar11 == 0) {
        func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
        if ((int)plVar11 == 0) {
          func_0x00674d98();
          if (extraout_w8_04 < 0) {
            plVar11 = (long *)*plVar11;
          }
          FUN_006ab238();
          param_5[10] = (long)param_1;
          break;
        }
        lVar14 = 0x7ff8000000000000;
      }
      else {
        lVar14 = -0x10000000000000;
      }
    }
    else {
      lVar14 = 0x7ff0000000000000;
    }
    param_5[10] = lVar14;
    break;
  case 6:
    func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
    uVar15 = SUB84(param_1,0);
    if ((int)plVar11 == 0) {
      func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
      if ((int)plVar11 == 0) {
        func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
        if ((int)plVar11 == 0) {
          func_0x00674d98();
          if (extraout_w8_05 < 0) {
            plVar11 = (long *)*plVar11;
          }
          FUN_006ab238();
          func_0x006ab1cc();
          *(undefined4 *)(param_5 + 10) = uVar15;
          break;
        }
        uVar15 = 0x7fc00000;
      }
      else {
        uVar15 = 0xff800000;
      }
    }
    else {
      uVar15 = 0x7f800000;
    }
    *(undefined4 *)(param_5 + 10) = uVar15;
    break;
  case 7:
    func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
    if ((int)plVar11 == 0) {
      func_0x00676bd8(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x006752bc();
      if ((int)plVar11 == 0) {
        func_0x0067447c(param_5[1]);
        func_0x00675b3c();
      }
      else {
        *(undefined1 *)(param_5 + 10) = 0;
      }
    }
    else {
      *(undefined1 *)(param_5 + 10) = 1;
    }
    break;
  case 8:
    param_5[10] = 0;
    break;
  case 9:
    plVar11 = param_5;
    FUN_006538b4();
    if ((int)plVar11 != 0xc) {
      plVar11 = param_6;
      FUN_0065efd0(param_6,*(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc);
      goto code_r0x0066246c;
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    pcStack_b0 = (char *)0x0;
    plVar10 = (long *)(*(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc);
    lVar14 = (long)*(char *)((long)plVar10 + 0x17);
    plVar11 = plVar10;
    if (lVar14 < 0) {
      plVar11 = (long *)*plVar10;
      lVar14 = plVar10[1];
    }
    FUN_00571d34(plVar11,lVar14,&pcStack_b0,0);
    if ((int)plVar11 == 0) {
      func_0x00676034();
      func_0x0067447c();
      func_0x00675b3c();
    }
    else {
      plVar10 = param_6;
      func_0x00675a20();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&stack0xfffffffffffffec8,&pcStack_b0);
      plVar11 = plVar10;
      FUN_004575b8(plVar10,&stack0xfffffffffffffec8);
      func_0x006758a0();
      param_5[10] = (long)plVar10;
    }
    func_0x00675d1c();
    break;
  case 10:
    func_0x00676034();
    func_0x0067447c();
    func_0x00675b3c();
    func_0x006763e0();
    *(byte *)(extraout_x8_08 + 1) = extraout_w9_01 & 0xfe;
    param_5[10] = 0;
    break;
  default:
    goto LAB_00661e84;
  }
  if (pcStack_e0 == (char *)0x0) goto LAB_00661e84;
  uVar20 = *(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc;
  cVar5 = *(char *)(uVar20 + 0x17);
  if (cVar5 < '\0') {
    if (*(long *)(uVar20 + 8) != 0) goto code_r0x0066255c;
  }
  else if (cVar5 != '\0') {
code_r0x0066255c:
    if (*pcStack_e0 == '\0') goto LAB_00661e84;
  }
  func_0x00676034();
  func_0x00674ac4();
  FUN_0065ad28();
LAB_00661e84:
  iVar2 = *(int *)((long)param_5 + 4);
  cVar5 = iVar2 < 0;
  in_ZR = iVar2 == 0;
  cVar4 = '\0';
  if (iVar2 < 1) {
    func_0x006767e0();
    func_0x006758e4();
    if (extraout_x8_05 == 0) {
      plVar11[1] = unaff_x19;
      *(undefined4 *)(plVar11 + 2) = 1;
    }
    func_0x00676034();
    func_0x0067447c();
    func_0x006765b8();
  }
  if ((*(byte *)(unaff_x19 + 0x10) >> 1 & 1) == 0) {
    func_0x0067447c(param_5[1]);
    func_0x00675fd0();
  }
  param_5[5] = param_4;
  if (*(char *)(unaff_x19 + 0x10) < '\0') {
    func_0x006742cc(param_5[1]);
  }
  auStack_188[0] = 8;
  func_0x00676ad8();
  func_0x00659a54(param_5,&pcStack_168);
  FUN_0053ad70(&pcStack_168,auStack_188);
  lVar14 = param_5[1];
  uVar20 = (ulong)*(char *)(lVar14 + 0x2f);
  if ((long)uVar20 < 0) {
    pcVar17 = *(char **)(lVar14 + 0x18);
    uVar20 = *(ulong *)(lVar14 + 0x20);
  }
  else {
    pcVar17 = (char *)(lVar14 + 0x18);
  }
  plVar11 = param_5;
  if ((*(byte *)(unaff_x19 + 0x10) >> 5 & 1) != 0) {
    if (*param_6 == 0) {
      func_0x00674350();
      func_0x006745b8(&stack0xfffffffffffffec8);
      goto LAB_006625b0;
    }
    pcVar18 = *(char **)(unaff_x19 + 0x40);
    lVar14 = param_6[6];
    iVar2 = (int)param_6[0x18];
    unaff_x21 = (undefined **)(long)iVar2;
    uVar19 = (ulong)(iVar2 + 1U);
    *(uint *)(param_6 + 0x18) = iVar2 + 1U;
    uVar12 = (ulong)*(uint *)(param_6 + 0x11);
    func_0x00674520();
    unaff_x26 = pcStack_168;
    if (uVar19 != 0) goto LAB_006625c4;
    pcVar9 = pcVar18;
    FUN_0067b8f0();
    if (((ulong)pcVar9 & 1) != 0) {
      FUN_0054a274(&stack0xfffffffffffffec8,pcVar18);
      unaff_x21 = (undefined **)(lVar14 + (long)iVar2 * 0x98);
      func_0x00676c74();
      uVar1 = extraout_x11_00;
      puVar7 = extraout_x10_00;
      if (cVar5 == cVar4) {
        uVar1 = extraout_x8_06;
        puVar7 = &stack0xfffffffffffffec8;
      }
      func_0x006656a4(puVar7,uVar1,unaff_x21);
      func_0x006758a0();
      in_ZR = *(int *)(unaff_x21 + 0xc) == 1;
      if (0 < *(int *)(unaff_x21 + 0xc)) {
        func_0x00675550(&stack0xfffffffffffffec8);
        FUN_0066f068(unaff_x20 + 0xe,&stack0xfffffffffffffec8);
        FUN_0066975c(&stack0xfffffffffffffec8);
      }
      if ((*(ulong *)(pcVar18 + 8) & 1) != 0) goto LAB_006625b8;
      FUN_006a480c();
      goto LAB_00662164;
    }
    func_0x00674500();
    pcStack_e0 = pcVar17;
    uStack_d8 = uVar20;
    pcStack_b0 = pcVar9;
    uStack_a8 = uVar12;
    func_0x00675b70();
    func_0x0067573c();
    func_0x00675748();
    func_0x00675adc();
  }
  unaff_x21 = &PTR_PTR_00b25dc8;
  uVar3 = in_ZR;
  while( true ) {
    in_ZR = uVar3;
    func_0x00674eec();
    plVar11[7] = (long)unaff_x21;
    plVar11[8] = extraout_x8_07;
    plVar11[9] = extraout_x8_07;
    func_0x0053b048(&pcStack_168);
    *(undefined1 *)param_5 = 2;
    func_0x0067447c(param_5[1]);
    FUN_0065c040();
    func_0x00674120(uStack_78);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_006625c4:
    func_0x00674bbc();
    func_0x00674e50(&stack0xfffffffffffffec8);
LAB_006625b0:
    FUN_005558a0(&stack0xfffffffffffffec8);
LAB_006625b8:
    func_0x006762e4();
LAB_00662164:
    func_0x00676398();
    uVar3 = in_ZR;
    if (!(bool)in_ZR) {
      plVar10 = (long *)unaff_x20[1];
      FUN_00654614(plVar10,"google.protobuf.FieldOptions",0x1c);
      func_0x00675120();
      uVar3 = 0;
      if ((bool)in_ZR) {
        func_0x006762c0();
        while( true ) {
          func_0x00675234();
          uVar3 = unaff_x26 == (char *)(long)extraout_w8_00;
          if ((long)extraout_w8_00 <= (long)unaff_x26) break;
          func_0x00675970();
          FUN_0066bfcc();
          func_0x006763f8();
          FUN_00655ef4();
          bVar6 = plVar10 != (long *)0x0;
          plVar10 = (long *)0x0;
          if (bVar6) {
            plVar10 = unaff_x20 + 0x1f;
            func_0x0065b318(plVar10,&stack0xfffffffffffffec8);
          }
          unaff_x26 = unaff_x26 + 1;
        }
      }
    }
  }
  return;
}



/* Entry: 00661040; end: 00661077;  */

void FUN_00661040(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    FUN_0066975c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 00661078; end: 00661343;  */

void FUN_00661078(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong extraout_x8;
  ulong uVar6;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long lVar7;
  ulong extraout_x8_02;
  ulong uVar8;
  ulong extraout_x14;
  long lVar9;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  long lVar10;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  
  func_0x00676db8();
  lVar9 = 0;
  lVar2 = param_1;
  lVar5 = param_3;
  func_0x00674868();
  in_stack_00000038 = 0;
  in_stack_00000040 = (undefined8 *)0x0;
  in_stack_00000048 = 0;
  lVar10 = lVar2;
  in_stack_00000030 = extraout_x8;
LAB_006610b8:
  if (*(int *)(param_2 + 0x80) <= lVar9) {
LAB_00661214:
    func_0x006761c8();
    for (; uVar1 = lVar9 == *(int *)(param_2 + 4), lVar9 < *(int *)(param_2 + 4); lVar9 = lVar9 + 1)
    {
      puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x38) + unaff_x24);
      func_0x0067661c();
      in_stack_00000018 = lVar10;
      in_stack_00000020 = puVar4;
      if ((lVar10 != 0) && (func_0x006751a4(*puVar4), (bool)uVar1)) {
        in_stack_00000028 = unaff_x25;
        func_0x006749a8(*(undefined8 *)(param_2 + 8));
      }
      unaff_x24 = unaff_x24 + 0x58;
    }
    func_0x006761c8();
    for (; uVar1 = lVar9 == *(int *)(param_2 + 0x84), lVar9 < *(int *)(param_2 + 0x84);
        lVar9 = lVar9 + 1) {
      puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x50) + unaff_x24);
      func_0x0067661c();
      in_stack_00000018 = lVar10;
      in_stack_00000020 = puVar4;
      if ((lVar10 != 0) && (func_0x006751a4(*puVar4), (bool)uVar1)) {
        in_stack_00000028 = unaff_x25;
        func_0x006749a8(*(undefined8 *)(param_2 + 8));
      }
      unaff_x24 = unaff_x24 + 0x58;
    }
    func_0x006761c8();
    for (; uVar1 = lVar9 == *(int *)(param_2 + 0x78), lVar9 < *(int *)(param_2 + 0x78);
        lVar9 = lVar9 + 1) {
      puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x40) + unaff_x24);
      func_0x0067661c();
      in_stack_00000018 = lVar10;
      in_stack_00000020 = puVar4;
      if ((lVar10 != 0) && (func_0x006751a4(*puVar4), (bool)uVar1)) {
        in_stack_00000028 = unaff_x25;
        func_0x006749a8(*(undefined8 *)(param_2 + 8));
      }
      unaff_x24 = unaff_x24 + 0x38;
    }
    FUN_00664ecc(&stack0x00000030);
    return;
  }
  in_stack_00000018 = *(long *)(param_2 + 0x48) + lVar9 * 0x98;
  Hint_Prefetch(in_stack_00000030,0,2,0);
  unaff_x24 = *(ulong *)(in_stack_00000018 + 8);
  func_0x0066c3a4();
  unaff_x25 = in_stack_00000040;
  lVar10 = 0;
  uVar6 = in_stack_00000030 >> 0xc ^ unaff_x24 >> 7;
  do {
    func_0x006753d4();
    uVar8 = extraout_x8_00 & 0x8080808080808080;
    while (uVar8 != 0) {
      func_0x00675f14();
      uVar8 = (uVar6 & (ulong)unaff_x25) + (extraout_x8_01 >> 3) & (ulong)unaff_x25;
      lVar7 = *(long *)(in_stack_00000038 + uVar8 * 8);
      uVar1 = lVar7 == in_stack_00000018;
      param_1 = lVar2;
      if ((bool)uVar1) {
LAB_00661180:
        if (((*(byte *)(*(long *)(lVar7 + 0x20) + 0x53) & 1) == 0) &&
           (func_0x006751a4(in_stack_00000018), !(bool)uVar1)) goto LAB_006611a4;
        in_stack_00000028 = &stack0x00000018;
        func_0x00675478(lVar2,*(long *)(param_2 + 8) + 0x18,param_3);
        lVar10 = lVar2;
        goto LAB_00661214;
      }
      uVar3 = *(undefined8 *)(lVar7 + 8);
      FUN_00459c38(uVar3,*(undefined8 *)(in_stack_00000018 + 8));
      if ((int)uVar3 != 0) {
        lVar7 = *(long *)(in_stack_00000038 + uVar8 * 8);
        goto LAB_00661180;
      }
      uVar8 = extraout_x14 - 1 & extraout_x14;
    }
    func_0x00674774();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar10 = lVar10 + 8;
    uVar6 = lVar10 + (uVar6 & (ulong)unaff_x25);
  } while( true );
  puVar4 = &stack0x00000030;
  FUN_00672c88(puVar4,unaff_x24);
  *(long *)(in_stack_00000038 + (long)puVar4 * 8) = in_stack_00000018;
LAB_006611a4:
  func_0x00674de8(*(undefined8 *)(lVar5 + 0x30));
  lVar10 = param_1;
  FUN_00661078();
  lVar9 = lVar9 + 1;
  goto LAB_006610b8;
}



/* Entry: 00661344; end: 0066143b;  */

long * FUN_00661344(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 extraout_x10;
  undefined1 auStack_118 [24];
  long alStack_d0 [3];
  undefined8 uStack_b8;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_58;
  ulong uStack_50;
  
  plVar6 = alStack_d0;
  uVar8 = param_2;
  func_0x0067414c();
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar5 = bVar2 == 0;
  uVar1 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 == 0) {
    func_0x00675a18();
    func_0x0067587c(&lStack_58);
    func_0x006766c0();
    func_0x0067587c(&lStack_88);
    func_0x006764b8(param_3 + 3);
    func_0x006753f8();
    plVar6 = &lStack_58;
  }
  else {
    cVar4 = (char)bVar2 < '\0';
    uVar5 = bVar2 == 0;
    cVar3 = '\0';
    lStack_58 = *param_1;
    if (!(bool)cVar4) {
      lStack_58 = (long)param_1;
    }
    uStack_50 = uVar1;
    func_0x00674500();
    lStack_88 = (long)param_1;
    uStack_80 = uVar8;
    func_0x006748a8();
    uStack_b8 = extraout_x10;
    if (cVar4 == cVar3) {
      uStack_b8 = param_2;
    }
    param_3 = &lStack_58;
    func_0x0067563c(alStack_d0);
    func_0x0067513c();
    FUN_0066143c();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00673f78();
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    plVar7 = &lStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar7);
    func_0x00674bc8();
    func_0x00675438();
    func_0x00675a18();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_118,param_3);
    func_0x006766ac();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    func_0x00675fa0(plVar7 + 3);
    func_0x00674d64();
    func_0x00674d80();
    return plVar7;
  }
  return param_3;
}



/* Entry: 0066143c; end: 0066149f;  */

long FUN_0066143c(long param_1)

{
  undefined8 *unaff_x19;
  undefined1 auStack_48 [24];
  
  func_0x00675438();
  func_0x00675a18();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48);
  func_0x006766ac();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  func_0x00675fa0(param_1 + 0x18);
  func_0x00674d64();
  func_0x00674d80();
  return param_1;
}



/* Entry: 006614a0; end: 0066155b;  */

long FUN_006614a0(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x006743f8();
    func_0x0067424c();
    goto LAB_006614e0;
  }
  lVar1 = param_1[0x15];
  func_0x00674200((int)lVar1 + param_2 * 8);
  if (param_1 == (long *)0x0) {
    return lVar2 + (int)lVar1;
  }
  do {
    func_0x00533528();
    func_0x0067427c();
LAB_006614e0:
    FUN_00776794();
    func_0x00674d28();
  } while( true );
}



/* Entry: 0066155c; end: 006615b3;  */

void FUN_0066155c(uint *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
  if (0x1ffffffe < (int)param_4) {
    param_4 = 0x1fffffff;
  }
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  if (0x1ffffffe < (int)param_3) {
    param_3 = 0x1fffffff;
  }
  uVar1 = *param_1 + (param_4 - param_3 & ((int)(param_4 - param_3) >> 0x1f ^ 0xffffffffU));
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (0x1ffffffe < (int)uVar1) {
    uVar1 = 0x1fffffff;
  }
  *param_1 = uVar1;
  if (*(long *)(param_1 + 2) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 2) = param_2;
  param_1[4] = 1;
  return;
}



/* Entry: 006615b4; end: 0066166f;  */

bool FUN_006615b4(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong unaff_x19;
  ulong *unaff_x20;
  
  func_0x00674878();
  func_0x00675160();
  FUN_0066696c();
  func_0x006745f4(*unaff_x20 >> 0xc);
  do {
    func_0x00674f7c();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x006763d4();
      uVar1 = unaff_x19;
      FUN_0066f790();
      if ((uVar1 & 1) != 0) goto LAB_00661648;
      func_0x006763c8();
    }
    func_0x006745a8();
  } while ((extraout_x8_00 & 1) == 0);
LAB_00661648:
  return (extraout_x8 & 0x8080808080808080) != 0;
}



/* Entry: 00661670; end: 006619e3;  */

void FUN_00661670(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined1 in_ZR;
  char cVar4;
  char cVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  ulong extraout_x8;
  long lVar13;
  undefined8 extraout_x8_00;
  ulong uVar14;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 *extraout_x9;
  byte *pbVar15;
  long extraout_x9_00;
  undefined8 ****extraout_x10;
  ulong extraout_x10_00;
  undefined8 extraout_x11;
  long extraout_x11_00;
  ulong uVar16;
  ulong uVar17;
  undefined8 ****ppppuVar18;
  undefined8 *puVar19;
  undefined8 unaff_x30;
  byte bStack_100;
  undefined7 uStack_ff;
  long lStack_f8;
  char cStack_e9;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  byte bStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  
  func_0x00676d94();
  lStack_b8 = 0;
  func_0x00674868();
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar10 = (undefined8 *)(param_3 + 0x18);
  uStack_c0 = extraout_x8;
  func_0x00675590(*puVar10);
  puVar19 = puVar10;
  if (!(bool)in_ZR) {
    puVar19 = extraout_x9;
  }
  puVar10 = puVar19 + *(int *)(puVar10 + 1);
  do {
    if (puVar19 == puVar10) {
      FUN_006619e4(&uStack_c0);
      func_0x00676d7c(unaff_x30);
      return;
    }
    ppppuVar18 = (undefined8 ****)*puVar19;
    FUN_0066460c(&pppuStack_a0,(ulong)ppppuVar18[3] & 0xfffffffffffffffc);
    if ((param_5 == 0) || ((*(byte *)(ppppuVar18 + 2) >> 4 & 1) == 0)) {
LAB_00661718:
      bStack_c8 = 0;
      pppuStack_d8 = pppuStack_98;
      pppuStack_e0 = pppuStack_a0;
      pppuStack_d0 = pppuStack_90;
      pppuStack_a0 = (undefined8 ****)0x0;
      pppuStack_98 = (undefined8 ****)0x0;
      pppuStack_90 = (undefined8 ****)0x0;
      pppuStack_e8 = ppppuVar18;
    }
    else {
      uVar6 = (ulong)ppppuVar18[7] & 0xfffffffffffffffc;
      FUN_00459c38(uVar6,&pppuStack_a0);
      if ((uVar6 & 1) != 0) goto LAB_00661718;
      pppuStack_e8 = ppppuVar18;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pppuStack_e0,(ulong)ppppuVar18[7] & 0xfffffffffffffffc);
      bStack_c8 = 1;
    }
    func_0x00676060();
    uVar12 = (uint)bStack_c8;
    cVar4 = SBORROW4(uVar12,1);
    cVar5 = (int)(uVar12 - 1) < 0;
    if (uVar12 == 1) {
      func_0x0067587c(&bStack_100);
      if ((long)cStack_e9 < 0) {
        if (lStack_f8 != 0) {
          pbVar15 = (byte *)CONCAT71(uStack_ff,bStack_100);
          uVar12 = (uint)*pbVar15;
          cVar4 = SBORROW4(uVar12,0x5b);
          cVar5 = (int)(uVar12 - 0x5b) < 0;
          lVar13 = lStack_f8;
          if (uVar12 == 0x5b) goto LAB_0066178c;
        }
LAB_006617bc:
        func_0x00675368();
        goto LAB_006617c0;
      }
      if (cStack_e9 == '\0') goto LAB_006617bc;
      uVar12 = (uint)bStack_100;
      cVar4 = SBORROW4(uVar12,0x5b);
      cVar5 = (int)(uVar12 - 0x5b) < 0;
      if (uVar12 != 0x5b) goto LAB_006617bc;
      pbVar15 = &bStack_100;
      lVar13 = (long)cStack_e9;
LAB_0066178c:
      bVar11 = pbVar15[lVar13 + -1];
      func_0x00675368();
      uVar12 = (uint)bVar11;
      cVar4 = SBORROW4(uVar12,0x5d);
      cVar5 = (int)(uVar12 - 0x5d) < 0;
      if (uVar12 != 0x5d) goto LAB_006617c0;
      pppuStack_98 = &pppuStack_e8;
      pppuStack_a0 = ppppuVar18;
      func_0x0067588c();
      FUN_0065ad28();
    }
    else {
LAB_006617c0:
      Hint_Prefetch(uStack_c0,0,2,0);
      func_0x00676d14(uStack_c0);
      uVar1 = extraout_x11;
      ppppuVar2 = extraout_x10;
      if (cVar5 == cVar4) {
        uVar1 = extraout_x8_00;
        ppppuVar2 = &pppuStack_e0;
      }
      puVar7 = &uStack_c0;
      FUN_0066696c(puVar7,ppppuVar2,uVar1);
      uVar6 = uStack_b0;
      uVar14 = uStack_c0 >> 0xc ^ (ulong)puVar7 >> 7;
      while( true ) {
        func_0x006753d4();
        for (uVar16 = extraout_x8_01 & 0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16
            ) {
          uVar17 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = (uVar14 & uVar6) + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar6
          ;
          func_0x00676d28(lStack_b8 + uVar17 * 0x40);
          ppppuVar2 = (undefined8 ****)pppuStack_d8;
          ppppuVar3 = (undefined8 ****)pppuStack_e0;
          if (-1 < (long)pppuStack_d0) {
            ppppuVar2 = (undefined8 ****)((ulong)pppuStack_d0 >> 0x38);
            ppppuVar3 = &pppuStack_e0;
          }
          uVar8 = extraout_x10_00;
          if (-1 < extraout_x9_00) {
            uVar8 = extraout_x8_02;
          }
          lVar13 = extraout_x11_00;
          if (-1 < (int)extraout_x9_00) {
            lVar13 = extraout_x9_00;
          }
          func_0x00465a14(uVar8,lVar13,ppppuVar3,ppppuVar2);
          if ((uVar8 & 1) != 0) {
            lVar13 = lStack_b8 + uVar17 * 0x40;
            if (((param_5 ^ 1 | (uint)bStack_c8) & 1) == 0) {
              if (*(char *)(lVar13 + 0x38) != '\x01') goto LAB_00661914;
              bVar11 = 1;
            }
            else if ((bStack_c8 & 1) == 0) {
              bVar11 = 1;
            }
            else {
              bVar11 = *(byte *)(lVar13 + 0x38) ^ 1;
            }
            pppuStack_a0 = &pppuStack_e8;
            pppuStack_98 = (undefined8 ****)(lVar13 + 0x18);
            pppuStack_90 = ppppuVar18;
            if ((*(int *)(*(long *)(param_4 + 0x30) + 0x44) == 2) && ((bVar11 & 1) != 0)) {
              func_0x0067588c();
              FUN_0065af68();
            }
            else {
              func_0x0067588c();
              FUN_0065ad28();
            }
            goto LAB_00661914;
          }
        }
        func_0x00674774();
        if ((extraout_x8_03 & 1) != 0) break;
        func_0x00676bf0();
        uVar14 = extraout_x8_04;
      }
      puVar9 = &uStack_c0;
      FUN_006713b4(puVar9,puVar7);
      lVar13 = lStack_b8 + (long)puVar9 * 0x40;
      func_0x0067587c(lVar13);
      *(undefined8 ****)(lVar13 + 0x18) = pppuStack_e8;
      func_0x0067587c(lVar13 + 0x20);
      *(byte *)(lVar13 + 0x38) = bStack_c8;
    }
LAB_00661914:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_e0);
    puVar19 = puVar19 + 1;
  } while( true );
}



/* Entry: 006619e4; end: 00661a37;  */

undefined8 * FUN_006619e4(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        FUN_00669804(lVar2);
      }
      pcVar1 = pcVar1 + 1;
      lVar2 = lVar2 + 0x40;
    }
    func_0x006744e8();
  }
  return param_1;
}



/* Entry: 00661a38; end: 006626a3;  */

void FUN_00661a38(char *param_1,char *param_2,ulong param_3,long param_4,long *param_5,long *param_6
                 ,long *param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 in_ZR;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar14;
  undefined8 extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  byte extraout_w9;
  byte extraout_w9_00;
  byte extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint uVar15;
  undefined4 uVar16;
  byte bVar17;
  char *extraout_x10;
  undefined1 *extraout_x10_00;
  ulong extraout_x11;
  undefined8 extraout_x11_00;
  long unaff_x19;
  long *unaff_x20;
  undefined **unaff_x21;
  char *pcVar18;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  char *unaff_x26;
  undefined4 auStack_188 [7];
  undefined1 uStack_169;
  char *pcStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long *in_stack_fffffffffffffec8;
  ulong uStack_130;
  char *pcStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  char *pcStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_78;
  
  func_0x00674c64();
  func_0x006743c8();
  if (param_4 == 0) {
    plVar11 = *(long **)(unaff_x20[0x15] + 0x10);
  }
  else {
    plVar11 = (long *)(*(long *)(param_4 + 8) + 0x18);
  }
  uStack_78 = extraout_x8;
  if (*param_7 == 0) {
    func_0x00675198();
    func_0x006764c0();
    func_0x00674bbc();
    FUN_00776794(&stack0xfffffffffffffec8);
    goto LAB_006625b0;
  }
  pcVar18 = (char *)(*(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc);
  uVar15 = *(uint *)(unaff_x19 + 0x10);
  unaff_x26 = (char *)(ulong)uVar15;
  uVar20 = *(ulong *)(unaff_x19 + 0x38);
  bVar17 = *(byte *)((long)plVar11 + 0x17);
  uVar21 = plVar11[1];
  if (-1 < (char)bVar17) {
    uVar21 = (ulong)bVar17;
  }
  if (uVar21 == 0) {
    func_0x00675e60(&pcStack_150);
  }
  else {
    cVar6 = (char)bVar17 < '\0';
    cVar5 = '\0';
    in_stack_fffffffffffffec8 = (long *)*plVar11;
    if (!(bool)cVar6) {
      in_stack_fffffffffffffec8 = plVar11;
    }
    func_0x00674500();
    pcStack_b0 = param_2;
    uStack_a8 = param_3;
    func_0x006769f8();
    pcStack_e0 = extraout_x10;
    uStack_d8 = extraout_x11;
    if (cVar6 == cVar5) {
      pcStack_e0 = pcVar18;
      uStack_d8 = extraout_x8_00;
    }
    func_0x00675b70();
    uStack_130 = uVar21;
  }
  uVar20 = uVar20 & 0xfffffffffffffffc;
  bVar7 = (uVar15 & 0x10) != 0;
  plVar11 = param_7;
  if (bVar7 && uVar20 != 0) {
LAB_00661bac:
    func_0x00676aac();
    FUN_00479520(&stack0xfffffffffffffec8,pcVar18);
    func_0x0045a4f0(&stack0xfffffffffffffec8,&pcStack_150);
    func_0x00675e60(&pcStack_b0);
    func_0x00570864();
    param_1 = pcStack_b0;
    uStack_d8 = uStack_a8;
    pcStack_e0 = pcStack_b0;
    uStack_d0 = uStack_a0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    pcStack_b0 = (char *)0x0;
    puVar8 = &stack0xfffffffffffffec8;
    FUN_006716b4(puVar8,&pcStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_e0);
    func_0x00675d74();
    unaff_x26 = &stack0xfffffffffffffec8;
    FUN_006716b4(unaff_x26,&pcStack_168);
    func_0x00675408();
    if (bVar7 && uVar20 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_188,uVar20);
    }
    else {
      FUN_0066460c(auStack_188,pcVar18);
    }
    puVar9 = &stack0xfffffffffffffec8;
    FUN_006716b4(puVar9,auStack_188);
    func_0x00674d80();
    func_0x006671cc(param_7,(long)(uStack_130 - (long)in_stack_fffffffffffffec8) / 0x18);
    FUN_00644958(&uStack_169,in_stack_fffffffffffffec8,uStack_130,plVar11);
    func_0x00675d1c();
    func_0x00459128(&stack0xfffffffffffffec8);
    bVar17 = (byte)puVar8 & 3;
    bVar22 = (byte)(((uint)unaff_x26 & 3) << 2);
    unaff_x21 = (undefined **)(ulong)(((uint)puVar9 & 7) << 4);
  }
  else {
    pcVar19 = pcVar18;
    FUN_00668cb8();
    if ((int)pcVar19 == 0) {
      FUN_0066143c(param_7,pcVar18,&pcStack_150);
      unaff_x21 = (undefined **)0x0;
      bVar22 = 0;
      bVar17 = 0;
    }
    else {
      if ((int)pcVar19 != 1) goto LAB_00661bac;
      func_0x00675d74();
      func_0x006671cc(param_7,3);
      func_0x00675e60(&stack0xfffffffffffffec8);
      FUN_004575b8(plVar11,&stack0xfffffffffffffec8);
      uStack_a8 = uStack_148;
      pcStack_b0 = pcStack_150;
      uStack_a0 = uStack_140;
      pcStack_150 = (char *)0x0;
      uStack_148 = 0;
      uStack_140 = 0;
      FUN_004575b8(plVar11 + 3,&pcStack_b0);
      uStack_d8 = uStack_160;
      pcStack_e0 = pcStack_168;
      uStack_d0 = uStack_158;
      param_1 = pcStack_168;
      func_0x00676ad8();
      FUN_004575b8(plVar11 + 6,&pcStack_e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_e0);
      func_0x00675d1c();
      func_0x006758a0();
      func_0x00675408();
      bVar17 = 0;
      bVar22 = 8;
      unaff_x21 = (undefined **)0x20;
    }
  }
  func_0x00675adc();
  param_5[1] = (long)plVar11;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0xfc | bVar17;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0xf3 | bVar22;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0x8f | (byte)unaff_x21;
  func_0x00675e74(*(undefined8 *)(unaff_x19 + 0x18));
  plVar11 = unaff_x20;
  FUN_0065c320();
  param_5[2] = unaff_x20[0x15];
  *(undefined4 *)((long)param_5 + 4) = *(undefined4 *)(unaff_x19 + 0x48);
  bVar17 = 8;
  if ((int)param_6 == 0) {
    bVar17 = 0;
  }
  *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) & 0xf7 | bVar17;
  func_0x006763e0();
  *(byte *)(extraout_x8_01 + 1) = extraout_w9 & 0xef;
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0xfd | *(char *)(unaff_x19 + 0x50) << 1;
  if ((*(char *)(unaff_x19 + 0x50) == '\x01') && (*(int *)(unaff_x20[0x15] + 0x20) != 999)) {
    func_0x00676034();
    func_0x00674658();
    FUN_0065ad28();
  }
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0xfb | *(byte *)(unaff_x19 + 0x10) >> 2 & 4;
  *(char *)((long)param_5 + 2) = (char)*(undefined4 *)(unaff_x19 + 0x58);
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0x3f | *(char *)(unaff_x19 + 0x54) << 6;
  func_0x006763e0();
  bVar17 = 0x20;
  if (extraout_w9_02 < 0xc0) {
    bVar17 = 0;
  }
  *(byte *)(extraout_x8_02 + 1) = bVar17 | (byte)extraout_w9_02 & 0xdf;
  func_0x006763e0();
  bVar17 = (byte)extraout_w9_03;
  lVar14 = extraout_x8_03;
  if ((extraout_w9_03 & 200) == 0x88) {
    func_0x00674658();
    FUN_0065ad28();
    func_0x006763e0();
    lVar14 = extraout_x8_04;
    bVar17 = extraout_w9_00;
  }
  *(undefined8 *)(lVar14 + 0x50) = 0;
  *(undefined8 *)(lVar14 + 0x18) = 0;
  *(undefined8 *)(lVar14 + 0x20) = 0;
  *(byte *)(lVar14 + 1) = bVar17 & 0xfe | (byte)(*(uint *)(unaff_x19 + 0x10) >> 3) & 1;
  uVar15 = *(uint *)(unaff_x19 + 0x10);
  if (((uVar15 >> 3 & 1) != 0) && ((*(byte *)((long)param_5 + 1) >> 5 & 1) != 0)) {
    func_0x0067447c(param_5[1]);
    func_0x00675b3c();
    uVar15 = *(uint *)(unaff_x19 + 0x10);
  }
  if ((uVar15 >> 10 & 1) == 0) goto LAB_00661e84;
  plVar11 = param_5;
  if ((uVar15 >> 3 & 1) == 0) {
    FUN_00656c60();
    switch((int)plVar11) {
    case 1:
    case 3:
    case 6:
      *(undefined4 *)(param_5 + 10) = 0;
      break;
    case 2:
    case 4:
    case 5:
    case 8:
      param_5[10] = 0;
      break;
    case 7:
      *(undefined1 *)(param_5 + 10) = 0;
      break;
    case 9:
      func_0x0048afa0();
      param_5[10] = (long)&DAT_00b69408;
      break;
    case 10:
      param_5[10] = 0;
    }
    goto LAB_00661e84;
  }
  pcStack_e0 = (char *)0x0;
  FUN_00656c60();
  switch((int)plVar11) {
  case 1:
    func_0x00674d98();
    if (extraout_w8 < 0) {
      plVar11 = (long *)*plVar11;
    }
    func_0x00676cc8();
    _strtol();
    goto code_r0x006622e0;
  case 2:
    func_0x00674d98();
    if (extraout_w8_03 < 0) {
      plVar11 = (long *)*plVar11;
    }
    func_0x00676cc8();
    _strtoll();
    goto code_r0x0066246c;
  case 3:
    func_0x00674d98();
    if (extraout_w8_01 < 0) {
      plVar11 = (long *)*plVar11;
    }
    func_0x00676cc8();
    _strtoul();
code_r0x006622e0:
    *(int *)(param_5 + 10) = (int)plVar11;
    break;
  case 4:
    func_0x00674d98();
    if (extraout_w8_02 < 0) {
      plVar11 = (long *)*plVar11;
    }
    func_0x00676cc8();
    _strtoull();
code_r0x0066246c:
    param_5[10] = (long)plVar11;
    break;
  case 5:
    func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
    if ((int)plVar11 == 0) {
      func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
      if ((int)plVar11 == 0) {
        func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
        if ((int)plVar11 == 0) {
          func_0x00674d98();
          if (extraout_w8_04 < 0) {
            plVar11 = (long *)*plVar11;
          }
          FUN_006ab238();
          param_5[10] = (long)param_1;
          break;
        }
        lVar14 = 0x7ff8000000000000;
      }
      else {
        lVar14 = -0x10000000000000;
      }
    }
    else {
      lVar14 = 0x7ff0000000000000;
    }
    param_5[10] = lVar14;
    break;
  case 6:
    func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
    uVar16 = SUB84(param_1,0);
    if ((int)plVar11 == 0) {
      func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
      if ((int)plVar11 == 0) {
        func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
        if ((int)plVar11 == 0) {
          func_0x00674d98();
          if (extraout_w8_05 < 0) {
            plVar11 = (long *)*plVar11;
          }
          FUN_006ab238();
          func_0x006ab1cc();
          *(undefined4 *)(param_5 + 10) = uVar16;
          break;
        }
        uVar16 = 0x7fc00000;
      }
      else {
        uVar16 = 0xff800000;
      }
    }
    else {
      uVar16 = 0x7f800000;
    }
    *(undefined4 *)(param_5 + 10) = uVar16;
    break;
  case 7:
    func_0x006752bc(*(undefined8 *)(unaff_x19 + 0x30));
    if ((int)plVar11 == 0) {
      func_0x00676bd8(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x006752bc();
      if ((int)plVar11 == 0) {
        func_0x0067447c(param_5[1]);
        func_0x00675b3c();
      }
      else {
        *(undefined1 *)(param_5 + 10) = 0;
      }
    }
    else {
      *(undefined1 *)(param_5 + 10) = 1;
    }
    break;
  case 8:
    param_5[10] = 0;
    break;
  case 9:
    plVar11 = param_5;
    FUN_006538b4();
    if ((int)plVar11 != 0xc) {
      plVar11 = param_7;
      FUN_0065efd0(param_7,*(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc);
      goto code_r0x0066246c;
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    pcStack_b0 = (char *)0x0;
    plVar12 = (long *)(*(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc);
    lVar14 = (long)*(char *)((long)plVar12 + 0x17);
    plVar11 = plVar12;
    if (lVar14 < 0) {
      plVar11 = (long *)*plVar12;
      lVar14 = plVar12[1];
    }
    FUN_00571d34(plVar11,lVar14,&pcStack_b0,0);
    if ((int)plVar11 == 0) {
      func_0x00676034();
      func_0x0067447c();
      func_0x00675b3c();
    }
    else {
      plVar12 = param_7;
      func_0x00675a20();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&stack0xfffffffffffffec8,&pcStack_b0);
      plVar11 = plVar12;
      FUN_004575b8(plVar12,&stack0xfffffffffffffec8);
      func_0x006758a0();
      param_5[10] = (long)plVar12;
    }
    func_0x00675d1c();
    break;
  case 10:
    func_0x00676034();
    func_0x0067447c();
    func_0x00675b3c();
    func_0x006763e0();
    *(byte *)(extraout_x8_09 + 1) = extraout_w9_01 & 0xfe;
    param_5[10] = 0;
    break;
  default:
    goto LAB_00661e84;
  }
  if (pcStack_e0 != (char *)0x0) {
    uVar21 = *(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc;
    cVar6 = *(char *)(uVar21 + 0x17);
    if (cVar6 < '\0') {
      if (*(long *)(uVar21 + 8) != 0) goto code_r0x0066255c;
    }
    else if (cVar6 != '\0') {
code_r0x0066255c:
      if (*pcStack_e0 == '\0') goto LAB_00661e84;
    }
    func_0x00676034();
    func_0x00674ac4();
    FUN_0065ad28();
  }
LAB_00661e84:
  uVar15 = *(uint *)((long)param_5 + 4);
  cVar6 = (int)uVar15 < 0;
  in_ZR = uVar15 == 0;
  cVar5 = '\0';
  if ((int)uVar15 < 1) {
    func_0x006767e0();
    func_0x006758e4();
    if (extraout_x8_06 == 0) {
      plVar11[1] = unaff_x19;
      *(undefined4 *)(plVar11 + 2) = 1;
    }
    func_0x00676034();
    func_0x0067447c();
    func_0x006765b8();
    if ((int)param_6 != 0) goto LAB_00661f48;
  }
  else {
    if (((ulong)param_6 & 1) != 0) {
LAB_00661f48:
      if ((*(byte *)(unaff_x19 + 0x10) >> 1 & 1) == 0) {
        func_0x0067447c(param_5[1]);
        func_0x00675fd0();
      }
      param_5[5] = param_4;
      if (*(char *)(unaff_x19 + 0x10) < '\0') {
        func_0x006742cc(param_5[1]);
      }
      goto LAB_00662068;
    }
    if (uVar15 >> 0x1d != 0) {
      func_0x006767e0();
      func_0x006758e4();
      if (extraout_x8_05 == 0) {
        plVar11[1] = unaff_x19;
        *(undefined4 *)(plVar11 + 2) = 1;
      }
      func_0x00676034();
      func_0x00674ac4();
      FUN_0065ad28();
    }
  }
  uVar15 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar15 >> 1 & 1) != 0) {
    func_0x0067447c(param_5[1]);
    func_0x00675fd0();
    uVar15 = *(uint *)(unaff_x19 + 0x10);
  }
  param_5[4] = param_4;
  if ((uVar15 >> 7 & 1) != 0) {
    iVar2 = *(int *)(unaff_x19 + 0x4c);
    if (-1 < iVar2) {
      iVar3 = *(int *)(param_4 + 0x78);
      cVar5 = SBORROW4(iVar2,iVar3);
      cVar6 = iVar2 - iVar3 < 0;
      in_ZR = iVar2 == iVar3;
      if (iVar2 < iVar3) {
        *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) | 0x10;
        param_5[5] = *(long *)(param_4 + 0x40) + (long)*(int *)(unaff_x19 + 0x4c) * 0x38;
        goto LAB_00662068;
      }
    }
    func_0x00674658();
    FUN_0065ad28();
  }
LAB_00662068:
  auStack_188[0] = 8;
  func_0x00676ad8();
  func_0x00659a54(param_5,&pcStack_168);
  FUN_0053ad70(&pcStack_168,auStack_188);
  lVar14 = param_5[1];
  uVar21 = (ulong)*(char *)(lVar14 + 0x2f);
  if ((long)uVar21 < 0) {
    pcVar18 = *(char **)(lVar14 + 0x18);
    uVar21 = *(ulong *)(lVar14 + 0x20);
  }
  else {
    pcVar18 = (char *)(lVar14 + 0x18);
  }
  param_6 = param_5;
  if ((*(byte *)(unaff_x19 + 0x10) >> 5 & 1) != 0) {
    if (*param_7 == 0) {
      func_0x00674350();
      func_0x006745b8(&stack0xfffffffffffffec8);
      goto LAB_006625b0;
    }
    pcVar19 = *(char **)(unaff_x19 + 0x40);
    lVar14 = param_7[6];
    iVar2 = (int)param_7[0x18];
    unaff_x21 = (undefined **)(long)iVar2;
    uVar20 = (ulong)(iVar2 + 1U);
    *(uint *)(param_7 + 0x18) = iVar2 + 1U;
    uVar13 = (ulong)*(uint *)(param_7 + 0x11);
    func_0x00674520();
    unaff_x26 = pcStack_168;
    if (uVar20 != 0) goto LAB_006625c4;
    pcVar10 = pcVar19;
    FUN_0067b8f0();
    if (((ulong)pcVar10 & 1) != 0) {
      FUN_0054a274(&stack0xfffffffffffffec8,pcVar19);
      unaff_x21 = (undefined **)(lVar14 + (long)iVar2 * 0x98);
      func_0x00676c74();
      uVar1 = extraout_x11_00;
      puVar8 = extraout_x10_00;
      if (cVar6 == cVar5) {
        uVar1 = extraout_x8_07;
        puVar8 = &stack0xfffffffffffffec8;
      }
      func_0x006656a4(puVar8,uVar1,unaff_x21);
      func_0x006758a0();
      in_ZR = *(int *)(unaff_x21 + 0xc) == 1;
      if (0 < *(int *)(unaff_x21 + 0xc)) {
        func_0x00675550(&stack0xfffffffffffffec8);
        FUN_0066f068(unaff_x20 + 0xe,&stack0xfffffffffffffec8);
        FUN_0066975c(&stack0xfffffffffffffec8);
      }
      if ((*(ulong *)(pcVar19 + 8) & 1) != 0) goto LAB_006625b8;
      FUN_006a480c();
      goto LAB_00662164;
    }
    func_0x00674500();
    pcStack_e0 = pcVar18;
    uStack_d8 = uVar21;
    pcStack_b0 = pcVar10;
    uStack_a8 = uVar13;
    func_0x00675b70();
    func_0x0067573c();
    func_0x00675748();
    func_0x00675adc();
  }
  unaff_x21 = &PTR_PTR_00b25dc8;
  uVar4 = in_ZR;
  while( true ) {
    in_ZR = uVar4;
    func_0x00674eec();
    param_6[7] = (long)unaff_x21;
    param_6[8] = extraout_x8_08;
    param_6[9] = extraout_x8_08;
    func_0x0053b048(&pcStack_168);
    *(undefined1 *)param_5 = 2;
    func_0x0067447c(param_5[1]);
    FUN_0065c040();
    func_0x00674120(uStack_78);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_006625c4:
    func_0x00674bbc();
    func_0x00674e50(&stack0xfffffffffffffec8);
LAB_006625b0:
    FUN_005558a0(&stack0xfffffffffffffec8);
LAB_006625b8:
    func_0x006762e4();
LAB_00662164:
    func_0x00676398();
    uVar4 = in_ZR;
    if (!(bool)in_ZR) {
      plVar11 = (long *)unaff_x20[1];
      FUN_00654614(plVar11,"google.protobuf.FieldOptions",0x1c);
      func_0x00675120();
      uVar4 = 0;
      if ((bool)in_ZR) {
        func_0x006762c0();
        while( true ) {
          func_0x00675234();
          uVar4 = unaff_x26 == (char *)(long)extraout_w8_00;
          if ((long)extraout_w8_00 <= (long)unaff_x26) break;
          func_0x00675970();
          FUN_0066bfcc();
          func_0x006763f8();
          FUN_00655ef4();
          bVar7 = plVar11 != (long *)0x0;
          plVar11 = (long *)0x0;
          if (bVar7) {
            plVar11 = unaff_x20 + 0x1f;
            func_0x0065b318(plVar11,&stack0xfffffffffffffec8);
          }
          unaff_x26 = unaff_x26 + 1;
        }
      }
    }
  }
  return;
}



/* Entry: 006626a4; end: 00662707;  */

long FUN_006626a4(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined1 in_ZR;
  undefined4 extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long extraout_x14;
  long extraout_x14_00;
  long lVar1;
  long unaff_x19;
  
  func_0x006746c4();
  FUN_0066e1a4();
  func_0x00674934();
  do {
    func_0x00675244();
    lVar1 = CONCAT44(extraout_var,extraout_w13);
    while (lVar1 != 0) {
      func_0x0067597c();
      lVar1 = extraout_x14;
      if ((bool)in_ZR) goto LAB_006626f8;
      func_0x0067692c();
      lVar1 = CONCAT44(extraout_var_00,extraout_w13_00);
    }
    func_0x006761e8();
  } while ((param_3 & 1) == 0);
  FUN_0067106c();
  func_0x0067594c();
  param_4 = unaff_x19;
  lVar1 = extraout_x14_00;
LAB_006626f8:
  return lVar1 + param_4 * 0x20 + 8;
}



/* Entry: 00662708; end: 00662b6f;  */

void FUN_00662708(long *param_1,long *param_2,char *param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  byte bVar5;
  undefined1 uVar6;
  bool bVar7;
  char *pcVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  char cVar12;
  int extraout_w8;
  ulong uVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long *extraout_x9;
  long extraout_x9_00;
  long lVar15;
  ulong *extraout_x10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar16;
  byte bVar17;
  int iVar18;
  long unaff_x22;
  undefined8 *puVar19;
  long *plVar20;
  long unaff_x23;
  long lVar21;
  long **pplVar22;
  long alStack_130 [3];
  long lStack_118;
  int iStack_10c;
  long *aplStack_108 [7];
  char *pcStack_d0;
  long *plStack_c8;
  long alStack_a0 [6];
  undefined8 uStack_70;
  
  func_0x00674c00();
  func_0x0067546c();
  func_0x006743c8();
  aplStack_108[0] = param_2;
  uStack_70 = extraout_x8;
  while (unaff_x23 < (int)unaff_x20[0x10]) {
    func_0x00674298(unaff_x20[9]);
    param_1 = unaff_x19;
    FUN_00662708();
    func_0x006761b8();
  }
  func_0x0067546c();
  puVar1 = (ulong *)(unaff_x21 + 3);
  while (unaff_x23 < *(int *)((long)unaff_x20 + 4)) {
    func_0x00674298(unaff_x20[7]);
    param_1 = unaff_x19;
    FUN_00662b70();
    func_0x00675860();
  }
  func_0x0067546c();
  for (; unaff_x23 < *(int *)((long)unaff_x20 + 0x8c); unaff_x23 = unaff_x23 + 1) {
    func_0x00674574(unaff_x20[0xc]);
    param_2 = (long *)(extraout_x8_00 + unaff_x22);
    param_1 = unaff_x19;
    FUN_00662b70();
    unaff_x22 = unaff_x22 + 0x58;
  }
  lVar21 = 0x58;
  pplVar22 = aplStack_108;
  for (iStack_10c = 0; iStack_10c < *(int *)((long)unaff_x20 + 4); iStack_10c = iStack_10c + 1) {
    lVar15 = unaff_x20[7] + (long)iStack_10c * 0x58;
    if (((*(byte *)(lVar15 + 1) >> 4 & 1) != 0) &&
       (lStack_118 = *(long *)(lVar15 + 0x28), lStack_118 != 0)) {
      if (0 < *(int *)(lStack_118 + 4)) {
        if ((*(byte *)(lVar15 + -0x57) >> 4 & 1) == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = *(long *)(lVar15 + -0x30);
        }
        if (lVar15 != lStack_118) {
          func_0x00673f90(unaff_x20[1]);
          pcVar8 = ".";
          FUN_00532c74();
          pcStack_d0 = pcVar8;
          plStack_c8 = param_2;
          func_0x00673fe0(*(undefined8 *)(aplStack_108[0][7] + (long)iStack_10c * 0x58 + -0x50));
          func_0x00675a3c();
          puVar3 = puVar1;
          if ((*puVar1 & 1) != 0) {
            puVar3 = (ulong *)(*puVar1 + (long)iStack_10c * 8 + -1);
          }
          param_3 = (char *)*puVar3;
          param_2 = alStack_130;
          param_1 = unaff_x19;
          FUN_0065ad28();
          func_0x00674d88();
          unaff_x20 = aplStack_108[0];
        }
      }
      lVar15 = unaff_x20[8] +
               (long)(int)((lStack_118 - *(long *)(*(long *)(lStack_118 + 0x10) + 0x40)) / 0x38) *
               0x38;
      iVar18 = *(int *)(lVar15 + 4);
      if (iVar18 == 0) {
        *(long *)(lVar15 + 0x30) = unaff_x20[7] + (long)iStack_10c * 0x58;
      }
      if ((*(byte *)(unaff_x19 + 0x11) & 1) == 0) {
        param_1 = (long *)(*(long *)(lVar15 + 0x30) + (long)iVar18 * 0x58);
        param_2 = (long *)(unaff_x20[7] + (long)iStack_10c * 0x58);
        uVar6 = param_1 == param_2;
        if (!(bool)uVar6) {
          FUN_00554814(param_1,param_2,&UNK_00910a30);
          func_0x00533528();
          func_0x006753b0();
          func_0x00674bbc();
          param_1 = alStack_a0;
          param_3 = "System/Library/Frameworks/ActivityKit.framework/ActivityKit";
          FUN_00776794();
          FUN_005558a0();
          goto LAB_00662b58;
        }
      }
      *(int *)(lVar15 + 4) = iVar18 + 1;
    }
  }
  func_0x006762c0();
  for (; uVar6 = pplVar22 == (long **)(long)(int)unaff_x20[0xf],
      (long)pplVar22 < (long)(int)unaff_x20[0xf]; pplVar22 = (long **)((long)pplVar22 + 1)) {
    lVar15 = unaff_x20[8];
    if (*(int *)(lVar15 + lVar21 + 4) == 0) {
      func_0x00673f90(unaff_x20[1]);
      pcVar8 = ".";
      FUN_00532c74();
      pcStack_d0 = pcVar8;
      plStack_c8 = param_2;
      func_0x00673fe0(*(undefined8 *)(lVar15 + lVar21 + 8));
      func_0x00675a3c();
      func_0x00675108(unaff_x21[0x12]);
      plVar16 = unaff_x21 + 0x12;
      if (!(bool)uVar6) {
        plVar16 = extraout_x9;
      }
      param_3 = (char *)*plVar16;
      param_2 = alStack_130;
      param_1 = unaff_x19;
      FUN_0065ae94();
      func_0x00674d88();
      unaff_x20 = aplStack_108[0];
    }
    lVar21 = lVar21 + 0x38;
  }
  lVar15 = 0;
  for (lVar21 = 0; bVar7 = lVar21 == *(int *)((long)unaff_x20 + 4),
      lVar21 < *(int *)((long)unaff_x20 + 4); lVar21 = lVar21 + 1) {
    bVar17 = *(byte *)(unaff_x20[7] + lVar15 + 1);
    if (((bVar17 >> 1 & 1) != 0) &&
       (((((bVar17 >> 4 & 1) == 0 || (lVar14 = *(long *)(unaff_x20[7] + lVar15 + 0x28), lVar14 == 0)
          ) || (bVar7 = *(int *)(lVar14 + 4) == 1, !bVar7)) ||
        ((*(byte *)(*(long *)(lVar14 + 0x30) + 1) >> 1 & 1) == 0)))) {
      func_0x00674d10(unaff_x20[1]);
      puVar3 = puVar1;
      if (!bVar7) {
        puVar3 = extraout_x10;
      }
      param_3 = (char *)*puVar3;
      func_0x0067541c();
      func_0x006768b4();
      unaff_x20 = aplStack_108[0];
    }
    lVar15 = lVar15 + 0x58;
  }
  lVar15 = 0;
  iVar18 = -1;
  unaff_x21 = (long *)&UNK_00910ae4;
  for (lVar21 = 0; lVar21 < (int)unaff_x20[0xf]; lVar21 = lVar21 + 1) {
    iVar2 = iVar18;
    if ((*(int *)(unaff_x20[8] + lVar15 + 4) == 1) &&
       ((*(byte *)(*(long *)(unaff_x20[8] + lVar15 + 0x30) + 1) >> 1 & 1) != 0)) {
      iVar2 = (int)lVar21;
      if (iVar18 != -1) {
        iVar2 = iVar18;
      }
    }
    else if (iVar18 != -1) {
      func_0x006746ec(unaff_x20[1]);
      func_0x0067541c();
      func_0x006768b4();
      unaff_x20 = aplStack_108[0];
    }
    iVar18 = iVar2;
    lVar15 = lVar15 + 0x38;
  }
  bVar7 = iVar18 == -1;
  iVar2 = (int)unaff_x20[0xf];
  if (!bVar7) {
    iVar2 = iVar18;
  }
  *(int *)((long)unaff_x20 + 0x7c) = iVar2;
  func_0x00674120(uStack_70);
  uVar6 = 0;
  if (bVar7) {
    return;
  }
LAB_00662b58:
  ___stack_chk_fail();
  func_0x00674cf0();
  func_0x00674bc8();
  func_0x00674ad8();
  if (((byte)param_3[0x10] >> 1 & 1) != 0) {
    func_0x00675e74(unaff_x20[4]);
    param_1 = unaff_x19;
    func_0x00676498();
    func_0x00675120();
    if (!(bool)uVar6) {
      if (extraout_w8 == 0) {
        func_0x00676bfc(unaff_x21[1]);
        func_0x00675148();
        func_0x006753bc();
        if (param_1[0x23] == 0) {
          uVar13 = (ulong)*(char *)((long)param_1 + 0x14f);
          uVar9 = uVar13;
          if ((long)uVar13 < 0) {
            uVar9 = param_1[0x28];
          }
          if (uVar9 == 0) goto LAB_0065af4c;
        }
        else {
          func_0x006756f4();
          uVar13 = (ulong)*(byte *)((long)param_1 + 0x14f);
        }
        if (((uint)uVar13 >> 7 & 1) == 0) {
          uVar13 = uVar13 & 0xff;
        }
        else {
          uVar13 = param_1[0x28];
        }
        if (uVar13 == 0) {
          return;
        }
LAB_0065af4c:
        func_0x006756f4();
        return;
      }
      func_0x00674ab0(unaff_x21[1]);
      goto LAB_0066304c;
    }
    unaff_x21[4] = (long)param_1;
    FUN_006566e8();
    if ((param_1 == (long *)0x0) &&
       ((uVar6 = *(char *)(*unaff_x19 + 0x32) == '\x01', !(bool)uVar6 ||
        (func_0x006752bc(unaff_x20[4]), ((ulong)param_1 & 1) == 0)))) {
      func_0x00674ab0(unaff_x21[1]);
      FUN_0065ad28();
      unaff_x21 = param_2;
    }
  }
  if (((*(byte *)((long)unaff_x21 + 1) >> 4 & 1) != 0) &&
     (func_0x00675c1c(), !(bool)uVar6 && extraout_x9_00 != 0)) {
    func_0x00675148();
    func_0x00674d90();
  }
  if ((*(uint *)(unaff_x20 + 2) >> 2 & 1) == 0) {
    func_0x00676670();
    if (((int)param_1 != 10) && (func_0x00676670(), (int)param_1 != 8)) goto LAB_00662c04;
    func_0x00676008();
LAB_00662bf4:
    func_0x00675148();
LAB_00662c00:
    FUN_0065ae94();
    goto LAB_00662c04;
  }
  if ((*(byte *)(*unaff_x19 + 0x33) & 1) == 0) {
    ppuVar4 = &PTR_PTR_00b25dc8;
    if ((undefined **)unaff_x20[8] != (undefined **)0x0) {
      ppuVar4 = (undefined **)unaff_x20[8];
    }
    bVar17 = *(byte *)((long)ppuVar4 + 0x8c);
  }
  else {
    bVar17 = 0;
  }
  bVar5 = *(byte *)(*unaff_x19 + 0x31);
  func_0x00675e74(unaff_x20[5]);
  plVar16 = unaff_x19;
  FUN_0065b6cc();
  cVar12 = (char)*plVar16;
  if (cVar12 == '\0') {
    if ((bVar5 & (bVar17 ^ 1) & 1) != 0) {
      puVar19 = (undefined8 *)(unaff_x20[5] & 0xfffffffffffffffc);
      lVar21 = (long)*(char *)((long)puVar19 + 0x17);
      if (lVar21 < 0) {
        lVar21 = puVar19[1];
      }
      lVar15 = (long)*(char *)((unaff_x20[6] & 0xfffffffffffffffcU) + 0x17);
      if (lVar15 < 0) {
        lVar15 = *(long *)((unaff_x20[6] & 0xfffffffffffffffcU) + 8);
      }
      puVar10 = (undefined4 *)unaff_x19[1];
      FUN_006554ac(puVar10,(int)lVar21 + (int)lVar15 + 6);
      *puVar10 = 0;
      param_2[3] = (long)puVar10;
      lVar21 = (long)*(char *)((long)puVar19 + 0x17);
      puVar11 = puVar19;
      if (lVar21 < 0) {
        lVar21 = puVar19[1];
        puVar11 = (undefined8 *)*puVar19;
      }
      _memcpy(puVar10 + 1,puVar11,lVar21 + 1);
      lVar21 = (long)*(char *)((long)puVar19 + 0x17);
      if (lVar21 < 0) {
        lVar21 = puVar19[1];
      }
      puVar19 = (undefined8 *)(unaff_x20[6] & 0xfffffffffffffffc);
      lVar15 = (long)*(char *)((long)puVar19 + 0x17);
      if (lVar15 < 0) {
        lVar15 = puVar19[1];
        puVar19 = (undefined8 *)*puVar19;
      }
      _memcpy((long)(puVar10 + 1) + lVar21 + 1,puVar19,lVar15 + 1);
      func_0x00676664();
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
        return;
      }
      FUN_00655068(unaff_x19[1]);
      return;
    }
    if ((bVar17 & 1) == 0) {
LAB_00662ec8:
      func_0x00676008();
      func_0x00676bfc();
      func_0x00675148();
      FUN_0065aebc();
      return;
    }
    func_0x00675e24();
    plVar16 = unaff_x19;
    FUN_0065b364();
    func_0x00674d88();
    cVar12 = (char)*plVar16;
    if (cVar12 == '\0') goto LAB_00662ec8;
  }
  if ((*(byte *)((long)unaff_x20 + 0x11) >> 2 & 1) == 0) {
    if (cVar12 == '\x01') {
      cVar12 = '\v';
LAB_00662ee8:
      *(char *)((long)param_2 + 2) = cVar12;
      goto LAB_00662eec;
    }
    if (cVar12 == '\x04') {
      cVar12 = '\x0e';
      goto LAB_00662ee8;
    }
    lVar21 = param_2[1];
  }
  else {
LAB_00662eec:
    param_1 = param_2;
    FUN_00656c60();
    if ((int)param_1 != 10) {
      func_0x00676670();
      if ((int)param_1 != 8) {
        func_0x00676008();
        goto LAB_00662bf4;
      }
      bVar7 = (char)*plVar16 != '\x04';
      if (bVar7) {
        plVar16 = (long *)0x0;
      }
      param_2[6] = (long)plVar16;
      if (bVar7) {
        lVar21 = param_2[1];
        goto LAB_00663044;
      }
      plVar16 = param_2;
      func_0x006579b0();
      if ((*plVar16 & 0x100) != 0) {
        *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) & 0xfe;
      }
      if ((*param_2 & 0x100) == 0) {
        param_1 = param_2;
        func_0x006579b0();
        if (0 < *(int *)((long)param_1 + 4)) {
          func_0x00676678();
          param_2[10] = param_1[7];
        }
        goto LAB_00662c04;
      }
      param_1 = (long *)0x0;
      FUN_006acaac();
      if (((ulong)param_1 & 1) == 0) {
        func_0x00676008();
        goto LAB_00662f24;
      }
      func_0x00676678();
      param_1 = unaff_x19;
      func_0x006768c0();
      plVar16 = param_1;
      if ((char)*param_1 == '\x05') {
LAB_00662fc8:
        plVar20 = (long *)plVar16[2];
        func_0x00676678();
        if (plVar20 == param_1) {
          param_2[10] = (long)plVar16;
          goto LAB_00662c04;
        }
      }
      else if ((char)*param_1 == '\x06') {
        plVar16 = (long *)((long)param_1 + -1);
        goto LAB_00662fc8;
      }
      func_0x00676008();
      func_0x00674ab0();
      FUN_0065ad28();
LAB_00662c04:
      func_0x00676664();
      if (((ulong)param_1 & 1) == 0) {
        FUN_0065609c(unaff_x19[0x16],param_2[4],*(undefined4 *)((long)param_2 + 4));
        if (param_2[4] == 0) {
          func_0x00675e24();
        }
        else {
          func_0x00675b24(*(undefined8 *)(param_2[4] + 8),&stack0xfffffffffffffe50);
        }
        if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
          func_0x006762f0(param_2[1]);
          func_0x006750e0();
        }
        else {
          func_0x006762f0(param_2[1]);
          func_0x006750e0();
        }
        func_0x00674d88();
        return;
      }
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
        return;
      }
      uVar9 = unaff_x19[1];
      FUN_00655068();
      if ((uVar9 & 1) != 0) {
        return;
      }
      func_0x00676008();
      func_0x00674ab0();
      FUN_0065af68();
      return;
    }
    bVar7 = (char)*plVar16 != '\x01';
    if (bVar7) {
      plVar16 = (long *)0x0;
    }
    param_2[6] = (long)plVar16;
    if (!bVar7) {
      if ((*param_2 & 0x100) == 0) goto LAB_00662c04;
LAB_00662f24:
      func_0x00675148();
      goto LAB_00662c00;
    }
    lVar21 = param_2[1];
  }
LAB_00663044:
  func_0x00674ab0(lVar21);
LAB_0066304c:
  FUN_0065ad28();
  return;
}



/* Entry: 00662b70; end: 00663117;  */

void FUN_00662b70(long *param_1,long *param_2,long param_3)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined1 in_ZR;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  int extraout_w8;
  ulong uVar8;
  long lVar9;
  long extraout_x9;
  long lVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar11;
  byte bVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  func_0x00674ad8();
  if ((*(byte *)(param_3 + 0x10) >> 1 & 1) != 0) {
    func_0x00675e74(*(undefined8 *)(unaff_x20 + 0x20));
    param_1 = unaff_x19;
    func_0x00676498();
    func_0x00675120();
    if (!(bool)in_ZR) {
      if (extraout_w8 == 0) {
        func_0x00676bfc(unaff_x21[1]);
        func_0x00675148();
        func_0x006753bc();
        if (param_1[0x23] == 0) {
          uVar8 = (ulong)*(char *)((long)param_1 + 0x14f);
          uVar4 = uVar8;
          if ((long)uVar8 < 0) {
            uVar4 = param_1[0x28];
          }
          if (uVar4 == 0) goto LAB_0065af4c;
        }
        else {
          func_0x006756f4();
          uVar8 = (ulong)*(byte *)((long)param_1 + 0x14f);
        }
        if (((uint)uVar8 >> 7 & 1) == 0) {
          uVar8 = uVar8 & 0xff;
        }
        else {
          uVar8 = param_1[0x28];
        }
        if (uVar8 == 0) {
          return;
        }
LAB_0065af4c:
        func_0x006756f4();
        return;
      }
      func_0x00674ab0(unaff_x21[1]);
      goto LAB_0066304c;
    }
    unaff_x21[4] = (long)param_1;
    FUN_006566e8();
    if ((param_1 == (long *)0x0) &&
       ((in_ZR = *(char *)(*unaff_x19 + 0x32) == '\x01', !(bool)in_ZR ||
        (func_0x006752bc(*(undefined8 *)(unaff_x20 + 0x20)), ((ulong)param_1 & 1) == 0)))) {
      func_0x00674ab0(unaff_x21[1]);
      FUN_0065ad28();
      unaff_x21 = param_2;
    }
  }
  if (((*(byte *)((long)unaff_x21 + 1) >> 4 & 1) != 0) &&
     (func_0x00675c1c(), !(bool)in_ZR && extraout_x9 != 0)) {
    func_0x00675148();
    func_0x00674d90();
  }
  if ((*(uint *)(unaff_x20 + 0x10) >> 2 & 1) == 0) {
    func_0x00676670();
    if (((int)param_1 != 10) && (func_0x00676670(), (int)param_1 != 8)) goto LAB_00662c04;
    func_0x00676008();
LAB_00662bf4:
    func_0x00675148();
LAB_00662c00:
    FUN_0065ae94();
    goto LAB_00662c04;
  }
  if ((*(byte *)(*unaff_x19 + 0x33) & 1) == 0) {
    ppuVar1 = &PTR_PTR_00b25dc8;
    if (*(undefined ***)(unaff_x20 + 0x40) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x40);
    }
    bVar12 = *(byte *)((long)ppuVar1 + 0x8c);
  }
  else {
    bVar12 = 0;
  }
  bVar2 = *(byte *)(*unaff_x19 + 0x31);
  func_0x00675e74(*(undefined8 *)(unaff_x20 + 0x28));
  plVar11 = unaff_x19;
  FUN_0065b6cc();
  cVar7 = (char)*plVar11;
  if (cVar7 == '\0') {
    if ((bVar2 & (bVar12 ^ 1) & 1) != 0) {
      puVar13 = (undefined8 *)(*(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc);
      lVar9 = (long)*(char *)((long)puVar13 + 0x17);
      if (lVar9 < 0) {
        lVar9 = puVar13[1];
      }
      uVar4 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
      lVar10 = (long)*(char *)(uVar4 + 0x17);
      if (lVar10 < 0) {
        lVar10 = *(long *)(uVar4 + 8);
      }
      puVar5 = (undefined4 *)unaff_x19[1];
      FUN_006554ac(puVar5,(int)lVar9 + (int)lVar10 + 6);
      *puVar5 = 0;
      param_2[3] = (long)puVar5;
      lVar9 = (long)*(char *)((long)puVar13 + 0x17);
      puVar6 = puVar13;
      if (lVar9 < 0) {
        lVar9 = puVar13[1];
        puVar6 = (undefined8 *)*puVar13;
      }
      _memcpy(puVar5 + 1,puVar6,lVar9 + 1);
      lVar9 = (long)*(char *)((long)puVar13 + 0x17);
      if (lVar9 < 0) {
        lVar9 = puVar13[1];
      }
      puVar13 = (undefined8 *)(*(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc);
      lVar10 = (long)*(char *)((long)puVar13 + 0x17);
      if (lVar10 < 0) {
        lVar10 = puVar13[1];
        puVar13 = (undefined8 *)*puVar13;
      }
      _memcpy((long)(puVar5 + 1) + lVar9 + 1,puVar13,lVar10 + 1);
      func_0x00676664();
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
        return;
      }
      FUN_00655068(unaff_x19[1]);
      return;
    }
    if ((bVar12 & 1) == 0) {
LAB_00662ec8:
      func_0x00676008();
      func_0x00676bfc();
      func_0x00675148();
      FUN_0065aebc();
      return;
    }
    func_0x00675e24();
    plVar11 = unaff_x19;
    FUN_0065b364();
    func_0x00674d88();
    cVar7 = (char)*plVar11;
    if (cVar7 == '\0') goto LAB_00662ec8;
  }
  if ((*(byte *)(unaff_x20 + 0x11) >> 2 & 1) == 0) {
    if (cVar7 == '\x01') {
      cVar7 = '\v';
LAB_00662ee8:
      *(char *)((long)param_2 + 2) = cVar7;
      goto LAB_00662eec;
    }
    if (cVar7 == '\x04') {
      cVar7 = '\x0e';
      goto LAB_00662ee8;
    }
    lVar9 = param_2[1];
  }
  else {
LAB_00662eec:
    param_1 = param_2;
    FUN_00656c60();
    if ((int)param_1 != 10) {
      func_0x00676670();
      if ((int)param_1 != 8) {
        func_0x00676008();
        goto LAB_00662bf4;
      }
      bVar3 = (char)*plVar11 != '\x04';
      if (bVar3) {
        plVar11 = (long *)0x0;
      }
      param_2[6] = (long)plVar11;
      if (bVar3) {
        lVar9 = param_2[1];
        goto LAB_00663044;
      }
      plVar11 = param_2;
      func_0x006579b0();
      if ((*plVar11 & 0x100) != 0) {
        *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) & 0xfe;
      }
      if ((*param_2 & 0x100) == 0) {
        param_1 = param_2;
        func_0x006579b0();
        if (0 < *(int *)((long)param_1 + 4)) {
          func_0x00676678();
          param_2[10] = param_1[7];
        }
        goto LAB_00662c04;
      }
      param_1 = (long *)0x0;
      FUN_006acaac();
      if (((ulong)param_1 & 1) == 0) {
        func_0x00676008();
        goto LAB_00662f24;
      }
      func_0x00676678();
      param_1 = unaff_x19;
      func_0x006768c0();
      plVar11 = param_1;
      if ((char)*param_1 == '\x05') {
LAB_00662fc8:
        plVar14 = (long *)plVar11[2];
        func_0x00676678();
        if (plVar14 == param_1) {
          param_2[10] = (long)plVar11;
          goto LAB_00662c04;
        }
      }
      else if ((char)*param_1 == '\x06') {
        plVar11 = (long *)((long)param_1 + -1);
        goto LAB_00662fc8;
      }
      func_0x00676008();
      func_0x00674ab0();
      FUN_0065ad28();
LAB_00662c04:
      func_0x00676664();
      if (((ulong)param_1 & 1) == 0) {
        FUN_0065609c(unaff_x19[0x16],param_2[4],*(undefined4 *)((long)param_2 + 4));
        if (param_2[4] == 0) {
          func_0x00675e24();
        }
        else {
          func_0x00675b24(*(undefined8 *)(param_2[4] + 8),&stack0xffffffffffffffa0);
        }
        if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
          func_0x006762f0(param_2[1]);
          func_0x006750e0();
        }
        else {
          func_0x006762f0(param_2[1]);
          func_0x006750e0();
        }
        func_0x00674d88();
        return;
      }
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
        return;
      }
      uVar4 = unaff_x19[1];
      FUN_00655068();
      if ((uVar4 & 1) != 0) {
        return;
      }
      func_0x00676008();
      func_0x00674ab0();
      FUN_0065af68();
      return;
    }
    bVar3 = (char)*plVar11 != '\x01';
    if (bVar3) {
      plVar11 = (long *)0x0;
    }
    param_2[6] = (long)plVar11;
    if (!bVar3) {
      if ((*param_2 & 0x100) == 0) goto LAB_00662c04;
LAB_00662f24:
      func_0x00675148();
      goto LAB_00662c00;
    }
    lVar9 = param_2[1];
  }
LAB_00663044:
  func_0x00674ab0(lVar9);
LAB_0066304c:
  FUN_0065ad28();
  return;
}



/* Entry: 00663118; end: 00663357;  */

void FUN_00663118(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar7;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 unaff_x30;
  long lStack0000000000000008;
  long lStack0000000000000018;
  
  func_0x00676e00();
  func_0x00674c64();
  if ((bRam0000000000b63cc8 & 1) == 0) {
    puVar2 = (ulong *)0xb63cc8;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0067570c();
      FUN_0066986c(puVar2,0x12);
      for (lStack0000000000000018 = 0; lStack0000000000000018 != 0x80;
          lStack0000000000000018 = lStack0000000000000018 + 8) {
        Hint_Prefetch(*puVar2,0,2,0);
        uVar9 = *(ulong *)((long)&PTR_DAT_00a0dac8 + lStack0000000000000018);
        uVar3 = uVar9;
        _strlen();
        func_0x00675824();
        FUN_0066696c();
        lStack0000000000000008 = 0;
        uVar10 = puVar2[2];
        uVar7 = *puVar2 >> 0xc ^ uVar3 >> 7;
        while( true ) {
          uVar7 = uVar7 & uVar10;
          func_0x006753d4();
          for (uVar8 = extraout_x8_02 & 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
            uVar5 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
            puVar6 = (ulong *)(puVar2[1] +
                              (uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar10
                              ) * 0x10);
            uVar5 = *puVar6;
            uVar1 = puVar6[1];
            uVar4 = uVar9;
            _strlen(uVar9);
            func_0x00465a14(uVar5,uVar1,uVar9,uVar4);
            if ((uVar5 & 1) != 0) goto LAB_006632fc;
          }
          func_0x00674774();
          if ((extraout_x8_03 & 1) != 0) break;
          lStack0000000000000008 = lStack0000000000000008 + 8;
          uVar7 = lStack0000000000000008 + uVar7;
        }
        puVar6 = puVar2;
        func_0x006698a0(puVar2,uVar3);
        FUN_00537dd8(puVar2[1] + (long)puVar6 * 0x10,uVar9);
LAB_006632fc:
      }
      puRam0000000000b63cc0 = puVar2;
      ___cxa_guard_release(0xb63cc8);
    }
  }
  puVar2 = puRam0000000000b63cc0;
  Hint_Prefetch(*puRam0000000000b63cc0,0,2,0);
  func_0x00674b10(*puRam0000000000b63cc0);
  FUN_0066696c();
  uVar7 = puVar2[1];
  uVar3 = puVar2[2];
  func_0x006745f4(*puVar2 >> 0xc);
  do {
    func_0x00674f7c();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x0067590c();
      puVar2 = (ulong *)(uVar7 + (extraout_x8_00 & uVar3) * 0x10);
      uVar9 = *puVar2;
      func_0x00676338(uVar9,puVar2[1]);
      func_0x00465a14();
      if ((uVar9 & 1) != 0) goto LAB_006631b8;
      func_0x00676458();
    }
    func_0x006745a8();
  } while ((extraout_x8_01 & 1) == 0);
LAB_006631b8:
  func_0x00676ddc((extraout_x8 & 0x8080808080808080) != 0,unaff_x30);
  return;
}



/* Entry: 00663358; end: 0066344f;  */

void FUN_00663358(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x19;
  long lVar10;
  long *unaff_x21;
  long lVar11;
  undefined8 *puVar12;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  
  if (*param_1 == 0) {
    unaff_x21 = param_1;
    if (param_1[1] == 0) {
      if ((param_4 == 0) || (*(long *)(param_4 + 0x18) == 0)) {
        puVar6 = &UNK_009118fc;
        func_0x00674d08();
        func_0x0067424c();
      }
      else if ((*(byte *)(*(long *)(param_4 + 0x18) + 0x31) & 1) == 0) {
        puVar6 = &UNK_00911910;
        func_0x00674d08();
        func_0x0067424c();
      }
      else {
        if (*(char *)(param_4 + 2) != '\x01') {
          func_0x00675438();
          puVar3 = *(undefined4 **)(extraout_x8 + 0x28);
          FUN_006554ac(puVar3,(int)unaff_x19 + 5);
          *puVar3 = 0;
          param_1[1] = (long)puVar3;
          func_0x006750f0(puVar3 + 1);
          _memcpy();
          *(undefined1 *)((long)(puVar3 + 1) + (long)unaff_x19) = 0;
          return;
        }
        puVar6 = &UNK_00911938;
        func_0x00674d08();
        func_0x0067424c();
      }
    }
    else {
      puVar6 = &UNK_009118e8;
      func_0x00674d08();
      func_0x0067424c();
    }
  }
  else {
    puVar6 = &UNK_009118ef;
    func_0x00674d08();
    func_0x0067424c();
  }
  FUN_00776794();
  func_0x00674d28();
  if (param_1[1] == 0) {
    *param_1 = (long)puVar6;
    return;
  }
  pcStack_58 = FUN_00663450;
  iVar5 = 0x9118e8;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00674d08();
  func_0x0067424c();
  FUN_00776794();
  func_0x00674d28();
  if (0xe0000000 < iVar5 + 0xe0000000U) {
    lVar10 = param_1[1];
    if ((*param_1 == lVar10) || (iVar5 != *(int *)(lVar10 + -4))) {
      pcVar7 = FUN_00663488;
      func_0x00676210();
      ppuStack_40 = &puStack_60;
      pcStack_38 = pcVar7;
      func_0x006751dc();
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar12 = puVar2 + 1;
        *puVar2 = unaff_x21;
LAB_0066359c:
        unaff_x19[1] = (long)puVar12;
        return;
      }
      lVar10 = *unaff_x19;
      lVar11 = (long)puVar2 - lVar10;
      uVar1 = (lVar11 >> 3) + 1;
      if (uVar1 >> 0x3d == 0) {
        uVar8 = param_1[2] - lVar10;
        uVar9 = (long)uVar8 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d == 0) {
          lVar4 = uVar9 << 3;
          __Znwm();
          puVar2 = (undefined8 *)(lVar4 + lVar11);
          puVar12 = puVar2 + 1;
          *puVar2 = unaff_x21;
          _memcpy(puVar2 + -(lVar11 >> 3),lVar10,lVar11);
          *unaff_x19 = (long)(puVar2 + -(lVar11 >> 3));
          unaff_x19[1] = (long)puVar12;
          unaff_x19[2] = lVar4 + uVar9 * 8;
          if (lVar10 != 0) {
            func_0x00675e98();
          }
          goto LAB_0066359c;
        }
      }
      else {
        FUN_006699b0();
      }
      FUN_0040cee8();
      func_0x006752e8();
      if (param_1 != (long *)0x0) {
        func_0x00675a50();
      }
      return;
    }
    *(int *)(lVar10 + -4) = iVar5 + 1;
  }
  return;
}



/* Entry: 00663450; end: 00663487;  */

void FUN_00663450(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long lVar7;
  undefined8 unaff_x21;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1[1] == 0) {
    *param_1 = param_2;
    return;
  }
  iVar4 = 0x9118e8;
  func_0x00674d08();
  func_0x0067424c();
  FUN_00776794();
  func_0x00674d28();
  if (0xe0000000 < iVar4 + 0xe0000000U) {
    lVar7 = param_1[1];
    if ((*param_1 == lVar7) || (iVar4 != *(int *)(lVar7 + -4))) {
      func_0x00676210();
      func_0x006751dc();
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar9 = puVar2 + 1;
        *puVar2 = unaff_x21;
LAB_0066359c:
        unaff_x19[1] = (long)puVar9;
        return;
      }
      lVar7 = *unaff_x19;
      lVar8 = (long)puVar2 - lVar7;
      uVar1 = (lVar8 >> 3) + 1;
      if (uVar1 >> 0x3d == 0) {
        uVar5 = param_1[2] - lVar7;
        uVar6 = (long)uVar5 >> 2;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar6 = 0x1fffffffffffffff;
        }
        if (uVar6 >> 0x3d == 0) {
          lVar3 = uVar6 << 3;
          __Znwm();
          puVar2 = (undefined8 *)(lVar3 + lVar8);
          puVar9 = puVar2 + 1;
          *puVar2 = unaff_x21;
          _memcpy(puVar2 + -(lVar8 >> 3),lVar7,lVar8);
          *unaff_x19 = (long)(puVar2 + -(lVar8 >> 3));
          unaff_x19[1] = (long)puVar9;
          unaff_x19[2] = lVar3 + uVar6 * 8;
          if (lVar7 != 0) {
            func_0x00675e98();
          }
          goto LAB_0066359c;
        }
      }
      else {
        FUN_006699b0();
      }
      FUN_0040cee8();
      func_0x006752e8();
      if (param_1 != (long *)0x0) {
        func_0x00675a50();
      }
      return;
    }
    *(int *)(lVar7 + -4) = iVar4 + 1;
  }
  return;
}



/* Entry: 00663488; end: 006634f7;  */

void FUN_00663488(long *param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  undefined8 unaff_x21;
  long lVar7;
  undefined8 *puVar8;
  
  if (0xe0000000 < param_2 + 0xe0000000U) {
    lVar6 = param_1[1];
    if ((*param_1 == lVar6) || (param_2 != *(int *)(lVar6 + -4))) {
      func_0x00676210(param_1,CONCAT44(param_2 + 1,param_2));
      func_0x006751dc();
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar8 = puVar2 + 1;
        *puVar2 = unaff_x21;
LAB_0066359c:
        unaff_x19[1] = (long)puVar8;
        return;
      }
      lVar6 = *unaff_x19;
      lVar7 = (long)puVar2 - lVar6;
      uVar1 = (lVar7 >> 3) + 1;
      if (uVar1 >> 0x3d == 0) {
        uVar4 = param_1[2] - lVar6;
        uVar5 = (long)uVar4 >> 2;
        if (uVar5 <= uVar1) {
          uVar5 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar4) {
          uVar5 = 0x1fffffffffffffff;
        }
        if (uVar5 >> 0x3d == 0) {
          lVar3 = uVar5 << 3;
          __Znwm();
          puVar2 = (undefined8 *)(lVar3 + lVar7);
          puVar8 = puVar2 + 1;
          *puVar2 = unaff_x21;
          _memcpy(puVar2 + -(lVar7 >> 3),lVar6,lVar7);
          *unaff_x19 = (long)(puVar2 + -(lVar7 >> 3));
          unaff_x19[1] = (long)puVar8;
          unaff_x19[2] = lVar3 + uVar5 * 8;
          if (lVar6 != 0) {
            func_0x00675e98();
          }
          goto LAB_0066359c;
        }
      }
      else {
        FUN_006699b0();
      }
      FUN_0040cee8();
      func_0x006752e8();
      if (param_1 != (long *)0x0) {
        func_0x00675a50();
      }
      return;
    }
    *(int *)(lVar6 + -4) = param_2 + 1;
  }
  return;
}



/* Entry: 006634f8; end: 006635af;  */

void FUN_006634f8(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  undefined8 unaff_x21;
  long lVar7;
  undefined8 *puVar8;
  
  func_0x00676210();
  func_0x006751dc();
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
    puVar8 = puVar2 + 1;
    *puVar2 = unaff_x21;
LAB_0066359c:
    unaff_x19[1] = (long)puVar8;
    return;
  }
  lVar6 = *unaff_x19;
  lVar7 = (long)puVar2 - lVar6;
  uVar1 = (lVar7 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = (long)*(undefined8 **)(param_1 + 0x10) - lVar6;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 >> 0x3d == 0) {
      lVar3 = uVar5 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar7);
      puVar8 = puVar2 + 1;
      *puVar2 = unaff_x21;
      _memcpy(puVar2 + -(lVar7 >> 3),lVar6,lVar7);
      *unaff_x19 = (long)(puVar2 + -(lVar7 >> 3));
      unaff_x19[1] = (long)puVar8;
      unaff_x19[2] = lVar3 + uVar5 * 8;
      if (lVar6 != 0) {
        func_0x00675e98();
      }
      goto LAB_0066359c;
    }
  }
  else {
    FUN_006699b0();
  }
  FUN_0040cee8();
  func_0x006752e8();
  if (param_1 != 0) {
    func_0x00675a50();
  }
  return;
}



/* Entry: 006635b0; end: 006635d3;  */

void FUN_006635b0(long param_1)

{
  func_0x006752e8();
  if (param_1 != 0) {
    func_0x00675a50();
  }
  return;
}



/* Entry: 006635d4; end: 00663823;  */

void FUN_006635d4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long alStack_a0 [4];
  undefined1 auStack_80 [24];
  long *plStack_68;
  
  func_0x0067527c();
  alStack_a0[0] = param_2;
  if ((*(byte *)(param_2 + 1) >> 3 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 8);
    if ((bRam0000000000b63cd8 & 1) == 0) {
      puVar5 = (undefined8 *)0xb63cd8;
      ___cxa_guard_acquire();
      if ((int)puVar5 != 0) {
        func_0x0067570c();
        puVar6 = puVar5;
        func_0x00674868();
        *puVar6 = extraout_x8;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        FUN_00666a08();
        for (lVar8 = 0; lVar8 != 0x48; lVar8 = lVar8 + 8) {
          FUN_00425cb4(auStack_80,&UNK_00911c1d);
          func_0x00676068();
          func_0x00675eb0();
          func_0x006753f8();
          func_0x00675368();
          FUN_00425cb4(auStack_80,&UNK_00911c2e);
          func_0x00676068();
          func_0x00675eb0();
          func_0x006753f8();
          func_0x00675368();
        }
        FUN_0054a414(FUN_0066a4f4,puVar5);
        puRam0000000000b63cd0 = puVar5;
        ___cxa_guard_release(0xb63cd8);
      }
    }
    Hint_Prefetch(*puRam0000000000b63cd0,0,2,0);
    bVar2 = *(byte *)(lVar7 + 0x2f);
    in_ZR = bVar2 == 0;
    uVar1 = *(ulong *)(lVar7 + 0x20);
    lVar8 = *(long *)(lVar7 + 0x18);
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
      lVar8 = lVar7 + 0x18;
    }
    param_1 = puRam0000000000b63cd0;
    FUN_0066696c(puRam0000000000b63cd0,lVar8,uVar1);
    func_0x00675f74();
    FUN_0066a50c();
    unaff_x21 = alStack_a0[0];
    if (param_1 == (undefined8 *)0x0) {
      func_0x0067447c(*(undefined8 *)(alStack_a0[0] + 8));
      func_0x00675fd0();
    }
  }
  func_0x00676dac(*(undefined8 *)(unaff_x21 + 0x48));
  if ((bool)in_ZR) {
    func_0x006742cc(*(undefined8 *)(unaff_x21 + 8));
  }
  if ((*(byte *)(unaff_x21 + 1) & 1) != 0) {
    func_0x0067447c(*(undefined8 *)(unaff_x21 + 8));
    func_0x00675b3c();
  }
  func_0x006767d8();
  uVar3 = (int)param_1 == 8;
  if (((bool)uVar3) && (func_0x00675830(), param_1 != (undefined8 *)0x0)) {
    func_0x00675830();
    func_0x006760d8();
    if ((bool)uVar3) {
      plStack_68 = alStack_a0;
      func_0x00674658();
      FUN_0065ad28();
    }
  }
  iVar4 = (int)param_1;
  func_0x00675444();
  if (iVar4 == 10) {
    func_0x006742cc(*(undefined8 *)(alStack_a0[0] + 8));
  }
  return;
}



/* Entry: 00663824; end: 0066393f;  */

void FUN_00663824(void)

{
  undefined1 uVar1;
  long unaff_x21;
  long unaff_x23;
  
  func_0x00676210();
  func_0x0067527c();
  func_0x0067546c();
  while (unaff_x23 < *(int *)(unaff_x21 + 0x80)) {
    func_0x00674298(*(undefined8 *)(unaff_x21 + 0x48));
    FUN_00663824();
    func_0x006761b8();
  }
  func_0x0067546c();
  while (unaff_x23 < *(int *)(unaff_x21 + 4)) {
    func_0x00674298(*(undefined8 *)(unaff_x21 + 0x38));
    FUN_006635d4();
    func_0x00675860();
  }
  func_0x0067546c();
  while (unaff_x23 < *(int *)(unaff_x21 + 0x8c)) {
    func_0x00674298(*(undefined8 *)(unaff_x21 + 0x60));
    FUN_006635d4();
    func_0x00675860();
  }
  uVar1 = *(int *)(unaff_x21 + 0x88) == 0;
  if (0 < *(int *)(unaff_x21 + 0x88)) {
    func_0x00676c30(*(undefined8 *)(unaff_x21 + 8));
    func_0x00674d1c();
    func_0x006765b8();
  }
  func_0x00676344(*(undefined8 *)(unaff_x21 + 0x20));
  if ((bool)uVar1) {
    func_0x0067447c(*(undefined8 *)(unaff_x21 + 8));
    FUN_0065ad28();
    return;
  }
  return;
}



/* Entry: 00663940; end: 006645cf;  */

void FUN_00663940(long *param_1,char *param_2)

{
  byte bVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  ulong uVar19;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  uint uVar20;
  undefined **ppuVar21;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long lVar22;
  long extraout_x10;
  long *extraout_x11;
  ulong extraout_x11_00;
  long extraout_x12;
  undefined8 extraout_x12_00;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 uVar27;
  long lVar28;
  long lStack_1a8;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined8 ***pppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  long *plStack_120;
  long lStack_118;
  long *plStack_c0;
  long lStack_b8;
  undefined8 uStack_90;
  
  func_0x0067527c();
  func_0x006743c8();
  uVar5 = *(char *)(*param_1 + 0x31) == '\x01';
  uStack_90 = extraout_x8;
  if ((bool)uVar5) {
    if (unaff_x21 == (long *)0x0) goto LAB_006642c8;
    func_0x0067528c();
    if (param_1 == (long *)0x0) goto LAB_006642c8;
  }
  if (999 < *(int *)(unaff_x21[2] + 0x20)) {
    if (*(int *)(unaff_x19 + 0x54) == 2) {
      func_0x006741bc(unaff_x21[1]);
    }
    uVar5 = *(int *)(unaff_x19 + 0x58) == 10;
    if ((bool)uVar5) {
      func_0x006741bc(unaff_x21[1]);
    }
    if ((*(byte *)(unaff_x21[7] + 0x28) >> 4 & 1) != 0) {
      func_0x006741bc(unaff_x21[1]);
    }
    if (((*(byte *)((long)unaff_x21 + 1) >> 5 & 1) == 0) &&
       (param_1 = unaff_x21, func_0x006596f4(), ((ulong)param_1 & 1) == 0)) {
      if ((*unaff_x21 & 0x100) != 0) {
        func_0x006741bc(unaff_x21[1]);
      }
      func_0x00675830();
      if (param_1 != (long *)0x0) {
        func_0x00675830();
        uVar5 = *(int *)(param_1[6] + 0x34) == 1;
        if (!(bool)uVar5) {
          func_0x006741bc(unaff_x21[1]);
        }
      }
    }
    if (((*(byte *)((long)unaff_x21 + 1) >> 3 & 1) != 0) &&
       (func_0x00676dac(unaff_x21[9]), (bool)uVar5)) {
      func_0x006741bc(unaff_x21[1]);
    }
    if ((unaff_x21[4] == 0) || ((*(byte *)(*(long *)(unaff_x21[4] + 0x20) + 0x53) & 1) == 0)) {
      if (((*(byte *)(unaff_x21[8] + 0x28) & 1) != 0) &&
         (((((bVar1 = *(byte *)((long)unaff_x21 + 1), (bVar1 >> 4 & 1) != 0 && (unaff_x21[5] != 0))
            || ((bVar1 >> 5 & 1) != 0)) ||
           (((bVar1 >> 3 & 1) != 0 && (func_0x00676dac(), !(bool)uVar5)))) ||
          ((func_0x0067528c(), param_1 != (long *)0x0 && (*(int *)(unaff_x21[8] + 0x30) == 2)))))) {
        func_0x006741bc(unaff_x21[1]);
      }
      iVar7 = (int)param_1;
      if (((*(byte *)((long)unaff_x21 + 1) >> 5 & 1) == 0) &&
         ((*(byte *)(unaff_x21[8] + 0x28) >> 2 & 1) != 0)) {
        func_0x006741bc(unaff_x21[1]);
      }
      func_0x00675444();
      if (iVar7 != 9) {
        plVar26 = unaff_x21;
        func_0x006595dc();
        if ((int)plVar26 == 0) {
LAB_00663b70:
          if ((*(byte *)(unaff_x21[8] + 0x28) >> 3 & 1) != 0) {
            func_0x006741bc(unaff_x21[1]);
          }
        }
        else {
          lVar23 = -1;
          lVar28 = 0;
          do {
            func_0x0067528c();
            lVar23 = lVar23 + 1;
            if (*(int *)((long)plVar26 + 4) <= lVar23) goto LAB_00663b70;
            func_0x0067528c();
            plVar26 = (long *)(plVar26[7] + lVar28);
            FUN_006538b4();
            lVar28 = lVar28 + 0x58;
          } while ((int)plVar26 != 9);
        }
      }
      param_1 = unaff_x21;
      FUN_00659690();
      if ((((ulong)param_1 & 1) == 0) && (*(int *)(unaff_x21[8] + 0x38) == 1)) {
        func_0x006741bc(unaff_x21[1]);
      }
      func_0x006767d8();
      bVar6 = (int)param_1 == 10;
      if (((!bVar6) || (func_0x006751a4(unaff_x21[6]), bVar6)) &&
         ((*(byte *)(unaff_x21[8] + 0x28) >> 4 & 1) != 0)) {
        func_0x006741bc(unaff_x21[1]);
      }
    }
  }
  iVar7 = (int)param_1;
  lVar23 = unaff_x21[7];
  if ((*(byte *)(lVar23 + 0x28) >> 2 & 1) != 0) {
    if (*(int *)(unaff_x21[2] + 0x20) < 0x3e9) {
      if (*(int *)(unaff_x21[2] + 0x20) == 1000) {
        func_0x006767d8();
        if (iVar7 != 9) {
          lVar28 = unaff_x21[1];
          puVar8 = &stack0xfffffffffffffef0;
          FUN_006645d0(puVar8,&UNK_00910d94,0x3e,lVar28 + 0x18);
          iVar7 = (int)puVar8;
          param_2 = (char *)(lVar28 + 0x18);
          func_0x00674378();
          func_0x006764e0();
        }
        if ((*(int *)(lVar23 + 0x80) == 1) && ((*(byte *)((long)unaff_x21 + 1) >> 3 & 1) != 0)) {
          lVar23 = unaff_x21[1];
          puVar8 = &stack0xfffffffffffffef0;
          FUN_006645d0(puVar8,&UNK_00910dd3,0x48,lVar23 + 0x18);
          iVar7 = (int)puVar8;
          param_2 = (char *)(lVar23 + 0x18);
          func_0x00674378();
          func_0x006764e0();
        }
      }
    }
    else {
      func_0x006741bc(unaff_x21[1]);
    }
  }
  if ((((*(byte *)(unaff_x21[7] + 0x89) & 1) != 0) || (*(char *)(unaff_x21[7] + 0x8a) == '\x01')) &&
     (func_0x00675444(), iVar7 != 0xb)) {
    func_0x006742cc(unaff_x21[1]);
  }
  if (*(char *)(unaff_x21[7] + 0x88) == '\x01') {
    plVar26 = unaff_x21;
    FUN_00659690();
    iVar7 = (int)plVar26;
    if (((ulong)plVar26 & 1) == 0) {
      func_0x006742cc(unaff_x21[1]);
    }
  }
  if (((unaff_x21[4] != 0) &&
      (bVar6 = *(undefined ***)(unaff_x21[4] + 0x20) == &PTR_PTR_00b25cc0, !bVar6)) &&
     (func_0x00676344(), bVar6)) {
    if ((*(byte *)((long)unaff_x21 + 1) >> 3 & 1) == 0) {
      func_0x006741bc(unaff_x21[1]);
    }
    else {
      func_0x00675c1c();
      if ((!bVar6) || (func_0x00675444(), iVar7 != 0xb)) {
        func_0x006742cc(unaff_x21[1]);
      }
    }
  }
  if ((((unaff_x21[2] != 0) &&
       (ppuVar21 = *(undefined ***)(unaff_x21[2] + 0x80), ppuVar21 != &PTR_PTR_00b25d18)) &&
      ((*(int *)(ppuVar21 + 0x15) == 3 && (unaff_x21[4] != 0)))) &&
     (((lVar23 = *(long *)(unaff_x21[4] + 0x10), lVar23 == 0 ||
       (ppuVar21 = *(undefined ***)(lVar23 + 0x80), ppuVar21 == &PTR_PTR_00b25d18)) ||
      (*(int *)(ppuVar21 + 0x15) != 3)))) {
    func_0x0067447c(unaff_x21[1]);
    func_0x00675fd0();
  }
  plVar10 = unaff_x21;
  func_0x006595dc();
  plVar26 = plVar10;
  if ((int)plVar10 != 0) {
    func_0x0067528c();
    plVar26 = plVar10;
    if ((((*(int *)((long)plVar10 + 0x8c) == 0) && (0xbf < *(byte *)((long)unaff_x21 + 1))) &&
        (((int)plVar10[0x11] == 0 &&
         (((int)plVar10[0x10] == 0 && (*(int *)((long)plVar10 + 0x84) == 0)))))) &&
       (*(int *)((long)plVar10 + 4) == 2)) {
      plVar26 = (long *)plVar10[1];
      lVar23 = unaff_x21[1];
      FUN_00664d54(auStack_150,lVar23,0);
      plVar9 = (long *)&UNK_00911554;
      FUN_00532c74();
      plStack_c0 = plVar9;
      lStack_b8 = lVar23;
      func_0x00674fec(&pppuStack_138);
      param_2 = (char *)&pppuStack_138;
      FUN_00459c38();
      if ((int)plVar26 == 0) {
        func_0x00675ce8();
        func_0x00675ed8();
      }
      else {
        lVar23 = unaff_x21[4];
        lVar28 = plVar10[3];
        func_0x00675ce8();
        func_0x00675ed8();
        if (lVar23 == lVar28) {
          bVar6 = *(char *)(plVar10[4] + 0x53) == '\x01';
          if (bVar6) {
            lVar23 = plVar10[7];
            plVar10 = (long *)(lVar23 + 0x58);
          }
          else {
            lVar23 = 0;
            plVar10 = (long *)0x0;
          }
          func_0x00675c1c(*(undefined1 *)(lVar23 + 1));
          if ((bVar6) && (uVar5 = *(int *)(lVar23 + 4) == 1, (bool)uVar5)) {
            plVar26 = *(long **)(lVar23 + 8);
            param_2 = "key";
            FUN_004636dc();
            if (((int)plVar26 != 0) &&
               ((func_0x00675c1c(*(undefined1 *)((long)plVar10 + 1)), (bool)uVar5 &&
                (*(int *)((long)plVar10 + 4) == 2)))) {
              plVar26 = (long *)plVar10[1];
              param_2 = "value";
              FUN_004636dc();
              if ((int)plVar26 != 0) {
                FUN_006538b4();
                uVar20 = (int)lVar23 - 1;
                if ((uVar20 < 0xe) && ((0x2e03U >> (ulong)(uVar20 & 0x1f) & 1) != 0)) {
                  func_0x006742cc(unaff_x21[1]);
                }
                plVar26 = plVar10;
                FUN_006538b4();
                if (((int)plVar26 != 0xe) ||
                   (func_0x006579b0(), plVar26 = plVar10, *(int *)(plVar10[7] + 4) == 0))
                goto LAB_00663eec;
              }
            }
          }
        }
      }
    }
    func_0x006742cc(unaff_x21[1]);
  }
LAB_00663eec:
  uVar20 = *(uint *)(unaff_x21[7] + 0x84);
  plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,uVar20);
  if (uVar20 != 0) {
    func_0x00675444();
    if (((uint)plVar26 < 0x13) && ((1 << (ulong)((uint)plVar26 & 0x1f) & 0x50058U) != 0)) {
      if (2 < uVar20) {
        param_2 = (char *)(unaff_x21[1] + 0x18);
        func_0x00674658();
        FUN_0065ad28();
      }
    }
    else {
      func_0x006742cc(unaff_x21[1]);
    }
  }
  uVar5 = ((*(byte *)((long)unaff_x21 + 1) ^ 0xff) & 0xc) == 0;
  if ((bool)uVar5) {
    lVar23 = unaff_x21[1];
    bVar1 = *(byte *)((long)unaff_x21 + 3);
    FUN_0066460c(&stack0xfffffffffffffef0,lVar23);
    plVar10 = (long *)(lVar23 + ((ulong)(bVar1 >> 4) & 7) * 0x18);
    param_2 = &stack0xfffffffffffffef0;
    FUN_00459c38();
    plVar26 = plVar10;
    func_0x006764e0();
    if (((ulong)plVar10 & 1) == 0) {
      func_0x0067447c(unaff_x21[1]);
      func_0x00675748();
    }
  }
  func_0x00676978(unaff_x21[1]);
  if ((long)param_2 < 0) {
    plVar26 = (long *)*plVar26;
  }
  iVar7 = (int)plVar26;
  FUN_0065c13c();
  if (iVar7 != 0) {
    func_0x0067447c(unaff_x21[1]);
    func_0x00675748();
  }
  if ((*(byte *)((long)unaff_x21 + 1) >> 3 & 1) == 0) goto LAB_006642c8;
  lVar23 = *(long *)(unaff_x21[4] + 8);
  lStack_b8 = (long)*(char *)(lVar23 + 0x2f);
  if (lStack_b8 < 0) {
    plStack_c0 = *(long **)(lVar23 + 0x18);
    lStack_b8 = *(long *)(lVar23 + 0x20);
  }
  else {
    plStack_c0 = (long *)(lVar23 + 0x18);
  }
  if ((bRam0000000000b63c98 & 1) == 0) goto LAB_006643c4;
  do {
    puVar11 = puRam0000000000b63c90;
    FUN_006557a8(puRam0000000000b63c90,&plStack_c0);
    if (((ulong)puVar11 & 1) == 0) {
      uVar12 = unaff_x21[4];
      iVar7 = *(int *)((long)unaff_x21 + 4);
      FUN_006566e8();
      if ((*(long *)(uVar12 + 8) != 0) &&
         (uVar5 = *(char *)(*unaff_x20 + 0x34) == '\x01', (bool)uVar5)) {
        func_0x00676c30();
        plVar26 = extraout_x8_00;
        if (!(bool)uVar5) {
          plVar26 = extraout_x11;
        }
        lVar23 = (long)(int)extraout_x8_00[1] << 3;
        do {
          if (lVar23 == 0) {
            if (((int)extraout_x8_00[1] != 0) || (*(int *)(extraout_x9 + 0x68) == 0)) {
              func_0x00674458(unaff_x21[1]);
            }
            goto LAB_006642c8;
          }
          lVar28 = *plVar26;
          lVar23 = lVar23 + -8;
          uVar5 = *(int *)(lVar28 + 0x28) == iVar7;
          plVar26 = plVar26 + 1;
        } while (!(bool)uVar5);
        uVar20 = (uint)*(byte *)(lVar28 + 0x2c);
        cVar3 = SBORROW4(uVar20,1);
        cVar4 = (int)(uVar20 - 1) < 0;
        uVar5 = uVar20 == 1;
        if ((bool)uVar5) {
          func_0x00674458(unaff_x21[1]);
        }
        else {
          puVar24 = (undefined8 *)(*(ulong *)(lVar28 + 0x18) & 0xfffffffffffffffc);
          lVar23 = (long)*(char *)((long)puVar24 + 0x17);
          puVar13 = puVar24;
          if (lVar23 < 0) {
            puVar13 = (undefined8 *)*puVar24;
            lVar23 = puVar24[1];
          }
          plVar10 = (long *)(*(ulong *)(lVar28 + 0x20) & 0xfffffffffffffffc);
          lVar22 = (long)*(char *)((long)plVar10 + 0x17);
          plVar26 = plVar10;
          if (lVar22 < 0) {
            plVar26 = (long *)*plVar10;
            lVar22 = plVar10[1];
          }
          bVar1 = *(byte *)(lVar28 + 0x2d);
          if ((lVar22 != 0) &&
             (plStack_120 = plVar26, lStack_118 = lVar22, (*(byte *)(unaff_x20 + 0x11) & 1) == 0)) {
            func_0x00675444();
            FUN_00425cb4(&pppuStack_138,(&PTR_DAT_00a0d970)[uVar12 & 0xffffffff]);
            puVar8 = auStack_150;
            FUN_00456d78();
            func_0x0067528c();
            if ((puVar8 == (undefined1 *)0x0) && (func_0x00675830(), puVar8 == (undefined1 *)0x0)) {
LAB_006641a8:
              plVar26 = plStack_120;
              FUN_00663118(plStack_120,lStack_118);
              if ((((ulong)plVar26 & 1) == 0) &&
                 (plVar26 = plStack_120, FUN_0065b0c4(plStack_120,lStack_118,".",1),
                 ((ulong)plVar26 & 1) == 0)) {
                func_0x00674500();
                lStack_b8 = lStack_118;
                plStack_c0 = plStack_120;
                func_0x00674fec(auStack_168);
                func_0x006764b8(auStack_150);
                func_0x006753f8();
              }
              uVar12 = 0;
              FUN_00459c38();
              if ((uVar12 & 1) == 0) {
                func_0x00674458(unaff_x21[1]);
              }
            }
            else if ((*(byte *)(unaff_x20 + 0x11) & 1) == 0) {
              func_0x0067528c();
              if (puVar8 == (undefined1 *)0x0) {
                func_0x00675830();
              }
              else {
                func_0x0067528c();
              }
              lVar22 = *(long *)(puVar8 + 8);
              lVar28 = (long)*(char *)(lVar22 + 0x2f);
              if (lVar28 < 0) {
                plVar26 = *(long **)(lVar22 + 0x18);
                lVar28 = *(long *)(lVar22 + 0x20);
              }
              else {
                plVar26 = (long *)(lVar22 + 0x18);
              }
              func_0x00674500();
              plStack_c0 = plVar26;
              lStack_b8 = lVar28;
              func_0x00674fec(auStack_168);
              func_0x006764b8(&pppuStack_138);
              func_0x006753f8();
              goto LAB_006641a8;
            }
            func_0x00675ed8();
            func_0x00675ce8();
          }
          if (lVar23 != 0) {
            func_0x00674500();
            func_0x00673f90(unaff_x21[1]);
            lStack_b8 = extraout_x12;
            if (cVar4 == cVar3) {
              lStack_b8 = extraout_x10;
            }
            plStack_c0 = extraout_x8_01;
            func_0x00674fec(&pppuStack_138);
            uVar12 = uStack_130;
            ppppuVar2 = (undefined8 ****)pppuStack_138;
            if (-1 < (char)bStack_121) {
              uVar12 = (ulong)bStack_121;
              ppppuVar2 = &pppuStack_138;
            }
            func_0x00465a14(puVar13,lVar23,ppppuVar2,uVar12);
            if (((ulong)puVar13 & 1) == 0) {
              func_0x00674458(unaff_x21[1]);
            }
            func_0x00675ce8();
          }
          uVar5 = (*unaff_x21 & 0x2000) == 0;
          if (((uVar5 ^ bVar1) & 1) == 0) {
            func_0x00674458(unaff_x21[1]);
          }
        }
      }
    }
LAB_006642c8:
    func_0x00674120(uStack_90);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
LAB_006643c4:
    puVar11 = (ulong *)0xb63c98;
    ___cxa_guard_acquire();
    if ((int)puVar11 != 0) {
      func_0x0067570c();
      _memcpy(&stack0xfffffffffffffef0,&PTR_s_google_protobuf_EnumOptions_00a0da28,0x50);
      FUN_00666904(puVar11,0xb);
      lVar23 = 0;
      while( true ) {
        cVar3 = SBORROW8(lVar23,0x50);
        cVar4 = lVar23 + -0x50 < 0;
        uVar5 = lVar23 == 0x50;
        if ((bool)uVar5) break;
        Hint_Prefetch(*puVar11,0,2,0);
        uVar27 = *(undefined8 *)(&stack0xfffffffffffffef0 + lVar23);
        uVar14 = uVar27;
        _strlen(uVar27);
        puVar15 = puVar11;
        FUN_0066696c(puVar11,uVar27,uVar14);
        uVar19 = puVar11[2];
        lStack_1a8 = 0;
        uVar12 = *puVar11 >> 0xc ^ (ulong)puVar15 >> 7;
        while( true ) {
          uVar12 = uVar12 & uVar19;
          func_0x006753d4();
          for (uVar25 = extraout_x8_02 & 0x8080808080808080; uVar25 != 0;
              uVar25 = uVar25 - 1 & uVar25) {
            uVar17 = (uVar25 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar25 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar27 = *(undefined8 *)(&stack0xfffffffffffffef0 + lVar23);
            func_0x00674174(puVar11[1] +
                            (uVar12 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) &
                            uVar19) * 0x18);
            uVar14 = extraout_x12_00;
            uVar17 = extraout_x11_00;
            if (cVar4 == cVar3) {
              uVar14 = extraout_x9_00;
              uVar17 = extraout_x8_03;
            }
            uVar16 = uVar27;
            _strlen(uVar27);
            func_0x00465a14(uVar17,uVar14,uVar27,uVar16);
            if ((uVar17 & 1) != 0) goto LAB_00664520;
          }
          func_0x00674774();
          if ((extraout_x8_04 & 1) != 0) break;
          lStack_1a8 = lStack_1a8 + 8;
          uVar12 = lStack_1a8 + uVar12;
        }
        puVar18 = puVar11;
        FUN_0066698c(puVar11,puVar15);
        FUN_00466754(puVar11[1] + (long)puVar18 * 0x18,&stack0xfffffffffffffef0 + lVar23);
LAB_00664520:
        lVar23 = lVar23 + 8;
      }
      puRam0000000000b63c90 = puVar11;
      ___cxa_guard_release(0xb63c98);
    }
  } while( true );
}



/* Entry: 006645d0; end: 0066460b;  */

void FUN_006645d0(void)

{
  char *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long extraout_x9;
  char *extraout_x11;
  long extraout_x12;
  char *unaff_x20;
  long lVar2;
  undefined8 uStack_18;
  
  func_0x006743c8();
  func_0x00676c60();
  func_0x00674a9c();
  FUN_0056189c();
  func_0x00674120(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00674c58();
  func_0x00675c60();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  func_0x00676d00(0);
  lVar2 = extraout_x12;
  pcVar1 = extraout_x11;
  if (in_NG == in_OV) {
    lVar2 = extraout_x9;
    pcVar1 = unaff_x20;
  }
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*pcVar1 != '_') {
      func_0x006768d8();
    }
    pcVar1 = pcVar1 + 1;
  }
  return;
}



/* Entry: 0066460c; end: 00664687;  */

void FUN_0066460c(void)

{
  char *pcVar1;
  char in_NG;
  char in_OV;
  long extraout_x9;
  char *extraout_x11;
  long extraout_x12;
  char *unaff_x20;
  long lVar2;
  
  func_0x00674c58();
  func_0x00675c60();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  func_0x00676d00(0);
  lVar2 = extraout_x12;
  pcVar1 = extraout_x11;
  if (in_NG == in_OV) {
    lVar2 = extraout_x9;
    pcVar1 = unaff_x20;
  }
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*pcVar1 != '_') {
      func_0x006768d8();
    }
    pcVar1 = pcVar1 + 1;
  }
  return;
}



/* Entry: 00664688; end: 00664c73;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00664b40 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00664688(undefined8 param_1,long *param_2,undefined8 *****param_3)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 ******ppppppuVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong extraout_x8;
  undefined8 ****ppppuVar15;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x8_07;
  byte *extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  ulong uVar16;
  long extraout_x9_02;
  ulong extraout_x9_03;
  byte *extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong uVar17;
  undefined8 ****ppppuVar18;
  long extraout_x11;
  undefined8 extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  ulong extraout_x13_01;
  ulong extraout_x14;
  undefined8 ****ppppuVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 ***pppuVar23;
  ulong *puVar24;
  undefined8 unaff_x30;
  undefined8 ****ppppuStack_110;
  undefined8 ***pppuStack_108;
  ulong uStack_100;
  undefined1 uStack_f8;
  byte bStack_f1;
  undefined8 *****pppppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined8 ***pppuStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 *****pppppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  
  func_0x00676d94();
  ppppuVar19 = param_3[1];
  pppuVar23 = (undefined8 ***)(long)(char)*(byte *)((long)ppppuVar19 + 0x17);
  ppppuVar15 = ppppuVar19;
  if ((long)pppuVar23 < 0) {
    ppppuVar15 = (undefined8 ****)*ppppuVar19;
    pppuVar23 = ppppuVar19[1];
  }
  pppppuStack_b0 = (undefined8 ******)0x0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppppuStack_110 = param_3;
  for (; pppuVar23 != (undefined8 ***)0x0; pppuVar23 = (undefined8 ***)((long)pppuVar23 + -1)) {
    if ((ulong)*(byte *)ppppuVar15 != 0x5f) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&pppppuStack_b0,(long)(char)(&UNK_00811570)[*(byte *)ppppuVar15]);
    }
    ppppuVar15 = (undefined8 ****)((long)ppppuVar15 + 1);
  }
  func_0x00674868();
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lVar20 = 0;
  uStack_d0 = extraout_x8;
  do {
    if (*(int *)((long)param_3 + 4) <= lVar20) {
      FUN_00669828(&uStack_d0);
      func_0x00675684();
      if (((*(int *)((long)param_3[6] + 0x34) != 2) && (0 < *(int *)((long)param_3 + 4))) &&
         (*(int *)((long)param_3[7] + 4) != 0)) {
        func_0x00676cd4(param_3[1]);
        func_0x0067461c();
        func_0x006765b8();
      }
      if (((*(byte *)(param_3[4] + 5) >> 1 & 1) == 0) || (((ulong)param_3[4][10] & 1) == 0)) {
        func_0x00674868();
        lStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_d0 = extraout_x8_06;
        for (lVar20 = 0; lVar20 < *(int *)((long)param_3 + 4); lVar20 = lVar20 + 1) {
          lVar21 = 0;
          pppuStack_108 = param_3[7] + lVar20 * 6;
          uVar6 = *(uint *)((long)pppuStack_108 + 4);
          pppuVar23 = (undefined8 ***)pppuStack_108[1];
          Hint_Prefetch(uStack_d0,0,2,0);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (long)&PTR_LOOP_00a01490 + (ulong)uVar6;
          uVar17 = uStack_d0 >> 0xc ^
                   (SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^
                   ((long)&PTR_LOOP_00a01490 + (ulong)uVar6) * -0x622015f714c7d297) >> 7;
          uVar16 = uStack_d0;
          uVar22 = uStack_c0;
          while( true ) {
            func_0x00676178(lVar21,param_1,*(undefined8 *)(uVar16 + (uVar17 & uVar22)));
            lVar21 = extraout_x13;
            while (lVar21 != 0) {
              func_0x00676784();
              uVar17 = extraout_x14 & extraout_x10_02;
              if (*(uint *)(extraout_x11_02 + uVar17 * 0x20) == uVar6) {
                uStack_a8 = extraout_x11_02 + uVar17 * 0x20;
                pppppuStack_b0 = (undefined8 *****)(extraout_x9_02 + uVar17);
                uStack_a0 = uStack_a0 & 0xffffffffffffff00;
                if (((ulong)param_3[4][10] & 1) == 0) {
                  pppppuStack_f0 = &ppppuStack_110;
                  pppuStack_e8 = &pppuStack_108;
                  pppppuStack_e0 = &pppppuStack_b0;
                  func_0x00676cd4(param_3[1]);
                  func_0x0067461c();
                  FUN_0065ad28();
                  param_3 = (undefined8 *****)ppppuStack_110;
                }
                goto LAB_00664bd0;
              }
              func_0x0067692c();
              lVar21 = extraout_x13_00;
            }
            func_0x00676168();
            if ((extraout_x13_01 & 1) != 0) break;
            lVar21 = extraout_x8_07 + 8;
            uVar17 = lVar21 + extraout_x12;
            uVar16 = extraout_x9_03;
            uVar22 = extraout_x10_03;
          }
          puVar14 = &uStack_d0;
          FUN_006725d0();
          puVar2 = (uint *)(lStack_c8 + (long)puVar14 * 0x20);
          *puVar2 = uVar6;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (puVar2 + 2,pppuVar23 + 3);
          param_3 = (undefined8 *****)ppppuStack_110;
LAB_00664bd0:
        }
        FUN_0066a5ac(&uStack_d0);
      }
      func_0x00676d7c(unaff_x30);
      return;
    }
    pppuStack_d8 = param_3[7] + lVar20 * 6;
    ppppuVar15 = (undefined8 ****)pppuStack_d8[1];
    pppuStack_90 = (undefined8 ***)(long)*(char *)((long)ppppuVar15 + 0x17);
    pppuStack_98 = ppppuVar15;
    if ((long)pppuStack_90 < 0) {
      pppuStack_98 = *ppppuVar15;
      pppuStack_90 = ppppuVar15[1];
    }
    ppppuVar15 = (undefined8 ****)0x0;
    uVar17 = 0;
    uVar16 = uStack_a8;
    ppppppuVar9 = (undefined8 ******)pppppuStack_b0;
    if (-1 < (long)uStack_a0) {
      uVar16 = uStack_a0 >> 0x38;
      ppppppuVar9 = &pppppuStack_b0;
    }
    while ((ppppuVar19 = (undefined8 ****)pppuStack_90, (undefined8 ****)pppuStack_90 != ppppuVar15
           && (ppppuVar19 = ppppuVar15, uVar17 < uVar16))) {
      if ((ulong)*(byte *)((long)pppuStack_98 + (long)ppppuVar15) != 0x5f) {
        if ((&UNK_00811570)[*(byte *)((long)pppuStack_98 + (long)ppppuVar15)] !=
            *(char *)((long)ppppppuVar9 + uVar17)) goto LAB_006647f0;
        uVar17 = uVar17 + 1;
      }
      ppppuVar15 = (undefined8 ****)((long)ppppuVar15 + 1);
    }
    if (uVar16 <= uVar17) {
      ppppuVar15 = (undefined8 ****)pppuStack_90;
      if (pppuStack_90 <= ppppuVar19) {
        ppppuVar15 = ppppuVar19;
      }
      for (; (ppppuVar18 = ppppuVar15, ppppuVar19 < pppuStack_90 &&
             (ppppuVar18 = ppppuVar19, *(char *)((long)pppuStack_98 + (long)ppppuVar19) == '_'));
          ppppuVar19 = (undefined8 ****)((long)ppppuVar19 + 1)) {
      }
      if ((undefined8 ****)((long)pppuStack_90 - (long)ppppuVar18) != (undefined8 ****)0x0) {
        pppuStack_98 = (undefined8 ***)((long)pppuStack_98 + (long)ppppuVar18);
        pppuStack_90 = (undefined8 ****)((long)pppuStack_90 - (long)ppppuVar18);
      }
    }
LAB_006647f0:
    FUN_00456d78(&pppuStack_108,&pppuStack_98);
    pppuStack_e8 = (undefined8 ****)0x0;
    pppppuStack_e0 = (undefined8 ******)0x0;
    pppppuStack_f0 = (undefined8 ******)0x0;
    cVar12 = (char)bStack_f1 < '\0';
    cVar11 = '\0';
    uVar17 = uStack_100;
    if (!(bool)cVar12) {
      uVar17 = (ulong)bStack_f1;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (&pppppuStack_f0,uVar17);
    func_0x006749e4();
    lVar21 = extraout_x11;
    pbVar1 = extraout_x10;
    if (cVar12 == cVar11) {
      lVar21 = extraout_x8_00;
      pbVar1 = extraout_x9;
    }
    bVar10 = true;
    for (; lVar21 != 0; lVar21 = lVar21 + -1) {
      uVar17 = (ulong)*pbVar1;
      cVar11 = SBORROW8(uVar17,0x5f);
      cVar12 = (long)(uVar17 - 0x5f) < 0;
      if (uVar17 != 0x5f) {
        cVar12 = '\0';
        cVar11 = '\0';
        puVar3 = &UNK_00811670;
        if (!bVar10) {
          puVar3 = &UNK_00811570;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&pppppuStack_f0,(long)(char)puVar3[uVar17]);
      }
      pbVar1 = pbVar1 + 1;
      bVar10 = uVar17 == 0x5f;
    }
    func_0x006754bc();
    Hint_Prefetch(uStack_d0,0,2,0);
    func_0x00676224(uStack_d0);
    uVar4 = extraout_x11_00;
    uVar8 = extraout_x10_00;
    if (cVar12 == cVar11) {
      uVar4 = extraout_x8_01;
      uVar8 = extraout_x9_00;
    }
    puVar14 = &uStack_d0;
    FUN_0066696c(puVar14,uVar8,uVar4);
    uVar16 = uStack_c0;
    lVar21 = 0;
    func_0x00676cbc(uStack_d0 >> 0xc);
    uVar17 = extraout_x8_02;
    while( true ) {
      uVar17 = uVar17 & uVar16;
      func_0x006753d4();
      for (uVar22 = extraout_x8_03 & 0x8080808080808080; uVar22 != 0; uVar22 = uVar22 - 1 & uVar22)
      {
        uVar13 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        puVar24 = (ulong *)(uVar17 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar16
                           );
        func_0x00676d28(lStack_c8 + (long)puVar24 * 0x20);
        ppppuVar15 = (undefined8 ****)pppuStack_e8;
        ppppppuVar9 = (undefined8 ******)pppppuStack_f0;
        if (-1 < (long)pppppuStack_e0) {
          ppppuVar15 = (undefined8 ****)((ulong)pppppuStack_e0 >> 0x38);
          ppppppuVar9 = &pppppuStack_f0;
        }
        uVar13 = extraout_x10_01;
        if (-1 < extraout_x9_01) {
          uVar13 = extraout_x8_04;
        }
        lVar5 = extraout_x11_01;
        if (-1 < (int)extraout_x9_01) {
          lVar5 = extraout_x9_01;
        }
        func_0x00465a14(uVar13,lVar5,ppppppuVar9,ppppuVar15);
        if ((uVar13 & 1) != 0) {
          uStack_f8 = false;
          goto LAB_00664934;
        }
      }
      func_0x00674774();
      if ((extraout_x8_05 & 1) != 0) break;
      lVar21 = lVar21 + 8;
      uVar17 = lVar21 + uVar17;
    }
    puVar24 = &uStack_d0;
    func_0x006718dc(puVar24,puVar14);
    lVar21 = lStack_c8 + (long)puVar24 * 0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar21,&pppppuStack_f0)
    ;
    *(undefined8 ****)(lVar21 + 0x18) = pppuStack_d8;
    uStack_f8 = true;
LAB_00664934:
    pppuStack_108 = (undefined8 ***)(uStack_d0 + (long)puVar24);
    uStack_100 = lStack_c8 + (long)puVar24 * 0x20;
    if (!(bool)uStack_f8) {
      uVar17 = *(ulong *)(*(long *)(uStack_100 + 0x18) + 8);
      FUN_00459c38(uVar17,pppuStack_d8[1]);
      if (((uVar17 & 1) == 0) &&
         (*(int *)(*(long *)(uStack_100 + 0x18) + 4) != *(int *)((long)pppuStack_d8 + 4))) {
        pppuStack_98 = &pppuStack_d8;
        pppuStack_90 = &pppuStack_108;
        if ((((*(byte *)(*param_2 + 0x36) & 1) == 0) &&
            (*(char *)((long)param_3[4] + 0x52) != '\x01')) || (*(int *)(param_3[2] + 4) != 0x3e6))
        {
          func_0x00676cd4(pppuStack_d8[1]);
          func_0x0067461c();
          func_0x0067635c();
          FUN_0065ad28();
        }
        else {
          func_0x00676cd4(pppuStack_d8[1]);
          func_0x0067461c();
          func_0x0067635c();
          FUN_0065af68();
        }
      }
    }
    func_0x00676048();
    lVar20 = lVar20 + 1;
  } while( true );
}



/* Entry: 00664c74; end: 00664d53;  */

void FUN_00664c74(ulong param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined *puVar2;
  char *pcVar3;
  long extraout_x9;
  char *extraout_x11;
  long extraout_x12;
  byte *unaff_x19;
  char *unaff_x21;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_68;
  undefined8 uStack_60;
  
  func_0x006753bc();
  func_0x00674238();
  pcVar3 = ".";
  func_0x00676a6c();
  FUN_0065b0c4();
  if ((param_1 & 1) == 0) {
    func_0x006744f4();
    puVar2 = &UNK_00911c36;
    uStack_68 = param_1;
    uStack_60 = param_2;
    FUN_00532c74();
    puStack_c8 = puVar2;
    uStack_c0 = param_2;
    func_0x0067563c(&uStack_e0,&uStack_68);
  }
  else {
    func_0x006753c8();
    FUN_0065bb5c();
    if ((param_1 & 1) != 0) {
      *unaff_x19 = 0;
      unaff_x19[0x18] = 0;
      goto LAB_00664d3c;
    }
    func_0x006744f4();
    puVar2 = &UNK_00911c77;
    uStack_68 = param_1;
    uStack_60 = param_2;
    FUN_00532c74();
    puStack_c8 = puVar2;
    uStack_c0 = param_2;
    func_0x0067563c(&uStack_e0,&uStack_68);
  }
  *(undefined8 *)(unaff_x19 + 8) = uStack_d8;
  *(undefined8 *)unaff_x19 = uStack_e0;
  *(undefined8 *)(unaff_x19 + 0x10) = uStack_d0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e0 = 0;
  unaff_x19[0x18] = 1;
  func_0x00674d64();
LAB_00664d3c:
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x006751dc();
  func_0x00675c60();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  func_0x00676a4c((uint)pcVar3 ^ 1);
  lVar4 = extraout_x12;
  pcVar1 = extraout_x11;
  if (in_NG == in_OV) {
    lVar4 = extraout_x9;
    pcVar1 = unaff_x21;
  }
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    if (*pcVar1 != '_') {
      func_0x006768d8();
    }
    pcVar1 = pcVar1 + 1;
  }
  if (((ulong)pcVar3 & 1) != 0) {
    if ((char)unaff_x19[0x17] < '\0') {
      if (*(long *)(unaff_x19 + 8) == 0) {
        return;
      }
      unaff_x19 = *(byte **)unaff_x19;
    }
    else if (unaff_x19[0x17] == 0) {
      return;
    }
    *unaff_x19 = (&UNK_00811570)[*unaff_x19];
  }
  return;
}



/* Entry: 00664d54; end: 00664e07;  */

void FUN_00664d54(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char in_NG;
  char in_OV;
  long extraout_x9;
  char *extraout_x11;
  long extraout_x12;
  byte *unaff_x19;
  char *unaff_x21;
  long lVar2;
  
  func_0x006751dc();
  func_0x00675c60();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  func_0x00676a4c(param_3 ^ 1);
  lVar2 = extraout_x12;
  pcVar1 = extraout_x11;
  if (in_NG == in_OV) {
    lVar2 = extraout_x9;
    pcVar1 = unaff_x21;
  }
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*pcVar1 != '_') {
      func_0x006768d8();
    }
    pcVar1 = pcVar1 + 1;
  }
  if ((param_3 & 1) != 0) {
    if ((char)unaff_x19[0x17] < '\0') {
      if (*(long *)(unaff_x19 + 8) == 0) {
        return;
      }
      unaff_x19 = *(byte **)unaff_x19;
    }
    else if (unaff_x19[0x17] == 0) {
      return;
    }
    *unaff_x19 = (&UNK_00811570)[*unaff_x19];
  }
  return;
}



/* Entry: 00664e08; end: 00664ecb;  */

void FUN_00664e08(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  char in_NG;
  char in_OV;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x11;
  undefined8 extraout_x12;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x006755c0();
  func_0x006746c4();
  func_0x00675304();
  func_0x00675f20();
  uVar2 = unaff_x19[1];
  uVar3 = unaff_x19[2];
  func_0x006745f4(*unaff_x19 >> 0xc);
  do {
    func_0x00674f7c();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x0067590c();
      func_0x00676d00(*(undefined8 *)(uVar2 + (extraout_x8_00 & uVar3) * 8));
      uVar1 = extraout_x12;
      uVar4 = extraout_x11;
      if (in_NG == in_OV) {
        uVar1 = extraout_x9;
        uVar4 = unaff_x20;
      }
      puVar5 = *(undefined8 **)(extraout_x8_01 + 8);
      lVar7 = (long)*(char *)((long)puVar5 + 0x17);
      puVar6 = puVar5;
      if (lVar7 < 0) {
        puVar6 = (undefined8 *)*puVar5;
        lVar7 = puVar5[1];
      }
      func_0x00465a14(uVar4,uVar1,puVar6,lVar7);
      if ((int)uVar4 != 0) {
        lVar7 = *unaff_x19 + (extraout_x8_00 & uVar3);
        goto LAB_00664eb0;
      }
      func_0x00676458();
    }
    func_0x006745a8();
    if ((extraout_x8_02 & 1) != 0) {
      lVar7 = 0;
LAB_00664eb0:
      func_0x0067559c(lVar7);
      return;
    }
    func_0x00676bf0();
  } while( true );
}



/* Entry: 00664ecc; end: 00664f23;  */

void FUN_00664ecc(void)

{
  long extraout_x8;
  
  func_0x00674f38();
  if (extraout_x8 != 0) {
    func_0x006744e8();
  }
  return;
}



/* Entry: 00664f24; end: 00664f33;  */

void FUN_00664f24(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined1 auStack_58 [40];
  
  func_0x00674c58(*param_1,param_1[1] + 0x18,param_1[2],7,param_2,param_3);
  func_0x00676540();
  plVar1 = *(long **)(unaff_x19 + 0x18);
  if (plVar1 == (long *)0x0) {
    if ((*(byte *)(unaff_x19 + 0x88) & 1) == 0) {
      func_0x00674bbc();
      func_0x007766a0(auStack_58);
      FUN_0065ae4c(auStack_58,&UNK_00910626);
      FUN_00555478();
      func_0x0065ae70();
      func_0x00675ac0();
    }
    func_0x00674bbc();
    func_0x007766a0(auStack_58);
    func_0x0065ae70(auStack_58,&DAT_0091064a);
    FUN_00555478();
    func_0x006765f8();
    FUN_00555478();
    func_0x00675ac0();
  }
  else {
    lVar3 = (long)*(char *)(unaff_x19 + 0xa7);
    if (lVar3 < 0) {
      lVar2 = *(long *)(unaff_x19 + 0x90);
      lVar3 = *(long *)(unaff_x19 + 0x98);
    }
    else {
      lVar2 = unaff_x19 + 0x90;
    }
    func_0x006746d8(plVar1,lVar2,lVar3);
    func_0x006749e4();
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined1 *)(unaff_x19 + 0x88) = 1;
  func_0x006754bc();
  return;
}



/* Entry: 00664f34; end: 006650df;  */

undefined8 *
FUN_00664f34(undefined8 param_1,ulong *param_2,ulong *param_3,long param_4,undefined8 param_5,
            long *param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long extraout_x8;
  int *piVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 auStack_78 [3];
  
  func_0x00676464();
  if (param_2 == param_3) {
    uVar6 = (uint)((ulong)(param_6[1] - *param_6) >> 4);
    lVar9 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) + 1;
    piVar5 = (int *)*param_6;
    do {
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      iVar3 = *piVar5;
      piVar5 = piVar5 + 4;
    } while (iVar3 != *(int *)(param_4 + 4));
    auStack_78[0] = param_5;
    FUN_00664f24(param_1,auStack_78,0x673564);
LAB_0066506c:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar8 = 0;
    lVar9 = 0;
    while( true ) {
      lVar2 = *param_6;
      lVar1 = (long)(int)((ulong)(param_6[1] - lVar2) >> 4);
      puVar7 = (undefined8 *)(ulong)(lVar1 <= lVar9);
      if (lVar1 <= lVar9) break;
      uVar4 = *param_2;
      if (*(int *)(lVar2 + lVar8) == *(int *)(uVar4 + 4)) {
        FUN_006538b4();
        if ((int)uVar4 == 10) {
          if ((*(int *)(lVar2 + lVar8 + 4) == 4) && (func_0x00675b44(), (uVar4 & 1) == 0)) {
            return puVar7;
          }
        }
        else {
          if ((int)uVar4 != 0xb) {
            func_0x00674bbc();
            FUN_0077670c(auStack_78);
            FUN_006650e0(auStack_78);
            puVar7 = auStack_78;
            FUN_0066510c(puVar7,uVar4);
            func_0x00676738();
            FUN_00554ab4();
            return puVar7;
          }
          if (*(int *)(lVar2 + lVar8 + 4) == 3) {
            func_0x00676bc0();
            puVar7 = auStack_78;
            FUN_00665168(puVar7,*(undefined8 *)(extraout_x8 + 8));
            if (((int)puVar7 != 0) && (func_0x00675b44(), ((ulong)puVar7 & 1) == 0)) {
              FUN_0066bd90(auStack_78);
              goto LAB_0066506c;
            }
            FUN_0066bd90(auStack_78);
          }
        }
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    }
  }
  return puVar7;
}



/* Entry: 006650e0; end: 0066510b;  */

undefined8 FUN_006650e0(undefined8 param_1)

{
  FUN_00554ab4(param_1,&UNK_009116dd,0x27);
  return param_1;
}



/* Entry: 0066510c; end: 00665167;  */

long FUN_0066510c(long param_1,undefined8 param_2)

{
  undefined1 auStack_98 [64];
  long lStack_58;
  
  FUN_005554b4(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(lStack_58 + 0x118,param_2);
  FUN_005556e0(auStack_98);
  return param_1;
}



/* Entry: 00665168; end: 00665193;  */

void FUN_00665168(undefined8 param_1,long *param_2)

{
  undefined **ppuStack_30;
  long lStack_28;
  int iStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  
  iStack_20 = (int)param_2[1];
  lStack_28 = *param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    iStack_20 = (int)*(char *)((long)param_2 + 0x17);
    lStack_28 = (long)param_2;
  }
  ppuStack_30 = &PTR_FUN_00a01280;
  uStack_18 = 0;
  iStack_1c = iStack_20;
  FUN_006a4d98(param_1,&ppuStack_30);
  return;
}



/* Entry: 00665194; end: 006651db;  */

void FUN_00665194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006a4c8c();
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
            (param_1,param_3);
  return;
}



/* Entry: 006651dc; end: 006651df;  */

void FUN_006651dc(void)

{
  return;
}



/* Entry: 006651e0; end: 0066520b;  */

undefined8 * FUN_006651e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0dbc0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 0066520c; end: 006652c7;  */

long FUN_0066520c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  char ****ppppcVar3;
  undefined1 auStack_60 [24];
  char ***pppcStack_48;
  ulong uStack_40;
  byte bStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_00456d78(&pppcStack_48,&uStack_30);
  uVar2 = (ulong)(char)bStack_31;
  if ((char)bStack_31 < '\0') {
    ppppcVar3 = (char ****)pppcStack_48;
    if (uStack_40 == 0) {
      uStack_40 = 0;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      goto LAB_006652a4;
    }
LAB_00665250:
    if (*(char *)ppppcVar3 == '.') {
      func_0x0067568c(auStack_60,&pppcStack_48);
      func_0x00675fa0(&pppcStack_48);
      func_0x00674d64();
      uVar2 = (ulong)bStack_31;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    if (((uint)uVar2 >> 7 & 1) != 0) goto LAB_006652a4;
  }
  else {
    if (bStack_31 != 0) {
      ppppcVar3 = &pppcStack_48;
      goto LAB_00665250;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  uStack_40 = uVar2 & 0xff;
  pppcStack_48 = (char ***)&pppcStack_48;
LAB_006652a4:
  FUN_0065449c(uVar1,param_1,pppcStack_48,uStack_40);
  func_0x00674ba8();
  return param_1;
}



/* Entry: 006652c8; end: 00665533;  */

void FUN_006652c8(long param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 **ppuVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x9;
  undefined4 extraout_w10;
  undefined4 extraout_w10_00;
  int extraout_w10_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  code *extraout_x11;
  long lVar12;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  code *pcStack_d8;
  code *pcStack_d0;
  undefined1 *puStack_a8;
  code *pcStack_a0;
  undefined1 *apuStack_78 [6];
  undefined8 uStack_48;
  
  func_0x006743c8();
  lVar12 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar12 + 2) & 1) == 0) {
    pcVar10 = (code *)&UNK_0091181e;
    func_0x00675ce0();
    func_0x00674bbc();
    ppuVar9 = apuStack_78;
    pcVar11 = (code *)&UNK_00002539;
    FUN_00776794();
  }
  else {
    pcVar8 = (code *)(*(long *)(param_1 + 0x18) + 4);
    pcVar5 = pcVar8;
    uStack_48 = extraout_x8;
    _strlen();
    ppuVar6 = *(undefined1 ***)(lVar12 + 0x18);
    pcVar10 = pcVar8;
    pcVar11 = pcVar5;
    FUN_0066520c();
    ppuVar9 = ppuVar6;
    if (*(char *)ppuVar6 != '\x04') {
      uVar3 = 0;
      if (*(char *)ppuVar6 == '\x01') {
        uVar3 = (*(byte *)(param_1 + 2) & 0xfe) == 10;
        if (!(bool)uVar3) {
          pcVar10 = (code *)&UNK_00911841;
          func_0x00675ce0();
          func_0x00674bbc();
          ppuVar9 = apuStack_78;
          pcVar11 = (code *)&UNK_00002542;
          FUN_00776794();
          goto LAB_00665504;
        }
        *(undefined1 ***)(param_1 + 0x30) = ppuVar6;
      }
LAB_00665454:
      func_0x00674120(uStack_48);
      if ((bool)uVar3) {
        return;
      }
      goto LAB_00665508;
    }
    uVar3 = *(char *)(param_1 + 2) == '\x0e';
    if ((bool)uVar3) {
      pcVar8 = pcVar8 + (long)pcVar5;
      *(undefined1 ***)(param_1 + 0x30) = ppuVar6;
      if (pcVar8[1] == (code)0x0) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        func_0x00675b24(ppuVar6[1],auStack_f0);
        puVar7 = auStack_f0;
        func_0x00675024();
        cVar1 = SCARRY8((long)puVar7,1);
        cVar2 = (long)(puVar7 + 1) < 0;
        if (puVar7 == (undefined1 *)0xffffffffffffffff) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (auStack_f0,pcVar8 + 1);
        }
        else {
          puVar7 = auStack_f0;
          func_0x0067657c(auStack_120);
          func_0x006746b0();
          apuStack_78[0] = (undefined1 *)CONCAT44(extraout_var,extraout_w10);
          if (cVar2 == cVar1) {
            apuStack_78[0] = auStack_120;
          }
          func_0x00674500();
          pcVar8 = pcVar8 + 1;
          puStack_a8 = puVar7;
          pcStack_a0 = pcVar10;
          FUN_00532c74();
          pcStack_d8 = pcVar8;
          pcStack_d0 = pcVar10;
          FUN_00575ddc(auStack_108,apuStack_78,&puStack_a8,&pcStack_d8);
          FUN_004575b8(auStack_f0,auStack_108);
          func_0x00674d80();
          func_0x00674d64();
        }
        ppuVar9 = *(undefined1 ***)(*(long *)(param_1 + 0x10) + 0x18);
        func_0x00676374();
        pcVar10 = (code *)CONCAT44(extraout_var_00,extraout_w10_00);
        pcVar11 = extraout_x11;
        if (cVar2 == cVar1) {
          pcVar11 = extraout_x8_00;
          pcVar10 = extraout_x9;
        }
        FUN_0066520c();
        uVar3 = *(char *)ppuVar9 == '\x05';
        if (!(bool)uVar3) {
          uVar3 = *(char *)ppuVar9 == '\x06';
          if ((bool)uVar3) {
            ppuVar9 = (undefined1 **)((long)ppuVar9 + -1);
          }
          else {
            ppuVar9 = (undefined1 **)0x0;
          }
        }
        *(undefined1 ***)(param_1 + 0x50) = ppuVar9;
        func_0x00675368();
        if (*(long *)(param_1 + 0x50) != 0) goto LAB_00665454;
      }
      if (*(int *)((long)ppuVar6 + 4) != 0) {
        *(undefined1 **)(param_1 + 0x50) = ppuVar6[7];
        goto LAB_00665454;
      }
      pcVar10 = (code *)&UNK_009118b4;
      func_0x00675ce0();
      func_0x00674bbc();
      ppuVar9 = apuStack_78;
      pcVar11 = (code *)&UNK_0000255e;
      FUN_00776794();
    }
    else {
      pcVar10 = (code *)&UNK_00911890;
      func_0x00675ce0();
      func_0x00674bbc();
      ppuVar9 = apuStack_78;
      pcVar11 = (code *)&UNK_00002545;
      FUN_00776794();
    }
  }
LAB_00665504:
  FUN_005558a0();
LAB_00665508:
  ___stack_chk_fail();
  func_0x00675368();
  func_0x00674bc8();
  uVar3 = *(int *)ppuVar9 == 0xdd;
  if (!(bool)uVar3) {
    func_0x006743ac();
    iVar4 = (int)ppuVar9;
    if ((((ulong)ppuVar9 & 1) != 0) || (func_0x00675fe8(), iVar4 == 0)) {
      (*pcVar10)(*(undefined8 *)pcVar11);
      do {
        func_0x0067626c();
      } while (extraout_w10_01 != 0);
      func_0x00674b54();
      if ((bool)uVar3) {
        func_0x00674ccc();
      }
    }
    return;
  }
  return;
}



/* Entry: 00665534; end: 00665553;  */

void FUN_00665534(int *param_1,code *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int extraout_w10;
  
  uVar1 = *param_1 == 0xdd;
  if ((bool)uVar1) {
    return;
  }
  func_0x006743ac(param_1,1);
  iVar2 = (int)param_1;
  if ((((ulong)param_1 & 1) != 0) || (func_0x00675fe8(), iVar2 == 0)) {
    (*param_2)(*param_3);
    do {
      func_0x0067626c();
    } while (extraout_w10 != 0);
    func_0x00674b54();
    if ((bool)uVar1) {
      func_0x00674ccc();
    }
  }
  return;
}



/* Entry: 00665554; end: 006655c3;  */

long FUN_00665554(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (((*(byte *)(param_1 + 1) >> 3 & 1) != 0) &&
     (func_0x00676344(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20)), (bool)in_ZR)) {
    lVar2 = param_1;
    FUN_006538b4();
    bVar1 = (int)lVar2 == 0xb;
    if ((bVar1) && (func_0x00675c1c(*(undefined1 *)(param_1 + 1)), bVar1)) {
      func_0x0067584c();
      lVar3 = lVar2;
      func_0x00675b60();
      if (lVar2 == lVar3) {
        func_0x00675b60();
        param_1 = lVar3;
      }
    }
  }
  return *(long *)(param_1 + 8) + 0x18;
}



/* Entry: 006655c4; end: 00665657;  */

char * FUN_006655c4(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puStack_88;
  char *pcStack_80;
  undefined *puStack_78;
  
  if ((param_1[2] & 1U) != 0) {
    pcVar5 = (char *)(*(long *)(param_1 + 0x28) + 4);
    pcVar2 = param_1;
    for (lVar6 = 0; lVar6 < *(int *)(param_1 + 0x30); lVar6 = lVar6 + 1) {
      pcVar1 = pcVar5;
      _strlen();
      pcVar2 = pcVar1;
      if (*pcVar5 != '\0') {
        pcVar2 = *(char **)(param_1 + 0x18);
        func_0x006763bc();
        FUN_00655a68();
        *(char **)(*(long *)(param_1 + 0x48) + lVar6 * 8) = pcVar2;
      }
      pcVar5 = pcVar5 + (long)pcVar1 + 1;
    }
    return pcVar2;
  }
  puVar4 = &UNK_009118cd;
  func_0x00674d08();
  func_0x0067424c();
  FUN_00776794();
  func_0x00674d28();
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    puStack_88 = &puStack_78;
    if (*piVar3 != 0xdd) {
      pcStack_80 = param_1;
      puStack_78 = puVar4;
      FUN_00673e04(piVar3,&puStack_88);
    }
  }
  return *(char **)param_1;
}



/* Entry: 00665658; end: 0066586b;  */

undefined8 FUN_00665658(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    puStack_38 = &uStack_28;
    if (*piVar1 != 0xdd) {
      puStack_30 = param_1;
      uStack_28 = param_2;
      FUN_00673e04(piVar1,&puStack_38);
    }
  }
  return *param_1;
}



/* Entry: 0066586c; end: 00665917;  */

bool FUN_0066586c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  undefined1 auStack_48 [24];
  
  func_0x00676098();
  if ((int)param_1 == 10) {
    lVar5 = *(long *)(unaff_x19 + 8);
    func_0x00675b60();
    puVar2 = *(undefined8 **)(param_1 + 8);
    lVar4 = (long)*(char *)((long)puVar2 + 0x17);
    puVar3 = puVar2;
    if (lVar4 < 0) {
      puVar3 = (undefined8 *)*puVar2;
      lVar4 = puVar2[1];
    }
    FUN_00665918(auStack_48,puVar3,lVar4);
    FUN_00459c38(lVar5,auStack_48);
    lVar4 = lVar5;
    func_0x00674d6c();
    if (((int)lVar5 != 0) &&
       (func_0x00675b60(), *(long *)(lVar4 + 0x10) == *(long *)(unaff_x19 + 0x10))) {
      bVar1 = *(byte *)(unaff_x19 + 1);
      func_0x00675b60();
      lVar5 = *(long *)(lVar4 + 0x18);
      if ((bVar1 >> 3 & 1) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0x20);
      }
      else {
        func_0x0067584c();
      }
      return lVar5 == lVar4;
    }
  }
  return false;
}



/* Entry: 00665918; end: 006659c7;  */

void FUN_00665918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_00456d78(param_1,&uStack_30);
  func_0x00570864(param_1);
  return;
}



/* Entry: 006659c8; end: 006659ff;  */

undefined1  [16] FUN_006659c8(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar5 [16];
  undefined8 *puVar4;
  
  FUN_00665a34();
  uVar1 = param_1[1];
  puVar4 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar4 = param_1;
  }
  func_0x00675410(puVar4,uVar1,&UNK_009119e0);
  iVar3 = (int)puVar4;
  FUN_0065b0c4();
  lVar2 = 8;
  if (iVar3 == 0) {
    lVar2 = 0;
  }
  auVar5._8_8_ = unaff_x20 - lVar2;
  auVar5._0_8_ = lVar2 + unaff_x21;
  return auVar5;
}



/* Entry: 00665a00; end: 00665a33;  */

undefined1  [16] FUN_00665a00(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  func_0x00675410();
  FUN_0065b0c4();
  if (param_1 == 0) {
    param_4 = 0;
  }
  auVar1._8_8_ = unaff_x20 - param_4;
  auVar1._0_8_ = param_4 + unaff_x21;
  return auVar1;
}



/* Entry: 00665a34; end: 00665ae7;  */

undefined * FUN_00665a34(long param_1)

{
  undefined *puVar1;
  
  func_0x00676e64();
  FUN_00656390();
  if (param_1 == 0) {
    func_0x0048afa0();
    puVar1 = &DAT_00b69408;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
  }
  return puVar1;
}



/* Entry: 00665ae8; end: 00665b2b;  */

void FUN_00665ae8(void)

{
  char *pcVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x006760a0();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    while (unaff_x20 != 0) {
      if (-1 < *pcVar1) {
        FUN_00665b2c();
      }
      func_0x00674c10();
    }
    func_0x006744e8();
  }
  return;
}



/* Entry: 00665b2c; end: 00665b83;  */

void FUN_00665b2c(long param_1)

{
  FUN_0066dd30(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00665b84; end: 00665c33;  */

void FUN_00665b84(long *param_1)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(char *)((long)param_1 + 0xb) == '\0') && (*(char *)((long)param_1 + 10) != '\0')) {
    lVar4 = *param_1;
    do {
      func_0x00665c68();
    } while (*(char *)((long)param_1 + 0xb) == '\0');
    uVar5 = (ulong)*(byte *)(param_1 + 1);
    plVar3 = (long *)*param_1;
    do {
      func_0x00675ff8();
      param_1 = (long *)param_1[uVar5];
      cVar2 = '\0';
      if (*(char *)((long)param_1 + 0xb) == '\0') {
        while (cVar2 == '\0') {
          func_0x00665c68();
          cVar2 = *(char *)((long)param_1 + 0xb);
        }
        uVar5 = (ulong)*(byte *)(param_1 + 1);
        plVar3 = (long *)*param_1;
      }
      __ZdlPv();
      if (*(byte *)((long)plVar3 + 10) <= uVar5) {
        do {
          bVar1 = *(byte *)(plVar3 + 1);
          uVar5 = (ulong)bVar1;
          plVar3 = (long *)*plVar3;
          func_0x00676814();
          if (plVar3 == (long *)lVar4) {
            return;
          }
        } while (*(byte *)((long)plVar3 + 10) <= bVar1);
      }
      uVar5 = uVar5 + 1;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00665c34; end: 00665c7f;  */

void FUN_00665c34(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = 0;
  uStack_40 = 1;
  uStack_30 = 4;
  uStack_20 = 0;
  uStack_28 = param_1;
  FUN_00665c80(&uStack_40);
  return;
}



/* Entry: 00665c80; end: 00665ca3;  */

long FUN_00665c80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00665ca4();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 00665ca4; end: 00665ccb;  */

ulong FUN_00665ca4(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + param_1[3] * 0x18 + 7U & 0xfffffffffffffff8;
}



/* Entry: 00665ccc; end: 00665d03;  */

long FUN_00665ccc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0067578c(1,4);
  FUN_00665ca4();
  return param_1 + lVar1;
}



/* Entry: 00665d04; end: 00665d3f;  */

void FUN_00665d04(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00674c64();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_00665d40(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 00665d40; end: 00665fcf;  */

void FUN_00665d40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  *param_1 = 0;
  if (piVar3 == (int *)0x0) {
    return;
  }
  func_0x00674754((long)*piVar3);
  puVar1 = (undefined8 *)0x0;
  if (!(bool)in_ZR) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 3) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x00674754((long)piVar3[1]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_00);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 6) {
    FUN_0067e174();
  }
  func_0x00674754((long)piVar3[2]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_01);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0x19) {
    FUN_006543f4();
  }
  func_0x00674754((long)piVar3[3]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_02);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 9) {
    FUN_0067d448();
  }
  func_0x00674754((long)piVar3[4]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_03);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xb) {
    FUN_0067af9c();
  }
  func_0x00674754((long)piVar3[5]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_04);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0x13) {
    FUN_0067b860();
  }
  func_0x00674754((long)piVar3[6]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_05);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xb) {
    FUN_0067c21c();
  }
  func_0x00674754((long)piVar3[7]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_06);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xc) {
    FUN_0067c568();
  }
  func_0x00674754((long)piVar3[8]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_07);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xe) {
    FUN_006789b4();
  }
  func_0x00674754((long)piVar3[9]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_08);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 10) {
    FUN_0067bf90();
  }
  func_0x00674754((long)piVar3[10]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_09);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xb) {
    FUN_0067c8dc();
  }
  func_0x00674754((long)piVar3[0xb]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_10);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xb) {
    FUN_0067cb90();
  }
  func_0x00674754((long)piVar3[0xc]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_11);
  }
  for (; param_1 != puVar1; param_1 = param_1 + 0x16) {
    FUN_0067a68c();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(piVar3);
  return;
}



/* Entry: 00665fd0; end: 00666013;  */

void FUN_00665fd0(void)

{
  char *pcVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x006760a0();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    while (unaff_x20 != 0) {
      if (-1 < *pcVar1) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00674c10();
    }
    func_0x006744e8();
  }
  return;
}



/* Entry: 00666014; end: 00666037;  */

void FUN_00666014(void)

{
  long extraout_x8;
  
  func_0x00674f38();
  if (extraout_x8 != 0) {
    func_0x006744e8();
  }
  return;
}



/* Entry: 00666038; end: 00666067;  */

void FUN_00666038(void)

{
  long extraout_x8;
  
  func_0x00674f38();
  if (extraout_x8 != 0) {
    FUN_00666068();
    func_0x006744e8();
  }
  return;
}



/* Entry: 00666068; end: 006660c7;  */

void FUN_00666068(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x18;
  }
  return;
}



/* Entry: 006660c8; end: 00666113;  */

void FUN_006660c8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x160);
  lVar1 = *(long *)(param_2 + 0x158);
  lVar4 = *(long *)(param_2 + 0x178);
  lVar3 = *(long *)(param_2 + 0x170);
  *param_1 = CONCAT44((int)((ulong)(*(long *)(param_2 + 0xa0) - *(long *)(param_2 + 0x98)) >> 3),
                      (int)((ulong)(*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0)) >> 3));
  param_1[1] = CONCAT44((int)((ulong)(lVar4 - lVar3) >> 3),(int)((ulong)(lVar2 - lVar1) >> 3));
  *(int *)(param_1 + 2) = (int)((ulong)(*(long *)(param_2 + 400) - *(long *)(param_2 + 0x188)) >> 4)
  ;
  return;
}



/* Entry: 00666114; end: 00666147;  */

undefined8 FUN_00666114(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  func_0x00674690();
  if (param_2 >> 0x3d == 0) {
    func_0x00674dc0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_00666168();
  func_0x00674218();
  func_0x0067400c();
  return param_1;
}



/* Entry: 00666148; end: 00666167;  */

void FUN_00666148(void)

{
  func_0x00674218();
  func_0x0067400c();
  return;
}



/* Entry: 00666168; end: 00666173;  */

void FUN_00666168(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00674690();
  if (param_1 >> 0x3d == 0) {
    func_0x006758a8();
    return;
  }
  FUN_0040cee8();
  func_0x00676d5c();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 00666174; end: 006661d7;  */

void FUN_00666174(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x006758a8();
    return;
  }
  FUN_0040cee8();
  func_0x00676d5c();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}


