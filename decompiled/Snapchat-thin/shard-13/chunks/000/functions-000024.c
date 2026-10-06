/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d73128; end: 109d73377;  */

void FUN_109d73128(uint *param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar4 = (uint *)&UNK_10e043f98;
  puVar8 = param_1;
  do {
    uVar5 = param_2[2];
    puVar6 = (uint *)(ulong)uVar5;
    uVar7 = (uint)((ulong)puVar6 & 0xff);
    uVar2 = in_ZR;
    puVar3 = puVar8;
    switch((ulong)puVar6 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      puVar3 = param_1;
code_r0x000109d73188:
      FUN_109d3024c();
      puVar8 = *(uint **)(param_1 + 0x10);
      param_1 = (uint *)(ulong)param_1[0x12];
      param_2 = puVar3;
      puVar4 = puVar8;
code_r0x000109d731a8:
      func_0x000109d72f48();
      if ((puVar8 == puVar4 + (long)param_1 * 2) ||
         ((*puVar8 & 0xff) != 0x66 || *puVar8 >> 8 != (uint)param_2)) {
        if ((uint)param_2 >> 3 != 0) {
code_r0x000109d731e8:
code_r0x000109d73284:
        }
code_r0x000109d73288:
code_r0x000109d7328c:
      }
      else {
code_r0x000109d73314:
code_r0x000109d73318:
code_r0x000109d7331c:
      }
code_r0x000109d73320:
code_r0x000109d73324:
code_r0x000109d73330:
      return;
    case 7:
    case 9:
    case 0xc:
    case 0xe:
    case 0x14:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109d73378);
      (*pcVar1)();
    case 8:
    case 0xb6:
    case 0xc6:
    case 0xd2:
    case 0xe9:
    case 0xfe:
      if (param_3 == 0) {
code_r0x000109d73340:
      }
      goto code_r0x000109d73320;
    case 10:
    case 0x12:
    case 0x13:
      puVar4 = param_1;
      FUN_109d3024c(param_1,param_2);
      puVar6 = *(uint **)(param_1 + 0x10);
      uVar7 = param_1[0x12];
      puVar8 = puVar6;
      func_0x000109d72f48(puVar6,(ulong)uVar7,0x76,puVar4);
      in_ZR = puVar8 == puVar6 + (ulong)uVar7 * 2;
    case 199:
      if (!(bool)in_ZR) {
code_r0x000109d7322c:
        puVar6 = (uint *)(ulong)*puVar8;
code_r0x000109d73230:
        uVar7 = (uint)puVar6 & 0xff;
code_r0x000109d73234:
        uVar5 = (uint)((ulong)puVar6 >> 8);
code_r0x000109d73238:
        uVar2 = uVar7 == 0x76;
code_r0x000109d7323c:
        in_ZR = false;
        if ((bool)uVar2) {
          in_ZR = uVar5 == (uint)puVar4;
        }
code_r0x000109d73240:
        if ((bool)in_ZR) goto code_r0x000109d73314;
      }
code_r0x000109d73244:
      FUN_109d3024c(param_1,param_2);
      if ((undefined *)((long)param_1 + 7) < (undefined *)0x8) goto code_r0x000109d73288;
code_r0x000109d73268:
code_r0x000109d7326c:
code_r0x000109d73270:
code_r0x000109d73278:
code_r0x000109d7327c:
      goto code_r0x000109d73284;
    case 0xb:
      goto code_r0x000109d73320;
    case 0xd:
      puVar4 = param_1 + 0x10;
      param_1 = (uint *)(ulong)param_1[0x12];
      param_2 = *(uint **)puVar4;
    case 0xa4:
    case 0xab:
    case 0xac:
    case 0xae:
    case 200:
    case 0xd5:
    case 0xd6:
    case 0xdf:
    case 0xeb:
    case 0xf2:
      puVar8 = param_2;
      param_2 = puVar8;
code_r0x000109d732ec:
code_r0x000109d732f0:
      func_0x000109d72f48();
code_r0x000109d732f4:
      puVar6 = param_2 + (long)param_1 * 2;
code_r0x000109d732f8:
      in_ZR = puVar8 == puVar6;
code_r0x000109d732fc:
      if (!(bool)in_ZR) {
code_r0x000109d73300:
        uVar5 = (uint)(byte)*puVar8;
code_r0x000109d73304:
        in_ZR = uVar5 == 0x69;
code_r0x000109d73308:
        if ((bool)in_ZR) goto code_r0x000109d73314;
      }
code_r0x000109d7330c:
      goto code_r0x000109d73314;
    case 0xf:
    case 0xa6:
    case 0xaa:
    case 0xc1:
    case 0x78:
    case 0x93:
    case 0xa1:
    case 0xad:
    case 0xc5:
    case 0xd1:
    case 0xe8:
    case 0xfd:
      func_0x000109d72f9c();
code_r0x000109d732a4:
      if (param_3 == 0) {
code_r0x000109d73334:
code_r0x000109d73338:
      }
      else {
code_r0x000109d732a8:
      }
      goto code_r0x000109d73320;
    case 0x10:
      if ((param_3 == 0) || ((uVar5 >> 9 & 1) == 0)) {
        FUN_109d73090(param_1,param_2);
        goto code_r0x000109d73368;
      }
      goto code_r0x000109d73320;
    default:
      param_2 = *(uint **)(param_2 + 6);
    case 0x19:
    case 0x2c:
    case 0x2d:
    case 0x44:
    case 0x45:
      break;
    case 0x15:
    case 0x34:
    case 0x35:
    case 0x3c:
    case 0x4c:
    case 0x4d:
      puVar8 = param_2;
    case 0x3d:
    case 0x54:
    case 0x55:
    case 100:
    case 0x65:
    case 0x75:
      FUN_109da0310();
code_r0x000109d73178:
      param_2 = puVar8;
      break;
    case 0x18:
    case 0x20:
    case 0x28:
    case 0x30:
    case 0x38:
    case 0x81:
    case 0x88:
    case 0xdd:
    case 0xe3:
    case 0xf6:
      goto code_r0x000109d7330c;
    case 0x21:
      goto code_r0x000109d73188;
    case 0x29:
    case 0x41:
      goto code_r0x000109d731a8;
    case 0x31:
    case 0x49:
      goto code_r0x000109d731e8;
    case 0x39:
    case 0x51:
    case 0x61:
      goto code_r0x000109d73268;
    case 0x40:
    case 0x48:
    case 0x50:
    case 0x58:
      goto code_r0x000109d73300;
    case 0x59:
    case 0x69:
code_r0x000109d73368:
      goto code_r0x000109d73320;
    case 0x5c:
    case 0x5d:
    case 0x6c:
    case 0x6d:
      goto code_r0x000109d73178;
    case 0x60:
    case 0x68:
    case 0x7c:
    case 0x97:
      goto code_r0x000109d73340;
    case 0x70:
    case 0x82:
    case 0x8b:
    case 0xb3:
    case 0xb9:
    case 0xcb:
    case 0xdb:
    case 0xf0:
    case 0xf5:
      goto code_r0x000109d732ec;
    case 0x79:
    case 0x94:
    case 0xb1:
      goto code_r0x000109d73238;
    case 0x7a:
    case 0x7b:
    case 0x8e:
    case 0x95:
    case 0x96:
    case 0x9b:
      goto code_r0x000109d73318;
    case 0x7d:
    case 0x98:
    case 0xb8:
      goto code_r0x000109d7331c;
    case 0x7e:
    case 0xa2:
    case 0xaf:
    case 0xb0:
    case 0xc3:
    case 0xd7:
    case 0xd8:
    case 0xec:
    case 0xed:
      goto code_r0x000109d7322c;
    case 0x7f:
      goto code_r0x000109d73244;
    case 0x80:
      goto code_r0x000109d73278;
    case 0x83:
    case 0xe5:
      goto code_r0x000109d73304;
    case 0x84:
    case 0x8c:
    case 0xe4:
      goto code_r0x000109d73320;
    case 0x85:
    case 0x9d:
      goto code_r0x000109d73324;
    case 0x86:
    case 0xb4:
    case 0xb5:
    case 0xbc:
    case 0xcd:
    case 0xdc:
    case 0xe0:
    case 0xf8:
      goto code_r0x000109d73334;
    case 0x87:
    case 0x9f:
    case 0xbf:
    case 0xd3:
    case 0xe1:
    case 0xf3:
    case 0xf7:
      goto code_r0x000109d73338;
    case 0x89:
    case 0x9a:
    case 0xde:
    case 0xe7:
    case 0xee:
    case 0xfa:
      goto code_r0x000109d732f4;
    case 0x8a:
      goto code_r0x000109d73288;
    case 0x8d:
      goto code_r0x000109d732f8;
    case 0x8f:
    case 0xb7:
    case 0xce:
      goto code_r0x000109d732fc;
    case 0x90:
    case 0xba:
    case 0xcc:
    case 0xcf:
    case 0xe2:
    case 0xf1:
    case 0xf4:
      return;
    case 0x91:
    case 0xc0:
    case 0xc4:
    case 0xfb:
    case 0xfc:
      goto code_r0x000109d7327c;
    case 0x99:
    case 0xa3:
    case 0xd9:
      goto code_r0x000109d73230;
    case 0x9c:
    case 0xd4:
      goto code_r0x000109d73234;
    case 0x9e:
    case 0xbe:
    case 0xca:
      goto code_r0x000109d73330;
    case 0xa0:
    case 0xd0:
    case 0xe6:
    case 0xf9:
      goto code_r0x000109d7328c;
    case 0xa5:
      goto code_r0x000109d73284;
    case 0xa7:
    case 0xbd:
      goto code_r0x000109d732a4;
    case 0xa8:
      goto code_r0x000109d73270;
    case 0xa9:
      goto code_r0x000109d7326c;
    case 0xb2:
      goto code_r0x000109d732a8;
    case 0xbb:
      goto code_r0x000109d73314;
    case 0xc2:
    case 0xda:
      goto code_r0x000109d732f0;
    case 0xc9:
      goto code_r0x000109d73240;
    case 0xea:
    case 0xff:
      goto code_r0x000109d7323c;
    case 0xef:
      goto code_r0x000109d73308;
    }
  } while( true );
}



/* Entry: 109d73378; end: 109d733f7;  */

void FUN_109d73378(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((uVar1 & 0xfe) == 0x12) {
    uVar1 = *(uint *)(*(long *)param_2[2] + 8);
  }
  func_0x000109d72f9c(param_1,uVar1 >> 8);
  puVar2 = (undefined8 *)*param_2;
  FUN_109d9f850(puVar2,*(undefined4 *)(param_1 + 4));
  if ((*(uint *)(param_2 + 1) & 0xfe) == 0x12) {
    uVar1 = *(uint *)(param_2 + 4);
    uStack_38 = (ulong)uVar1;
    puStack_40 = puVar2;
    if (((*(uint *)(param_2 + 1) ^ 0xffffffff) & 0x13) == 0) {
      lVar5 = *(long *)*puVar2;
      uStack_38 = uStack_38 | 0x100000000;
      lVar3 = lVar5 + 0x900;
      FUN_109da1690(lVar3,&puStack_40);
      if (*(long *)(lVar3 + 0x10) == 0) {
        puVar4 = (undefined8 *)(lVar5 + 0x7e8);
        FUN_109d34148(puVar4,0x28,3);
        *puVar4 = *puVar2;
        puVar4[3] = puVar2;
        *(uint *)(puVar4 + 4) = uVar1;
        puVar4[2] = puVar4 + 3;
        puVar4[1] = 0x100000013;
        *(undefined8 **)(lVar3 + 0x10) = puVar4;
      }
      return;
    }
    lVar5 = *(long *)*puVar2;
    lVar3 = lVar5 + 0x900;
    FUN_109da1690(lVar3,&puStack_40);
    if (*(long *)(lVar3 + 0x10) == 0) {
      puVar4 = (undefined8 *)(lVar5 + 0x7e8);
      FUN_109d34148(puVar4,0x28,3);
      *puVar4 = *puVar2;
      puVar4[3] = puVar2;
      *(uint *)(puVar4 + 4) = uVar1;
      puVar4[2] = puVar4 + 3;
      puVar4[1] = 0x100000012;
      *(undefined8 **)(lVar3 + 0x10) = puVar4;
    }
    return;
  }
  return;
}



/* Entry: 109d733f8; end: 109d7350f;  */

/* WARNING: Removing unreachable block (ram,0x000109d734b0) */

ulong FUN_109d733f8(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_2 + 0x20) >> 0x11 & 0x3f;
  if (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    if ((*(uint *)(param_2 + 0x20) >> 0x17 & 1) != 0) {
      return (ulong)uVar2;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = param_1;
    FUN_109d73128(param_1,uVar5,0);
    uVar1 = uVar2 & 0xff;
    if (((uint)uVar4 & 0xff) <= uVar1) {
      return (ulong)uVar2;
    }
    FUN_109d73128(param_1,uVar5,1);
    if (uVar1 <= ((uint)param_1 & 0xff)) {
      uVar1 = (uint)param_1 & 0xff;
    }
    return (ulong)uVar1;
  }
  uVar6 = *(ulong *)(param_2 + 0x18);
  uVar4 = param_1;
  FUN_109d73128(param_1,uVar6,0);
  if (*(char *)(param_2 + 0x10) == '\0') {
    if (*(long **)(param_2 + 0x48) != (long *)(param_2 + 0x48)) goto LAB_109d734c4;
    bVar3 = (*(byte *)(param_2 + 0x23) & 1) == 0;
  }
  else {
    if (*(char *)(param_2 + 0x10) != '\x03') goto LAB_109d734c4;
    bVar3 = (*(uint *)(param_2 + 0x14) & 0x7ffffff) == 0;
  }
  if (bVar3) {
    return uVar4;
  }
LAB_109d734c4:
  if (((uint)uVar4 & 0xff) < 4) {
    FUN_109d3024c();
    if ((uVar6 & 1) != 0) {
      FUN_109e0486c(&UNK_10f602449);
    }
    uVar2 = 4;
    if (param_1 < 0x81) {
      uVar2 = (uint)uVar4;
    }
    uVar4 = (ulong)uVar2;
  }
  return uVar4;
}



/* Entry: 109d73510; end: 109d73607;  */

long FUN_109d73510(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 8;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x1000000000;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(long *)(param_1 + 0x20) = param_1 + 0x38;
  *(long *)(param_1 + 0x40) = param_1 + 0x50;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(long *)(param_1 + 0xe8) = param_1 + 0xf8;
  *(undefined8 *)(param_1 + 0xf0) = 0x800000000;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(long *)(param_1 + 0x180) = param_1 + 400;
  *(undefined8 *)(param_1 + 0x188) = 0x800000000;
  FUN_109d71d68();
  return param_1;
}



/* Entry: 109d73608; end: 109d7365f;  */

undefined8 * FUN_109d73608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d73660(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d736f8(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d73660; end: 109d736f7;  */

undefined8 FUN_109d73660(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d736a0;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d736a0:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d736f8; end: 109d7379f;  */

long * FUN_109d736f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d73744;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d737a0(param_1,uVar1);
  FUN_109d73660(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d73744:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d737a0; end: 109d7394b;  */

void FUN_109d737a0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d73660(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d7394c; end: 109d739e3;  */

undefined8 FUN_109d7394c(long *param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    puVar5 = (ulong *)0x0;
  }
  else {
    uVar6 = *param_2;
    uVar3 = (int)param_1[2] - 1;
    uVar9 = (ulong)(((uint)(uVar6 >> 4) & 0xfffffff ^ (uint)uVar6 >> 9) & uVar3);
    puVar5 = (ulong *)(*param_1 + uVar9 * 0x20);
    uVar8 = *puVar5;
    if (uVar6 != uVar8) {
      iVar10 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar4 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar5 = puVar7;
          }
          goto LAB_109d7398c;
        }
        puVar2 = puVar5;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar2 = puVar7;
        }
        uVar1 = (int)uVar9 + iVar10;
        iVar10 = iVar10 + 1;
        uVar9 = (ulong)(uVar1 & uVar3);
        puVar5 = (ulong *)(*param_1 + uVar9 * 0x20);
        uVar8 = *puVar5;
        puVar7 = puVar2;
      } while (uVar6 != uVar8);
    }
    uVar4 = 1;
  }
LAB_109d7398c:
  *param_3 = (long)puVar5;
  return uVar4;
}



/* Entry: 109d739e4; end: 109d73a93;  */

void FUN_109d739e4(ulong param_1,long *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  FUN_109d73a94();
  bVar1 = *(byte *)(param_1 + 1);
  if ((bVar1 & 0x7f) == 0) {
    FUN_109d96c08(param_1);
  }
  if (*(uint *)(param_1 + 0x18) != 0) {
    plVar4 = *(long **)(param_1 + 0x10);
    lVar5 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    do {
      if (plVar4 == param_2) {
        lVar2 = param_3;
        if (param_3 == 0) {
          lVar2 = **(long **)(*plVar4 + 0x80);
          func_0x000109d677ec();
          FUN_109d94e24();
        }
        *plVar4 = lVar2;
      }
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if (((bVar1 & 0x7f) == 0) && (uVar3 = param_1, FUN_109d95c1c(), uVar3 != param_1)) {
    FUN_109d95bac(param_1);
  }
  if (*(uint *)(param_1 + 0x18) != 0) {
    plVar4 = *(long **)(param_1 + 0x10);
    lVar5 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    do {
      if (*plVar4 != 0) {
        FUN_109d9464c(plVar4,*plVar4,param_1 | 2);
      }
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d73a94; end: 109d73ad7;  */

void FUN_109d73a94(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x18) != 0) {
    plVar1 = *(long **)(param_1 + 0x10);
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    do {
      if (*plVar1 != 0) {
        FUN_109d94730(plVar1);
      }
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 109d73ad8; end: 109d73b2b;  */

void FUN_109d73ad8(ulong param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x18) != 0) {
    plVar1 = *(long **)(param_1 + 0x10);
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    do {
      if (*plVar1 != 0) {
        FUN_109d9464c(plVar1,*plVar1,param_1 | 2);
      }
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 109d73b2c; end: 109d73b77;  */

ulong * FUN_109d73b2c(ulong *param_1)

{
  ulong uVar1;
  
  if ((((uint)*param_1 >> 2 & 1) != 0) && (uVar1 = *param_1 & 0xfffffffffffffff8, uVar1 != 0)) {
    if ((*(byte *)(uVar1 + 0x10) & 1) == 0) {
      __ZdlPvSt11align_val_t(*(undefined8 *)(uVar1 + 0x18),8);
    }
    __ZdlPv(uVar1);
  }
  return param_1;
}



/* Entry: 109d73b78; end: 109d73c4b;  */

undefined8 FUN_109d73b78(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d73c4c();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d73ebc();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d73c2c;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d73c2c:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d73c4c; end: 109d73cd3;  */

void FUN_109d73c4c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uStack_f8;
  undefined4 auStack_a8 [16];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_a8);
  puVar8 = param_1 + 6;
  auStack_a8[0] = *param_1;
  puVar1 = auStack_a8;
  puVar5 = auStack_68;
  puVar6 = (undefined8 *)(param_1 + 2);
  puVar7 = param_1 + 4;
  uVar4 = 0;
  FUN_109d73cd4(puVar1,0,(ulong)auStack_a8 | 4,puVar5,param_1 + 1,puVar6,puVar7,puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d35318();
  puVar3 = puVar1;
  uStack_f8 = uVar4;
  FUN_109d73d64(puVar1,&uStack_f8,puVar2,puVar5,*puVar6);
  func_0x000109d73e44(puVar1,uStack_f8,puVar3,puVar5,puVar7,puVar8);
  return;
}



/* Entry: 109d73cd4; end: 109d73d63;  */

void FUN_109d73cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d35318(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d73e44(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d73d64; end: 109d73ebb;  */

undefined8 *
FUN_109d73d64(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = param_3 + 1;
  if (param_4 < puVar3) {
    lVar4 = (long)param_4 - (long)param_3;
    uStack_38 = param_5;
    _memcpy(param_3,&uStack_38,lVar4);
    if (*param_2 == 0) {
      FUN_109d35128(&uStack_70,param_1,param_1[0xf]);
      param_1[9] = uStack_68;
      param_1[8] = uStack_70;
      param_1[0xb] = uStack_58;
      param_1[10] = uStack_60;
      param_1[0xd] = uStack_48;
      param_1[0xc] = uStack_50;
      param_1[0xe] = uStack_40;
      lVar2 = 0x40;
    }
    else {
      FUN_109d351b0(param_1 + 8,param_1);
      lVar2 = *param_2 + 0x40;
    }
    *param_2 = lVar2;
    puVar1 = (undefined8 *)((long)param_1 + (8 - lVar4));
    puVar3 = param_1;
    if (puVar1 <= param_4) {
      _memcpy(param_1,(long)&uStack_38 + lVar4);
      puVar3 = puVar1;
    }
  }
  else {
    *param_3 = param_5;
  }
  return puVar3;
}



/* Entry: 109d73ebc; end: 109d73f5f;  */

bool FUN_109d73ebc(int *param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (*param_1 != *(int *)(param_2 + 4)) {
    return false;
  }
  if (param_1[1] != (uint)*(ushort *)(param_2 + 2)) {
    return false;
  }
  uVar3 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar3 >> 1 & 1) == 0) {
    puVar2 = (ulong *)(param_2 + -0x10) + -(uVar3 >> 2 & 0xf);
    if (*(ulong *)(param_1 + 2) != *puVar2) {
      return false;
    }
    uVar1 = *(ulong *)(param_1 + 4);
    if ((uVar3 & 0x3c0) == 0x80) {
LAB_109d73f10:
      uVar3 = puVar2[1];
      goto LAB_109d73f3c;
    }
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
    if (*(ulong *)(param_1 + 2) != *puVar2) {
      return false;
    }
    uVar1 = *(ulong *)(param_1 + 4);
    if (*(int *)(param_2 + -0x18) == 2) goto LAB_109d73f10;
  }
  uVar3 = 0;
LAB_109d73f3c:
  if (uVar1 != uVar3) {
    return false;
  }
  return *(byte *)(param_1 + 6) == *(byte *)(param_2 + 1) >> 7;
}



/* Entry: 109d73f60; end: 109d740af;  */

void FUN_109d73f60(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d73fe0(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d74130(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d740b0; end: 109d7412f;  */

void FUN_109d740b0(undefined4 *param_1,long param_2)

{
  ushort uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar1 = *(ushort *)(param_2 + 2);
  *param_1 = *(undefined4 *)(param_2 + 4);
  param_1[1] = (uint)uVar1;
  puVar2 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar3 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 2) = *puVar3;
  uVar4 = *puVar2;
  if (((uint)uVar4 >> 1 & 1) == 0) {
    if ((uVar4 & 0x3c0) != 0x80) {
LAB_109d74118:
      uVar4 = 0;
      goto LAB_109d7411c;
    }
    puVar2 = puVar2 + -(uVar4 >> 2 & 0xf);
  }
  else {
    if (*(int *)(param_2 + -0x18) != 2) goto LAB_109d74118;
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  uVar4 = puVar2[1];
LAB_109d7411c:
  *(ulong *)(param_1 + 4) = uVar4;
  *(byte *)(param_1 + 6) = *(byte *)(param_2 + 1) >> 7;
  return;
}



/* Entry: 109d74130; end: 109d741d7;  */

long * FUN_109d74130(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d7417c;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d741d8(param_1,uVar1);
  func_0x000109d73fe0(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d7417c:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d741d8; end: 109d7432f;  */

void FUN_109d741d8(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d74290(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d74330; end: 109d74403;  */

undefined8 FUN_109d74330(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d74404();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d745e4();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d743e4;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d743e4:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d74404; end: 109d745e3;  */

/* WARNING: Possible PIC construction at 0x000109d74458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d7445c) */
/* WARNING: Removing unreachable block (ram,0x000109d74488) */
/* WARNING: Removing unreachable block (ram,0x000109d74474) */

void FUN_109d74404(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 auStack_b8 [16];
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  FUN_109d2fb48(auStack_b8);
  uStack_100 = 0;
  puVar2 = auStack_b8;
  auStack_b8[0] = uVar1;
  FUN_109d35318(auStack_b8,&uStack_100,(ulong)auStack_b8 | 4,auStack_78,
                *(undefined4 *)(param_1 + 0x24));
  uStack_f8 = uStack_100;
  puVar3 = auStack_b8;
  func_0x000109d74504(auStack_b8,&uStack_f8,puVar2,auStack_78,*(undefined8 *)(param_1 + 0x28));
  func_0x000109d353f8(auStack_b8,uStack_f8,puVar3,auStack_78);
  return;
}



/* Entry: 109d745e4; end: 109d7476b;  */

bool FUN_109d745e4(long *param_1,long param_2)

{
  bool bVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(uint *)((long)param_1 + 0x24) != (uint)*(ushort *)(param_2 + 2)) {
    return false;
  }
  uVar7 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar7 >> 1 & 1) == 0) {
    puVar4 = (ulong *)(param_2 + -0x10) + -(uVar7 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  if (param_1[5] != *puVar4) {
    return false;
  }
  if ((int)param_1[4] != *(int *)(param_2 + 4)) {
    return false;
  }
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar6 = *(ulong *)(param_2 + -0x10);
    uVar5 = (uint)uVar6;
    if ((uVar5 >> 1 & 1) == 0) {
      if (uVar7 != (uVar5 >> 6 & 0xf) - 1) {
        return false;
      }
      puVar4 = (ulong *)(param_2 + -0x10) + -(uVar6 >> 2 & 0xf);
    }
    else {
      if (uVar7 != *(int *)(param_2 + -0x18) - 1) {
        return false;
      }
      puVar4 = *(ulong **)(param_2 + -0x20);
    }
    if (uVar7 == 0) {
      bVar1 = true;
    }
    else {
      lVar3 = uVar7 * 8;
      puVar2 = (ulong *)*param_1;
      do {
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        bVar1 = *puVar2 == *puVar4;
        puVar2 = puVar2 + 1;
      } while (bVar1 && lVar3 != 0);
    }
    return bVar1;
  }
  uVar7 = param_1[3];
  uVar6 = *(ulong *)(param_2 + -0x10);
  uVar5 = (uint)uVar6;
  if ((uVar5 >> 1 & 1) == 0) {
    if (uVar7 != (uVar5 >> 6 & 0xf) - 1) {
      return false;
    }
    puVar4 = (ulong *)(param_2 + -0x10) + -(uVar6 >> 2 & 0xf);
  }
  else {
    if (uVar7 != *(int *)(param_2 + -0x18) - 1) {
      return false;
    }
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  if (uVar7 == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = uVar7 * 8;
    puVar2 = (ulong *)param_1[2];
    do {
      lVar3 = lVar3 + -8;
      puVar4 = puVar4 + 1;
      bVar1 = *puVar2 == *puVar4;
      puVar2 = puVar2 + 1;
    } while (bVar1 && lVar3 != 0);
  }
  return bVar1;
}



/* Entry: 109d7476c; end: 109d748bb;  */

void FUN_109d7476c(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d747ec(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d74928(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d748bc; end: 109d74927;  */

void FUN_109d748bc(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = (ulong *)(param_2 + -0x10);
  uVar4 = *puVar2;
  if (((uint)uVar4 >> 1 & 1) == 0) {
    puVar3 = puVar2 + -(uVar4 >> 2 & 0xf);
    uVar4 = uVar4 >> 6 & 0xf;
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
    uVar4 = (ulong)*(uint *)(param_2 + -0x18);
  }
  param_1[2] = puVar3 + 1;
  param_1[3] = (long)(uVar4 * 8 + -8) >> 3;
  uVar1 = *(ushort *)(param_2 + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(uint *)((long)param_1 + 0x24) = (uint)uVar1;
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar2 = puVar2 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[5] = *puVar2;
  return;
}



/* Entry: 109d74928; end: 109d749cf;  */

long * FUN_109d74928(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d74974;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d749d0(param_1,uVar1);
  func_0x000109d747ec(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d74974:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d749d0; end: 109d74b27;  */

void FUN_109d749d0(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d74a88(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d74b28; end: 109d74bfb;  */

undefined8 FUN_109d74b28(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d74bfc();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d74f6c();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d74bdc;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d74bdc:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d74bfc; end: 109d74cf3;  */

void FUN_109d74bfc(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_f8;
  long lStack_b0;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = (char *)*param_1;
  if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\x01')) {
    FUN_109d2fb48(auStack_a8);
    puVar1 = auStack_a8;
    puVar5 = auStack_68;
    puVar6 = param_1 + 1;
    puVar7 = param_1 + 2;
    puVar8 = param_1 + 3;
    uVar4 = 0;
    FUN_109d74edc(puVar1,0,auStack_a8,puVar5,param_1,puVar6,puVar7,puVar8);
  }
  else {
    lVar10 = *(long *)(pcVar9 + 0x80);
    if (*(uint *)(lVar10 + 0x20) < 0x41) {
      uVar11 = -(ulong)*(uint *)(lVar10 + 0x20);
      lStack_b0 = (*(long *)(lVar10 + 0x18) << (uVar11 & 0x3f)) >> (uVar11 & 0x3f);
    }
    else {
      lStack_b0 = **(long **)(lVar10 + 0x18);
    }
    FUN_109d2fb48(auStack_a8);
    puVar1 = auStack_a8;
    puVar5 = auStack_68;
    puVar6 = param_1 + 1;
    puVar7 = param_1 + 2;
    puVar8 = param_1 + 3;
    uVar4 = 0;
    FUN_109d74cf4(puVar1,0,auStack_a8,puVar5,&lStack_b0,puVar6,puVar7,puVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d74d84();
  puVar3 = puVar1;
  uStack_f8 = uVar4;
  FUN_109d73d64(puVar1,&uStack_f8,puVar2,puVar5,*puVar6);
  func_0x000109d74e64(puVar1,uStack_f8,puVar3,puVar5,puVar7,puVar8);
  return;
}



/* Entry: 109d74cf4; end: 109d74d83;  */

void FUN_109d74cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d74d84(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d74e64(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d74d84; end: 109d74edb;  */

undefined8 *
FUN_109d74d84(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = param_3 + 1;
  if (param_4 < puVar3) {
    lVar4 = (long)param_4 - (long)param_3;
    uStack_38 = param_5;
    _memcpy(param_3,&uStack_38,lVar4);
    if (*param_2 == 0) {
      FUN_109d35128(&uStack_70,param_1,param_1[0xf]);
      param_1[9] = uStack_68;
      param_1[8] = uStack_70;
      param_1[0xb] = uStack_58;
      param_1[10] = uStack_60;
      param_1[0xd] = uStack_48;
      param_1[0xc] = uStack_50;
      param_1[0xe] = uStack_40;
      lVar2 = 0x40;
    }
    else {
      FUN_109d351b0(param_1 + 8,param_1);
      lVar2 = *param_2 + 0x40;
    }
    *param_2 = lVar2;
    puVar1 = (undefined8 *)((long)param_1 + (8 - lVar4));
    puVar3 = param_1;
    if (puVar1 <= param_4) {
      _memcpy(param_1,(long)&uStack_38 + lVar4);
      puVar3 = puVar1;
    }
  }
  else {
    *param_3 = param_5;
  }
  return puVar3;
}



/* Entry: 109d74edc; end: 109d74f6b;  */

void FUN_109d74edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d73d64(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d74e64(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d74f6c; end: 109d75263;  */

undefined8 FUN_109d74f6c(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  
  pcVar1 = (char *)*param_1;
  puVar3 = (ulong *)(param_2 + -0x10);
  uVar5 = *puVar3;
  uVar4 = (uint)uVar5;
  if ((uVar4 >> 1 & 1) == 0) {
    puVar8 = puVar3 + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar8 = *(ulong **)(param_2 + -0x20);
  }
  pcVar6 = (char *)*puVar8;
  if (pcVar1 != pcVar6) {
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else if (*pcVar1 != '\x01') {
      pcVar1 = (char *)0x0;
    }
    if (pcVar6 == (char *)0x0) {
      return 0;
    }
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
    if (*pcVar6 != '\x01') {
      return 0;
    }
    lVar9 = *(long *)(pcVar1 + 0x80);
    lVar2 = *(long *)(pcVar6 + 0x80);
    if (*(uint *)(lVar9 + 0x20) < 0x41) {
      uVar7 = -(ulong)*(uint *)(lVar9 + 0x20);
      lVar9 = (*(long *)(lVar9 + 0x18) << (uVar7 & 0x3f)) >> (uVar7 & 0x3f);
    }
    else {
      lVar9 = **(long **)(lVar9 + 0x18);
    }
    if (*(uint *)(lVar2 + 0x20) < 0x41) {
      uVar7 = -(ulong)*(uint *)(lVar2 + 0x20);
      lVar2 = (*(long *)(lVar2 + 0x18) << (uVar7 & 0x3f)) >> (uVar7 & 0x3f);
    }
    else {
      lVar2 = **(long **)(lVar2 + 0x18);
    }
    if (lVar9 != lVar2) {
      return 0;
    }
  }
  pcVar1 = (char *)param_1[1];
  if ((uVar4 >> 1 & 1) == 0) {
    puVar8 = puVar3 + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar8 = *(ulong **)(param_2 + -0x20);
  }
  pcVar6 = (char *)puVar8[1];
  if (pcVar1 != pcVar6) {
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else if (*pcVar1 != '\x01') {
      pcVar1 = (char *)0x0;
    }
    if (pcVar6 == (char *)0x0) {
      return 0;
    }
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
    if (*pcVar6 != '\x01') {
      return 0;
    }
    lVar9 = *(long *)(pcVar1 + 0x80);
    lVar2 = *(long *)(pcVar6 + 0x80);
    if (*(uint *)(lVar9 + 0x20) < 0x41) {
      uVar7 = -(ulong)*(uint *)(lVar9 + 0x20);
      lVar9 = (*(long *)(lVar9 + 0x18) << (uVar7 & 0x3f)) >> (uVar7 & 0x3f);
    }
    else {
      lVar9 = **(long **)(lVar9 + 0x18);
    }
    if (*(uint *)(lVar2 + 0x20) < 0x41) {
      uVar7 = -(ulong)*(uint *)(lVar2 + 0x20);
      lVar2 = (*(long *)(lVar2 + 0x18) << (uVar7 & 0x3f)) >> (uVar7 & 0x3f);
    }
    else {
      lVar2 = **(long **)(lVar2 + 0x18);
    }
    if (lVar9 != lVar2) {
      return 0;
    }
  }
  pcVar1 = (char *)param_1[2];
  if ((uVar4 >> 1 & 1) == 0) {
    puVar8 = puVar3 + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar8 = *(ulong **)(param_2 + -0x20);
  }
  pcVar6 = (char *)puVar8[2];
  if (pcVar1 != pcVar6) {
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else if (*pcVar1 != '\x01') {
      pcVar1 = (char *)0x0;
    }
    if (pcVar6 == (char *)0x0) {
      return 0;
    }
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
    if (*pcVar6 != '\x01') {
      return 0;
    }
    lVar9 = *(long *)(pcVar1 + 0x80);
    lVar2 = *(long *)(pcVar6 + 0x80);
    if (*(uint *)(lVar9 + 0x20) < 0x41) {
      uVar7 = -(ulong)*(uint *)(lVar9 + 0x20);
      lVar9 = (*(long *)(lVar9 + 0x18) << (uVar7 & 0x3f)) >> (uVar7 & 0x3f);
    }
    else {
      lVar9 = **(long **)(lVar9 + 0x18);
    }
    if (*(uint *)(lVar2 + 0x20) < 0x41) {
      uVar7 = -(ulong)*(uint *)(lVar2 + 0x20);
      lVar2 = (*(long *)(lVar2 + 0x18) << (uVar7 & 0x3f)) >> (uVar7 & 0x3f);
    }
    else {
      lVar2 = **(long **)(lVar2 + 0x18);
    }
    if (lVar9 != lVar2) {
      return 0;
    }
  }
  pcVar1 = (char *)param_1[3];
  if ((uVar4 >> 1 & 1) == 0) {
    puVar3 = puVar3 + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  pcVar6 = (char *)puVar3[3];
  if (pcVar1 == pcVar6) {
    return 1;
  }
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else if (*pcVar1 != '\x01') {
    pcVar1 = (char *)0x0;
  }
  if (((pcVar6 != (char *)0x0) && (pcVar1 != (char *)0x0)) && (*pcVar6 == '\x01')) {
    lVar9 = *(long *)(pcVar1 + 0x80);
    lVar2 = *(long *)(pcVar6 + 0x80);
    if (*(uint *)(lVar9 + 0x20) < 0x41) {
      uVar5 = -(ulong)*(uint *)(lVar9 + 0x20);
      lVar9 = (*(long *)(lVar9 + 0x18) << (uVar5 & 0x3f)) >> (uVar5 & 0x3f);
    }
    else {
      lVar9 = **(long **)(lVar9 + 0x18);
    }
    if (*(uint *)(lVar2 + 0x20) < 0x41) {
      uVar5 = -(ulong)*(uint *)(lVar2 + 0x20);
      lVar2 = (*(long *)(lVar2 + 0x18) << (uVar5 & 0x3f)) >> (uVar5 & 0x3f);
    }
    else {
      lVar2 = **(long **)(lVar2 + 0x18);
    }
    if (lVar9 == lVar2) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 109d75264; end: 109d753b3;  */

void FUN_109d75264(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d752e4(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d7543c(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d753b4; end: 109d7543b;  */

void FUN_109d753b4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = *puVar2;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar2[1];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[2] = puVar2[2];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  param_1[3] = puVar1[3];
  return;
}



/* Entry: 109d7543c; end: 109d754e3;  */

long * FUN_109d7543c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d75488;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d754e4(param_1,uVar1);
  func_0x000109d752e4(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d75488:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d754e4; end: 109d7563b;  */

void FUN_109d754e4(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7559c(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d7563c; end: 109d7570f;  */

undefined8 FUN_109d7563c(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d75710();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d75808();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d756f0;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d756f0:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d75710; end: 109d75807;  */

ulong * FUN_109d75710(undefined8 *param_1)

{
  ulong *puVar1;
  char *pcVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  long lStack_b0;
  ulong auStack_a8 [8];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = (char *)*param_1;
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\x01')) {
    FUN_109d2fb48(auStack_a8);
    puVar1 = auStack_a8;
    lVar3 = 0;
    FUN_109d74edc(puVar1,0,auStack_a8,auStack_68,param_1,param_1 + 1,param_1 + 2,param_1 + 3);
  }
  else {
    lVar3 = *(long *)(pcVar2 + 0x80);
    if (*(uint *)(lVar3 + 0x20) < 0x41) {
      uVar5 = -(ulong)*(uint *)(lVar3 + 0x20);
      lStack_b0 = (*(long *)(lVar3 + 0x18) << (uVar5 & 0x3f)) >> (uVar5 & 0x3f);
    }
    else {
      lStack_b0 = **(long **)(lVar3 + 0x18);
    }
    FUN_109d2fb48(auStack_a8);
    puVar1 = auStack_a8;
    lVar3 = 0;
    FUN_109d74cf4(puVar1,0,auStack_a8,auStack_68,&lStack_b0,param_1 + 1,param_1 + 2,param_1 + 3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar5 = *(ulong *)(lVar3 + -0x10);
  if (((uint)uVar5 >> 1 & 1) == 0) {
    puVar4 = (ulong *)(lVar3 + -0x10) + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(lVar3 + -0x20);
  }
  if (((*puVar1 == *puVar4) && (puVar1[1] == puVar4[1])) && (puVar1[2] == puVar4[2])) {
    return (ulong *)(ulong)(puVar1[3] == puVar4[3]);
  }
  return (ulong *)0x0;
}



/* Entry: 109d75808; end: 109d7586f;  */

bool FUN_109d75808(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar2 >> 1 & 1) == 0) {
    puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  if (((*param_1 == *puVar1) && (param_1[1] == puVar1[1])) && (param_1[2] == puVar1[2])) {
    return param_1[3] == puVar1[3];
  }
  return false;
}



/* Entry: 109d75870; end: 109d759bf;  */

void FUN_109d75870(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d758f0(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d75a48(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d759c0; end: 109d75a47;  */

void FUN_109d759c0(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *param_1 = *puVar2;
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[1] = puVar2[1];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[2] = puVar2[2];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  param_1[3] = puVar1[3];
  return;
}



/* Entry: 109d75a48; end: 109d75aef;  */

long * FUN_109d75a48(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d75a94;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d75af0(param_1,uVar1);
  func_0x000109d758f0(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d75a94:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d75af0; end: 109d75c47;  */

void FUN_109d75af0(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d75ba8(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d75c48; end: 109d75d73;  */

void FUN_109d75c48(long *param_1,ulong param_2,long *param_3,undefined1 *param_4,ulong param_5,
                  undefined8 *param_6)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint uVar9;
  ulong *puVar10;
  int iVar11;
  ulong uStack_130;
  ulong uStack_128;
  ulong *puStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long alStack_e8 [8];
  undefined1 auStack_a8 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1[2];
  if ((int)lVar1 == 0) {
    puVar10 = (ulong *)0x0;
    uVar4 = 0;
    uVar7 = param_2;
    plVar8 = param_3;
  }
  else {
    unaff_x21 = *param_1;
    FUN_109d2fb48(alStack_e8);
    plVar2 = alStack_e8;
    plVar8 = alStack_e8;
    param_4 = auStack_a8;
    param_6 = (undefined8 *)(param_2 + 0x10);
    param_5 = param_2;
    FUN_109d75d74(plVar2,0,plVar8,param_4,param_2);
    uVar9 = (uint)plVar2;
    iVar11 = 1;
    unaff_x22 = (ulong *)0x0;
    while( true ) {
      uVar9 = (int)lVar1 - 1U & uVar9;
      puVar10 = (ulong *)(unaff_x21 + (ulong)uVar9 * 8);
      uVar7 = *puVar10;
      unaff_x20 = param_2;
      if ((uVar7 | 0x1000) != 0xfffffffffffff000) {
        uVar3 = param_2;
        FUN_109d75e04();
        if ((uVar3 & 1) != 0) {
          uVar4 = 1;
          goto LAB_109d75d34;
        }
        uVar7 = *puVar10;
      }
      if (uVar7 == 0xfffffffffffff000) break;
      if (unaff_x22 != (ulong *)0x0 || uVar7 != 0xffffffffffffe000) {
        puVar10 = unaff_x22;
      }
      uVar9 = uVar9 + iVar11;
      iVar11 = iVar11 + 1;
      unaff_x22 = puVar10;
    }
    uVar4 = 0;
    if (unaff_x22 != (ulong *)0x0) {
      puVar10 = unaff_x22;
    }
    uVar7 = 0xfffffffffffff000;
  }
LAB_109d75d34:
  *param_3 = (long)puVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail(uVar4);
  pcStack_f8 = FUN_109d75d74;
  uStack_130 = uVar7;
  puStack_120 = unaff_x22;
  lStack_118 = unaff_x21;
  uStack_110 = unaff_x20;
  plStack_108 = param_3;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_109df0710(param_5);
  uVar5 = uVar4;
  FUN_109d358f0(uVar4,&uStack_130,plVar8,param_4,param_5);
  uStack_128 = uStack_130;
  uVar6 = uVar4;
  func_0x000109d74504(uVar4,&uStack_128,uVar5,param_4,*param_6);
  func_0x000109d353f8(uVar4,uStack_128,uVar6,param_4);
  return;
}



/* Entry: 109d75d74; end: 109d75e03;  */

void FUN_109d75d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  FUN_109df0710(param_5);
  uVar1 = param_1;
  FUN_109d358f0(param_1,&uStack_40,param_3,param_4,param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  func_0x000109d74504(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109d75e04; end: 109d75ebf;  */

bool FUN_109d75e04(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != *(uint *)(param_2 + 0x18)) {
    return false;
  }
  if (uVar1 < 0x41) {
    if (*param_1 != *(long *)(param_2 + 0x10)) {
      return false;
    }
  }
  else {
    lVar2 = *param_1;
    _memcmp(lVar2,*(undefined8 *)(param_2 + 0x10),(ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8);
    if ((int)lVar2 != 0) {
      return false;
    }
  }
  if ((bool)(char)param_1[3] != (*(int *)(param_2 + 4) != 0)) {
    return false;
  }
  uVar4 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar4 >> 1 & 1) == 0) {
    puVar3 = (ulong *)(param_2 + -0x10) + -(uVar4 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_2 + -0x20);
  }
  return param_1[2] == *puVar3;
}



/* Entry: 109d75ec0; end: 109d75ffb;  */

void FUN_109d75ec0(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d75f40(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d76168(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d75ffc; end: 109d760cb;  */

ulong * FUN_109d75ffc(undefined8 param_1)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puStack_c8;
  uint uStack_c0;
  undefined1 auStack_b8 [16];
  ulong auStack_a8 [8];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d760cc(&puStack_c8,param_1);
  FUN_109d2fb48(auStack_a8);
  puVar4 = auStack_a8;
  lVar3 = 0;
  FUN_109d75d74(puVar4,0,auStack_a8,auStack_68,&puStack_c8,auStack_b8);
  puVar2 = puVar4;
  if ((0x40 < uStack_c0) && (puVar2 = puStack_c8, puStack_c8 != (ulong *)0x0)) {
    __ZdaPv();
    puVar2 = puStack_c8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uVar1 = *(uint *)(lVar3 + 0x18);
  *(uint *)(puVar2 + 1) = uVar1;
  if (uVar1 < 0x41) {
    *puVar2 = *(ulong *)(lVar3 + 0x10);
  }
  else {
    uVar5 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
    __Znam();
    *puVar2 = uVar5;
    _memcpy();
  }
  uVar5 = *(ulong *)(lVar3 + -0x10);
  if (((uint)uVar5 >> 1 & 1) == 0) {
    puVar4 = (ulong *)(lVar3 + -0x10) + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(lVar3 + -0x20);
  }
  puVar2[2] = *puVar4;
  *(bool *)(puVar2 + 3) = *(int *)(lVar3 + 4) != 0;
  return puVar2;
}



/* Entry: 109d760cc; end: 109d76167;  */

ulong * FUN_109d760cc(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  *(uint *)(param_1 + 1) = uVar1;
  if (uVar1 < 0x41) {
    *param_1 = *(ulong *)(param_2 + 0x10);
  }
  else {
    uVar3 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
    __Znam();
    *param_1 = uVar3;
    _memcpy();
  }
  uVar3 = *(ulong *)(param_2 + -0x10);
  if (((uint)uVar3 >> 1 & 1) == 0) {
    puVar2 = (ulong *)(param_2 + -0x10) + -(uVar3 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  param_1[2] = *puVar2;
  *(bool *)(param_1 + 3) = *(int *)(param_2 + 4) != 0;
  return param_1;
}



/* Entry: 109d76168; end: 109d7620f;  */

long * FUN_109d76168(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d761b4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d76210(param_1,uVar1);
  func_0x000109d75f40(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d761b4:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d76210; end: 109d76367;  */

void FUN_109d76210(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d762c8(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d76368; end: 109d7643b;  */

undefined8 FUN_109d76368(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d7643c();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d766ac();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d7641c;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d7641c:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d7643c; end: 109d764c3;  */

void FUN_109d7643c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uStack_f8;
  undefined4 auStack_a8 [16];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_a8);
  puVar8 = param_1 + 7;
  auStack_a8[0] = *param_1;
  puVar1 = auStack_a8;
  puVar5 = auStack_68;
  puVar6 = (undefined8 *)(param_1 + 4);
  puVar7 = param_1 + 6;
  uVar4 = 0;
  FUN_109d764c4(puVar1,0,(ulong)auStack_a8 | 4,puVar5,param_1 + 2,puVar6,puVar7,puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x000109d74504();
  puVar3 = puVar1;
  uStack_f8 = uVar4;
  FUN_109d76554(puVar1,&uStack_f8,puVar2,puVar5,*puVar6);
  func_0x000109d76634(puVar1,uStack_f8,puVar3,puVar5,puVar7,puVar8);
  return;
}



/* Entry: 109d764c4; end: 109d76553;  */

void FUN_109d764c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  func_0x000109d74504(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d76554(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d76634(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d76554; end: 109d766ab;  */

undefined8 *
FUN_109d76554(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = param_3 + 1;
  if (param_4 < puVar3) {
    lVar4 = (long)param_4 - (long)param_3;
    uStack_38 = param_5;
    _memcpy(param_3,&uStack_38,lVar4);
    if (*param_2 == 0) {
      FUN_109d35128(&uStack_70,param_1,param_1[0xf]);
      param_1[9] = uStack_68;
      param_1[8] = uStack_70;
      param_1[0xb] = uStack_58;
      param_1[10] = uStack_60;
      param_1[0xd] = uStack_48;
      param_1[0xc] = uStack_50;
      param_1[0xe] = uStack_40;
      lVar2 = 0x40;
    }
    else {
      FUN_109d351b0(param_1 + 8,param_1);
      lVar2 = *param_2 + 0x40;
    }
    *param_2 = lVar2;
    puVar1 = (undefined8 *)((long)param_1 + (8 - lVar4));
    puVar3 = param_1;
    if (puVar1 <= param_4) {
      _memcpy(param_1,(long)&uStack_38 + lVar4);
      puVar3 = puVar1;
    }
  }
  else {
    *param_3 = param_5;
  }
  return puVar3;
}



/* Entry: 109d766ac; end: 109d76733;  */

bool FUN_109d766ac(uint *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (*param_1 == (uint)*(ushort *)(param_2 + 2)) {
    uVar2 = *(ulong *)(param_2 + -0x10);
    if (((uint)uVar2 >> 1 & 1) == 0) {
      puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
    }
    else {
      puVar1 = *(ulong **)(param_2 + -0x20);
    }
    if ((((*(ulong *)(param_1 + 2) == puVar1[2]) &&
         (*(long *)(param_1 + 4) == *(long *)(param_2 + 0x18))) &&
        (param_1[6] == *(uint *)(param_2 + 0x28))) && (param_1[7] == *(uint *)(param_2 + 0x2c))) {
      return param_1[8] == *(uint *)(param_2 + 0x14);
    }
  }
  return false;
}



/* Entry: 109d76734; end: 109d768bb;  */

void FUN_109d76734(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d767b4(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d768bc(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d768bc; end: 109d76963;  */

long * FUN_109d768bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d76908;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d76964(param_1,uVar1);
  func_0x000109d767b4(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d76908:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d76964; end: 109d76abb;  */

void FUN_109d76964(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d76a1c(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d76abc; end: 109d76b8f;  */

undefined8 FUN_109d76abc(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d76b90();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d76c88();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d76b70;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d76b70:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d76b90; end: 109d76c0f;  */

void FUN_109d76b90(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined8 uStack_e8;
  undefined4 auStack_a8 [16];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_a8);
  puVar6 = param_1 + 0xd;
  auStack_a8[0] = *param_1;
  puVar1 = auStack_a8;
  puVar5 = auStack_68;
  uVar4 = 0;
  FUN_109d76c10(puVar1,0,(ulong)auStack_a8 | 4,puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x000109d74504();
  puVar3 = puVar1;
  uStack_e8 = uVar4;
  FUN_109d35318(puVar1,&uStack_e8,puVar2,puVar5,*puVar6);
  func_0x000109d353f8(puVar1,uStack_e8,puVar3,puVar5);
  return;
}



/* Entry: 109d76c10; end: 109d76c87;  */

void FUN_109d76c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  func_0x000109d74504(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109d76c88; end: 109d76cff;  */

bool FUN_109d76c88(uint *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (*param_1 == (uint)*(ushort *)(param_2 + 2)) {
    uVar2 = *(ulong *)(param_2 + -0x10);
    if (((uint)uVar2 >> 1 & 1) == 0) {
      puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
    }
    else {
      puVar1 = *(ulong **)(param_2 + -0x20);
    }
    if (((*(ulong *)(param_1 + 2) == puVar1[2]) &&
        (*(long *)(param_1 + 10) == *(long *)(param_2 + 0x18))) &&
       (param_1[0xc] == *(uint *)(param_2 + 0x28))) {
      return param_1[0xd] == *(uint *)(param_2 + 0x2c);
    }
  }
  return false;
}



/* Entry: 109d76d00; end: 109d76e4f;  */

void FUN_109d76d00(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d76d80(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d76eec(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d76e50; end: 109d76eeb;  */

void FUN_109d76e50(uint *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  
  *param_1 = (uint)*(ushort *)(param_2 + 2);
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 2) = puVar2[2];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 4) = puVar2[3];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar2 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 6) = puVar2[4];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(ulong *)(param_1 + 8) = puVar1[5];
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* Entry: 109d76eec; end: 109d76f93;  */

long * FUN_109d76eec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d76f38;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d76f94(param_1,uVar1);
  func_0x000109d76d80(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d76f38:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d76f94; end: 109d770eb;  */

void FUN_109d76f94(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d7704c(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d770ec; end: 109d771db;  */

undefined8 FUN_109d770ec(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  lVar3 = param_1[2];
  if ((int)lVar3 == 0) {
    uVar5 = 0;
    plVar8 = (long *)0x0;
  }
  else {
    lVar9 = *param_1;
    uVar4 = param_2;
    FUN_109d77240();
    uVar2 = (int)lVar3 - 1;
    uVar10 = (uint)uVar4 & uVar2;
    plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
    uVar4 = param_2;
    FUN_109d771dc(param_2,*plVar8);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)0x0;
      iVar7 = 1;
      do {
        if (*plVar8 == -0x1000) {
          uVar5 = 0;
          if (plVar6 != (long *)0x0) {
            plVar8 = plVar6;
          }
          goto LAB_109d7714c;
        }
        plVar1 = plVar8;
        if (*plVar8 != -0x2000 || plVar6 != (long *)0x0) {
          plVar1 = plVar6;
        }
        uVar10 = uVar10 + iVar7 & uVar2;
        plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
        uVar4 = param_2;
        FUN_109d771dc(param_2,*plVar8);
        plVar6 = plVar1;
        iVar7 = iVar7 + 1;
      } while ((int)uVar4 == 0);
    }
    uVar5 = 1;
  }
LAB_109d7714c:
  *param_3 = (long)plVar8;
  return uVar5;
}



/* Entry: 109d771dc; end: 109d7723f;  */

bool FUN_109d771dc(uint *param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  uint uVar5;
  ulong *puVar6;
  char *pcVar7;
  uint uVar8;
  
  if (((ulong)param_2 | 0x1000) == 0xfffffffffffff000) {
    bVar2 = false;
  }
  else {
    uVar3 = (ulong)*param_1;
    func_0x000109d776e4(uVar3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 2),param_2);
    if ((uVar3 & 1) == 0) {
      if (*param_1 == (uint)*(ushort *)(param_2 + 2)) {
        puVar4 = (ulong *)(param_2 + -0x10);
        uVar3 = *puVar4;
        uVar5 = (uint)uVar3;
        if ((uVar5 >> 1 & 1) == 0) {
          puVar6 = puVar4 + -(uVar3 >> 2 & 0xf);
        }
        else {
          puVar6 = *(ulong **)(param_2 + -0x20);
        }
        if (*(ulong *)(param_1 + 2) == puVar6[2]) {
          pcVar7 = param_2;
          if (*param_2 != '\x0f') {
            if ((uVar5 >> 1 & 1) == 0) {
              puVar6 = puVar4 + -(uVar3 >> 2 & 0xf);
            }
            else {
              puVar6 = *(ulong **)(param_2 + -0x20);
            }
            pcVar7 = (char *)*puVar6;
          }
          if ((*(char **)(param_1 + 4) == pcVar7) && (param_1[6] == *(uint *)(param_2 + 0x10))) {
            if ((uVar5 >> 1 & 1) == 0) {
              puVar6 = puVar4 + -(uVar3 >> 2 & 0xf);
            }
            else {
              puVar6 = *(ulong **)(param_2 + -0x20);
            }
            if ((((*(ulong *)(param_1 + 8) == puVar6[1]) && (*(ulong *)(param_1 + 10) == puVar6[3]))
                && (*(long *)(param_1 + 0xc) == *(long *)(param_2 + 0x18))) &&
               ((param_1[0x10] == *(uint *)(param_2 + 0x28) &&
                (*(long *)(param_1 + 0xe) == *(long *)(param_2 + 0x20))))) {
              bVar1 = (byte)param_1[0x12];
              uVar8 = (uint)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
              if (((uint)bVar1 == (uVar8 & 0xff)) && (bVar1 != 0)) {
                if (param_1[0x11] != (uint)*(undefined8 *)(param_2 + 0x2c)) {
                  return false;
                }
              }
              else if ((uint)bVar1 != (uVar8 & 0xff)) {
                return false;
              }
              if (param_1[0x13] == *(uint *)(param_2 + 0x14)) {
                if ((uVar5 >> 1 & 1) == 0) {
                  puVar4 = puVar4 + -(uVar3 >> 2 & 0xf);
                }
                else {
                  puVar4 = *(ulong **)(param_2 + -0x20);
                }
                if (*(ulong *)(param_1 + 0x14) == puVar4[4]) {
                  return *(ulong *)(param_1 + 0x16) == puVar4[5];
                }
              }
            }
          }
        }
      }
      return false;
    }
    bVar2 = true;
  }
  return bVar2;
}



/* Entry: 109d77240; end: 109d773d3;  */

/* WARNING: Possible PIC construction at 0x000109d772e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d772e4) */

void FUN_109d77240(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  char *pcVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uStack_108;
  int aiStack_b8 [16];
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 == 0xd) {
    if (*(long *)(param_1 + 2) != 0) {
      piVar6 = param_1 + 8;
      pcVar7 = *(char **)piVar6;
      if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\r')) {
        uVar9 = *(ulong *)(pcVar7 + -0x10);
        if (((uint)uVar9 >> 1 & 1) == 0) {
          puVar8 = (ulong *)((long)(pcVar7 + -0x10) + -(uVar9 >> 2 & 0xf) * 8);
        }
        else {
          puVar8 = *(ulong **)(pcVar7 + -0x20);
        }
        if (puVar8[7] != 0) {
          FUN_109d2fb48(aiStack_b8);
          piVar1 = aiStack_b8;
          puVar5 = auStack_78;
          uVar4 = 0;
          goto SUB_109d7735c;
        }
      }
    }
  }
  FUN_109d2fb48(aiStack_b8);
  aiStack_b8[0] = *param_1;
  piVar1 = aiStack_b8;
  puVar5 = auStack_78;
  piVar6 = param_1 + 4;
  uVar4 = 0;
  FUN_109d773d4(piVar1,0,(ulong)aiStack_b8 | 4,puVar5,param_1 + 2,piVar6,param_1 + 6,param_1 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
SUB_109d7735c:
  piVar2 = piVar1;
  func_0x000109d74504();
  piVar3 = piVar1;
  uStack_108 = uVar4;
  FUN_109d73d64(piVar1,&uStack_108,piVar2,puVar5,*(undefined8 *)piVar6);
  func_0x000109d353f8(piVar1,uStack_108,piVar3,puVar5);
  return;
}



/* Entry: 109d773d4; end: 109d77477;  */

void FUN_109d773d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_1;
  uStack_60 = param_2;
  func_0x000109d74504(param_1,&uStack_60,param_3,param_4,*param_5);
  uStack_58 = uStack_60;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_58,uVar1,param_4,*param_6);
  FUN_109d77478(param_1,uStack_58,uVar2,param_4,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 109d77478; end: 109d77507;  */

void FUN_109d77478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d35318(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_48,uVar1,param_4,*param_6);
  FUN_109d77508(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d77508; end: 109d7757f;  */

void FUN_109d77508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  FUN_109d73d64(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109d77580; end: 109d777a7;  */

bool FUN_109d77580(uint *param_1,char *param_2)

{
  byte bVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  char *pcVar6;
  uint uVar7;
  
  if (*param_1 == (uint)*(ushort *)(param_2 + 2)) {
    puVar2 = (ulong *)(param_2 + -0x10);
    uVar4 = *puVar2;
    uVar3 = (uint)uVar4;
    if ((uVar3 >> 1 & 1) == 0) {
      puVar5 = puVar2 + -(uVar4 >> 2 & 0xf);
    }
    else {
      puVar5 = *(ulong **)(param_2 + -0x20);
    }
    if (*(ulong *)(param_1 + 2) == puVar5[2]) {
      pcVar6 = param_2;
      if (*param_2 != '\x0f') {
        if ((uVar3 >> 1 & 1) == 0) {
          puVar5 = puVar2 + -(uVar4 >> 2 & 0xf);
        }
        else {
          puVar5 = *(ulong **)(param_2 + -0x20);
        }
        pcVar6 = (char *)*puVar5;
      }
      if ((*(char **)(param_1 + 4) == pcVar6) && (param_1[6] == *(uint *)(param_2 + 0x10))) {
        if ((uVar3 >> 1 & 1) == 0) {
          puVar5 = puVar2 + -(uVar4 >> 2 & 0xf);
        }
        else {
          puVar5 = *(ulong **)(param_2 + -0x20);
        }
        if ((((*(ulong *)(param_1 + 8) == puVar5[1]) && (*(ulong *)(param_1 + 10) == puVar5[3])) &&
            (*(long *)(param_1 + 0xc) == *(long *)(param_2 + 0x18))) &&
           ((param_1[0x10] == *(uint *)(param_2 + 0x28) &&
            (*(long *)(param_1 + 0xe) == *(long *)(param_2 + 0x20))))) {
          bVar1 = (byte)param_1[0x12];
          uVar7 = (uint)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
          if (((uint)bVar1 == (uVar7 & 0xff)) && (bVar1 != 0)) {
            if (param_1[0x11] != (uint)*(undefined8 *)(param_2 + 0x2c)) {
              return false;
            }
          }
          else if ((uint)bVar1 != (uVar7 & 0xff)) {
            return false;
          }
          if (param_1[0x13] == *(uint *)(param_2 + 0x14)) {
            if ((uVar3 >> 1 & 1) == 0) {
              puVar2 = puVar2 + -(uVar4 >> 2 & 0xf);
            }
            else {
              puVar2 = *(ulong **)(param_2 + -0x20);
            }
            if (*(ulong *)(param_1 + 0x14) == puVar2[4]) {
              return *(ulong *)(param_1 + 0x16) == puVar2[5];
            }
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 109d777a8; end: 109d77943;  */

void FUN_109d777a8(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d77828(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d77a54(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d77944; end: 109d77a53;  */

void FUN_109d77944(uint *param_1,char *param_2)

{
  ulong *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong *puVar4;
  
  *param_1 = (uint)*(ushort *)(param_2 + 2);
  puVar1 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar4 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 2) = puVar4[2];
  pcVar2 = param_2;
  if (*param_2 != '\x0f') {
    if (((uint)*puVar1 >> 1 & 1) == 0) {
      puVar4 = puVar1 + -(*puVar1 >> 2 & 0xf);
    }
    else {
      puVar4 = *(ulong **)(param_2 + -0x20);
    }
    pcVar2 = (char *)*puVar4;
  }
  *(char **)(param_1 + 4) = pcVar2;
  param_1[6] = *(uint *)(param_2 + 0x10);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar4 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 8) = puVar4[1];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar4 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 10) = puVar4[3];
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  param_1[0x10] = *(uint *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x2c);
  param_1[0x11] = (uint)uVar3;
  *(char *)(param_1 + 0x12) = (char)((ulong)uVar3 >> 0x20);
  param_1[0x13] = *(uint *)(param_2 + 0x14);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar4 = puVar1 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x14) = puVar4[4];
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    puVar1 = puVar1 + -(*puVar1 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x16) = puVar1[5];
  return;
}



/* Entry: 109d77a54; end: 109d77afb;  */

long * FUN_109d77a54(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d77aa0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d77afc(param_1,uVar1);
  func_0x000109d77828(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d77aa0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d77afc; end: 109d77c53;  */

void FUN_109d77afc(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d77bb4(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d77c54; end: 109d77d27;  */

undefined8 FUN_109d77c54(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d77d28();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d77f28();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d77d08;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d77d08:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d77d28; end: 109d77dcf;  */

void FUN_109d77d28(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_158;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_c8);
  puVar1 = auStack_c8;
  puVar5 = auStack_88;
  puVar6 = (undefined8 *)(param_1 + 0x10);
  lVar7 = param_1 + 0x18;
  lVar8 = param_1 + 0x28;
  uVar4 = 0;
  FUN_109d77dd0(puVar1,0,auStack_c8,puVar5,param_1 + 8,puVar6,lVar7,lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x000109d74504();
  puVar3 = puVar1;
  uStack_158 = uVar4;
  FUN_109d73d64(puVar1,&uStack_158,puVar2,puVar5,*puVar6);
  FUN_109d77e84(puVar1,uStack_158,puVar3,puVar5,lVar7,lVar8,param_1 + 0x20,param_1 + 0x48,
                param_1 + 0x60,param_1 + 0x98);
  return;
}



/* Entry: 109d77dd0; end: 109d77e83;  */

void FUN_109d77dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = param_1;
  uStack_70 = param_2;
  func_0x000109d74504(param_1,&uStack_70,param_3,param_4,*param_5);
  uStack_68 = uStack_70;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_68,uVar1,param_4,*param_6);
  FUN_109d77e84(param_1,uStack_68,uVar2,param_4,param_7,param_8,param_9,param_10,param_11,param_12);
  return;
}



/* Entry: 109d77e84; end: 109d77f27;  */

void FUN_109d77e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_1;
  uStack_60 = param_2;
  FUN_109d35318(param_1,&uStack_60,param_3,param_4,*param_5);
  uStack_58 = uStack_60;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_58,uVar1,param_4,*param_6);
  FUN_109d74edc(param_1,uStack_58,uVar2,param_4,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 109d77f28; end: 109d780ff;  */

bool FUN_109d77f28(uint *param_1,char *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong *puVar5;
  
  if (*param_1 == (uint)*(ushort *)(param_2 + 2)) {
    puVar1 = (ulong *)(param_2 + -0x10);
    uVar3 = *puVar1;
    uVar2 = (uint)uVar3;
    if ((uVar2 >> 1 & 1) == 0) {
      puVar5 = puVar1 + -(uVar3 >> 2 & 0xf);
    }
    else {
      puVar5 = *(ulong **)(param_2 + -0x20);
    }
    if (*(ulong *)(param_1 + 2) == puVar5[2]) {
      pcVar4 = param_2;
      if (*param_2 != '\x0f') {
        if ((uVar2 >> 1 & 1) == 0) {
          puVar5 = puVar1 + -(uVar3 >> 2 & 0xf);
        }
        else {
          puVar5 = *(ulong **)(param_2 + -0x20);
        }
        pcVar4 = (char *)*puVar5;
      }
      if ((*(char **)(param_1 + 4) == pcVar4) && (param_1[6] == *(uint *)(param_2 + 0x10))) {
        if ((uVar2 >> 1 & 1) == 0) {
          puVar5 = puVar1 + -(uVar3 >> 2 & 0xf);
        }
        else {
          puVar5 = *(ulong **)(param_2 + -0x20);
        }
        if (((((*(ulong *)(param_1 + 8) == puVar5[1]) && (*(ulong *)(param_1 + 10) == puVar5[3])) &&
             (*(long *)(param_1 + 0xc) == *(long *)(param_2 + 0x18))) &&
            ((param_1[0x10] == *(uint *)(param_2 + 0x28) &&
             (*(long *)(param_1 + 0xe) == *(long *)(param_2 + 0x20))))) &&
           (param_1[0x11] == *(uint *)(param_2 + 0x14))) {
          if ((uVar2 >> 1 & 1) == 0) {
            puVar5 = puVar1 + -(uVar3 >> 2 & 0xf);
          }
          else {
            puVar5 = *(ulong **)(param_2 + -0x20);
          }
          if ((*(ulong *)(param_1 + 0x12) == puVar5[4]) &&
             (param_1[0x14] == *(uint *)(param_2 + 0x2c))) {
            if ((uVar2 >> 1 & 1) == 0) {
              puVar1 = puVar1 + -(uVar3 >> 2 & 0xf);
            }
            else {
              puVar1 = *(ulong **)(param_2 + -0x20);
            }
            if ((((*(ulong *)(param_1 + 0x16) == puVar1[5]) &&
                 (*(ulong *)(param_1 + 0x18) == puVar1[6])) &&
                (*(ulong *)(param_1 + 0x1a) == puVar1[7])) &&
               (((*(ulong *)(param_1 + 0x1c) == puVar1[8] &&
                 (*(ulong *)(param_1 + 0x1e) == puVar1[9])) &&
                ((*(ulong *)(param_1 + 0x20) == puVar1[10] &&
                 ((*(ulong *)(param_1 + 0x22) == puVar1[0xb] &&
                  (*(ulong *)(param_1 + 0x24) == puVar1[0xc])))))))) {
              return *(ulong *)(param_1 + 0x26) == puVar1[0xd];
            }
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 109d78100; end: 109d7824f;  */

void FUN_109d78100(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d78180(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d78454(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d78250; end: 109d78453;  */

void FUN_109d78250(uint *param_1,char *param_2)

{
  uint uVar1;
  ulong *puVar2;
  char *pcVar3;
  ulong *puVar4;
  undefined8 uVar5;
  
  *param_1 = (uint)*(ushort *)(param_2 + 2);
  puVar2 = (ulong *)(param_2 + -0x10);
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 2) = puVar4[2];
  pcVar3 = param_2;
  if (*param_2 != '\x0f') {
    if (((uint)*puVar2 >> 1 & 1) == 0) {
      puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
    }
    else {
      puVar4 = *(ulong **)(param_2 + -0x20);
    }
    pcVar3 = (char *)*puVar4;
  }
  *(char **)(param_1 + 4) = pcVar3;
  param_1[6] = *(uint *)(param_2 + 0x10);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 8) = puVar4[1];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 10) = puVar4[3];
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  uVar1 = *(uint *)(param_2 + 0x14);
  param_1[0x10] = *(uint *)(param_2 + 0x28);
  param_1[0x11] = uVar1;
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x12) = puVar4[4];
  param_1[0x14] = *(uint *)(param_2 + 0x2c);
  if (((uint)*(ulong *)(param_2 + -0x10) >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*(ulong *)(param_2 + -0x10) >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x16) = puVar4[5];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x18) = puVar4[6];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x1a) = puVar4[7];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x1c) = puVar4[8];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x1e) = puVar4[9];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x20) = puVar4[10];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x22) = puVar4[0xb];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar4 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar4 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x24) = puVar4[0xc];
  if (((uint)*puVar2 >> 1 & 1) == 0) {
    puVar2 = puVar2 + -(*puVar2 >> 2 & 0xf);
  }
  else {
    puVar2 = *(ulong **)(param_2 + -0x20);
  }
  *(ulong *)(param_1 + 0x26) = puVar2[0xd];
  return;
}



/* Entry: 109d78454; end: 109d784fb;  */

long * FUN_109d78454(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d784a0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d784fc(param_1,uVar1);
  func_0x000109d78180(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d784a0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d784fc; end: 109d78653;  */

void FUN_109d784fc(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d785b4(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d78654; end: 109d78727;  */

undefined8 FUN_109d78654(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d78728();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d78820();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d78708;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d78708:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d78728; end: 109d787a7;  */

void FUN_109d78728(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_e8;
  undefined4 auStack_a8 [16];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d2fb48(auStack_a8);
  puVar6 = (undefined8 *)(param_1 + 2);
  auStack_a8[0] = *param_1;
  puVar1 = auStack_a8;
  puVar5 = auStack_68;
  uVar4 = 0;
  FUN_109d787a8(puVar1,0,(ulong)auStack_a8 | 4,puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  FUN_109d70578();
  puVar3 = puVar1;
  uStack_e8 = uVar4;
  FUN_109d73d64(puVar1,&uStack_e8,puVar2,puVar5,*puVar6);
  func_0x000109d353f8(puVar1,uStack_e8,puVar3,puVar5);
  return;
}



/* Entry: 109d787a8; end: 109d7881f;  */

void FUN_109d787a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  FUN_109d70578(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d73d64(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109d78820; end: 109d78877;  */

bool FUN_109d78820(int *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((*param_1 == *(int *)(param_2 + 0x14)) && ((char)param_1[1] == *(char *)(param_2 + 0x2c))) {
    uVar2 = *(ulong *)(param_2 + -0x10);
    if (((uint)uVar2 >> 1 & 1) == 0) {
      puVar1 = (ulong *)(param_2 + -0x10) + -(uVar2 >> 2 & 0xf);
    }
    else {
      puVar1 = *(ulong **)(param_2 + -0x20);
    }
    return *(ulong *)(param_1 + 2) == puVar1[3];
  }
  return false;
}



/* Entry: 109d78878; end: 109d789b3;  */

void FUN_109d78878(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  func_0x000109d788f8(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d78a08(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d789b4; end: 109d78a07;  */

void FUN_109d789b4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  ulong uStack_18;
  
  uVar2 = *(ulong *)(param_1 + -0x10);
  uStack_20 = *(undefined4 *)(param_1 + 0x14);
  uStack_1c = *(undefined1 *)(param_1 + 0x2c);
  if (((uint)uVar2 >> 1 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + -0x10) + -(uVar2 >> 2 & 0xf);
  }
  else {
    puVar1 = *(ulong **)(param_1 + -0x20);
  }
  uStack_18 = puVar1[3];
  FUN_109d78728(&uStack_20);
  return;
}



/* Entry: 109d78a08; end: 109d78aaf;  */

long * FUN_109d78a08(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d78a54;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d78ab0(param_1,uVar1);
  func_0x000109d788f8(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d78a54:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d78ab0; end: 109d78c07;  */

void FUN_109d78ab0(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109d78b68(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109d78c08; end: 109d78cdb;  */

undefined8 FUN_109d78c08(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = param_1[2];
  if ((int)lVar2 == 0) {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar5 = *param_1;
    uVar4 = param_2;
    FUN_109d78cdc();
    iVar8 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar1 = (uint)uVar4 & (int)lVar2 - 1U;
      puVar7 = (ulong *)(lVar5 + (ulong)uVar1 * 8);
      uVar4 = *puVar7;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar4 = param_2;
        FUN_109d78f70();
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d78cbc;
        }
        uVar4 = *puVar7;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar7 = puVar6;
      }
      uVar4 = (ulong)(uVar1 + iVar8);
      iVar8 = iVar8 + 1;
      puVar6 = puVar7;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6;
    }
  }
LAB_109d78cbc:
  *param_3 = (long)puVar7;
  return uVar3;
}



/* Entry: 109d78cdc; end: 109d78d87;  */

void FUN_109d78cdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_108;
  undefined8 uStack_b8;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uStack_ac = 0;
    uStack_b8 = 0;
  }
  else {
    uStack_ac = *(undefined4 *)(param_1 + 2);
    uStack_b8 = param_1[3];
  }
  FUN_109d2fb48(&uStack_a8);
  puVar8 = param_1 + 5;
  uStack_a8 = *param_1;
  puVar1 = &uStack_a8;
  puVar5 = auStack_68;
  puVar6 = &uStack_ac;
  puVar7 = &uStack_b8;
  uVar4 = 0;
  FUN_109d78d88(puVar1,0,auStack_a0,puVar5,param_1 + 1,puVar6,puVar7,puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x000109d74504();
  puVar3 = puVar1;
  uStack_108 = uVar4;
  FUN_109d78e18(puVar1,&uStack_108,puVar2,puVar5,*puVar6);
  func_0x000109d78ef8(puVar1,uStack_108,puVar3,puVar5,puVar7,puVar8);
  return;
}


